
/*
 *  Exception handlers
 */

#ifndef _DEFS_H
#define _DEFS_H

#include <asm/types.h>
#include "defs_s.h"

/*
 * EMIC
 */
#define rgDENALI_CTL_00(base) (*(volatile u32*)(base + DENALI_CTL_00))
#define rgDENALI_CTL_01(base) (*(volatile u32*)(base + DENALI_CTL_01))
#define rgDENALI_CTL_02(base) (*(volatile u32*)(base + DENALI_CTL_02))
#define rgDENALI_CTL_03(base) (*(volatile u32*)(base + DENALI_CTL_03))
#define rgDENALI_CTL_04(base) (*(volatile u32*)(base + DENALI_CTL_04))
#define rgDENALI_CTL_05(base) (*(volatile u32*)(base + DENALI_CTL_05))
#define rgDENALI_CTL_06(base) (*(volatile u32*)(base + DENALI_CTL_06))
#define rgDENALI_CTL_07(base) (*(volatile u32*)(base + DENALI_CTL_07))
#define rgDENALI_CTL_08(base) (*(volatile u32*)(base + DENALI_CTL_08))
#define rgDENALI_CTL_09(base) (*(volatile u32*)(base + DENALI_CTL_09))
#define rgDENALI_CTL_10(base) (*(volatile u32*)(base + DENALI_CTL_10))
#define rgDENALI_CTL_11(base) (*(volatile u32*)(base + DENALI_CTL_11))
#define rgDENALI_CTL_12(base) (*(volatile u32*)(base + DENALI_CTL_12))
#define rgDENALI_CTL_13(base) (*(volatile u32*)(base + DENALI_CTL_13))
#define rgDENALI_CTL_14(base) (*(volatile u32*)(base + DENALI_CTL_14))
#define rgDENALI_CTL_15(base) (*(volatile u32*)(base + DENALI_CTL_15))
#define rgDENALI_CTL_16(base) (*(volatile u32*)(base + DENALI_CTL_16))
#define rgDENALI_CTL_17(base) (*(volatile u32*)(base + DENALI_CTL_17))
#define rgDENALI_CTL_18(base) (*(volatile u32*)(base + DENALI_CTL_18))
#define rgDENALI_CTL_19(base) (*(volatile u32*)(base + DENALI_CTL_19))
#define rgDENALI_CTL_20(base) (*(volatile u32*)(base + DENALI_CTL_20))
#define rgDENALI_CTL_21(base) (*(volatile u32*)(base + DENALI_CTL_21))
#define rgDENALI_CTL_22(base) (*(volatile u32*)(base + DENALI_CTL_22))
#define rgDENALI_CTL_23(base) (*(volatile u32*)(base + DENALI_CTL_23))
#define rgDENALI_CTL_24(base) (*(volatile u32*)(base + DENALI_CTL_24))
#define rgDENALI_CTL_25(base) (*(volatile u32*)(base + DENALI_CTL_25))
#define rgDENALI_CTL_26(base) (*(volatile u32*)(base + DENALI_CTL_26))
#define rgDENALI_CTL_27(base) (*(volatile u32*)(base + DENALI_CTL_27))
#define rgDENALI_CTL_28(base) (*(volatile u32*)(base + DENALI_CTL_28))
#define rgDENALI_CTL_29(base) (*(volatile u32*)(base + DENALI_CTL_29))
#define rgDENALI_CTL_30(base) (*(volatile u32*)(base + DENALI_CTL_30))
#define rgDENALI_CTL_31(base) (*(volatile u32*)(base + DENALI_CTL_31))
#define rgDENALI_CTL_32(base) (*(volatile u32*)(base + DENALI_CTL_32))
#define rgDENALI_CTL_33(base) (*(volatile u32*)(base + DENALI_CTL_33))
#define rgDENALI_CTL_34(base) (*(volatile u32*)(base + DENALI_CTL_34))
#define rgDENALI_CTL_35(base) (*(volatile u32*)(base + DENALI_CTL_35))
#define rgDENALI_CTL_36(base) (*(volatile u32*)(base + DENALI_CTL_36))
#define rgDENALI_CTL_37(base) (*(volatile u32*)(base + DENALI_CTL_37))
#define rgDENALI_CTL_38(base) (*(volatile u32*)(base + DENALI_CTL_38))
#define rgDENALI_CTL_39(base) (*(volatile u32*)(base + DENALI_CTL_39))
#define rgDENALI_CTL_40(base) (*(volatile u32*)(base + DENALI_CTL_40))
#define rgDENALI_CTL_41(base) (*(volatile u32*)(base + DENALI_CTL_41))
#define rgDENALI_CTL_42(base) (*(volatile u32*)(base + DENALI_CTL_42))
#define rgDENALI_CTL_43(base) (*(volatile u32*)(base + DENALI_CTL_43))
#define rgDENALI_CTL_44(base) (*(volatile u32*)(base + DENALI_CTL_44))
#define rgDENALI_CTL_45(base) (*(volatile u32*)(base + DENALI_CTL_45))
#define rgDENALI_CTL_46(base) (*(volatile u32*)(base + DENALI_CTL_46))
#define rgDENALI_CTL_47(base) (*(volatile u32*)(base + DENALI_CTL_47))
#define rgDENALI_CTL_48(base) (*(volatile u32*)(base + DENALI_CTL_48))
#define rgDENALI_CTL_49(base) (*(volatile u32*)(base + DENALI_CTL_49))
#define rgDENALI_CTL_50(base) (*(volatile u32*)(base + DENALI_CTL_50))
#define rgDENALI_CTL_51(base) (*(volatile u32*)(base + DENALI_CTL_51))
#define rgDENALI_CTL_52(base) (*(volatile u32*)(base + DENALI_CTL_52))
#define rgDENALI_CTL_53(base) (*(volatile u32*)(base + DENALI_CTL_53))
#define rgDENALI_CTL_54(base) (*(volatile u32*)(base + DENALI_CTL_54))
#define rgDENALI_CTL_55(base) (*(volatile u32*)(base + DENALI_CTL_55))
#define rgDENALI_CTL_56(base) (*(volatile u32*)(base + DENALI_CTL_56))
#define rgDENALI_CTL_57(base) (*(volatile u32*)(base + DENALI_CTL_57))
#define rgDENALI_CTL_58(base) (*(volatile u32*)(base + DENALI_CTL_58))
#define rgDENALI_CTL_59(base) (*(volatile u32*)(base + DENALI_CTL_59))
#define rgDENALI_CTL_60(base) (*(volatile u32*)(base + DENALI_CTL_60))
#define rgDENALI_CTL_61(base) (*(volatile u32*)(base + DENALI_CTL_61))
#define rgDENALI_CTL_62(base) (*(volatile u32*)(base + DENALI_CTL_62))
#define rgDENALI_CTL_63(base) (*(volatile u32*)(base + DENALI_CTL_63))
#define rgDENALI_CTL_64(base) (*(volatile u32*)(base + DENALI_CTL_64))
#define rgDENALI_CTL_65(base) (*(volatile u32*)(base + DENALI_CTL_65))
#define rgDENALI_CTL_66(base) (*(volatile u32*)(base + DENALI_CTL_66))
#define rgDENALI_CTL_67(base) (*(volatile u32*)(base + DENALI_CTL_67))
#define rgDENALI_CTL_68(base) (*(volatile u32*)(base + DENALI_CTL_68))
#define rgDENALI_CTL_69(base) (*(volatile u32*)(base + DENALI_CTL_69))
#define rgDENALI_CTL_70(base) (*(volatile u32*)(base + DENALI_CTL_70))
#define rgDENALI_CTL_71(base) (*(volatile u32*)(base + DENALI_CTL_71))
#define rgDENALI_CTL_72(base) (*(volatile u32*)(base + DENALI_CTL_72))
#define rgDENALI_CTL_73(base) (*(volatile u32*)(base + DENALI_CTL_73))
#define rgDENALI_CTL_74(base) (*(volatile u32*)(base + DENALI_CTL_74))
#define rgDENALI_CTL_75(base) (*(volatile u32*)(base + DENALI_CTL_75))
#define rgDENALI_CTL_76(base) (*(volatile u32*)(base + DENALI_CTL_76))
#define rgDENALI_CTL_77(base) (*(volatile u32*)(base + DENALI_CTL_77))
#define rgDENALI_CTL_78(base) (*(volatile u32*)(base + DENALI_CTL_78))
#define rgDENALI_CTL_79(base) (*(volatile u32*)(base + DENALI_CTL_79))
#define rgDENALI_CTL_80(base) (*(volatile u32*)(base + DENALI_CTL_80))
#define rgDENALI_CTL_81(base) (*(volatile u32*)(base + DENALI_CTL_81))
  /*Phy is a part of address spase of EMIC*/
#define rgDENALI_PHY_00(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_00))
#define rgDENALI_PHY_01(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_01))
#define rgDENALI_PHY_02(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_02))
#define rgDENALI_PHY_03(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_03))
#define rgDENALI_PHY_04(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_04))
#define rgDENALI_PHY_05(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_05))
#define rgDENALI_PHY_06(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_06))
#define rgDENALI_PHY_07(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_07))
#define rgDENALI_PHY_08(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_08))
#define rgDENALI_PHY_09(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_09))
#define rgDENALI_PHY_10(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_10))
#define rgDENALI_PHY_11(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_11))
#define rgDENALI_PHY_12(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_12))
#define rgDENALI_PHY_13(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_13))
#define rgDENALI_PHY_14(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_14))
#define rgDENALI_PHY_15(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_15))
#define rgDENALI_PHY_16(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_16))
#define rgDENALI_PHY_17(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_17))
#define rgDENALI_PHY_18(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_18))
#define rgDENALI_PHY_19(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_19))
#define rgDENALI_PHY_20(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_20))
#define rgDENALI_PHY_21(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_21))
#define rgDENALI_PHY_22(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_22))
#define rgDENALI_PHY_23(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_23))
#define rgDENALI_PHY_24(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_24))
#define rgDENALI_PHY_25(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_25))
#define rgDENALI_PHY_26(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_26))
#define rgDENALI_PHY_27(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_27))
#define rgDENALI_PHY_28(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_28))
#define rgDENALI_PHY_29(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_29))
#define rgDENALI_PHY_30(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_30))
#define rgDENALI_PHY_31(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_31))
#define rgDENALI_PHY_32(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_32))
#define rgDENALI_PHY_33(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_33))
#define rgDENALI_PHY_34(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_34))
#define rgDENALI_PHY_35(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_35))
#define rgDENALI_PHY_36(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_36))
#define rgDENALI_PHY_37(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_37))
#define rgDENALI_PHY_38(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_38))
#define rgDENALI_PHY_39(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_39))
#define rgDENALI_PHY_40(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_40))
#define rgDENALI_PHY_41(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_41))
#define rgDENALI_PHY_42(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_42))
#define rgDENALI_PHY_43(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_43))
#define rgDENALI_PHY_44(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_44))
#define rgDENALI_PHY_45(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_45))
#define rgDENALI_PHY_46(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_46))
#define rgDENALI_PHY_47(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_47))
#define rgDENALI_PHY_48(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_48))
#define rgDENALI_PHY_49(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_49))
#define rgDENALI_PHY_50(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_50))
#define rgDENALI_PHY_51(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_51))
#define rgDENALI_PHY_52(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_52))
#define rgDENALI_PHY_53(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_53))
#define rgDENALI_PHY_54(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_54))
#define rgDENALI_PHY_55(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_55))
#define rgDENALI_PHY_56(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_56))
#define rgDENALI_PHY_57(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_57))
#define rgDENALI_PHY_58(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_58))
#define rgDENALI_PHY_59(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_59))
#define rgDENALI_PHY_60(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_60))
#define rgDENALI_PHY_61(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_61))
#define rgDENALI_PHY_62(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_62))
#define rgDENALI_PHY_63(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_63))
#define rgDENALI_PHY_64(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_64))
#define rgDENALI_PHY_65(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_65))
#define rgDENALI_PHY_66(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_66))
#define rgDENALI_PHY_67(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_67))
#define rgDENALI_PHY_68(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_68))
#define rgDENALI_PHY_69(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_69))
#define rgDENALI_PHY_70(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_70))
#define rgDENALI_PHY_71(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_71))
#define rgDENALI_PHY_72(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_72))
  /*registers 73 - 127 are intentionally blank*/
#define rgDENALI_PHY_128(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_128))
#define rgDENALI_PHY_129(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_129))
#define rgDENALI_PHY_130(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_130))
#define rgDENALI_PHY_131(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_131))
#define rgDENALI_PHY_132(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_132))
#define rgDENALI_PHY_133(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_133))
#define rgDENALI_PHY_134(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_134))
#define rgDENALI_PHY_135(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_135))
#define rgDENALI_PHY_136(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_136))
#define rgDENALI_PHY_137(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_137))
#define rgDENALI_PHY_138(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_138))
#define rgDENALI_PHY_139(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_139))
#define rgDENALI_PHY_140(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_140))
#define rgDENALI_PHY_141(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_141))
#define rgDENALI_PHY_142(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_142))
#define rgDENALI_PHY_143(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_143))
#define rgDENALI_PHY_144(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_144))
#define rgDENALI_PHY_145(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_145))
#define rgDENALI_PHY_146(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_146))
#define rgDENALI_PHY_147(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_147))
#define rgDENALI_PHY_148(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_148))
#define rgDENALI_PHY_149(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_149))
#define rgDENALI_PHY_150(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_150))
#define rgDENALI_PHY_151(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_151))
#define rgDENALI_PHY_152(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_152))
#define rgDENALI_PHY_153(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_153))
#define rgDENALI_PHY_154(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_154))
#define rgDENALI_PHY_155(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_155))
#define rgDENALI_PHY_156(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_156))
#define rgDENALI_PHY_157(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_157))
#define rgDENALI_PHY_158(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_158))
#define rgDENALI_PHY_159(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_159))
#define rgDENALI_PHY_160(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_160))
#define rgDENALI_PHY_161(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_161))
#define rgDENALI_PHY_162(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_162))
#define rgDENALI_PHY_163(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_163))
#define rgDENALI_PHY_164(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_164))
#define rgDENALI_PHY_165(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_165))
#define rgDENALI_PHY_166(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_166))
#define rgDENALI_PHY_167(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_167))
#define rgDENALI_PHY_168(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_168))
#define rgDENALI_PHY_169(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_169))
#define rgDENALI_PHY_170(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_170))
#define rgDENALI_PHY_171(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_171))
#define rgDENALI_PHY_172(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_172))
#define rgDENALI_PHY_173(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_173))
#define rgDENALI_PHY_174(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_174))
#define rgDENALI_PHY_175(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_175))
#define rgDENALI_PHY_176(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_176))
#define rgDENALI_PHY_177(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_177))
#define rgDENALI_PHY_178(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_178))
#define rgDENALI_PHY_179(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_179))
#define rgDENALI_PHY_180(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_180))
#define rgDENALI_PHY_181(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_181))
#define rgDENALI_PHY_182(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_182))
#define rgDENALI_PHY_183(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_183))
#define rgDENALI_PHY_184(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_184))
#define rgDENALI_PHY_185(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_185))
#define rgDENALI_PHY_186(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_186))
#define rgDENALI_PHY_187(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_187))
#define rgDENALI_PHY_188(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_188))
#define rgDENALI_PHY_189(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_189))
#define rgDENALI_PHY_190(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_190))
#define rgDENALI_PHY_191(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_191))
#define rgDENALI_PHY_192(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_192))
#define rgDENALI_PHY_193(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_193))
#define rgDENALI_PHY_194(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_194))
#define rgDENALI_PHY_195(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_195))
#define rgDENALI_PHY_196(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_196))
#define rgDENALI_PHY_197(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_197))
#define rgDENALI_PHY_198(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_198))
#define rgDENALI_PHY_199(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_199))
#define rgDENALI_PHY_200(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_200))
  /*registers 201 - 255 are intentionally blank*/
#define rgDENALI_PHY_256(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_256))
#define rgDENALI_PHY_257(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_257))
#define rgDENALI_PHY_258(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_258))
#define rgDENALI_PHY_259(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_259))
#define rgDENALI_PHY_260(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_260))
#define rgDENALI_PHY_261(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_261))
#define rgDENALI_PHY_262(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_262))
#define rgDENALI_PHY_263(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_263))
#define rgDENALI_PHY_264(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_264))
#define rgDENALI_PHY_265(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_265))
#define rgDENALI_PHY_266(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_266))
#define rgDENALI_PHY_267(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_267))
#define rgDENALI_PHY_268(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_268))
#define rgDENALI_PHY_269(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_269))
#define rgDENALI_PHY_270(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_270))
#define rgDENALI_PHY_271(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_271))
#define rgDENALI_PHY_272(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_272))
#define rgDENALI_PHY_273(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_273))
#define rgDENALI_PHY_274(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_274))
#define rgDENALI_PHY_275(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_275))
#define rgDENALI_PHY_276(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_276))
#define rgDENALI_PHY_277(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_277))
#define rgDENALI_PHY_278(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_278))
#define rgDENALI_PHY_279(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_279))
#define rgDENALI_PHY_280(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_280))
#define rgDENALI_PHY_281(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_281))
#define rgDENALI_PHY_282(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_282))
#define rgDENALI_PHY_283(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_283))
#define rgDENALI_PHY_284(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_284))
#define rgDENALI_PHY_285(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_285))
#define rgDENALI_PHY_286(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_286))
#define rgDENALI_PHY_287(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_287))
#define rgDENALI_PHY_288(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_288))
#define rgDENALI_PHY_289(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_289))
#define rgDENALI_PHY_290(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_290))
#define rgDENALI_PHY_291(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_291))
#define rgDENALI_PHY_292(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_292))
#define rgDENALI_PHY_293(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_293))
#define rgDENALI_PHY_294(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_294))
#define rgDENALI_PHY_295(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_295))
#define rgDENALI_PHY_296(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_296))
#define rgDENALI_PHY_297(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_297))
#define rgDENALI_PHY_298(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_298))
#define rgDENALI_PHY_299(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_299))
#define rgDENALI_PHY_300(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_300))
#define rgDENALI_PHY_301(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_301))
#define rgDENALI_PHY_302(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_302))
#define rgDENALI_PHY_303(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_303))
#define rgDENALI_PHY_304(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_304))
#define rgDENALI_PHY_305(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_305))
#define rgDENALI_PHY_306(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_306))
#define rgDENALI_PHY_307(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_307))
#define rgDENALI_PHY_308(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_308))
#define rgDENALI_PHY_309(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_309))
#define rgDENALI_PHY_310(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_310))
#define rgDENALI_PHY_311(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_311))
#define rgDENALI_PHY_312(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_312))
#define rgDENALI_PHY_313(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_313))
#define rgDENALI_PHY_314(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_314))
#define rgDENALI_PHY_315(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_315))
#define rgDENALI_PHY_316(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_316))
#define rgDENALI_PHY_317(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_317))
#define rgDENALI_PHY_318(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_318))
#define rgDENALI_PHY_319(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_319))
#define rgDENALI_PHY_320(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_320))
#define rgDENALI_PHY_321(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_321))
#define rgDENALI_PHY_322(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_322))
#define rgDENALI_PHY_323(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_323))
#define rgDENALI_PHY_324(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_324))
#define rgDENALI_PHY_325(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_325))
#define rgDENALI_PHY_326(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_326))
#define rgDENALI_PHY_327(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_327))
#define rgDENALI_PHY_328(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_328))
  /*registers 329 - 383 are intentionally blank*/
#define rgDENALI_PHY_384(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_384))
#define rgDENALI_PHY_385(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_385))
#define rgDENALI_PHY_386(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_386))
#define rgDENALI_PHY_387(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_387))
#define rgDENALI_PHY_388(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_388))
#define rgDENALI_PHY_389(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_389))
#define rgDENALI_PHY_390(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_390))
#define rgDENALI_PHY_391(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_391))
#define rgDENALI_PHY_392(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_392))
#define rgDENALI_PHY_393(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_393))
#define rgDENALI_PHY_394(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_394))
#define rgDENALI_PHY_395(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_395))
#define rgDENALI_PHY_396(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_396))
#define rgDENALI_PHY_397(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_397))
#define rgDENALI_PHY_398(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_398))
#define rgDENALI_PHY_399(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_399))
#define rgDENALI_PHY_400(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_400))
#define rgDENALI_PHY_401(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_401))
#define rgDENALI_PHY_402(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_402))
#define rgDENALI_PHY_403(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_403))
#define rgDENALI_PHY_404(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_404))
#define rgDENALI_PHY_405(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_405))
#define rgDENALI_PHY_406(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_406))
#define rgDENALI_PHY_407(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_407))
#define rgDENALI_PHY_408(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_408))
#define rgDENALI_PHY_409(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_409))
#define rgDENALI_PHY_410(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_410))
#define rgDENALI_PHY_411(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_411))
#define rgDENALI_PHY_412(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_412))
#define rgDENALI_PHY_413(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_413))
#define rgDENALI_PHY_414(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_414))
#define rgDENALI_PHY_415(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_415))
#define rgDENALI_PHY_416(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_416))
#define rgDENALI_PHY_417(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_417))
#define rgDENALI_PHY_418(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_418))
#define rgDENALI_PHY_419(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_419))
#define rgDENALI_PHY_420(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_420))
#define rgDENALI_PHY_421(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_421))
#define rgDENALI_PHY_422(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_422))
#define rgDENALI_PHY_423(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_423))
#define rgDENALI_PHY_424(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_424))
#define rgDENALI_PHY_425(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_425))
#define rgDENALI_PHY_426(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_426))
#define rgDENALI_PHY_427(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_427))
#define rgDENALI_PHY_428(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_428))
#define rgDENALI_PHY_429(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_429))
#define rgDENALI_PHY_430(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_430))
#define rgDENALI_PHY_431(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_431))
#define rgDENALI_PHY_432(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_432))
#define rgDENALI_PHY_433(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_433))
#define rgDENALI_PHY_434(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_434))
#define rgDENALI_PHY_435(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_435))
#define rgDENALI_PHY_436(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_436))
#define rgDENALI_PHY_437(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_437))
#define rgDENALI_PHY_438(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_438))
#define rgDENALI_PHY_439(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_439))
#define rgDENALI_PHY_440(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_440))
#define rgDENALI_PHY_441(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_441))
#define rgDENALI_PHY_442(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_442))
#define rgDENALI_PHY_443(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_443))
#define rgDENALI_PHY_444(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_444))
#define rgDENALI_PHY_445(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_445))
#define rgDENALI_PHY_446(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_446))
#define rgDENALI_PHY_447(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_447))
#define rgDENALI_PHY_448(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_448))
#define rgDENALI_PHY_449(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_449))
#define rgDENALI_PHY_450(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_450))
#define rgDENALI_PHY_451(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_451))
#define rgDENALI_PHY_452(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_452))
#define rgDENALI_PHY_453(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_453))
#define rgDENALI_PHY_454(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_454))
#define rgDENALI_PHY_455(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_455))
#define rgDENALI_PHY_456(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_456))
  /*registers 457 - 511 are intentionally blank*/
#define rgDENALI_PHY_512(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_512))
#define rgDENALI_PHY_513(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_513))
#define rgDENALI_PHY_514(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_514))
#define rgDENALI_PHY_515(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_515))
#define rgDENALI_PHY_516(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_516))
#define rgDENALI_PHY_517(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_517))
#define rgDENALI_PHY_518(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_518))
#define rgDENALI_PHY_519(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_519))
#define rgDENALI_PHY_520(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_520))
#define rgDENALI_PHY_521(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_521))
#define rgDENALI_PHY_522(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_522))
#define rgDENALI_PHY_523(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_523))
#define rgDENALI_PHY_524(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_524))
#define rgDENALI_PHY_525(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_525))
#define rgDENALI_PHY_526(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_526))
#define rgDENALI_PHY_527(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_527))
#define rgDENALI_PHY_528(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_528))
#define rgDENALI_PHY_529(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_529))
#define rgDENALI_PHY_530(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_530))
#define rgDENALI_PHY_531(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_531))
#define rgDENALI_PHY_532(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_532))
#define rgDENALI_PHY_533(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_533))
#define rgDENALI_PHY_534(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_534))
#define rgDENALI_PHY_535(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_535))
#define rgDENALI_PHY_536(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_536))
#define rgDENALI_PHY_537(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_537))
#define rgDENALI_PHY_538(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_538))
#define rgDENALI_PHY_539(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_539))
#define rgDENALI_PHY_540(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_540))
#define rgDENALI_PHY_541(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_541))
#define rgDENALI_PHY_542(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_542))
#define rgDENALI_PHY_543(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_543))
#define rgDENALI_PHY_544(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_544))
#define rgDENALI_PHY_545(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_545))
#define rgDENALI_PHY_546(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_546))
#define rgDENALI_PHY_547(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_547))
#define rgDENALI_PHY_548(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_548))
#define rgDENALI_PHY_549(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_549))
#define rgDENALI_PHY_550(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_550))
#define rgDENALI_PHY_551(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_551))
#define rgDENALI_PHY_552(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_552))
#define rgDENALI_PHY_553(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_553))
#define rgDENALI_PHY_554(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_554))
#define rgDENALI_PHY_555(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_555))
#define rgDENALI_PHY_556(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_556))
#define rgDENALI_PHY_557(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_557))
#define rgDENALI_PHY_558(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_558))
#define rgDENALI_PHY_559(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_559))
#define rgDENALI_PHY_560(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_560))
#define rgDENALI_PHY_561(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_561))
#define rgDENALI_PHY_562(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_562))
#define rgDENALI_PHY_563(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_563))
#define rgDENALI_PHY_564(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_564))
#define rgDENALI_PHY_565(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_565))
#define rgDENALI_PHY_566(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_566))
#define rgDENALI_PHY_567(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_567))
#define rgDENALI_PHY_568(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_568))
#define rgDENALI_PHY_569(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_569))
#define rgDENALI_PHY_570(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_570))
#define rgDENALI_PHY_571(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_571))
#define rgDENALI_PHY_572(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_572))
#define rgDENALI_PHY_573(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_573))
#define rgDENALI_PHY_574(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_574))
#define rgDENALI_PHY_575(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_575))
#define rgDENALI_PHY_576(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_576))
#define rgDENALI_PHY_577(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_577))
#define rgDENALI_PHY_578(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_578))
#define rgDENALI_PHY_579(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_579))
#define rgDENALI_PHY_580(base) (*(volatile u32*)(base + DENALI_PHY_BASE + DENALI_PHY_580))

#endif /* _DEFS_H */

