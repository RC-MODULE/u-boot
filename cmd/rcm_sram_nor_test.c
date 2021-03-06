#include <common.h>
#include <console.h>
#include <flash.h>
#include <mtd/cfi_flash.h>
#include <asm/tlb47x.h>

DECLARE_GLOBAL_DATA_PTR;

#define SRAM_BANK_SIZE		0x01000000	// 16m
#define SRAM_PHYS_ADDR_MCIF	0x0400000000ull
#define SRAM_BANK_COUNT_MCIF	4		// SRAM EM2 (8GB) 

#define NOR_SECT_SIZE		0x40000

#define NOR_BANK_SIZE		0x10000000	// 256m
#define NOR_PHYS_ADDR_MCIF	0x0600000000ull
#define NOR_BANK_COUNT_MCIF	2		// SRAM EM3 (8GB)
#define NOR_PHYS_ADDR_LSIF	0x1020000000ull
#define NOR_BANK_COUNT_LSIF	1		// SRAM EM3 (128MB)

#define SRAM_PHYS_ADDR	SRAM_PHYS_ADDR_MCIF	// sram - test for mcif mode only
#define SRAM_BANK_COUNT	SRAM_BANK_COUNT_MCIF
#define NOR_PHYS_ADDR	NOR_PHYS_ADDR_MCIF	// nor - full test for mcif mode
#define NOR_BANK_COUNT	NOR_BANK_COUNT_MCIF


#define MAX_NOR_ERRORS		3		// NOR maximum error before return
/*#define TEST_WARNING*/			// y or n before nor test
/*#define LSIF_CONFIG*/				// it's very optionally,need properly settings dts files,and it's work for 1 bank only
#if defined LSIF_CONFIG
	#undef NOR_PHYS_ADDR
	#define NOR_PHYS_ADDR	NOR_PHYS_ADDR_LSIF
	#undef NOR_BANK_COUNT
	#define NOR_BANK_COUNT	NOR_BANK_COUNT_LSIF
#endif

static int verbose_sram = 0, verbose_nor = 0;

static int conv_size_to_tlb( unsigned int size )
{
	switch( size ) {
		case 0x00001000: return TLBSID_4K;
		case 0x00004000: return TLBSID_16K;
		case 0x00010000: return TLBSID_64K;
		case 0x00100000: return TLBSID_1M;
		case 0x01000000: return TLBSID_16M;
		case 0x10000000: return TLBSID_256M;
		case 0x40000000: return TLBSID_1G;
		default: return TLBSID_ERR;
	}

}

static uint32_t get_cpu_addr( uint64_t phys_addr, uint32_t step )
{
	uint32_t ea;
	uint32_t tlb[3] = { 0 };
	tlb_entr_0* tlb0 = (tlb_entr_0*)&tlb[0];
	tlb_entr_1* tlb1 = (tlb_entr_1*)&tlb[1];

	for ( ea = 0x0; ea + step > ea; ea += step ) {
		if( _read_tlb_entry(ea, tlb, 0) ) {
			uint64_t pa = ((uint64_t)(tlb1->rpn) << 12) + ((uint64_t)(tlb1->erpn) << 32);
			if( pa == phys_addr && tlb0->dsiz == conv_size_to_tlb( step ) )
				return tlb0->epn << 12;
		}
	}
	return 0;
}

static int fill_bank_as_addr( uint32_t* ptr, unsigned int len, uint32_t* cssum )
{
	unsigned int i;
	uint32_t cstmp = 0;

	for( i = 0; i < len; i++ ) {
		*ptr = (uint32_t)ptr;
		cstmp += *ptr;
		if( ( i % 0x100000 ) == 0 )
			printf( "Writing to %08x...\n", (uint32_t)ptr );
		ptr++;
	}
	if( cssum ) *cssum += cstmp;
	return 0;
}

static int fill_bank_as_two_half_rand( uint32_t* ptr, unsigned int len, uint32_t* cssum )
{
	unsigned int i;
	uint32_t cstmp = 0;

	len /= 2;
	for( i = 0; i < len; i++ ) {
		*ptr = rand();
		*(ptr+len) = *ptr;
		cstmp += *ptr;
		if( ( i % 0x80000 ) == 0 )
			printf( "Writing to %08x... and %08x...\n", (uint32_t)ptr, (uint32_t)(ptr+len) );
		ptr++;
	}
	if( cssum ) *cssum += cstmp;
	return 0;
}

static uint32_t* check_bank_as_addr( uint32_t* ptr, unsigned int len, uint32_t* cssum )
{
	unsigned int i;
	uint32_t cstmp = 0;

	for( i = 0; i < len; i++ ) {
		if( *ptr != (uint32_t)ptr )
			return ptr;
		cstmp += *ptr;
		if( ( i % 0x100000 ) == 0 )
			printf( "Checking at %08x...\n", (uint32_t)ptr );
		ptr++;
	}
	if( cssum ) *cssum += cstmp;
	return NULL;
}

static uint32_t* check_bank_as_two_half_rand( uint32_t* ptr, unsigned int len, uint32_t* cssum )
{
	unsigned int i;
	uint32_t cstmp = 0;

	len /= 2;

	for( i = 0; i < len; i++ ) {
		if( *ptr != *(ptr+len) )
			return ptr;
		cstmp += *ptr;
		if( ( i % 0x80000 ) == 0 )
			printf( "Checking at %08x... and %08x...\n", (uint32_t)ptr, (uint32_t)(ptr+len) );
		ptr++;
	}
	if( cssum ) *cssum += cstmp;
	return NULL;
}

static uint32_t fill_buf32_as_rand( uint32_t* buf, unsigned int len )
{
	unsigned int i;
	uint32_t crc = 0;
	for( i = 0; i < len; i++ ) {
		buf[i] = rand();
		crc += buf[i];
	}
	return crc;
}

static int do_sram_test_info( uint32_t** sram_banks_addr )
{
	unsigned int bank;
	uint64_t pa = SRAM_PHYS_ADDR;
	uint32_t ea;

	printf( "SRAM mapping:\n" );

	for ( bank = 0; bank < SRAM_BANK_COUNT; bank++ ) {
		ea = get_cpu_addr( pa, SRAM_BANK_SIZE );
		if( ea == 0 ) {
			printf( "error for SRAM bank %u\n", bank );
			return -1;
		}
		printf( "bank %u: physical %016llx, logical %08x\n", bank, pa, ea );
		pa += SRAM_BANK_SIZE;
		if( sram_banks_addr )
			sram_banks_addr[bank] = (uint32_t*)ea;
	}
	return 0;
}

static int do_nor_test_info( uint32_t** nor_banks_addr )
{
	unsigned int bank;
	uint64_t pa = NOR_PHYS_ADDR;
	uint32_t ea;
	flash_info_t* info = NULL;

	printf( "NOR information:\n" );

	for( bank = 0; bank < NOR_BANK_COUNT; bank++ ) {
		ea = get_cpu_addr( pa, NOR_BANK_SIZE );
		if( ea == 0 ) {
			printf( "error for NOR bank %u\n", bank );
			return -1;
		}
		printf( "bank %u:\n\t mapping: physical %016llx, logical %08x\n", bank, pa, ea );
		pa += NOR_BANK_SIZE;
		if( nor_banks_addr )
			nor_banks_addr[bank] = (uint32_t*)ea;
		if( !nor_banks_addr ) {
			info = &flash_info[bank];
			printf( "\t parameters: bank size=%08lx,erase units=%08x,id=%08lx\n", info->size, info->sector_count, info->flash_id );
		}
	}
	return 0;
}

static int do_sram_test_run( bool rand )
{
	unsigned int bank;
	uint32_t* ea[SRAM_BANK_COUNT];
	uint32_t *bad;
	uint32_t csw = 0, csr = 0;

	printf( "[INFO] SRAM test starts:\n" );

	srand(get_ticks());

	if( do_sram_test_info( ea ) )
		return 0;

	for( bank = 0; bank < SRAM_BANK_COUNT; bank++ ) {
		printf( "Sram bank %u:\n", bank );
		if( (rand ? fill_bank_as_two_half_rand : fill_bank_as_addr)( ea[bank], SRAM_BANK_SIZE/4, &csw ) )
			return 0;
	}

	for( bank = 0; bank < SRAM_BANK_COUNT; bank++ ) {
		printf( "Sram bank %u:\n", bank );
		bad = (rand ? check_bank_as_two_half_rand : check_bank_as_addr)( ea[bank], SRAM_BANK_SIZE/4, &csr );
		if( bad ) {
			printf( "[ERROR] SRAM test error at %08x\n", (uint32_t)bad );
			return 0;
		}
	}
	printf( "[INFO] SRAM test passed\n" );
	if( verbose_sram )
		printf( "Checksum: %08x-%08x\n", csw, csr );
	return 0;
}

static int nor_test_warning( void )
{
#ifdef TEST_WARNING
	static int enable = 0;
	if( enable )
		return 1;
	
	printf( "Attention!\n" \
		"This test will erase data in the verified sectors.\n" \
		"Do you want begin test? (press y or n)\n" );
	while(1) {
		switch(getc()) {
		case 'y': return ( enable = 1 );
		case 'n': return 0;
		}
	}
#else
	return 1;
#endif
}

static int nor_test_sector( flash_info_t* info, unsigned int bank, unsigned int sect )
{
	static uint32_t buf[NOR_SECT_SIZE/4];
	uint32_t csw, csr;
	uint32_t* bwr;
	int err;
	unsigned int nb;

	csw = fill_buf32_as_rand( buf, NOR_SECT_SIZE/4 );
	csr = 0;

	bwr = (uint32_t*)info->start[sect];
	if( verbose_nor ) printf( "Flash erase...\n" );
	flash_erase (info, sect, sect );
	if( verbose_nor ) printf( "Flash protect...\n" );
	flash_protect( FLAG_PROTECT_CLEAR, (ulong)bwr, (ulong)bwr+NOR_SECT_SIZE-1, info );
	if( verbose_nor ) printf( "Flash write...\n" );
	if( ( err = flash_write( (char*)buf, (ulong)bwr, NOR_SECT_SIZE ) ) != 0 ) {
		printf( "[ERROR] Write to flash failed,sector %u(%08x), error code %d\n", sect, (uint32_t)bwr, err );
		return err;
	}
	//printf( "\n" );

	for( nb = 0; nb < NOR_SECT_SIZE/4; nb++ )
	{
		if( *bwr != buf[nb] ) {
			printf( "[ERROR] Compare flash data failed,sector %u(%08x), data %x!=%x\n", sect, (uint32_t)bwr, *bwr, buf[nb] );
			return ERR_INVAL;
		}
		//if( verbose_nor ) printf( "Compare at %u: %x-%x\n", nb, *bwr, buf[nb] );
		csr += *bwr;
		bwr++;
	}
	printf( "Bank %u, sector %u(%08lx): compare data OK\n", bank, sect, info->start[sect] );
	if( verbose_nor )
		printf( "Checksum: %08x-%08x\n", csw, csr );
	return 0;
}

static int do_nor_test_run( unsigned int check_bank, unsigned int check_sect_first, unsigned int check_sect_end )
{
	unsigned int bank, bank_start = 0, bank_end = NOR_BANK_COUNT-1;
	unsigned int sect, sect_start, sect_end;
	int err;
	uint32_t* ea[NOR_BANK_COUNT];
	flash_info_t* info = NULL;

	printf( "[INFO] NOR test starts:\n" );

	srand(get_ticks());

	if( do_nor_test_info( ea ) )
		return 0;

	if( !nor_test_warning() )
		return 0;

	if( check_bank != UINT_MAX ) {
		if( check_bank < NOR_BANK_COUNT ) {
			bank_start = bank_end = check_bank;
		}
		else {
			printf( "[ERROR] Too many bank number\n" );
			return 0;
		}
	}

	for( bank = bank_start; bank <= bank_end; bank++ )
	{
		info = &flash_info[bank];

		if( check_sect_first != UINT_MAX && check_sect_end != UINT_MAX ) {
			sect_start = check_sect_first;
			sect_end = check_sect_end;
			if( sect_end >= info->sector_count || sect_start > sect_end ) {
				printf( "[ERROR] Uncorrect sector number\n" );
				return 0;
			}
		}
		else {
			sect_start = 0;
			sect_end = info->sector_count-1;
		}
		flash_set_verbose(0);
		for( sect = sect_start; sect <= sect_end; sect++ )
		{
			//printf( "Check for bank %u,sector %u\n", bank, sect ); continue;
			err = 0;
			while( nor_test_sector( info, bank, sect) ) {
				if( ++err >= MAX_NOR_ERRORS ) {
					printf( "[ERROR] NOR test failed,exceed maximum errors number\n" );
					return 0;
				}
			}

		}
	}
	printf( "[INFO] NOR test passed\n" );
	return 0;
}

static int do_verbose( const char* on_off, int* verbose) {
	if( !strcmp( on_off, "on" ) ) {
		*verbose = 1;
		return 0;
	}
	else if( !strcmp( on_off, "off" ) ) {
		*verbose = 0;
		return 0;
	}
	return CMD_RET_USAGE;
}

static int do_sram_test(cmd_tbl_t * cmdtp, int flag, int argc, char * const argv[])
{
	if ( argc == 2 && !strcmp( argv[1], "info" ) ) {
		do_sram_test_info(NULL);
		return 0;
	}
	else if( argc == 2 && !strcmp( argv[1], "run" ) ) {
		do_sram_test_run( false );
		return 0;
	}
	else if( argc == 3 && !strcmp( argv[1], "verbose" ) )
		return do_verbose( argv[2], &verbose_sram );
	else if( argc == 3 && !strcmp( argv[1], "run" ) && !strcmp( argv[2], "rand" ) ) {
		do_sram_test_run( true );
		return 0;
	}
	else if( argc == 2 && !strcmp( argv[1], "version" ) ) {
		printf( "SRAM test 1.0.1\n" );
		return 0;
	}
	return CMD_RET_USAGE;
}

static int do_nor_test(cmd_tbl_t * cmdtp, int flag, int argc, char * const argv[])
{
	if ( argc == 2 && !strcmp( argv[1], "info" ) ) {
		do_nor_test_info(NULL);
		return 0;
	}
	else if( argc == 2 && !strcmp( argv[1], "run" ) ) {
		do_nor_test_run( UINT_MAX, UINT_MAX, UINT_MAX );
		return 0;
	}
	else if( argc == 3 && !strcmp( argv[1], "verbose" ) )
		return do_verbose( argv[2], &verbose_nor );
	else if( argc == 3 || argc == 5 ) {
		unsigned long bank;
		if( strict_strtoul( argv[2], 10, &bank ) < 0 ) {
			printf( "Wrong bank number\n" );
			return 0;
		}
		if( argc == 3 ) {
			do_nor_test_run( (unsigned int)bank, UINT_MAX, UINT_MAX );
			return 0;
		}
		if( argc == 5 ) {
			unsigned long sec_first, sec_end;
			if( strict_strtoul( argv[3], 10, &sec_first ) < 0 || strict_strtoul( argv[4], 10, &sec_end ) < 0 ) {
				printf( "Wrong sector number\n" );
				return 0;
			}
			do_nor_test_run( (unsigned int)bank, (unsigned int)sec_first, (unsigned int)sec_end );
			return 0;
		}
	}
	else if( argc == 2 && !strcmp( argv[1], "version" ) ) {
		printf( "NOR test 1.0.1\n" );
		return 0;
	}
	return CMD_RET_USAGE;
}

U_BOOT_CMD(
	sramtest, 3, 0, do_sram_test,
	"Static RAM test for MB115 board",
	"info              - mapping information\n" \
	"sramtest verbose [on off]  - show advanced information\n" \
	"sramtest run               - sram words are 32 bits wide and are filled with address values\n" \
	"sramtest run rand          - the two halves of the sram bank are filled with the same random values and compared\n" \
	"sramtest version           - output version information"
);

U_BOOT_CMD(
	nortest, 5, 0, do_nor_test,
	"Flash NOR test for MB115 board",
	"info                  - mapping and flash information\n" \
	"nortest verbose [on off]      - set advanced information\n" \
	"nortest run                   - check for all banks and sectors,erase, ramdom values write,read and compare\n" \
	"nortest run #bank             - the same check for #bank only (0,1...)\n" \
	"nortest run #bank #start #end - the same check for #bank and sectors from #start(0,1...) to #end only\n" \
	"nortest version               - output version information"
);
