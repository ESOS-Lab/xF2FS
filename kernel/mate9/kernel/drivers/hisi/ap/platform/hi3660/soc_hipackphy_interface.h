#ifndef __SOC_HIPACKPHY_INTERFACE_H__
#define __SOC_HIPACKPHY_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_HIPACKPHY_REVISION_ADDR(base) ((base) + (0x000))
#define SOC_HIPACKPHY_PHYINITCTRL_ADDR(base) ((base) + (0x004))
#define SOC_HIPACKPHY_PHYINITSTATUS_ADDR(base) ((base) + (0x008))
#define SOC_HIPACKPHY_PHYCLKGATED_ADDR(base) ((base) + (0x000C))
#define SOC_HIPACKPHY_PHYTIMER0_ADDR(base) ((base) + (0x010))
#define SOC_HIPACKPHY_PHYTIMER1_ADDR(base) ((base) + (0x014))
#define SOC_HIPACKPHY_PLLCTRL_ADDR(base) ((base) + (0x018))
#define SOC_HIPACKPHY_PLLTIMER_ADDR(base) ((base) + (0x01C))
#define SOC_HIPACKPHY_DLYMEASCTRL_ADDR(base) ((base) + (0x020))
#define SOC_HIPACKPHY_IMPCTRL_ADDR(base) ((base) + (0x024))
#define SOC_HIPACKPHY_IMPSTATUS_ADDR(base) ((base) + (0x028))
#define SOC_HIPACKPHY_DRAMCFG_ADDR(base) ((base) + (0x02C))
#define SOC_HIPACKPHY_DRAMTIMER0_ADDR(base) ((base) + (0x030))
#define SOC_HIPACKPHY_DRAMTIMER1_ADDR(base) ((base) + (0x034))
#define SOC_HIPACKPHY_DRAMTIMER2_ADDR(base) ((base) + (0x038))
#define SOC_HIPACKPHY_DRAMTIMER3_ADDR(base) ((base) + (0x03C))
#define SOC_HIPACKPHY_DRAMTIMER4_ADDR(base) ((base) + (0x040))
#define SOC_HIPACKPHY_ODTCR_ADDR(base) ((base) + (0x044))
#define SOC_HIPACKPHY_TRAINCTRL0_ADDR(base) ((base) + (0x048))
#define SOC_HIPACKPHY_RANKEN_ADDR(base) ((base) + (0x04C))
#define SOC_HIPACKPHY_TRAINMADDR_ADDR(base) ((base) + (0x0050))
#define SOC_HIPACKPHY_BISTCTRL_ADDR(base) ((base) + (0x0054))
#define SOC_HIPACKPHY_BISTDATA0_ADDR(base) ((base) + (0x0058))
#define SOC_HIPACKPHY_BISTDATA1_ADDR(base) ((base) + (0x005C))
#define SOC_HIPACKPHY_BISTSTATUS_ADDR(base) ((base) + (0x0060))
#define SOC_HIPACKPHY_MODEREG01_ADDR(base) ((base) + (0x0064))
#define SOC_HIPACKPHY_MODEREG23_ADDR(base) ((base) + (0x0068))
#define SOC_HIPACKPHY_DETPATTERN_ADDR(base) ((base) + (0x006C))
#define SOC_HIPACKPHY_MISC_ADDR(base) ((base) + (0x0070))
#define SOC_HIPACKPHY_RNK2RNK_ADDR(base) ((base) + (0x0074))
#define SOC_HIPACKPHY_PHYCTRL0_ADDR(base) ((base) + (0x0078))
#define SOC_HIPACKPHY_PHYDBG_ADDR(base) ((base) + (0x007C))
#define SOC_HIPACKPHY_RETCTRL0_ADDR(base) ((base) + (0x0080))
#define SOC_HIPACKPHY_DMSEL_ADDR(base) ((base) + (0x0084))
#define SOC_HIPACKPHY_TRAINCTRL8_ADDR(base) ((base) + (0x0088))
#define SOC_HIPACKPHY_DQSSEL_ADDR(base) ((base) + (0x008C))
#define SOC_HIPACKPHY_TRAINCTRL9_ADDR(base) ((base) + (0x0090))
#define SOC_HIPACKPHY_TRAINCTRL10_ADDR(base) ((base) + (0x094))
#define SOC_HIPACKPHY_PHYPLLCTRL_AC_ADDR(base) ((base) + (0x0098))
#define SOC_HIPACKPHY_PHYPLLCTRL_DX_ADDR(base) ((base) + (0x009C))
#define SOC_HIPACKPHY_SWTMODE_ADDR(base) ((base) + (0x00A0))
#define SOC_HIPACKPHY_SWTWLDQS_ADDR(base) ((base) + (0x00A4))
#define SOC_HIPACKPHY_SWTRLT_ADDR(base) ((base) + (0x00A8))
#define SOC_HIPACKPHY_PHYRSCTRL_ADDR(base) ((base) + (0x0B0))
#define SOC_HIPACKPHY_BISTCTRL2_ADDR(base) ((base) + (0x00B4))
#define SOC_HIPACKPHY_TRAINMADDRTG1_ADDR(base) ((base) + (0x00B8))
#define SOC_HIPACKPHY_DRAMTIMER5_ADDR(base) ((base) + (0x0BC))
#define SOC_HIPACKPHY_VREFTCTRL_ADDR(base) ((base) + (0x00C0))
#define SOC_HIPACKPHY_DVRFTCTRL_ADDR(base) ((base) + (0x00C4))
#define SOC_HIPACKPHY_HVRFTCTRL_ADDR(base) ((base) + (0x00C8))
#define SOC_HIPACKPHY_TRAINCTRL1_ADDR(base) ((base) + (0x00D0))
#define SOC_HIPACKPHY_TRAINCTRL2_ADDR(base) ((base) + (0x00D4))
#define SOC_HIPACKPHY_REGBANKCTRL_ADDR(base) ((base) + (0x00D8))
#define SOC_HIPACKPHY_TRAINCTRL3_ADDR(base) ((base) + (0x00DC))
#define SOC_HIPACKPHY_MODEREG45_ADDR(base) ((base) + (0x00E0))
#define SOC_HIPACKPHY_MODEREG67_ADDR(base) ((base) + (0x00E4))
#define SOC_HIPACKPHY_TRAINCTRL6_ADDR(base) ((base) + (0x0E8))
#define SOC_HIPACKPHY_DETPATINDEX_ADDR(base) ((base) + (0x00EC))
#define SOC_HIPACKPHY_TRAINSTEP0_ADDR(base) ((base) + (0x00F4))
#define SOC_HIPACKPHY_TRAINSTEP1_ADDR(base) ((base) + (0x00F8))
#define SOC_HIPACKPHY_TRAINSTEP2_ADDR(base) ((base) + (0x00FC))
#define SOC_HIPACKPHY_ACBISTCTRL0_ADDR(base) ((base) + (0x100))
#define SOC_HIPACKPHY_ACBISTCTRL1_ADDR(base) ((base) + (0x104))
#define SOC_HIPACKPHY_ACBISTSTS0_ADDR(base) ((base) + (0x108))
#define SOC_HIPACKPHY_ACBISTSTS1_ADDR(base) ((base) + (0x10C))
#define SOC_HIPACKPHY_WDXBOUND_DFS_ADDR(base) ((base) + (0x110))
#define SOC_HIPACKPHY_TRAINCTRL4_ADDR(base) ((base) + (0x114))
#define SOC_HIPACKPHY_TRAINCTRL5_ADDR(base) ((base) + (0x118))
#define SOC_HIPACKPHY_TRAINCTRL7_ADDR(base) ((base) + (0x11C))
#define SOC_HIPACKPHY_IMPOFFSET_ADDR(base) ((base) + (0x124))
#define SOC_HIPACKPHY_ACCMDBDL2_ADDR(base) ((base) + (0x128))
#define SOC_HIPACKPHY_ACCMDBDL3_ADDR(base) ((base) + (0x12C))
#define SOC_HIPACKPHY_ACCMDBDL5_ADDR(base) ((base) + (0x134))
#define SOC_HIPACKPHY_ACCMDBDL6_ADDR(base) ((base) + (0x138))
#define SOC_HIPACKPHY_ACCMDBDL7_ADDR(base) ((base) + (0x13C))
#define SOC_HIPACKPHY_ACADDRBDL0_ADDR(base) ((base) + (0x140))
#define SOC_HIPACKPHY_ACADDRBDL1_ADDR(base) ((base) + (0x144))
#define SOC_HIPACKPHY_ACADDRBDL2_ADDR(base) ((base) + (0x148))
#define SOC_HIPACKPHY_ACADDRBDL3_ADDR(base) ((base) + (0x14C))
#define SOC_HIPACKPHY_ACADDRBDL4_ADDR(base) ((base) + (0x150))
#define SOC_HIPACKPHY_ACADDRBDL5_ADDR(base) ((base) + (0x154))
#define SOC_HIPACKPHY_ACADDRBDL6_ADDR(base) ((base) + (0x158))
#define SOC_HIPACKPHY_ACADDRBDL7_ADDR(base) ((base) + (0x15C))
#define SOC_HIPACKPHY_ACADDRBDL8_ADDR(base) ((base) + (0x160))
#define SOC_HIPACKPHY_ACADDRBDL9_ADDR(base) ((base) + (0x164))
#define SOC_HIPACKPHY_ACBISTCTRL2_ADDR(base) ((base) + (0x168))
#define SOC_HIPACKPHY_IMP_CTRL1_ADDR(base) ((base) + (0x170))
#define SOC_HIPACKPHY_IMP_STATUS1_ADDR(base) ((base) + (0x174))
#define SOC_HIPACKPHY_IMP_OUT_ADDR(base) ((base) + (0x178))
#define SOC_HIPACKPHY_TRAINCTRL11_ADDR(base) ((base) + (0x017C))
#define SOC_HIPACKPHY_FASTGDSRESULT0_ADDR(base) ((base) + (0x0180))
#define SOC_HIPACKPHY_FASTGDSRESULT1_ADDR(base) ((base) + (0x0184))
#define SOC_HIPACKPHY_FASTGTRESULT_ADDR(base) ((base) + (0x0188))
#define SOC_HIPACKPHY_TRKDBG_ADDR(base) ((base) + (0x18C))
#define SOC_HIPACKPHY_PACKDEBUG_ADDR(base) ((base) + (0x190))
#define SOC_HIPACKPHY_ACPHYRSVDC_ADDR(base) ((base) + (0x0194))
#define SOC_HIPACKPHY_ACPHYRSVDS_ADDR(base) ((base) + (0x0198))
#define SOC_HIPACKPHY_ACPHYCTL8_ADDR(base) ((base) + (0x019C))
#define SOC_HIPACKPHY_ACCMDBDL8_ADDR(base) ((base) + (0x1A0))
#define SOC_HIPACKPHY_ACCMDBDL9_ADDR(base) ((base) + (0x1A4))
#define SOC_HIPACKPHY_ACCMDBDL10_ADDR(base) ((base) + (0x1A8))
#define SOC_HIPACKPHY_ACCMDBDL11_ADDR(base) ((base) + (0x1AC))
#define SOC_HIPACKPHY_CATBDLBOUNDSEL_ADDR(base) ((base) + (0x01B0))
#define SOC_HIPACKPHY_CATBDLBOUND_ADDR(base) ((base) + (0x01B4))
#define SOC_HIPACKPHY_CATSWAPINDEX_ADDR(base) ((base) + (0x01B8))
#define SOC_HIPACKPHY_CATSWAPSEL_ADDR(base) ((base) + (0x01BC))
#define SOC_HIPACKPHY_CATTIMER0_ADDR(base) ((base) + (0x01C0))
#define SOC_HIPACKPHY_CATTIMER1_ADDR(base) ((base) + (0x01C4))
#define SOC_HIPACKPHY_CATCONFIG_ADDR(base) ((base) + (0x01C8))
#define SOC_HIPACKPHY_CATRESULT_ADDR(base) ((base) + (0x01CC))
#define SOC_HIPACKPHY_PHYDQRESULT_ADDR(base) ((base) + (0x01D0))
#define SOC_HIPACKPHY_ADDRPHBOUND_ADDR(base) ((base) + (0x01D4))
#define SOC_HIPACKPHY_SWCATPATTERN_P_ADDR(base) ((base) + (0x01D8))
#define SOC_HIPACKPHY_SWCATPATTERN_N_ADDR(base) ((base) + (0x01DC))
#define SOC_HIPACKPHY_MRS_SEQ_PROG_ADDR(base) ((base) + (0x01E0))
#define SOC_HIPACKPHY_LPCTRL_ADDR(base) ((base) + (0x01E4))
#define SOC_HIPACKPHY_TRAINCTRL12_ADDR(base) ((base) + (0x01E8))
#define SOC_HIPACKPHY_AHVREFT_STATUS_ADDR(base) ((base) + (0x1F0))
#define SOC_HIPACKPHY_ADVREF_STATUS_ADDR(base) ((base) + (0x1F4))
#define SOC_HIPACKPHY_DFIMISCCTRL_ADDR(base) ((base) + (0x1FC))
#define SOC_HIPACKPHY_DXNBISTCTRL_ADDR(base,n) ((base) + (0x200+(n)*0x80))
#define SOC_HIPACKPHY_DXNBISTSTS_ADDR(base,n) ((base) + (0x204+(n)*0x80))
#define SOC_HIPACKPHY_DXNCTRL_ADDR(base,n) ((base) + (0x208+(n)*0x80))
#define SOC_HIPACKPHY_DXNWDQNBDL0_ADDR(base,m,n) ((base) + (0x210+(m)*0x400+(n)*0x80))
#define SOC_HIPACKPHY_DXNWDQNBDL1_ADDR(base,m,n) ((base) + (0x214+(m)*0x400+(n)*0x80))
#define SOC_HIPACKPHY_DXNWDQNBDL2_ADDR(base,m,n) ((base) + (0x218+(m)*0x400+(n)*0x80))
#define SOC_HIPACKPHY_DXNRDQNBDL0_ADDR(base,m,n,l) ((base) + (0x21C+(l)*0x800+(m)*0x400+(n)*0x80))
#define SOC_HIPACKPHY_DXNRDQNBDL1_ADDR(base,m,n,l) ((base) + (0x220+(l)*0x800+(m)*0x400+(n)*0x80))
#define SOC_HIPACKPHY_DXNRDQNBDL2_ADDR(base,m,n,l) ((base) + (0x224+(l)*0x800+(m)*0x400+(n)*0x80))
#define SOC_HIPACKPHY_DXNOEBDL_ADDR(base,n) ((base) + (0x228+(n)*0x80))
#define SOC_HIPACKPHY_DXNRDQSDLY_ADDR(base,n) ((base) + (0x22C+(n)*0x80))
#define SOC_HIPACKPHY_DXNWDQSDLY_ADDR(base,n) ((base) + (0x230+(n)*0x80))
#define SOC_HIPACKPHY_DXNWDQDLY_ADDR(base,m,n) ((base) + (0x234+(m)*0x400+(n)*0x80))
#define SOC_HIPACKPHY_DXNWLSL_ADDR(base,n) ((base) + (0x238+(n)*0x80))
#define SOC_HIPACKPHY_DXNGDS_ADDR(base,m,n) ((base) + (0x23C+(m)*0x400+(n)*0x80))
#define SOC_HIPACKPHY_DXNRDQSGDLY_ADDR(base,m,n) ((base) + (0x240+(m)*0x400+(n)*0x80))
#define SOC_HIPACKPHY_DXNWDQNLB0_ADDR(base,n) ((base) + (0x244+(n)*0x80))
#define SOC_HIPACKPHY_DXNRDQSDLYSUB_ADDR(base,n) ((base) + (0x248+(n)*0x80))
#define SOC_HIPACKPHY_DXNRDBOUND_ADDR(base,n) ((base) + (0x250+(n)*0x80))
#define SOC_HIPACKPHY_DXNWRBOUND_ADDR(base,n) ((base) + (0x254+(n)*0x80))
#define SOC_HIPACKPHY_DXNWDQNLB1_ADDR(base,n) ((base) + (0x25C+(n)*0x80))
#define SOC_HIPACKPHY_DXDEBUG0_ADDR(base,n) ((base) + (0x268+(n)*0x80))
#define SOC_HIPACKPHY_DXDEBUG1_ADDR(base,n) ((base) + (0x26C+(n)*0x80))
#define SOC_HIPACKPHY_DVREFT_STATUS_ADDR(base,n) ((base) + (0x270+(n)*0x80))
#define SOC_HIPACKPHY_HVREFT_STATUS_ADDR(base,m,n) ((base) + (0x274+(m)*0x400+(n)*0x80))
#define SOC_HIPACKPHY_VREFT_BOUND_ADDR(base,n) ((base) + (0x27C+(n)*0x80))
#define SOC_HIPACKPHY_PLLSTATUS_ADDR(base) ((base) + (0x00AC))
#define SOC_HIPACKPHY_BISTCTRL1_ADDR(base) ((base) + (0x00F0))
#define SOC_HIPACKPHY_DETPATTERN1_ADDR(base) ((base) + (0x00CC))
#define SOC_HIPACKPHY_AC_PLLCTRL_ADDR(base) ((base) + (0x010))
#define SOC_HIPACKPHY_AC_PHYCTRL0_ADDR(base) ((base) + (0x014))
#define SOC_HIPACKPHY_AC_IOCTL_ADDR(base) ((base) + (0x018))
#define SOC_HIPACKPHY_AC_PHYCTRL1_ADDR(base) ((base) + (0x01C))
#define SOC_HIPACKPHY_AC_PHYPLLCTRL_AC_ADDR(base) ((base) + (0x020))
#define SOC_HIPACKPHY_AC_IOCTL2_ADDR(base) ((base) + (0x028))
#define SOC_HIPACKPHY_AC_PHYPLLCTRL_DX3_ADDR(base) ((base) + (0x02C))
#define SOC_HIPACKPHY_AC_ACCMDBDL0_ADDR(base) ((base) + (0x038))
#define SOC_HIPACKPHY_AC_ACCMDBDL4_ADDR(base) ((base) + (0x048))
#define SOC_HIPACKPHY_AC_ACCLKBDL_ADDR(base) ((base) + (0x050))
#define SOC_HIPACKPHY_AC_ACPHYCTL0_ADDR(base) ((base) + (0x054))
#define SOC_HIPACKPHY_AC_ACPHYCTL1_ADDR(base) ((base) + (0x058))
#define SOC_HIPACKPHY_AC_ACPHYCTL2_ADDR(base) ((base) + (0x05C))
#define SOC_HIPACKPHY_AC_ACPHYCTL3_ADDR(base) ((base) + (0x060))
#define SOC_HIPACKPHY_AC_ACPHYCTL4_ADDR(base) ((base) + (0x064))
#define SOC_HIPACKPHY_AC_ACPHYCTL5_ADDR(base) ((base) + (0x068))
#define SOC_HIPACKPHY_AC_ACPHYCTL6_ADDR(base) ((base) + (0x06C))
#define SOC_HIPACKPHY_AC_ACPHYCTL7_ADDR(base) ((base) + (0x070))
#define SOC_HIPACKPHY_AC_ACDEBUG_ADDR(base) ((base) + (0x074))
#define SOC_HIPACKPHY_AC_ACPHYRSVDC_ADDR(base) ((base) + (0x078))
#define SOC_HIPACKPHY_AC_ACPHYRSVDS_ADDR(base) ((base) + (0x07C))
#define SOC_HIPACKPHY_AC_ACPHYDCC_ADDR(base) ((base) + (0x094))
#define SOC_HIPACKPHY_AC_ACPHYCTL9_ADDR(base) ((base) + (0x098))
#define SOC_HIPACKPHY_AC_ACPHYCTL10_ADDR(base) ((base) + (0x09C))
#define SOC_HIPACKPHY_AC_ACPHYCTL11_ADDR(base) ((base) + (0x0A0))
#define SOC_HIPACKPHY_AC_IOCTL3_ADDR(base) ((base) + (0x0A4))
#define SOC_HIPACKPHY_AC_ACPHYDCC1_ADDR(base) ((base) + (0x0AC))
#define SOC_HIPACKPHY_AC_ACPHYDCC2_ADDR(base) ((base) + (0x0B0))
#define SOC_HIPACKPHY_AC_IOCTL5_ADDR(base) ((base) + (0x0B4))
#define SOC_HIPACKPHY_AC_IOCTL6_ADDR(base) ((base) + (0x0B8))
#define SOC_HIPACKPHY_AC_IOCTL7_ADDR(base) ((base) + (0x0A8))
#define SOC_HIPACKPHY_AC_IOCTL8_ADDR(base) ((base) + (0x0DC))
#define SOC_HIPACKPHY_AC_IOCTL9_ADDR(base) ((base) + (0x0BC))
#define SOC_HIPACKPHY_AC_IOCTL10_ADDR(base) ((base) + (0x0C0))
#define SOC_HIPACKPHY_AC_IOCTL11_ADDR(base) ((base) + (0x0C4))
#define SOC_HIPACKPHY_AC_IOCTL12_ADDR(base) ((base) + (0x0C8))
#define SOC_HIPACKPHY_AC_IOCTL13_ADDR(base) ((base) + (0x0CC))
#define SOC_HIPACKPHY_AC_IOCTL14_ADDR(base) ((base) + (0x0D0))
#define SOC_HIPACKPHY_AC_IOCTL15_ADDR(base) ((base) + (0x0D4))
#define SOC_HIPACKPHY_AC_IOCTL16_ADDR(base) ((base) + (0x0D8))
#define SOC_HIPACKPHY_AC_ACCTL_BYP_CK90_B1_ADDR(base) ((base) + (0x0E0))
#define SOC_HIPACKPHY_AC_BYP_CK90_SETTING_ADDR(base) ((base) + (0x0E4))
#define SOC_HIPACKPHY_AC_BDL_SW_RST_ADDR(base) ((base) + (0x0E8))
#define SOC_HIPACKPHY_AC_ACCTL_PHASE_ADDR(base) ((base) + (0x0EC))
#define SOC_HIPACKPHY_AC_IOCTL17_ADDR(base) ((base) + (0x0F0))
#define SOC_HIPACKPHY_AC_ACRSVD1_ADDR(base) ((base) + (0x0F4))
#define SOC_HIPACKPHY_AC_ACRSVD2_ADDR(base) ((base) + (0x0F8))
#define SOC_HIPACKPHY_AC_DDRPHY_GATED_BYPASS_ADDR(base) ((base) + (0x0FC))
#define SOC_HIPACKPHY_DX_PHYCTRL0_ADDR(base) ((base) + (0x200))
#define SOC_HIPACKPHY_DX_IOCTL_ADDR(base) ((base) + (0x204))
#define SOC_HIPACKPHY_DX_DQSSEL_ADDR(base) ((base) + (0x208))
#define SOC_HIPACKPHY_DX_DXNCKCTRL_ADDR(base) ((base) + (0x20C))
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX_ADDR(base) ((base) + (0x210))
#define SOC_HIPACKPHY_DX_PHYCTRL2_ADDR(base) ((base) + (0x214))
#define SOC_HIPACKPHY_DX_IOCTL1_ADDR(base) ((base) + (0x218))
#define SOC_HIPACKPHY_DX_IOCTL2_ADDR(base) ((base) + (0x21C))
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX2_ADDR(base) ((base) + (0x220))
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX3_ADDR(base) ((base) + (0x224))
#define SOC_HIPACKPHY_DX_DXNCLKBDL_ADDR(base) ((base) + (0x230))
#define SOC_HIPACKPHY_DX_DXPHYCTRL_ADDR(base) ((base) + (0x234))
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_ADDR(base,p) ((base) + (0x238+(p)*0x80))
#define SOC_HIPACKPHY_DX_DXNMISCCTRL1_ADDR(base,p) ((base) + (0x264+(p)*0x80))
#define SOC_HIPACKPHY_DX_DXDEBUG0_ADDR(base,p) ((base) + (0x23C+(p)*0x80))
#define SOC_HIPACKPHY_DX_DXPHYRSVD_ADDR(base,p) ((base) + (0x244+(p)*0x80))
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_ADDR(base,p) ((base) + (0x248+(p)*0x80))
#define SOC_HIPACKPHY_DX_DXDEBUGCONFIG_ADDR(base,p) ((base) + (0x24C+(p)*0x80))
#define SOC_HIPACKPHY_DX_DXNDCC_ADDR(base,p) ((base) + (0x250+(p)*0x80))
#define SOC_HIPACKPHY_DX_DXNMISCCTRL3_ADDR(base,p) ((base) + (0x254+(p)*0x80))
#define SOC_HIPACKPHY_DX_DXNMISCCTRL4_ADDR(base,p) ((base) + (0x258+(p)*0x80))
#define SOC_HIPACKPHY_DX_IOCTL3_ADDR(base,p) ((base) + (0x25C+(p)*0x80))
#define SOC_HIPACKPHY_DX_DXNDCC1_ADDR(base,p) ((base) + (0x268+(p)*0x80))
#define SOC_HIPACKPHY_DX_DXNDCC2_ADDR(base,p) ((base) + (0x26c+(p)*0x80))
#define SOC_HIPACKPHY_DX_DXNDCC3_ADDR(base,p) ((base) + (0x270+(p)*0x80))
#define SOC_HIPACKPHY_DX_DXNDCC4_ADDR(base,p) ((base) + (0x274+(p)*0x80))
#define SOC_HIPACKPHY_DX_IOCTL6_ADDR(base) ((base) + (0x228))
#define SOC_HIPACKPHY_DX_IOCTL7_ADDR(base) ((base) + (0x240))
#define SOC_HIPACKPHY_DX_BYP_CK90_CODE_ADDR(base,p) ((base) + (0x278+(p)*0x80))
#define SOC_HIPACKPHY_DX_BYP_CK90_CODE_B1_ADDR(base,p) ((base) + (0x27c+(p)*0x80))
#define SOC_HIPACKPHY_DX_IOCTL8_ADDR(base) ((base) + (0x260))
#define SOC_HIPACKPHY_DX_IOCTL9_ADDR(base) ((base) + (0x280))
#define SOC_HIPACKPHY_DX_IOCTL10_ADDR(base) ((base) + (0x284))
#define SOC_HIPACKPHY_DX_DXCTL_PHASE_ADDR(base) ((base) + (0x288))
#define SOC_HIPACKPHY_DX_RESERVED_3RD_ADDR(base) ((base) + (0x28C))
#define SOC_HIPACKPHY_DX_DUMMY_IOCTL_DUTY_ADDR(base) ((base) + (0x290))
#define SOC_HIPACKPHY_DX_DXCTL_MISCCTRL_ADDR(base) ((base) + (0x294))
#define SOC_HIPACKPHY_DX_DXRSVD1_ADDR(base) ((base) + (0x298))
#define SOC_HIPACKPHY_DX_DXRSVD2_ADDR(base) ((base) + (0x29C))
#define SOC_HIPACKPHY_UC_TRCTRL_ADDR(base) ((base) + (0x000))
#define SOC_HIPACKPHY_UC_TROPCTRL_ADDR(base) ((base) + (0x004))
#define SOC_HIPACKPHY_UC_DTRSTSP_ADDR(base) ((base) + (0x008))
#define SOC_HIPACKPHY_UC_TRSTATUS_ADDR(base) ((base) + (0x00C))
#define SOC_HIPACKPHY_UC_CMDQCTRL_ADDR(base) ((base) + (0x010))
#define SOC_HIPACKPHY_UC_WDQPHAUC_ADDR(base) ((base) + (0x040))
#define SOC_HIPACKPHY_UC_WDQSPHAUC_ADDR(base) ((base) + (0x048))
#define SOC_HIPACKPHY_UC_WDQSBDLAUC_ADDR(base) ((base) + (0x04C))
#define SOC_HIPACKPHY_UC_WDLYOP_ADDR(base) ((base) + (0x050))
#define SOC_HIPACKPHY_UC_RDQSAUC_ADDR(base) ((base) + (0x080))
#define SOC_HIPACKPHY_UC_RDQSGTXAUC_ADDR(base) ((base) + (0x084))
#define SOC_HIPACKPHY_UC_RDQSGPHAUC_ADDR(base) ((base) + (0x088))
#define SOC_HIPACKPHY_UC_RDQSGBDLAUC_ADDR(base) ((base) + (0x08C))
#define SOC_HIPACKPHY_UC_RGDSAUC_ADDR(base) ((base) + (0x090))
#define SOC_HIPACKPHY_UC_RDLYOP_ADDR(base) ((base) + (0x094))
#define SOC_HIPACKPHY_UCSWTMODE_ADDR(base) ((base) + (0x0A0))
#define SOC_HIPACKPHY_UCSWTWLDQS_ADDR(base) ((base) + (0x0A4))
#define SOC_HIPACKPHY_UC_SWTRLT_ADDR(base) ((base) + (0x0A8))
#define SOC_HIPACKPHY_UCFASTGDSRLT0_ADDR(base) ((base) + (0x0C4))
#define SOC_HIPACKPHY_UCFASTGDSRLT1_ADDR(base) ((base) + (0x0C8))
#define SOC_HIPACKPHY_UCFASTGTRLT_ADDR(base) ((base) + (0x0CC))
#define SOC_HIPACKPHY_UCTRKDBG_RDQS_ADDR(base) ((base) + (0x0D0))
#define SOC_HIPACKPHY_UCTRKDBG_RDQSG0_ADDR(base) ((base) + (0x0D4))
#define SOC_HIPACKPHY_UCTRKDBG_RDQSG1_ADDR(base) ((base) + (0x0D8))
#define SOC_HIPACKPHY_UCDBG_PHYSTOP_ADDR(base) ((base) + (0x0DC))
#define SOC_HIPACKPHY_UC_WDQNAUC_ADDR(base,n) ((base) + (0x100 + (n) * 0x80))
#define SOC_HIPACKPHY_UC_RDQNAUC_ADDR(base,n) ((base) + (0x104 + (n) * 0x80))
#define SOC_HIPACKPHY_UC_DTRSTS_ADDR(base,n) ((base) + (0x108 + (n) * 0x80))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int minor : 8;
        unsigned int major : 8;
        unsigned int reserved : 16;
    } reg;
} SOC_HIPACKPHY_REVISION_UNION;
#endif
#define SOC_HIPACKPHY_REVISION_minor_START (0)
#define SOC_HIPACKPHY_REVISION_minor_END (7)
#define SOC_HIPACKPHY_REVISION_major_START (8)
#define SOC_HIPACKPHY_REVISION_major_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int init_en : 1;
        unsigned int pll_init_en : 1;
        unsigned int dlymeas_en : 1;
        unsigned int zcal_en : 1;
        unsigned int wl_en : 1;
        unsigned int gt_en : 1;
        unsigned int gdst_en : 1;
        unsigned int wl2_en : 1;
        unsigned int rdet_en : 1;
        unsigned int wdet_en : 1;
        unsigned int dram_init_en : 1;
        unsigned int cat_en : 1;
        unsigned int dram_rst : 1;
        unsigned int phy_rst : 1;
        unsigned int pack_rst : 1;
        unsigned int phyconn_rst : 1;
        unsigned int dvreft_en : 1;
        unsigned int hvreft_en : 1;
        unsigned int dxdvrefs_en : 1;
        unsigned int acdvreft_en : 1;
        unsigned int achvreft_en : 1;
        unsigned int acdvrefs_en : 1;
        unsigned int reserved : 8;
        unsigned int pic_phyupd_req : 1;
        unsigned int ctl_cke_bypass : 1;
    } reg;
} SOC_HIPACKPHY_PHYINITCTRL_UNION;
#endif
#define SOC_HIPACKPHY_PHYINITCTRL_init_en_START (0)
#define SOC_HIPACKPHY_PHYINITCTRL_init_en_END (0)
#define SOC_HIPACKPHY_PHYINITCTRL_pll_init_en_START (1)
#define SOC_HIPACKPHY_PHYINITCTRL_pll_init_en_END (1)
#define SOC_HIPACKPHY_PHYINITCTRL_dlymeas_en_START (2)
#define SOC_HIPACKPHY_PHYINITCTRL_dlymeas_en_END (2)
#define SOC_HIPACKPHY_PHYINITCTRL_zcal_en_START (3)
#define SOC_HIPACKPHY_PHYINITCTRL_zcal_en_END (3)
#define SOC_HIPACKPHY_PHYINITCTRL_wl_en_START (4)
#define SOC_HIPACKPHY_PHYINITCTRL_wl_en_END (4)
#define SOC_HIPACKPHY_PHYINITCTRL_gt_en_START (5)
#define SOC_HIPACKPHY_PHYINITCTRL_gt_en_END (5)
#define SOC_HIPACKPHY_PHYINITCTRL_gdst_en_START (6)
#define SOC_HIPACKPHY_PHYINITCTRL_gdst_en_END (6)
#define SOC_HIPACKPHY_PHYINITCTRL_wl2_en_START (7)
#define SOC_HIPACKPHY_PHYINITCTRL_wl2_en_END (7)
#define SOC_HIPACKPHY_PHYINITCTRL_rdet_en_START (8)
#define SOC_HIPACKPHY_PHYINITCTRL_rdet_en_END (8)
#define SOC_HIPACKPHY_PHYINITCTRL_wdet_en_START (9)
#define SOC_HIPACKPHY_PHYINITCTRL_wdet_en_END (9)
#define SOC_HIPACKPHY_PHYINITCTRL_dram_init_en_START (10)
#define SOC_HIPACKPHY_PHYINITCTRL_dram_init_en_END (10)
#define SOC_HIPACKPHY_PHYINITCTRL_cat_en_START (11)
#define SOC_HIPACKPHY_PHYINITCTRL_cat_en_END (11)
#define SOC_HIPACKPHY_PHYINITCTRL_dram_rst_START (12)
#define SOC_HIPACKPHY_PHYINITCTRL_dram_rst_END (12)
#define SOC_HIPACKPHY_PHYINITCTRL_phy_rst_START (13)
#define SOC_HIPACKPHY_PHYINITCTRL_phy_rst_END (13)
#define SOC_HIPACKPHY_PHYINITCTRL_pack_rst_START (14)
#define SOC_HIPACKPHY_PHYINITCTRL_pack_rst_END (14)
#define SOC_HIPACKPHY_PHYINITCTRL_phyconn_rst_START (15)
#define SOC_HIPACKPHY_PHYINITCTRL_phyconn_rst_END (15)
#define SOC_HIPACKPHY_PHYINITCTRL_dvreft_en_START (16)
#define SOC_HIPACKPHY_PHYINITCTRL_dvreft_en_END (16)
#define SOC_HIPACKPHY_PHYINITCTRL_hvreft_en_START (17)
#define SOC_HIPACKPHY_PHYINITCTRL_hvreft_en_END (17)
#define SOC_HIPACKPHY_PHYINITCTRL_dxdvrefs_en_START (18)
#define SOC_HIPACKPHY_PHYINITCTRL_dxdvrefs_en_END (18)
#define SOC_HIPACKPHY_PHYINITCTRL_acdvreft_en_START (19)
#define SOC_HIPACKPHY_PHYINITCTRL_acdvreft_en_END (19)
#define SOC_HIPACKPHY_PHYINITCTRL_achvreft_en_START (20)
#define SOC_HIPACKPHY_PHYINITCTRL_achvreft_en_END (20)
#define SOC_HIPACKPHY_PHYINITCTRL_acdvrefs_en_START (21)
#define SOC_HIPACKPHY_PHYINITCTRL_acdvrefs_en_END (21)
#define SOC_HIPACKPHY_PHYINITCTRL_pic_phyupd_req_START (30)
#define SOC_HIPACKPHY_PHYINITCTRL_pic_phyupd_req_END (30)
#define SOC_HIPACKPHY_PHYINITCTRL_ctl_cke_bypass_START (31)
#define SOC_HIPACKPHY_PHYINITCTRL_ctl_cke_bypass_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int pll_lock_err : 1;
        unsigned int dlymeas_err : 1;
        unsigned int zcal_err : 1;
        unsigned int wl_err : 1;
        unsigned int gt_err : 1;
        unsigned int gdst_err : 1;
        unsigned int wl2_err : 1;
        unsigned int rdet_err : 1;
        unsigned int wdet_err : 1;
        unsigned int cat_err : 1;
        unsigned int fst_rdet_wrg : 1;
        unsigned int fst_rdet_err : 1;
        unsigned int wdert_wrg : 1;
        unsigned int wdert_err : 1;
        unsigned int reserved_1 : 14;
        unsigned int dfi_phyupd_ack : 1;
        unsigned int dfi_phyupd_req : 1;
        unsigned int retrain_active : 1;
    } reg;
} SOC_HIPACKPHY_PHYINITSTATUS_UNION;
#endif
#define SOC_HIPACKPHY_PHYINITSTATUS_pll_lock_err_START (1)
#define SOC_HIPACKPHY_PHYINITSTATUS_pll_lock_err_END (1)
#define SOC_HIPACKPHY_PHYINITSTATUS_dlymeas_err_START (2)
#define SOC_HIPACKPHY_PHYINITSTATUS_dlymeas_err_END (2)
#define SOC_HIPACKPHY_PHYINITSTATUS_zcal_err_START (3)
#define SOC_HIPACKPHY_PHYINITSTATUS_zcal_err_END (3)
#define SOC_HIPACKPHY_PHYINITSTATUS_wl_err_START (4)
#define SOC_HIPACKPHY_PHYINITSTATUS_wl_err_END (4)
#define SOC_HIPACKPHY_PHYINITSTATUS_gt_err_START (5)
#define SOC_HIPACKPHY_PHYINITSTATUS_gt_err_END (5)
#define SOC_HIPACKPHY_PHYINITSTATUS_gdst_err_START (6)
#define SOC_HIPACKPHY_PHYINITSTATUS_gdst_err_END (6)
#define SOC_HIPACKPHY_PHYINITSTATUS_wl2_err_START (7)
#define SOC_HIPACKPHY_PHYINITSTATUS_wl2_err_END (7)
#define SOC_HIPACKPHY_PHYINITSTATUS_rdet_err_START (8)
#define SOC_HIPACKPHY_PHYINITSTATUS_rdet_err_END (8)
#define SOC_HIPACKPHY_PHYINITSTATUS_wdet_err_START (9)
#define SOC_HIPACKPHY_PHYINITSTATUS_wdet_err_END (9)
#define SOC_HIPACKPHY_PHYINITSTATUS_cat_err_START (10)
#define SOC_HIPACKPHY_PHYINITSTATUS_cat_err_END (10)
#define SOC_HIPACKPHY_PHYINITSTATUS_fst_rdet_wrg_START (11)
#define SOC_HIPACKPHY_PHYINITSTATUS_fst_rdet_wrg_END (11)
#define SOC_HIPACKPHY_PHYINITSTATUS_fst_rdet_err_START (12)
#define SOC_HIPACKPHY_PHYINITSTATUS_fst_rdet_err_END (12)
#define SOC_HIPACKPHY_PHYINITSTATUS_wdert_wrg_START (13)
#define SOC_HIPACKPHY_PHYINITSTATUS_wdert_wrg_END (13)
#define SOC_HIPACKPHY_PHYINITSTATUS_wdert_err_START (14)
#define SOC_HIPACKPHY_PHYINITSTATUS_wdert_err_END (14)
#define SOC_HIPACKPHY_PHYINITSTATUS_dfi_phyupd_ack_START (29)
#define SOC_HIPACKPHY_PHYINITSTATUS_dfi_phyupd_ack_END (29)
#define SOC_HIPACKPHY_PHYINITSTATUS_dfi_phyupd_req_START (30)
#define SOC_HIPACKPHY_PHYINITSTATUS_dfi_phyupd_req_END (30)
#define SOC_HIPACKPHY_PHYINITSTATUS_retrain_active_START (31)
#define SOC_HIPACKPHY_PHYINITSTATUS_retrain_active_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dx_phy_clkgated : 4;
        unsigned int reserved_0 : 4;
        unsigned int ac_phy_clkgated : 1;
        unsigned int ck_phy_clkgated : 4;
        unsigned int dx_phgated_en : 1;
        unsigned int dx_phclkgated : 1;
        unsigned int dx_phgated_men : 1;
        unsigned int cfg_tx_rx_gcnt : 8;
        unsigned int reserved_1 : 6;
        unsigned int cfg_gcken_ca_rs : 1;
        unsigned int byp_pll_lock : 1;
    } reg;
} SOC_HIPACKPHY_PHYCLKGATED_UNION;
#endif
#define SOC_HIPACKPHY_PHYCLKGATED_dx_phy_clkgated_START (0)
#define SOC_HIPACKPHY_PHYCLKGATED_dx_phy_clkgated_END (3)
#define SOC_HIPACKPHY_PHYCLKGATED_ac_phy_clkgated_START (8)
#define SOC_HIPACKPHY_PHYCLKGATED_ac_phy_clkgated_END (8)
#define SOC_HIPACKPHY_PHYCLKGATED_ck_phy_clkgated_START (9)
#define SOC_HIPACKPHY_PHYCLKGATED_ck_phy_clkgated_END (12)
#define SOC_HIPACKPHY_PHYCLKGATED_dx_phgated_en_START (13)
#define SOC_HIPACKPHY_PHYCLKGATED_dx_phgated_en_END (13)
#define SOC_HIPACKPHY_PHYCLKGATED_dx_phclkgated_START (14)
#define SOC_HIPACKPHY_PHYCLKGATED_dx_phclkgated_END (14)
#define SOC_HIPACKPHY_PHYCLKGATED_dx_phgated_men_START (15)
#define SOC_HIPACKPHY_PHYCLKGATED_dx_phgated_men_END (15)
#define SOC_HIPACKPHY_PHYCLKGATED_cfg_tx_rx_gcnt_START (16)
#define SOC_HIPACKPHY_PHYCLKGATED_cfg_tx_rx_gcnt_END (23)
#define SOC_HIPACKPHY_PHYCLKGATED_cfg_gcken_ca_rs_START (30)
#define SOC_HIPACKPHY_PHYCLKGATED_cfg_gcken_ca_rs_END (30)
#define SOC_HIPACKPHY_PHYCLKGATED_byp_pll_lock_START (31)
#define SOC_HIPACKPHY_PHYCLKGATED_byp_pll_lock_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t_dram_reset : 8;
        unsigned int reserved : 4;
        unsigned int t_dram_cke_high : 20;
    } reg;
} SOC_HIPACKPHY_PHYTIMER0_UNION;
#endif
#define SOC_HIPACKPHY_PHYTIMER0_t_dram_reset_START (0)
#define SOC_HIPACKPHY_PHYTIMER0_t_dram_reset_END (7)
#define SOC_HIPACKPHY_PHYTIMER0_t_dram_cke_high_START (12)
#define SOC_HIPACKPHY_PHYTIMER0_t_dram_cke_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t_dram_cke_low : 20;
        unsigned int reserved : 8;
        unsigned int tckelck : 4;
    } reg;
} SOC_HIPACKPHY_PHYTIMER1_UNION;
#endif
#define SOC_HIPACKPHY_PHYTIMER1_t_dram_cke_low_START (0)
#define SOC_HIPACKPHY_PHYTIMER1_t_dram_cke_low_END (19)
#define SOC_HIPACKPHY_PHYTIMER1_tckelck_START (28)
#define SOC_HIPACKPHY_PHYTIMER1_tckelck_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pll_pwdn : 3;
        unsigned int reserved_0 : 1;
        unsigned int pll_freq_range : 2;
        unsigned int ac_pll_bp_refpfd : 1;
        unsigned int ac_pll_bp_refvco : 1;
        unsigned int ac_pll_enphsel : 1;
        unsigned int ac_pll_en_cal : 1;
        unsigned int ac_pll_initsel : 1;
        unsigned int ac_pll_lockt_sel : 1;
        unsigned int ac_pll_fopetestfb : 1;
        unsigned int ac_pll_fopetestref : 1;
        unsigned int ac_pll_lockin : 1;
        unsigned int ac_pll_outn : 1;
        unsigned int ac_pll_outp : 1;
        unsigned int reserved_1 : 7;
        unsigned int dx_pll_powerdown_23 : 2;
        unsigned int reserved_2 : 2;
        unsigned int dx_pll_powerdown_47 : 4;
    } reg;
} SOC_HIPACKPHY_PLLCTRL_UNION;
#endif
#define SOC_HIPACKPHY_PLLCTRL_pll_pwdn_START (0)
#define SOC_HIPACKPHY_PLLCTRL_pll_pwdn_END (2)
#define SOC_HIPACKPHY_PLLCTRL_pll_freq_range_START (4)
#define SOC_HIPACKPHY_PLLCTRL_pll_freq_range_END (5)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_bp_refpfd_START (6)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_bp_refpfd_END (6)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_bp_refvco_START (7)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_bp_refvco_END (7)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_enphsel_START (8)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_enphsel_END (8)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_en_cal_START (9)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_en_cal_END (9)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_initsel_START (10)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_initsel_END (10)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_lockt_sel_START (11)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_lockt_sel_END (11)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_fopetestfb_START (12)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_fopetestfb_END (12)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_fopetestref_START (13)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_fopetestref_END (13)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_lockin_START (14)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_lockin_END (14)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_outn_START (15)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_outn_END (15)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_outp_START (16)
#define SOC_HIPACKPHY_PLLCTRL_ac_pll_outp_END (16)
#define SOC_HIPACKPHY_PLLCTRL_dx_pll_powerdown_23_START (24)
#define SOC_HIPACKPHY_PLLCTRL_dx_pll_powerdown_23_END (25)
#define SOC_HIPACKPHY_PLLCTRL_dx_pll_powerdown_47_START (28)
#define SOC_HIPACKPHY_PLLCTRL_dx_pll_powerdown_47_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t_pll_rst : 8;
        unsigned int reserved : 8;
        unsigned int t_pll_lock : 16;
    } reg;
} SOC_HIPACKPHY_PLLTIMER_UNION;
#endif
#define SOC_HIPACKPHY_PLLTIMER_t_pll_rst_START (0)
#define SOC_HIPACKPHY_PLLTIMER_t_pll_rst_END (7)
#define SOC_HIPACKPHY_PLLTIMER_t_pll_lock_START (16)
#define SOC_HIPACKPHY_PLLTIMER_t_pll_lock_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dly_meas_type : 1;
        unsigned int dly_track_type : 1;
        unsigned int dlytrack_dqsgth : 2;
        unsigned int dynamic_dqsgen : 1;
        unsigned int dynamic_dqsen : 1;
        unsigned int phy_autoref_en : 1;
        unsigned int dly_meas_type_2T : 1;
        unsigned int dly_track_limit : 7;
        unsigned int reserved_0 : 1;
        unsigned int dynamic_dqsg_ph_dis : 1;
        unsigned int dynamic_dqs_cyc_dis : 1;
        unsigned int dynamic_dqsbdl30_dis : 1;
        unsigned int reserved_1 : 1;
        unsigned int dlytrack_dqsth : 2;
        unsigned int dlytrack_dqsg_tap : 2;
        unsigned int dlytrack_dqs_tap : 2;
        unsigned int dlytrack_cyc_tap : 4;
        unsigned int rdqsg_mondly_type : 2;
    } reg;
} SOC_HIPACKPHY_DLYMEASCTRL_UNION;
#endif
#define SOC_HIPACKPHY_DLYMEASCTRL_dly_meas_type_START (0)
#define SOC_HIPACKPHY_DLYMEASCTRL_dly_meas_type_END (0)
#define SOC_HIPACKPHY_DLYMEASCTRL_dly_track_type_START (1)
#define SOC_HIPACKPHY_DLYMEASCTRL_dly_track_type_END (1)
#define SOC_HIPACKPHY_DLYMEASCTRL_dlytrack_dqsgth_START (2)
#define SOC_HIPACKPHY_DLYMEASCTRL_dlytrack_dqsgth_END (3)
#define SOC_HIPACKPHY_DLYMEASCTRL_dynamic_dqsgen_START (4)
#define SOC_HIPACKPHY_DLYMEASCTRL_dynamic_dqsgen_END (4)
#define SOC_HIPACKPHY_DLYMEASCTRL_dynamic_dqsen_START (5)
#define SOC_HIPACKPHY_DLYMEASCTRL_dynamic_dqsen_END (5)
#define SOC_HIPACKPHY_DLYMEASCTRL_phy_autoref_en_START (6)
#define SOC_HIPACKPHY_DLYMEASCTRL_phy_autoref_en_END (6)
#define SOC_HIPACKPHY_DLYMEASCTRL_dly_meas_type_2T_START (7)
#define SOC_HIPACKPHY_DLYMEASCTRL_dly_meas_type_2T_END (7)
#define SOC_HIPACKPHY_DLYMEASCTRL_dly_track_limit_START (8)
#define SOC_HIPACKPHY_DLYMEASCTRL_dly_track_limit_END (14)
#define SOC_HIPACKPHY_DLYMEASCTRL_dynamic_dqsg_ph_dis_START (16)
#define SOC_HIPACKPHY_DLYMEASCTRL_dynamic_dqsg_ph_dis_END (16)
#define SOC_HIPACKPHY_DLYMEASCTRL_dynamic_dqs_cyc_dis_START (17)
#define SOC_HIPACKPHY_DLYMEASCTRL_dynamic_dqs_cyc_dis_END (17)
#define SOC_HIPACKPHY_DLYMEASCTRL_dynamic_dqsbdl30_dis_START (18)
#define SOC_HIPACKPHY_DLYMEASCTRL_dynamic_dqsbdl30_dis_END (18)
#define SOC_HIPACKPHY_DLYMEASCTRL_dlytrack_dqsth_START (20)
#define SOC_HIPACKPHY_DLYMEASCTRL_dlytrack_dqsth_END (21)
#define SOC_HIPACKPHY_DLYMEASCTRL_dlytrack_dqsg_tap_START (22)
#define SOC_HIPACKPHY_DLYMEASCTRL_dlytrack_dqsg_tap_END (23)
#define SOC_HIPACKPHY_DLYMEASCTRL_dlytrack_dqs_tap_START (24)
#define SOC_HIPACKPHY_DLYMEASCTRL_dlytrack_dqs_tap_END (25)
#define SOC_HIPACKPHY_DLYMEASCTRL_dlytrack_cyc_tap_START (26)
#define SOC_HIPACKPHY_DLYMEASCTRL_dlytrack_cyc_tap_END (29)
#define SOC_HIPACKPHY_DLYMEASCTRL_rdqsg_mondly_type_START (30)
#define SOC_HIPACKPHY_DLYMEASCTRL_rdqsg_mondly_type_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int zcomp_rsp_dly : 6;
        unsigned int tzcomp_upddly : 6;
        unsigned int zcomp_num : 4;
        unsigned int zcalrt_range : 6;
        unsigned int reserved : 3;
        unsigned int zcal_nlatch_inv : 1;
        unsigned int zcal_platch_inv : 1;
        unsigned int zcal_pnsequence : 1;
        unsigned int zcal_errstopup : 1;
        unsigned int zcalrt_updckelh_dis : 1;
        unsigned int zcalrt_en : 1;
        unsigned int zcfuzzy_en : 1;
    } reg;
} SOC_HIPACKPHY_IMPCTRL_UNION;
#endif
#define SOC_HIPACKPHY_IMPCTRL_zcomp_rsp_dly_START (0)
#define SOC_HIPACKPHY_IMPCTRL_zcomp_rsp_dly_END (5)
#define SOC_HIPACKPHY_IMPCTRL_tzcomp_upddly_START (6)
#define SOC_HIPACKPHY_IMPCTRL_tzcomp_upddly_END (11)
#define SOC_HIPACKPHY_IMPCTRL_zcomp_num_START (12)
#define SOC_HIPACKPHY_IMPCTRL_zcomp_num_END (15)
#define SOC_HIPACKPHY_IMPCTRL_zcalrt_range_START (16)
#define SOC_HIPACKPHY_IMPCTRL_zcalrt_range_END (21)
#define SOC_HIPACKPHY_IMPCTRL_zcal_nlatch_inv_START (25)
#define SOC_HIPACKPHY_IMPCTRL_zcal_nlatch_inv_END (25)
#define SOC_HIPACKPHY_IMPCTRL_zcal_platch_inv_START (26)
#define SOC_HIPACKPHY_IMPCTRL_zcal_platch_inv_END (26)
#define SOC_HIPACKPHY_IMPCTRL_zcal_pnsequence_START (27)
#define SOC_HIPACKPHY_IMPCTRL_zcal_pnsequence_END (27)
#define SOC_HIPACKPHY_IMPCTRL_zcal_errstopup_START (28)
#define SOC_HIPACKPHY_IMPCTRL_zcal_errstopup_END (28)
#define SOC_HIPACKPHY_IMPCTRL_zcalrt_updckelh_dis_START (29)
#define SOC_HIPACKPHY_IMPCTRL_zcalrt_updckelh_dis_END (29)
#define SOC_HIPACKPHY_IMPCTRL_zcalrt_en_START (30)
#define SOC_HIPACKPHY_IMPCTRL_zcalrt_en_END (30)
#define SOC_HIPACKPHY_IMPCTRL_zcfuzzy_en_START (31)
#define SOC_HIPACKPHY_IMPCTRL_zcfuzzy_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int zcode_ndrv : 6;
        unsigned int reserved_0 : 1;
        unsigned int ndrv_cal_result : 1;
        unsigned int zcode_ndrv_cal : 7;
        unsigned int reserved_1 : 1;
        unsigned int zcode_pdrv : 6;
        unsigned int reserved_2 : 1;
        unsigned int pdrv_cal_result : 1;
        unsigned int zcode_pdrv_cal : 7;
        unsigned int reserved_3 : 1;
    } reg;
} SOC_HIPACKPHY_IMPSTATUS_UNION;
#endif
#define SOC_HIPACKPHY_IMPSTATUS_zcode_ndrv_START (0)
#define SOC_HIPACKPHY_IMPSTATUS_zcode_ndrv_END (5)
#define SOC_HIPACKPHY_IMPSTATUS_ndrv_cal_result_START (7)
#define SOC_HIPACKPHY_IMPSTATUS_ndrv_cal_result_END (7)
#define SOC_HIPACKPHY_IMPSTATUS_zcode_ndrv_cal_START (8)
#define SOC_HIPACKPHY_IMPSTATUS_zcode_ndrv_cal_END (14)
#define SOC_HIPACKPHY_IMPSTATUS_zcode_pdrv_START (16)
#define SOC_HIPACKPHY_IMPSTATUS_zcode_pdrv_END (21)
#define SOC_HIPACKPHY_IMPSTATUS_pdrv_cal_result_START (23)
#define SOC_HIPACKPHY_IMPSTATUS_pdrv_cal_result_END (23)
#define SOC_HIPACKPHY_IMPSTATUS_zcode_pdrv_cal_START (24)
#define SOC_HIPACKPHY_IMPSTATUS_zcode_pdrv_cal_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dram_type : 3;
        unsigned int dram_type_exd : 1;
        unsigned int nosra : 1;
        unsigned int ma2t : 1;
        unsigned int maddr_mir : 1;
        unsigned int lpddr23_mrw11_en : 1;
        unsigned int lpddr23_pre_en : 1;
        unsigned int lpddr23_mrw1617_en : 1;
        unsigned int lpddr23_zqc_en : 1;
        unsigned int lpddr23_mrw_rst_ca3t : 1;
        unsigned int lpddr23_early_cat_en : 1;
        unsigned int ddr4par_en : 1;
        unsigned int mrs_seq_prog_en : 1;
        unsigned int reserved_0 : 1;
        unsigned int cfg_tppd : 3;
        unsigned int reserved_1 : 13;
    } reg;
} SOC_HIPACKPHY_DRAMCFG_UNION;
#endif
#define SOC_HIPACKPHY_DRAMCFG_dram_type_START (0)
#define SOC_HIPACKPHY_DRAMCFG_dram_type_END (2)
#define SOC_HIPACKPHY_DRAMCFG_dram_type_exd_START (3)
#define SOC_HIPACKPHY_DRAMCFG_dram_type_exd_END (3)
#define SOC_HIPACKPHY_DRAMCFG_nosra_START (4)
#define SOC_HIPACKPHY_DRAMCFG_nosra_END (4)
#define SOC_HIPACKPHY_DRAMCFG_ma2t_START (5)
#define SOC_HIPACKPHY_DRAMCFG_ma2t_END (5)
#define SOC_HIPACKPHY_DRAMCFG_maddr_mir_START (6)
#define SOC_HIPACKPHY_DRAMCFG_maddr_mir_END (6)
#define SOC_HIPACKPHY_DRAMCFG_lpddr23_mrw11_en_START (7)
#define SOC_HIPACKPHY_DRAMCFG_lpddr23_mrw11_en_END (7)
#define SOC_HIPACKPHY_DRAMCFG_lpddr23_pre_en_START (8)
#define SOC_HIPACKPHY_DRAMCFG_lpddr23_pre_en_END (8)
#define SOC_HIPACKPHY_DRAMCFG_lpddr23_mrw1617_en_START (9)
#define SOC_HIPACKPHY_DRAMCFG_lpddr23_mrw1617_en_END (9)
#define SOC_HIPACKPHY_DRAMCFG_lpddr23_zqc_en_START (10)
#define SOC_HIPACKPHY_DRAMCFG_lpddr23_zqc_en_END (10)
#define SOC_HIPACKPHY_DRAMCFG_lpddr23_mrw_rst_ca3t_START (11)
#define SOC_HIPACKPHY_DRAMCFG_lpddr23_mrw_rst_ca3t_END (11)
#define SOC_HIPACKPHY_DRAMCFG_lpddr23_early_cat_en_START (12)
#define SOC_HIPACKPHY_DRAMCFG_lpddr23_early_cat_en_END (12)
#define SOC_HIPACKPHY_DRAMCFG_ddr4par_en_START (13)
#define SOC_HIPACKPHY_DRAMCFG_ddr4par_en_END (13)
#define SOC_HIPACKPHY_DRAMCFG_mrs_seq_prog_en_START (14)
#define SOC_HIPACKPHY_DRAMCFG_mrs_seq_prog_en_END (14)
#define SOC_HIPACKPHY_DRAMCFG_cfg_tppd_START (16)
#define SOC_HIPACKPHY_DRAMCFG_cfg_tppd_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t_rtp : 4;
        unsigned int t_wtr : 4;
        unsigned int t_rp : 4;
        unsigned int t_rcd : 4;
        unsigned int t_ras : 6;
        unsigned int t_rrd : 4;
        unsigned int t_rc : 6;
    } reg;
} SOC_HIPACKPHY_DRAMTIMER0_UNION;
#endif
#define SOC_HIPACKPHY_DRAMTIMER0_t_rtp_START (0)
#define SOC_HIPACKPHY_DRAMTIMER0_t_rtp_END (3)
#define SOC_HIPACKPHY_DRAMTIMER0_t_wtr_START (4)
#define SOC_HIPACKPHY_DRAMTIMER0_t_wtr_END (7)
#define SOC_HIPACKPHY_DRAMTIMER0_t_rp_START (8)
#define SOC_HIPACKPHY_DRAMTIMER0_t_rp_END (11)
#define SOC_HIPACKPHY_DRAMTIMER0_t_rcd_START (12)
#define SOC_HIPACKPHY_DRAMTIMER0_t_rcd_END (15)
#define SOC_HIPACKPHY_DRAMTIMER0_t_ras_START (16)
#define SOC_HIPACKPHY_DRAMTIMER0_t_ras_END (21)
#define SOC_HIPACKPHY_DRAMTIMER0_t_rrd_START (22)
#define SOC_HIPACKPHY_DRAMTIMER0_t_rrd_END (25)
#define SOC_HIPACKPHY_DRAMTIMER0_t_rc_START (26)
#define SOC_HIPACKPHY_DRAMTIMER0_t_rc_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t_mrd : 4;
        unsigned int t_mod : 5;
        unsigned int t_faw : 6;
        unsigned int reserved_0: 1;
        unsigned int t_rfc : 9;
        unsigned int t_rtw : 5;
        unsigned int reserved_1: 2;
    } reg;
} SOC_HIPACKPHY_DRAMTIMER1_UNION;
#endif
#define SOC_HIPACKPHY_DRAMTIMER1_t_mrd_START (0)
#define SOC_HIPACKPHY_DRAMTIMER1_t_mrd_END (3)
#define SOC_HIPACKPHY_DRAMTIMER1_t_mod_START (4)
#define SOC_HIPACKPHY_DRAMTIMER1_t_mod_END (8)
#define SOC_HIPACKPHY_DRAMTIMER1_t_faw_START (9)
#define SOC_HIPACKPHY_DRAMTIMER1_t_faw_END (14)
#define SOC_HIPACKPHY_DRAMTIMER1_t_rfc_START (16)
#define SOC_HIPACKPHY_DRAMTIMER1_t_rfc_END (24)
#define SOC_HIPACKPHY_DRAMTIMER1_t_rtw_START (25)
#define SOC_HIPACKPHY_DRAMTIMER1_t_rtw_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t_xs : 10;
        unsigned int t_xp : 5;
        unsigned int reserved_0: 1;
        unsigned int t_cke : 4;
        unsigned int t_dllk : 10;
        unsigned int reserved_1: 1;
        unsigned int t_ccd : 1;
    } reg;
} SOC_HIPACKPHY_DRAMTIMER2_UNION;
#endif
#define SOC_HIPACKPHY_DRAMTIMER2_t_xs_START (0)
#define SOC_HIPACKPHY_DRAMTIMER2_t_xs_END (9)
#define SOC_HIPACKPHY_DRAMTIMER2_t_xp_START (10)
#define SOC_HIPACKPHY_DRAMTIMER2_t_xp_END (14)
#define SOC_HIPACKPHY_DRAMTIMER2_t_cke_START (16)
#define SOC_HIPACKPHY_DRAMTIMER2_t_cke_END (19)
#define SOC_HIPACKPHY_DRAMTIMER2_t_dllk_START (20)
#define SOC_HIPACKPHY_DRAMTIMER2_t_dllk_END (29)
#define SOC_HIPACKPHY_DRAMTIMER2_t_ccd_START (31)
#define SOC_HIPACKPHY_DRAMTIMER2_t_ccd_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t_zcal : 10;
        unsigned int t_init5 : 14;
        unsigned int tdshtrain : 4;
        unsigned int t_wr : 4;
    } reg;
} SOC_HIPACKPHY_DRAMTIMER3_UNION;
#endif
#define SOC_HIPACKPHY_DRAMTIMER3_t_zcal_START (0)
#define SOC_HIPACKPHY_DRAMTIMER3_t_zcal_END (9)
#define SOC_HIPACKPHY_DRAMTIMER3_t_init5_START (10)
#define SOC_HIPACKPHY_DRAMTIMER3_t_init5_END (23)
#define SOC_HIPACKPHY_DRAMTIMER3_tdshtrain_START (24)
#define SOC_HIPACKPHY_DRAMTIMER3_tdshtrain_END (27)
#define SOC_HIPACKPHY_DRAMTIMER3_t_wr_START (28)
#define SOC_HIPACKPHY_DRAMTIMER3_t_wr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t_wlmrd : 6;
        unsigned int t_wr_ext : 1;
        unsigned int t_wlo : 5;
        unsigned int t_odt : 4;
        unsigned int t_ccd_s : 4;
        unsigned int t_vref : 3;
        unsigned int reserved : 1;
        unsigned int t_odton : 4;
        unsigned int t_ccd_ddr4 : 4;
    } reg;
} SOC_HIPACKPHY_DRAMTIMER4_UNION;
#endif
#define SOC_HIPACKPHY_DRAMTIMER4_t_wlmrd_START (0)
#define SOC_HIPACKPHY_DRAMTIMER4_t_wlmrd_END (5)
#define SOC_HIPACKPHY_DRAMTIMER4_t_wr_ext_START (6)
#define SOC_HIPACKPHY_DRAMTIMER4_t_wr_ext_END (6)
#define SOC_HIPACKPHY_DRAMTIMER4_t_wlo_START (7)
#define SOC_HIPACKPHY_DRAMTIMER4_t_wlo_END (11)
#define SOC_HIPACKPHY_DRAMTIMER4_t_odt_START (12)
#define SOC_HIPACKPHY_DRAMTIMER4_t_odt_END (15)
#define SOC_HIPACKPHY_DRAMTIMER4_t_ccd_s_START (16)
#define SOC_HIPACKPHY_DRAMTIMER4_t_ccd_s_END (19)
#define SOC_HIPACKPHY_DRAMTIMER4_t_vref_START (20)
#define SOC_HIPACKPHY_DRAMTIMER4_t_vref_END (22)
#define SOC_HIPACKPHY_DRAMTIMER4_t_odton_START (24)
#define SOC_HIPACKPHY_DRAMTIMER4_t_odton_END (27)
#define SOC_HIPACKPHY_DRAMTIMER4_t_ccd_ddr4_START (28)
#define SOC_HIPACKPHY_DRAMTIMER4_t_ccd_ddr4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wodt_rank0 : 4;
        unsigned int wodt_rank1 : 4;
        unsigned int wodt_rank2 : 4;
        unsigned int wodt_rank3 : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_HIPACKPHY_ODTCR_UNION;
#endif
#define SOC_HIPACKPHY_ODTCR_wodt_rank0_START (0)
#define SOC_HIPACKPHY_ODTCR_wodt_rank0_END (3)
#define SOC_HIPACKPHY_ODTCR_wodt_rank1_START (4)
#define SOC_HIPACKPHY_ODTCR_wodt_rank1_END (7)
#define SOC_HIPACKPHY_ODTCR_wodt_rank2_START (8)
#define SOC_HIPACKPHY_ODTCR_wodt_rank2_END (11)
#define SOC_HIPACKPHY_ODTCR_wodt_rank3_START (12)
#define SOC_HIPACKPHY_ODTCR_wodt_rank3_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dtr_rank : 4;
        unsigned int dqsgsl_mrgn : 8;
        unsigned int reserved : 4;
        unsigned int wl_ph_delta : 6;
        unsigned int gtfback_en : 1;
        unsigned int gdsrten : 1;
        unsigned int gtdsdly : 6;
        unsigned int dtrerrstop : 1;
        unsigned int detskipeyop : 1;
    } reg;
} SOC_HIPACKPHY_TRAINCTRL0_UNION;
#endif
#define SOC_HIPACKPHY_TRAINCTRL0_dtr_rank_START (0)
#define SOC_HIPACKPHY_TRAINCTRL0_dtr_rank_END (3)
#define SOC_HIPACKPHY_TRAINCTRL0_dqsgsl_mrgn_START (4)
#define SOC_HIPACKPHY_TRAINCTRL0_dqsgsl_mrgn_END (11)
#define SOC_HIPACKPHY_TRAINCTRL0_wl_ph_delta_START (16)
#define SOC_HIPACKPHY_TRAINCTRL0_wl_ph_delta_END (21)
#define SOC_HIPACKPHY_TRAINCTRL0_gtfback_en_START (22)
#define SOC_HIPACKPHY_TRAINCTRL0_gtfback_en_END (22)
#define SOC_HIPACKPHY_TRAINCTRL0_gdsrten_START (23)
#define SOC_HIPACKPHY_TRAINCTRL0_gdsrten_END (23)
#define SOC_HIPACKPHY_TRAINCTRL0_gtdsdly_START (24)
#define SOC_HIPACKPHY_TRAINCTRL0_gtdsdly_END (29)
#define SOC_HIPACKPHY_TRAINCTRL0_dtrerrstop_START (30)
#define SOC_HIPACKPHY_TRAINCTRL0_dtrerrstop_END (30)
#define SOC_HIPACKPHY_TRAINCTRL0_detskipeyop_START (31)
#define SOC_HIPACKPHY_TRAINCTRL0_detskipeyop_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rank_en : 16;
        unsigned int dtbankgrp : 3;
        unsigned int reserved_0 : 1;
        unsigned int dtbankgrp_tg1 : 3;
        unsigned int reserved_1 : 1;
        unsigned int wdert_bdl_shift_step : 2;
        unsigned int wdert_bdl_check_step : 2;
        unsigned int reserved_2 : 4;
    } reg;
} SOC_HIPACKPHY_RANKEN_UNION;
#endif
#define SOC_HIPACKPHY_RANKEN_rank_en_START (0)
#define SOC_HIPACKPHY_RANKEN_rank_en_END (15)
#define SOC_HIPACKPHY_RANKEN_dtbankgrp_START (16)
#define SOC_HIPACKPHY_RANKEN_dtbankgrp_END (18)
#define SOC_HIPACKPHY_RANKEN_dtbankgrp_tg1_START (20)
#define SOC_HIPACKPHY_RANKEN_dtbankgrp_tg1_END (22)
#define SOC_HIPACKPHY_RANKEN_wdert_bdl_shift_step_START (24)
#define SOC_HIPACKPHY_RANKEN_wdert_bdl_shift_step_END (25)
#define SOC_HIPACKPHY_RANKEN_wdert_bdl_check_step_START (26)
#define SOC_HIPACKPHY_RANKEN_wdert_bdl_check_step_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dtbank : 3;
        unsigned int reserved : 1;
        unsigned int dtcol : 12;
        unsigned int dtrow : 16;
    } reg;
} SOC_HIPACKPHY_TRAINMADDR_UNION;
#endif
#define SOC_HIPACKPHY_TRAINMADDR_dtbank_START (0)
#define SOC_HIPACKPHY_TRAINMADDR_dtbank_END (2)
#define SOC_HIPACKPHY_TRAINMADDR_dtcol_START (4)
#define SOC_HIPACKPHY_TRAINMADDR_dtcol_END (15)
#define SOC_HIPACKPHY_TRAINMADDR_dtrow_START (16)
#define SOC_HIPACKPHY_TRAINMADDR_dtrow_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bist_op : 2;
        unsigned int reserved_0 : 2;
        unsigned int bist_mode : 3;
        unsigned int reserved_1 : 1;
        unsigned int bist_pat : 3;
        unsigned int sso_bist_cnt : 3;
        unsigned int reserved_2 : 1;
        unsigned int dfi_phyupd_disable : 1;
        unsigned int bist_fail_stop : 8;
        unsigned int rnk_sw_mode : 1;
        unsigned int brst_cnt : 7;
    } reg;
} SOC_HIPACKPHY_BISTCTRL_UNION;
#endif
#define SOC_HIPACKPHY_BISTCTRL_bist_op_START (0)
#define SOC_HIPACKPHY_BISTCTRL_bist_op_END (1)
#define SOC_HIPACKPHY_BISTCTRL_bist_mode_START (4)
#define SOC_HIPACKPHY_BISTCTRL_bist_mode_END (6)
#define SOC_HIPACKPHY_BISTCTRL_bist_pat_START (8)
#define SOC_HIPACKPHY_BISTCTRL_bist_pat_END (10)
#define SOC_HIPACKPHY_BISTCTRL_sso_bist_cnt_START (11)
#define SOC_HIPACKPHY_BISTCTRL_sso_bist_cnt_END (13)
#define SOC_HIPACKPHY_BISTCTRL_dfi_phyupd_disable_START (15)
#define SOC_HIPACKPHY_BISTCTRL_dfi_phyupd_disable_END (15)
#define SOC_HIPACKPHY_BISTCTRL_bist_fail_stop_START (16)
#define SOC_HIPACKPHY_BISTCTRL_bist_fail_stop_END (23)
#define SOC_HIPACKPHY_BISTCTRL_rnk_sw_mode_START (24)
#define SOC_HIPACKPHY_BISTCTRL_rnk_sw_mode_END (24)
#define SOC_HIPACKPHY_BISTCTRL_brst_cnt_START (25)
#define SOC_HIPACKPHY_BISTCTRL_brst_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bist_data_b0 : 8;
        unsigned int bist_data_b1 : 8;
        unsigned int bist_data_b2 : 8;
        unsigned int bist_data_b3 : 8;
    } reg;
} SOC_HIPACKPHY_BISTDATA0_UNION;
#endif
#define SOC_HIPACKPHY_BISTDATA0_bist_data_b0_START (0)
#define SOC_HIPACKPHY_BISTDATA0_bist_data_b0_END (7)
#define SOC_HIPACKPHY_BISTDATA0_bist_data_b1_START (8)
#define SOC_HIPACKPHY_BISTDATA0_bist_data_b1_END (15)
#define SOC_HIPACKPHY_BISTDATA0_bist_data_b2_START (16)
#define SOC_HIPACKPHY_BISTDATA0_bist_data_b2_END (23)
#define SOC_HIPACKPHY_BISTDATA0_bist_data_b3_START (24)
#define SOC_HIPACKPHY_BISTDATA0_bist_data_b3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bist_data_b4 : 8;
        unsigned int bist_data_b5 : 8;
        unsigned int bist_data_b6 : 8;
        unsigned int bist_data_b7 : 8;
    } reg;
} SOC_HIPACKPHY_BISTDATA1_UNION;
#endif
#define SOC_HIPACKPHY_BISTDATA1_bist_data_b4_START (0)
#define SOC_HIPACKPHY_BISTDATA1_bist_data_b4_END (7)
#define SOC_HIPACKPHY_BISTDATA1_bist_data_b5_START (8)
#define SOC_HIPACKPHY_BISTDATA1_bist_data_b5_END (15)
#define SOC_HIPACKPHY_BISTDATA1_bist_data_b6_START (16)
#define SOC_HIPACKPHY_BISTDATA1_bist_data_b6_END (23)
#define SOC_HIPACKPHY_BISTDATA1_bist_data_b7_START (24)
#define SOC_HIPACKPHY_BISTDATA1_bist_data_b7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bist_done : 1;
        unsigned int bist_acerr : 1;
        unsigned int bist_dxerr : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_HIPACKPHY_BISTSTATUS_UNION;
#endif
#define SOC_HIPACKPHY_BISTSTATUS_bist_done_START (0)
#define SOC_HIPACKPHY_BISTSTATUS_bist_done_END (0)
#define SOC_HIPACKPHY_BISTSTATUS_bist_acerr_START (1)
#define SOC_HIPACKPHY_BISTSTATUS_bist_acerr_END (1)
#define SOC_HIPACKPHY_BISTSTATUS_bist_dxerr_START (2)
#define SOC_HIPACKPHY_BISTSTATUS_bist_dxerr_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mr0 : 16;
        unsigned int mr1 : 16;
    } reg;
} SOC_HIPACKPHY_MODEREG01_UNION;
#endif
#define SOC_HIPACKPHY_MODEREG01_mr0_START (0)
#define SOC_HIPACKPHY_MODEREG01_mr0_END (15)
#define SOC_HIPACKPHY_MODEREG01_mr1_START (16)
#define SOC_HIPACKPHY_MODEREG01_mr1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mr2 : 16;
        unsigned int mr3 : 16;
    } reg;
} SOC_HIPACKPHY_MODEREG23_UNION;
#endif
#define SOC_HIPACKPHY_MODEREG23_mr2_START (0)
#define SOC_HIPACKPHY_MODEREG23_mr2_END (15)
#define SOC_HIPACKPHY_MODEREG23_mr3_START (16)
#define SOC_HIPACKPHY_MODEREG23_mr3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int det_pat_pat : 32;
    } reg;
} SOC_HIPACKPHY_DETPATTERN_UNION;
#endif
#define SOC_HIPACKPHY_DETPATTERN_det_pat_pat_START (0)
#define SOC_HIPACKPHY_DETPATTERN_det_pat_pat_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cfg_wl : 8;
        unsigned int cfg_rl : 8;
        unsigned int scramb_en : 1;
        unsigned int addr_toggle : 1;
        unsigned int addr_delay : 1;
        unsigned int cfg_dlyupd : 1;
        unsigned int swap_en : 3;
        unsigned int ba_addr_scramb_en_lp4_r : 1;
        unsigned int reserved_0 : 1;
        unsigned int swapdm_en : 2;
        unsigned int swapwl_en : 3;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_HIPACKPHY_MISC_UNION;
#endif
#define SOC_HIPACKPHY_MISC_cfg_wl_START (0)
#define SOC_HIPACKPHY_MISC_cfg_wl_END (7)
#define SOC_HIPACKPHY_MISC_cfg_rl_START (8)
#define SOC_HIPACKPHY_MISC_cfg_rl_END (15)
#define SOC_HIPACKPHY_MISC_scramb_en_START (16)
#define SOC_HIPACKPHY_MISC_scramb_en_END (16)
#define SOC_HIPACKPHY_MISC_addr_toggle_START (17)
#define SOC_HIPACKPHY_MISC_addr_toggle_END (17)
#define SOC_HIPACKPHY_MISC_addr_delay_START (18)
#define SOC_HIPACKPHY_MISC_addr_delay_END (18)
#define SOC_HIPACKPHY_MISC_cfg_dlyupd_START (19)
#define SOC_HIPACKPHY_MISC_cfg_dlyupd_END (19)
#define SOC_HIPACKPHY_MISC_swap_en_START (20)
#define SOC_HIPACKPHY_MISC_swap_en_END (22)
#define SOC_HIPACKPHY_MISC_ba_addr_scramb_en_lp4_r_START (23)
#define SOC_HIPACKPHY_MISC_ba_addr_scramb_en_lp4_r_END (23)
#define SOC_HIPACKPHY_MISC_swapdm_en_START (25)
#define SOC_HIPACKPHY_MISC_swapdm_en_END (26)
#define SOC_HIPACKPHY_MISC_swapwl_en_START (27)
#define SOC_HIPACKPHY_MISC_swapwl_en_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int trnkwtw : 5;
        unsigned int trnkrtr : 5;
        unsigned int trnkrtw : 5;
        unsigned int trnkwtr : 5;
        unsigned int reserved : 9;
        unsigned int dfi2iomap : 3;
    } reg;
} SOC_HIPACKPHY_RNK2RNK_UNION;
#endif
#define SOC_HIPACKPHY_RNK2RNK_trnkwtw_START (0)
#define SOC_HIPACKPHY_RNK2RNK_trnkwtw_END (4)
#define SOC_HIPACKPHY_RNK2RNK_trnkrtr_START (5)
#define SOC_HIPACKPHY_RNK2RNK_trnkrtr_END (9)
#define SOC_HIPACKPHY_RNK2RNK_trnkrtw_START (10)
#define SOC_HIPACKPHY_RNK2RNK_trnkrtw_END (14)
#define SOC_HIPACKPHY_RNK2RNK_trnkwtr_START (15)
#define SOC_HIPACKPHY_RNK2RNK_trnkwtr_END (19)
#define SOC_HIPACKPHY_RNK2RNK_dfi2iomap_START (29)
#define SOC_HIPACKPHY_RNK2RNK_dfi2iomap_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int reg_sel_dficlk_rx : 1;
        unsigned int sel_pos_rx : 1;
        unsigned int lp_ck_sel : 2;
        unsigned int reserved_1 : 2;
        unsigned int cmdoen : 1;
        unsigned int ckoen : 3;
        unsigned int ckeoen : 1;
        unsigned int csoen : 1;
        unsigned int resetoen : 1;
        unsigned int reserved_2 : 18;
    } reg;
} SOC_HIPACKPHY_PHYCTRL0_UNION;
#endif
#define SOC_HIPACKPHY_PHYCTRL0_reg_sel_dficlk_rx_START (1)
#define SOC_HIPACKPHY_PHYCTRL0_reg_sel_dficlk_rx_END (1)
#define SOC_HIPACKPHY_PHYCTRL0_sel_pos_rx_START (2)
#define SOC_HIPACKPHY_PHYCTRL0_sel_pos_rx_END (2)
#define SOC_HIPACKPHY_PHYCTRL0_lp_ck_sel_START (3)
#define SOC_HIPACKPHY_PHYCTRL0_lp_ck_sel_END (4)
#define SOC_HIPACKPHY_PHYCTRL0_cmdoen_START (7)
#define SOC_HIPACKPHY_PHYCTRL0_cmdoen_END (7)
#define SOC_HIPACKPHY_PHYCTRL0_ckoen_START (8)
#define SOC_HIPACKPHY_PHYCTRL0_ckoen_END (10)
#define SOC_HIPACKPHY_PHYCTRL0_ckeoen_START (11)
#define SOC_HIPACKPHY_PHYCTRL0_ckeoen_END (11)
#define SOC_HIPACKPHY_PHYCTRL0_csoen_START (12)
#define SOC_HIPACKPHY_PHYCTRL0_csoen_END (12)
#define SOC_HIPACKPHY_PHYCTRL0_resetoen_START (13)
#define SOC_HIPACKPHY_PHYCTRL0_resetoen_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dqs_gated_error_r : 8;
        unsigned int dqs_gated_error : 8;
        unsigned int dqsb_gated_error_r : 8;
        unsigned int dqsb_gated_error : 8;
    } reg;
} SOC_HIPACKPHY_PHYDBG_UNION;
#endif
#define SOC_HIPACKPHY_PHYDBG_dqs_gated_error_r_START (0)
#define SOC_HIPACKPHY_PHYDBG_dqs_gated_error_r_END (7)
#define SOC_HIPACKPHY_PHYDBG_dqs_gated_error_START (8)
#define SOC_HIPACKPHY_PHYDBG_dqs_gated_error_END (15)
#define SOC_HIPACKPHY_PHYDBG_dqsb_gated_error_r_START (16)
#define SOC_HIPACKPHY_PHYDBG_dqsb_gated_error_r_END (23)
#define SOC_HIPACKPHY_PHYDBG_dqsb_gated_error_START (24)
#define SOC_HIPACKPHY_PHYDBG_dqsb_gated_error_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int phyupd_resp : 13;
        unsigned int retrain_en : 1;
        unsigned int gtrten : 1;
        unsigned int rderten : 1;
        unsigned int retrain_thrd : 16;
    } reg;
} SOC_HIPACKPHY_RETCTRL0_UNION;
#endif
#define SOC_HIPACKPHY_RETCTRL0_phyupd_resp_START (0)
#define SOC_HIPACKPHY_RETCTRL0_phyupd_resp_END (12)
#define SOC_HIPACKPHY_RETCTRL0_retrain_en_START (13)
#define SOC_HIPACKPHY_RETCTRL0_retrain_en_END (13)
#define SOC_HIPACKPHY_RETCTRL0_gtrten_START (14)
#define SOC_HIPACKPHY_RETCTRL0_gtrten_END (14)
#define SOC_HIPACKPHY_RETCTRL0_rderten_START (15)
#define SOC_HIPACKPHY_RETCTRL0_rderten_END (15)
#define SOC_HIPACKPHY_RETCTRL0_retrain_thrd_START (16)
#define SOC_HIPACKPHY_RETCTRL0_retrain_thrd_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_dmswap_sel : 4;
        unsigned int rt_onebyone : 1;
        unsigned int fast_wl2_en : 1;
        unsigned int wlpulsecnt : 2;
        unsigned int tphy_wrdata : 1;
        unsigned int ddr4_dm_inv_en : 1;
        unsigned int reserved : 3;
        unsigned int phystop_en : 1;
        unsigned int phyupd_type_nopre : 2;
        unsigned int phyupd_type_pre : 2;
        unsigned int packdbgout : 1;
        unsigned int pllphhalfbdlen : 1;
        unsigned int pllphsel : 2;
        unsigned int wlexitmode : 1;
        unsigned int bl32atonthefly : 1;
        unsigned int swapdfibyte_en : 3;
        unsigned int swapaddr_en : 3;
        unsigned int tphy_wrdata_ext : 2;
    } reg;
} SOC_HIPACKPHY_DMSEL_UNION;
#endif
#define SOC_HIPACKPHY_DMSEL_dxctl_dmswap_sel_START (0)
#define SOC_HIPACKPHY_DMSEL_dxctl_dmswap_sel_END (3)
#define SOC_HIPACKPHY_DMSEL_rt_onebyone_START (4)
#define SOC_HIPACKPHY_DMSEL_rt_onebyone_END (4)
#define SOC_HIPACKPHY_DMSEL_fast_wl2_en_START (5)
#define SOC_HIPACKPHY_DMSEL_fast_wl2_en_END (5)
#define SOC_HIPACKPHY_DMSEL_wlpulsecnt_START (6)
#define SOC_HIPACKPHY_DMSEL_wlpulsecnt_END (7)
#define SOC_HIPACKPHY_DMSEL_tphy_wrdata_START (8)
#define SOC_HIPACKPHY_DMSEL_tphy_wrdata_END (8)
#define SOC_HIPACKPHY_DMSEL_ddr4_dm_inv_en_START (9)
#define SOC_HIPACKPHY_DMSEL_ddr4_dm_inv_en_END (9)
#define SOC_HIPACKPHY_DMSEL_phystop_en_START (13)
#define SOC_HIPACKPHY_DMSEL_phystop_en_END (13)
#define SOC_HIPACKPHY_DMSEL_phyupd_type_nopre_START (14)
#define SOC_HIPACKPHY_DMSEL_phyupd_type_nopre_END (15)
#define SOC_HIPACKPHY_DMSEL_phyupd_type_pre_START (16)
#define SOC_HIPACKPHY_DMSEL_phyupd_type_pre_END (17)
#define SOC_HIPACKPHY_DMSEL_packdbgout_START (18)
#define SOC_HIPACKPHY_DMSEL_packdbgout_END (18)
#define SOC_HIPACKPHY_DMSEL_pllphhalfbdlen_START (19)
#define SOC_HIPACKPHY_DMSEL_pllphhalfbdlen_END (19)
#define SOC_HIPACKPHY_DMSEL_pllphsel_START (20)
#define SOC_HIPACKPHY_DMSEL_pllphsel_END (21)
#define SOC_HIPACKPHY_DMSEL_wlexitmode_START (22)
#define SOC_HIPACKPHY_DMSEL_wlexitmode_END (22)
#define SOC_HIPACKPHY_DMSEL_bl32atonthefly_START (23)
#define SOC_HIPACKPHY_DMSEL_bl32atonthefly_END (23)
#define SOC_HIPACKPHY_DMSEL_swapdfibyte_en_START (24)
#define SOC_HIPACKPHY_DMSEL_swapdfibyte_en_END (26)
#define SOC_HIPACKPHY_DMSEL_swapaddr_en_START (27)
#define SOC_HIPACKPHY_DMSEL_swapaddr_en_END (29)
#define SOC_HIPACKPHY_DMSEL_tphy_wrdata_ext_START (30)
#define SOC_HIPACKPHY_DMSEL_tphy_wrdata_ext_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int trainctl_donewait : 3;
        unsigned int nomrs4rdet : 1;
        unsigned int nopre4wl : 1;
        unsigned int radix3sel : 2;
        unsigned int reserved : 1;
        unsigned int wdert_shift_step : 6;
        unsigned int lpbk_gt_rden_type : 1;
        unsigned int gtrt_ph_reload_type : 1;
        unsigned int empty_time : 4;
        unsigned int cdgc_done_cnt : 4;
        unsigned int det_rstpost_time : 4;
        unsigned int det_sstrstphy_time : 4;
    } reg;
} SOC_HIPACKPHY_TRAINCTRL8_UNION;
#endif
#define SOC_HIPACKPHY_TRAINCTRL8_trainctl_donewait_START (0)
#define SOC_HIPACKPHY_TRAINCTRL8_trainctl_donewait_END (2)
#define SOC_HIPACKPHY_TRAINCTRL8_nomrs4rdet_START (3)
#define SOC_HIPACKPHY_TRAINCTRL8_nomrs4rdet_END (3)
#define SOC_HIPACKPHY_TRAINCTRL8_nopre4wl_START (4)
#define SOC_HIPACKPHY_TRAINCTRL8_nopre4wl_END (4)
#define SOC_HIPACKPHY_TRAINCTRL8_radix3sel_START (5)
#define SOC_HIPACKPHY_TRAINCTRL8_radix3sel_END (6)
#define SOC_HIPACKPHY_TRAINCTRL8_wdert_shift_step_START (8)
#define SOC_HIPACKPHY_TRAINCTRL8_wdert_shift_step_END (13)
#define SOC_HIPACKPHY_TRAINCTRL8_lpbk_gt_rden_type_START (14)
#define SOC_HIPACKPHY_TRAINCTRL8_lpbk_gt_rden_type_END (14)
#define SOC_HIPACKPHY_TRAINCTRL8_gtrt_ph_reload_type_START (15)
#define SOC_HIPACKPHY_TRAINCTRL8_gtrt_ph_reload_type_END (15)
#define SOC_HIPACKPHY_TRAINCTRL8_empty_time_START (16)
#define SOC_HIPACKPHY_TRAINCTRL8_empty_time_END (19)
#define SOC_HIPACKPHY_TRAINCTRL8_cdgc_done_cnt_START (20)
#define SOC_HIPACKPHY_TRAINCTRL8_cdgc_done_cnt_END (23)
#define SOC_HIPACKPHY_TRAINCTRL8_det_rstpost_time_START (24)
#define SOC_HIPACKPHY_TRAINCTRL8_det_rstpost_time_END (27)
#define SOC_HIPACKPHY_TRAINCTRL8_det_sstrstphy_time_START (28)
#define SOC_HIPACKPHY_TRAINCTRL8_det_sstrstphy_time_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dqswap_sel : 32;
    } reg;
} SOC_HIPACKPHY_DQSSEL_UNION;
#endif
#define SOC_HIPACKPHY_DQSSEL_dqswap_sel_START (0)
#define SOC_HIPACKPHY_DQSSEL_dqswap_sel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gds_margin_sel : 3;
        unsigned int dbi_reg_passthrough : 1;
        unsigned int rst_dast_dly : 4;
        unsigned int one_phase_code : 6;
        unsigned int reserved_0 : 1;
        unsigned int rt_ehandle_en : 1;
        unsigned int wdert_check_step : 6;
        unsigned int reserved_1 : 2;
        unsigned int row_react_period_offset : 2;
        unsigned int reserved_2 : 2;
        unsigned int train_reset_time : 4;
    } reg;
} SOC_HIPACKPHY_TRAINCTRL9_UNION;
#endif
#define SOC_HIPACKPHY_TRAINCTRL9_gds_margin_sel_START (0)
#define SOC_HIPACKPHY_TRAINCTRL9_gds_margin_sel_END (2)
#define SOC_HIPACKPHY_TRAINCTRL9_dbi_reg_passthrough_START (3)
#define SOC_HIPACKPHY_TRAINCTRL9_dbi_reg_passthrough_END (3)
#define SOC_HIPACKPHY_TRAINCTRL9_rst_dast_dly_START (4)
#define SOC_HIPACKPHY_TRAINCTRL9_rst_dast_dly_END (7)
#define SOC_HIPACKPHY_TRAINCTRL9_one_phase_code_START (8)
#define SOC_HIPACKPHY_TRAINCTRL9_one_phase_code_END (13)
#define SOC_HIPACKPHY_TRAINCTRL9_rt_ehandle_en_START (15)
#define SOC_HIPACKPHY_TRAINCTRL9_rt_ehandle_en_END (15)
#define SOC_HIPACKPHY_TRAINCTRL9_wdert_check_step_START (16)
#define SOC_HIPACKPHY_TRAINCTRL9_wdert_check_step_END (21)
#define SOC_HIPACKPHY_TRAINCTRL9_row_react_period_offset_START (24)
#define SOC_HIPACKPHY_TRAINCTRL9_row_react_period_offset_END (25)
#define SOC_HIPACKPHY_TRAINCTRL9_train_reset_time_START (28)
#define SOC_HIPACKPHY_TRAINCTRL9_train_reset_time_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dqsgrt_shft : 6;
        unsigned int reserved_0 : 2;
        unsigned int dqsgrt_chk : 6;
        unsigned int reserved_1 : 10;
        unsigned int wdet_trysamp_num : 3;
        unsigned int reserved_2 : 1;
        unsigned int rdet_trysamp_num : 3;
        unsigned int reserved_3 : 1;
    } reg;
} SOC_HIPACKPHY_TRAINCTRL10_UNION;
#endif
#define SOC_HIPACKPHY_TRAINCTRL10_dqsgrt_shft_START (0)
#define SOC_HIPACKPHY_TRAINCTRL10_dqsgrt_shft_END (5)
#define SOC_HIPACKPHY_TRAINCTRL10_dqsgrt_chk_START (8)
#define SOC_HIPACKPHY_TRAINCTRL10_dqsgrt_chk_END (13)
#define SOC_HIPACKPHY_TRAINCTRL10_wdet_trysamp_num_START (24)
#define SOC_HIPACKPHY_TRAINCTRL10_wdet_trysamp_num_END (26)
#define SOC_HIPACKPHY_TRAINCTRL10_rdet_trysamp_num_START (28)
#define SOC_HIPACKPHY_TRAINCTRL10_rdet_trysamp_num_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ac_pll_test : 8;
        unsigned int reserved : 23;
        unsigned int ac_pll_lock : 1;
    } reg;
} SOC_HIPACKPHY_PHYPLLCTRL_AC_UNION;
#endif
#define SOC_HIPACKPHY_PHYPLLCTRL_AC_ac_pll_test_START (0)
#define SOC_HIPACKPHY_PHYPLLCTRL_AC_ac_pll_test_END (7)
#define SOC_HIPACKPHY_PHYPLLCTRL_AC_ac_pll_lock_START (31)
#define SOC_HIPACKPHY_PHYPLLCTRL_AC_ac_pll_lock_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dx_pll_test : 16;
        unsigned int reserved : 12;
        unsigned int dx_pll_lock : 4;
    } reg;
} SOC_HIPACKPHY_PHYPLLCTRL_DX_UNION;
#endif
#define SOC_HIPACKPHY_PHYPLLCTRL_DX_dx_pll_test_START (0)
#define SOC_HIPACKPHY_PHYPLLCTRL_DX_dx_pll_test_END (15)
#define SOC_HIPACKPHY_PHYPLLCTRL_DX_dx_pll_lock_START (28)
#define SOC_HIPACKPHY_PHYPLLCTRL_DX_dx_pll_lock_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sw_wlmode : 1;
        unsigned int sw_gtmode : 1;
        unsigned int reserved_0 : 2;
        unsigned int sw_wlmodeb : 8;
        unsigned int reserved_1 : 19;
        unsigned int wl_wdqs_gated : 1;
    } reg;
} SOC_HIPACKPHY_SWTMODE_UNION;
#endif
#define SOC_HIPACKPHY_SWTMODE_sw_wlmode_START (0)
#define SOC_HIPACKPHY_SWTMODE_sw_wlmode_END (0)
#define SOC_HIPACKPHY_SWTMODE_sw_gtmode_START (1)
#define SOC_HIPACKPHY_SWTMODE_sw_gtmode_END (1)
#define SOC_HIPACKPHY_SWTMODE_sw_wlmodeb_START (4)
#define SOC_HIPACKPHY_SWTMODE_sw_wlmodeb_END (11)
#define SOC_HIPACKPHY_SWTMODE_wl_wdqs_gated_START (31)
#define SOC_HIPACKPHY_SWTMODE_wl_wdqs_gated_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sw_wl_dqs : 1;
        unsigned int reserved : 6;
        unsigned int sw_mrw_req : 1;
        unsigned int sw_mrw_ma : 8;
        unsigned int sw_mrw_op : 16;
    } reg;
} SOC_HIPACKPHY_SWTWLDQS_UNION;
#endif
#define SOC_HIPACKPHY_SWTWLDQS_sw_wl_dqs_START (0)
#define SOC_HIPACKPHY_SWTWLDQS_sw_wl_dqs_END (0)
#define SOC_HIPACKPHY_SWTWLDQS_sw_mrw_req_START (7)
#define SOC_HIPACKPHY_SWTWLDQS_sw_mrw_req_END (7)
#define SOC_HIPACKPHY_SWTWLDQS_sw_mrw_ma_START (8)
#define SOC_HIPACKPHY_SWTWLDQS_sw_mrw_ma_END (15)
#define SOC_HIPACKPHY_SWTWLDQS_sw_mrw_op_START (16)
#define SOC_HIPACKPHY_SWTWLDQS_sw_mrw_op_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wl_dq_result : 8;
        unsigned int gt_result : 8;
        unsigned int gds_result : 8;
        unsigned int reserved : 8;
    } reg;
} SOC_HIPACKPHY_SWTRLT_UNION;
#endif
#define SOC_HIPACKPHY_SWTRLT_wl_dq_result_START (0)
#define SOC_HIPACKPHY_SWTRLT_wl_dq_result_END (7)
#define SOC_HIPACKPHY_SWTRLT_gt_result_START (8)
#define SOC_HIPACKPHY_SWTRLT_gt_result_END (15)
#define SOC_HIPACKPHY_SWTRLT_gds_result_START (16)
#define SOC_HIPACKPHY_SWTRLT_gds_result_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rs_rstcont_passthrough : 4;
        unsigned int reserved_0 : 2;
        unsigned int rs_rst_passthrough : 4;
        unsigned int reserved_1 : 2;
        unsigned int rs_passthrough : 4;
        unsigned int reserved_2 : 2;
        unsigned int rs_rs_passthrough : 4;
        unsigned int reserved_3 : 6;
        unsigned int rsneg_rstcont_passthrough : 1;
        unsigned int rsneg_rst_passthrough : 1;
        unsigned int rsneg_passthrough : 1;
        unsigned int rx_rsneg_passthrough : 1;
    } reg;
} SOC_HIPACKPHY_PHYRSCTRL_UNION;
#endif
#define SOC_HIPACKPHY_PHYRSCTRL_rs_rstcont_passthrough_START (0)
#define SOC_HIPACKPHY_PHYRSCTRL_rs_rstcont_passthrough_END (3)
#define SOC_HIPACKPHY_PHYRSCTRL_rs_rst_passthrough_START (6)
#define SOC_HIPACKPHY_PHYRSCTRL_rs_rst_passthrough_END (9)
#define SOC_HIPACKPHY_PHYRSCTRL_rs_passthrough_START (12)
#define SOC_HIPACKPHY_PHYRSCTRL_rs_passthrough_END (15)
#define SOC_HIPACKPHY_PHYRSCTRL_rs_rs_passthrough_START (18)
#define SOC_HIPACKPHY_PHYRSCTRL_rs_rs_passthrough_END (21)
#define SOC_HIPACKPHY_PHYRSCTRL_rsneg_rstcont_passthrough_START (28)
#define SOC_HIPACKPHY_PHYRSCTRL_rsneg_rstcont_passthrough_END (28)
#define SOC_HIPACKPHY_PHYRSCTRL_rsneg_rst_passthrough_START (29)
#define SOC_HIPACKPHY_PHYRSCTRL_rsneg_rst_passthrough_END (29)
#define SOC_HIPACKPHY_PHYRSCTRL_rsneg_passthrough_START (30)
#define SOC_HIPACKPHY_PHYRSCTRL_rsneg_passthrough_END (30)
#define SOC_HIPACKPHY_PHYRSCTRL_rx_rsneg_passthrough_START (31)
#define SOC_HIPACKPHY_PHYRSCTRL_rx_rsneg_passthrough_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int final_scan_col_cnt_r : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_HIPACKPHY_BISTCTRL2_UNION;
#endif
#define SOC_HIPACKPHY_BISTCTRL2_final_scan_col_cnt_r_START (0)
#define SOC_HIPACKPHY_BISTCTRL2_final_scan_col_cnt_r_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dtbank_tg1 : 3;
        unsigned int reserved : 1;
        unsigned int dtcol_tg1 : 12;
        unsigned int dtrow_tg1 : 16;
    } reg;
} SOC_HIPACKPHY_TRAINMADDRTG1_UNION;
#endif
#define SOC_HIPACKPHY_TRAINMADDRTG1_dtbank_tg1_START (0)
#define SOC_HIPACKPHY_TRAINMADDRTG1_dtbank_tg1_END (2)
#define SOC_HIPACKPHY_TRAINMADDRTG1_dtcol_tg1_START (4)
#define SOC_HIPACKPHY_TRAINMADDRTG1_dtcol_tg1_END (15)
#define SOC_HIPACKPHY_TRAINMADDRTG1_dtrow_tg1_START (16)
#define SOC_HIPACKPHY_TRAINMADDRTG1_dtrow_tg1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t_wl : 8;
        unsigned int t_odton_h : 4;
        unsigned int reserved : 20;
    } reg;
} SOC_HIPACKPHY_DRAMTIMER5_UNION;
#endif
#define SOC_HIPACKPHY_DRAMTIMER5_t_wl_START (0)
#define SOC_HIPACKPHY_DRAMTIMER5_t_wl_END (7)
#define SOC_HIPACKPHY_DRAMTIMER5_t_odton_h_START (8)
#define SOC_HIPACKPHY_DRAMTIMER5_t_odton_h_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vreft_bist_runtime : 8;
        unsigned int vreft_dlyupwait : 4;
        unsigned int vreft_hor_update : 1;
        unsigned int DCC_en : 1;
        unsigned int vreft_method2 : 1;
        unsigned int vreft_dborg : 1;
        unsigned int vreft_bist_pass_cnt : 5;
        unsigned int vreft_no_dec : 1;
        unsigned int reserved : 10;
    } reg;
} SOC_HIPACKPHY_VREFTCTRL_UNION;
#endif
#define SOC_HIPACKPHY_VREFTCTRL_vreft_bist_runtime_START (0)
#define SOC_HIPACKPHY_VREFTCTRL_vreft_bist_runtime_END (7)
#define SOC_HIPACKPHY_VREFTCTRL_vreft_dlyupwait_START (8)
#define SOC_HIPACKPHY_VREFTCTRL_vreft_dlyupwait_END (11)
#define SOC_HIPACKPHY_VREFTCTRL_vreft_hor_update_START (12)
#define SOC_HIPACKPHY_VREFTCTRL_vreft_hor_update_END (12)
#define SOC_HIPACKPHY_VREFTCTRL_DCC_en_START (13)
#define SOC_HIPACKPHY_VREFTCTRL_DCC_en_END (13)
#define SOC_HIPACKPHY_VREFTCTRL_vreft_method2_START (14)
#define SOC_HIPACKPHY_VREFTCTRL_vreft_method2_END (14)
#define SOC_HIPACKPHY_VREFTCTRL_vreft_dborg_START (15)
#define SOC_HIPACKPHY_VREFTCTRL_vreft_dborg_END (15)
#define SOC_HIPACKPHY_VREFTCTRL_vreft_bist_pass_cnt_START (16)
#define SOC_HIPACKPHY_VREFTCTRL_vreft_bist_pass_cnt_END (20)
#define SOC_HIPACKPHY_VREFTCTRL_vreft_no_dec_START (21)
#define SOC_HIPACKPHY_VREFTCTRL_vreft_no_dec_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dvreft_maxv : 6;
        unsigned int dvreft_minv : 6;
        unsigned int dvreft_step : 6;
        unsigned int dvreft_hckpts : 4;
        unsigned int reserved : 9;
        unsigned int pdaen : 1;
    } reg;
} SOC_HIPACKPHY_DVRFTCTRL_UNION;
#endif
#define SOC_HIPACKPHY_DVRFTCTRL_dvreft_maxv_START (0)
#define SOC_HIPACKPHY_DVRFTCTRL_dvreft_maxv_END (5)
#define SOC_HIPACKPHY_DVRFTCTRL_dvreft_minv_START (6)
#define SOC_HIPACKPHY_DVRFTCTRL_dvreft_minv_END (11)
#define SOC_HIPACKPHY_DVRFTCTRL_dvreft_step_START (12)
#define SOC_HIPACKPHY_DVRFTCTRL_dvreft_step_END (17)
#define SOC_HIPACKPHY_DVRFTCTRL_dvreft_hckpts_START (18)
#define SOC_HIPACKPHY_DVRFTCTRL_dvreft_hckpts_END (21)
#define SOC_HIPACKPHY_DVRFTCTRL_pdaen_START (31)
#define SOC_HIPACKPHY_DVRFTCTRL_pdaen_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hvreft_maxv : 6;
        unsigned int hvreft_minv : 6;
        unsigned int hvreft_step : 6;
        unsigned int hvreft_hckpts : 6;
        unsigned int reserved : 8;
    } reg;
} SOC_HIPACKPHY_HVRFTCTRL_UNION;
#endif
#define SOC_HIPACKPHY_HVRFTCTRL_hvreft_maxv_START (0)
#define SOC_HIPACKPHY_HVRFTCTRL_hvreft_maxv_END (5)
#define SOC_HIPACKPHY_HVRFTCTRL_hvreft_minv_START (6)
#define SOC_HIPACKPHY_HVRFTCTRL_hvreft_minv_END (11)
#define SOC_HIPACKPHY_HVRFTCTRL_hvreft_step_START (12)
#define SOC_HIPACKPHY_HVRFTCTRL_hvreft_step_END (17)
#define SOC_HIPACKPHY_HVRFTCTRL_hvreft_hckpts_START (18)
#define SOC_HIPACKPHY_HVRFTCTRL_hvreft_hckpts_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdet_samp_num : 8;
        unsigned int cfg_fast_rdet_cnt : 3;
        unsigned int wdet_ct_dqs_en : 1;
        unsigned int wrdet_av_en : 1;
        unsigned int wdet_rbs_en : 1;
        unsigned int wdet_ds_en : 1;
        unsigned int wdet_lbs_en : 1;
        unsigned int rdet_samp_num : 8;
        unsigned int cfg_wdert_hyp_mode_sel : 1;
        unsigned int fast_rdet_en : 1;
        unsigned int rdet_dq_evenodd_en : 1;
        unsigned int rdet_ct_dqs_en : 1;
        unsigned int rdet_av_en : 1;
        unsigned int rdet_rbs_en : 1;
        unsigned int rdet_ds_en : 1;
        unsigned int rdet_lbs_en : 1;
    } reg;
} SOC_HIPACKPHY_TRAINCTRL1_UNION;
#endif
#define SOC_HIPACKPHY_TRAINCTRL1_wdet_samp_num_START (0)
#define SOC_HIPACKPHY_TRAINCTRL1_wdet_samp_num_END (7)
#define SOC_HIPACKPHY_TRAINCTRL1_cfg_fast_rdet_cnt_START (8)
#define SOC_HIPACKPHY_TRAINCTRL1_cfg_fast_rdet_cnt_END (10)
#define SOC_HIPACKPHY_TRAINCTRL1_wdet_ct_dqs_en_START (11)
#define SOC_HIPACKPHY_TRAINCTRL1_wdet_ct_dqs_en_END (11)
#define SOC_HIPACKPHY_TRAINCTRL1_wrdet_av_en_START (12)
#define SOC_HIPACKPHY_TRAINCTRL1_wrdet_av_en_END (12)
#define SOC_HIPACKPHY_TRAINCTRL1_wdet_rbs_en_START (13)
#define SOC_HIPACKPHY_TRAINCTRL1_wdet_rbs_en_END (13)
#define SOC_HIPACKPHY_TRAINCTRL1_wdet_ds_en_START (14)
#define SOC_HIPACKPHY_TRAINCTRL1_wdet_ds_en_END (14)
#define SOC_HIPACKPHY_TRAINCTRL1_wdet_lbs_en_START (15)
#define SOC_HIPACKPHY_TRAINCTRL1_wdet_lbs_en_END (15)
#define SOC_HIPACKPHY_TRAINCTRL1_rdet_samp_num_START (16)
#define SOC_HIPACKPHY_TRAINCTRL1_rdet_samp_num_END (23)
#define SOC_HIPACKPHY_TRAINCTRL1_cfg_wdert_hyp_mode_sel_START (24)
#define SOC_HIPACKPHY_TRAINCTRL1_cfg_wdert_hyp_mode_sel_END (24)
#define SOC_HIPACKPHY_TRAINCTRL1_fast_rdet_en_START (25)
#define SOC_HIPACKPHY_TRAINCTRL1_fast_rdet_en_END (25)
#define SOC_HIPACKPHY_TRAINCTRL1_rdet_dq_evenodd_en_START (26)
#define SOC_HIPACKPHY_TRAINCTRL1_rdet_dq_evenodd_en_END (26)
#define SOC_HIPACKPHY_TRAINCTRL1_rdet_ct_dqs_en_START (27)
#define SOC_HIPACKPHY_TRAINCTRL1_rdet_ct_dqs_en_END (27)
#define SOC_HIPACKPHY_TRAINCTRL1_rdet_av_en_START (28)
#define SOC_HIPACKPHY_TRAINCTRL1_rdet_av_en_END (28)
#define SOC_HIPACKPHY_TRAINCTRL1_rdet_rbs_en_START (29)
#define SOC_HIPACKPHY_TRAINCTRL1_rdet_rbs_en_END (29)
#define SOC_HIPACKPHY_TRAINCTRL1_rdet_ds_en_START (30)
#define SOC_HIPACKPHY_TRAINCTRL1_rdet_ds_en_END (30)
#define SOC_HIPACKPHY_TRAINCTRL1_rdet_lbs_en_START (31)
#define SOC_HIPACKPHY_TRAINCTRL1_rdet_lbs_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mrr_pat_A : 8;
        unsigned int mrr_pat_B : 8;
        unsigned int mrr_pat_mask : 8;
        unsigned int rbound_sfal_en : 1;
        unsigned int fast_gt_en : 1;
        unsigned int fast_gdst_en : 1;
        unsigned int mrr_bl4 : 1;
        unsigned int mrr_pat_order : 3;
        unsigned int rdet_method_sel : 1;
    } reg;
} SOC_HIPACKPHY_TRAINCTRL2_UNION;
#endif
#define SOC_HIPACKPHY_TRAINCTRL2_mrr_pat_A_START (0)
#define SOC_HIPACKPHY_TRAINCTRL2_mrr_pat_A_END (7)
#define SOC_HIPACKPHY_TRAINCTRL2_mrr_pat_B_START (8)
#define SOC_HIPACKPHY_TRAINCTRL2_mrr_pat_B_END (15)
#define SOC_HIPACKPHY_TRAINCTRL2_mrr_pat_mask_START (16)
#define SOC_HIPACKPHY_TRAINCTRL2_mrr_pat_mask_END (23)
#define SOC_HIPACKPHY_TRAINCTRL2_rbound_sfal_en_START (24)
#define SOC_HIPACKPHY_TRAINCTRL2_rbound_sfal_en_END (24)
#define SOC_HIPACKPHY_TRAINCTRL2_fast_gt_en_START (25)
#define SOC_HIPACKPHY_TRAINCTRL2_fast_gt_en_END (25)
#define SOC_HIPACKPHY_TRAINCTRL2_fast_gdst_en_START (26)
#define SOC_HIPACKPHY_TRAINCTRL2_fast_gdst_en_END (26)
#define SOC_HIPACKPHY_TRAINCTRL2_mrr_bl4_START (27)
#define SOC_HIPACKPHY_TRAINCTRL2_mrr_bl4_END (27)
#define SOC_HIPACKPHY_TRAINCTRL2_mrr_pat_order_START (28)
#define SOC_HIPACKPHY_TRAINCTRL2_mrr_pat_order_END (30)
#define SOC_HIPACKPHY_TRAINCTRL2_rdet_method_sel_START (31)
#define SOC_HIPACKPHY_TRAINCTRL2_rdet_method_sel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr_sel : 1;
        unsigned int op_sel : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_HIPACKPHY_REGBANKCTRL_UNION;
#endif
#define SOC_HIPACKPHY_REGBANKCTRL_wr_sel_START (0)
#define SOC_HIPACKPHY_REGBANKCTRL_wr_sel_END (0)
#define SOC_HIPACKPHY_REGBANKCTRL_op_sel_START (1)
#define SOC_HIPACKPHY_REGBANKCTRL_op_sel_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 4;
        unsigned int reserved_1 : 4;
        unsigned int reserved_2 : 4;
        unsigned int wderten : 1;
        unsigned int wdet_rank_en : 1;
        unsigned int wrenrkswen : 1;
        unsigned int nopre4wrdet : 1;
        unsigned int gdsrt_backtap : 3;
        unsigned int rdet_rank_en : 1;
        unsigned int rdet_dbi_en : 1;
        unsigned int cat_pat_toggle_en : 1;
        unsigned int rpt_mode_en : 1;
        unsigned int wdet_method_sel : 1;
        unsigned int fast_gt_cnt : 5;
        unsigned int cfg_upd_scandq_en : 1;
        unsigned int rdet_fcomp_en : 1;
        unsigned int exd_gtres_en : 1;
    } reg;
} SOC_HIPACKPHY_TRAINCTRL3_UNION;
#endif
#define SOC_HIPACKPHY_TRAINCTRL3_wderten_START (12)
#define SOC_HIPACKPHY_TRAINCTRL3_wderten_END (12)
#define SOC_HIPACKPHY_TRAINCTRL3_wdet_rank_en_START (13)
#define SOC_HIPACKPHY_TRAINCTRL3_wdet_rank_en_END (13)
#define SOC_HIPACKPHY_TRAINCTRL3_wrenrkswen_START (14)
#define SOC_HIPACKPHY_TRAINCTRL3_wrenrkswen_END (14)
#define SOC_HIPACKPHY_TRAINCTRL3_nopre4wrdet_START (15)
#define SOC_HIPACKPHY_TRAINCTRL3_nopre4wrdet_END (15)
#define SOC_HIPACKPHY_TRAINCTRL3_gdsrt_backtap_START (16)
#define SOC_HIPACKPHY_TRAINCTRL3_gdsrt_backtap_END (18)
#define SOC_HIPACKPHY_TRAINCTRL3_rdet_rank_en_START (19)
#define SOC_HIPACKPHY_TRAINCTRL3_rdet_rank_en_END (19)
#define SOC_HIPACKPHY_TRAINCTRL3_rdet_dbi_en_START (20)
#define SOC_HIPACKPHY_TRAINCTRL3_rdet_dbi_en_END (20)
#define SOC_HIPACKPHY_TRAINCTRL3_cat_pat_toggle_en_START (21)
#define SOC_HIPACKPHY_TRAINCTRL3_cat_pat_toggle_en_END (21)
#define SOC_HIPACKPHY_TRAINCTRL3_rpt_mode_en_START (22)
#define SOC_HIPACKPHY_TRAINCTRL3_rpt_mode_en_END (22)
#define SOC_HIPACKPHY_TRAINCTRL3_wdet_method_sel_START (23)
#define SOC_HIPACKPHY_TRAINCTRL3_wdet_method_sel_END (23)
#define SOC_HIPACKPHY_TRAINCTRL3_fast_gt_cnt_START (24)
#define SOC_HIPACKPHY_TRAINCTRL3_fast_gt_cnt_END (28)
#define SOC_HIPACKPHY_TRAINCTRL3_cfg_upd_scandq_en_START (29)
#define SOC_HIPACKPHY_TRAINCTRL3_cfg_upd_scandq_en_END (29)
#define SOC_HIPACKPHY_TRAINCTRL3_rdet_fcomp_en_START (30)
#define SOC_HIPACKPHY_TRAINCTRL3_rdet_fcomp_en_END (30)
#define SOC_HIPACKPHY_TRAINCTRL3_exd_gtres_en_START (31)
#define SOC_HIPACKPHY_TRAINCTRL3_exd_gtres_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mr4 : 16;
        unsigned int mr5 : 16;
    } reg;
} SOC_HIPACKPHY_MODEREG45_UNION;
#endif
#define SOC_HIPACKPHY_MODEREG45_mr4_START (0)
#define SOC_HIPACKPHY_MODEREG45_mr4_END (15)
#define SOC_HIPACKPHY_MODEREG45_mr5_START (16)
#define SOC_HIPACKPHY_MODEREG45_mr5_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mr6 : 16;
        unsigned int mr7 : 16;
    } reg;
} SOC_HIPACKPHY_MODEREG67_UNION;
#endif
#define SOC_HIPACKPHY_MODEREG67_mr6_START (0)
#define SOC_HIPACKPHY_MODEREG67_mr6_END (15)
#define SOC_HIPACKPHY_MODEREG67_mr7_START (16)
#define SOC_HIPACKPHY_MODEREG67_mr7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int phyupdtimer : 16;
        unsigned int cfg_reg_sync_cnt : 4;
        unsigned int cat_re_deskew_en : 1;
        unsigned int det_re_deskew_en : 1;
        unsigned int half_ph_bdl_en : 1;
        unsigned int bdlcarry_done : 1;
        unsigned int row_react_period : 8;
    } reg;
} SOC_HIPACKPHY_TRAINCTRL6_UNION;
#endif
#define SOC_HIPACKPHY_TRAINCTRL6_phyupdtimer_START (0)
#define SOC_HIPACKPHY_TRAINCTRL6_phyupdtimer_END (15)
#define SOC_HIPACKPHY_TRAINCTRL6_cfg_reg_sync_cnt_START (16)
#define SOC_HIPACKPHY_TRAINCTRL6_cfg_reg_sync_cnt_END (19)
#define SOC_HIPACKPHY_TRAINCTRL6_cat_re_deskew_en_START (20)
#define SOC_HIPACKPHY_TRAINCTRL6_cat_re_deskew_en_END (20)
#define SOC_HIPACKPHY_TRAINCTRL6_det_re_deskew_en_START (21)
#define SOC_HIPACKPHY_TRAINCTRL6_det_re_deskew_en_END (21)
#define SOC_HIPACKPHY_TRAINCTRL6_half_ph_bdl_en_START (22)
#define SOC_HIPACKPHY_TRAINCTRL6_half_ph_bdl_en_END (22)
#define SOC_HIPACKPHY_TRAINCTRL6_bdlcarry_done_START (23)
#define SOC_HIPACKPHY_TRAINCTRL6_bdlcarry_done_END (23)
#define SOC_HIPACKPHY_TRAINCTRL6_row_react_period_START (24)
#define SOC_HIPACKPHY_TRAINCTRL6_row_react_period_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int det_pat_index : 4;
        unsigned int det_pat_alt_index : 3;
        unsigned int det_pat_alt_enable : 1;
        unsigned int det_pat_dir : 2;
        unsigned int reserved : 22;
    } reg;
} SOC_HIPACKPHY_DETPATINDEX_UNION;
#endif
#define SOC_HIPACKPHY_DETPATINDEX_det_pat_index_START (0)
#define SOC_HIPACKPHY_DETPATINDEX_det_pat_index_END (3)
#define SOC_HIPACKPHY_DETPATINDEX_det_pat_alt_index_START (4)
#define SOC_HIPACKPHY_DETPATINDEX_det_pat_alt_index_END (6)
#define SOC_HIPACKPHY_DETPATINDEX_det_pat_alt_enable_START (7)
#define SOC_HIPACKPHY_DETPATINDEX_det_pat_alt_enable_END (7)
#define SOC_HIPACKPHY_DETPATINDEX_det_pat_dir_START (8)
#define SOC_HIPACKPHY_DETPATINDEX_det_pat_dir_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdet_ph_fine_step : 3;
        unsigned int reserved_0 : 1;
        unsigned int cat_ph_fine_step : 3;
        unsigned int reserved_1 : 1;
        unsigned int gt_ph_fine_step : 3;
        unsigned int reserved_2 : 1;
        unsigned int wl_ph_fine_step : 3;
        unsigned int reserved_3 : 1;
        unsigned int gt_bdl_step : 4;
        unsigned int gt_ph_step : 4;
        unsigned int wl_bdl_step : 4;
        unsigned int wl_ph_step : 4;
    } reg;
} SOC_HIPACKPHY_TRAINSTEP0_UNION;
#endif
#define SOC_HIPACKPHY_TRAINSTEP0_wdet_ph_fine_step_START (0)
#define SOC_HIPACKPHY_TRAINSTEP0_wdet_ph_fine_step_END (2)
#define SOC_HIPACKPHY_TRAINSTEP0_cat_ph_fine_step_START (4)
#define SOC_HIPACKPHY_TRAINSTEP0_cat_ph_fine_step_END (6)
#define SOC_HIPACKPHY_TRAINSTEP0_gt_ph_fine_step_START (8)
#define SOC_HIPACKPHY_TRAINSTEP0_gt_ph_fine_step_END (10)
#define SOC_HIPACKPHY_TRAINSTEP0_wl_ph_fine_step_START (12)
#define SOC_HIPACKPHY_TRAINSTEP0_wl_ph_fine_step_END (14)
#define SOC_HIPACKPHY_TRAINSTEP0_gt_bdl_step_START (16)
#define SOC_HIPACKPHY_TRAINSTEP0_gt_bdl_step_END (19)
#define SOC_HIPACKPHY_TRAINSTEP0_gt_ph_step_START (20)
#define SOC_HIPACKPHY_TRAINSTEP0_gt_ph_step_END (23)
#define SOC_HIPACKPHY_TRAINSTEP0_wl_bdl_step_START (24)
#define SOC_HIPACKPHY_TRAINSTEP0_wl_bdl_step_END (27)
#define SOC_HIPACKPHY_TRAINSTEP0_wl_ph_step_START (28)
#define SOC_HIPACKPHY_TRAINSTEP0_wl_ph_step_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cat_bdl_step : 4;
        unsigned int cat_ph_step : 4;
        unsigned int cat_lb_backtap : 5;
        unsigned int reserved_0 : 3;
        unsigned int cat_rb_backtap : 5;
        unsigned int reserved_1 : 1;
        unsigned int cat_open_bdl_jstep : 4;
        unsigned int cat_open_ph_jstep : 5;
        unsigned int reserved_2 : 1;
    } reg;
} SOC_HIPACKPHY_TRAINSTEP1_UNION;
#endif
#define SOC_HIPACKPHY_TRAINSTEP1_cat_bdl_step_START (0)
#define SOC_HIPACKPHY_TRAINSTEP1_cat_bdl_step_END (3)
#define SOC_HIPACKPHY_TRAINSTEP1_cat_ph_step_START (4)
#define SOC_HIPACKPHY_TRAINSTEP1_cat_ph_step_END (7)
#define SOC_HIPACKPHY_TRAINSTEP1_cat_lb_backtap_START (8)
#define SOC_HIPACKPHY_TRAINSTEP1_cat_lb_backtap_END (12)
#define SOC_HIPACKPHY_TRAINSTEP1_cat_rb_backtap_START (16)
#define SOC_HIPACKPHY_TRAINSTEP1_cat_rb_backtap_END (20)
#define SOC_HIPACKPHY_TRAINSTEP1_cat_open_bdl_jstep_START (22)
#define SOC_HIPACKPHY_TRAINSTEP1_cat_open_bdl_jstep_END (25)
#define SOC_HIPACKPHY_TRAINSTEP1_cat_open_ph_jstep_START (26)
#define SOC_HIPACKPHY_TRAINSTEP1_cat_open_ph_jstep_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdet_bdl_step : 4;
        unsigned int wdet_ph_step : 4;
        unsigned int wdet_lb_backtap : 5;
        unsigned int reserved_0 : 3;
        unsigned int wdet_rb_backtap : 5;
        unsigned int reserved_1 : 1;
        unsigned int wdet_open_bdl_jstep : 4;
        unsigned int wdet_open_ph_jstep : 5;
        unsigned int reserved_2 : 1;
    } reg;
} SOC_HIPACKPHY_TRAINSTEP2_UNION;
#endif
#define SOC_HIPACKPHY_TRAINSTEP2_wdet_bdl_step_START (0)
#define SOC_HIPACKPHY_TRAINSTEP2_wdet_bdl_step_END (3)
#define SOC_HIPACKPHY_TRAINSTEP2_wdet_ph_step_START (4)
#define SOC_HIPACKPHY_TRAINSTEP2_wdet_ph_step_END (7)
#define SOC_HIPACKPHY_TRAINSTEP2_wdet_lb_backtap_START (8)
#define SOC_HIPACKPHY_TRAINSTEP2_wdet_lb_backtap_END (12)
#define SOC_HIPACKPHY_TRAINSTEP2_wdet_rb_backtap_START (16)
#define SOC_HIPACKPHY_TRAINSTEP2_wdet_rb_backtap_END (20)
#define SOC_HIPACKPHY_TRAINSTEP2_wdet_open_bdl_jstep_START (22)
#define SOC_HIPACKPHY_TRAINSTEP2_wdet_open_bdl_jstep_END (25)
#define SOC_HIPACKPHY_TRAINSTEP2_wdet_open_ph_jstep_START (26)
#define SOC_HIPACKPHY_TRAINSTEP2_wdet_open_ph_jstep_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_cmp_mask : 16;
        unsigned int ba_cmp_mask : 3;
        unsigned int we_cmp_mask : 1;
        unsigned int cas_cmp_mask : 1;
        unsigned int ras_cmp_mask : 1;
        unsigned int cs_cmp_mask : 4;
        unsigned int rst_cmp_mask : 1;
        unsigned int acbist_en : 1;
        unsigned int aclpbk_tg : 1;
        unsigned int ac_rdffsel : 3;
    } reg;
} SOC_HIPACKPHY_ACBISTCTRL0_UNION;
#endif
#define SOC_HIPACKPHY_ACBISTCTRL0_addr_cmp_mask_START (0)
#define SOC_HIPACKPHY_ACBISTCTRL0_addr_cmp_mask_END (15)
#define SOC_HIPACKPHY_ACBISTCTRL0_ba_cmp_mask_START (16)
#define SOC_HIPACKPHY_ACBISTCTRL0_ba_cmp_mask_END (18)
#define SOC_HIPACKPHY_ACBISTCTRL0_we_cmp_mask_START (19)
#define SOC_HIPACKPHY_ACBISTCTRL0_we_cmp_mask_END (19)
#define SOC_HIPACKPHY_ACBISTCTRL0_cas_cmp_mask_START (20)
#define SOC_HIPACKPHY_ACBISTCTRL0_cas_cmp_mask_END (20)
#define SOC_HIPACKPHY_ACBISTCTRL0_ras_cmp_mask_START (21)
#define SOC_HIPACKPHY_ACBISTCTRL0_ras_cmp_mask_END (21)
#define SOC_HIPACKPHY_ACBISTCTRL0_cs_cmp_mask_START (22)
#define SOC_HIPACKPHY_ACBISTCTRL0_cs_cmp_mask_END (25)
#define SOC_HIPACKPHY_ACBISTCTRL0_rst_cmp_mask_START (26)
#define SOC_HIPACKPHY_ACBISTCTRL0_rst_cmp_mask_END (26)
#define SOC_HIPACKPHY_ACBISTCTRL0_acbist_en_START (27)
#define SOC_HIPACKPHY_ACBISTCTRL0_acbist_en_END (27)
#define SOC_HIPACKPHY_ACBISTCTRL0_aclpbk_tg_START (28)
#define SOC_HIPACKPHY_ACBISTCTRL0_aclpbk_tg_END (28)
#define SOC_HIPACKPHY_ACBISTCTRL0_ac_rdffsel_START (29)
#define SOC_HIPACKPHY_ACBISTCTRL0_ac_rdffsel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int odt_cmp_mask : 4;
        unsigned int cke_cmp_mask : 4;
        unsigned int ac_lfsr_seed : 8;
        unsigned int par_cmp_mask : 1;
        unsigned int bg1_cmp_mask : 1;
        unsigned int act_cmp_mask : 1;
        unsigned int prbs_mode : 1;
        unsigned int addro_fp : 1;
        unsigned int cso_fp : 1;
        unsigned int ckeo_fp : 1;
        unsigned int cso_cmp_msk : 4;
        unsigned int ckeo_cmp_msk : 4;
        unsigned int cso_cke0_p1_cmp_msk : 1;
    } reg;
} SOC_HIPACKPHY_ACBISTCTRL1_UNION;
#endif
#define SOC_HIPACKPHY_ACBISTCTRL1_odt_cmp_mask_START (0)
#define SOC_HIPACKPHY_ACBISTCTRL1_odt_cmp_mask_END (3)
#define SOC_HIPACKPHY_ACBISTCTRL1_cke_cmp_mask_START (4)
#define SOC_HIPACKPHY_ACBISTCTRL1_cke_cmp_mask_END (7)
#define SOC_HIPACKPHY_ACBISTCTRL1_ac_lfsr_seed_START (8)
#define SOC_HIPACKPHY_ACBISTCTRL1_ac_lfsr_seed_END (15)
#define SOC_HIPACKPHY_ACBISTCTRL1_par_cmp_mask_START (16)
#define SOC_HIPACKPHY_ACBISTCTRL1_par_cmp_mask_END (16)
#define SOC_HIPACKPHY_ACBISTCTRL1_bg1_cmp_mask_START (17)
#define SOC_HIPACKPHY_ACBISTCTRL1_bg1_cmp_mask_END (17)
#define SOC_HIPACKPHY_ACBISTCTRL1_act_cmp_mask_START (18)
#define SOC_HIPACKPHY_ACBISTCTRL1_act_cmp_mask_END (18)
#define SOC_HIPACKPHY_ACBISTCTRL1_prbs_mode_START (19)
#define SOC_HIPACKPHY_ACBISTCTRL1_prbs_mode_END (19)
#define SOC_HIPACKPHY_ACBISTCTRL1_addro_fp_START (20)
#define SOC_HIPACKPHY_ACBISTCTRL1_addro_fp_END (20)
#define SOC_HIPACKPHY_ACBISTCTRL1_cso_fp_START (21)
#define SOC_HIPACKPHY_ACBISTCTRL1_cso_fp_END (21)
#define SOC_HIPACKPHY_ACBISTCTRL1_ckeo_fp_START (22)
#define SOC_HIPACKPHY_ACBISTCTRL1_ckeo_fp_END (22)
#define SOC_HIPACKPHY_ACBISTCTRL1_cso_cmp_msk_START (23)
#define SOC_HIPACKPHY_ACBISTCTRL1_cso_cmp_msk_END (26)
#define SOC_HIPACKPHY_ACBISTCTRL1_ckeo_cmp_msk_START (27)
#define SOC_HIPACKPHY_ACBISTCTRL1_ckeo_cmp_msk_END (30)
#define SOC_HIPACKPHY_ACBISTCTRL1_cso_cke0_p1_cmp_msk_START (31)
#define SOC_HIPACKPHY_ACBISTCTRL1_cso_cke0_p1_cmp_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_bist_err : 16;
        unsigned int ba_bist_err : 3;
        unsigned int we_bist_err : 1;
        unsigned int cas_bist_err : 1;
        unsigned int ras_bist_err : 1;
        unsigned int cs_bist_err : 4;
        unsigned int rst_bist_err : 1;
        unsigned int par_bist_err : 1;
        unsigned int bg1_bist_err : 1;
        unsigned int act_bist_err : 1;
        unsigned int reserved : 2;
    } reg;
} SOC_HIPACKPHY_ACBISTSTS0_UNION;
#endif
#define SOC_HIPACKPHY_ACBISTSTS0_addr_bist_err_START (0)
#define SOC_HIPACKPHY_ACBISTSTS0_addr_bist_err_END (15)
#define SOC_HIPACKPHY_ACBISTSTS0_ba_bist_err_START (16)
#define SOC_HIPACKPHY_ACBISTSTS0_ba_bist_err_END (18)
#define SOC_HIPACKPHY_ACBISTSTS0_we_bist_err_START (19)
#define SOC_HIPACKPHY_ACBISTSTS0_we_bist_err_END (19)
#define SOC_HIPACKPHY_ACBISTSTS0_cas_bist_err_START (20)
#define SOC_HIPACKPHY_ACBISTSTS0_cas_bist_err_END (20)
#define SOC_HIPACKPHY_ACBISTSTS0_ras_bist_err_START (21)
#define SOC_HIPACKPHY_ACBISTSTS0_ras_bist_err_END (21)
#define SOC_HIPACKPHY_ACBISTSTS0_cs_bist_err_START (22)
#define SOC_HIPACKPHY_ACBISTSTS0_cs_bist_err_END (25)
#define SOC_HIPACKPHY_ACBISTSTS0_rst_bist_err_START (26)
#define SOC_HIPACKPHY_ACBISTSTS0_rst_bist_err_END (26)
#define SOC_HIPACKPHY_ACBISTSTS0_par_bist_err_START (27)
#define SOC_HIPACKPHY_ACBISTSTS0_par_bist_err_END (27)
#define SOC_HIPACKPHY_ACBISTSTS0_bg1_bist_err_START (28)
#define SOC_HIPACKPHY_ACBISTSTS0_bg1_bist_err_END (28)
#define SOC_HIPACKPHY_ACBISTSTS0_act_bist_err_START (29)
#define SOC_HIPACKPHY_ACBISTSTS0_act_bist_err_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int odt_bist_err : 4;
        unsigned int cke_bist_err : 4;
        unsigned int reserved : 24;
    } reg;
} SOC_HIPACKPHY_ACBISTSTS1_UNION;
#endif
#define SOC_HIPACKPHY_ACBISTSTS1_odt_bist_err_START (0)
#define SOC_HIPACKPHY_ACBISTSTS1_odt_bist_err_END (3)
#define SOC_HIPACKPHY_ACBISTSTS1_cke_bist_err_START (4)
#define SOC_HIPACKPHY_ACBISTSTS1_cke_bist_err_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdqphase_left_bytelane0 : 8;
        unsigned int wdqphase_left_bytelane1 : 8;
        unsigned int wdq0bdl_left_bytelane0 : 8;
        unsigned int wdq0bdl_left_bytelane1 : 8;
    } reg;
} SOC_HIPACKPHY_WDXBOUND_DFS_UNION;
#endif
#define SOC_HIPACKPHY_WDXBOUND_DFS_wdqphase_left_bytelane0_START (0)
#define SOC_HIPACKPHY_WDXBOUND_DFS_wdqphase_left_bytelane0_END (7)
#define SOC_HIPACKPHY_WDXBOUND_DFS_wdqphase_left_bytelane1_START (8)
#define SOC_HIPACKPHY_WDXBOUND_DFS_wdqphase_left_bytelane1_END (15)
#define SOC_HIPACKPHY_WDXBOUND_DFS_wdq0bdl_left_bytelane0_START (16)
#define SOC_HIPACKPHY_WDXBOUND_DFS_wdq0bdl_left_bytelane0_END (23)
#define SOC_HIPACKPHY_WDXBOUND_DFS_wdq0bdl_left_bytelane1_START (24)
#define SOC_HIPACKPHY_WDXBOUND_DFS_wdq0bdl_left_bytelane1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 4;
        unsigned int dqsg_track_limit : 7;
        unsigned int rdert_bdl_mode : 1;
        unsigned int rdet_lb_backtap : 4;
        unsigned int rdet_rb_backtap : 9;
        unsigned int IsBypMode : 1;
        unsigned int rdert_comp_en : 1;
        unsigned int fast_shift_step : 2;
        unsigned int fast_check_step : 2;
        unsigned int rdet_dq_rank_en : 1;
    } reg;
} SOC_HIPACKPHY_TRAINCTRL4_UNION;
#endif
#define SOC_HIPACKPHY_TRAINCTRL4_dqsg_track_limit_START (4)
#define SOC_HIPACKPHY_TRAINCTRL4_dqsg_track_limit_END (10)
#define SOC_HIPACKPHY_TRAINCTRL4_rdert_bdl_mode_START (11)
#define SOC_HIPACKPHY_TRAINCTRL4_rdert_bdl_mode_END (11)
#define SOC_HIPACKPHY_TRAINCTRL4_rdet_lb_backtap_START (12)
#define SOC_HIPACKPHY_TRAINCTRL4_rdet_lb_backtap_END (15)
#define SOC_HIPACKPHY_TRAINCTRL4_rdet_rb_backtap_START (16)
#define SOC_HIPACKPHY_TRAINCTRL4_rdet_rb_backtap_END (24)
#define SOC_HIPACKPHY_TRAINCTRL4_IsBypMode_START (25)
#define SOC_HIPACKPHY_TRAINCTRL4_IsBypMode_END (25)
#define SOC_HIPACKPHY_TRAINCTRL4_rdert_comp_en_START (26)
#define SOC_HIPACKPHY_TRAINCTRL4_rdert_comp_en_END (26)
#define SOC_HIPACKPHY_TRAINCTRL4_fast_shift_step_START (27)
#define SOC_HIPACKPHY_TRAINCTRL4_fast_shift_step_END (28)
#define SOC_HIPACKPHY_TRAINCTRL4_fast_check_step_START (29)
#define SOC_HIPACKPHY_TRAINCTRL4_fast_check_step_END (30)
#define SOC_HIPACKPHY_TRAINCTRL4_rdet_dq_rank_en_START (31)
#define SOC_HIPACKPHY_TRAINCTRL4_rdet_dq_rank_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 4;
        unsigned int rdet_bdl_step : 2;
        unsigned int rdet_ph_step : 2;
        unsigned int rdet_open_jstep : 4;
        unsigned int reserved_1 : 6;
        unsigned int wldqsen : 1;
        unsigned int trainctl_nopostpre : 1;
        unsigned int wdet_mpc_cnt : 4;
        unsigned int cal_alt_num : 3;
        unsigned int reserved_2 : 4;
        unsigned int wdert_bdl_mode : 1;
    } reg;
} SOC_HIPACKPHY_TRAINCTRL5_UNION;
#endif
#define SOC_HIPACKPHY_TRAINCTRL5_rdet_bdl_step_START (4)
#define SOC_HIPACKPHY_TRAINCTRL5_rdet_bdl_step_END (5)
#define SOC_HIPACKPHY_TRAINCTRL5_rdet_ph_step_START (6)
#define SOC_HIPACKPHY_TRAINCTRL5_rdet_ph_step_END (7)
#define SOC_HIPACKPHY_TRAINCTRL5_rdet_open_jstep_START (8)
#define SOC_HIPACKPHY_TRAINCTRL5_rdet_open_jstep_END (11)
#define SOC_HIPACKPHY_TRAINCTRL5_wldqsen_START (18)
#define SOC_HIPACKPHY_TRAINCTRL5_wldqsen_END (18)
#define SOC_HIPACKPHY_TRAINCTRL5_trainctl_nopostpre_START (19)
#define SOC_HIPACKPHY_TRAINCTRL5_trainctl_nopostpre_END (19)
#define SOC_HIPACKPHY_TRAINCTRL5_wdet_mpc_cnt_START (20)
#define SOC_HIPACKPHY_TRAINCTRL5_wdet_mpc_cnt_END (23)
#define SOC_HIPACKPHY_TRAINCTRL5_cal_alt_num_START (24)
#define SOC_HIPACKPHY_TRAINCTRL5_cal_alt_num_END (26)
#define SOC_HIPACKPHY_TRAINCTRL5_wdert_bdl_mode_START (31)
#define SOC_HIPACKPHY_TRAINCTRL5_wdert_bdl_mode_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mr0_cl_m2 : 4;
        unsigned int dlymeas_upd_rdqsbdl_en : 1;
        unsigned int wlsyncrank_en : 1;
        unsigned int gt_rdbi_handle_en : 1;
        unsigned int gdsrt_mrank_en : 1;
        unsigned int cfg_rl_rdbi_off : 4;
        unsigned int fast_dqsgsl_mrgn : 8;
        unsigned int reserved : 3;
        unsigned int dynatrk_rdqsg_ph_step_sel : 1;
        unsigned int dynatrk_rdqsg_cnt_clr_en : 1;
        unsigned int dynatrk_rdqs_cnt_clr_en : 1;
        unsigned int fast_gt_step_sel : 1;
        unsigned int wl_wdqdmbdl_dis : 1;
        unsigned int gds_2rank_en : 1;
        unsigned int trainctl_gtrnowait : 1;
        unsigned int rpt_nomrs : 1;
        unsigned int info_full_tccd_sel : 1;
    } reg;
} SOC_HIPACKPHY_TRAINCTRL7_UNION;
#endif
#define SOC_HIPACKPHY_TRAINCTRL7_mr0_cl_m2_START (0)
#define SOC_HIPACKPHY_TRAINCTRL7_mr0_cl_m2_END (3)
#define SOC_HIPACKPHY_TRAINCTRL7_dlymeas_upd_rdqsbdl_en_START (4)
#define SOC_HIPACKPHY_TRAINCTRL7_dlymeas_upd_rdqsbdl_en_END (4)
#define SOC_HIPACKPHY_TRAINCTRL7_wlsyncrank_en_START (5)
#define SOC_HIPACKPHY_TRAINCTRL7_wlsyncrank_en_END (5)
#define SOC_HIPACKPHY_TRAINCTRL7_gt_rdbi_handle_en_START (6)
#define SOC_HIPACKPHY_TRAINCTRL7_gt_rdbi_handle_en_END (6)
#define SOC_HIPACKPHY_TRAINCTRL7_gdsrt_mrank_en_START (7)
#define SOC_HIPACKPHY_TRAINCTRL7_gdsrt_mrank_en_END (7)
#define SOC_HIPACKPHY_TRAINCTRL7_cfg_rl_rdbi_off_START (8)
#define SOC_HIPACKPHY_TRAINCTRL7_cfg_rl_rdbi_off_END (11)
#define SOC_HIPACKPHY_TRAINCTRL7_fast_dqsgsl_mrgn_START (12)
#define SOC_HIPACKPHY_TRAINCTRL7_fast_dqsgsl_mrgn_END (19)
#define SOC_HIPACKPHY_TRAINCTRL7_dynatrk_rdqsg_ph_step_sel_START (23)
#define SOC_HIPACKPHY_TRAINCTRL7_dynatrk_rdqsg_ph_step_sel_END (23)
#define SOC_HIPACKPHY_TRAINCTRL7_dynatrk_rdqsg_cnt_clr_en_START (24)
#define SOC_HIPACKPHY_TRAINCTRL7_dynatrk_rdqsg_cnt_clr_en_END (24)
#define SOC_HIPACKPHY_TRAINCTRL7_dynatrk_rdqs_cnt_clr_en_START (25)
#define SOC_HIPACKPHY_TRAINCTRL7_dynatrk_rdqs_cnt_clr_en_END (25)
#define SOC_HIPACKPHY_TRAINCTRL7_fast_gt_step_sel_START (26)
#define SOC_HIPACKPHY_TRAINCTRL7_fast_gt_step_sel_END (26)
#define SOC_HIPACKPHY_TRAINCTRL7_wl_wdqdmbdl_dis_START (27)
#define SOC_HIPACKPHY_TRAINCTRL7_wl_wdqdmbdl_dis_END (27)
#define SOC_HIPACKPHY_TRAINCTRL7_gds_2rank_en_START (28)
#define SOC_HIPACKPHY_TRAINCTRL7_gds_2rank_en_END (28)
#define SOC_HIPACKPHY_TRAINCTRL7_trainctl_gtrnowait_START (29)
#define SOC_HIPACKPHY_TRAINCTRL7_trainctl_gtrnowait_END (29)
#define SOC_HIPACKPHY_TRAINCTRL7_rpt_nomrs_START (30)
#define SOC_HIPACKPHY_TRAINCTRL7_rpt_nomrs_END (30)
#define SOC_HIPACKPHY_TRAINCTRL7_info_full_tccd_sel_START (31)
#define SOC_HIPACKPHY_TRAINCTRL7_info_full_tccd_sel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int zcal_noffset_en : 1;
        unsigned int zcal_poffset_en : 1;
        unsigned int zcal_nadd : 1;
        unsigned int zcal_padd : 1;
        unsigned int zlat_noffset_en : 1;
        unsigned int zlat_poffset_en : 1;
        unsigned int zlat_nadd : 1;
        unsigned int zlat_padd : 1;
        unsigned int zcal_noffset : 4;
        unsigned int zcal_poffset : 4;
        unsigned int zlat_noffset : 4;
        unsigned int zlat_poffset : 4;
        unsigned int zcal_regout_sel : 1;
        unsigned int reserved : 7;
    } reg;
} SOC_HIPACKPHY_IMPOFFSET_UNION;
#endif
#define SOC_HIPACKPHY_IMPOFFSET_zcal_noffset_en_START (0)
#define SOC_HIPACKPHY_IMPOFFSET_zcal_noffset_en_END (0)
#define SOC_HIPACKPHY_IMPOFFSET_zcal_poffset_en_START (1)
#define SOC_HIPACKPHY_IMPOFFSET_zcal_poffset_en_END (1)
#define SOC_HIPACKPHY_IMPOFFSET_zcal_nadd_START (2)
#define SOC_HIPACKPHY_IMPOFFSET_zcal_nadd_END (2)
#define SOC_HIPACKPHY_IMPOFFSET_zcal_padd_START (3)
#define SOC_HIPACKPHY_IMPOFFSET_zcal_padd_END (3)
#define SOC_HIPACKPHY_IMPOFFSET_zlat_noffset_en_START (4)
#define SOC_HIPACKPHY_IMPOFFSET_zlat_noffset_en_END (4)
#define SOC_HIPACKPHY_IMPOFFSET_zlat_poffset_en_START (5)
#define SOC_HIPACKPHY_IMPOFFSET_zlat_poffset_en_END (5)
#define SOC_HIPACKPHY_IMPOFFSET_zlat_nadd_START (6)
#define SOC_HIPACKPHY_IMPOFFSET_zlat_nadd_END (6)
#define SOC_HIPACKPHY_IMPOFFSET_zlat_padd_START (7)
#define SOC_HIPACKPHY_IMPOFFSET_zlat_padd_END (7)
#define SOC_HIPACKPHY_IMPOFFSET_zcal_noffset_START (8)
#define SOC_HIPACKPHY_IMPOFFSET_zcal_noffset_END (11)
#define SOC_HIPACKPHY_IMPOFFSET_zcal_poffset_START (12)
#define SOC_HIPACKPHY_IMPOFFSET_zcal_poffset_END (15)
#define SOC_HIPACKPHY_IMPOFFSET_zlat_noffset_START (16)
#define SOC_HIPACKPHY_IMPOFFSET_zlat_noffset_END (19)
#define SOC_HIPACKPHY_IMPOFFSET_zlat_poffset_START (20)
#define SOC_HIPACKPHY_IMPOFFSET_zlat_poffset_END (23)
#define SOC_HIPACKPHY_IMPOFFSET_zcal_regout_sel_START (24)
#define SOC_HIPACKPHY_IMPOFFSET_zcal_regout_sel_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cs0_bdl : 8;
        unsigned int reserved_0: 8;
        unsigned int cs1_bdl : 8;
        unsigned int reserved_1: 8;
    } reg;
} SOC_HIPACKPHY_ACCMDBDL2_UNION;
#endif
#define SOC_HIPACKPHY_ACCMDBDL2_cs0_bdl_START (0)
#define SOC_HIPACKPHY_ACCMDBDL2_cs0_bdl_END (7)
#define SOC_HIPACKPHY_ACCMDBDL2_cs1_bdl_START (16)
#define SOC_HIPACKPHY_ACCMDBDL2_cs1_bdl_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_HIPACKPHY_ACCMDBDL3_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_HIPACKPHY_ACCMDBDL5_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int we_bdl : 8;
        unsigned int reserved_0: 8;
        unsigned int cas_bdl : 8;
        unsigned int reserved_1: 8;
    } reg;
} SOC_HIPACKPHY_ACCMDBDL6_UNION;
#endif
#define SOC_HIPACKPHY_ACCMDBDL6_we_bdl_START (0)
#define SOC_HIPACKPHY_ACCMDBDL6_we_bdl_END (7)
#define SOC_HIPACKPHY_ACCMDBDL6_cas_bdl_START (16)
#define SOC_HIPACKPHY_ACCMDBDL6_cas_bdl_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ras_bdl : 8;
        unsigned int reserved_0 : 8;
        unsigned int resetn_bdl : 8;
        unsigned int reserved_1 : 8;
    } reg;
} SOC_HIPACKPHY_ACCMDBDL7_UNION;
#endif
#define SOC_HIPACKPHY_ACCMDBDL7_ras_bdl_START (0)
#define SOC_HIPACKPHY_ACCMDBDL7_ras_bdl_END (7)
#define SOC_HIPACKPHY_ACCMDBDL7_resetn_bdl_START (16)
#define SOC_HIPACKPHY_ACCMDBDL7_resetn_bdl_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr0_bdl : 8;
        unsigned int reserved_0: 8;
        unsigned int addr1_bdl : 8;
        unsigned int reserved_1: 8;
    } reg;
} SOC_HIPACKPHY_ACADDRBDL0_UNION;
#endif
#define SOC_HIPACKPHY_ACADDRBDL0_addr0_bdl_START (0)
#define SOC_HIPACKPHY_ACADDRBDL0_addr0_bdl_END (7)
#define SOC_HIPACKPHY_ACADDRBDL0_addr1_bdl_START (16)
#define SOC_HIPACKPHY_ACADDRBDL0_addr1_bdl_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr2_bdl : 8;
        unsigned int reserved_0: 8;
        unsigned int addr3_bdl : 8;
        unsigned int reserved_1: 8;
    } reg;
} SOC_HIPACKPHY_ACADDRBDL1_UNION;
#endif
#define SOC_HIPACKPHY_ACADDRBDL1_addr2_bdl_START (0)
#define SOC_HIPACKPHY_ACADDRBDL1_addr2_bdl_END (7)
#define SOC_HIPACKPHY_ACADDRBDL1_addr3_bdl_START (16)
#define SOC_HIPACKPHY_ACADDRBDL1_addr3_bdl_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr4_bdl : 8;
        unsigned int reserved_0: 8;
        unsigned int addr5_bdl : 8;
        unsigned int reserved_1: 8;
    } reg;
} SOC_HIPACKPHY_ACADDRBDL2_UNION;
#endif
#define SOC_HIPACKPHY_ACADDRBDL2_addr4_bdl_START (0)
#define SOC_HIPACKPHY_ACADDRBDL2_addr4_bdl_END (7)
#define SOC_HIPACKPHY_ACADDRBDL2_addr5_bdl_START (16)
#define SOC_HIPACKPHY_ACADDRBDL2_addr5_bdl_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr6_bdl : 8;
        unsigned int reserved_0: 8;
        unsigned int addr7_bdl : 8;
        unsigned int reserved_1: 8;
    } reg;
} SOC_HIPACKPHY_ACADDRBDL3_UNION;
#endif
#define SOC_HIPACKPHY_ACADDRBDL3_addr6_bdl_START (0)
#define SOC_HIPACKPHY_ACADDRBDL3_addr6_bdl_END (7)
#define SOC_HIPACKPHY_ACADDRBDL3_addr7_bdl_START (16)
#define SOC_HIPACKPHY_ACADDRBDL3_addr7_bdl_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr8_bdl : 8;
        unsigned int reserved_0: 8;
        unsigned int addr9_bdl : 8;
        unsigned int reserved_1: 8;
    } reg;
} SOC_HIPACKPHY_ACADDRBDL4_UNION;
#endif
#define SOC_HIPACKPHY_ACADDRBDL4_addr8_bdl_START (0)
#define SOC_HIPACKPHY_ACADDRBDL4_addr8_bdl_END (7)
#define SOC_HIPACKPHY_ACADDRBDL4_addr9_bdl_START (16)
#define SOC_HIPACKPHY_ACADDRBDL4_addr9_bdl_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr10_bdl : 8;
        unsigned int reserved_0 : 8;
        unsigned int addr11_bdl : 8;
        unsigned int reserved_1 : 8;
    } reg;
} SOC_HIPACKPHY_ACADDRBDL5_UNION;
#endif
#define SOC_HIPACKPHY_ACADDRBDL5_addr10_bdl_START (0)
#define SOC_HIPACKPHY_ACADDRBDL5_addr10_bdl_END (7)
#define SOC_HIPACKPHY_ACADDRBDL5_addr11_bdl_START (16)
#define SOC_HIPACKPHY_ACADDRBDL5_addr11_bdl_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr12_bdl : 8;
        unsigned int reserved_0 : 8;
        unsigned int addr13_bdl : 8;
        unsigned int reserved_1 : 8;
    } reg;
} SOC_HIPACKPHY_ACADDRBDL6_UNION;
#endif
#define SOC_HIPACKPHY_ACADDRBDL6_addr12_bdl_START (0)
#define SOC_HIPACKPHY_ACADDRBDL6_addr12_bdl_END (7)
#define SOC_HIPACKPHY_ACADDRBDL6_addr13_bdl_START (16)
#define SOC_HIPACKPHY_ACADDRBDL6_addr13_bdl_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr14_bdl : 8;
        unsigned int reserved_0 : 8;
        unsigned int addr15_bdl : 8;
        unsigned int reserved_1 : 8;
    } reg;
} SOC_HIPACKPHY_ACADDRBDL7_UNION;
#endif
#define SOC_HIPACKPHY_ACADDRBDL7_addr14_bdl_START (0)
#define SOC_HIPACKPHY_ACADDRBDL7_addr14_bdl_END (7)
#define SOC_HIPACKPHY_ACADDRBDL7_addr15_bdl_START (16)
#define SOC_HIPACKPHY_ACADDRBDL7_addr15_bdl_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ba0_bdl : 8;
        unsigned int reserved_0: 8;
        unsigned int ba1_bdl : 8;
        unsigned int reserved_1: 8;
    } reg;
} SOC_HIPACKPHY_ACADDRBDL8_UNION;
#endif
#define SOC_HIPACKPHY_ACADDRBDL8_ba0_bdl_START (0)
#define SOC_HIPACKPHY_ACADDRBDL8_ba0_bdl_END (7)
#define SOC_HIPACKPHY_ACADDRBDL8_ba1_bdl_START (16)
#define SOC_HIPACKPHY_ACADDRBDL8_ba1_bdl_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ba2_bdl : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HIPACKPHY_ACADDRBDL9_UNION;
#endif
#define SOC_HIPACKPHY_ACADDRBDL9_ba2_bdl_START (0)
#define SOC_HIPACKPHY_ACADDRBDL9_ba2_bdl_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ac_lpbk_data_sl : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_HIPACKPHY_ACBISTCTRL2_UNION;
#endif
#define SOC_HIPACKPHY_ACBISTCTRL2_ac_lpbk_data_sl_START (0)
#define SOC_HIPACKPHY_ACBISTCTRL2_ac_lpbk_data_sl_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ac_vddq_cal_mode : 2;
        unsigned int dx_vddq_cal_mode : 2;
        unsigned int reserved_0 : 4;
        unsigned int ac_vddq_cal_en : 1;
        unsigned int reserved_1 : 7;
        unsigned int zcal_sel : 1;
        unsigned int zcal_tie_lsb : 1;
        unsigned int zcal_ndrv_regsel : 1;
        unsigned int zcal_pdrv_regsel : 1;
        unsigned int acctl_ndrv_regsel : 1;
        unsigned int acctl_pdrv_regsel : 1;
        unsigned int reserved_2 : 2;
        unsigned int zcal_en_count : 4;
        unsigned int reserved_3 : 4;
    } reg;
} SOC_HIPACKPHY_IMP_CTRL1_UNION;
#endif
#define SOC_HIPACKPHY_IMP_CTRL1_ac_vddq_cal_mode_START (0)
#define SOC_HIPACKPHY_IMP_CTRL1_ac_vddq_cal_mode_END (1)
#define SOC_HIPACKPHY_IMP_CTRL1_dx_vddq_cal_mode_START (2)
#define SOC_HIPACKPHY_IMP_CTRL1_dx_vddq_cal_mode_END (3)
#define SOC_HIPACKPHY_IMP_CTRL1_ac_vddq_cal_en_START (8)
#define SOC_HIPACKPHY_IMP_CTRL1_ac_vddq_cal_en_END (8)
#define SOC_HIPACKPHY_IMP_CTRL1_zcal_sel_START (16)
#define SOC_HIPACKPHY_IMP_CTRL1_zcal_sel_END (16)
#define SOC_HIPACKPHY_IMP_CTRL1_zcal_tie_lsb_START (17)
#define SOC_HIPACKPHY_IMP_CTRL1_zcal_tie_lsb_END (17)
#define SOC_HIPACKPHY_IMP_CTRL1_zcal_ndrv_regsel_START (18)
#define SOC_HIPACKPHY_IMP_CTRL1_zcal_ndrv_regsel_END (18)
#define SOC_HIPACKPHY_IMP_CTRL1_zcal_pdrv_regsel_START (19)
#define SOC_HIPACKPHY_IMP_CTRL1_zcal_pdrv_regsel_END (19)
#define SOC_HIPACKPHY_IMP_CTRL1_acctl_ndrv_regsel_START (20)
#define SOC_HIPACKPHY_IMP_CTRL1_acctl_ndrv_regsel_END (20)
#define SOC_HIPACKPHY_IMP_CTRL1_acctl_pdrv_regsel_START (21)
#define SOC_HIPACKPHY_IMP_CTRL1_acctl_pdrv_regsel_END (21)
#define SOC_HIPACKPHY_IMP_CTRL1_zcal_en_count_START (24)
#define SOC_HIPACKPHY_IMP_CTRL1_zcal_en_count_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_ndrv_cal : 7;
        unsigned int reserved_0 : 1;
        unsigned int acctl_pdrv_cal : 7;
        unsigned int reserved_1 : 1;
        unsigned int acctl_ndrv_latch : 6;
        unsigned int reserved_2 : 2;
        unsigned int acctl_pdrv_latch : 6;
        unsigned int reserved_3 : 2;
    } reg;
} SOC_HIPACKPHY_IMP_STATUS1_UNION;
#endif
#define SOC_HIPACKPHY_IMP_STATUS1_acctl_ndrv_cal_START (0)
#define SOC_HIPACKPHY_IMP_STATUS1_acctl_ndrv_cal_END (6)
#define SOC_HIPACKPHY_IMP_STATUS1_acctl_pdrv_cal_START (8)
#define SOC_HIPACKPHY_IMP_STATUS1_acctl_pdrv_cal_END (14)
#define SOC_HIPACKPHY_IMP_STATUS1_acctl_ndrv_latch_START (16)
#define SOC_HIPACKPHY_IMP_STATUS1_acctl_ndrv_latch_END (21)
#define SOC_HIPACKPHY_IMP_STATUS1_acctl_pdrv_latch_START (24)
#define SOC_HIPACKPHY_IMP_STATUS1_acctl_pdrv_latch_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ioctl_dx_ndrv_out : 6;
        unsigned int reserved_0 : 2;
        unsigned int ioctl_dx_pdrv_out : 6;
        unsigned int reserved_1 : 2;
        unsigned int ioctl_ac_ndrv_out : 6;
        unsigned int reserved_2 : 2;
        unsigned int ioctl_ac_pdrv_out : 6;
        unsigned int reserved_3 : 2;
    } reg;
} SOC_HIPACKPHY_IMP_OUT_UNION;
#endif
#define SOC_HIPACKPHY_IMP_OUT_ioctl_dx_ndrv_out_START (0)
#define SOC_HIPACKPHY_IMP_OUT_ioctl_dx_ndrv_out_END (5)
#define SOC_HIPACKPHY_IMP_OUT_ioctl_dx_pdrv_out_START (8)
#define SOC_HIPACKPHY_IMP_OUT_ioctl_dx_pdrv_out_END (13)
#define SOC_HIPACKPHY_IMP_OUT_ioctl_ac_ndrv_out_START (16)
#define SOC_HIPACKPHY_IMP_OUT_ioctl_ac_ndrv_out_END (21)
#define SOC_HIPACKPHY_IMP_OUT_ioctl_ac_pdrv_out_START (24)
#define SOC_HIPACKPHY_IMP_OUT_ioctl_ac_pdrv_out_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rpat_cnt_num : 6;
        unsigned int reserved_0 : 2;
        unsigned int wpat_cnt_num : 6;
        unsigned int reserved_1 : 2;
        unsigned int rpat_cnt_num_open : 6;
        unsigned int reserved_2 : 2;
        unsigned int wpat_cnt_num_open : 6;
        unsigned int reserved_3 : 2;
    } reg;
} SOC_HIPACKPHY_TRAINCTRL11_UNION;
#endif
#define SOC_HIPACKPHY_TRAINCTRL11_rpat_cnt_num_START (0)
#define SOC_HIPACKPHY_TRAINCTRL11_rpat_cnt_num_END (5)
#define SOC_HIPACKPHY_TRAINCTRL11_wpat_cnt_num_START (8)
#define SOC_HIPACKPHY_TRAINCTRL11_wpat_cnt_num_END (13)
#define SOC_HIPACKPHY_TRAINCTRL11_rpat_cnt_num_open_START (16)
#define SOC_HIPACKPHY_TRAINCTRL11_rpat_cnt_num_open_END (21)
#define SOC_HIPACKPHY_TRAINCTRL11_wpat_cnt_num_open_START (24)
#define SOC_HIPACKPHY_TRAINCTRL11_wpat_cnt_num_open_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fast_gds_result : 32;
    } reg;
} SOC_HIPACKPHY_FASTGDSRESULT0_UNION;
#endif
#define SOC_HIPACKPHY_FASTGDSRESULT0_fast_gds_result_START (0)
#define SOC_HIPACKPHY_FASTGDSRESULT0_fast_gds_result_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fast_gds_result : 32;
    } reg;
} SOC_HIPACKPHY_FASTGDSRESULT1_UNION;
#endif
#define SOC_HIPACKPHY_FASTGDSRESULT1_fast_gds_result_START (0)
#define SOC_HIPACKPHY_FASTGDSRESULT1_fast_gds_result_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fast_gt_decgress : 8;
        unsigned int fast_gt_incgress : 8;
        unsigned int reserved : 16;
    } reg;
} SOC_HIPACKPHY_FASTGTRESULT_UNION;
#endif
#define SOC_HIPACKPHY_FASTGTRESULT_fast_gt_decgress_START (0)
#define SOC_HIPACKPHY_FASTGTRESULT_fast_gt_decgress_END (7)
#define SOC_HIPACKPHY_FASTGTRESULT_fast_gt_incgress_START (8)
#define SOC_HIPACKPHY_FASTGTRESULT_fast_gt_incgress_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int trkdbg_rdata : 32;
    } reg;
} SOC_HIPACKPHY_TRKDBG_UNION;
#endif
#define SOC_HIPACKPHY_TRKDBG_trkdbg_rdata_START (0)
#define SOC_HIPACKPHY_TRKDBG_trkdbg_rdata_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int det_err_state : 8;
        unsigned int cat_err_state : 6;
        unsigned int reserved : 1;
        unsigned int err_state_peek : 1;
        unsigned int cdgc_cmpres : 9;
        unsigned int packcnt_clr : 1;
        unsigned int dxndqnlb_sel : 2;
        unsigned int cdgc_cmpres_sel : 3;
        unsigned int bound_info_clr_en : 1;
    } reg;
} SOC_HIPACKPHY_PACKDEBUG_UNION;
#endif
#define SOC_HIPACKPHY_PACKDEBUG_det_err_state_START (0)
#define SOC_HIPACKPHY_PACKDEBUG_det_err_state_END (7)
#define SOC_HIPACKPHY_PACKDEBUG_cat_err_state_START (8)
#define SOC_HIPACKPHY_PACKDEBUG_cat_err_state_END (13)
#define SOC_HIPACKPHY_PACKDEBUG_err_state_peek_START (15)
#define SOC_HIPACKPHY_PACKDEBUG_err_state_peek_END (15)
#define SOC_HIPACKPHY_PACKDEBUG_cdgc_cmpres_START (16)
#define SOC_HIPACKPHY_PACKDEBUG_cdgc_cmpres_END (24)
#define SOC_HIPACKPHY_PACKDEBUG_packcnt_clr_START (25)
#define SOC_HIPACKPHY_PACKDEBUG_packcnt_clr_END (25)
#define SOC_HIPACKPHY_PACKDEBUG_dxndqnlb_sel_START (26)
#define SOC_HIPACKPHY_PACKDEBUG_dxndqnlb_sel_END (27)
#define SOC_HIPACKPHY_PACKDEBUG_cdgc_cmpres_sel_START (28)
#define SOC_HIPACKPHY_PACKDEBUG_cdgc_cmpres_sel_END (30)
#define SOC_HIPACKPHY_PACKDEBUG_bound_info_clr_en_START (31)
#define SOC_HIPACKPHY_PACKDEBUG_bound_info_clr_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fast_wdet_en : 1;
        unsigned int cat_deskew_skip : 1;
        unsigned int wdet_lb_ctdone_stop : 1;
        unsigned int rdet_lb_ctdone_stop : 1;
        unsigned int wdet_byp_mode : 1;
        unsigned int non_odt_mode_en : 1;
        unsigned int trkdbg_ro_sel : 2;
        unsigned int ac_rsv_control_15_6 : 8;
        unsigned int wdet_ave_comp_en : 1;
        unsigned int wdet_rb2nd_fine_en : 1;
        unsigned int apb_err_type : 1;
        unsigned int zcalrt_ec_dis : 1;
        unsigned int ac_rsv_control_20 : 1;
        unsigned int acctl_drv_sel : 1;
        unsigned int ac_rsv_control_23_22 : 2;
        unsigned int non_odt_ndrv : 6;
        unsigned int ac_rsv_control_31_30 : 2;
    } reg;
} SOC_HIPACKPHY_ACPHYRSVDC_UNION;
#endif
#define SOC_HIPACKPHY_ACPHYRSVDC_fast_wdet_en_START (0)
#define SOC_HIPACKPHY_ACPHYRSVDC_fast_wdet_en_END (0)
#define SOC_HIPACKPHY_ACPHYRSVDC_cat_deskew_skip_START (1)
#define SOC_HIPACKPHY_ACPHYRSVDC_cat_deskew_skip_END (1)
#define SOC_HIPACKPHY_ACPHYRSVDC_wdet_lb_ctdone_stop_START (2)
#define SOC_HIPACKPHY_ACPHYRSVDC_wdet_lb_ctdone_stop_END (2)
#define SOC_HIPACKPHY_ACPHYRSVDC_rdet_lb_ctdone_stop_START (3)
#define SOC_HIPACKPHY_ACPHYRSVDC_rdet_lb_ctdone_stop_END (3)
#define SOC_HIPACKPHY_ACPHYRSVDC_wdet_byp_mode_START (4)
#define SOC_HIPACKPHY_ACPHYRSVDC_wdet_byp_mode_END (4)
#define SOC_HIPACKPHY_ACPHYRSVDC_non_odt_mode_en_START (5)
#define SOC_HIPACKPHY_ACPHYRSVDC_non_odt_mode_en_END (5)
#define SOC_HIPACKPHY_ACPHYRSVDC_trkdbg_ro_sel_START (6)
#define SOC_HIPACKPHY_ACPHYRSVDC_trkdbg_ro_sel_END (7)
#define SOC_HIPACKPHY_ACPHYRSVDC_ac_rsv_control_15_6_START (8)
#define SOC_HIPACKPHY_ACPHYRSVDC_ac_rsv_control_15_6_END (15)
#define SOC_HIPACKPHY_ACPHYRSVDC_wdet_ave_comp_en_START (16)
#define SOC_HIPACKPHY_ACPHYRSVDC_wdet_ave_comp_en_END (16)
#define SOC_HIPACKPHY_ACPHYRSVDC_wdet_rb2nd_fine_en_START (17)
#define SOC_HIPACKPHY_ACPHYRSVDC_wdet_rb2nd_fine_en_END (17)
#define SOC_HIPACKPHY_ACPHYRSVDC_apb_err_type_START (18)
#define SOC_HIPACKPHY_ACPHYRSVDC_apb_err_type_END (18)
#define SOC_HIPACKPHY_ACPHYRSVDC_zcalrt_ec_dis_START (19)
#define SOC_HIPACKPHY_ACPHYRSVDC_zcalrt_ec_dis_END (19)
#define SOC_HIPACKPHY_ACPHYRSVDC_ac_rsv_control_20_START (20)
#define SOC_HIPACKPHY_ACPHYRSVDC_ac_rsv_control_20_END (20)
#define SOC_HIPACKPHY_ACPHYRSVDC_acctl_drv_sel_START (21)
#define SOC_HIPACKPHY_ACPHYRSVDC_acctl_drv_sel_END (21)
#define SOC_HIPACKPHY_ACPHYRSVDC_ac_rsv_control_23_22_START (22)
#define SOC_HIPACKPHY_ACPHYRSVDC_ac_rsv_control_23_22_END (23)
#define SOC_HIPACKPHY_ACPHYRSVDC_non_odt_ndrv_START (24)
#define SOC_HIPACKPHY_ACPHYRSVDC_non_odt_ndrv_END (29)
#define SOC_HIPACKPHY_ACPHYRSVDC_ac_rsv_control_31_30_START (30)
#define SOC_HIPACKPHY_ACPHYRSVDC_ac_rsv_control_31_30_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ac_rsv_status : 32;
    } reg;
} SOC_HIPACKPHY_ACPHYRSVDS_UNION;
#endif
#define SOC_HIPACKPHY_ACPHYRSVDS_ac_rsv_status_START (0)
#define SOC_HIPACKPHY_ACPHYRSVDS_ac_rsv_status_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ac_ck6p_reserve : 3;
        unsigned int ac_ck7p_reserve : 3;
        unsigned int ac_ck8p_reserve : 3;
        unsigned int ac_ck9p_reserve : 3;
        unsigned int ac_ck10p_reserve : 3;
        unsigned int ac_ck11p_reserve : 3;
        unsigned int ac_ck12p_reserve : 3;
        unsigned int reserved : 11;
    } reg;
} SOC_HIPACKPHY_ACPHYCTL8_UNION;
#endif
#define SOC_HIPACKPHY_ACPHYCTL8_ac_ck6p_reserve_START (0)
#define SOC_HIPACKPHY_ACPHYCTL8_ac_ck6p_reserve_END (2)
#define SOC_HIPACKPHY_ACPHYCTL8_ac_ck7p_reserve_START (3)
#define SOC_HIPACKPHY_ACPHYCTL8_ac_ck7p_reserve_END (5)
#define SOC_HIPACKPHY_ACPHYCTL8_ac_ck8p_reserve_START (6)
#define SOC_HIPACKPHY_ACPHYCTL8_ac_ck8p_reserve_END (8)
#define SOC_HIPACKPHY_ACPHYCTL8_ac_ck9p_reserve_START (9)
#define SOC_HIPACKPHY_ACPHYCTL8_ac_ck9p_reserve_END (11)
#define SOC_HIPACKPHY_ACPHYCTL8_ac_ck10p_reserve_START (12)
#define SOC_HIPACKPHY_ACPHYCTL8_ac_ck10p_reserve_END (14)
#define SOC_HIPACKPHY_ACPHYCTL8_ac_ck11p_reserve_START (15)
#define SOC_HIPACKPHY_ACPHYCTL8_ac_ck11p_reserve_END (17)
#define SOC_HIPACKPHY_ACPHYCTL8_ac_ck12p_reserve_START (18)
#define SOC_HIPACKPHY_ACPHYCTL8_ac_ck12p_reserve_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int odt1_bdl0 : 8;
        unsigned int reserved_0: 8;
        unsigned int odt1_bdl1 : 8;
        unsigned int reserved_1: 8;
    } reg;
} SOC_HIPACKPHY_ACCMDBDL8_UNION;
#endif
#define SOC_HIPACKPHY_ACCMDBDL8_odt1_bdl0_START (0)
#define SOC_HIPACKPHY_ACCMDBDL8_odt1_bdl0_END (7)
#define SOC_HIPACKPHY_ACCMDBDL8_odt1_bdl1_START (16)
#define SOC_HIPACKPHY_ACCMDBDL8_odt1_bdl1_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int odt1_bdl2 : 8;
        unsigned int reserved_0: 8;
        unsigned int odt1_bdl3 : 8;
        unsigned int reserved_1: 8;
    } reg;
} SOC_HIPACKPHY_ACCMDBDL9_UNION;
#endif
#define SOC_HIPACKPHY_ACCMDBDL9_odt1_bdl2_START (0)
#define SOC_HIPACKPHY_ACCMDBDL9_odt1_bdl2_END (7)
#define SOC_HIPACKPHY_ACCMDBDL9_odt1_bdl3_START (16)
#define SOC_HIPACKPHY_ACCMDBDL9_odt1_bdl3_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cs1_bdl0 : 8;
        unsigned int reserved_0: 8;
        unsigned int cs1_bdl1 : 8;
        unsigned int reserved_1: 8;
    } reg;
} SOC_HIPACKPHY_ACCMDBDL10_UNION;
#endif
#define SOC_HIPACKPHY_ACCMDBDL10_cs1_bdl0_START (0)
#define SOC_HIPACKPHY_ACCMDBDL10_cs1_bdl0_END (7)
#define SOC_HIPACKPHY_ACCMDBDL10_cs1_bdl1_START (16)
#define SOC_HIPACKPHY_ACCMDBDL10_cs1_bdl1_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cs1_bdl2 : 8;
        unsigned int reserved_0: 8;
        unsigned int cs1_bdl3 : 8;
        unsigned int reserved_1: 8;
    } reg;
} SOC_HIPACKPHY_ACCMDBDL11_UNION;
#endif
#define SOC_HIPACKPHY_ACCMDBDL11_cs1_bdl2_START (0)
#define SOC_HIPACKPHY_ACCMDBDL11_cs1_bdl2_END (7)
#define SOC_HIPACKPHY_ACCMDBDL11_cs1_bdl3_START (16)
#define SOC_HIPACKPHY_ACCMDBDL11_cs1_bdl3_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 28;
        unsigned int addrbdl_bound_sel : 3;
        unsigned int cat_ave_comp_flag : 1;
    } reg;
} SOC_HIPACKPHY_CATBDLBOUNDSEL_UNION;
#endif
#define SOC_HIPACKPHY_CATBDLBOUNDSEL_addrbdl_bound_sel_START (28)
#define SOC_HIPACKPHY_CATBDLBOUNDSEL_addrbdl_bound_sel_END (30)
#define SOC_HIPACKPHY_CATBDLBOUNDSEL_cat_ave_comp_flag_START (31)
#define SOC_HIPACKPHY_CATBDLBOUNDSEL_cat_ave_comp_flag_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addrbdl_a_right : 8;
        unsigned int addrbdl_a_left : 8;
        unsigned int addrbdl_a_right1 : 8;
        unsigned int addrbdl_a_left1 : 8;
    } reg;
} SOC_HIPACKPHY_CATBDLBOUND_UNION;
#endif
#define SOC_HIPACKPHY_CATBDLBOUND_addrbdl_a_right_START (0)
#define SOC_HIPACKPHY_CATBDLBOUND_addrbdl_a_right_END (7)
#define SOC_HIPACKPHY_CATBDLBOUND_addrbdl_a_left_START (8)
#define SOC_HIPACKPHY_CATBDLBOUND_addrbdl_a_left_END (15)
#define SOC_HIPACKPHY_CATBDLBOUND_addrbdl_a_right1_START (16)
#define SOC_HIPACKPHY_CATBDLBOUND_addrbdl_a_right1_END (23)
#define SOC_HIPACKPHY_CATBDLBOUND_addrbdl_a_left1_START (24)
#define SOC_HIPACKPHY_CATBDLBOUND_addrbdl_a_left1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cat_swap_index : 4;
        unsigned int reserved : 27;
        unsigned int cat_swap_legacy : 1;
    } reg;
} SOC_HIPACKPHY_CATSWAPINDEX_UNION;
#endif
#define SOC_HIPACKPHY_CATSWAPINDEX_cat_swap_index_START (0)
#define SOC_HIPACKPHY_CATSWAPINDEX_cat_swap_index_END (3)
#define SOC_HIPACKPHY_CATSWAPINDEX_cat_swap_legacy_START (31)
#define SOC_HIPACKPHY_CATSWAPINDEX_cat_swap_legacy_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cat_swap_sel : 32;
    } reg;
} SOC_HIPACKPHY_CATSWAPSEL_UNION;
#endif
#define SOC_HIPACKPHY_CATSWAPSEL_cat_swap_sel_START (0)
#define SOC_HIPACKPHY_CATSWAPSEL_cat_swap_sel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tcackel : 6;
        unsigned int reserved_0: 2;
        unsigned int tcaent : 8;
        unsigned int tcacd : 8;
        unsigned int tcackeh : 6;
        unsigned int reserved_1: 2;
    } reg;
} SOC_HIPACKPHY_CATTIMER0_UNION;
#endif
#define SOC_HIPACKPHY_CATTIMER0_tcackel_START (0)
#define SOC_HIPACKPHY_CATTIMER0_tcackel_END (5)
#define SOC_HIPACKPHY_CATTIMER0_tcaent_START (8)
#define SOC_HIPACKPHY_CATTIMER0_tcaent_END (15)
#define SOC_HIPACKPHY_CATTIMER0_tcacd_START (16)
#define SOC_HIPACKPHY_CATTIMER0_tcacd_END (23)
#define SOC_HIPACKPHY_CATTIMER0_tcackeh_START (24)
#define SOC_HIPACKPHY_CATTIMER0_tcackeh_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tcaext : 8;
        unsigned int tmrz : 6;
        unsigned int reserved : 18;
    } reg;
} SOC_HIPACKPHY_CATTIMER1_UNION;
#endif
#define SOC_HIPACKPHY_CATTIMER1_tcaext_START (0)
#define SOC_HIPACKPHY_CATTIMER1_tcaext_END (7)
#define SOC_HIPACKPHY_CATTIMER1_tmrz_START (8)
#define SOC_HIPACKPHY_CATTIMER1_tmrz_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ca_samp_num_bdl : 8;
        unsigned int ca_samp_num_ph : 8;
        unsigned int sw_cat_eyet : 1;
        unsigned int cat_openeye_en : 1;
        unsigned int cat_cat_phydq_sel : 1;
        unsigned int cat_restore_en : 1;
        unsigned int cat_ave_comp_en : 1;
        unsigned int cat_rb2nd_fine_en : 1;
        unsigned int reserved : 2;
        unsigned int sw_cat_mrw42 : 1;
        unsigned int sw_cat_mrw48 : 1;
        unsigned int sw_cat_mrw41 : 1;
        unsigned int sw_cat_strobe : 1;
        unsigned int sw_cat_cke_high : 1;
        unsigned int sw_cat_cke_low : 1;
        unsigned int sw_cat_dqvalid : 1;
        unsigned int sw_cat_en : 1;
    } reg;
} SOC_HIPACKPHY_CATCONFIG_UNION;
#endif
#define SOC_HIPACKPHY_CATCONFIG_ca_samp_num_bdl_START (0)
#define SOC_HIPACKPHY_CATCONFIG_ca_samp_num_bdl_END (7)
#define SOC_HIPACKPHY_CATCONFIG_ca_samp_num_ph_START (8)
#define SOC_HIPACKPHY_CATCONFIG_ca_samp_num_ph_END (15)
#define SOC_HIPACKPHY_CATCONFIG_sw_cat_eyet_START (16)
#define SOC_HIPACKPHY_CATCONFIG_sw_cat_eyet_END (16)
#define SOC_HIPACKPHY_CATCONFIG_cat_openeye_en_START (17)
#define SOC_HIPACKPHY_CATCONFIG_cat_openeye_en_END (17)
#define SOC_HIPACKPHY_CATCONFIG_cat_cat_phydq_sel_START (18)
#define SOC_HIPACKPHY_CATCONFIG_cat_cat_phydq_sel_END (18)
#define SOC_HIPACKPHY_CATCONFIG_cat_restore_en_START (19)
#define SOC_HIPACKPHY_CATCONFIG_cat_restore_en_END (19)
#define SOC_HIPACKPHY_CATCONFIG_cat_ave_comp_en_START (20)
#define SOC_HIPACKPHY_CATCONFIG_cat_ave_comp_en_END (20)
#define SOC_HIPACKPHY_CATCONFIG_cat_rb2nd_fine_en_START (21)
#define SOC_HIPACKPHY_CATCONFIG_cat_rb2nd_fine_en_END (21)
#define SOC_HIPACKPHY_CATCONFIG_sw_cat_mrw42_START (24)
#define SOC_HIPACKPHY_CATCONFIG_sw_cat_mrw42_END (24)
#define SOC_HIPACKPHY_CATCONFIG_sw_cat_mrw48_START (25)
#define SOC_HIPACKPHY_CATCONFIG_sw_cat_mrw48_END (25)
#define SOC_HIPACKPHY_CATCONFIG_sw_cat_mrw41_START (26)
#define SOC_HIPACKPHY_CATCONFIG_sw_cat_mrw41_END (26)
#define SOC_HIPACKPHY_CATCONFIG_sw_cat_strobe_START (27)
#define SOC_HIPACKPHY_CATCONFIG_sw_cat_strobe_END (27)
#define SOC_HIPACKPHY_CATCONFIG_sw_cat_cke_high_START (28)
#define SOC_HIPACKPHY_CATCONFIG_sw_cat_cke_high_END (28)
#define SOC_HIPACKPHY_CATCONFIG_sw_cat_cke_low_START (29)
#define SOC_HIPACKPHY_CATCONFIG_sw_cat_cke_low_END (29)
#define SOC_HIPACKPHY_CATCONFIG_sw_cat_dqvalid_START (30)
#define SOC_HIPACKPHY_CATCONFIG_sw_cat_dqvalid_END (30)
#define SOC_HIPACKPHY_CATCONFIG_sw_cat_en_START (31)
#define SOC_HIPACKPHY_CATCONFIG_sw_cat_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cat_reault : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_HIPACKPHY_CATRESULT_UNION;
#endif
#define SOC_HIPACKPHY_CATRESULT_cat_reault_START (0)
#define SOC_HIPACKPHY_CATRESULT_cat_reault_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int phy_dq_result : 32;
    } reg;
} SOC_HIPACKPHY_PHYDQRESULT_UNION;
#endif
#define SOC_HIPACKPHY_PHYDQRESULT_phy_dq_result_START (0)
#define SOC_HIPACKPHY_PHYDQRESULT_phy_dq_result_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addrph_a_right : 7;
        unsigned int reserved_0 : 1;
        unsigned int addrph_a_left : 7;
        unsigned int cat_err : 1;
        unsigned int addrph_a : 7;
        unsigned int reserved_1 : 1;
        unsigned int addrph_a_ori : 7;
        unsigned int init_en : 1;
    } reg;
} SOC_HIPACKPHY_ADDRPHBOUND_UNION;
#endif
#define SOC_HIPACKPHY_ADDRPHBOUND_addrph_a_right_START (0)
#define SOC_HIPACKPHY_ADDRPHBOUND_addrph_a_right_END (6)
#define SOC_HIPACKPHY_ADDRPHBOUND_addrph_a_left_START (8)
#define SOC_HIPACKPHY_ADDRPHBOUND_addrph_a_left_END (14)
#define SOC_HIPACKPHY_ADDRPHBOUND_cat_err_START (15)
#define SOC_HIPACKPHY_ADDRPHBOUND_cat_err_END (15)
#define SOC_HIPACKPHY_ADDRPHBOUND_addrph_a_START (16)
#define SOC_HIPACKPHY_ADDRPHBOUND_addrph_a_END (22)
#define SOC_HIPACKPHY_ADDRPHBOUND_addrph_a_ori_START (24)
#define SOC_HIPACKPHY_ADDRPHBOUND_addrph_a_ori_END (30)
#define SOC_HIPACKPHY_ADDRPHBOUND_init_en_START (31)
#define SOC_HIPACKPHY_ADDRPHBOUND_init_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sw_cat_pat_p : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_HIPACKPHY_SWCATPATTERN_P_UNION;
#endif
#define SOC_HIPACKPHY_SWCATPATTERN_P_sw_cat_pat_p_START (0)
#define SOC_HIPACKPHY_SWCATPATTERN_P_sw_cat_pat_p_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sw_cat_pat_n : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_HIPACKPHY_SWCATPATTERN_N_UNION;
#endif
#define SOC_HIPACKPHY_SWCATPATTERN_N_sw_cat_pat_n_START (0)
#define SOC_HIPACKPHY_SWCATPATTERN_N_sw_cat_pat_n_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mrs_seq_prog : 32;
    } reg;
} SOC_HIPACKPHY_MRS_SEQ_PROG_UNION;
#endif
#define SOC_HIPACKPHY_MRS_SEQ_PROG_mrs_seq_prog_START (0)
#define SOC_HIPACKPHY_MRS_SEQ_PROG_mrs_seq_prog_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t_dram_clk_enable : 4;
        unsigned int t_dram_clk_disable : 4;
        unsigned int t_wakeup_thrd_lv3 : 4;
        unsigned int t_resp : 4;
        unsigned int lp_pll_powerdown_disable : 1;
        unsigned int lp_dx_phy_phgated_disable : 1;
        unsigned int lp_dx_phy_clkgated_disable : 1;
        unsigned int lp_ac_phy_clkgated_disable : 1;
        unsigned int lp_cmdoen_disable : 1;
        unsigned int t_wakeup_thrd_lv2 : 4;
        unsigned int gcken_dxbist : 1;
        unsigned int gcken_acbist : 1;
        unsigned int gcken_retrain : 1;
        unsigned int gcken_dtrain : 1;
        unsigned int gcken_dinit : 1;
        unsigned int gcken_dfi_main : 1;
        unsigned int gcken_auto_en : 1;
    } reg;
} SOC_HIPACKPHY_LPCTRL_UNION;
#endif
#define SOC_HIPACKPHY_LPCTRL_t_dram_clk_enable_START (0)
#define SOC_HIPACKPHY_LPCTRL_t_dram_clk_enable_END (3)
#define SOC_HIPACKPHY_LPCTRL_t_dram_clk_disable_START (4)
#define SOC_HIPACKPHY_LPCTRL_t_dram_clk_disable_END (7)
#define SOC_HIPACKPHY_LPCTRL_t_wakeup_thrd_lv3_START (8)
#define SOC_HIPACKPHY_LPCTRL_t_wakeup_thrd_lv3_END (11)
#define SOC_HIPACKPHY_LPCTRL_t_resp_START (12)
#define SOC_HIPACKPHY_LPCTRL_t_resp_END (15)
#define SOC_HIPACKPHY_LPCTRL_lp_pll_powerdown_disable_START (16)
#define SOC_HIPACKPHY_LPCTRL_lp_pll_powerdown_disable_END (16)
#define SOC_HIPACKPHY_LPCTRL_lp_dx_phy_phgated_disable_START (17)
#define SOC_HIPACKPHY_LPCTRL_lp_dx_phy_phgated_disable_END (17)
#define SOC_HIPACKPHY_LPCTRL_lp_dx_phy_clkgated_disable_START (18)
#define SOC_HIPACKPHY_LPCTRL_lp_dx_phy_clkgated_disable_END (18)
#define SOC_HIPACKPHY_LPCTRL_lp_ac_phy_clkgated_disable_START (19)
#define SOC_HIPACKPHY_LPCTRL_lp_ac_phy_clkgated_disable_END (19)
#define SOC_HIPACKPHY_LPCTRL_lp_cmdoen_disable_START (20)
#define SOC_HIPACKPHY_LPCTRL_lp_cmdoen_disable_END (20)
#define SOC_HIPACKPHY_LPCTRL_t_wakeup_thrd_lv2_START (21)
#define SOC_HIPACKPHY_LPCTRL_t_wakeup_thrd_lv2_END (24)
#define SOC_HIPACKPHY_LPCTRL_gcken_dxbist_START (25)
#define SOC_HIPACKPHY_LPCTRL_gcken_dxbist_END (25)
#define SOC_HIPACKPHY_LPCTRL_gcken_acbist_START (26)
#define SOC_HIPACKPHY_LPCTRL_gcken_acbist_END (26)
#define SOC_HIPACKPHY_LPCTRL_gcken_retrain_START (27)
#define SOC_HIPACKPHY_LPCTRL_gcken_retrain_END (27)
#define SOC_HIPACKPHY_LPCTRL_gcken_dtrain_START (28)
#define SOC_HIPACKPHY_LPCTRL_gcken_dtrain_END (28)
#define SOC_HIPACKPHY_LPCTRL_gcken_dinit_START (29)
#define SOC_HIPACKPHY_LPCTRL_gcken_dinit_END (29)
#define SOC_HIPACKPHY_LPCTRL_gcken_dfi_main_START (30)
#define SOC_HIPACKPHY_LPCTRL_gcken_dfi_main_END (30)
#define SOC_HIPACKPHY_LPCTRL_gcken_auto_en_START (31)
#define SOC_HIPACKPHY_LPCTRL_gcken_auto_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wl_falledge_ph_jstep_r : 5;
        unsigned int wl_falledge_ph_step_r : 5;
        unsigned int wl_falledge_bdl_jstep_r : 8;
        unsigned int reserved : 14;
    } reg;
} SOC_HIPACKPHY_TRAINCTRL12_UNION;
#endif
#define SOC_HIPACKPHY_TRAINCTRL12_wl_falledge_ph_jstep_r_START (0)
#define SOC_HIPACKPHY_TRAINCTRL12_wl_falledge_ph_jstep_r_END (4)
#define SOC_HIPACKPHY_TRAINCTRL12_wl_falledge_ph_step_r_START (5)
#define SOC_HIPACKPHY_TRAINCTRL12_wl_falledge_ph_step_r_END (9)
#define SOC_HIPACKPHY_TRAINCTRL12_wl_falledge_bdl_jstep_r_START (10)
#define SOC_HIPACKPHY_TRAINCTRL12_wl_falledge_bdl_jstep_r_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vrftres_ahvref : 6;
        unsigned int vrftres_ahvref_lb : 6;
        unsigned int vrftres_ahvref_ub : 6;
        unsigned int reserved : 14;
    } reg;
} SOC_HIPACKPHY_AHVREFT_STATUS_UNION;
#endif
#define SOC_HIPACKPHY_AHVREFT_STATUS_vrftres_ahvref_START (0)
#define SOC_HIPACKPHY_AHVREFT_STATUS_vrftres_ahvref_END (5)
#define SOC_HIPACKPHY_AHVREFT_STATUS_vrftres_ahvref_lb_START (6)
#define SOC_HIPACKPHY_AHVREFT_STATUS_vrftres_ahvref_lb_END (11)
#define SOC_HIPACKPHY_AHVREFT_STATUS_vrftres_ahvref_ub_START (12)
#define SOC_HIPACKPHY_AHVREFT_STATUS_vrftres_ahvref_ub_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ac_vrftres_dvref : 6;
        unsigned int ac_vrftres_dvref_lb : 6;
        unsigned int ac_vrftres_dvref_ub : 6;
        unsigned int reserved : 13;
        unsigned int ac_vreftres_set_type : 1;
    } reg;
} SOC_HIPACKPHY_ADVREF_STATUS_UNION;
#endif
#define SOC_HIPACKPHY_ADVREF_STATUS_ac_vrftres_dvref_START (0)
#define SOC_HIPACKPHY_ADVREF_STATUS_ac_vrftres_dvref_END (5)
#define SOC_HIPACKPHY_ADVREF_STATUS_ac_vrftres_dvref_lb_START (6)
#define SOC_HIPACKPHY_ADVREF_STATUS_ac_vrftres_dvref_lb_END (11)
#define SOC_HIPACKPHY_ADVREF_STATUS_ac_vrftres_dvref_ub_START (12)
#define SOC_HIPACKPHY_ADVREF_STATUS_ac_vrftres_dvref_ub_END (17)
#define SOC_HIPACKPHY_ADVREF_STATUS_ac_vreftres_set_type_START (31)
#define SOC_HIPACKPHY_ADVREF_STATUS_ac_vreftres_set_type_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t_lpwakeup_fg : 5;
        unsigned int dfi_adrbits_sel_ddr4 : 1;
        unsigned int lp_csoen_disable : 1;
        unsigned int reserved : 23;
        unsigned int gcken_apb_ctrlreg : 1;
        unsigned int gcken_apb_auto_en : 1;
    } reg;
} SOC_HIPACKPHY_DFIMISCCTRL_UNION;
#endif
#define SOC_HIPACKPHY_DFIMISCCTRL_t_lpwakeup_fg_START (0)
#define SOC_HIPACKPHY_DFIMISCCTRL_t_lpwakeup_fg_END (4)
#define SOC_HIPACKPHY_DFIMISCCTRL_dfi_adrbits_sel_ddr4_START (5)
#define SOC_HIPACKPHY_DFIMISCCTRL_dfi_adrbits_sel_ddr4_END (5)
#define SOC_HIPACKPHY_DFIMISCCTRL_lp_csoen_disable_START (6)
#define SOC_HIPACKPHY_DFIMISCCTRL_lp_csoen_disable_END (6)
#define SOC_HIPACKPHY_DFIMISCCTRL_gcken_apb_ctrlreg_START (30)
#define SOC_HIPACKPHY_DFIMISCCTRL_gcken_apb_ctrlreg_END (30)
#define SOC_HIPACKPHY_DFIMISCCTRL_gcken_apb_auto_en_START (31)
#define SOC_HIPACKPHY_DFIMISCCTRL_gcken_apb_auto_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bist_en : 1;
        unsigned int reserved_0 : 7;
        unsigned int dq_cmp_mask : 8;
        unsigned int dqm_cmp_mask : 1;
        unsigned int prbs_mode : 2;
        unsigned int reserved_1 : 5;
        unsigned int lfsr_seed : 8;
    } reg;
} SOC_HIPACKPHY_DXNBISTCTRL_UNION;
#endif
#define SOC_HIPACKPHY_DXNBISTCTRL_bist_en_START (0)
#define SOC_HIPACKPHY_DXNBISTCTRL_bist_en_END (0)
#define SOC_HIPACKPHY_DXNBISTCTRL_dq_cmp_mask_START (8)
#define SOC_HIPACKPHY_DXNBISTCTRL_dq_cmp_mask_END (15)
#define SOC_HIPACKPHY_DXNBISTCTRL_dqm_cmp_mask_START (16)
#define SOC_HIPACKPHY_DXNBISTCTRL_dqm_cmp_mask_END (16)
#define SOC_HIPACKPHY_DXNBISTCTRL_prbs_mode_START (17)
#define SOC_HIPACKPHY_DXNBISTCTRL_prbs_mode_END (18)
#define SOC_HIPACKPHY_DXNBISTCTRL_lfsr_seed_START (24)
#define SOC_HIPACKPHY_DXNBISTCTRL_lfsr_seed_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dq_cmp_rerr : 8;
        unsigned int dq_cmp_ferr : 8;
        unsigned int dqm_cmp_err : 1;
        unsigned int reserved : 15;
    } reg;
} SOC_HIPACKPHY_DXNBISTSTS_UNION;
#endif
#define SOC_HIPACKPHY_DXNBISTSTS_dq_cmp_rerr_START (0)
#define SOC_HIPACKPHY_DXNBISTSTS_dq_cmp_rerr_END (7)
#define SOC_HIPACKPHY_DXNBISTSTS_dq_cmp_ferr_START (8)
#define SOC_HIPACKPHY_DXNBISTSTS_dq_cmp_ferr_END (15)
#define SOC_HIPACKPHY_DXNBISTSTS_dqm_cmp_err_START (16)
#define SOC_HIPACKPHY_DXNBISTSTS_dqm_cmp_err_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bl_dis : 1;
        unsigned int dm_dis : 1;
        unsigned int reserved_0 : 5;
        unsigned int gck_dbi_autoen : 1;
        unsigned int dbi_write_mode : 2;
        unsigned int dbi_read_en : 2;
        unsigned int dbi_write_en : 2;
        unsigned int dbi_polarity : 1;
        unsigned int wdbi_mask_en : 1;
        unsigned int wdbi_mask_data : 8;
        unsigned int wl_falledge_adj_en_r : 1;
        unsigned int wl_falledge_pre_bdl_r : 1;
        unsigned int wl_rise_edge_r : 1;
        unsigned int wl_fall_edge_r : 1;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_HIPACKPHY_DXNCTRL_UNION;
#endif
#define SOC_HIPACKPHY_DXNCTRL_bl_dis_START (0)
#define SOC_HIPACKPHY_DXNCTRL_bl_dis_END (0)
#define SOC_HIPACKPHY_DXNCTRL_dm_dis_START (1)
#define SOC_HIPACKPHY_DXNCTRL_dm_dis_END (1)
#define SOC_HIPACKPHY_DXNCTRL_gck_dbi_autoen_START (7)
#define SOC_HIPACKPHY_DXNCTRL_gck_dbi_autoen_END (7)
#define SOC_HIPACKPHY_DXNCTRL_dbi_write_mode_START (8)
#define SOC_HIPACKPHY_DXNCTRL_dbi_write_mode_END (9)
#define SOC_HIPACKPHY_DXNCTRL_dbi_read_en_START (10)
#define SOC_HIPACKPHY_DXNCTRL_dbi_read_en_END (11)
#define SOC_HIPACKPHY_DXNCTRL_dbi_write_en_START (12)
#define SOC_HIPACKPHY_DXNCTRL_dbi_write_en_END (13)
#define SOC_HIPACKPHY_DXNCTRL_dbi_polarity_START (14)
#define SOC_HIPACKPHY_DXNCTRL_dbi_polarity_END (14)
#define SOC_HIPACKPHY_DXNCTRL_wdbi_mask_en_START (15)
#define SOC_HIPACKPHY_DXNCTRL_wdbi_mask_en_END (15)
#define SOC_HIPACKPHY_DXNCTRL_wdbi_mask_data_START (16)
#define SOC_HIPACKPHY_DXNCTRL_wdbi_mask_data_END (23)
#define SOC_HIPACKPHY_DXNCTRL_wl_falledge_adj_en_r_START (24)
#define SOC_HIPACKPHY_DXNCTRL_wl_falledge_adj_en_r_END (24)
#define SOC_HIPACKPHY_DXNCTRL_wl_falledge_pre_bdl_r_START (25)
#define SOC_HIPACKPHY_DXNCTRL_wl_falledge_pre_bdl_r_END (25)
#define SOC_HIPACKPHY_DXNCTRL_wl_rise_edge_r_START (26)
#define SOC_HIPACKPHY_DXNCTRL_wl_rise_edge_r_END (26)
#define SOC_HIPACKPHY_DXNCTRL_wl_fall_edge_r_START (27)
#define SOC_HIPACKPHY_DXNCTRL_wl_fall_edge_r_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdq0bdl : 8;
        unsigned int wdq1bdl : 8;
        unsigned int wdq2bdl : 8;
        unsigned int wdq3bdl : 8;
    } reg;
} SOC_HIPACKPHY_DXNWDQNBDL0_UNION;
#endif
#define SOC_HIPACKPHY_DXNWDQNBDL0_wdq0bdl_START (0)
#define SOC_HIPACKPHY_DXNWDQNBDL0_wdq0bdl_END (7)
#define SOC_HIPACKPHY_DXNWDQNBDL0_wdq1bdl_START (8)
#define SOC_HIPACKPHY_DXNWDQNBDL0_wdq1bdl_END (15)
#define SOC_HIPACKPHY_DXNWDQNBDL0_wdq2bdl_START (16)
#define SOC_HIPACKPHY_DXNWDQNBDL0_wdq2bdl_END (23)
#define SOC_HIPACKPHY_DXNWDQNBDL0_wdq3bdl_START (24)
#define SOC_HIPACKPHY_DXNWDQNBDL0_wdq3bdl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdq4bdl : 8;
        unsigned int wdq5bdl : 8;
        unsigned int wdq6bdl : 8;
        unsigned int wdq7bdl : 8;
    } reg;
} SOC_HIPACKPHY_DXNWDQNBDL1_UNION;
#endif
#define SOC_HIPACKPHY_DXNWDQNBDL1_wdq4bdl_START (0)
#define SOC_HIPACKPHY_DXNWDQNBDL1_wdq4bdl_END (7)
#define SOC_HIPACKPHY_DXNWDQNBDL1_wdq5bdl_START (8)
#define SOC_HIPACKPHY_DXNWDQNBDL1_wdq5bdl_END (15)
#define SOC_HIPACKPHY_DXNWDQNBDL1_wdq6bdl_START (16)
#define SOC_HIPACKPHY_DXNWDQNBDL1_wdq6bdl_END (23)
#define SOC_HIPACKPHY_DXNWDQNBDL1_wdq7bdl_START (24)
#define SOC_HIPACKPHY_DXNWDQNBDL1_wdq7bdl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdmbdl : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HIPACKPHY_DXNWDQNBDL2_UNION;
#endif
#define SOC_HIPACKPHY_DXNWDQNBDL2_wdmbdl_START (0)
#define SOC_HIPACKPHY_DXNWDQNBDL2_wdmbdl_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdq0bdl : 8;
        unsigned int rdq1bdl : 8;
        unsigned int rdq2bdl : 8;
        unsigned int rdq3bdl : 8;
    } reg;
} SOC_HIPACKPHY_DXNRDQNBDL0_UNION;
#endif
#define SOC_HIPACKPHY_DXNRDQNBDL0_rdq0bdl_START (0)
#define SOC_HIPACKPHY_DXNRDQNBDL0_rdq0bdl_END (7)
#define SOC_HIPACKPHY_DXNRDQNBDL0_rdq1bdl_START (8)
#define SOC_HIPACKPHY_DXNRDQNBDL0_rdq1bdl_END (15)
#define SOC_HIPACKPHY_DXNRDQNBDL0_rdq2bdl_START (16)
#define SOC_HIPACKPHY_DXNRDQNBDL0_rdq2bdl_END (23)
#define SOC_HIPACKPHY_DXNRDQNBDL0_rdq3bdl_START (24)
#define SOC_HIPACKPHY_DXNRDQNBDL0_rdq3bdl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdq4bdl : 8;
        unsigned int rdq5bdl : 8;
        unsigned int rdq6bdl : 8;
        unsigned int rdq7bdl : 8;
    } reg;
} SOC_HIPACKPHY_DXNRDQNBDL1_UNION;
#endif
#define SOC_HIPACKPHY_DXNRDQNBDL1_rdq4bdl_START (0)
#define SOC_HIPACKPHY_DXNRDQNBDL1_rdq4bdl_END (7)
#define SOC_HIPACKPHY_DXNRDQNBDL1_rdq5bdl_START (8)
#define SOC_HIPACKPHY_DXNRDQNBDL1_rdq5bdl_END (15)
#define SOC_HIPACKPHY_DXNRDQNBDL1_rdq6bdl_START (16)
#define SOC_HIPACKPHY_DXNRDQNBDL1_rdq6bdl_END (23)
#define SOC_HIPACKPHY_DXNRDQNBDL1_rdq7bdl_START (24)
#define SOC_HIPACKPHY_DXNRDQNBDL1_rdq7bdl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdmbdl : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_HIPACKPHY_DXNRDQNBDL2_UNION;
#endif
#define SOC_HIPACKPHY_DXNRDQNBDL2_rdmbdl_START (0)
#define SOC_HIPACKPHY_DXNRDQNBDL2_rdmbdl_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int oen_bdl : 8;
        unsigned int reserved_0 : 8;
        unsigned int wdqsoe_bdl : 8;
        unsigned int reserved_1 : 8;
    } reg;
} SOC_HIPACKPHY_DXNOEBDL_UNION;
#endif
#define SOC_HIPACKPHY_DXNOEBDL_oen_bdl_START (0)
#define SOC_HIPACKPHY_DXNOEBDL_oen_bdl_END (7)
#define SOC_HIPACKPHY_DXNOEBDL_wdqsoe_bdl_START (16)
#define SOC_HIPACKPHY_DXNOEBDL_wdqsoe_bdl_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdqsbdl : 10;
        unsigned int reserved_0: 6;
        unsigned int rdqscyc : 10;
        unsigned int reserved_1: 6;
    } reg;
} SOC_HIPACKPHY_DXNRDQSDLY_UNION;
#endif
#define SOC_HIPACKPHY_DXNRDQSDLY_rdqsbdl_START (0)
#define SOC_HIPACKPHY_DXNRDQSDLY_rdqsbdl_END (9)
#define SOC_HIPACKPHY_DXNRDQSDLY_rdqscyc_START (16)
#define SOC_HIPACKPHY_DXNRDQSDLY_rdqscyc_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdqsbdl : 8;
        unsigned int wdqsphase : 6;
        unsigned int reserved : 18;
    } reg;
} SOC_HIPACKPHY_DXNWDQSDLY_UNION;
#endif
#define SOC_HIPACKPHY_DXNWDQSDLY_wdqsbdl_START (0)
#define SOC_HIPACKPHY_DXNWDQSDLY_wdqsbdl_END (7)
#define SOC_HIPACKPHY_DXNWDQSDLY_wdqsphase_START (8)
#define SOC_HIPACKPHY_DXNWDQSDLY_wdqsphase_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 8;
        unsigned int wdqphase : 8;
        unsigned int reserved_1: 16;
    } reg;
} SOC_HIPACKPHY_DXNWDQDLY_UNION;
#endif
#define SOC_HIPACKPHY_DXNWDQDLY_wdqphase_START (8)
#define SOC_HIPACKPHY_DXNWDQDLY_wdqphase_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 16;
        unsigned int wlsl : 2;
        unsigned int reserved_1: 14;
    } reg;
} SOC_HIPACKPHY_DXNWLSL_UNION;
#endif
#define SOC_HIPACKPHY_DXNWLSL_wlsl_START (16)
#define SOC_HIPACKPHY_DXNWLSL_wlsl_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gds : 4;
        unsigned int reserved_0 : 12;
        unsigned int org_rdqsgph : 10;
        unsigned int reserved_1 : 6;
    } reg;
} SOC_HIPACKPHY_DXNGDS_UNION;
#endif
#define SOC_HIPACKPHY_DXNGDS_gds_START (0)
#define SOC_HIPACKPHY_DXNGDS_gds_END (3)
#define SOC_HIPACKPHY_DXNGDS_org_rdqsgph_START (16)
#define SOC_HIPACKPHY_DXNGDS_org_rdqsgph_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdqsgbdl : 8;
        unsigned int reserved_0 : 1;
        unsigned int rdqsgphase : 10;
        unsigned int reserved_1 : 5;
        unsigned int rdqsgtxbdl : 8;
    } reg;
} SOC_HIPACKPHY_DXNRDQSGDLY_UNION;
#endif
#define SOC_HIPACKPHY_DXNRDQSGDLY_rdqsgbdl_START (0)
#define SOC_HIPACKPHY_DXNRDQSGDLY_rdqsgbdl_END (7)
#define SOC_HIPACKPHY_DXNRDQSGDLY_rdqsgphase_START (9)
#define SOC_HIPACKPHY_DXNRDQSGDLY_rdqsgphase_END (18)
#define SOC_HIPACKPHY_DXNRDQSGDLY_rdqsgtxbdl_START (24)
#define SOC_HIPACKPHY_DXNRDQSGDLY_rdqsgtxbdl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdq0bdl_left : 8;
        unsigned int wdq1bdl_left : 8;
        unsigned int wdq2bdl_left : 8;
        unsigned int wdq3bdl_left : 8;
    } reg;
} SOC_HIPACKPHY_DXNWDQNLB0_UNION;
#endif
#define SOC_HIPACKPHY_DXNWDQNLB0_wdq0bdl_left_START (0)
#define SOC_HIPACKPHY_DXNWDQNLB0_wdq0bdl_left_END (7)
#define SOC_HIPACKPHY_DXNWDQNLB0_wdq1bdl_left_START (8)
#define SOC_HIPACKPHY_DXNWDQNLB0_wdq1bdl_left_END (15)
#define SOC_HIPACKPHY_DXNWDQNLB0_wdq2bdl_left_START (16)
#define SOC_HIPACKPHY_DXNWDQNLB0_wdq2bdl_left_END (23)
#define SOC_HIPACKPHY_DXNWDQNLB0_wdq3bdl_left_START (24)
#define SOC_HIPACKPHY_DXNWDQNLB0_wdq3bdl_left_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdqsbdl30 : 10;
        unsigned int reserved_0 : 6;
        unsigned int bdl_mondly : 10;
        unsigned int reserved_1 : 6;
    } reg;
} SOC_HIPACKPHY_DXNRDQSDLYSUB_UNION;
#endif
#define SOC_HIPACKPHY_DXNRDQSDLYSUB_rdqsbdl30_START (0)
#define SOC_HIPACKPHY_DXNRDQSDLYSUB_rdqsbdl30_END (9)
#define SOC_HIPACKPHY_DXNRDQSDLYSUB_bdl_mondly_START (16)
#define SOC_HIPACKPHY_DXNRDQSDLYSUB_bdl_mondly_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdqsbdl_right : 10;
        unsigned int reserved_0 : 6;
        unsigned int rdqsbdl_left : 10;
        unsigned int reserved_1 : 6;
    } reg;
} SOC_HIPACKPHY_DXNRDBOUND_UNION;
#endif
#define SOC_HIPACKPHY_DXNRDBOUND_rdqsbdl_right_START (0)
#define SOC_HIPACKPHY_DXNRDBOUND_rdqsbdl_right_END (9)
#define SOC_HIPACKPHY_DXNRDBOUND_rdqsbdl_left_START (16)
#define SOC_HIPACKPHY_DXNRDBOUND_rdqsbdl_left_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdqphase_right : 8;
        unsigned int reserved_0 : 4;
        unsigned int wdet_ave_comp_flag : 1;
        unsigned int reserved_1 : 3;
        unsigned int wdqphase_left : 8;
        unsigned int wdq0bdl_left : 8;
    } reg;
} SOC_HIPACKPHY_DXNWRBOUND_UNION;
#endif
#define SOC_HIPACKPHY_DXNWRBOUND_wdqphase_right_START (0)
#define SOC_HIPACKPHY_DXNWRBOUND_wdqphase_right_END (7)
#define SOC_HIPACKPHY_DXNWRBOUND_wdet_ave_comp_flag_START (12)
#define SOC_HIPACKPHY_DXNWRBOUND_wdet_ave_comp_flag_END (12)
#define SOC_HIPACKPHY_DXNWRBOUND_wdqphase_left_START (16)
#define SOC_HIPACKPHY_DXNWRBOUND_wdqphase_left_END (23)
#define SOC_HIPACKPHY_DXNWRBOUND_wdq0bdl_left_START (24)
#define SOC_HIPACKPHY_DXNWRBOUND_wdq0bdl_left_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdq4bdl_left : 8;
        unsigned int wdq5bdl_left : 8;
        unsigned int wdq6bdl_left : 8;
        unsigned int wdq7bdl_left : 8;
    } reg;
} SOC_HIPACKPHY_DXNWDQNLB1_UNION;
#endif
#define SOC_HIPACKPHY_DXNWDQNLB1_wdq4bdl_left_START (0)
#define SOC_HIPACKPHY_DXNWDQNLB1_wdq4bdl_left_END (7)
#define SOC_HIPACKPHY_DXNWDQNLB1_wdq5bdl_left_START (8)
#define SOC_HIPACKPHY_DXNWDQNLB1_wdq5bdl_left_END (15)
#define SOC_HIPACKPHY_DXNWDQNLB1_wdq6bdl_left_START (16)
#define SOC_HIPACKPHY_DXNWDQNLB1_wdq6bdl_left_END (23)
#define SOC_HIPACKPHY_DXNWDQNLB1_wdq7bdl_left_START (24)
#define SOC_HIPACKPHY_DXNWDQNLB1_wdq7bdl_left_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdmbdl_left : 8;
        unsigned int reserved : 8;
        unsigned int dqs0_gold : 16;
    } reg;
} SOC_HIPACKPHY_DXDEBUG0_UNION;
#endif
#define SOC_HIPACKPHY_DXDEBUG0_wdmbdl_left_START (0)
#define SOC_HIPACKPHY_DXDEBUG0_wdmbdl_left_END (7)
#define SOC_HIPACKPHY_DXDEBUG0_dqs0_gold_START (16)
#define SOC_HIPACKPHY_DXDEBUG0_dqs0_gold_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dqs0b : 16;
        unsigned int dqs0 : 16;
    } reg;
} SOC_HIPACKPHY_DXDEBUG1_UNION;
#endif
#define SOC_HIPACKPHY_DXDEBUG1_dqs0b_START (0)
#define SOC_HIPACKPHY_DXDEBUG1_dqs0b_END (15)
#define SOC_HIPACKPHY_DXDEBUG1_dqs0_START (16)
#define SOC_HIPACKPHY_DXDEBUG1_dqs0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vrftres_dvref : 6;
        unsigned int vrftres_dvref_lb : 6;
        unsigned int vrftres_dvref_ub : 6;
        unsigned int reserved : 14;
    } reg;
} SOC_HIPACKPHY_DVREFT_STATUS_UNION;
#endif
#define SOC_HIPACKPHY_DVREFT_STATUS_vrftres_dvref_START (0)
#define SOC_HIPACKPHY_DVREFT_STATUS_vrftres_dvref_END (5)
#define SOC_HIPACKPHY_DVREFT_STATUS_vrftres_dvref_lb_START (6)
#define SOC_HIPACKPHY_DVREFT_STATUS_vrftres_dvref_lb_END (11)
#define SOC_HIPACKPHY_DVREFT_STATUS_vrftres_dvref_ub_START (12)
#define SOC_HIPACKPHY_DVREFT_STATUS_vrftres_dvref_ub_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vrftres_hvref : 6;
        unsigned int vrftres_hvref_lb : 6;
        unsigned int vrftres_dvref_ub : 6;
        unsigned int reserved : 14;
    } reg;
} SOC_HIPACKPHY_HVREFT_STATUS_UNION;
#endif
#define SOC_HIPACKPHY_HVREFT_STATUS_vrftres_hvref_START (0)
#define SOC_HIPACKPHY_HVREFT_STATUS_vrftres_hvref_END (5)
#define SOC_HIPACKPHY_HVREFT_STATUS_vrftres_hvref_lb_START (6)
#define SOC_HIPACKPHY_HVREFT_STATUS_vrftres_hvref_lb_END (11)
#define SOC_HIPACKPHY_HVREFT_STATUS_vrftres_dvref_ub_START (12)
#define SOC_HIPACKPHY_HVREFT_STATUS_vrftres_dvref_ub_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vreft_bist_rb : 9;
        unsigned int reserved_0 : 7;
        unsigned int vreft_bist_lb : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_HIPACKPHY_VREFT_BOUND_UNION;
#endif
#define SOC_HIPACKPHY_VREFT_BOUND_vreft_bist_rb_START (0)
#define SOC_HIPACKPHY_VREFT_BOUND_vreft_bist_rb_END (8)
#define SOC_HIPACKPHY_VREFT_BOUND_vreft_bist_lb_START (16)
#define SOC_HIPACKPHY_VREFT_BOUND_vreft_bist_lb_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pll_lock_err_th : 4;
        unsigned int pll_lock_err_en : 1;
        unsigned int pll_lock_err_clr : 1;
        unsigned int pll_lock_err_cnt_r : 4;
        unsigned int reserved : 22;
    } reg;
} SOC_HIPACKPHY_PLLSTATUS_UNION;
#endif
#define SOC_HIPACKPHY_PLLSTATUS_pll_lock_err_th_START (0)
#define SOC_HIPACKPHY_PLLSTATUS_pll_lock_err_th_END (3)
#define SOC_HIPACKPHY_PLLSTATUS_pll_lock_err_en_START (4)
#define SOC_HIPACKPHY_PLLSTATUS_pll_lock_err_en_END (4)
#define SOC_HIPACKPHY_PLLSTATUS_pll_lock_err_clr_START (5)
#define SOC_HIPACKPHY_PLLSTATUS_pll_lock_err_clr_END (5)
#define SOC_HIPACKPHY_PLLSTATUS_pll_lock_err_cnt_r_START (6)
#define SOC_HIPACKPHY_PLLSTATUS_pll_lock_err_cnt_r_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mpc_en_r : 1;
        unsigned int bstpatsel_dm_r : 3;
        unsigned int bstdat_dm_r : 2;
        unsigned int mpc_type_r : 1;
        unsigned int mpc_num_prewrite_r : 3;
        unsigned int mem_scan_test_en_r : 1;
        unsigned int reserved : 21;
    } reg;
} SOC_HIPACKPHY_BISTCTRL1_UNION;
#endif
#define SOC_HIPACKPHY_BISTCTRL1_mpc_en_r_START (0)
#define SOC_HIPACKPHY_BISTCTRL1_mpc_en_r_END (0)
#define SOC_HIPACKPHY_BISTCTRL1_bstpatsel_dm_r_START (1)
#define SOC_HIPACKPHY_BISTCTRL1_bstpatsel_dm_r_END (3)
#define SOC_HIPACKPHY_BISTCTRL1_bstdat_dm_r_START (4)
#define SOC_HIPACKPHY_BISTCTRL1_bstdat_dm_r_END (5)
#define SOC_HIPACKPHY_BISTCTRL1_mpc_type_r_START (6)
#define SOC_HIPACKPHY_BISTCTRL1_mpc_type_r_END (6)
#define SOC_HIPACKPHY_BISTCTRL1_mpc_num_prewrite_r_START (7)
#define SOC_HIPACKPHY_BISTCTRL1_mpc_num_prewrite_r_END (9)
#define SOC_HIPACKPHY_BISTCTRL1_mem_scan_test_en_r_START (10)
#define SOC_HIPACKPHY_BISTCTRL1_mem_scan_test_en_r_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int det_pat_alt : 32;
    } reg;
} SOC_HIPACKPHY_DETPATTERN1_UNION;
#endif
#define SOC_HIPACKPHY_DETPATTERN1_det_pat_alt_START (0)
#define SOC_HIPACKPHY_DETPATTERN1_det_pat_alt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 6;
        unsigned int acctl_pll_bp_refpfd : 1;
        unsigned int acctl_pll_bp_refvco : 1;
        unsigned int acctl_pll_enphsel : 1;
        unsigned int acctl_pll_en_cal : 1;
        unsigned int acctl_pll_initsel : 1;
        unsigned int acctl_pll_lockt_sel : 1;
        unsigned int acctl_pll_fopetestfb : 1;
        unsigned int acctl_pll_fopetestref : 1;
        unsigned int acctl_pll_lockin : 1;
        unsigned int reserved_1 : 17;
    } reg;
} SOC_HIPACKPHY_AC_PLLCTRL_UNION;
#endif
#define SOC_HIPACKPHY_AC_PLLCTRL_acctl_pll_bp_refpfd_START (6)
#define SOC_HIPACKPHY_AC_PLLCTRL_acctl_pll_bp_refpfd_END (6)
#define SOC_HIPACKPHY_AC_PLLCTRL_acctl_pll_bp_refvco_START (7)
#define SOC_HIPACKPHY_AC_PLLCTRL_acctl_pll_bp_refvco_END (7)
#define SOC_HIPACKPHY_AC_PLLCTRL_acctl_pll_enphsel_START (8)
#define SOC_HIPACKPHY_AC_PLLCTRL_acctl_pll_enphsel_END (8)
#define SOC_HIPACKPHY_AC_PLLCTRL_acctl_pll_en_cal_START (9)
#define SOC_HIPACKPHY_AC_PLLCTRL_acctl_pll_en_cal_END (9)
#define SOC_HIPACKPHY_AC_PLLCTRL_acctl_pll_initsel_START (10)
#define SOC_HIPACKPHY_AC_PLLCTRL_acctl_pll_initsel_END (10)
#define SOC_HIPACKPHY_AC_PLLCTRL_acctl_pll_lockt_sel_START (11)
#define SOC_HIPACKPHY_AC_PLLCTRL_acctl_pll_lockt_sel_END (11)
#define SOC_HIPACKPHY_AC_PLLCTRL_acctl_pll_fopetestfb_START (12)
#define SOC_HIPACKPHY_AC_PLLCTRL_acctl_pll_fopetestfb_END (12)
#define SOC_HIPACKPHY_AC_PLLCTRL_acctl_pll_fopetestref_START (13)
#define SOC_HIPACKPHY_AC_PLLCTRL_acctl_pll_fopetestref_END (13)
#define SOC_HIPACKPHY_AC_PLLCTRL_acctl_pll_lockin_START (14)
#define SOC_HIPACKPHY_AC_PLLCTRL_acctl_pll_lockin_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_odtoen : 1;
        unsigned int reserved_0 : 1;
        unsigned int acctl_cmdoen : 8;
        unsigned int reserved_1 : 2;
        unsigned int acctl_ckoen : 1;
        unsigned int acctl_ckeoen : 2;
        unsigned int acctl_csoen : 2;
        unsigned int acctl_resetoen : 1;
        unsigned int lpddr_mode : 1;
        unsigned int lpbk_addr_v_sel : 1;
        unsigned int wfifo_acctl_gcken : 1;
        unsigned int wfifo_acctl_passthrough : 1;
        unsigned int reserved_2 : 9;
        unsigned int lp_csoen_disable_phy : 1;
    } reg;
} SOC_HIPACKPHY_AC_PHYCTRL0_UNION;
#endif
#define SOC_HIPACKPHY_AC_PHYCTRL0_acctl_odtoen_START (0)
#define SOC_HIPACKPHY_AC_PHYCTRL0_acctl_odtoen_END (0)
#define SOC_HIPACKPHY_AC_PHYCTRL0_acctl_cmdoen_START (2)
#define SOC_HIPACKPHY_AC_PHYCTRL0_acctl_cmdoen_END (9)
#define SOC_HIPACKPHY_AC_PHYCTRL0_acctl_ckoen_START (12)
#define SOC_HIPACKPHY_AC_PHYCTRL0_acctl_ckoen_END (12)
#define SOC_HIPACKPHY_AC_PHYCTRL0_acctl_ckeoen_START (13)
#define SOC_HIPACKPHY_AC_PHYCTRL0_acctl_ckeoen_END (14)
#define SOC_HIPACKPHY_AC_PHYCTRL0_acctl_csoen_START (15)
#define SOC_HIPACKPHY_AC_PHYCTRL0_acctl_csoen_END (16)
#define SOC_HIPACKPHY_AC_PHYCTRL0_acctl_resetoen_START (17)
#define SOC_HIPACKPHY_AC_PHYCTRL0_acctl_resetoen_END (17)
#define SOC_HIPACKPHY_AC_PHYCTRL0_lpddr_mode_START (18)
#define SOC_HIPACKPHY_AC_PHYCTRL0_lpddr_mode_END (18)
#define SOC_HIPACKPHY_AC_PHYCTRL0_lpbk_addr_v_sel_START (19)
#define SOC_HIPACKPHY_AC_PHYCTRL0_lpbk_addr_v_sel_END (19)
#define SOC_HIPACKPHY_AC_PHYCTRL0_wfifo_acctl_gcken_START (20)
#define SOC_HIPACKPHY_AC_PHYCTRL0_wfifo_acctl_gcken_END (20)
#define SOC_HIPACKPHY_AC_PHYCTRL0_wfifo_acctl_passthrough_START (21)
#define SOC_HIPACKPHY_AC_PHYCTRL0_wfifo_acctl_passthrough_END (21)
#define SOC_HIPACKPHY_AC_PHYCTRL0_lp_csoen_disable_phy_START (31)
#define SOC_HIPACKPHY_AC_PHYCTRL0_lp_csoen_disable_phy_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_ioctl_diffck_en : 1;
        unsigned int acctl_ioctl_aciopldn : 1;
        unsigned int acctl_ioctl_ndrv : 6;
        unsigned int acctl_ioctl_pdrv : 6;
        unsigned int reserved : 18;
    } reg;
} SOC_HIPACKPHY_AC_IOCTL_UNION;
#endif
#define SOC_HIPACKPHY_AC_IOCTL_acctl_ioctl_diffck_en_START (0)
#define SOC_HIPACKPHY_AC_IOCTL_acctl_ioctl_diffck_en_END (0)
#define SOC_HIPACKPHY_AC_IOCTL_acctl_ioctl_aciopldn_START (1)
#define SOC_HIPACKPHY_AC_IOCTL_acctl_ioctl_aciopldn_END (1)
#define SOC_HIPACKPHY_AC_IOCTL_acctl_ioctl_ndrv_START (2)
#define SOC_HIPACKPHY_AC_IOCTL_acctl_ioctl_ndrv_END (7)
#define SOC_HIPACKPHY_AC_IOCTL_acctl_ioctl_pdrv_START (8)
#define SOC_HIPACKPHY_AC_IOCTL_acctl_ioctl_pdrv_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 11;
        unsigned int acctl_pll_ENLV_PI : 1;
        unsigned int acctl_pll_FBTEST : 1;
        unsigned int acctl_pll_TESTEN_odrain : 1;
        unsigned int acctl_pll_DELAY_SEL : 1;
        unsigned int acctl_pll_CPIBEFORE_SEL : 1;
        unsigned int acctl_pll_CPISEL : 1;
        unsigned int acctl_pll_EN_dbg : 1;
        unsigned int acctl_pll_testen : 1;
        unsigned int acctl_pll_init : 1;
        unsigned int acctl_pll_cpi : 3;
        unsigned int acctl_pll_sp : 2;
        unsigned int reserved_1 : 1;
        unsigned int acctl_pll_lt : 2;
        unsigned int reserved_2 : 4;
    } reg;
} SOC_HIPACKPHY_AC_PHYCTRL1_UNION;
#endif
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_ENLV_PI_START (11)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_ENLV_PI_END (11)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_FBTEST_START (12)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_FBTEST_END (12)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_TESTEN_odrain_START (13)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_TESTEN_odrain_END (13)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_DELAY_SEL_START (14)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_DELAY_SEL_END (14)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_CPIBEFORE_SEL_START (15)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_CPIBEFORE_SEL_END (15)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_CPISEL_START (16)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_CPISEL_END (16)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_EN_dbg_START (17)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_EN_dbg_END (17)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_testen_START (18)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_testen_END (18)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_init_START (19)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_init_END (19)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_cpi_START (20)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_cpi_END (22)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_sp_START (23)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_sp_END (24)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_lt_START (26)
#define SOC_HIPACKPHY_AC_PHYCTRL1_acctl_pll_lt_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_pll_test : 8;
        unsigned int reserved : 23;
        unsigned int acctl_pll_lock : 1;
    } reg;
} SOC_HIPACKPHY_AC_PHYPLLCTRL_AC_UNION;
#endif
#define SOC_HIPACKPHY_AC_PHYPLLCTRL_AC_acctl_pll_test_START (0)
#define SOC_HIPACKPHY_AC_PHYPLLCTRL_AC_acctl_pll_test_END (7)
#define SOC_HIPACKPHY_AC_PHYPLLCTRL_AC_acctl_pll_lock_START (31)
#define SOC_HIPACKPHY_AC_PHYPLLCTRL_AC_acctl_pll_lock_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 28;
        unsigned int vref_lpbkmode0 : 2;
        unsigned int vref_lpbkmode1 : 2;
    } reg;
} SOC_HIPACKPHY_AC_IOCTL2_UNION;
#endif
#define SOC_HIPACKPHY_AC_IOCTL2_vref_lpbkmode0_START (28)
#define SOC_HIPACKPHY_AC_IOCTL2_vref_lpbkmode0_END (29)
#define SOC_HIPACKPHY_AC_IOCTL2_vref_lpbkmode1_START (30)
#define SOC_HIPACKPHY_AC_IOCTL2_vref_lpbkmode1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_phazmeter_in : 16;
        unsigned int acctl_phazmeter_status : 16;
    } reg;
} SOC_HIPACKPHY_AC_PHYPLLCTRL_DX3_UNION;
#endif
#define SOC_HIPACKPHY_AC_PHYPLLCTRL_DX3_acctl_phazmeter_in_START (0)
#define SOC_HIPACKPHY_AC_PHYPLLCTRL_DX3_acctl_phazmeter_in_END (15)
#define SOC_HIPACKPHY_AC_PHYPLLCTRL_DX3_acctl_phazmeter_status_START (16)
#define SOC_HIPACKPHY_AC_PHYPLLCTRL_DX3_acctl_phazmeter_status_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_odt_bdl : 8;
        unsigned int reserved_0 : 8;
        unsigned int acctl_odt1_bdl : 7;
        unsigned int reserved_1 : 9;
    } reg;
} SOC_HIPACKPHY_AC_ACCMDBDL0_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACCMDBDL0_acctl_odt_bdl_START (0)
#define SOC_HIPACKPHY_AC_ACCMDBDL0_acctl_odt_bdl_END (7)
#define SOC_HIPACKPHY_AC_ACCMDBDL0_acctl_odt1_bdl_START (16)
#define SOC_HIPACKPHY_AC_ACCMDBDL0_acctl_odt1_bdl_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_cke_bdl : 8;
        unsigned int reserved_0 : 8;
        unsigned int acctl_cke1_bdl : 8;
        unsigned int reserved_1 : 8;
    } reg;
} SOC_HIPACKPHY_AC_ACCMDBDL4_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACCMDBDL4_acctl_cke_bdl_START (0)
#define SOC_HIPACKPHY_AC_ACCMDBDL4_acctl_cke_bdl_END (7)
#define SOC_HIPACKPHY_AC_ACCMDBDL4_acctl_cke1_bdl_START (16)
#define SOC_HIPACKPHY_AC_ACCMDBDL4_acctl_cke1_bdl_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_dramclk0_bdl : 8;
        unsigned int acctl_dramclk1_bdl : 8;
        unsigned int acctl_refclk_bdl : 5;
        unsigned int reserved_0 : 3;
        unsigned int acctl_fbclk_bdl : 5;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_HIPACKPHY_AC_ACCLKBDL_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACCLKBDL_acctl_dramclk0_bdl_START (0)
#define SOC_HIPACKPHY_AC_ACCLKBDL_acctl_dramclk0_bdl_END (7)
#define SOC_HIPACKPHY_AC_ACCLKBDL_acctl_dramclk1_bdl_START (8)
#define SOC_HIPACKPHY_AC_ACCLKBDL_acctl_dramclk1_bdl_END (15)
#define SOC_HIPACKPHY_AC_ACCLKBDL_acctl_refclk_bdl_START (16)
#define SOC_HIPACKPHY_AC_ACCLKBDL_acctl_refclk_bdl_END (20)
#define SOC_HIPACKPHY_AC_ACCLKBDL_acctl_fbclk_bdl_START (24)
#define SOC_HIPACKPHY_AC_ACCLKBDL_acctl_fbclk_bdl_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 3;
        unsigned int acctl_dramclk_h : 1;
        unsigned int acctl_dramclk_l : 1;
        unsigned int acctl_lvdqclkdiv2 : 1;
        unsigned int acctl_bufphyclk_div2 : 1;
        unsigned int acctl_byp_clk_gated_dis : 1;
        unsigned int acctl_byp_ck90_cmd_code_b0 : 20;
        unsigned int acctl_reg_reset_pin_sync_mode : 1;
        unsigned int acctl_reg_sel_pos_rx : 1;
        unsigned int acctl_ppfifo_ptr_en : 1;
        unsigned int acctl_sync_ppfifo_ptr : 1;
    } reg;
} SOC_HIPACKPHY_AC_ACPHYCTL0_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACPHYCTL0_acctl_dramclk_h_START (3)
#define SOC_HIPACKPHY_AC_ACPHYCTL0_acctl_dramclk_h_END (3)
#define SOC_HIPACKPHY_AC_ACPHYCTL0_acctl_dramclk_l_START (4)
#define SOC_HIPACKPHY_AC_ACPHYCTL0_acctl_dramclk_l_END (4)
#define SOC_HIPACKPHY_AC_ACPHYCTL0_acctl_lvdqclkdiv2_START (5)
#define SOC_HIPACKPHY_AC_ACPHYCTL0_acctl_lvdqclkdiv2_END (5)
#define SOC_HIPACKPHY_AC_ACPHYCTL0_acctl_bufphyclk_div2_START (6)
#define SOC_HIPACKPHY_AC_ACPHYCTL0_acctl_bufphyclk_div2_END (6)
#define SOC_HIPACKPHY_AC_ACPHYCTL0_acctl_byp_clk_gated_dis_START (7)
#define SOC_HIPACKPHY_AC_ACPHYCTL0_acctl_byp_clk_gated_dis_END (7)
#define SOC_HIPACKPHY_AC_ACPHYCTL0_acctl_byp_ck90_cmd_code_b0_START (8)
#define SOC_HIPACKPHY_AC_ACPHYCTL0_acctl_byp_ck90_cmd_code_b0_END (27)
#define SOC_HIPACKPHY_AC_ACPHYCTL0_acctl_reg_reset_pin_sync_mode_START (28)
#define SOC_HIPACKPHY_AC_ACPHYCTL0_acctl_reg_reset_pin_sync_mode_END (28)
#define SOC_HIPACKPHY_AC_ACPHYCTL0_acctl_reg_sel_pos_rx_START (29)
#define SOC_HIPACKPHY_AC_ACPHYCTL0_acctl_reg_sel_pos_rx_END (29)
#define SOC_HIPACKPHY_AC_ACPHYCTL0_acctl_ppfifo_ptr_en_START (30)
#define SOC_HIPACKPHY_AC_ACPHYCTL0_acctl_ppfifo_ptr_en_END (30)
#define SOC_HIPACKPHY_AC_ACPHYCTL0_acctl_sync_ppfifo_ptr_START (31)
#define SOC_HIPACKPHY_AC_ACPHYCTL0_acctl_sync_ppfifo_ptr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_dram1sel_reset : 1;
        unsigned int acctl_dram1sel_cs : 1;
        unsigned int acctl_dram1sel_cke : 1;
        unsigned int acctl_dram1sel_odt : 1;
        unsigned int acctl_dram1sel_ras : 1;
        unsigned int acctl_dram1sel_cas : 1;
        unsigned int acctl_dram1sel_we : 1;
        unsigned int reserved_0 : 1;
        unsigned int acctl_dram1sel_ba : 3;
        unsigned int reserved_1 : 5;
        unsigned int acctl_dram1sel_addr : 16;
    } reg;
} SOC_HIPACKPHY_AC_ACPHYCTL1_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACPHYCTL1_acctl_dram1sel_reset_START (0)
#define SOC_HIPACKPHY_AC_ACPHYCTL1_acctl_dram1sel_reset_END (0)
#define SOC_HIPACKPHY_AC_ACPHYCTL1_acctl_dram1sel_cs_START (1)
#define SOC_HIPACKPHY_AC_ACPHYCTL1_acctl_dram1sel_cs_END (1)
#define SOC_HIPACKPHY_AC_ACPHYCTL1_acctl_dram1sel_cke_START (2)
#define SOC_HIPACKPHY_AC_ACPHYCTL1_acctl_dram1sel_cke_END (2)
#define SOC_HIPACKPHY_AC_ACPHYCTL1_acctl_dram1sel_odt_START (3)
#define SOC_HIPACKPHY_AC_ACPHYCTL1_acctl_dram1sel_odt_END (3)
#define SOC_HIPACKPHY_AC_ACPHYCTL1_acctl_dram1sel_ras_START (4)
#define SOC_HIPACKPHY_AC_ACPHYCTL1_acctl_dram1sel_ras_END (4)
#define SOC_HIPACKPHY_AC_ACPHYCTL1_acctl_dram1sel_cas_START (5)
#define SOC_HIPACKPHY_AC_ACPHYCTL1_acctl_dram1sel_cas_END (5)
#define SOC_HIPACKPHY_AC_ACPHYCTL1_acctl_dram1sel_we_START (6)
#define SOC_HIPACKPHY_AC_ACPHYCTL1_acctl_dram1sel_we_END (6)
#define SOC_HIPACKPHY_AC_ACPHYCTL1_acctl_dram1sel_ba_START (8)
#define SOC_HIPACKPHY_AC_ACPHYCTL1_acctl_dram1sel_ba_END (10)
#define SOC_HIPACKPHY_AC_ACPHYCTL1_acctl_dram1sel_addr_START (16)
#define SOC_HIPACKPHY_AC_ACPHYCTL1_acctl_dram1sel_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_sdrsel_reset : 1;
        unsigned int acctl_sdrsel_cs : 1;
        unsigned int acctl_sdrsel_cke : 1;
        unsigned int acctl_sdrsel_odt : 1;
        unsigned int acctl_sdrsel_ras : 1;
        unsigned int acctl_sdrsel_cas : 1;
        unsigned int acctl_sdrsel_we : 1;
        unsigned int reserved_0 : 1;
        unsigned int acctl_sdrsel_ba : 3;
        unsigned int reserved_1 : 5;
        unsigned int acctl_sdrsel_addr : 16;
    } reg;
} SOC_HIPACKPHY_AC_ACPHYCTL2_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACPHYCTL2_acctl_sdrsel_reset_START (0)
#define SOC_HIPACKPHY_AC_ACPHYCTL2_acctl_sdrsel_reset_END (0)
#define SOC_HIPACKPHY_AC_ACPHYCTL2_acctl_sdrsel_cs_START (1)
#define SOC_HIPACKPHY_AC_ACPHYCTL2_acctl_sdrsel_cs_END (1)
#define SOC_HIPACKPHY_AC_ACPHYCTL2_acctl_sdrsel_cke_START (2)
#define SOC_HIPACKPHY_AC_ACPHYCTL2_acctl_sdrsel_cke_END (2)
#define SOC_HIPACKPHY_AC_ACPHYCTL2_acctl_sdrsel_odt_START (3)
#define SOC_HIPACKPHY_AC_ACPHYCTL2_acctl_sdrsel_odt_END (3)
#define SOC_HIPACKPHY_AC_ACPHYCTL2_acctl_sdrsel_ras_START (4)
#define SOC_HIPACKPHY_AC_ACPHYCTL2_acctl_sdrsel_ras_END (4)
#define SOC_HIPACKPHY_AC_ACPHYCTL2_acctl_sdrsel_cas_START (5)
#define SOC_HIPACKPHY_AC_ACPHYCTL2_acctl_sdrsel_cas_END (5)
#define SOC_HIPACKPHY_AC_ACPHYCTL2_acctl_sdrsel_we_START (6)
#define SOC_HIPACKPHY_AC_ACPHYCTL2_acctl_sdrsel_we_END (6)
#define SOC_HIPACKPHY_AC_ACPHYCTL2_acctl_sdrsel_ba_START (8)
#define SOC_HIPACKPHY_AC_ACPHYCTL2_acctl_sdrsel_ba_END (10)
#define SOC_HIPACKPHY_AC_ACPHYCTL2_acctl_sdrsel_addr_START (16)
#define SOC_HIPACKPHY_AC_ACPHYCTL2_acctl_sdrsel_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_posedge_reset : 1;
        unsigned int acctl_posedge_cs : 1;
        unsigned int acctl_posedge_cke : 1;
        unsigned int acctl_posedge_odt : 1;
        unsigned int acctl_posedge_ras : 1;
        unsigned int acctl_posedge_cas : 1;
        unsigned int acctl_posedge_we : 1;
        unsigned int reserved_0 : 1;
        unsigned int acctl_posedge_ba : 3;
        unsigned int reserved_1 : 5;
        unsigned int acctl_posedge_addr : 16;
    } reg;
} SOC_HIPACKPHY_AC_ACPHYCTL3_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACPHYCTL3_acctl_posedge_reset_START (0)
#define SOC_HIPACKPHY_AC_ACPHYCTL3_acctl_posedge_reset_END (0)
#define SOC_HIPACKPHY_AC_ACPHYCTL3_acctl_posedge_cs_START (1)
#define SOC_HIPACKPHY_AC_ACPHYCTL3_acctl_posedge_cs_END (1)
#define SOC_HIPACKPHY_AC_ACPHYCTL3_acctl_posedge_cke_START (2)
#define SOC_HIPACKPHY_AC_ACPHYCTL3_acctl_posedge_cke_END (2)
#define SOC_HIPACKPHY_AC_ACPHYCTL3_acctl_posedge_odt_START (3)
#define SOC_HIPACKPHY_AC_ACPHYCTL3_acctl_posedge_odt_END (3)
#define SOC_HIPACKPHY_AC_ACPHYCTL3_acctl_posedge_ras_START (4)
#define SOC_HIPACKPHY_AC_ACPHYCTL3_acctl_posedge_ras_END (4)
#define SOC_HIPACKPHY_AC_ACPHYCTL3_acctl_posedge_cas_START (5)
#define SOC_HIPACKPHY_AC_ACPHYCTL3_acctl_posedge_cas_END (5)
#define SOC_HIPACKPHY_AC_ACPHYCTL3_acctl_posedge_we_START (6)
#define SOC_HIPACKPHY_AC_ACPHYCTL3_acctl_posedge_we_END (6)
#define SOC_HIPACKPHY_AC_ACPHYCTL3_acctl_posedge_ba_START (8)
#define SOC_HIPACKPHY_AC_ACPHYCTL3_acctl_posedge_ba_END (10)
#define SOC_HIPACKPHY_AC_ACPHYCTL3_acctl_posedge_addr_START (16)
#define SOC_HIPACKPHY_AC_ACPHYCTL3_acctl_posedge_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_timing2T_reset : 1;
        unsigned int acctl_timing2T_cs : 1;
        unsigned int acctl_timing2T_cke : 1;
        unsigned int acctl_timing2T_odt : 1;
        unsigned int acctl_timing2T_ras : 1;
        unsigned int acctl_timing2T_cas : 1;
        unsigned int acctl_timing2T_we : 1;
        unsigned int reserved_0 : 1;
        unsigned int acctl_timing2T_ba : 3;
        unsigned int reserved_1 : 5;
        unsigned int acctl_timing2T_addr : 16;
    } reg;
} SOC_HIPACKPHY_AC_ACPHYCTL4_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACPHYCTL4_acctl_timing2T_reset_START (0)
#define SOC_HIPACKPHY_AC_ACPHYCTL4_acctl_timing2T_reset_END (0)
#define SOC_HIPACKPHY_AC_ACPHYCTL4_acctl_timing2T_cs_START (1)
#define SOC_HIPACKPHY_AC_ACPHYCTL4_acctl_timing2T_cs_END (1)
#define SOC_HIPACKPHY_AC_ACPHYCTL4_acctl_timing2T_cke_START (2)
#define SOC_HIPACKPHY_AC_ACPHYCTL4_acctl_timing2T_cke_END (2)
#define SOC_HIPACKPHY_AC_ACPHYCTL4_acctl_timing2T_odt_START (3)
#define SOC_HIPACKPHY_AC_ACPHYCTL4_acctl_timing2T_odt_END (3)
#define SOC_HIPACKPHY_AC_ACPHYCTL4_acctl_timing2T_ras_START (4)
#define SOC_HIPACKPHY_AC_ACPHYCTL4_acctl_timing2T_ras_END (4)
#define SOC_HIPACKPHY_AC_ACPHYCTL4_acctl_timing2T_cas_START (5)
#define SOC_HIPACKPHY_AC_ACPHYCTL4_acctl_timing2T_cas_END (5)
#define SOC_HIPACKPHY_AC_ACPHYCTL4_acctl_timing2T_we_START (6)
#define SOC_HIPACKPHY_AC_ACPHYCTL4_acctl_timing2T_we_END (6)
#define SOC_HIPACKPHY_AC_ACPHYCTL4_acctl_timing2T_ba_START (8)
#define SOC_HIPACKPHY_AC_ACPHYCTL4_acctl_timing2T_ba_END (10)
#define SOC_HIPACKPHY_AC_ACPHYCTL4_acctl_timing2T_addr_START (16)
#define SOC_HIPACKPHY_AC_ACPHYCTL4_acctl_timing2T_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_clk1x_dramclk0 : 3;
        unsigned int reserved_0 : 1;
        unsigned int acctl_clk1x_dramclk1 : 3;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 3;
        unsigned int reserved_3 : 1;
        unsigned int acctl_clk1x_cmd2t : 3;
        unsigned int reserved_4 : 1;
        unsigned int acctl_clk1x_cmd1t : 3;
        unsigned int reserved_5 : 1;
        unsigned int acctl_clk1x_mclk : 3;
        unsigned int reserved_6 : 9;
    } reg;
} SOC_HIPACKPHY_AC_ACPHYCTL5_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACPHYCTL5_acctl_clk1x_dramclk0_START (0)
#define SOC_HIPACKPHY_AC_ACPHYCTL5_acctl_clk1x_dramclk0_END (2)
#define SOC_HIPACKPHY_AC_ACPHYCTL5_acctl_clk1x_dramclk1_START (4)
#define SOC_HIPACKPHY_AC_ACPHYCTL5_acctl_clk1x_dramclk1_END (6)
#define SOC_HIPACKPHY_AC_ACPHYCTL5_acctl_clk1x_cmd2t_START (12)
#define SOC_HIPACKPHY_AC_ACPHYCTL5_acctl_clk1x_cmd2t_END (14)
#define SOC_HIPACKPHY_AC_ACPHYCTL5_acctl_clk1x_cmd1t_START (16)
#define SOC_HIPACKPHY_AC_ACPHYCTL5_acctl_clk1x_cmd1t_END (18)
#define SOC_HIPACKPHY_AC_ACPHYCTL5_acctl_clk1x_mclk_START (20)
#define SOC_HIPACKPHY_AC_ACPHYCTL5_acctl_clk1x_mclk_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_clk2x_dramclk0 : 3;
        unsigned int reserved_0 : 1;
        unsigned int acctl_clk2x_dramclk1 : 3;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 3;
        unsigned int reserved_3 : 1;
        unsigned int acctl_clk2x_cmd2t : 3;
        unsigned int reserved_4 : 1;
        unsigned int acctl_clk2x_cmd1t : 3;
        unsigned int reserved_5 : 1;
        unsigned int acctl_clk2x_mclk : 3;
        unsigned int reserved_6 : 9;
    } reg;
} SOC_HIPACKPHY_AC_ACPHYCTL6_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACPHYCTL6_acctl_clk2x_dramclk0_START (0)
#define SOC_HIPACKPHY_AC_ACPHYCTL6_acctl_clk2x_dramclk0_END (2)
#define SOC_HIPACKPHY_AC_ACPHYCTL6_acctl_clk2x_dramclk1_START (4)
#define SOC_HIPACKPHY_AC_ACPHYCTL6_acctl_clk2x_dramclk1_END (6)
#define SOC_HIPACKPHY_AC_ACPHYCTL6_acctl_clk2x_cmd2t_START (12)
#define SOC_HIPACKPHY_AC_ACPHYCTL6_acctl_clk2x_cmd2t_END (14)
#define SOC_HIPACKPHY_AC_ACPHYCTL6_acctl_clk2x_cmd1t_START (16)
#define SOC_HIPACKPHY_AC_ACPHYCTL6_acctl_clk2x_cmd1t_END (18)
#define SOC_HIPACKPHY_AC_ACPHYCTL6_acctl_clk2x_mclk_START (20)
#define SOC_HIPACKPHY_AC_ACPHYCTL6_acctl_clk2x_mclk_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 3;
        unsigned int acctl_ck0p_mclk : 3;
        unsigned int acctl_ck1p_dclk0 : 3;
        unsigned int acctl_ck2p_dclk1 : 3;
        unsigned int acctl_ck3p_cmd1t : 3;
        unsigned int reserved_1 : 8;
        unsigned int acctl_halft_cmd1t : 1;
        unsigned int acctl_halft_dramclk1 : 1;
        unsigned int acctl_halft_dramclk0 : 1;
        unsigned int cmd1t2t_sel : 1;
        unsigned int reserved_2 : 5;
    } reg;
} SOC_HIPACKPHY_AC_ACPHYCTL7_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACPHYCTL7_acctl_ck0p_mclk_START (3)
#define SOC_HIPACKPHY_AC_ACPHYCTL7_acctl_ck0p_mclk_END (5)
#define SOC_HIPACKPHY_AC_ACPHYCTL7_acctl_ck1p_dclk0_START (6)
#define SOC_HIPACKPHY_AC_ACPHYCTL7_acctl_ck1p_dclk0_END (8)
#define SOC_HIPACKPHY_AC_ACPHYCTL7_acctl_ck2p_dclk1_START (9)
#define SOC_HIPACKPHY_AC_ACPHYCTL7_acctl_ck2p_dclk1_END (11)
#define SOC_HIPACKPHY_AC_ACPHYCTL7_acctl_ck3p_cmd1t_START (12)
#define SOC_HIPACKPHY_AC_ACPHYCTL7_acctl_ck3p_cmd1t_END (14)
#define SOC_HIPACKPHY_AC_ACPHYCTL7_acctl_halft_cmd1t_START (23)
#define SOC_HIPACKPHY_AC_ACPHYCTL7_acctl_halft_cmd1t_END (23)
#define SOC_HIPACKPHY_AC_ACPHYCTL7_acctl_halft_dramclk1_START (24)
#define SOC_HIPACKPHY_AC_ACPHYCTL7_acctl_halft_dramclk1_END (24)
#define SOC_HIPACKPHY_AC_ACPHYCTL7_acctl_halft_dramclk0_START (25)
#define SOC_HIPACKPHY_AC_ACPHYCTL7_acctl_halft_dramclk0_END (25)
#define SOC_HIPACKPHY_AC_ACPHYCTL7_cmd1t2t_sel_START (26)
#define SOC_HIPACKPHY_AC_ACPHYCTL7_cmd1t2t_sel_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acdbg_rdcnt : 6;
        unsigned int reserved_0 : 2;
        unsigned int acctl_DESKEW_regread : 1;
        unsigned int reserved_1 : 7;
        unsigned int acdbg_config : 4;
        unsigned int reserved_2 : 12;
    } reg;
} SOC_HIPACKPHY_AC_ACDEBUG_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACDEBUG_acdbg_rdcnt_START (0)
#define SOC_HIPACKPHY_AC_ACDEBUG_acdbg_rdcnt_END (5)
#define SOC_HIPACKPHY_AC_ACDEBUG_acctl_DESKEW_regread_START (8)
#define SOC_HIPACKPHY_AC_ACDEBUG_acctl_DESKEW_regread_END (8)
#define SOC_HIPACKPHY_AC_ACDEBUG_acdbg_config_START (16)
#define SOC_HIPACKPHY_AC_ACDEBUG_acdbg_config_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_rsvdctrl : 32;
    } reg;
} SOC_HIPACKPHY_AC_ACPHYRSVDC_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACPHYRSVDC_acctl_rsvdctrl_START (0)
#define SOC_HIPACKPHY_AC_ACPHYRSVDC_acctl_rsvdctrl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_rsvdstatus : 32;
    } reg;
} SOC_HIPACKPHY_AC_ACPHYRSVDS_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACPHYRSVDS_acctl_rsvdstatus_START (0)
#define SOC_HIPACKPHY_AC_ACPHYRSVDS_acctl_rsvdstatus_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_dq1_dcc : 3;
        unsigned int acctl_dq0_dcc : 3;
        unsigned int acctl_dqs1_dcc : 3;
        unsigned int acctl_dqs0_dcc : 3;
        unsigned int acctl_mclk_dcc : 3;
        unsigned int reserved_0 : 1;
        unsigned int acctl_dq1_dcc_byt1 : 3;
        unsigned int acctl_dq0_dcc_byt1 : 3;
        unsigned int acctl_dqs1_dcc_byt1 : 3;
        unsigned int acctl_dqs0_dcc_byt1 : 3;
        unsigned int acctl_mclk_dcc_byt1 : 3;
        unsigned int reserved_1 : 1;
    } reg;
} SOC_HIPACKPHY_AC_ACPHYDCC_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACPHYDCC_acctl_dq1_dcc_START (0)
#define SOC_HIPACKPHY_AC_ACPHYDCC_acctl_dq1_dcc_END (2)
#define SOC_HIPACKPHY_AC_ACPHYDCC_acctl_dq0_dcc_START (3)
#define SOC_HIPACKPHY_AC_ACPHYDCC_acctl_dq0_dcc_END (5)
#define SOC_HIPACKPHY_AC_ACPHYDCC_acctl_dqs1_dcc_START (6)
#define SOC_HIPACKPHY_AC_ACPHYDCC_acctl_dqs1_dcc_END (8)
#define SOC_HIPACKPHY_AC_ACPHYDCC_acctl_dqs0_dcc_START (9)
#define SOC_HIPACKPHY_AC_ACPHYDCC_acctl_dqs0_dcc_END (11)
#define SOC_HIPACKPHY_AC_ACPHYDCC_acctl_mclk_dcc_START (12)
#define SOC_HIPACKPHY_AC_ACPHYDCC_acctl_mclk_dcc_END (14)
#define SOC_HIPACKPHY_AC_ACPHYDCC_acctl_dq1_dcc_byt1_START (16)
#define SOC_HIPACKPHY_AC_ACPHYDCC_acctl_dq1_dcc_byt1_END (18)
#define SOC_HIPACKPHY_AC_ACPHYDCC_acctl_dq0_dcc_byt1_START (19)
#define SOC_HIPACKPHY_AC_ACPHYDCC_acctl_dq0_dcc_byt1_END (21)
#define SOC_HIPACKPHY_AC_ACPHYDCC_acctl_dqs1_dcc_byt1_START (22)
#define SOC_HIPACKPHY_AC_ACPHYDCC_acctl_dqs1_dcc_byt1_END (24)
#define SOC_HIPACKPHY_AC_ACPHYDCC_acctl_dqs0_dcc_byt1_START (25)
#define SOC_HIPACKPHY_AC_ACPHYDCC_acctl_dqs0_dcc_byt1_END (27)
#define SOC_HIPACKPHY_AC_ACPHYDCC_acctl_mclk_dcc_byt1_START (28)
#define SOC_HIPACKPHY_AC_ACPHYDCC_acctl_mclk_dcc_byt1_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_sdrsel_cs1 : 1;
        unsigned int acctl_sdrsel_cke1 : 1;
        unsigned int acctl_sdrsel_odt1 : 1;
        unsigned int acctl_posedge_cs1 : 1;
        unsigned int acctl_posedge_cke1 : 1;
        unsigned int acctl_posedge_odt1 : 1;
        unsigned int acctl_dram1sel_cs1 : 1;
        unsigned int acctl_dram1sel_cke1 : 1;
        unsigned int acctl_dram1sel_odt1 : 1;
        unsigned int acctl_timing2t_cs1 : 1;
        unsigned int acctl_timing2t_cke1 : 1;
        unsigned int acctl_timing2t_odt1 : 1;
        unsigned int reserved : 20;
    } reg;
} SOC_HIPACKPHY_AC_ACPHYCTL9_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_sdrsel_cs1_START (0)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_sdrsel_cs1_END (0)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_sdrsel_cke1_START (1)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_sdrsel_cke1_END (1)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_sdrsel_odt1_START (2)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_sdrsel_odt1_END (2)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_posedge_cs1_START (3)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_posedge_cs1_END (3)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_posedge_cke1_START (4)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_posedge_cke1_END (4)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_posedge_odt1_START (5)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_posedge_odt1_END (5)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_dram1sel_cs1_START (6)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_dram1sel_cs1_END (6)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_dram1sel_cke1_START (7)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_dram1sel_cke1_END (7)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_dram1sel_odt1_START (8)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_dram1sel_odt1_END (8)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_timing2t_cs1_START (9)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_timing2t_cs1_END (9)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_timing2t_cke1_START (10)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_timing2t_cke1_END (10)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_timing2t_odt1_START (11)
#define SOC_HIPACKPHY_AC_ACPHYCTL9_acctl_timing2t_odt1_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_clk1x_dramclk0_byt1 : 3;
        unsigned int acctl_clk1x_dramclk1_byt1 : 3;
        unsigned int acctl_clk1x_cmd2t_byt1 : 3;
        unsigned int acctl_clk1x_cmd1t_byt1 : 3;
        unsigned int acctl_clk1x_mclk_byt1 : 3;
        unsigned int reserved_0 : 1;
        unsigned int acctl_clk2x_dramclk0_byt1 : 3;
        unsigned int acctl_clk2x_dramclk1_byt1 : 3;
        unsigned int acctl_clk2x_cmd2t_byt1 : 3;
        unsigned int acctl_clk2x_cmd1t_byt1 : 3;
        unsigned int acctl_clk2x_mclk_byt1 : 3;
        unsigned int reserved_1 : 1;
    } reg;
} SOC_HIPACKPHY_AC_ACPHYCTL10_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACPHYCTL10_acctl_clk1x_dramclk0_byt1_START (0)
#define SOC_HIPACKPHY_AC_ACPHYCTL10_acctl_clk1x_dramclk0_byt1_END (2)
#define SOC_HIPACKPHY_AC_ACPHYCTL10_acctl_clk1x_dramclk1_byt1_START (3)
#define SOC_HIPACKPHY_AC_ACPHYCTL10_acctl_clk1x_dramclk1_byt1_END (5)
#define SOC_HIPACKPHY_AC_ACPHYCTL10_acctl_clk1x_cmd2t_byt1_START (6)
#define SOC_HIPACKPHY_AC_ACPHYCTL10_acctl_clk1x_cmd2t_byt1_END (8)
#define SOC_HIPACKPHY_AC_ACPHYCTL10_acctl_clk1x_cmd1t_byt1_START (9)
#define SOC_HIPACKPHY_AC_ACPHYCTL10_acctl_clk1x_cmd1t_byt1_END (11)
#define SOC_HIPACKPHY_AC_ACPHYCTL10_acctl_clk1x_mclk_byt1_START (12)
#define SOC_HIPACKPHY_AC_ACPHYCTL10_acctl_clk1x_mclk_byt1_END (14)
#define SOC_HIPACKPHY_AC_ACPHYCTL10_acctl_clk2x_dramclk0_byt1_START (16)
#define SOC_HIPACKPHY_AC_ACPHYCTL10_acctl_clk2x_dramclk0_byt1_END (18)
#define SOC_HIPACKPHY_AC_ACPHYCTL10_acctl_clk2x_dramclk1_byt1_START (19)
#define SOC_HIPACKPHY_AC_ACPHYCTL10_acctl_clk2x_dramclk1_byt1_END (21)
#define SOC_HIPACKPHY_AC_ACPHYCTL10_acctl_clk2x_cmd2t_byt1_START (22)
#define SOC_HIPACKPHY_AC_ACPHYCTL10_acctl_clk2x_cmd2t_byt1_END (24)
#define SOC_HIPACKPHY_AC_ACPHYCTL10_acctl_clk2x_cmd1t_byt1_START (25)
#define SOC_HIPACKPHY_AC_ACPHYCTL10_acctl_clk2x_cmd1t_byt1_END (27)
#define SOC_HIPACKPHY_AC_ACPHYCTL10_acctl_clk2x_mclk_byt1_START (28)
#define SOC_HIPACKPHY_AC_ACPHYCTL10_acctl_clk2x_mclk_byt1_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_ck1p_dclk0_byt1 : 3;
        unsigned int acctl_ck2p_dclk1_byt1 : 3;
        unsigned int acctl_ck3p_cmd1t_byt1 : 3;
        unsigned int acctl_ck4p_cmd2t_byt1 : 3;
        unsigned int reserved_0 : 11;
        unsigned int acctl_reg_byone_cmdr1T_sel : 1;
        unsigned int acctl_reg_CMD_Byt1_phsel : 4;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_HIPACKPHY_AC_ACPHYCTL11_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACPHYCTL11_acctl_ck1p_dclk0_byt1_START (0)
#define SOC_HIPACKPHY_AC_ACPHYCTL11_acctl_ck1p_dclk0_byt1_END (2)
#define SOC_HIPACKPHY_AC_ACPHYCTL11_acctl_ck2p_dclk1_byt1_START (3)
#define SOC_HIPACKPHY_AC_ACPHYCTL11_acctl_ck2p_dclk1_byt1_END (5)
#define SOC_HIPACKPHY_AC_ACPHYCTL11_acctl_ck3p_cmd1t_byt1_START (6)
#define SOC_HIPACKPHY_AC_ACPHYCTL11_acctl_ck3p_cmd1t_byt1_END (8)
#define SOC_HIPACKPHY_AC_ACPHYCTL11_acctl_ck4p_cmd2t_byt1_START (9)
#define SOC_HIPACKPHY_AC_ACPHYCTL11_acctl_ck4p_cmd2t_byt1_END (11)
#define SOC_HIPACKPHY_AC_ACPHYCTL11_acctl_reg_byone_cmdr1T_sel_START (23)
#define SOC_HIPACKPHY_AC_ACPHYCTL11_acctl_reg_byone_cmdr1T_sel_END (23)
#define SOC_HIPACKPHY_AC_ACPHYCTL11_acctl_reg_CMD_Byt1_phsel_START (24)
#define SOC_HIPACKPHY_AC_ACPHYCTL11_acctl_reg_CMD_Byt1_phsel_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 16;
        unsigned int acctl_ioctl_zq_rx_mode : 2;
        unsigned int reserved_1 : 2;
        unsigned int ioctl_cs_rx_mode0 : 2;
        unsigned int ioctl_cs_rx_mode1 : 2;
        unsigned int ioctl_ck_rx_mode0 : 1;
        unsigned int ioctl_ck_rx_mode1 : 1;
        unsigned int reserved_2 : 6;
    } reg;
} SOC_HIPACKPHY_AC_IOCTL3_UNION;
#endif
#define SOC_HIPACKPHY_AC_IOCTL3_acctl_ioctl_zq_rx_mode_START (16)
#define SOC_HIPACKPHY_AC_IOCTL3_acctl_ioctl_zq_rx_mode_END (17)
#define SOC_HIPACKPHY_AC_IOCTL3_ioctl_cs_rx_mode0_START (20)
#define SOC_HIPACKPHY_AC_IOCTL3_ioctl_cs_rx_mode0_END (21)
#define SOC_HIPACKPHY_AC_IOCTL3_ioctl_cs_rx_mode1_START (22)
#define SOC_HIPACKPHY_AC_IOCTL3_ioctl_cs_rx_mode1_END (23)
#define SOC_HIPACKPHY_AC_IOCTL3_ioctl_ck_rx_mode0_START (24)
#define SOC_HIPACKPHY_AC_IOCTL3_ioctl_ck_rx_mode0_END (24)
#define SOC_HIPACKPHY_AC_IOCTL3_ioctl_ck_rx_mode1_START (25)
#define SOC_HIPACKPHY_AC_IOCTL3_ioctl_ck_rx_mode1_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_reg_mclk_dcc_v : 5;
        unsigned int acctl_reg_mclk_dcc_h : 5;
        unsigned int acctl_reg_dq0_dcc_v : 5;
        unsigned int acctl_reg_dq0_dcc_h : 5;
        unsigned int acctl_reg_dq1_dcc_v : 5;
        unsigned int acctl_reg_dq1_dcc_h : 5;
        unsigned int reserved : 2;
    } reg;
} SOC_HIPACKPHY_AC_ACPHYDCC1_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACPHYDCC1_acctl_reg_mclk_dcc_v_START (0)
#define SOC_HIPACKPHY_AC_ACPHYDCC1_acctl_reg_mclk_dcc_v_END (4)
#define SOC_HIPACKPHY_AC_ACPHYDCC1_acctl_reg_mclk_dcc_h_START (5)
#define SOC_HIPACKPHY_AC_ACPHYDCC1_acctl_reg_mclk_dcc_h_END (9)
#define SOC_HIPACKPHY_AC_ACPHYDCC1_acctl_reg_dq0_dcc_v_START (10)
#define SOC_HIPACKPHY_AC_ACPHYDCC1_acctl_reg_dq0_dcc_v_END (14)
#define SOC_HIPACKPHY_AC_ACPHYDCC1_acctl_reg_dq0_dcc_h_START (15)
#define SOC_HIPACKPHY_AC_ACPHYDCC1_acctl_reg_dq0_dcc_h_END (19)
#define SOC_HIPACKPHY_AC_ACPHYDCC1_acctl_reg_dq1_dcc_v_START (20)
#define SOC_HIPACKPHY_AC_ACPHYDCC1_acctl_reg_dq1_dcc_v_END (24)
#define SOC_HIPACKPHY_AC_ACPHYDCC1_acctl_reg_dq1_dcc_h_START (25)
#define SOC_HIPACKPHY_AC_ACPHYDCC1_acctl_reg_dq1_dcc_h_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_reg_dqs0_dcc_h : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_HIPACKPHY_AC_ACPHYDCC2_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACPHYDCC2_acctl_reg_dqs0_dcc_h_START (0)
#define SOC_HIPACKPHY_AC_ACPHYDCC2_acctl_reg_dqs0_dcc_h_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 16;
        unsigned int ioctl_addr_rx_mode0 : 6;
        unsigned int ioctl_addr_rx_mode1 : 6;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_HIPACKPHY_AC_IOCTL5_UNION;
#endif
#define SOC_HIPACKPHY_AC_IOCTL5_ioctl_addr_rx_mode0_START (16)
#define SOC_HIPACKPHY_AC_IOCTL5_ioctl_addr_rx_mode0_END (21)
#define SOC_HIPACKPHY_AC_IOCTL5_ioctl_addr_rx_mode1_START (22)
#define SOC_HIPACKPHY_AC_IOCTL5_ioctl_addr_rx_mode1_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 26;
        unsigned int ioctl_odtsel : 3;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_HIPACKPHY_AC_IOCTL6_UNION;
#endif
#define SOC_HIPACKPHY_AC_IOCTL6_ioctl_odtsel_START (26)
#define SOC_HIPACKPHY_AC_IOCTL6_ioctl_odtsel_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_ioctl_genvref_range1_2 : 4;
        unsigned int acctl_ioctl_genvref_range0_2 : 4;
        unsigned int acctl_ioctl_genvref_range1_1 : 4;
        unsigned int acctl_ioctl_genvref_range0_1 : 4;
        unsigned int acctl_ioctl_genvref_range1_0 : 4;
        unsigned int acctl_ioctl_genvref_range0_0 : 4;
        unsigned int acctl_ioctl_genvref_pd1 : 4;
        unsigned int acctl_ioctl_genvref_pd0 : 4;
    } reg;
} SOC_HIPACKPHY_AC_IOCTL7_UNION;
#endif
#define SOC_HIPACKPHY_AC_IOCTL7_acctl_ioctl_genvref_range1_2_START (0)
#define SOC_HIPACKPHY_AC_IOCTL7_acctl_ioctl_genvref_range1_2_END (3)
#define SOC_HIPACKPHY_AC_IOCTL7_acctl_ioctl_genvref_range0_2_START (4)
#define SOC_HIPACKPHY_AC_IOCTL7_acctl_ioctl_genvref_range0_2_END (7)
#define SOC_HIPACKPHY_AC_IOCTL7_acctl_ioctl_genvref_range1_1_START (8)
#define SOC_HIPACKPHY_AC_IOCTL7_acctl_ioctl_genvref_range1_1_END (11)
#define SOC_HIPACKPHY_AC_IOCTL7_acctl_ioctl_genvref_range0_1_START (12)
#define SOC_HIPACKPHY_AC_IOCTL7_acctl_ioctl_genvref_range0_1_END (15)
#define SOC_HIPACKPHY_AC_IOCTL7_acctl_ioctl_genvref_range1_0_START (16)
#define SOC_HIPACKPHY_AC_IOCTL7_acctl_ioctl_genvref_range1_0_END (19)
#define SOC_HIPACKPHY_AC_IOCTL7_acctl_ioctl_genvref_range0_0_START (20)
#define SOC_HIPACKPHY_AC_IOCTL7_acctl_ioctl_genvref_range0_0_END (23)
#define SOC_HIPACKPHY_AC_IOCTL7_acctl_ioctl_genvref_pd1_START (24)
#define SOC_HIPACKPHY_AC_IOCTL7_acctl_ioctl_genvref_pd1_END (27)
#define SOC_HIPACKPHY_AC_IOCTL7_acctl_ioctl_genvref_pd0_START (28)
#define SOC_HIPACKPHY_AC_IOCTL7_acctl_ioctl_genvref_pd0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_ioctl_genvref_refsel1_2 : 4;
        unsigned int acctl_ioctl_genvref_refsel0_2 : 4;
        unsigned int acctl_ioctl_genvref_refsel1_1 : 4;
        unsigned int acctl_ioctl_genvref_refsel0_1 : 4;
        unsigned int acctl_ioctl_genvref_refsel1_0 : 4;
        unsigned int acctl_ioctl_genvref_refsel0_0 : 4;
        unsigned int reserved : 8;
    } reg;
} SOC_HIPACKPHY_AC_IOCTL8_UNION;
#endif
#define SOC_HIPACKPHY_AC_IOCTL8_acctl_ioctl_genvref_refsel1_2_START (0)
#define SOC_HIPACKPHY_AC_IOCTL8_acctl_ioctl_genvref_refsel1_2_END (3)
#define SOC_HIPACKPHY_AC_IOCTL8_acctl_ioctl_genvref_refsel0_2_START (4)
#define SOC_HIPACKPHY_AC_IOCTL8_acctl_ioctl_genvref_refsel0_2_END (7)
#define SOC_HIPACKPHY_AC_IOCTL8_acctl_ioctl_genvref_refsel1_1_START (8)
#define SOC_HIPACKPHY_AC_IOCTL8_acctl_ioctl_genvref_refsel1_1_END (11)
#define SOC_HIPACKPHY_AC_IOCTL8_acctl_ioctl_genvref_refsel0_1_START (12)
#define SOC_HIPACKPHY_AC_IOCTL8_acctl_ioctl_genvref_refsel0_1_END (15)
#define SOC_HIPACKPHY_AC_IOCTL8_acctl_ioctl_genvref_refsel1_0_START (16)
#define SOC_HIPACKPHY_AC_IOCTL8_acctl_ioctl_genvref_refsel1_0_END (19)
#define SOC_HIPACKPHY_AC_IOCTL8_acctl_ioctl_genvref_refsel0_0_START (20)
#define SOC_HIPACKPHY_AC_IOCTL8_acctl_ioctl_genvref_refsel0_0_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ck_ioctl_ronbseln : 3;
        unsigned int ck_ioctl_ronbselp : 3;
        unsigned int ck_ioctl_ronselp : 3;
        unsigned int ck_ioctl_ronseln : 3;
        unsigned int ac2t_ioctl_ronselp : 3;
        unsigned int ac2t_ioctl_ronseln : 3;
        unsigned int ac1t_ioctl_ronselp : 3;
        unsigned int ac1t_ioctl_ronseln : 3;
        unsigned int reserved : 8;
    } reg;
} SOC_HIPACKPHY_AC_IOCTL9_UNION;
#endif
#define SOC_HIPACKPHY_AC_IOCTL9_ck_ioctl_ronbseln_START (0)
#define SOC_HIPACKPHY_AC_IOCTL9_ck_ioctl_ronbseln_END (2)
#define SOC_HIPACKPHY_AC_IOCTL9_ck_ioctl_ronbselp_START (3)
#define SOC_HIPACKPHY_AC_IOCTL9_ck_ioctl_ronbselp_END (5)
#define SOC_HIPACKPHY_AC_IOCTL9_ck_ioctl_ronselp_START (6)
#define SOC_HIPACKPHY_AC_IOCTL9_ck_ioctl_ronselp_END (8)
#define SOC_HIPACKPHY_AC_IOCTL9_ck_ioctl_ronseln_START (9)
#define SOC_HIPACKPHY_AC_IOCTL9_ck_ioctl_ronseln_END (11)
#define SOC_HIPACKPHY_AC_IOCTL9_ac2t_ioctl_ronselp_START (12)
#define SOC_HIPACKPHY_AC_IOCTL9_ac2t_ioctl_ronselp_END (14)
#define SOC_HIPACKPHY_AC_IOCTL9_ac2t_ioctl_ronseln_START (15)
#define SOC_HIPACKPHY_AC_IOCTL9_ac2t_ioctl_ronseln_END (17)
#define SOC_HIPACKPHY_AC_IOCTL9_ac1t_ioctl_ronselp_START (18)
#define SOC_HIPACKPHY_AC_IOCTL9_ac1t_ioctl_ronselp_END (20)
#define SOC_HIPACKPHY_AC_IOCTL9_ac1t_ioctl_ronseln_START (21)
#define SOC_HIPACKPHY_AC_IOCTL9_ac1t_ioctl_ronseln_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ac1t_ioctl_PRE_N : 2;
        unsigned int ac1t_ioctl_PRE_P : 2;
        unsigned int ac2t_ioctl_PRE_N : 2;
        unsigned int ac2t_ioctl_PRE_P : 2;
        unsigned int ck_ioctl_PRE_N : 2;
        unsigned int ck_ioctl_PRE_P : 2;
        unsigned int reserved : 20;
    } reg;
} SOC_HIPACKPHY_AC_IOCTL10_UNION;
#endif
#define SOC_HIPACKPHY_AC_IOCTL10_ac1t_ioctl_PRE_N_START (0)
#define SOC_HIPACKPHY_AC_IOCTL10_ac1t_ioctl_PRE_N_END (1)
#define SOC_HIPACKPHY_AC_IOCTL10_ac1t_ioctl_PRE_P_START (2)
#define SOC_HIPACKPHY_AC_IOCTL10_ac1t_ioctl_PRE_P_END (3)
#define SOC_HIPACKPHY_AC_IOCTL10_ac2t_ioctl_PRE_N_START (4)
#define SOC_HIPACKPHY_AC_IOCTL10_ac2t_ioctl_PRE_N_END (5)
#define SOC_HIPACKPHY_AC_IOCTL10_ac2t_ioctl_PRE_P_START (6)
#define SOC_HIPACKPHY_AC_IOCTL10_ac2t_ioctl_PRE_P_END (7)
#define SOC_HIPACKPHY_AC_IOCTL10_ck_ioctl_PRE_N_START (8)
#define SOC_HIPACKPHY_AC_IOCTL10_ck_ioctl_PRE_N_END (9)
#define SOC_HIPACKPHY_AC_IOCTL10_ck_ioctl_PRE_P_START (10)
#define SOC_HIPACKPHY_AC_IOCTL10_ck_ioctl_PRE_P_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ac1t_ioctl_RX_DUTY_SEL : 1;
        unsigned int ac2t_ioctl_RX_DUTY_SEL : 1;
        unsigned int ck_ioctl_RX_DUTY_SEL : 1;
        unsigned int ac1t_ioctl_RX_DUTY_INC : 1;
        unsigned int ac2t_ioctl_RX_DUTY_INC : 1;
        unsigned int ck_ioctl_RX_DUTY_INC : 1;
        unsigned int ac1t_ioctl_RX_DUTY_EN : 1;
        unsigned int ac2t_ioctl_RX_DUTY_EN : 1;
        unsigned int ck_ioctl_RX_DUTY_EN : 1;
        unsigned int ac1t_ioctl_TX_DUTY_SEL : 1;
        unsigned int ac2t_ioctl_TX_DUTY_SEL : 1;
        unsigned int ck_ioctl_TX_DUTY_SEL : 1;
        unsigned int ac1t_ioctl_TX_DUTY_INC : 1;
        unsigned int ac2t_ioctl_TX_DUTY_INC : 1;
        unsigned int ck_ioctl_TX_DUTY_INC : 1;
        unsigned int ac1t_ioctl_TX_DUTY_EN : 1;
        unsigned int ac2t_ioctl_TX_DUTY_EN : 1;
        unsigned int ck_ioctl_TX_DUTY_EN : 1;
        unsigned int ioctl_odt_rx_mode : 1;
        unsigned int ioctl_cke_rx_mode : 2;
        unsigned int reserved : 11;
    } reg;
} SOC_HIPACKPHY_AC_IOCTL11_UNION;
#endif
#define SOC_HIPACKPHY_AC_IOCTL11_ac1t_ioctl_RX_DUTY_SEL_START (0)
#define SOC_HIPACKPHY_AC_IOCTL11_ac1t_ioctl_RX_DUTY_SEL_END (0)
#define SOC_HIPACKPHY_AC_IOCTL11_ac2t_ioctl_RX_DUTY_SEL_START (1)
#define SOC_HIPACKPHY_AC_IOCTL11_ac2t_ioctl_RX_DUTY_SEL_END (1)
#define SOC_HIPACKPHY_AC_IOCTL11_ck_ioctl_RX_DUTY_SEL_START (2)
#define SOC_HIPACKPHY_AC_IOCTL11_ck_ioctl_RX_DUTY_SEL_END (2)
#define SOC_HIPACKPHY_AC_IOCTL11_ac1t_ioctl_RX_DUTY_INC_START (3)
#define SOC_HIPACKPHY_AC_IOCTL11_ac1t_ioctl_RX_DUTY_INC_END (3)
#define SOC_HIPACKPHY_AC_IOCTL11_ac2t_ioctl_RX_DUTY_INC_START (4)
#define SOC_HIPACKPHY_AC_IOCTL11_ac2t_ioctl_RX_DUTY_INC_END (4)
#define SOC_HIPACKPHY_AC_IOCTL11_ck_ioctl_RX_DUTY_INC_START (5)
#define SOC_HIPACKPHY_AC_IOCTL11_ck_ioctl_RX_DUTY_INC_END (5)
#define SOC_HIPACKPHY_AC_IOCTL11_ac1t_ioctl_RX_DUTY_EN_START (6)
#define SOC_HIPACKPHY_AC_IOCTL11_ac1t_ioctl_RX_DUTY_EN_END (6)
#define SOC_HIPACKPHY_AC_IOCTL11_ac2t_ioctl_RX_DUTY_EN_START (7)
#define SOC_HIPACKPHY_AC_IOCTL11_ac2t_ioctl_RX_DUTY_EN_END (7)
#define SOC_HIPACKPHY_AC_IOCTL11_ck_ioctl_RX_DUTY_EN_START (8)
#define SOC_HIPACKPHY_AC_IOCTL11_ck_ioctl_RX_DUTY_EN_END (8)
#define SOC_HIPACKPHY_AC_IOCTL11_ac1t_ioctl_TX_DUTY_SEL_START (9)
#define SOC_HIPACKPHY_AC_IOCTL11_ac1t_ioctl_TX_DUTY_SEL_END (9)
#define SOC_HIPACKPHY_AC_IOCTL11_ac2t_ioctl_TX_DUTY_SEL_START (10)
#define SOC_HIPACKPHY_AC_IOCTL11_ac2t_ioctl_TX_DUTY_SEL_END (10)
#define SOC_HIPACKPHY_AC_IOCTL11_ck_ioctl_TX_DUTY_SEL_START (11)
#define SOC_HIPACKPHY_AC_IOCTL11_ck_ioctl_TX_DUTY_SEL_END (11)
#define SOC_HIPACKPHY_AC_IOCTL11_ac1t_ioctl_TX_DUTY_INC_START (12)
#define SOC_HIPACKPHY_AC_IOCTL11_ac1t_ioctl_TX_DUTY_INC_END (12)
#define SOC_HIPACKPHY_AC_IOCTL11_ac2t_ioctl_TX_DUTY_INC_START (13)
#define SOC_HIPACKPHY_AC_IOCTL11_ac2t_ioctl_TX_DUTY_INC_END (13)
#define SOC_HIPACKPHY_AC_IOCTL11_ck_ioctl_TX_DUTY_INC_START (14)
#define SOC_HIPACKPHY_AC_IOCTL11_ck_ioctl_TX_DUTY_INC_END (14)
#define SOC_HIPACKPHY_AC_IOCTL11_ac1t_ioctl_TX_DUTY_EN_START (15)
#define SOC_HIPACKPHY_AC_IOCTL11_ac1t_ioctl_TX_DUTY_EN_END (15)
#define SOC_HIPACKPHY_AC_IOCTL11_ac2t_ioctl_TX_DUTY_EN_START (16)
#define SOC_HIPACKPHY_AC_IOCTL11_ac2t_ioctl_TX_DUTY_EN_END (16)
#define SOC_HIPACKPHY_AC_IOCTL11_ck_ioctl_TX_DUTY_EN_START (17)
#define SOC_HIPACKPHY_AC_IOCTL11_ck_ioctl_TX_DUTY_EN_END (17)
#define SOC_HIPACKPHY_AC_IOCTL11_ioctl_odt_rx_mode_START (18)
#define SOC_HIPACKPHY_AC_IOCTL11_ioctl_odt_rx_mode_END (18)
#define SOC_HIPACKPHY_AC_IOCTL11_ioctl_cke_rx_mode_START (19)
#define SOC_HIPACKPHY_AC_IOCTL11_ioctl_cke_rx_mode_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ioctl_reset_ronselp : 3;
        unsigned int ioctl_reset_ronseln : 3;
        unsigned int ioctl_reset_mode : 1;
        unsigned int ioctl_reset_pldn : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_HIPACKPHY_AC_IOCTL12_UNION;
#endif
#define SOC_HIPACKPHY_AC_IOCTL12_ioctl_reset_ronselp_START (0)
#define SOC_HIPACKPHY_AC_IOCTL12_ioctl_reset_ronselp_END (2)
#define SOC_HIPACKPHY_AC_IOCTL12_ioctl_reset_ronseln_START (3)
#define SOC_HIPACKPHY_AC_IOCTL12_ioctl_reset_ronseln_END (5)
#define SOC_HIPACKPHY_AC_IOCTL12_ioctl_reset_mode_START (6)
#define SOC_HIPACKPHY_AC_IOCTL12_ioctl_reset_mode_END (6)
#define SOC_HIPACKPHY_AC_IOCTL12_ioctl_reset_pldn_START (7)
#define SOC_HIPACKPHY_AC_IOCTL12_ioctl_reset_pldn_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ioctl_debugsio_PRE_N : 2;
        unsigned int ioctl_debugsio_PRE_P : 2;
        unsigned int ioctl_debugsio_ronselp : 3;
        unsigned int ioctl_debugsio_ronseln : 3;
        unsigned int ioctl_debugsio_odtsel : 3;
        unsigned int ioctl_debugsio_RX_DUTY_SEL : 1;
        unsigned int ioctl_debugsio_RX_DUTY_INC : 1;
        unsigned int ioctl_debugsio_RX_DUTY_EN : 1;
        unsigned int ioctl_debugsio_TX_DUTY_SEL : 1;
        unsigned int ioctl_debugsio_TX_DUTY_INC : 1;
        unsigned int ioctl_debugsio_TX_DUTY_EN : 1;
        unsigned int ioctl_debugsio_mode1 : 1;
        unsigned int ioctl_debugsio_mode0 : 1;
        unsigned int ioctl_debugsio_pldn : 1;
        unsigned int ioctl_debugsio_e : 1;
        unsigned int reserved : 9;
    } reg;
} SOC_HIPACKPHY_AC_IOCTL13_UNION;
#endif
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_PRE_N_START (0)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_PRE_N_END (1)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_PRE_P_START (2)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_PRE_P_END (3)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_ronselp_START (4)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_ronselp_END (6)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_ronseln_START (7)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_ronseln_END (9)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_odtsel_START (10)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_odtsel_END (12)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_RX_DUTY_SEL_START (13)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_RX_DUTY_SEL_END (13)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_RX_DUTY_INC_START (14)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_RX_DUTY_INC_END (14)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_RX_DUTY_EN_START (15)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_RX_DUTY_EN_END (15)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_TX_DUTY_SEL_START (16)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_TX_DUTY_SEL_END (16)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_TX_DUTY_INC_START (17)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_TX_DUTY_INC_END (17)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_TX_DUTY_EN_START (18)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_TX_DUTY_EN_END (18)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_mode1_START (19)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_mode1_END (19)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_mode0_START (20)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_mode0_END (20)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_pldn_START (21)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_pldn_END (21)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_e_START (22)
#define SOC_HIPACKPHY_AC_IOCTL13_ioctl_debugsio_e_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ioctl_debugdio_mode1 : 1;
        unsigned int ioctl_debugdio_mode0 : 1;
        unsigned int ioctl_debugdio_e : 1;
        unsigned int ioctl_debugdio_diff : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_HIPACKPHY_AC_IOCTL14_UNION;
#endif
#define SOC_HIPACKPHY_AC_IOCTL14_ioctl_debugdio_mode1_START (0)
#define SOC_HIPACKPHY_AC_IOCTL14_ioctl_debugdio_mode1_END (0)
#define SOC_HIPACKPHY_AC_IOCTL14_ioctl_debugdio_mode0_START (1)
#define SOC_HIPACKPHY_AC_IOCTL14_ioctl_debugdio_mode0_END (1)
#define SOC_HIPACKPHY_AC_IOCTL14_ioctl_debugdio_e_START (2)
#define SOC_HIPACKPHY_AC_IOCTL14_ioctl_debugdio_e_END (2)
#define SOC_HIPACKPHY_AC_IOCTL14_ioctl_debugdio_diff_START (3)
#define SOC_HIPACKPHY_AC_IOCTL14_ioctl_debugdio_diff_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ioctl_debugdio_PRE_N : 2;
        unsigned int ioctl_debugdio_PRE_P : 2;
        unsigned int ioctl_debugdio_ronselp : 3;
        unsigned int ioctl_debugdio_ronseln : 3;
        unsigned int ioctl_debugdio_odtsel : 3;
        unsigned int ioctl_debugdio_RX_DUTY_SEL : 1;
        unsigned int ioctl_debugdio_RX_DUTY_INC : 1;
        unsigned int ioctl_debugdio_RX_DUTY_EN : 1;
        unsigned int ioctl_debugdio_TX_DUTY_SEL : 1;
        unsigned int ioctl_debugdio_TX_DUTY_INC : 1;
        unsigned int ioctl_debugdio_TX_DUTY_EN : 1;
        unsigned int ioctl_debugdio_ronbseln : 3;
        unsigned int ioctl_debugdio_ronbselp : 3;
        unsigned int reserved : 7;
    } reg;
} SOC_HIPACKPHY_AC_IOCTL15_UNION;
#endif
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_PRE_N_START (0)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_PRE_N_END (1)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_PRE_P_START (2)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_PRE_P_END (3)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_ronselp_START (4)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_ronselp_END (6)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_ronseln_START (7)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_ronseln_END (9)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_odtsel_START (10)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_odtsel_END (12)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_RX_DUTY_SEL_START (13)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_RX_DUTY_SEL_END (13)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_RX_DUTY_INC_START (14)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_RX_DUTY_INC_END (14)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_RX_DUTY_EN_START (15)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_RX_DUTY_EN_END (15)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_TX_DUTY_SEL_START (16)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_TX_DUTY_SEL_END (16)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_TX_DUTY_INC_START (17)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_TX_DUTY_INC_END (17)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_TX_DUTY_EN_START (18)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_TX_DUTY_EN_END (18)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_ronbseln_START (19)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_ronbseln_END (21)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_ronbselp_START (22)
#define SOC_HIPACKPHY_AC_IOCTL15_ioctl_debugdio_ronbselp_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ioctl_vref_refsel1_2_debug : 1;
        unsigned int ioctl_vref_refsel0_2_debug : 1;
        unsigned int ioctl_vref_refsel1_1_debug : 1;
        unsigned int ioctl_vref_refsel0_1_debug : 1;
        unsigned int ioctl_vref_refsel1_0_debug : 1;
        unsigned int ioctl_vref_refsel0_0_debug : 1;
        unsigned int ioctl_vref_range1_2_debug : 1;
        unsigned int ioctl_vref_range0_2_debug : 1;
        unsigned int ioctl_vref_range1_1_debug : 1;
        unsigned int ioctl_vref_range0_1_debug : 1;
        unsigned int ioctl_vref_range1_0_debug : 1;
        unsigned int ioctl_vref_range0_0_debug : 1;
        unsigned int ioctl_vref_pd1_debug : 1;
        unsigned int ioctl_vref_pd0_debug : 1;
        unsigned int reserved_0 : 2;
        unsigned int ioctl_ndrv_debug : 6;
        unsigned int ioctl_pdrv_debug : 6;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_HIPACKPHY_AC_IOCTL16_UNION;
#endif
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_refsel1_2_debug_START (0)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_refsel1_2_debug_END (0)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_refsel0_2_debug_START (1)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_refsel0_2_debug_END (1)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_refsel1_1_debug_START (2)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_refsel1_1_debug_END (2)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_refsel0_1_debug_START (3)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_refsel0_1_debug_END (3)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_refsel1_0_debug_START (4)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_refsel1_0_debug_END (4)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_refsel0_0_debug_START (5)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_refsel0_0_debug_END (5)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_range1_2_debug_START (6)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_range1_2_debug_END (6)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_range0_2_debug_START (7)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_range0_2_debug_END (7)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_range1_1_debug_START (8)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_range1_1_debug_END (8)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_range0_1_debug_START (9)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_range0_1_debug_END (9)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_range1_0_debug_START (10)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_range1_0_debug_END (10)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_range0_0_debug_START (11)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_range0_0_debug_END (11)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_pd1_debug_START (12)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_pd1_debug_END (12)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_pd0_debug_START (13)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_vref_pd0_debug_END (13)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_ndrv_debug_START (16)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_ndrv_debug_END (21)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_pdrv_debug_START (22)
#define SOC_HIPACKPHY_AC_IOCTL16_ioctl_pdrv_debug_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_byp_ck90_cmd_code_b1 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_HIPACKPHY_AC_ACCTL_BYP_CK90_B1_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACCTL_BYP_CK90_B1_acctl_byp_ck90_cmd_code_b1_START (0)
#define SOC_HIPACKPHY_AC_ACCTL_BYP_CK90_B1_acctl_byp_ck90_cmd_code_b1_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int byp_ck90_sel : 1;
        unsigned int byp_ck90_latch_en : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_HIPACKPHY_AC_BYP_CK90_SETTING_UNION;
#endif
#define SOC_HIPACKPHY_AC_BYP_CK90_SETTING_byp_ck90_sel_START (0)
#define SOC_HIPACKPHY_AC_BYP_CK90_SETTING_byp_ck90_sel_END (0)
#define SOC_HIPACKPHY_AC_BYP_CK90_SETTING_byp_ck90_latch_en_START (1)
#define SOC_HIPACKPHY_AC_BYP_CK90_SETTING_byp_ck90_latch_en_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bdl_sw_rst : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_HIPACKPHY_AC_BDL_SW_RST_UNION;
#endif
#define SOC_HIPACKPHY_AC_BDL_SW_RST_bdl_sw_rst_START (0)
#define SOC_HIPACKPHY_AC_BDL_SW_RST_bdl_sw_rst_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ac_half_phase_sel : 1;
        unsigned int ac_half_phase_sel_byt1 : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_HIPACKPHY_AC_ACCTL_PHASE_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACCTL_PHASE_ac_half_phase_sel_START (0)
#define SOC_HIPACKPHY_AC_ACCTL_PHASE_ac_half_phase_sel_END (0)
#define SOC_HIPACKPHY_AC_ACCTL_PHASE_ac_half_phase_sel_byt1_START (1)
#define SOC_HIPACKPHY_AC_ACCTL_PHASE_ac_half_phase_sel_byt1_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acctl_ioctl_genvref_refsel1_2_test : 1;
        unsigned int acctl_ioctl_genvref_refsel0_2_test : 1;
        unsigned int acctl_ioctl_genvref_refsel1_1_test : 1;
        unsigned int acctl_ioctl_genvref_refsel0_1_test : 1;
        unsigned int acctl_ioctl_genvref_refsel1_0_test : 1;
        unsigned int acctl_ioctl_genvref_refsel0_0_test : 1;
        unsigned int acctl_ioctl_genvref_range1_2_test : 1;
        unsigned int acctl_ioctl_genvref_range0_2_test : 1;
        unsigned int acctl_ioctl_genvref_range1_1_test : 1;
        unsigned int acctl_ioctl_genvref_range0_1_test : 1;
        unsigned int acctl_ioctl_genvref_range1_0_test : 1;
        unsigned int acctl_ioctl_genvref_range0_0_test : 1;
        unsigned int acctl_ioctl_genvref_pd1_test : 1;
        unsigned int acctl_ioctl_genvref_pd0_test : 1;
        unsigned int reserved : 18;
    } reg;
} SOC_HIPACKPHY_AC_IOCTL17_UNION;
#endif
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_refsel1_2_test_START (0)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_refsel1_2_test_END (0)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_refsel0_2_test_START (1)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_refsel0_2_test_END (1)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_refsel1_1_test_START (2)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_refsel1_1_test_END (2)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_refsel0_1_test_START (3)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_refsel0_1_test_END (3)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_refsel1_0_test_START (4)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_refsel1_0_test_END (4)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_refsel0_0_test_START (5)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_refsel0_0_test_END (5)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_range1_2_test_START (6)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_range1_2_test_END (6)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_range0_2_test_START (7)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_range0_2_test_END (7)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_range1_1_test_START (8)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_range1_1_test_END (8)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_range0_1_test_START (9)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_range0_1_test_END (9)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_range1_0_test_START (10)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_range1_0_test_END (10)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_range0_0_test_START (11)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_range0_0_test_END (11)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_pd1_test_START (12)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_pd1_test_END (12)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_pd0_test_START (13)
#define SOC_HIPACKPHY_AC_IOCTL17_acctl_ioctl_genvref_pd0_test_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acrsvdreg1 : 32;
    } reg;
} SOC_HIPACKPHY_AC_ACRSVD1_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACRSVD1_acrsvdreg1_START (0)
#define SOC_HIPACKPHY_AC_ACRSVD1_acrsvdreg1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acrsvdreg2 : 32;
    } reg;
} SOC_HIPACKPHY_AC_ACRSVD2_UNION;
#endif
#define SOC_HIPACKPHY_AC_ACRSVD2_acrsvdreg2_START (0)
#define SOC_HIPACKPHY_AC_ACRSVD2_acrsvdreg2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bypclk_gated_bypass : 1;
        unsigned int dlyline_gate_bypass : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_HIPACKPHY_AC_DDRPHY_GATED_BYPASS_UNION;
#endif
#define SOC_HIPACKPHY_AC_DDRPHY_GATED_BYPASS_bypclk_gated_bypass_START (0)
#define SOC_HIPACKPHY_AC_DDRPHY_GATED_BYPASS_bypclk_gated_bypass_END (0)
#define SOC_HIPACKPHY_AC_DDRPHY_GATED_BYPASS_dlyline_gate_bypass_START (1)
#define SOC_HIPACKPHY_AC_DDRPHY_GATED_BYPASS_dlyline_gate_bypass_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_HIPACKPHY_DX_PHYCTRL0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int dxctl_ioctl_dxiopldn : 1;
        unsigned int top_ioctl_odt_oe : 1;
        unsigned int reserved_1 : 26;
        unsigned int dqs_ioctl_odtsel : 3;
    } reg;
} SOC_HIPACKPHY_DX_IOCTL_UNION;
#endif
#define SOC_HIPACKPHY_DX_IOCTL_dxctl_ioctl_dxiopldn_START (1)
#define SOC_HIPACKPHY_DX_IOCTL_dxctl_ioctl_dxiopldn_END (1)
#define SOC_HIPACKPHY_DX_IOCTL_top_ioctl_odt_oe_START (2)
#define SOC_HIPACKPHY_DX_IOCTL_top_ioctl_odt_oe_END (2)
#define SOC_HIPACKPHY_DX_IOCTL_dqs_ioctl_odtsel_START (29)
#define SOC_HIPACKPHY_DX_IOCTL_dqs_ioctl_odtsel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_dqswap_sel : 16;
        unsigned int dxctl_dmswap_sel : 2;
        unsigned int reserved : 14;
    } reg;
} SOC_HIPACKPHY_DX_DQSSEL_UNION;
#endif
#define SOC_HIPACKPHY_DX_DQSSEL_dxctl_dqswap_sel_START (0)
#define SOC_HIPACKPHY_DX_DQSSEL_dxctl_dqswap_sel_END (15)
#define SOC_HIPACKPHY_DX_DQSSEL_dxctl_dmswap_sel_START (16)
#define SOC_HIPACKPHY_DX_DQSSEL_dxctl_dmswap_sel_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_ck0p_mclk : 4;
        unsigned int dxctl_ck9p_cmd1t : 5;
        unsigned int dxctl_ck10p_cmd2t : 3;
        unsigned int dxctl_ck11p_dramclk : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_HIPACKPHY_DX_DXNCKCTRL_UNION;
#endif
#define SOC_HIPACKPHY_DX_DXNCKCTRL_dxctl_ck0p_mclk_START (0)
#define SOC_HIPACKPHY_DX_DXNCKCTRL_dxctl_ck0p_mclk_END (3)
#define SOC_HIPACKPHY_DX_DXNCKCTRL_dxctl_ck9p_cmd1t_START (4)
#define SOC_HIPACKPHY_DX_DXNCKCTRL_dxctl_ck9p_cmd1t_END (8)
#define SOC_HIPACKPHY_DX_DXNCKCTRL_dxctl_ck10p_cmd2t_START (9)
#define SOC_HIPACKPHY_DX_DXNCKCTRL_dxctl_ck10p_cmd2t_END (11)
#define SOC_HIPACKPHY_DX_DXNCKCTRL_dxctl_ck11p_dramclk_START (12)
#define SOC_HIPACKPHY_DX_DXNCKCTRL_dxctl_ck11p_dramclk_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_pll_test : 6;
        unsigned int reserved : 25;
        unsigned int dxctl_pll_lock : 1;
    } reg;
} SOC_HIPACKPHY_DX_PHYPLLCTRL_DX_UNION;
#endif
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX_dxctl_pll_test_START (0)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX_dxctl_pll_test_END (5)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX_dxctl_pll_lock_START (31)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX_dxctl_pll_lock_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 4;
        unsigned int ut_mode : 1;
        unsigned int dxctl_reg_DVALID_selfgen_en : 1;
        unsigned int reserved_1 : 10;
        unsigned int lpddr4_mode : 1;
        unsigned int phy_type : 2;
        unsigned int dxctl_reg_sel_pos_rx : 1;
        unsigned int reserved_2 : 3;
        unsigned int dxctl_reg_wfifo_mode : 1;
        unsigned int dxctl_reg_RDFFSEL_2rank_en : 1;
        unsigned int dxctl_ppfifo_ptr_en : 1;
        unsigned int dxctl_reg_phy_wdata_ranksw : 3;
        unsigned int wfifo_dxctl_gcken : 1;
        unsigned int wfifo_dxctl_passthrough : 1;
        unsigned int reserved_3 : 1;
    } reg;
} SOC_HIPACKPHY_DX_PHYCTRL2_UNION;
#endif
#define SOC_HIPACKPHY_DX_PHYCTRL2_ut_mode_START (4)
#define SOC_HIPACKPHY_DX_PHYCTRL2_ut_mode_END (4)
#define SOC_HIPACKPHY_DX_PHYCTRL2_dxctl_reg_DVALID_selfgen_en_START (5)
#define SOC_HIPACKPHY_DX_PHYCTRL2_dxctl_reg_DVALID_selfgen_en_END (5)
#define SOC_HIPACKPHY_DX_PHYCTRL2_lpddr4_mode_START (16)
#define SOC_HIPACKPHY_DX_PHYCTRL2_lpddr4_mode_END (16)
#define SOC_HIPACKPHY_DX_PHYCTRL2_phy_type_START (17)
#define SOC_HIPACKPHY_DX_PHYCTRL2_phy_type_END (18)
#define SOC_HIPACKPHY_DX_PHYCTRL2_dxctl_reg_sel_pos_rx_START (19)
#define SOC_HIPACKPHY_DX_PHYCTRL2_dxctl_reg_sel_pos_rx_END (19)
#define SOC_HIPACKPHY_DX_PHYCTRL2_dxctl_reg_wfifo_mode_START (23)
#define SOC_HIPACKPHY_DX_PHYCTRL2_dxctl_reg_wfifo_mode_END (23)
#define SOC_HIPACKPHY_DX_PHYCTRL2_dxctl_reg_RDFFSEL_2rank_en_START (24)
#define SOC_HIPACKPHY_DX_PHYCTRL2_dxctl_reg_RDFFSEL_2rank_en_END (24)
#define SOC_HIPACKPHY_DX_PHYCTRL2_dxctl_ppfifo_ptr_en_START (25)
#define SOC_HIPACKPHY_DX_PHYCTRL2_dxctl_ppfifo_ptr_en_END (25)
#define SOC_HIPACKPHY_DX_PHYCTRL2_dxctl_reg_phy_wdata_ranksw_START (26)
#define SOC_HIPACKPHY_DX_PHYCTRL2_dxctl_reg_phy_wdata_ranksw_END (28)
#define SOC_HIPACKPHY_DX_PHYCTRL2_wfifo_dxctl_gcken_START (29)
#define SOC_HIPACKPHY_DX_PHYCTRL2_wfifo_dxctl_gcken_END (29)
#define SOC_HIPACKPHY_DX_PHYCTRL2_wfifo_dxctl_passthrough_START (30)
#define SOC_HIPACKPHY_DX_PHYCTRL2_wfifo_dxctl_passthrough_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_ioctl_genvref_range_2 : 2;
        unsigned int reserved_0 : 4;
        unsigned int dxctl_odt_ioctl_rdsel_p : 3;
        unsigned int dxctl_odt_ioctl_rdsel_n : 3;
        unsigned int dxctl_ioctl_genvref_pd : 2;
        unsigned int reserved_1 : 10;
        unsigned int dxctl_ioctl_squeach_pd : 2;
        unsigned int reserved_2 : 2;
        unsigned int dxctl_odt_ioctl_ronsel : 3;
        unsigned int dxctl_ioctl_odt_iopldn : 1;
    } reg;
} SOC_HIPACKPHY_DX_IOCTL1_UNION;
#endif
#define SOC_HIPACKPHY_DX_IOCTL1_dxctl_ioctl_genvref_range_2_START (0)
#define SOC_HIPACKPHY_DX_IOCTL1_dxctl_ioctl_genvref_range_2_END (1)
#define SOC_HIPACKPHY_DX_IOCTL1_dxctl_odt_ioctl_rdsel_p_START (6)
#define SOC_HIPACKPHY_DX_IOCTL1_dxctl_odt_ioctl_rdsel_p_END (8)
#define SOC_HIPACKPHY_DX_IOCTL1_dxctl_odt_ioctl_rdsel_n_START (9)
#define SOC_HIPACKPHY_DX_IOCTL1_dxctl_odt_ioctl_rdsel_n_END (11)
#define SOC_HIPACKPHY_DX_IOCTL1_dxctl_ioctl_genvref_pd_START (12)
#define SOC_HIPACKPHY_DX_IOCTL1_dxctl_ioctl_genvref_pd_END (13)
#define SOC_HIPACKPHY_DX_IOCTL1_dxctl_ioctl_squeach_pd_START (24)
#define SOC_HIPACKPHY_DX_IOCTL1_dxctl_ioctl_squeach_pd_END (25)
#define SOC_HIPACKPHY_DX_IOCTL1_dxctl_odt_ioctl_ronsel_START (28)
#define SOC_HIPACKPHY_DX_IOCTL1_dxctl_odt_ioctl_ronsel_END (30)
#define SOC_HIPACKPHY_DX_IOCTL1_dxctl_ioctl_odt_iopldn_START (31)
#define SOC_HIPACKPHY_DX_IOCTL1_dxctl_ioctl_odt_iopldn_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_ioctl_genvref_range_0 : 2;
        unsigned int reserved_0 : 4;
        unsigned int dxctl_ioctl_genvref_range_1 : 2;
        unsigned int reserved_1 : 4;
        unsigned int dxctl_ioctl_genvref_refsel_0 : 2;
        unsigned int reserved_2 : 4;
        unsigned int dxctl_ioctl_genvref_refsel_1 : 2;
        unsigned int reserved_3 : 4;
        unsigned int dxctl_ioctl_genvref_refsel_2 : 2;
        unsigned int dq_vref_sel1 : 1;
        unsigned int dq_vref_sel0 : 1;
        unsigned int reserved_4 : 2;
        unsigned int ioctl_dq_rx_mode0 : 1;
        unsigned int ioctl_dq_rx_mode1 : 1;
    } reg;
} SOC_HIPACKPHY_DX_IOCTL2_UNION;
#endif
#define SOC_HIPACKPHY_DX_IOCTL2_dxctl_ioctl_genvref_range_0_START (0)
#define SOC_HIPACKPHY_DX_IOCTL2_dxctl_ioctl_genvref_range_0_END (1)
#define SOC_HIPACKPHY_DX_IOCTL2_dxctl_ioctl_genvref_range_1_START (6)
#define SOC_HIPACKPHY_DX_IOCTL2_dxctl_ioctl_genvref_range_1_END (7)
#define SOC_HIPACKPHY_DX_IOCTL2_dxctl_ioctl_genvref_refsel_0_START (12)
#define SOC_HIPACKPHY_DX_IOCTL2_dxctl_ioctl_genvref_refsel_0_END (13)
#define SOC_HIPACKPHY_DX_IOCTL2_dxctl_ioctl_genvref_refsel_1_START (18)
#define SOC_HIPACKPHY_DX_IOCTL2_dxctl_ioctl_genvref_refsel_1_END (19)
#define SOC_HIPACKPHY_DX_IOCTL2_dxctl_ioctl_genvref_refsel_2_START (24)
#define SOC_HIPACKPHY_DX_IOCTL2_dxctl_ioctl_genvref_refsel_2_END (25)
#define SOC_HIPACKPHY_DX_IOCTL2_dq_vref_sel1_START (26)
#define SOC_HIPACKPHY_DX_IOCTL2_dq_vref_sel1_END (26)
#define SOC_HIPACKPHY_DX_IOCTL2_dq_vref_sel0_START (27)
#define SOC_HIPACKPHY_DX_IOCTL2_dq_vref_sel0_END (27)
#define SOC_HIPACKPHY_DX_IOCTL2_ioctl_dq_rx_mode0_START (30)
#define SOC_HIPACKPHY_DX_IOCTL2_ioctl_dq_rx_mode0_END (30)
#define SOC_HIPACKPHY_DX_IOCTL2_ioctl_dq_rx_mode1_START (31)
#define SOC_HIPACKPHY_DX_IOCTL2_ioctl_dq_rx_mode1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl__pll_bp_refpfd : 1;
        unsigned int reserved_0 : 1;
        unsigned int dxctl__pll_bp_refvco : 1;
        unsigned int reserved_1 : 1;
        unsigned int dxctl__pll_enphsel : 1;
        unsigned int reserved_2 : 1;
        unsigned int dxctl__pll_en_cal : 1;
        unsigned int reserved_3 : 1;
        unsigned int dxctl__pll_initsel : 1;
        unsigned int reserved_4 : 1;
        unsigned int dxctl__pll_lockt_sel : 1;
        unsigned int reserved_5 : 1;
        unsigned int dxctl__pll_fopetestfb : 1;
        unsigned int reserved_6 : 1;
        unsigned int dxctl__pll_fopetestref : 1;
        unsigned int reserved_7 : 1;
        unsigned int dxctl_pll_lockin : 1;
        unsigned int reserved_8 : 15;
    } reg;
} SOC_HIPACKPHY_DX_PHYPLLCTRL_DX2_UNION;
#endif
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX2_dxctl__pll_bp_refpfd_START (0)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX2_dxctl__pll_bp_refpfd_END (0)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX2_dxctl__pll_bp_refvco_START (2)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX2_dxctl__pll_bp_refvco_END (2)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX2_dxctl__pll_enphsel_START (4)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX2_dxctl__pll_enphsel_END (4)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX2_dxctl__pll_en_cal_START (6)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX2_dxctl__pll_en_cal_END (6)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX2_dxctl__pll_initsel_START (8)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX2_dxctl__pll_initsel_END (8)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX2_dxctl__pll_lockt_sel_START (10)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX2_dxctl__pll_lockt_sel_END (10)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX2_dxctl__pll_fopetestfb_START (12)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX2_dxctl__pll_fopetestfb_END (12)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX2_dxctl__pll_fopetestref_START (14)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX2_dxctl__pll_fopetestref_END (14)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX2_dxctl_pll_lockin_START (16)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX2_dxctl_pll_lockin_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_phazmeter_in : 16;
        unsigned int dxctl_phazmeter_status : 16;
    } reg;
} SOC_HIPACKPHY_DX_PHYPLLCTRL_DX3_UNION;
#endif
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX3_dxctl_phazmeter_in_START (0)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX3_dxctl_phazmeter_in_END (15)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX3_dxctl_phazmeter_status_START (16)
#define SOC_HIPACKPHY_DX_PHYPLLCTRL_DX3_dxctl_phazmeter_status_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_fbclk_bdl : 4;
        unsigned int reserved_0 : 12;
        unsigned int dxctl_refclk_bdl : 4;
        unsigned int reserved_1 : 12;
    } reg;
} SOC_HIPACKPHY_DX_DXNCLKBDL_UNION;
#endif
#define SOC_HIPACKPHY_DX_DXNCLKBDL_dxctl_fbclk_bdl_START (0)
#define SOC_HIPACKPHY_DX_DXNCLKBDL_dxctl_fbclk_bdl_END (3)
#define SOC_HIPACKPHY_DX_DXNCLKBDL_dxctl_refclk_bdl_START (16)
#define SOC_HIPACKPHY_DX_DXNCLKBDL_dxctl_refclk_bdl_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 2;
        unsigned int dxctl_pll_testen : 1;
        unsigned int dxctl_pll_init : 1;
        unsigned int dxctl_pll_cpi : 3;
        unsigned int dxctl_pll_sp : 2;
        unsigned int reserved_1 : 1;
        unsigned int dxctl_pll_lt : 2;
        unsigned int reserved_2 : 20;
    } reg;
} SOC_HIPACKPHY_DX_DXPHYCTRL_UNION;
#endif
#define SOC_HIPACKPHY_DX_DXPHYCTRL_dxctl_pll_testen_START (2)
#define SOC_HIPACKPHY_DX_DXPHYCTRL_dxctl_pll_testen_END (2)
#define SOC_HIPACKPHY_DX_DXPHYCTRL_dxctl_pll_init_START (3)
#define SOC_HIPACKPHY_DX_DXPHYCTRL_dxctl_pll_init_END (3)
#define SOC_HIPACKPHY_DX_DXPHYCTRL_dxctl_pll_cpi_START (4)
#define SOC_HIPACKPHY_DX_DXPHYCTRL_dxctl_pll_cpi_END (6)
#define SOC_HIPACKPHY_DX_DXPHYCTRL_dxctl_pll_sp_START (7)
#define SOC_HIPACKPHY_DX_DXPHYCTRL_dxctl_pll_sp_END (8)
#define SOC_HIPACKPHY_DX_DXPHYCTRL_dxctl_pll_lt_START (10)
#define SOC_HIPACKPHY_DX_DXPHYCTRL_dxctl_pll_lt_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_rxn_2nd_dq : 8;
        unsigned int dxctl_rxp_2nd_dq : 8;
        unsigned int reserved_0 : 1;
        unsigned int dxctl_dqs_l : 1;
        unsigned int dxctl_dqs_h : 1;
        unsigned int dxctl_rxn_2nd_dm : 1;
        unsigned int dxctl_rxp_2nd_dm : 1;
        unsigned int dxctl_dqsgatedla : 1;
        unsigned int dxctl_lvdqclkdiv2 : 1;
        unsigned int dxctl_bufphyclkdiv2 : 1;
        unsigned int dxctl_reg_sel_lvdqsclkdiv2 : 1;
        unsigned int dxctl_reg_wpst_1p5ten : 1;
        unsigned int dxctl_ptrgated_en : 1;
        unsigned int dxctl_reg_dqsg_toggle_en : 1;
        unsigned int dxctl_reg_DQSG_extend_en_DQS : 1;
        unsigned int dxctl_reg_DQSG_extend_2T_DQS : 1;
        unsigned int dxctl_reg_rxfifo_r1T_sel_DQS : 1;
        unsigned int reserved_1 : 1;
    } reg;
} SOC_HIPACKPHY_DX_DXNMISCCTRL0_UNION;
#endif
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_rxn_2nd_dq_START (0)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_rxn_2nd_dq_END (7)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_rxp_2nd_dq_START (8)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_rxp_2nd_dq_END (15)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_dqs_l_START (17)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_dqs_l_END (17)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_dqs_h_START (18)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_dqs_h_END (18)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_rxn_2nd_dm_START (19)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_rxn_2nd_dm_END (19)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_rxp_2nd_dm_START (20)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_rxp_2nd_dm_END (20)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_dqsgatedla_START (21)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_dqsgatedla_END (21)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_lvdqclkdiv2_START (22)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_lvdqclkdiv2_END (22)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_bufphyclkdiv2_START (23)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_bufphyclkdiv2_END (23)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_reg_sel_lvdqsclkdiv2_START (24)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_reg_sel_lvdqsclkdiv2_END (24)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_reg_wpst_1p5ten_START (25)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_reg_wpst_1p5ten_END (25)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_ptrgated_en_START (26)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_ptrgated_en_END (26)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_reg_dqsg_toggle_en_START (27)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_reg_dqsg_toggle_en_END (27)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_reg_DQSG_extend_en_DQS_START (28)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_reg_DQSG_extend_en_DQS_END (28)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_reg_DQSG_extend_2T_DQS_START (29)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_reg_DQSG_extend_2T_DQS_END (29)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_reg_rxfifo_r1T_sel_DQS_START (30)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL0_dxctl_reg_rxfifo_r1T_sel_DQS_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_mclk2x : 3;
        unsigned int dxctl_mclk1x : 3;
        unsigned int dxctl_dqsclk2x : 3;
        unsigned int dxctl_dqsclk1x : 3;
        unsigned int dxctl_dqsgclk2x : 3;
        unsigned int dxctl_dqsgclk1x : 3;
        unsigned int dxctl_dqclk2x_rank1 : 3;
        unsigned int dxctl_dqclk1x_rank1 : 3;
        unsigned int dxctl_dqclk2x : 3;
        unsigned int dxctl_dqclk1x : 3;
        unsigned int reserved : 2;
    } reg;
} SOC_HIPACKPHY_DX_DXNMISCCTRL1_UNION;
#endif
#define SOC_HIPACKPHY_DX_DXNMISCCTRL1_dxctl_mclk2x_START (0)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL1_dxctl_mclk2x_END (2)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL1_dxctl_mclk1x_START (3)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL1_dxctl_mclk1x_END (5)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL1_dxctl_dqsclk2x_START (6)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL1_dxctl_dqsclk2x_END (8)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL1_dxctl_dqsclk1x_START (9)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL1_dxctl_dqsclk1x_END (11)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL1_dxctl_dqsgclk2x_START (12)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL1_dxctl_dqsgclk2x_END (14)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL1_dxctl_dqsgclk1x_START (15)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL1_dxctl_dqsgclk1x_END (17)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL1_dxctl_dqclk2x_rank1_START (18)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL1_dxctl_dqclk2x_rank1_END (20)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL1_dxctl_dqclk1x_rank1_START (21)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL1_dxctl_dqclk1x_rank1_END (23)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL1_dxctl_dqclk2x_START (24)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL1_dxctl_dqclk2x_END (26)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL1_dxctl_dqclk1x_START (27)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL1_dxctl_dqclk1x_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxdbg_dqs_cb : 3;
        unsigned int dxdbg_dqs_ca : 3;
        unsigned int dxdbg_dqs_rdcnt : 4;
        unsigned int dxdbg_dqs_s2b : 1;
        unsigned int dxdbg_dqs_s2a : 1;
        unsigned int dxdbg_dqs_s1b : 1;
        unsigned int dxdbg_dqs_s1a : 1;
        unsigned int dxdbg_dqs_s0b : 1;
        unsigned int dxdbg_dqs_s0a : 1;
        unsigned int dxctl_rlresult_gds_dqs : 8;
        unsigned int reserved : 8;
    } reg;
} SOC_HIPACKPHY_DX_DXDEBUG0_UNION;
#endif
#define SOC_HIPACKPHY_DX_DXDEBUG0_dxdbg_dqs_cb_START (0)
#define SOC_HIPACKPHY_DX_DXDEBUG0_dxdbg_dqs_cb_END (2)
#define SOC_HIPACKPHY_DX_DXDEBUG0_dxdbg_dqs_ca_START (3)
#define SOC_HIPACKPHY_DX_DXDEBUG0_dxdbg_dqs_ca_END (5)
#define SOC_HIPACKPHY_DX_DXDEBUG0_dxdbg_dqs_rdcnt_START (6)
#define SOC_HIPACKPHY_DX_DXDEBUG0_dxdbg_dqs_rdcnt_END (9)
#define SOC_HIPACKPHY_DX_DXDEBUG0_dxdbg_dqs_s2b_START (10)
#define SOC_HIPACKPHY_DX_DXDEBUG0_dxdbg_dqs_s2b_END (10)
#define SOC_HIPACKPHY_DX_DXDEBUG0_dxdbg_dqs_s2a_START (11)
#define SOC_HIPACKPHY_DX_DXDEBUG0_dxdbg_dqs_s2a_END (11)
#define SOC_HIPACKPHY_DX_DXDEBUG0_dxdbg_dqs_s1b_START (12)
#define SOC_HIPACKPHY_DX_DXDEBUG0_dxdbg_dqs_s1b_END (12)
#define SOC_HIPACKPHY_DX_DXDEBUG0_dxdbg_dqs_s1a_START (13)
#define SOC_HIPACKPHY_DX_DXDEBUG0_dxdbg_dqs_s1a_END (13)
#define SOC_HIPACKPHY_DX_DXDEBUG0_dxdbg_dqs_s0b_START (14)
#define SOC_HIPACKPHY_DX_DXDEBUG0_dxdbg_dqs_s0b_END (14)
#define SOC_HIPACKPHY_DX_DXDEBUG0_dxdbg_dqs_s0a_START (15)
#define SOC_HIPACKPHY_DX_DXDEBUG0_dxdbg_dqs_s0a_END (15)
#define SOC_HIPACKPHY_DX_DXDEBUG0_dxctl_rlresult_gds_dqs_START (16)
#define SOC_HIPACKPHY_DX_DXDEBUG0_dxctl_rlresult_gds_dqs_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_rsvdctrl : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_HIPACKPHY_DX_DXPHYRSVD_UNION;
#endif
#define SOC_HIPACKPHY_DX_DXPHYRSVD_dxctl_rsvdctrl_START (0)
#define SOC_HIPACKPHY_DX_DXPHYRSVD_dxctl_rsvdctrl_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int BUFRESETCONTN_gated_DQSGERROR : 1;
        unsigned int BUFRESETCONTN_gated_TDC : 1;
        unsigned int reg_GDS_r1T_sel : 1;
        unsigned int reg_ODTEN_gated : 1;
        unsigned int reg_dummypad_use : 1;
        unsigned int reg_dynamic_PUPDEN : 1;
        unsigned int reg_sel_halfT_gated : 1;
        unsigned int reg_dqsglat1T_en : 1;
        unsigned int reg_squeach_en : 1;
        unsigned int reg_dqsg_TX_2path : 1;
        unsigned int reg_OE_extend1T_en : 1;
        unsigned int dxctl_reg_perbit_mode_en : 1;
        unsigned int dxctl_reg_phy_dqsdly_stop_enable : 1;
        unsigned int dxctl_reg_phy_dqsg_stop_enable : 1;
        unsigned int dxctl_reg_dqsdly_demux_GATED_1 : 1;
        unsigned int dxctl_reg_dqsgdly_demux_GATED_0 : 1;
        unsigned int dxctl_reg_post_margin_GATED_1 : 1;
        unsigned int dxctl_reg_post_margin_GATED_0 : 1;
        unsigned int dxctl_reg_pre_margin_GATED_1 : 1;
        unsigned int dxctl_reg_pre_margin_GATED_0 : 1;
        unsigned int dxctl_reg_PN_dlyen : 1;
        unsigned int dxctl_reset_n_phyupdate_req : 1;
        unsigned int dxctl_reg_tspc_sel : 1;
        unsigned int dxctl_reg_sel_combout : 1;
        unsigned int dxctl_reg_post_gateden : 1;
        unsigned int reserved_0 : 2;
        unsigned int dxctl_byp_clk_gated_dis : 1;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_HIPACKPHY_DX_DXNMISCCTRL2_UNION;
#endif
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_BUFRESETCONTN_gated_DQSGERROR_START (0)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_BUFRESETCONTN_gated_DQSGERROR_END (0)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_BUFRESETCONTN_gated_TDC_START (1)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_BUFRESETCONTN_gated_TDC_END (1)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_reg_GDS_r1T_sel_START (2)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_reg_GDS_r1T_sel_END (2)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_reg_ODTEN_gated_START (3)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_reg_ODTEN_gated_END (3)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_reg_dummypad_use_START (4)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_reg_dummypad_use_END (4)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_reg_dynamic_PUPDEN_START (5)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_reg_dynamic_PUPDEN_END (5)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_reg_sel_halfT_gated_START (6)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_reg_sel_halfT_gated_END (6)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_reg_dqsglat1T_en_START (7)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_reg_dqsglat1T_en_END (7)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_reg_squeach_en_START (8)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_reg_squeach_en_END (8)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_reg_dqsg_TX_2path_START (9)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_reg_dqsg_TX_2path_END (9)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_reg_OE_extend1T_en_START (10)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_reg_OE_extend1T_en_END (10)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_perbit_mode_en_START (11)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_perbit_mode_en_END (11)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_phy_dqsdly_stop_enable_START (12)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_phy_dqsdly_stop_enable_END (12)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_phy_dqsg_stop_enable_START (13)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_phy_dqsg_stop_enable_END (13)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_dqsdly_demux_GATED_1_START (14)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_dqsdly_demux_GATED_1_END (14)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_dqsgdly_demux_GATED_0_START (15)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_dqsgdly_demux_GATED_0_END (15)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_post_margin_GATED_1_START (16)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_post_margin_GATED_1_END (16)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_post_margin_GATED_0_START (17)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_post_margin_GATED_0_END (17)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_pre_margin_GATED_1_START (18)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_pre_margin_GATED_1_END (18)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_pre_margin_GATED_0_START (19)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_pre_margin_GATED_0_END (19)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_PN_dlyen_START (20)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_PN_dlyen_END (20)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reset_n_phyupdate_req_START (21)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reset_n_phyupdate_req_END (21)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_tspc_sel_START (22)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_tspc_sel_END (22)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_sel_combout_START (23)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_sel_combout_END (23)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_post_gateden_START (24)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_reg_post_gateden_END (24)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_byp_clk_gated_dis_START (27)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL2_dxctl_byp_clk_gated_dis_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_dbg_config : 4;
        unsigned int dxctl_DESKEW_regread : 1;
        unsigned int reserved_0 : 3;
        unsigned int dxctl_reg_dbg_FOTEST : 1;
        unsigned int dxctl_reg_dbg_dqsdly_odtpad : 1;
        unsigned int dxctl_reg_dbg_gated_n : 1;
        unsigned int reserved_1 : 21;
    } reg;
} SOC_HIPACKPHY_DX_DXDEBUGCONFIG_UNION;
#endif
#define SOC_HIPACKPHY_DX_DXDEBUGCONFIG_dxctl_dbg_config_START (0)
#define SOC_HIPACKPHY_DX_DXDEBUGCONFIG_dxctl_dbg_config_END (3)
#define SOC_HIPACKPHY_DX_DXDEBUGCONFIG_dxctl_DESKEW_regread_START (4)
#define SOC_HIPACKPHY_DX_DXDEBUGCONFIG_dxctl_DESKEW_regread_END (4)
#define SOC_HIPACKPHY_DX_DXDEBUGCONFIG_dxctl_reg_dbg_FOTEST_START (8)
#define SOC_HIPACKPHY_DX_DXDEBUGCONFIG_dxctl_reg_dbg_FOTEST_END (8)
#define SOC_HIPACKPHY_DX_DXDEBUGCONFIG_dxctl_reg_dbg_dqsdly_odtpad_START (9)
#define SOC_HIPACKPHY_DX_DXDEBUGCONFIG_dxctl_reg_dbg_dqsdly_odtpad_END (9)
#define SOC_HIPACKPHY_DX_DXDEBUGCONFIG_dxctl_reg_dbg_gated_n_START (10)
#define SOC_HIPACKPHY_DX_DXDEBUGCONFIG_dxctl_reg_dbg_gated_n_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_dq_dcc : 5;
        unsigned int dxctl_dqsg_dcc : 5;
        unsigned int dxctl_dqs_dcc : 5;
        unsigned int dxctl_mclk_dcc : 5;
        unsigned int reserved : 12;
    } reg;
} SOC_HIPACKPHY_DX_DXNDCC_UNION;
#endif
#define SOC_HIPACKPHY_DX_DXNDCC_dxctl_dq_dcc_START (0)
#define SOC_HIPACKPHY_DX_DXNDCC_dxctl_dq_dcc_END (4)
#define SOC_HIPACKPHY_DX_DXNDCC_dxctl_dqsg_dcc_START (5)
#define SOC_HIPACKPHY_DX_DXNDCC_dxctl_dqsg_dcc_END (9)
#define SOC_HIPACKPHY_DX_DXNDCC_dxctl_dqs_dcc_START (10)
#define SOC_HIPACKPHY_DX_DXNDCC_dxctl_dqs_dcc_END (14)
#define SOC_HIPACKPHY_DX_DXNDCC_dxctl_mclk_dcc_START (15)
#define SOC_HIPACKPHY_DX_DXNDCC_dxctl_mclk_dcc_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_DQSG_extdly_DQS : 3;
        unsigned int reserved_0 : 9;
        unsigned int dxctl_RXEXT_dly : 3;
        unsigned int reserved_1 : 1;
        unsigned int dxctl_dqsdly_demux_code : 3;
        unsigned int dxctl_post_margin_code : 3;
        unsigned int dxctl_pre_margin_code : 3;
        unsigned int dxctl_dqsgclk2x_rank1 : 3;
        unsigned int dxctl_dqsgclk1x_rank1 : 3;
        unsigned int reserved_2 : 1;
    } reg;
} SOC_HIPACKPHY_DX_DXNMISCCTRL3_UNION;
#endif
#define SOC_HIPACKPHY_DX_DXNMISCCTRL3_dxctl_DQSG_extdly_DQS_START (0)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL3_dxctl_DQSG_extdly_DQS_END (2)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL3_dxctl_RXEXT_dly_START (12)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL3_dxctl_RXEXT_dly_END (14)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL3_dxctl_dqsdly_demux_code_START (16)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL3_dxctl_dqsdly_demux_code_END (18)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL3_dxctl_post_margin_code_START (19)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL3_dxctl_post_margin_code_END (21)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL3_dxctl_pre_margin_code_START (22)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL3_dxctl_pre_margin_code_END (24)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL3_dxctl_dqsgclk2x_rank1_START (25)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL3_dxctl_dqsgclk2x_rank1_END (27)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL3_dxctl_dqsgclk1x_rank1_START (28)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL3_dxctl_dqsgclk1x_rank1_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_reg_clkgated_dis : 4;
        unsigned int dxctl_reg_dbgmode_byt1_sel : 1;
        unsigned int reserved_0 : 1;
        unsigned int dxctl_reg_rst_N : 1;
        unsigned int reserved_1 : 1;
        unsigned int dxctl_reg_asy_cmd_decode_sel : 1;
        unsigned int reserved_2 : 3;
        unsigned int dxctl_pack_cfg_rs_passthrough : 1;
        unsigned int reserved_3 : 3;
        unsigned int dxctl_reg_clkgated_en_DQS : 1;
        unsigned int reserved_4 : 3;
        unsigned int dxctl_reg_1rank_only_en_DQS : 1;
        unsigned int reserved_5 : 3;
        unsigned int dxctl_reg_dqsg_toggle_code90 : 6;
        unsigned int reserved_6 : 2;
    } reg;
} SOC_HIPACKPHY_DX_DXNMISCCTRL4_UNION;
#endif
#define SOC_HIPACKPHY_DX_DXNMISCCTRL4_dxctl_reg_clkgated_dis_START (0)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL4_dxctl_reg_clkgated_dis_END (3)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL4_dxctl_reg_dbgmode_byt1_sel_START (4)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL4_dxctl_reg_dbgmode_byt1_sel_END (4)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL4_dxctl_reg_rst_N_START (6)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL4_dxctl_reg_rst_N_END (6)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL4_dxctl_reg_asy_cmd_decode_sel_START (8)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL4_dxctl_reg_asy_cmd_decode_sel_END (8)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL4_dxctl_pack_cfg_rs_passthrough_START (12)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL4_dxctl_pack_cfg_rs_passthrough_END (12)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL4_dxctl_reg_clkgated_en_DQS_START (16)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL4_dxctl_reg_clkgated_en_DQS_END (16)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL4_dxctl_reg_1rank_only_en_DQS_START (20)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL4_dxctl_reg_1rank_only_en_DQS_END (20)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL4_dxctl_reg_dqsg_toggle_code90_START (24)
#define SOC_HIPACKPHY_DX_DXNMISCCTRL4_dxctl_reg_dqsg_toggle_code90_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ioctl_dqs_rx_mode0 : 1;
        unsigned int ioctl_dqs_rx_mode1 : 1;
        unsigned int ioctl_dm_rx_mode0 : 1;
        unsigned int ioctl_dm_rx_mode1 : 1;
        unsigned int ioctl_dummy_rx_mode0 : 1;
        unsigned int ioctl_dummy_rx_mode1 : 1;
        unsigned int reserved_0 : 5;
        unsigned int dxctl_ioctl_diffdqs_en : 1;
        unsigned int reserved_1 : 20;
    } reg;
} SOC_HIPACKPHY_DX_IOCTL3_UNION;
#endif
#define SOC_HIPACKPHY_DX_IOCTL3_ioctl_dqs_rx_mode0_START (0)
#define SOC_HIPACKPHY_DX_IOCTL3_ioctl_dqs_rx_mode0_END (0)
#define SOC_HIPACKPHY_DX_IOCTL3_ioctl_dqs_rx_mode1_START (1)
#define SOC_HIPACKPHY_DX_IOCTL3_ioctl_dqs_rx_mode1_END (1)
#define SOC_HIPACKPHY_DX_IOCTL3_ioctl_dm_rx_mode0_START (2)
#define SOC_HIPACKPHY_DX_IOCTL3_ioctl_dm_rx_mode0_END (2)
#define SOC_HIPACKPHY_DX_IOCTL3_ioctl_dm_rx_mode1_START (3)
#define SOC_HIPACKPHY_DX_IOCTL3_ioctl_dm_rx_mode1_END (3)
#define SOC_HIPACKPHY_DX_IOCTL3_ioctl_dummy_rx_mode0_START (4)
#define SOC_HIPACKPHY_DX_IOCTL3_ioctl_dummy_rx_mode0_END (4)
#define SOC_HIPACKPHY_DX_IOCTL3_ioctl_dummy_rx_mode1_START (5)
#define SOC_HIPACKPHY_DX_IOCTL3_ioctl_dummy_rx_mode1_END (5)
#define SOC_HIPACKPHY_DX_IOCTL3_dxctl_ioctl_diffdqs_en_START (11)
#define SOC_HIPACKPHY_DX_IOCTL3_dxctl_ioctl_diffdqs_en_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_reg_rx_dcc_dq0 : 5;
        unsigned int dxctl_reg_rx_dcc_dq1 : 5;
        unsigned int dxctl_reg_rx_dcc_dq2 : 5;
        unsigned int dxctl_reg_rx_dcc_dq3 : 5;
        unsigned int dxctl_reg_rx_dcc_dm : 5;
        unsigned int reserved : 7;
    } reg;
} SOC_HIPACKPHY_DX_DXNDCC1_UNION;
#endif
#define SOC_HIPACKPHY_DX_DXNDCC1_dxctl_reg_rx_dcc_dq0_START (0)
#define SOC_HIPACKPHY_DX_DXNDCC1_dxctl_reg_rx_dcc_dq0_END (4)
#define SOC_HIPACKPHY_DX_DXNDCC1_dxctl_reg_rx_dcc_dq1_START (5)
#define SOC_HIPACKPHY_DX_DXNDCC1_dxctl_reg_rx_dcc_dq1_END (9)
#define SOC_HIPACKPHY_DX_DXNDCC1_dxctl_reg_rx_dcc_dq2_START (10)
#define SOC_HIPACKPHY_DX_DXNDCC1_dxctl_reg_rx_dcc_dq2_END (14)
#define SOC_HIPACKPHY_DX_DXNDCC1_dxctl_reg_rx_dcc_dq3_START (15)
#define SOC_HIPACKPHY_DX_DXNDCC1_dxctl_reg_rx_dcc_dq3_END (19)
#define SOC_HIPACKPHY_DX_DXNDCC1_dxctl_reg_rx_dcc_dm_START (20)
#define SOC_HIPACKPHY_DX_DXNDCC1_dxctl_reg_rx_dcc_dm_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_reg_rx_dcc_dq4 : 5;
        unsigned int dxctl_reg_rx_dcc_dq5 : 5;
        unsigned int dxctl_reg_rx_dcc_dq6 : 5;
        unsigned int dxctl_reg_rx_dcc_dq7 : 5;
        unsigned int reserved : 12;
    } reg;
} SOC_HIPACKPHY_DX_DXNDCC2_UNION;
#endif
#define SOC_HIPACKPHY_DX_DXNDCC2_dxctl_reg_rx_dcc_dq4_START (0)
#define SOC_HIPACKPHY_DX_DXNDCC2_dxctl_reg_rx_dcc_dq4_END (4)
#define SOC_HIPACKPHY_DX_DXNDCC2_dxctl_reg_rx_dcc_dq5_START (5)
#define SOC_HIPACKPHY_DX_DXNDCC2_dxctl_reg_rx_dcc_dq5_END (9)
#define SOC_HIPACKPHY_DX_DXNDCC2_dxctl_reg_rx_dcc_dq6_START (10)
#define SOC_HIPACKPHY_DX_DXNDCC2_dxctl_reg_rx_dcc_dq6_END (14)
#define SOC_HIPACKPHY_DX_DXNDCC2_dxctl_reg_rx_dcc_dq7_START (15)
#define SOC_HIPACKPHY_DX_DXNDCC2_dxctl_reg_rx_dcc_dq7_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_reg_tx_dcc_dq0 : 5;
        unsigned int dxctl_reg_tx_dcc_dq1 : 5;
        unsigned int dxctl_reg_tx_dcc_dq2 : 5;
        unsigned int dxctl_reg_tx_dcc_dq3 : 5;
        unsigned int dxctl_reg_tx_dcc_dm : 5;
        unsigned int dxctl_reg_tx_dcc_dqs : 5;
        unsigned int reserved : 2;
    } reg;
} SOC_HIPACKPHY_DX_DXNDCC3_UNION;
#endif
#define SOC_HIPACKPHY_DX_DXNDCC3_dxctl_reg_tx_dcc_dq0_START (0)
#define SOC_HIPACKPHY_DX_DXNDCC3_dxctl_reg_tx_dcc_dq0_END (4)
#define SOC_HIPACKPHY_DX_DXNDCC3_dxctl_reg_tx_dcc_dq1_START (5)
#define SOC_HIPACKPHY_DX_DXNDCC3_dxctl_reg_tx_dcc_dq1_END (9)
#define SOC_HIPACKPHY_DX_DXNDCC3_dxctl_reg_tx_dcc_dq2_START (10)
#define SOC_HIPACKPHY_DX_DXNDCC3_dxctl_reg_tx_dcc_dq2_END (14)
#define SOC_HIPACKPHY_DX_DXNDCC3_dxctl_reg_tx_dcc_dq3_START (15)
#define SOC_HIPACKPHY_DX_DXNDCC3_dxctl_reg_tx_dcc_dq3_END (19)
#define SOC_HIPACKPHY_DX_DXNDCC3_dxctl_reg_tx_dcc_dm_START (20)
#define SOC_HIPACKPHY_DX_DXNDCC3_dxctl_reg_tx_dcc_dm_END (24)
#define SOC_HIPACKPHY_DX_DXNDCC3_dxctl_reg_tx_dcc_dqs_START (25)
#define SOC_HIPACKPHY_DX_DXNDCC3_dxctl_reg_tx_dcc_dqs_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_reg_tx_dcc_dq4 : 5;
        unsigned int dxctl_reg_tx_dcc_dq5 : 5;
        unsigned int dxctl_reg_tx_dcc_dq6 : 5;
        unsigned int dxctl_reg_tx_dcc_dq7 : 5;
        unsigned int reserved : 12;
    } reg;
} SOC_HIPACKPHY_DX_DXNDCC4_UNION;
#endif
#define SOC_HIPACKPHY_DX_DXNDCC4_dxctl_reg_tx_dcc_dq4_START (0)
#define SOC_HIPACKPHY_DX_DXNDCC4_dxctl_reg_tx_dcc_dq4_END (4)
#define SOC_HIPACKPHY_DX_DXNDCC4_dxctl_reg_tx_dcc_dq5_START (5)
#define SOC_HIPACKPHY_DX_DXNDCC4_dxctl_reg_tx_dcc_dq5_END (9)
#define SOC_HIPACKPHY_DX_DXNDCC4_dxctl_reg_tx_dcc_dq6_START (10)
#define SOC_HIPACKPHY_DX_DXNDCC4_dxctl_reg_tx_dcc_dq6_END (14)
#define SOC_HIPACKPHY_DX_DXNDCC4_dxctl_reg_tx_dcc_dq7_START (15)
#define SOC_HIPACKPHY_DX_DXNDCC4_dxctl_reg_tx_dcc_dq7_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dqs_ioctl_ronselp : 3;
        unsigned int dqs_ioctl_ronseln : 3;
        unsigned int dx_ioctl_ronselp : 3;
        unsigned int dx_ioctl_ronseln : 3;
        unsigned int dqs_ioctl_PRE_N : 2;
        unsigned int dqs_ioctl_PRE_P : 2;
        unsigned int dx_ioctl_PRE_N : 2;
        unsigned int dx_ioctl_PRE_P : 2;
        unsigned int dqs_ioctl_ronbseln : 3;
        unsigned int dqs_ioctl_ronbselp : 3;
        unsigned int reserved : 6;
    } reg;
} SOC_HIPACKPHY_DX_IOCTL6_UNION;
#endif
#define SOC_HIPACKPHY_DX_IOCTL6_dqs_ioctl_ronselp_START (0)
#define SOC_HIPACKPHY_DX_IOCTL6_dqs_ioctl_ronselp_END (2)
#define SOC_HIPACKPHY_DX_IOCTL6_dqs_ioctl_ronseln_START (3)
#define SOC_HIPACKPHY_DX_IOCTL6_dqs_ioctl_ronseln_END (5)
#define SOC_HIPACKPHY_DX_IOCTL6_dx_ioctl_ronselp_START (6)
#define SOC_HIPACKPHY_DX_IOCTL6_dx_ioctl_ronselp_END (8)
#define SOC_HIPACKPHY_DX_IOCTL6_dx_ioctl_ronseln_START (9)
#define SOC_HIPACKPHY_DX_IOCTL6_dx_ioctl_ronseln_END (11)
#define SOC_HIPACKPHY_DX_IOCTL6_dqs_ioctl_PRE_N_START (12)
#define SOC_HIPACKPHY_DX_IOCTL6_dqs_ioctl_PRE_N_END (13)
#define SOC_HIPACKPHY_DX_IOCTL6_dqs_ioctl_PRE_P_START (14)
#define SOC_HIPACKPHY_DX_IOCTL6_dqs_ioctl_PRE_P_END (15)
#define SOC_HIPACKPHY_DX_IOCTL6_dx_ioctl_PRE_N_START (16)
#define SOC_HIPACKPHY_DX_IOCTL6_dx_ioctl_PRE_N_END (17)
#define SOC_HIPACKPHY_DX_IOCTL6_dx_ioctl_PRE_P_START (18)
#define SOC_HIPACKPHY_DX_IOCTL6_dx_ioctl_PRE_P_END (19)
#define SOC_HIPACKPHY_DX_IOCTL6_dqs_ioctl_ronbseln_START (20)
#define SOC_HIPACKPHY_DX_IOCTL6_dqs_ioctl_ronbseln_END (22)
#define SOC_HIPACKPHY_DX_IOCTL6_dqs_ioctl_ronbselp_START (23)
#define SOC_HIPACKPHY_DX_IOCTL6_dqs_ioctl_ronbselp_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dqs_ioctl_RX_DUTY_SEL : 2;
        unsigned int dqs_ioctl_TX_DUTY_SEL : 2;
        unsigned int dqs_ioctl_RX_DUTY_INC : 2;
        unsigned int dqs_ioctl_TX_DUTY_INC : 2;
        unsigned int dqs_ioctl_RX_DUTY_EN : 2;
        unsigned int dqs_ioctl_TX_DUTY_EN : 2;
        unsigned int dm_ioctl_RX_DUTY_SEL : 2;
        unsigned int dm_ioctl_TX_DUTY_SEL : 2;
        unsigned int dm_ioctl_RX_DUTY_INC : 2;
        unsigned int dm_ioctl_TX_DUTY_INC : 2;
        unsigned int dm_ioctl_RX_DUTY_EN : 2;
        unsigned int dm_ioctl_TX_DUTY_EN : 2;
        unsigned int reserved : 8;
    } reg;
} SOC_HIPACKPHY_DX_IOCTL7_UNION;
#endif
#define SOC_HIPACKPHY_DX_IOCTL7_dqs_ioctl_RX_DUTY_SEL_START (0)
#define SOC_HIPACKPHY_DX_IOCTL7_dqs_ioctl_RX_DUTY_SEL_END (1)
#define SOC_HIPACKPHY_DX_IOCTL7_dqs_ioctl_TX_DUTY_SEL_START (2)
#define SOC_HIPACKPHY_DX_IOCTL7_dqs_ioctl_TX_DUTY_SEL_END (3)
#define SOC_HIPACKPHY_DX_IOCTL7_dqs_ioctl_RX_DUTY_INC_START (4)
#define SOC_HIPACKPHY_DX_IOCTL7_dqs_ioctl_RX_DUTY_INC_END (5)
#define SOC_HIPACKPHY_DX_IOCTL7_dqs_ioctl_TX_DUTY_INC_START (6)
#define SOC_HIPACKPHY_DX_IOCTL7_dqs_ioctl_TX_DUTY_INC_END (7)
#define SOC_HIPACKPHY_DX_IOCTL7_dqs_ioctl_RX_DUTY_EN_START (8)
#define SOC_HIPACKPHY_DX_IOCTL7_dqs_ioctl_RX_DUTY_EN_END (9)
#define SOC_HIPACKPHY_DX_IOCTL7_dqs_ioctl_TX_DUTY_EN_START (10)
#define SOC_HIPACKPHY_DX_IOCTL7_dqs_ioctl_TX_DUTY_EN_END (11)
#define SOC_HIPACKPHY_DX_IOCTL7_dm_ioctl_RX_DUTY_SEL_START (12)
#define SOC_HIPACKPHY_DX_IOCTL7_dm_ioctl_RX_DUTY_SEL_END (13)
#define SOC_HIPACKPHY_DX_IOCTL7_dm_ioctl_TX_DUTY_SEL_START (14)
#define SOC_HIPACKPHY_DX_IOCTL7_dm_ioctl_TX_DUTY_SEL_END (15)
#define SOC_HIPACKPHY_DX_IOCTL7_dm_ioctl_RX_DUTY_INC_START (16)
#define SOC_HIPACKPHY_DX_IOCTL7_dm_ioctl_RX_DUTY_INC_END (17)
#define SOC_HIPACKPHY_DX_IOCTL7_dm_ioctl_TX_DUTY_INC_START (18)
#define SOC_HIPACKPHY_DX_IOCTL7_dm_ioctl_TX_DUTY_INC_END (19)
#define SOC_HIPACKPHY_DX_IOCTL7_dm_ioctl_RX_DUTY_EN_START (20)
#define SOC_HIPACKPHY_DX_IOCTL7_dm_ioctl_RX_DUTY_EN_END (21)
#define SOC_HIPACKPHY_DX_IOCTL7_dm_ioctl_TX_DUTY_EN_START (22)
#define SOC_HIPACKPHY_DX_IOCTL7_dm_ioctl_TX_DUTY_EN_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_byp_ck90_data_code_dqs_b0 : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_HIPACKPHY_DX_BYP_CK90_CODE_UNION;
#endif
#define SOC_HIPACKPHY_DX_BYP_CK90_CODE_dxctl_byp_ck90_data_code_dqs_b0_START (0)
#define SOC_HIPACKPHY_DX_BYP_CK90_CODE_dxctl_byp_ck90_data_code_dqs_b0_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_byp_ck90_data_code_dqs_b1 : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_HIPACKPHY_DX_BYP_CK90_CODE_B1_UNION;
#endif
#define SOC_HIPACKPHY_DX_BYP_CK90_CODE_B1_dxctl_byp_ck90_data_code_dqs_b1_START (0)
#define SOC_HIPACKPHY_DX_BYP_CK90_CODE_B1_dxctl_byp_ck90_data_code_dqs_b1_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dx_ioctl_RX_DUTY_EN : 16;
        unsigned int dx_ioctl_TX_DUTY_EN : 16;
    } reg;
} SOC_HIPACKPHY_DX_IOCTL8_UNION;
#endif
#define SOC_HIPACKPHY_DX_IOCTL8_dx_ioctl_RX_DUTY_EN_START (0)
#define SOC_HIPACKPHY_DX_IOCTL8_dx_ioctl_RX_DUTY_EN_END (15)
#define SOC_HIPACKPHY_DX_IOCTL8_dx_ioctl_TX_DUTY_EN_START (16)
#define SOC_HIPACKPHY_DX_IOCTL8_dx_ioctl_TX_DUTY_EN_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dx_ioctl_RX_DUTY_INC : 16;
        unsigned int dx_ioctl_TX_DUTY_INC : 16;
    } reg;
} SOC_HIPACKPHY_DX_IOCTL9_UNION;
#endif
#define SOC_HIPACKPHY_DX_IOCTL9_dx_ioctl_RX_DUTY_INC_START (0)
#define SOC_HIPACKPHY_DX_IOCTL9_dx_ioctl_RX_DUTY_INC_END (15)
#define SOC_HIPACKPHY_DX_IOCTL9_dx_ioctl_TX_DUTY_INC_START (16)
#define SOC_HIPACKPHY_DX_IOCTL9_dx_ioctl_TX_DUTY_INC_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dx_ioctl_RX_DUTY_SEL : 16;
        unsigned int dx_ioctl_TX_DUTY_SEL : 16;
    } reg;
} SOC_HIPACKPHY_DX_IOCTL10_UNION;
#endif
#define SOC_HIPACKPHY_DX_IOCTL10_dx_ioctl_RX_DUTY_SEL_START (0)
#define SOC_HIPACKPHY_DX_IOCTL10_dx_ioctl_RX_DUTY_SEL_END (15)
#define SOC_HIPACKPHY_DX_IOCTL10_dx_ioctl_TX_DUTY_SEL_START (16)
#define SOC_HIPACKPHY_DX_IOCTL10_dx_ioctl_TX_DUTY_SEL_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dx_half_phase_sel_rank1 : 1;
        unsigned int dx_half_phase_sel : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_HIPACKPHY_DX_DXCTL_PHASE_UNION;
#endif
#define SOC_HIPACKPHY_DX_DXCTL_PHASE_dx_half_phase_sel_rank1_START (0)
#define SOC_HIPACKPHY_DX_DXCTL_PHASE_dx_half_phase_sel_rank1_END (0)
#define SOC_HIPACKPHY_DX_DXCTL_PHASE_dx_half_phase_sel_START (1)
#define SOC_HIPACKPHY_DX_DXCTL_PHASE_dx_half_phase_sel_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reg_reserve_3rd : 32;
    } reg;
} SOC_HIPACKPHY_DX_RESERVED_3RD_UNION;
#endif
#define SOC_HIPACKPHY_DX_RESERVED_3RD_reg_reserve_3rd_START (0)
#define SOC_HIPACKPHY_DX_RESERVED_3RD_reg_reserve_3rd_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dummy_ioctl_RX_DUTY_SEL : 2;
        unsigned int dummy_ioctl_RX_DUTY_INC : 2;
        unsigned int dummy_ioctl_RX_DUTY_EN : 2;
        unsigned int dummy_ioctl_TX_DUTY_SEL : 2;
        unsigned int dummy_ioctl_TX_DUTY_INC : 2;
        unsigned int dummy_ioctl_TX_DUTY_EN : 2;
        unsigned int reserved : 20;
    } reg;
} SOC_HIPACKPHY_DX_DUMMY_IOCTL_DUTY_UNION;
#endif
#define SOC_HIPACKPHY_DX_DUMMY_IOCTL_DUTY_dummy_ioctl_RX_DUTY_SEL_START (0)
#define SOC_HIPACKPHY_DX_DUMMY_IOCTL_DUTY_dummy_ioctl_RX_DUTY_SEL_END (1)
#define SOC_HIPACKPHY_DX_DUMMY_IOCTL_DUTY_dummy_ioctl_RX_DUTY_INC_START (2)
#define SOC_HIPACKPHY_DX_DUMMY_IOCTL_DUTY_dummy_ioctl_RX_DUTY_INC_END (3)
#define SOC_HIPACKPHY_DX_DUMMY_IOCTL_DUTY_dummy_ioctl_RX_DUTY_EN_START (4)
#define SOC_HIPACKPHY_DX_DUMMY_IOCTL_DUTY_dummy_ioctl_RX_DUTY_EN_END (5)
#define SOC_HIPACKPHY_DX_DUMMY_IOCTL_DUTY_dummy_ioctl_TX_DUTY_SEL_START (6)
#define SOC_HIPACKPHY_DX_DUMMY_IOCTL_DUTY_dummy_ioctl_TX_DUTY_SEL_END (7)
#define SOC_HIPACKPHY_DX_DUMMY_IOCTL_DUTY_dummy_ioctl_TX_DUTY_INC_START (8)
#define SOC_HIPACKPHY_DX_DUMMY_IOCTL_DUTY_dummy_ioctl_TX_DUTY_INC_END (9)
#define SOC_HIPACKPHY_DX_DUMMY_IOCTL_DUTY_dummy_ioctl_TX_DUTY_EN_START (10)
#define SOC_HIPACKPHY_DX_DUMMY_IOCTL_DUTY_dummy_ioctl_TX_DUTY_EN_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_reg_rdvref_ranksel_mode_DQS : 2;
        unsigned int dxctl_reg_rdvref_ranksel_en_DQS : 2;
        unsigned int dxctl_reg_dbgmode_sel : 5;
        unsigned int reserved : 23;
    } reg;
} SOC_HIPACKPHY_DX_DXCTL_MISCCTRL_UNION;
#endif
#define SOC_HIPACKPHY_DX_DXCTL_MISCCTRL_dxctl_reg_rdvref_ranksel_mode_DQS_START (0)
#define SOC_HIPACKPHY_DX_DXCTL_MISCCTRL_dxctl_reg_rdvref_ranksel_mode_DQS_END (1)
#define SOC_HIPACKPHY_DX_DXCTL_MISCCTRL_dxctl_reg_rdvref_ranksel_en_DQS_START (2)
#define SOC_HIPACKPHY_DX_DXCTL_MISCCTRL_dxctl_reg_rdvref_ranksel_en_DQS_END (3)
#define SOC_HIPACKPHY_DX_DXCTL_MISCCTRL_dxctl_reg_dbgmode_sel_START (4)
#define SOC_HIPACKPHY_DX_DXCTL_MISCCTRL_dxctl_reg_dbgmode_sel_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxrsvdreg1 : 32;
    } reg;
} SOC_HIPACKPHY_DX_DXRSVD1_UNION;
#endif
#define SOC_HIPACKPHY_DX_DXRSVD1_dxrsvdreg1_START (0)
#define SOC_HIPACKPHY_DX_DXRSVD1_dxrsvdreg1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxrsvdreg2 : 32;
    } reg;
} SOC_HIPACKPHY_DX_DXRSVD2_UNION;
#endif
#define SOC_HIPACKPHY_DX_DXRSVD2_dxrsvdreg2_START (0)
#define SOC_HIPACKPHY_DX_DXRSVD2_dxrsvdreg2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int uc_mode_en : 1;
        unsigned int uc_regif_wst : 1;
        unsigned int uc_rt_populate : 2;
        unsigned int reserved : 22;
        unsigned int trkdbg_dyna_rdqsgen : 1;
        unsigned int trkdbg_dyna_rdqsen : 1;
        unsigned int trkdbg_rdqsg_get : 1;
        unsigned int trkdbg_rdqs_get : 1;
        unsigned int pte_phyupd_req : 1;
        unsigned int uc_rowact_type : 1;
    } reg;
} SOC_HIPACKPHY_UC_TRCTRL_UNION;
#endif
#define SOC_HIPACKPHY_UC_TRCTRL_uc_mode_en_START (0)
#define SOC_HIPACKPHY_UC_TRCTRL_uc_mode_en_END (0)
#define SOC_HIPACKPHY_UC_TRCTRL_uc_regif_wst_START (1)
#define SOC_HIPACKPHY_UC_TRCTRL_uc_regif_wst_END (1)
#define SOC_HIPACKPHY_UC_TRCTRL_uc_rt_populate_START (2)
#define SOC_HIPACKPHY_UC_TRCTRL_uc_rt_populate_END (3)
#define SOC_HIPACKPHY_UC_TRCTRL_trkdbg_dyna_rdqsgen_START (26)
#define SOC_HIPACKPHY_UC_TRCTRL_trkdbg_dyna_rdqsgen_END (26)
#define SOC_HIPACKPHY_UC_TRCTRL_trkdbg_dyna_rdqsen_START (27)
#define SOC_HIPACKPHY_UC_TRCTRL_trkdbg_dyna_rdqsen_END (27)
#define SOC_HIPACKPHY_UC_TRCTRL_trkdbg_rdqsg_get_START (28)
#define SOC_HIPACKPHY_UC_TRCTRL_trkdbg_rdqsg_get_END (28)
#define SOC_HIPACKPHY_UC_TRCTRL_trkdbg_rdqs_get_START (29)
#define SOC_HIPACKPHY_UC_TRCTRL_trkdbg_rdqs_get_END (29)
#define SOC_HIPACKPHY_UC_TRCTRL_pte_phyupd_req_START (30)
#define SOC_HIPACKPHY_UC_TRCTRL_pte_phyupd_req_END (30)
#define SOC_HIPACKPHY_UC_TRCTRL_uc_rowact_type_START (31)
#define SOC_HIPACKPHY_UC_TRCTRL_uc_rowact_type_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int detop_active : 1;
        unsigned int detop_preca : 1;
        unsigned int reserved_0 : 2;
        unsigned int detop_prewrite : 1;
        unsigned int detop_rdtest : 1;
        unsigned int detop_rwtest : 1;
        unsigned int detop_preca_post : 1;
        unsigned int reserved_1 : 8;
        unsigned int phycnt_rst : 1;
        unsigned int reserved_2 : 15;
    } reg;
} SOC_HIPACKPHY_UC_TROPCTRL_UNION;
#endif
#define SOC_HIPACKPHY_UC_TROPCTRL_detop_active_START (0)
#define SOC_HIPACKPHY_UC_TROPCTRL_detop_active_END (0)
#define SOC_HIPACKPHY_UC_TROPCTRL_detop_preca_START (1)
#define SOC_HIPACKPHY_UC_TROPCTRL_detop_preca_END (1)
#define SOC_HIPACKPHY_UC_TROPCTRL_detop_prewrite_START (4)
#define SOC_HIPACKPHY_UC_TROPCTRL_detop_prewrite_END (4)
#define SOC_HIPACKPHY_UC_TROPCTRL_detop_rdtest_START (5)
#define SOC_HIPACKPHY_UC_TROPCTRL_detop_rdtest_END (5)
#define SOC_HIPACKPHY_UC_TROPCTRL_detop_rwtest_START (6)
#define SOC_HIPACKPHY_UC_TROPCTRL_detop_rwtest_END (6)
#define SOC_HIPACKPHY_UC_TROPCTRL_detop_preca_post_START (7)
#define SOC_HIPACKPHY_UC_TROPCTRL_detop_preca_post_END (7)
#define SOC_HIPACKPHY_UC_TROPCTRL_phycnt_rst_START (16)
#define SOC_HIPACKPHY_UC_TROPCTRL_phycnt_rst_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dtrain_active : 1;
        unsigned int reserved : 14;
        unsigned int comb_cary_status : 1;
        unsigned int det_all_passed : 4;
        unsigned int det_any_passed : 4;
        unsigned int det_all_failed : 4;
        unsigned int det_any_failed : 4;
    } reg;
} SOC_HIPACKPHY_UC_DTRSTSP_UNION;
#endif
#define SOC_HIPACKPHY_UC_DTRSTSP_dtrain_active_START (0)
#define SOC_HIPACKPHY_UC_DTRSTSP_dtrain_active_END (0)
#define SOC_HIPACKPHY_UC_DTRSTSP_comb_cary_status_START (15)
#define SOC_HIPACKPHY_UC_DTRSTSP_comb_cary_status_END (15)
#define SOC_HIPACKPHY_UC_DTRSTSP_det_all_passed_START (16)
#define SOC_HIPACKPHY_UC_DTRSTSP_det_all_passed_END (19)
#define SOC_HIPACKPHY_UC_DTRSTSP_det_any_passed_START (20)
#define SOC_HIPACKPHY_UC_DTRSTSP_det_any_passed_END (23)
#define SOC_HIPACKPHY_UC_DTRSTSP_det_all_failed_START (24)
#define SOC_HIPACKPHY_UC_DTRSTSP_det_all_failed_END (27)
#define SOC_HIPACKPHY_UC_DTRSTSP_det_any_failed_START (28)
#define SOC_HIPACKPHY_UC_DTRSTSP_det_any_failed_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int uc_rtactive : 2;
        unsigned int reserved : 29;
        unsigned int uc_int_msk : 1;
    } reg;
} SOC_HIPACKPHY_UC_TRSTATUS_UNION;
#endif
#define SOC_HIPACKPHY_UC_TRSTATUS_uc_rtactive_START (0)
#define SOC_HIPACKPHY_UC_TRSTATUS_uc_rtactive_END (1)
#define SOC_HIPACKPHY_UC_TRSTATUS_uc_int_msk_START (31)
#define SOC_HIPACKPHY_UC_TRSTATUS_uc_int_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cmdq_byp_mode : 1;
        unsigned int cmdq_flush : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_HIPACKPHY_UC_CMDQCTRL_UNION;
#endif
#define SOC_HIPACKPHY_UC_CMDQCTRL_cmdq_byp_mode_START (0)
#define SOC_HIPACKPHY_UC_CMDQCTRL_cmdq_byp_mode_END (0)
#define SOC_HIPACKPHY_UC_CMDQCTRL_cmdq_flush_START (1)
#define SOC_HIPACKPHY_UC_CMDQCTRL_cmdq_flush_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int alu_operator : 3;
        unsigned int src_sel : 1;
        unsigned int alu_operand : 8;
        unsigned int reserved : 4;
        unsigned int carry_status : 8;
        unsigned int data8_sel : 8;
    } reg;
} SOC_HIPACKPHY_UC_WDQPHAUC_UNION;
#endif
#define SOC_HIPACKPHY_UC_WDQPHAUC_alu_operator_START (0)
#define SOC_HIPACKPHY_UC_WDQPHAUC_alu_operator_END (2)
#define SOC_HIPACKPHY_UC_WDQPHAUC_src_sel_START (3)
#define SOC_HIPACKPHY_UC_WDQPHAUC_src_sel_END (3)
#define SOC_HIPACKPHY_UC_WDQPHAUC_alu_operand_START (4)
#define SOC_HIPACKPHY_UC_WDQPHAUC_alu_operand_END (11)
#define SOC_HIPACKPHY_UC_WDQPHAUC_carry_status_START (16)
#define SOC_HIPACKPHY_UC_WDQPHAUC_carry_status_END (23)
#define SOC_HIPACKPHY_UC_WDQPHAUC_data8_sel_START (24)
#define SOC_HIPACKPHY_UC_WDQPHAUC_data8_sel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int alu_operator : 3;
        unsigned int reserved_0 : 1;
        unsigned int alu_operand : 6;
        unsigned int reserved_1 : 6;
        unsigned int carry_status : 8;
        unsigned int data8_sel : 8;
    } reg;
} SOC_HIPACKPHY_UC_WDQSPHAUC_UNION;
#endif
#define SOC_HIPACKPHY_UC_WDQSPHAUC_alu_operator_START (0)
#define SOC_HIPACKPHY_UC_WDQSPHAUC_alu_operator_END (2)
#define SOC_HIPACKPHY_UC_WDQSPHAUC_alu_operand_START (4)
#define SOC_HIPACKPHY_UC_WDQSPHAUC_alu_operand_END (9)
#define SOC_HIPACKPHY_UC_WDQSPHAUC_carry_status_START (16)
#define SOC_HIPACKPHY_UC_WDQSPHAUC_carry_status_END (23)
#define SOC_HIPACKPHY_UC_WDQSPHAUC_data8_sel_START (24)
#define SOC_HIPACKPHY_UC_WDQSPHAUC_data8_sel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int alu_operator : 3;
        unsigned int reserved_0 : 1;
        unsigned int alu_operand : 8;
        unsigned int reserved_1 : 4;
        unsigned int carry_status : 8;
        unsigned int data8_sel : 8;
    } reg;
} SOC_HIPACKPHY_UC_WDQSBDLAUC_UNION;
#endif
#define SOC_HIPACKPHY_UC_WDQSBDLAUC_alu_operator_START (0)
#define SOC_HIPACKPHY_UC_WDQSBDLAUC_alu_operator_END (2)
#define SOC_HIPACKPHY_UC_WDQSBDLAUC_alu_operand_START (4)
#define SOC_HIPACKPHY_UC_WDQSBDLAUC_alu_operand_END (11)
#define SOC_HIPACKPHY_UC_WDQSBDLAUC_carry_status_START (16)
#define SOC_HIPACKPHY_UC_WDQSBDLAUC_carry_status_END (23)
#define SOC_HIPACKPHY_UC_WDQSBDLAUC_data8_sel_START (24)
#define SOC_HIPACKPHY_UC_WDQSBDLAUC_data8_sel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdly_store : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_HIPACKPHY_UC_WDLYOP_UNION;
#endif
#define SOC_HIPACKPHY_UC_WDLYOP_wdly_store_START (0)
#define SOC_HIPACKPHY_UC_WDLYOP_wdly_store_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int alu_operator : 3;
        unsigned int src_sel : 1;
        unsigned int alu_operand : 10;
        unsigned int reserved : 2;
        unsigned int carry_status : 8;
        unsigned int data8_sel : 8;
    } reg;
} SOC_HIPACKPHY_UC_RDQSAUC_UNION;
#endif
#define SOC_HIPACKPHY_UC_RDQSAUC_alu_operator_START (0)
#define SOC_HIPACKPHY_UC_RDQSAUC_alu_operator_END (2)
#define SOC_HIPACKPHY_UC_RDQSAUC_src_sel_START (3)
#define SOC_HIPACKPHY_UC_RDQSAUC_src_sel_END (3)
#define SOC_HIPACKPHY_UC_RDQSAUC_alu_operand_START (4)
#define SOC_HIPACKPHY_UC_RDQSAUC_alu_operand_END (13)
#define SOC_HIPACKPHY_UC_RDQSAUC_carry_status_START (16)
#define SOC_HIPACKPHY_UC_RDQSAUC_carry_status_END (23)
#define SOC_HIPACKPHY_UC_RDQSAUC_data8_sel_START (24)
#define SOC_HIPACKPHY_UC_RDQSAUC_data8_sel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int alu_operator : 3;
        unsigned int reserved_0 : 1;
        unsigned int alu_operand : 8;
        unsigned int reserved_1 : 4;
        unsigned int carry_status : 8;
        unsigned int data8_sel : 8;
    } reg;
} SOC_HIPACKPHY_UC_RDQSGTXAUC_UNION;
#endif
#define SOC_HIPACKPHY_UC_RDQSGTXAUC_alu_operator_START (0)
#define SOC_HIPACKPHY_UC_RDQSGTXAUC_alu_operator_END (2)
#define SOC_HIPACKPHY_UC_RDQSGTXAUC_alu_operand_START (4)
#define SOC_HIPACKPHY_UC_RDQSGTXAUC_alu_operand_END (11)
#define SOC_HIPACKPHY_UC_RDQSGTXAUC_carry_status_START (16)
#define SOC_HIPACKPHY_UC_RDQSGTXAUC_carry_status_END (23)
#define SOC_HIPACKPHY_UC_RDQSGTXAUC_data8_sel_START (24)
#define SOC_HIPACKPHY_UC_RDQSGTXAUC_data8_sel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int alu_operator : 3;
        unsigned int reserved_0 : 1;
        unsigned int alu_operand : 10;
        unsigned int reserved_1 : 2;
        unsigned int carry_status : 8;
        unsigned int data8_sel : 8;
    } reg;
} SOC_HIPACKPHY_UC_RDQSGPHAUC_UNION;
#endif
#define SOC_HIPACKPHY_UC_RDQSGPHAUC_alu_operator_START (0)
#define SOC_HIPACKPHY_UC_RDQSGPHAUC_alu_operator_END (2)
#define SOC_HIPACKPHY_UC_RDQSGPHAUC_alu_operand_START (4)
#define SOC_HIPACKPHY_UC_RDQSGPHAUC_alu_operand_END (13)
#define SOC_HIPACKPHY_UC_RDQSGPHAUC_carry_status_START (16)
#define SOC_HIPACKPHY_UC_RDQSGPHAUC_carry_status_END (23)
#define SOC_HIPACKPHY_UC_RDQSGPHAUC_data8_sel_START (24)
#define SOC_HIPACKPHY_UC_RDQSGPHAUC_data8_sel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int alu_operator : 3;
        unsigned int reserved_0 : 1;
        unsigned int alu_operand : 8;
        unsigned int reserved_1 : 4;
        unsigned int carry_status : 8;
        unsigned int data8_sel : 8;
    } reg;
} SOC_HIPACKPHY_UC_RDQSGBDLAUC_UNION;
#endif
#define SOC_HIPACKPHY_UC_RDQSGBDLAUC_alu_operator_START (0)
#define SOC_HIPACKPHY_UC_RDQSGBDLAUC_alu_operator_END (2)
#define SOC_HIPACKPHY_UC_RDQSGBDLAUC_alu_operand_START (4)
#define SOC_HIPACKPHY_UC_RDQSGBDLAUC_alu_operand_END (11)
#define SOC_HIPACKPHY_UC_RDQSGBDLAUC_carry_status_START (16)
#define SOC_HIPACKPHY_UC_RDQSGBDLAUC_carry_status_END (23)
#define SOC_HIPACKPHY_UC_RDQSGBDLAUC_data8_sel_START (24)
#define SOC_HIPACKPHY_UC_RDQSGBDLAUC_data8_sel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int alu_operator : 3;
        unsigned int reserved_0 : 1;
        unsigned int alu_operand : 3;
        unsigned int reserved_1 : 9;
        unsigned int carry_status : 8;
        unsigned int data8_sel : 8;
    } reg;
} SOC_HIPACKPHY_UC_RGDSAUC_UNION;
#endif
#define SOC_HIPACKPHY_UC_RGDSAUC_alu_operator_START (0)
#define SOC_HIPACKPHY_UC_RGDSAUC_alu_operator_END (2)
#define SOC_HIPACKPHY_UC_RGDSAUC_alu_operand_START (4)
#define SOC_HIPACKPHY_UC_RGDSAUC_alu_operand_END (6)
#define SOC_HIPACKPHY_UC_RGDSAUC_carry_status_START (16)
#define SOC_HIPACKPHY_UC_RGDSAUC_carry_status_END (23)
#define SOC_HIPACKPHY_UC_RGDSAUC_data8_sel_START (24)
#define SOC_HIPACKPHY_UC_RGDSAUC_data8_sel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdly_store : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_HIPACKPHY_UC_RDLYOP_UNION;
#endif
#define SOC_HIPACKPHY_UC_RDLYOP_rdly_store_START (0)
#define SOC_HIPACKPHY_UC_RDLYOP_rdly_store_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sw_wlmode : 1;
        unsigned int sw_gtmode : 1;
        unsigned int reserved_0 : 2;
        unsigned int sw_wlmodeb : 8;
        unsigned int reserved_1 : 19;
        unsigned int wl_wdqs_gated : 1;
    } reg;
} SOC_HIPACKPHY_UCSWTMODE_UNION;
#endif
#define SOC_HIPACKPHY_UCSWTMODE_sw_wlmode_START (0)
#define SOC_HIPACKPHY_UCSWTMODE_sw_wlmode_END (0)
#define SOC_HIPACKPHY_UCSWTMODE_sw_gtmode_START (1)
#define SOC_HIPACKPHY_UCSWTMODE_sw_gtmode_END (1)
#define SOC_HIPACKPHY_UCSWTMODE_sw_wlmodeb_START (4)
#define SOC_HIPACKPHY_UCSWTMODE_sw_wlmodeb_END (11)
#define SOC_HIPACKPHY_UCSWTMODE_wl_wdqs_gated_START (31)
#define SOC_HIPACKPHY_UCSWTMODE_wl_wdqs_gated_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sw_wl_dqs : 1;
        unsigned int reserved : 6;
        unsigned int sw_mrw_req : 1;
        unsigned int sw_mrw_ma : 8;
        unsigned int sw_mrw_op : 16;
    } reg;
} SOC_HIPACKPHY_UCSWTWLDQS_UNION;
#endif
#define SOC_HIPACKPHY_UCSWTWLDQS_sw_wl_dqs_START (0)
#define SOC_HIPACKPHY_UCSWTWLDQS_sw_wl_dqs_END (0)
#define SOC_HIPACKPHY_UCSWTWLDQS_sw_mrw_req_START (7)
#define SOC_HIPACKPHY_UCSWTWLDQS_sw_mrw_req_END (7)
#define SOC_HIPACKPHY_UCSWTWLDQS_sw_mrw_ma_START (8)
#define SOC_HIPACKPHY_UCSWTWLDQS_sw_mrw_ma_END (15)
#define SOC_HIPACKPHY_UCSWTWLDQS_sw_mrw_op_START (16)
#define SOC_HIPACKPHY_UCSWTWLDQS_sw_mrw_op_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wl_dq_result : 8;
        unsigned int gt_result : 8;
        unsigned int gds_result : 8;
        unsigned int reserved : 8;
    } reg;
} SOC_HIPACKPHY_UC_SWTRLT_UNION;
#endif
#define SOC_HIPACKPHY_UC_SWTRLT_wl_dq_result_START (0)
#define SOC_HIPACKPHY_UC_SWTRLT_wl_dq_result_END (7)
#define SOC_HIPACKPHY_UC_SWTRLT_gt_result_START (8)
#define SOC_HIPACKPHY_UC_SWTRLT_gt_result_END (15)
#define SOC_HIPACKPHY_UC_SWTRLT_gds_result_START (16)
#define SOC_HIPACKPHY_UC_SWTRLT_gds_result_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fast_gds_result : 32;
    } reg;
} SOC_HIPACKPHY_UCFASTGDSRLT0_UNION;
#endif
#define SOC_HIPACKPHY_UCFASTGDSRLT0_fast_gds_result_START (0)
#define SOC_HIPACKPHY_UCFASTGDSRLT0_fast_gds_result_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fast_gds_result : 32;
    } reg;
} SOC_HIPACKPHY_UCFASTGDSRLT1_UNION;
#endif
#define SOC_HIPACKPHY_UCFASTGDSRLT1_fast_gds_result_START (0)
#define SOC_HIPACKPHY_UCFASTGDSRLT1_fast_gds_result_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fast_gt_decgress : 8;
        unsigned int fast_gt_incgress : 8;
        unsigned int reserved : 16;
    } reg;
} SOC_HIPACKPHY_UCFASTGTRLT_UNION;
#endif
#define SOC_HIPACKPHY_UCFASTGTRLT_fast_gt_decgress_START (0)
#define SOC_HIPACKPHY_UCFASTGTRLT_fast_gt_decgress_END (7)
#define SOC_HIPACKPHY_UCFASTGTRLT_fast_gt_incgress_START (8)
#define SOC_HIPACKPHY_UCFASTGTRLT_fast_gt_incgress_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int trkdbg_rdqs_status : 16;
        unsigned int trkdbg_rdqs_pristatus : 16;
    } reg;
} SOC_HIPACKPHY_UCTRKDBG_RDQS_UNION;
#endif
#define SOC_HIPACKPHY_UCTRKDBG_RDQS_trkdbg_rdqs_status_START (0)
#define SOC_HIPACKPHY_UCTRKDBG_RDQS_trkdbg_rdqs_status_END (15)
#define SOC_HIPACKPHY_UCTRKDBG_RDQS_trkdbg_rdqs_pristatus_START (16)
#define SOC_HIPACKPHY_UCTRKDBG_RDQS_trkdbg_rdqs_pristatus_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int trkdbg_rdqsg_status : 32;
    } reg;
} SOC_HIPACKPHY_UCTRKDBG_RDQSG0_UNION;
#endif
#define SOC_HIPACKPHY_UCTRKDBG_RDQSG0_trkdbg_rdqsg_status_START (0)
#define SOC_HIPACKPHY_UCTRKDBG_RDQSG0_trkdbg_rdqsg_status_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int trkdbg_rdqsg_status_ph : 32;
    } reg;
} SOC_HIPACKPHY_UCTRKDBG_RDQSG1_UNION;
#endif
#define SOC_HIPACKPHY_UCTRKDBG_RDQSG1_trkdbg_rdqsg_status_ph_START (0)
#define SOC_HIPACKPHY_UCTRKDBG_RDQSG1_trkdbg_rdqsg_status_ph_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int phy_dqsg_stop : 8;
        unsigned int phy_dqs_stop : 8;
        unsigned int reserved : 16;
    } reg;
} SOC_HIPACKPHY_UCDBG_PHYSTOP_UNION;
#endif
#define SOC_HIPACKPHY_UCDBG_PHYSTOP_phy_dqsg_stop_START (0)
#define SOC_HIPACKPHY_UCDBG_PHYSTOP_phy_dqsg_stop_END (7)
#define SOC_HIPACKPHY_UCDBG_PHYSTOP_phy_dqs_stop_START (8)
#define SOC_HIPACKPHY_UCDBG_PHYSTOP_phy_dqs_stop_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int alu_operator : 3;
        unsigned int src_sel : 1;
        unsigned int alu_operand : 8;
        unsigned int reserved : 2;
        unsigned int wdm_carry : 1;
        unsigned int wdm_sel : 1;
        unsigned int wdq_carry : 8;
        unsigned int wdqn_sel : 8;
    } reg;
} SOC_HIPACKPHY_UC_WDQNAUC_UNION;
#endif
#define SOC_HIPACKPHY_UC_WDQNAUC_alu_operator_START (0)
#define SOC_HIPACKPHY_UC_WDQNAUC_alu_operator_END (2)
#define SOC_HIPACKPHY_UC_WDQNAUC_src_sel_START (3)
#define SOC_HIPACKPHY_UC_WDQNAUC_src_sel_END (3)
#define SOC_HIPACKPHY_UC_WDQNAUC_alu_operand_START (4)
#define SOC_HIPACKPHY_UC_WDQNAUC_alu_operand_END (11)
#define SOC_HIPACKPHY_UC_WDQNAUC_wdm_carry_START (14)
#define SOC_HIPACKPHY_UC_WDQNAUC_wdm_carry_END (14)
#define SOC_HIPACKPHY_UC_WDQNAUC_wdm_sel_START (15)
#define SOC_HIPACKPHY_UC_WDQNAUC_wdm_sel_END (15)
#define SOC_HIPACKPHY_UC_WDQNAUC_wdq_carry_START (16)
#define SOC_HIPACKPHY_UC_WDQNAUC_wdq_carry_END (23)
#define SOC_HIPACKPHY_UC_WDQNAUC_wdqn_sel_START (24)
#define SOC_HIPACKPHY_UC_WDQNAUC_wdqn_sel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int alu_operator : 3;
        unsigned int src_sel : 1;
        unsigned int alu_operand : 8;
        unsigned int reserved : 1;
        unsigned int even_odd : 1;
        unsigned int rdbi_carry : 1;
        unsigned int rdbi_sel : 1;
        unsigned int rdq_carry : 8;
        unsigned int rdqn_sel : 8;
    } reg;
} SOC_HIPACKPHY_UC_RDQNAUC_UNION;
#endif
#define SOC_HIPACKPHY_UC_RDQNAUC_alu_operator_START (0)
#define SOC_HIPACKPHY_UC_RDQNAUC_alu_operator_END (2)
#define SOC_HIPACKPHY_UC_RDQNAUC_src_sel_START (3)
#define SOC_HIPACKPHY_UC_RDQNAUC_src_sel_END (3)
#define SOC_HIPACKPHY_UC_RDQNAUC_alu_operand_START (4)
#define SOC_HIPACKPHY_UC_RDQNAUC_alu_operand_END (11)
#define SOC_HIPACKPHY_UC_RDQNAUC_even_odd_START (13)
#define SOC_HIPACKPHY_UC_RDQNAUC_even_odd_END (13)
#define SOC_HIPACKPHY_UC_RDQNAUC_rdbi_carry_START (14)
#define SOC_HIPACKPHY_UC_RDQNAUC_rdbi_carry_END (14)
#define SOC_HIPACKPHY_UC_RDQNAUC_rdbi_sel_START (15)
#define SOC_HIPACKPHY_UC_RDQNAUC_rdbi_sel_END (15)
#define SOC_HIPACKPHY_UC_RDQNAUC_rdq_carry_START (16)
#define SOC_HIPACKPHY_UC_RDQNAUC_rdq_carry_END (23)
#define SOC_HIPACKPHY_UC_RDQNAUC_rdqn_sel_START (24)
#define SOC_HIPACKPHY_UC_RDQNAUC_rdqn_sel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dtrain_active : 1;
        unsigned int dm_cmpres_even : 1;
        unsigned int dm_cmpres_odd : 1;
        unsigned int dm_cmpres : 1;
        unsigned int dq_cmpres_even : 8;
        unsigned int dq_cmpres_odd : 8;
        unsigned int cmpres : 8;
        unsigned int det_all_passed : 1;
        unsigned int det_any_passed : 1;
        unsigned int det_all_failed : 1;
        unsigned int det_any_failed : 1;
    } reg;
} SOC_HIPACKPHY_UC_DTRSTS_UNION;
#endif
#define SOC_HIPACKPHY_UC_DTRSTS_dtrain_active_START (0)
#define SOC_HIPACKPHY_UC_DTRSTS_dtrain_active_END (0)
#define SOC_HIPACKPHY_UC_DTRSTS_dm_cmpres_even_START (1)
#define SOC_HIPACKPHY_UC_DTRSTS_dm_cmpres_even_END (1)
#define SOC_HIPACKPHY_UC_DTRSTS_dm_cmpres_odd_START (2)
#define SOC_HIPACKPHY_UC_DTRSTS_dm_cmpres_odd_END (2)
#define SOC_HIPACKPHY_UC_DTRSTS_dm_cmpres_START (3)
#define SOC_HIPACKPHY_UC_DTRSTS_dm_cmpres_END (3)
#define SOC_HIPACKPHY_UC_DTRSTS_dq_cmpres_even_START (4)
#define SOC_HIPACKPHY_UC_DTRSTS_dq_cmpres_even_END (11)
#define SOC_HIPACKPHY_UC_DTRSTS_dq_cmpres_odd_START (12)
#define SOC_HIPACKPHY_UC_DTRSTS_dq_cmpres_odd_END (19)
#define SOC_HIPACKPHY_UC_DTRSTS_cmpres_START (20)
#define SOC_HIPACKPHY_UC_DTRSTS_cmpres_END (27)
#define SOC_HIPACKPHY_UC_DTRSTS_det_all_passed_START (28)
#define SOC_HIPACKPHY_UC_DTRSTS_det_all_passed_END (28)
#define SOC_HIPACKPHY_UC_DTRSTS_det_any_passed_START (29)
#define SOC_HIPACKPHY_UC_DTRSTS_det_any_passed_END (29)
#define SOC_HIPACKPHY_UC_DTRSTS_det_all_failed_START (30)
#define SOC_HIPACKPHY_UC_DTRSTS_det_all_failed_END (30)
#define SOC_HIPACKPHY_UC_DTRSTS_det_any_failed_START (31)
#define SOC_HIPACKPHY_UC_DTRSTS_det_any_failed_END (31)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
