/**
 *
 */

#ifndef __DDR_MCLFIR_REG_ACCESS_H__
#define __DDR_MCLFIR_REG_ACCESS_H__


#include "reg.h"
#include "../../mivem_regs_access.h"


REG_READ_DCR( mclfir, MCLFIR_MC_ERR0, 32 )

REG_READ_DCR( mclfir, MCLFIR_MC_ERR1, 32 )

REG_READ_DCR( mclfir, MCLFIR_MC_ERR_MSK0, 32 )

REG_READ_DCR( mclfir, MCLFIR_MC_ERR_MSK1, 32 )

REG_READ_DCR( mclfir, MCLFIR_MC_ERR_ACTION0, 32 )
REG_WRITE_DCR( mclfir, MCLFIR_MC_ERR_ACTION0, 32 )

REG_READ_DCR( mclfir, MCLFIR_MC_ERR_ACTION1, 32 )
REG_WRITE_DCR( mclfir, MCLFIR_MC_ERR_ACTION1, 32 )

REG_READ_DCR( mclfir, MCLFIR_MC_ERR_WOF0, 32 )
REG_WRITE_DCR( mclfir, MCLFIR_MC_ERR_WOF0, 32 )

REG_READ_DCR( mclfir, MCLFIR_MC_ERR_WOF1, 32 )
REG_WRITE_DCR( mclfir, MCLFIR_MC_ERR_WOF1, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_ERR_AND0, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_ERR_AND1, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_ERR_OR0, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_ERR_OR1, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_ERR_MSK_AND0, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_ERR_MSK_AND1, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_ERR_MSK_OR0, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_ERR_MSK_OR1, 32 )

REG_READ_DCR( mclfir, MCLFIR_MC_LFIR, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_LFIR_AND, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_LFIR_OR, 32 )

REG_READ_DCR( mclfir, MCLFIR_MC_LFIR_MSK, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_LFIR_MSK_AND, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_LFIR_MSK_OR, 32 )

REG_READ_DCR( mclfir, MCLFIR_MC_CONSOL_STAT, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_CONSOL_STAT_AND, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_CONSOL_STAT_OR, 32 )

REG_READ_DCR( mclfir, MCLFIR_MC_CONSOL_STAT_TRIG, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_CONSOL_STAT_TRIG_AND, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_CONSOL_STAT_TRIG_OR, 32 )

REG_READ_DCR( mclfir, MCLFIR_MC_CONSOL_STAT_MSK, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_CONSOL_STAT_MSK_AND, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_CONSOL_STAT_MSK_OR, 32 )

REG_READ_DCR( mclfir, MCLFIR_MC_CONSOL_STATSUM, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_CONSOL_STATSUM_AND, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_CONSOL_STATSUM_OR, 32 )

REG_READ_DCR( mclfir, MCLFIR_MC_CONSOL_STATSUM_MSK, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_CONSOL_STATSUM_MSK_AN, 32 )

REG_WRITE_DCR( mclfir, MCLFIR_MC_CONSOL_STATSUM_MSK_OR, 32 )


#endif // __DDR_MCLFIR_REG_ACCESS_H__