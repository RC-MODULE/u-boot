/**
 *
 */

#ifndef __DDR_DDR34LMC_REG_ACCESS_H__
#define __DDR_DDR34LMC_REG_ACCESS_H__


#include "reg.h"
#include "../../mivem_regs_access.h"


REG_READ_DCR( ddr34lmc, DDR34LMC_MCSTAT, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_MCOPT1, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_MCOPT1, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_MCOPT2, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_MCOPT2, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_IOCNTL, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_IOCNTL, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_PHYCNTL, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_PHYCNTL, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_PHYSTAT, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_PHYSTAT, 32 ) // Only upper 16 bits

REG_READ_DCR( ddr34lmc, DDR34LMC_PHYMASK, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_PHYMASK, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_CFGR0, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_CFGR0, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_CFGR1, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_CFGR1, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_CFGR2, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_CFGR2, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_CFGR3, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_CFGR3, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_RHZEN, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_RHZEN, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_INITSEQ0, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_INITSEQ0, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_INITSEQ1, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_INITSEQ1, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_INITSEQ2, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_INITSEQ2, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_INITSEQ3, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_INITSEQ3, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_INITSEQ4, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_INITSEQ4, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_INITSEQ5, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_INITSEQ5, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_INITCMD0, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_INITCMD0, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_INITCMD1, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_INITCMD1, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_INITCMD2, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_INITCMD2, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_INITCMD3, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_INITCMD3, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_INITCMD4, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_INITCMD4, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_INITCMD5, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_INITCMD5, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_SDTR0, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_SDTR0, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_SDTR1, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_SDTR1, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_SDTR2, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_SDTR2, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_SDTR3, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_SDTR3, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_SDTR4, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_SDTR4, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_SDTR5, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_SDTR5, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_DBG0, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_SMR0, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_SMR0, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_SMR1, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_SMR1, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_SMR2, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_SMR2, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_SMR3, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_SMR3, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_ODTR0, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_ODTR0, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_ODTR1, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_ODTR1, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_ODTR2, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_ODTR2, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_ODTR3, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_ODTR3, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_SCRUB_CNTL, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_SCRUB_CNTL, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_SCRUB_INT, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_SCRUB_INT, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_SCRUB_CUR, 32 )

#ifdef DDR34LMC_USE_DDR4
REG_READ_DCR( ddr34lmc, DDR34LMC_SCRUB_CUR_EXT, 32 )
#endif



REG_READ_DCR( ddr34lmc, DDR34LMC_CALSTAT, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_CALSTAT, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_T_PHYUPD0, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_T_PHYUPD0, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_T_PHYUPD1, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_T_PHYUPD1, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_T_PHYUPD2, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_T_PHYUPD2, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_T_PHYUPD3, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_T_PHYUPD3, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_ECCERR_PORT0, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_ECCERR_PORT0, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_ECCERR_PORT1, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_ECCERR_PORT1, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_ECCERR_PORT2, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_ECCERR_PORT2, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_ECCERR_PORT3, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_ECCERR_PORT3, 32 )

inline static void ddr34lmc_dcr_clear_DDR34LMC_ECCERR_PORT0( uint32_t const base_addr, uint32_t const value ) 
{
    mtdcrx( base_addr + DDR34LMC_ECCERR_PORT0_clear, value );
}

inline static void ddr34lmc_dcr_clear_DDR34LMC_ECCERR_PORT1( uint32_t const base_addr, uint32_t const value ) 
{
    mtdcrx( base_addr + DDR34LMC_ECCERR_PORT1_clear, value );
}

inline static void ddr34lmc_dcr_clear_DDR34LMC_ECCERR_PORT2( uint32_t const base_addr, uint32_t const value ) 
{
    mtdcrx( base_addr + DDR34LMC_ECCERR_PORT2_clear, value );
}

inline static void ddr34lmc_dcr_clear_DDR34LMC_ECCERR_PORT3( uint32_t const base_addr, uint32_t const value ) 
{
    mtdcrx( base_addr + DDR34LMC_ECCERR_PORT3_clear, value );
}

REG_READ_DCR( ddr34lmc, DDR34LMC_CE_TCNT_CLR, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_CE_TCNT_CLR, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_CE_TCNT_SET, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_CE_TCNT_SET, 32 )

REG_READ_DCR( ddr34lmc, DDR34LMC_ECCERR_ADDR_EXT, 32 )
REG_WRITE_DCR( ddr34lmc, DDR34LMC_ECCERR_ADDR_EXT, 32 )



#endif // __DDR_DDR34LMC_REG_ACCESS_H__