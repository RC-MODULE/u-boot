#include <common.h>
#include <asm/tlb47x.h>


int checkcpu(void)
{
    uint pvr = get_pvr();

    puts("CPU:   ");
    if(pvr == 0x7ff520c0)
        printf("RC Module PowerPC 476FP core\n");
    else
        printf("Unknown, PVR: %08X\n", pvr);

    return 0;
}

void tlb47x_inval(uint32_t cpu_adr, tlb_size_id tlb_sid)
{
	tlb_entr_data_0 tlb_0;
	tlb_0.data = 0x00000000;
	tlb_0.entr.epn = (cpu_adr >> 12);
	tlb_0.entr.v = 0;
	tlb_0.entr.ts = 0;
	tlb_0.entr.dsiz = tlb_sid;
		
	_invalidate_tlb_entry(tlb_0.data);
}


static void tlb47x_map_internal(uint64_t physical, uint32_t logical, uint32_t wimg, tlb_size_id size, tlb_rwx_mode smode, tlb_rwx_mode umode)
{
	tlb_entr_data_0 tlb_0;
	tlb_0.data = 0x00000000;
    tlb_0.entr.epn = (logical >> 12); 
    tlb_0.entr.v = 1;
    tlb_0.entr.ts = 0;
    tlb_0.entr.dsiz = size; 

	tlb_entr_data_1 tlb_1;
	tlb_1.data = 0x00000000;
    tlb_1.entr.rpn = (uint32_t)((physical>> 12) & 0xFFFFFFFF);
    tlb_1.entr.erpn = (physical>>32) & 0x3F;

	tlb_entr_data_2 tlb_2;
	tlb_2.data = 0x00000000;
    tlb_2.entr.il1i = 1;
    tlb_2.entr.il1d = 1;
    tlb_2.entr.u = 0;
    tlb_2.entr.wimg = wimg;
    tlb_2.entr.e = 0;  // BE   
    tlb_2.entr.uxwr = umode;     
    tlb_2.entr.sxwr = smode;     
	
	_write_tlb_entry(tlb_0.data, tlb_1.data, tlb_2.data, 0); 
}

void tlb47x_map(uint64_t physical, uint32_t logical, tlb_size_id size, tlb_rwx_mode smode)
{
    tlb47x_map_internal(physical, logical, 0x4, size, smode, TLB_MODE_NONE);
}

void tlb47x_map_nocache(uint64_t physical, uint32_t logical, tlb_size_id size, tlb_rwx_mode smode)
{
    tlb47x_map_internal(physical, logical, 0x2, size, smode, TLB_MODE_NONE);    
}
