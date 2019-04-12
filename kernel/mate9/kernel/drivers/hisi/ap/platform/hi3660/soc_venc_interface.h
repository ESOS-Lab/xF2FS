#ifndef __SOC_VENC_INTERFACE_H__
#define __SOC_VENC_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_VENC_VEDU_INTSTAT_NS_ADDR(base) ((base) + (0x0000))
#define SOC_VENC_VEDU_INTMASK_NS_ADDR(base) ((base) + (0x0004))
#define SOC_VENC_VEDU_RAWINT_NS_ADDR(base) ((base) + (0x0008))
#define SOC_VENC_VEDU_INTCLR_NS_ADDR(base) ((base) + (0x000C))
#define SOC_VENC_VEDU_START_ADDR(base) ((base) + (0x0010))
#define SOC_VENC_VEDU_MODE_ADDR(base) ((base) + (0x0014))
#define SOC_VENC_VEDU_TILE_SIZE_ADDR(base) ((base) + (0x0018))
#define SOC_VENC_VEDU_SLICE_ADDR(base) ((base) + (0x001C))
#define SOC_VENC_VEDU_QPCFG_ADDR(base) ((base) + (0x0020))
#define SOC_VENC_VEDU_CNTCLR_ADDR(base) ((base) + (0x0024))
#define SOC_VENC_VEDU_FRAMENO_ADDR(base) ((base) + (0x0028))
#define SOC_VENC_VEDU_DBLKCFG_ADDR(base) ((base) + (0x002C))
#define SOC_VENC_VEDU_LOW_POWER_ADDR(base) ((base) + (0x0030))
#define SOC_VENC_VEDU_PICSIZE_PIX_ADDR(base) ((base) + (0x0034))
#define SOC_VENC_VEDU_BP_POS_ADDR(base) ((base) + (0x0038))
#define SOC_VENC_VEDU_TIMEOUT_ADDR(base) ((base) + (0x003C))
#define SOC_VENC_VEDU_OUTSTD_ADDR(base) ((base) + (0x0040))
#define SOC_VENC_VEDU_TIMER_ADDR(base) ((base) + (0x0044))
#define SOC_VENC_VEDU_IDLE_TIMER_ADDR(base) ((base) + (0x0048))
#define SOC_VENC_VEDU_VERSION0_ADDR(base) ((base) + (0x004C))
#define SOC_VENC_VEDU_VERSION1_ADDR(base) ((base) + (0x0050))
#define SOC_VENC_VEDU_FRAME_CNT_ADDR(base) ((base) + (0x0054))
#define SOC_VENC_VEDU_SW_SIZE_ADDR(base) ((base) + (0x0058))
#define SOC_VENC_VEDU_MV_LOAD_ADDR(base) ((base) + (0x005C))
#define SOC_VENC_VEDU_CROSS_TILE_SLC_ADDR(base) ((base) + (0x0060))
#define SOC_VENC_VEDU_MEM_CTRL_ADDR(base) ((base) + (0x0064))
#define SOC_VENC_VEDU_OSD_ENABLE_ADDR(base) ((base) + (0x0068))
#define SOC_VENC_VEDU_OSD_POS_0_ADDR(base) ((base) + (0x006C))
#define SOC_VENC_VEDU_OSD_POS_1_ADDR(base) ((base) + (0x0070))
#define SOC_VENC_VEDU_OSD_POS_2_ADDR(base) ((base) + (0x0074))
#define SOC_VENC_VEDU_OSD_POS_3_ADDR(base) ((base) + (0x0078))
#define SOC_VENC_VEDU_OSD_POS_4_ADDR(base) ((base) + (0x007C))
#define SOC_VENC_VEDU_OSD_POS_5_ADDR(base) ((base) + (0x0080))
#define SOC_VENC_VEDU_OSD_POS_6_ADDR(base) ((base) + (0x0084))
#define SOC_VENC_VEDU_OSD_POS_7_ADDR(base) ((base) + (0x0088))
#define SOC_VENC_VEDU_OSD_SIZE_0_ADDR(base) ((base) + (0x008C))
#define SOC_VENC_VEDU_OSD_SIZE_1_ADDR(base) ((base) + (0x0090))
#define SOC_VENC_VEDU_OSD_SIZE_2_ADDR(base) ((base) + (0x0094))
#define SOC_VENC_VEDU_OSD_SIZE_3_ADDR(base) ((base) + (0x0098))
#define SOC_VENC_VEDU_OSD_SIZE_4_ADDR(base) ((base) + (0x009C))
#define SOC_VENC_VEDU_OSD_SIZE_5_ADDR(base) ((base) + (0x00A0))
#define SOC_VENC_VEDU_OSD_SIZE_6_ADDR(base) ((base) + (0x00A4))
#define SOC_VENC_VEDU_OSD_SIZE_7_ADDR(base) ((base) + (0x00A8))
#define SOC_VENC_VEDU_OSD_LAYERID_ADDR(base) ((base) + (0x00AC))
#define SOC_VENC_VEDU_OSD_QP0_ADDR(base) ((base) + (0x00B0))
#define SOC_VENC_VEDU_OSD_QP1_ADDR(base) ((base) + (0x00B4))
#define SOC_VENC_VEDU_TUNLCELL_ADDR_ADDR(base) ((base) + (0x00B8))
#define SOC_VENC_VEDU_SRC_YADDR_ADDR(base) ((base) + (0x00BC))
#define SOC_VENC_VEDU_SRC_CADDR_ADDR(base) ((base) + (0x00C0))
#define SOC_VENC_VEDU_SRC_VADDR_ADDR(base) ((base) + (0x00C4))
#define SOC_VENC_VEDU_YH_ADDR_ADDR(base) ((base) + (0x00C8))
#define SOC_VENC_VEDU_CH_ADDR_ADDR(base) ((base) + (0x00CC))
#define SOC_VENC_VEDU_STRIDE_ADDR(base) ((base) + (0x00D0))
#define SOC_VENC_VEDU_HEAD_STRIDE_ADDR(base) ((base) + (0x00D4))
#define SOC_VENC_VEDU_REC_YADDR_ADDR(base) ((base) + (0x00D8))
#define SOC_VENC_VEDU_REC_CADDR_ADDR(base) ((base) + (0x00DC))
#define SOC_VENC_VEDU_REC_STRIDE_ADDR(base) ((base) + (0x00E0))
#define SOC_VENC_VEDU_REC_YH_ADDR_ADDR(base) ((base) + (0x00E4))
#define SOC_VENC_VEDU_REC_CH_ADDR_ADDR(base) ((base) + (0x00E8))
#define SOC_VENC_VEDU_REC_HEAD_STRIDE_ADDR(base) ((base) + (0x00EC))
#define SOC_VENC_VEDU_REF_YADDR_ADDR(base) ((base) + (0x00F0))
#define SOC_VENC_VEDU_REF_CADDR_ADDR(base) ((base) + (0x00F4))
#define SOC_VENC_VEDU_REF_STRIDE_ADDR(base) ((base) + (0x00F8))
#define SOC_VENC_VEDU_REF_YH_ADDR_ADDR(base) ((base) + (0x00FC))
#define SOC_VENC_VEDU_REF_CH_ADDR_ADDR(base) ((base) + (0x0100))
#define SOC_VENC_VEDU_REF_HSTRIDE_ADDR(base) ((base) + (0x0104))
#define SOC_VENC_VEDU_PMELD_ADDR_ADDR(base) ((base) + (0x0108))
#define SOC_VENC_VEDU_PMEST_ADDR_ADDR(base) ((base) + (0x010C))
#define SOC_VENC_VEDU_NBI_UPST_ADDR_ADDR(base) ((base) + (0x0110))
#define SOC_VENC_VEDU_NBI_MVST_ADDR_ADDR(base) ((base) + (0x0114))
#define SOC_VENC_VEDU_NBI_MVLD_ADDR_ADDR(base) ((base) + (0x0118))
#define SOC_VENC_VEDU_CURLD_LOWDLY_ADDR(base) ((base) + (0x011c))
#define SOC_VENC_VEDU_RESERVED_1_ADDR(base) ((base) + (0x0120))
#define SOC_VENC_VEDU_STRFMT_ADDR(base) ((base) + (0x0128))
#define SOC_VENC_VEDU_CROP_START_ADDR(base) ((base) + (0x012C))
#define SOC_VENC_VEDU_CROP_END_ADDR(base) ((base) + (0x0130))
#define SOC_VENC_VEDU_SCALE_PARA_ADDR(base) ((base) + (0x0134))
#define SOC_VENC_VEDU_ORI_PICSIZE_ADDR(base) ((base) + (0x0138))
#define SOC_VENC_VEDU_INTRA_INTER_CU_EN_ADDR(base) ((base) + (0x013C))
#define SOC_VENC_VEDU_VLC_CONFIG_ADDR(base) ((base) + (0x0140))
#define SOC_VENC_VEDU_PRE_JUDGE_EXT_EN_ADDR(base) ((base) + (0x0144))
#define SOC_VENC_VEDU_PRE_JUDGE_COST_THR_ADDR(base) ((base) + (0x0148))
#define SOC_VENC_VEDU_IBLK_PRE_MV_THR_ADDR(base) ((base) + (0x014c))
#define SOC_VENC_VEDU_WINDOW_SIZE0_ADDR(base) ((base) + (0x0150))
#define SOC_VENC_VEDU_WINDOW_SIZE1_ADDR(base) ((base) + (0x0154))
#define SOC_VENC_VEDU_WINDOW_SIZE2_ADDR(base) ((base) + (0x0158))
#define SOC_VENC_VEDU_WINDOW_SIZE3_ADDR(base) ((base) + (0x015c))
#define SOC_VENC_VEDU_PIC_STRONG_EN_ADDR(base) ((base) + (0x0160))
#define SOC_VENC_VEDU_STRMBUFLEN0_ADDR(base) ((base) + (0x0164))
#define SOC_VENC_VEDU_STRMBUFLEN1_ADDR(base) ((base) + (0x0168))
#define SOC_VENC_VEDU_STRMBUFLEN2_ADDR(base) ((base) + (0x016c))
#define SOC_VENC_VEDU_STRMBUFLEN3_ADDR(base) ((base) + (0x0170))
#define SOC_VENC_VEDU_STRMBUFLEN4_ADDR(base) ((base) + (0x0174))
#define SOC_VENC_VEDU_STRMBUFLEN5_ADDR(base) ((base) + (0x0178))
#define SOC_VENC_VEDU_STRMBUFLEN6_ADDR(base) ((base) + (0x017c))
#define SOC_VENC_VEDU_STRMBUFLEN7_ADDR(base) ((base) + (0x0180))
#define SOC_VENC_VEDU_STRMBUFLEN8_ADDR(base) ((base) + (0x0184))
#define SOC_VENC_VEDU_STRMBUFLEN9_ADDR(base) ((base) + (0x0188))
#define SOC_VENC_VEDU_STRMBUFLEN10_ADDR(base) ((base) + (0x018c))
#define SOC_VENC_VEDU_STRMBUFLEN11_ADDR(base) ((base) + (0x0190))
#define SOC_VENC_VEDU_STRMBUFLEN12_ADDR(base) ((base) + (0x0194))
#define SOC_VENC_VEDU_STRMBUFLEN13_ADDR(base) ((base) + (0x0198))
#define SOC_VENC_VEDU_STRMBUFLEN14_ADDR(base) ((base) + (0x019c))
#define SOC_VENC_VEDU_STRMBUFLEN15_ADDR(base) ((base) + (0x01a0))
#define SOC_VENC_VEDU_STRMADDR0_ADDR(base) ((base) + (0x01a4))
#define SOC_VENC_VEDU_STRMADDR1_ADDR(base) ((base) + (0x01a8))
#define SOC_VENC_VEDU_STRMADDR2_ADDR(base) ((base) + (0x01ac))
#define SOC_VENC_VEDU_STRMADDR3_ADDR(base) ((base) + (0x01b0))
#define SOC_VENC_VEDU_STRMADDR4_ADDR(base) ((base) + (0x01b4))
#define SOC_VENC_VEDU_STRMADDR5_ADDR(base) ((base) + (0x01b8))
#define SOC_VENC_VEDU_STRMADDR6_ADDR(base) ((base) + (0x01bc))
#define SOC_VENC_VEDU_STRMADDR7_ADDR(base) ((base) + (0x01c0))
#define SOC_VENC_VEDU_STRMADDR8_ADDR(base) ((base) + (0x01c4))
#define SOC_VENC_VEDU_STRMADDR9_ADDR(base) ((base) + (0x01c8))
#define SOC_VENC_VEDU_STRMADDR10_ADDR(base) ((base) + (0x01cc))
#define SOC_VENC_VEDU_STRMADDR11_ADDR(base) ((base) + (0x01d0))
#define SOC_VENC_VEDU_STRMADDR12_ADDR(base) ((base) + (0x01d4))
#define SOC_VENC_VEDU_STRMADDR13_ADDR(base) ((base) + (0x01d8))
#define SOC_VENC_VEDU_STRMADDR14_ADDR(base) ((base) + (0x01dc))
#define SOC_VENC_VEDU_STRMADDR15_ADDR(base) ((base) + (0x01e0))
#define SOC_VENC_VEDU_PARA_ADDR_ADDR(base) ((base) + (0x01e4))
#define SOC_VENC_VEDU_DOWN_FREQ_EN_ADDR(base) ((base) + (0x01e8))
#define SOC_VENC_VEDU_PBLK_PRE_MV_THR_ADDR(base) ((base) + (0x01ec))
#define SOC_VENC_VEDU_INTSTAT_S_ADDR(base) ((base) + (0x01f0))
#define SOC_VENC_VEDU_INTMASK_S_ADDR(base) ((base) + (0x01f4))
#define SOC_VENC_VEDU_RAWINT_S_ADDR(base) ((base) + (0x01f8))
#define SOC_VENC_VEDU_INTCLR_S_ADDR(base) ((base) + (0x01fC))
#define SOC_VENC_VCTRL_ROI_CFG0_ADDR(base) ((base) + (0x0000))
#define SOC_VENC_VCTRL_ROI_CFG1_ADDR(base) ((base) + (0x0004))
#define SOC_VENC_VCTRL_ROI_CFG2_ADDR(base) ((base) + (0x0008))
#define SOC_VENC_VCTRL_ROI_SIZE_0_ADDR(base) ((base) + (0x000C))
#define SOC_VENC_VCTRL_ROI_START_0_ADDR(base) ((base) + (0x0010))
#define SOC_VENC_VCTRL_ROI_SIZE_1_ADDR(base) ((base) + (0x0014))
#define SOC_VENC_VCTRL_ROI_START_1_ADDR(base) ((base) + (0x0018))
#define SOC_VENC_VCTRL_ROI_SIZE_2_ADDR(base) ((base) + (0x001C))
#define SOC_VENC_VCTRL_ROI_START_2_ADDR(base) ((base) + (0x0020))
#define SOC_VENC_VCTRL_ROI_SIZE_3_ADDR(base) ((base) + (0x0024))
#define SOC_VENC_VCTRL_ROI_START_3_ADDR(base) ((base) + (0x0028))
#define SOC_VENC_VCTRL_ROI_SIZE_4_ADDR(base) ((base) + (0x002C))
#define SOC_VENC_VCTRL_ROI_START_4_ADDR(base) ((base) + (0x0030))
#define SOC_VENC_VCTRL_ROI_SIZE_5_ADDR(base) ((base) + (0x0034))
#define SOC_VENC_VCTRL_ROI_START_5_ADDR(base) ((base) + (0x0038))
#define SOC_VENC_VCTRL_ROI_SIZE_6_ADDR(base) ((base) + (0x003C))
#define SOC_VENC_VCTRL_ROI_START_6_ADDR(base) ((base) + (0x0040))
#define SOC_VENC_VCTRL_ROI_SIZE_7_ADDR(base) ((base) + (0x0044))
#define SOC_VENC_VCTRL_ROI_START_7_ADDR(base) ((base) + (0x0048))
#define SOC_VENC_VCTRL_LCU_TARGET_BIT_ADDR(base) ((base) + (0x004C))
#define SOC_VENC_VCTRL_NARROW_THRESHOLD_ADDR(base) ((base) + (0x0050))
#define SOC_VENC_VCTRL_LCU_BASELINE_ADDR(base) ((base) + (0x0054))
#define SOC_VENC_VCTRL_RESERVED0_ADDR(base) ((base) + (0x0058))
#define SOC_VENC_VCTRL_PIPE_STATE_ADDR(base) ((base) + (0x0060))
#define SOC_VENC_VCTRL_MODULE_STATE_ADDR(base) ((base) + (0x0064))
#define SOC_VENC_VCTRL_CUR_TILE_INFO_0_ADDR(base) ((base) + (0x0068))
#define SOC_VENC_VCTRL_CUR_TILE_INFO_1_ADDR(base) ((base) + (0x006C))
#define SOC_VENC_VCTRL_CUR_TILE_INFO_2_ADDR(base) ((base) + (0x0070))
#define SOC_VENC_VCTRL_SLICE_INFO_ADDR(base) ((base) + (0x0074))
#define SOC_VENC_VCTRL_CTB_PIPE_S_COORD_ADDR(base) ((base) + (0x0078))
#define SOC_VENC_VCTRL_RESERVED1_ADDR(base) ((base) + (0x007C))
#define SOC_VENC_VCTRL_NORM_TR32X32_COEFF_DENOISE_ADDR(base) ((base) + (0x0080))
#define SOC_VENC_VCTRL_NORM_TR16X16_COEFF_DENOISE_ADDR(base) ((base) + (0x0084))
#define SOC_VENC_VCTRL_SKIN_TR32X32_COEFF_DENOISE_ADDR(base) ((base) + (0x0088))
#define SOC_VENC_VCTRL_SKIN_TR16X16_COEFF_DENOISE_ADDR(base) ((base) + (0x008C))
#define SOC_VENC_VCTRL_STATIC_TR32X32_COEFF_DENOISE_ADDR(base) ((base) + (0x0090))
#define SOC_VENC_VCTRL_STATIC_TR16X16_COEFF_DENOISE_ADDR(base) ((base) + (0x0094))
#define SOC_VENC_VCTRL_HEDGE_TR32X32_COEFF_DENOISE_ADDR(base) ((base) + (0x0098))
#define SOC_VENC_VCTRL_HEDGE_TR16X16_COEFF_DENOISE_ADDR(base) ((base) + (0x009C))
#define SOC_VENC_VCTRL_NORMAL_INTRA_RDO_FACTOR_ADDR(base) ((base) + (0x00A0))
#define SOC_VENC_VCTRL_NORMAL_MRG_RDO_FACTOR_ADDR(base) ((base) + (0x00A4))
#define SOC_VENC_VCTRL_NORMAL_FME_RDO_FACTOR_ADDR(base) ((base) + (0x00A8))
#define SOC_VENC_VCTRL_SKIN_REGION_INTRA_RDO_FACTOR_ADDR(base) ((base) + (0x00AC))
#define SOC_VENC_VCTRL_SKIN_REGION_MRG_RDO_FACTOR_ADDR(base) ((base) + (0x00B0))
#define SOC_VENC_VCTRL_SKIN_REGION_FME_RDO_FACTOR_ADDR(base) ((base) + (0x00B4))
#define SOC_VENC_VCTRL_HIGH_EDGE_INTRA_RDO_FACTOR_ADDR(base) ((base) + (0x00B8))
#define SOC_VENC_VCTRL_HIGH_EDGE_MRG_RDO_FACTOR_ADDR(base) ((base) + (0x00BC))
#define SOC_VENC_VCTRL_HIGH_EDGE_FME_RDO_FACTOR_ADDR(base) ((base) + (0x00C0))
#define SOC_VENC_VCTRL_RESERVED2_ADDR(base) ((base) + (0x00C4))
#define SOC_VENC_VCTRL_PERF_TOTAL_PIPE_ADDR(base) ((base) + (0x0100))
#define SOC_VENC_VCTRL_PERF_TOTAL_PMELD_ADDR(base) ((base) + (0x0104))
#define SOC_VENC_VCTRL_PERF_TOTAL_NBI_ADDR(base) ((base) + (0x0108))
#define SOC_VENC_VCTRL_PERF_TOTAL_QPG_ADDR(base) ((base) + (0x010C))
#define SOC_VENC_VCTRL_PERF_TOTAL_PME_ADDR(base) ((base) + (0x0110))
#define SOC_VENC_VCTRL_PERF_TOTAL_REFLD_LUMA_ADDR(base) ((base) + (0x0114))
#define SOC_VENC_VCTRL_PERF_TOTAL_REFLD_CHMA_ADDR(base) ((base) + (0x0118))
#define SOC_VENC_VCTRL_PERF_TOTAL_CURLD_ADDR(base) ((base) + (0x011C))
#define SOC_VENC_VCTRL_PERF_TOTAL_IME_ADDR(base) ((base) + (0x0120))
#define SOC_VENC_VCTRL_PERF_TOTAL_PINTRA_ADDR(base) ((base) + (0x0124))
#define SOC_VENC_VCTRL_PERF_TOTAL_MRG_ADDR(base) ((base) + (0x0128))
#define SOC_VENC_VCTRL_PERF_TOTAL_FME_ADDR(base) ((base) + (0x012C))
#define SOC_VENC_VCTRL_PERF_TOTAL_PMV_ADDR(base) ((base) + (0x0130))
#define SOC_VENC_VCTRL_PERF_TOTAL_SEL_ADDR(base) ((base) + (0x0134))
#define SOC_VENC_VCTRL_PERF_TOTAL_INTRA_ADDR(base) ((base) + (0x0138))
#define SOC_VENC_VCTRL_PERF_TOTAL_SAO_ADDR(base) ((base) + (0x013C))
#define SOC_VENC_VCTRL_PERF_TOTAL_DBLK_ADDR(base) ((base) + (0x0140))
#define SOC_VENC_VCTRL_PERF_TOTAL_PACK_ADDR(base) ((base) + (0x0144))
#define SOC_VENC_VCTRL_PERF_TOTAL_CABAC_ADDR(base) ((base) + (0x0148))
#define SOC_VENC_VCTRL_OVERHEAD_PIPE_ADDR(base) ((base) + (0x014C))
#define SOC_VENC_VCTRL_OVERHEAD_PMELD_ADDR(base) ((base) + (0x0150))
#define SOC_VENC_VCTRL_OVERHEAD_NBI_ADDR(base) ((base) + (0x0154))
#define SOC_VENC_VCTRL_OVERHEAD_QPG_ADDR(base) ((base) + (0x0158))
#define SOC_VENC_VCTRL_OVERHEAD_PME_ADDR(base) ((base) + (0x015C))
#define SOC_VENC_VCTRL_OVERHEAD_REFLD_LUMA_ADDR(base) ((base) + (0x0160))
#define SOC_VENC_VCTRL_OVERHEAD_REFLD_CHMA_ADDR(base) ((base) + (0x0164))
#define SOC_VENC_VCTRL_OVERHEAD_CURLD_ADDR(base) ((base) + (0x0168))
#define SOC_VENC_VCTRL_OVERHEAD_IME_ADDR(base) ((base) + (0x016C))
#define SOC_VENC_VCTRL_OVERHEAD_PINTRA_ADDR(base) ((base) + (0x0170))
#define SOC_VENC_VCTRL_OVERHEAD_MRG_ADDR(base) ((base) + (0x0174))
#define SOC_VENC_VCTRL_OVERHEAD_FME_ADDR(base) ((base) + (0x0178))
#define SOC_VENC_VCTRL_OVERHEAD_PMV_ADDR(base) ((base) + (0x017C))
#define SOC_VENC_VCTRL_OVERHEAD_SEL_ADDR(base) ((base) + (0x0180))
#define SOC_VENC_VCTRL_OVERHEAD_INTRA_ADDR(base) ((base) + (0x0184))
#define SOC_VENC_VCTRL_OVERHEAD_SAO_ADDR(base) ((base) + (0x0188))
#define SOC_VENC_VCTRL_OVERHEAD_DBLK_ADDR(base) ((base) + (0x018C))
#define SOC_VENC_VCTRL_OVERHEAD_PACK_ADDR(base) ((base) + (0x0190))
#define SOC_VENC_VCTRL_OVERHEAD_CABAC_ADDR(base) ((base) + (0x0194))
#define SOC_VENC_VCTRL_FME_CU_INFO_LOW_CNT_ADDR(base) ((base) + (0x0198))
#define SOC_VENC_VCTRL_FME_CU_INFO_HIGH_CNT_ADDR(base) ((base) + (0x019c))
#define SOC_VENC_VCTRL_INTRA_LOW_PWR_CNT_ADDR(base) ((base) + (0x01a0))
#define SOC_VENC_VCTRL_INTER_LOW_PWR_CNT_ADDR(base) ((base) + (0x01a4))
#define SOC_VENC_VCTRL_CLK_VEDU_FRM_CYC_CNT_ADDR(base) ((base) + (0x01a8))
#define SOC_VENC_VCTRL_RESERVED3_ADDR(base) ((base) + (0x01aC))
#define SOC_VENC_CURLD_RESERVED0_ADDR(base) ((base) + (0x0000))
#define SOC_VENC_PME_SW_EN_ADDR(base) ((base) + (0x0000))
#define SOC_VENC_PME_SW_TR0_ADDR(base) ((base) + (0x0004))
#define SOC_VENC_PME_SW_TR1_ADDR(base) ((base) + (0x0008))
#define SOC_VENC_PME_SW_TR2_ADDR(base) ((base) + (0x000C))
#define SOC_VENC_PME_RESERVED0_ADDR(base) ((base) + (0x0010))
#define SOC_VENC_PME_TR_WEIGHTX_ADDR(base) ((base) + (0x0014))
#define SOC_VENC_PME_TR_WEIGHTY_ADDR(base) ((base) + (0x0018))
#define SOC_VENC_PME_SR_WEIGHT_ADDR(base) ((base) + (0x001C))
#define SOC_VENC_PME_RESERVED1_ADDR(base) ((base) + (0x0020))
#define SOC_VENC_pme_iblk_lcu_num_ADDR(base) ((base) + (0x0028))
#define SOC_VENC_pme_pblk_lcu_num_ADDR(base) ((base) + (0x002C))
#define SOC_VENC_pme_skin_thr_ADDR(base) ((base) + (0x0030))
#define SOC_VENC_PME_RESERVED2_ADDR(base) ((base) + (0x0034))
#define SOC_VENC_pme_high_edge_ADDR(base) ((base) + (0x003C))
#define SOC_VENC_PME_RESERVED3_ADDR(base) ((base) + (0x0040))
#define SOC_VENC_REFLD_CMD_CFG_ADDR(base) ((base) + (0x000))
#define SOC_VENC_REFLD_RESERVED0_ADDR(base) ((base) + (0x004))
#define SOC_VENC_REFLD_TBL_ADDR_ADDR(base) ((base) + (0x010))
#define SOC_VENC_REFLD_TBL_RD_DATA0_ADDR(base) ((base) + (0x014))
#define SOC_VENC_REFLD_TBL_RD_DATA1_ADDR(base) ((base) + (0x018))
#define SOC_VENC_REFLD_TBL_RD_DATA2_ADDR(base) ((base) + (0x01C))
#define SOC_VENC_REFLD_TBL_RD_DATA3_ADDR(base) ((base) + (0x020))
#define SOC_VENC_REFLD_TBL_RD_DATA4_ADDR(base) ((base) + (0x024))
#define SOC_VENC_REFLD_RESERVED1_ADDR(base) ((base) + (0x028))
#define SOC_VENC_REFLD_LOCK_STATE_ADDR(base) ((base) + (0x034))
#define SOC_VENC_REFLD_CMD_STATE_ADDR(base) ((base) + (0x038))
#define SOC_VENC_REFLD_MAG_STATE_ADDR(base) ((base) + (0x03C))
#define SOC_VENC_REFLD_DARB_STATE_ADDR(base) ((base) + (0x040))
#define SOC_VENC_REFLD_BUF_STATE0_ADDR(base) ((base) + (0x044))
#define SOC_VENC_REFLD_BUF_STATE1_ADDR(base) ((base) + (0x048))
#define SOC_VENC_REFLD_DATA_STATE0_ADDR(base) ((base) + (0x04C))
#define SOC_VENC_REFLD_DATA_STATE1_ADDR(base) ((base) + (0x050))
#define SOC_VENC_REFLD_DATA_STATE2_ADDR(base) ((base) + (0x054))
#define SOC_VENC_REFLD_DATA_STATE3_ADDR(base) ((base) + (0x058))
#define SOC_VENC_REFLD_ERROR_STATE_ADDR(base) ((base) + (0x05C))
#define SOC_VENC_REFLD_PRE_STATE_ADDR(base) ((base) + (0x060))
#define SOC_VENC_REFLD_RESERVED2_ADDR(base) ((base) + (0x064))
#define SOC_VENC_INTER_MODE_ADDR(base) ((base) + (0x0000))
#define SOC_VENC_IME_RESERVED0_ADDR(base) ((base) + (0x0004))
#define SOC_VENC_IME_CFG1_ADDR(base) ((base) + (0x0008))
#define SOC_VENC_IME_CFG2_ADDR(base) ((base) + (0x000C))
#define SOC_VENC_IME_CFG3_ADDR(base) ((base) + (0x0010))
#define SOC_VENC_IME_CFG4_ADDR(base) ((base) + (0x0014))
#define SOC_VENC_IME_THR0_ADDR(base) ((base) + (0x0018))
#define SOC_VENC_IME_THR1_ADDR(base) ((base) + (0x001C))
#define SOC_VENC_IME_RDOCFG_ADDR(base) ((base) + (0x0020))
#define SOC_VENC_IME_FME_LPOW_THR_ADDR(base) ((base) + (0x0024))
#define SOC_VENC_IME_RESERVED1_ADDR(base) ((base) + (0x0028))
#define SOC_VENC_QPG_RESERVED0_ADDR(base) ((base) + (0x00))
#define SOC_VENC_QPG_MAX_MIN_QP_ADDR(base) ((base) + (0x04))
#define SOC_VENC_QPG_AVERAGE_LCU_BITS_ADDR(base) ((base) + (0x08))
#define SOC_VENC_QPG_QP_DELTA_ADDR(base) ((base) + (0x0C))
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG0_ADDR(base) ((base) + (0x10))
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG1_ADDR(base) ((base) + (0x14))
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG2_ADDR(base) ((base) + (0x18))
#define SOC_VENC_QPG_RESERVED1_ADDR(base) ((base) + (0x1C))
#define SOC_VENC_QPG_STRONG_EDGE_QP_DELTA_ADDR(base) ((base) + (0x20))
#define SOC_VENC_QPG_RESERVED2_ADDR(base) ((base) + (0x24))
#define SOC_VENC_QPG_SKIN_QP_DELTA_ADDR(base) ((base) + (0x28))
#define SOC_VENC_QPG_RESERVED3_ADDR(base) ((base) + (0x2C))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG00_ADDR(base) ((base) + (0x50))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG01_ADDR(base) ((base) + (0x54))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG02_ADDR(base) ((base) + (0x58))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG03_ADDR(base) ((base) + (0x5C))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG04_ADDR(base) ((base) + (0x60))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG05_ADDR(base) ((base) + (0x64))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG06_ADDR(base) ((base) + (0x68))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG07_ADDR(base) ((base) + (0x6C))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG08_ADDR(base) ((base) + (0x70))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG09_ADDR(base) ((base) + (0x74))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG10_ADDR(base) ((base) + (0x78))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG11_ADDR(base) ((base) + (0x7C))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG12_ADDR(base) ((base) + (0x80))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG13_ADDR(base) ((base) + (0x84))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG14_ADDR(base) ((base) + (0x88))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG15_ADDR(base) ((base) + (0x8C))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG16_ADDR(base) ((base) + (0x90))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG17_ADDR(base) ((base) + (0x94))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG18_ADDR(base) ((base) + (0x98))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG19_ADDR(base) ((base) + (0x9C))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG20_ADDR(base) ((base) + (0xA0))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG21_ADDR(base) ((base) + (0xA4))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG22_ADDR(base) ((base) + (0xA8))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG23_ADDR(base) ((base) + (0xAC))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG24_ADDR(base) ((base) + (0xB0))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG25_ADDR(base) ((base) + (0xB4))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG26_ADDR(base) ((base) + (0xB8))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG27_ADDR(base) ((base) + (0xBC))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG28_ADDR(base) ((base) + (0xC0))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG29_ADDR(base) ((base) + (0xC4))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG30_ADDR(base) ((base) + (0xC8))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG31_ADDR(base) ((base) + (0xCC))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG32_ADDR(base) ((base) + (0xD0))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG33_ADDR(base) ((base) + (0xD4))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG34_ADDR(base) ((base) + (0xD8))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG35_ADDR(base) ((base) + (0xDC))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG36_ADDR(base) ((base) + (0xE0))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG37_ADDR(base) ((base) + (0xE4))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG38_ADDR(base) ((base) + (0xE8))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG39_ADDR(base) ((base) + (0xEC))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG40_ADDR(base) ((base) + (0xF0))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG41_ADDR(base) ((base) + (0xF4))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG42_ADDR(base) ((base) + (0xF8))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG43_ADDR(base) ((base) + (0xFC))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG44_ADDR(base) ((base) + (0x100))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG45_ADDR(base) ((base) + (0x104))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG46_ADDR(base) ((base) + (0x108))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG47_ADDR(base) ((base) + (0x10C))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG48_ADDR(base) ((base) + (0x110))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG49_ADDR(base) ((base) + (0x114))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG50_ADDR(base) ((base) + (0x118))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG51_ADDR(base) ((base) + (0x11C))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG52_ADDR(base) ((base) + (0x120))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG53_ADDR(base) ((base) + (0x124))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG54_ADDR(base) ((base) + (0x128))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG55_ADDR(base) ((base) + (0x12C))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG56_ADDR(base) ((base) + (0x130))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG57_ADDR(base) ((base) + (0x134))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG58_ADDR(base) ((base) + (0x138))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG59_ADDR(base) ((base) + (0x13C))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG60_ADDR(base) ((base) + (0x140))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG61_ADDR(base) ((base) + (0x144))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG62_ADDR(base) ((base) + (0x148))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG63_ADDR(base) ((base) + (0x14C))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG64_ADDR(base) ((base) + (0x150))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG65_ADDR(base) ((base) + (0x154))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG66_ADDR(base) ((base) + (0x158))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG67_ADDR(base) ((base) + (0x15C))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG68_ADDR(base) ((base) + (0x160))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG69_ADDR(base) ((base) + (0x164))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG70_ADDR(base) ((base) + (0x168))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG71_ADDR(base) ((base) + (0x16C))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG72_ADDR(base) ((base) + (0x170))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG73_ADDR(base) ((base) + (0x174))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG74_ADDR(base) ((base) + (0x178))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG75_ADDR(base) ((base) + (0x17C))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG76_ADDR(base) ((base) + (0x180))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG77_ADDR(base) ((base) + (0x184))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG78_ADDR(base) ((base) + (0x188))
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG79_ADDR(base) ((base) + (0x18C))
#define SOC_VENC_QPG_RESERVED4_ADDR(base) ((base) + (0x190))
#define SOC_VENC_QPG_VERSION_ADDR(base) ((base) + (0x1A0))
#define SOC_VENC_QPG_RESERVED5_ADDR(base) ((base) + (0x1A4))
#define SOC_VENC_MRG_RESERVED0_ADDR(base) ((base) + (0x00))
#define SOC_VENC_MRG_INT_GTCK_CNT_ADDR(base) ((base) + (0x20))
#define SOC_VENC_MRG_FRAC_GTCK_CNT_ADDR(base) ((base) + (0x24))
#define SOC_VENC_MRG_RESERVED1_ADDR(base) ((base) + (0x28))
#define SOC_VENC_MRG_PU0_INFO_ADDR(base) ((base) + (0x30))
#define SOC_VENC_MRG_PU1_INFO_ADDR(base) ((base) + (0x34))
#define SOC_VENC_MRG_PU2_INFO_ADDR(base) ((base) + (0x38))
#define SOC_VENC_MRG_PU3_INFO_ADDR(base) ((base) + (0x3C))
#define SOC_VENC_MRG_PMV_CNT_ADDR(base) ((base) + (0x40))
#define SOC_VENC_MRG_FMV_CNT_ADDR(base) ((base) + (0x44))
#define SOC_VENC_MRG_LCU_STA_ADDR(base) ((base) + (0x48))
#define SOC_VENC_MRG_LCU_INFO_STA_ADDR(base) ((base) + (0x4C))
#define SOC_VENC_MRG_RESERVED2_ADDR(base) ((base) + (0x50))
#define SOC_VENC_FME_RESERVED0_ADDR(base) ((base) + (0x00))
#define SOC_VENC_FME_GTCK_CNT_ADDR(base) ((base) + (0x20))
#define SOC_VENC_FME_RESERVED1_ADDR(base) ((base) + (0x24))
#define SOC_VENC_FME_PMV_CNT_ADDR(base) ((base) + (0x30))
#define SOC_VENC_FME_IMV_CNT_ADDR(base) ((base) + (0x34))
#define SOC_VENC_FME_FME_STA_ADDR(base) ((base) + (0x38))
#define SOC_VENC_FME_RESERVED2_ADDR(base) ((base) + (0x3C))
#define SOC_VENC_INTER_AVAIL_ADDR(base) ((base) + (0x0000))
#define SOC_VENC_INTRA_SMOOTH_ADDR(base) ((base) + (0x0004))
#define SOC_VENC_INTRA_RESERVED0_ADDR(base) ((base) + (0x0008))
#define SOC_VENC_INTRA_BIT_WEIGHT_ADDR(base) ((base) + (0x000C))
#define SOC_VENC_INTRA_RESERVED1_ADDR(base) ((base) + (0x0010))
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_ADDR(base) ((base) + (0x0020))
#define SOC_VENC_INTRA_CHNL4_ANG_1EN_ADDR(base) ((base) + (0x0024))
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_ADDR(base) ((base) + (0x0028))
#define SOC_VENC_INTRA_CHNL8_ANG_1EN_ADDR(base) ((base) + (0x002C))
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_ADDR(base) ((base) + (0x0030))
#define SOC_VENC_INTRA_CHNL16_ANG_1EN_ADDR(base) ((base) + (0x0034))
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_ADDR(base) ((base) + (0x0038))
#define SOC_VENC_INTRA_CHNL32_ANG_1EN_ADDR(base) ((base) + (0x003C))
#define SOC_VENC_INTRA_DFX_FRM_CNT_ADDR(base) ((base) + (0x0040))
#define SOC_VENC_INTRA_DFX_LCU_CNT_ADDR(base) ((base) + (0x0044))
#define SOC_VENC_INTRA_DFX_LCU_END_CNT_ADDR(base) ((base) + (0x0048))
#define SOC_VENC_INTRA_DFX_LCU_CYCLE_CNT_ADDR(base) ((base) + (0x004C))
#define SOC_VENC_INTRA_DFX_NBI_RD_CNT_ADDR(base) ((base) + (0x0050))
#define SOC_VENC_INTRA_DFX_NBI_WR_CNT_ADDR(base) ((base) + (0x0054))
#define SOC_VENC_RESERVED2_ADDR(base) ((base) + (0x0058))
#define SOC_VENC_INTRA_DFX_CU8_DONE_CNT_ADDR(base) ((base) + (0x0060))
#define SOC_VENC_INTRA_DFX_CU16_DONE_CNT_ADDR(base) ((base) + (0x0064))
#define SOC_VENC_INTRA_DFX_CU32_DONE_CNT_ADDR(base) ((base) + (0x0068))
#define SOC_VENC_INTRA_DFX_CU64_DONE_CNT_ADDR(base) ((base) + (0x006C))
#define SOC_VENC_INTRA_DFX_CU8_RDO_CNT_ADDR(base) ((base) + (0x0070))
#define SOC_VENC_INTRA_DFX_CU16_RDO_CNT_ADDR(base) ((base) + (0x0074))
#define SOC_VENC_INTRA_DFX_CU32_RDO_CNT_ADDR(base) ((base) + (0x0078))
#define SOC_VENC_RESERVED3_ADDR(base) ((base) + (0x007C))
#define SOC_VENC_INTRA_DFX_CU8_FSM_ADDR(base) ((base) + (0x0080))
#define SOC_VENC_INTRA_DFX_CU16_FSM_ADDR(base) ((base) + (0x0084))
#define SOC_VENC_INTRA_DFX_CU32_FSM_ADDR(base) ((base) + (0x0088))
#define SOC_VENC_RESERVED4_ADDR(base) ((base) + (0x008C))
#define SOC_VENC_INTRA_DFX_PCM_PWR__TYPE_ADDR(base) ((base) + (0x0090))
#define SOC_VENC_INTRA_DFX_HEAD_BIT_WEIGHT_ADDR(base) ((base) + (0x0094))
#define SOC_VENC_INTRA_DFX_RDO_WEIGHT_ADDR(base) ((base) + (0x0098))
#define SOC_VENC_INTRA_DFX_BLK_CNT_ADDR(base) ((base) + (0x009C))
#define SOC_VENC_RESERVED5_ADDR(base) ((base) + (0x00A0))
#define SOC_VENC_PMV_CNT_FRAME_ADDR(base) ((base) + (0x00))
#define SOC_VENC_PMV_TMV_0_ADDR(base) ((base) + (0x04))
#define SOC_VENC_PMV_TMV_1_ADDR(base) ((base) + (0x08))
#define SOC_VENC_PMV_TMV_2_ADDR(base) ((base) + (0x0C))
#define SOC_VENC_PMV_TMV_3_ADDR(base) ((base) + (0x10))
#define SOC_VENC_PMV_TMV_4_ADDR(base) ((base) + (0x14))
#define SOC_VENC_PMV_TMV_5_ADDR(base) ((base) + (0x18))
#define SOC_VENC_PMV_TMV_6_ADDR(base) ((base) + (0x1C))
#define SOC_VENC_PMV_TMV_7_ADDR(base) ((base) + (0x20))
#define SOC_VENC_PMV_TMV_8_ADDR(base) ((base) + (0x24))
#define SOC_VENC_PMV_TMV_9_ADDR(base) ((base) + (0x28))
#define SOC_VENC_PMV_TMV_10_ADDR(base) ((base) + (0x2C))
#define SOC_VENC_PMV_TMV_11_ADDR(base) ((base) + (0x30))
#define SOC_VENC_PMV_TMV_12_ADDR(base) ((base) + (0x34))
#define SOC_VENC_PMV_TMV_13_ADDR(base) ((base) + (0x38))
#define SOC_VENC_PMV_TMV_14_ADDR(base) ((base) + (0x3C))
#define SOC_VENC_PMV_TMV_15_ADDR(base) ((base) + (0x40))
#define SOC_VENC_PMV_TMV_16_ADDR(base) ((base) + (0x44))
#define SOC_VENC_PMV_TMV_17_ADDR(base) ((base) + (0x48))
#define SOC_VENC_PMV_TMV_18_ADDR(base) ((base) + (0x4C))
#define SOC_VENC_PMV_TMV_19_ADDR(base) ((base) + (0x50))
#define SOC_VENC_PMV_TMV_EN_ADDR(base) ((base) + (0x54))
#define SOC_VENC_PMV_RESERVED0_ADDR(base) ((base) + (0x56))
#define SOC_VENC_TQITQ_QSCALINGLIST_ADDR(base) ((base) + (0x00))
#define SOC_VENC_TQITQ_LCU_COUNT_ADDR(base) ((base) + (0x04))
#define SOC_VENC_TQITQ_RESERVED0_ADDR(base) ((base) + (0x08))
#define SOC_VENC_TQITQ_TU4GATE_ENCNT_ADDR(base) ((base) + (0x10))
#define SOC_VENC_TQITQ_DST4GATE_ENCNT_ADDR(base) ((base) + (0x14))
#define SOC_VENC_TQITQ_TU8GATE_ENCNT_ADDR(base) ((base) + (0x18))
#define SOC_VENC_TQITQ_TU16GATE_ENCNT_ADDR(base) ((base) + (0x1C))
#define SOC_VENC_TQITQ_TU32GATE_ENCNT_ADDR(base) ((base) + (0x20))
#define SOC_VENC_TQITQ_RESERVED1_ADDR(base) ((base) + (0x24))
#define SOC_VENC_SEL_OPT_8X8_CNT_ADDR(base) ((base) + (0x000))
#define SOC_VENC_SEL_INTRA_OPT_8X8_CNT_ADDR(base) ((base) + (0x004))
#define SOC_VENC_SEL_INTRA_NORMAL_OPT_8X8_CNT_ADDR(base) ((base) + (0x008))
#define SOC_VENC_SEL_INTRA_PCM_OPT_8X8_CNT_ADDR(base) ((base) + (0x00C))
#define SOC_VENC_SEL_INTER_OPT_8X8_CNT_ADDR(base) ((base) + (0x010))
#define SOC_VENC_SEL_INTER_FME_OPT_8X8_CNT_ADDR(base) ((base) + (0x014))
#define SOC_VENC_SEL_INTER_MERGE_OPT_8X8_CNT_ADDR(base) ((base) + (0x018))
#define SOC_VENC_SEL_INTER_SKIP_OPT_8X8_CNT_ADDR(base) ((base) + (0x01C))
#define SOC_VENC_SEL_OPT_16X16_CNT_ADDR(base) ((base) + (0x020))
#define SOC_VENC_SEL_INTRA_OPT_16X16_CNT_ADDR(base) ((base) + (0x024))
#define SOC_VENC_SEL_OPT_4X4_CNT_ADDR(base) ((base) + (0x028))
#define SOC_VENC_SEL_RESERVED0_ADDR(base) ((base) + (0x02C))
#define SOC_VENC_SEL_INTER_OPT_16X16_CNT_ADDR(base) ((base) + (0x030))
#define SOC_VENC_SEL_INTER_FME_OPT_16X16_CNT_ADDR(base) ((base) + (0x034))
#define SOC_VENC_SEL_INTER_MERGE_OPT_16X16_CNT_ADDR(base) ((base) + (0x038))
#define SOC_VENC_SEL_INTER_SKIP_OPT_16X16_CNT_ADDR(base) ((base) + (0x03C))
#define SOC_VENC_SEL_OPT_32X32_CNT_ADDR(base) ((base) + (0x040))
#define SOC_VENC_SEL_INTRA_OPT_32X32_CNT_ADDR(base) ((base) + (0x044))
#define SOC_VENC_SEL_RESERVED1_ADDR(base) ((base) + (0x048))
#define SOC_VENC_SEL_INTER_OPT_32X32_CNT_ADDR(base) ((base) + (0x04C))
#define SOC_VENC_SEL_INTER_FME_OPT_32X32_CNT_ADDR(base) ((base) + (0x050))
#define SOC_VENC_SEL_INTER_MERGE_OPT_32X32_CNT_ADDR(base) ((base) + (0x054))
#define SOC_VENC_SEL_INTER_SKIP_OPT_32X32_CNT_ADDR(base) ((base) + (0x058))
#define SOC_VENC_SEL_OPT_64X64_CNT_ADDR(base) ((base) + (0x05C))
#define SOC_VENC_SEL_INTER_FME_OPT_64X64_CNT_ADDR(base) ((base) + (0x060))
#define SOC_VENC_SEL_INTER_MERGE_OPT_64X64_CNT_ADDR(base) ((base) + (0x064))
#define SOC_VENC_SEL_INTER_SKIP_OPT_64X64_CNT_ADDR(base) ((base) + (0x068))
#define SOC_VENC_SEL_TOTAL_LUMA_QP_ADDR(base) ((base) + (0x06C))
#define SOC_VENC_SEL_RESERVED2_ADDR(base) ((base) + (0x070))
#define SOC_VENC_SEL_VERSION_ADDR(base) ((base) + (0x080))
#define SOC_VENC_SEL_RESERVED3_ADDR(base) ((base) + (0x084))
#define SOC_VENC_DBLK_RESERVED0_ADDR(base) ((base) + (0x00))
#define SOC_VENC_dblk_frame_cnt_ADDR(base) ((base) + (0x80))
#define SOC_VENC_dblk_lcu_cnt_ADDR(base) ((base) + (0x84))
#define SOC_VENC_dblk_dfx_flag_ADDR(base) ((base) + (0x88))
#define SOC_VENC_DBLK_RESERVED1_ADDR(base) ((base) + (0x8C))
#define SOC_VENC_SAO_RESERVED0_ADDR(base) ((base) + (0x00))
#define SOC_VENC_SAO_FSM_DFX_ADDR(base) ((base) + (0x74))
#define SOC_VENC_SAO_LCU_CNT_ADDR(base) ((base) + (0x78))
#define SOC_VENC_SAO_OFF_NUM_ADDR(base) ((base) + (0x7C))
#define SOC_VENC_SAO_RESERVED1_ADDR(base) ((base) + (0x80))
#define SOC_VENC_PACK_DFX_0_ADDR(base) ((base) + (0x0000))
#define SOC_VENC_PACK_CU_PARAMETER_ADDR(base) ((base) + (0x0004))
#define SOC_VENC_PACK_PCM_PARAMETER_ADDR(base) ((base) + (0x0008))
#define SOC_VENC_PACK_TF_SKIP_FLAG_ADDR(base) ((base) + (0x000C))
#define SOC_VENC_PACK_DFX_1_ADDR(base) ((base) + (0x0010))
#define SOC_VENC_PACK_DFX_ERR_CNT_ADDR(base) ((base) + (0x0014))
#define SOC_VENC_PACK_DFX_FSM_ADDR(base) ((base) + (0x0018))
#define SOC_VENC_PACK_DFX_FIFO_STATE_ADDR(base) ((base) + (0x001C))
#define SOC_VENC_PACK_RESERVED2_ADDR(base) ((base) + (0x0020))
#define SOC_VENC_CABAC_GLB_CFG_ADDR(base) ((base) + (0x000))
#define SOC_VENC_CABAC_SLCHDR_SIZE_ADDR(base) ((base) + (0x004))
#define SOC_VENC_CABAC_SLCHDR_PART1_ADDR(base) ((base) + (0x008))
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG1_ADDR(base) ((base) + (0x00C))
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG2_ADDR(base) ((base) + (0x010))
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG3_ADDR(base) ((base) + (0x014))
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG4_ADDR(base) ((base) + (0x018))
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG5_ADDR(base) ((base) + (0x01C))
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG6_ADDR(base) ((base) + (0x020))
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG7_ADDR(base) ((base) + (0x024))
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG8_ADDR(base) ((base) + (0x028))
#define SOC_VENC_CABAC_RESERVED0_ADDR(base) ((base) + (0x02C))
#define SOC_VENC_CABAC_PIC_STRMSIZE_ADDR(base) ((base) + (0x080))
#define SOC_VENC_CABAC_RESERVED1_ADDR(base) ((base) + (0x084))
#define SOC_VENC_CABAC_DFX_0_ADDR(base) ((base) + (0x0100))
#define SOC_VENC_CABAC_DFX_1_ADDR(base) ((base) + (0x0104))
#define SOC_VENC_CABAC_DFX_2_ADDR(base) ((base) + (0x0108))
#define SOC_VENC_CABAC_DFX_3_ADDR(base) ((base) + (0x010c))
#define SOC_VENC_CABAC_DFX_4_ADDR(base) ((base) + (0x0110))
#define SOC_VENC_CABAC_DFX_5_ADDR(base) ((base) + (0x0114))
#define SOC_VENC_CABAC_RESERVED2_ADDR(base) ((base) + (0x084))
#define SOC_VENC_PMELD_RESERVED0_ADDR(base) ((base) + (0x0000))
#define SOC_VENC_PMEST_DFX_0_ADDR(base) ((base) + (0x0000))
#define SOC_VENC_PMEST_DFX_1_ADDR(base) ((base) + (0x0004))
#define SOC_VENC_PMEST_DFX_2_ADDR(base) ((base) + (0x0008))
#define SOC_VENC_PMEST_RESERVED0_ADDR(base) ((base) + (0x000C))
#define SOC_VENC_NBI_RESERVED0_ADDR(base) ((base) + (0x0000))
#define SOC_VENC_NBI_STATE_ADDR(base) ((base) + (0x0010))
#define SOC_VENC_NBI_STATE_UP_ADDR(base) ((base) + (0x0014))
#define SOC_VENC_NBI_RESERVED1_ADDR(base) ((base) + (0x0018))
#define SOC_VENC_NBI_LCU_COUNT_ADDR(base) ((base) + (0x0020))
#define SOC_VENC_NBI_TILE_COUNT_ADDR(base) ((base) + (0x0024))
#define SOC_VENC_NBI_FRAME_COUNT_ADDR(base) ((base) + (0x0028))
#define SOC_VENC_NBI_RESERVED2_ADDR(base) ((base) + (0x002C))
#define SOC_VENC_RECST_DDR_CROSS_ADDR(base) ((base) + (0x00))
#define SOC_VENC_RECST_RESERVED0_ADDR(base) ((base) + (0x04))
#define SOC_VENC_RECST_DFX_0_ADDR(base) ((base) + (0x80))
#define SOC_VENC_RECST_DFX_1_ADDR(base) ((base) + (0x84))
#define SOC_VENC_RECST_DFX_2_ADDR(base) ((base) + (0x88))
#define SOC_VENC_RECST_DFX_3_ADDR(base) ((base) + (0x8c))
#define SOC_VENC_RECST_DFX_4_ADDR(base) ((base) + (0x90))
#define SOC_VENC_RECST_DFX_5_ADDR(base) ((base) + (0x94))
#define SOC_VENC_RECST_DFX_6_ADDR(base) ((base) + (0x98))
#define SOC_VENC_RECST_DFX_7_ADDR(base) ((base) + (0x9c))
#define SOC_VENC_RECST_RESERVED1_ADDR(base) ((base) + (0x00))
#define SOC_VENC_VLCST_RESERVED0_ADDR(base) ((base) + (0x00))
#define SOC_VENC_VLCST_PTBITS_EN_ADDR(base) ((base) + (0x10))
#define SOC_VENC_VLCST_PTBITS_ADDR(base) ((base) + (0x14))
#define SOC_VENC_VLCST_PARAMETER_ADDR(base) ((base) + (0x18))
#define SOC_VENC_VLCST_RESERVED1_ADDR(base) ((base) + (0x1c))
#define SOC_VENC_VLCST_SLC_LEN_CNT_ADDR(base) ((base) + (0x80))
#define SOC_VENC_VLCST_DSRPTR00_ADDR(base) ((base) + (0x84))
#define SOC_VENC_VLCST_DSRPTR01_ADDR(base) ((base) + (0x88))
#define SOC_VENC_VLCST_DSRPTR10_ADDR(base) ((base) + (0x8c))
#define SOC_VENC_VLCST_DSRPTR11_ADDR(base) ((base) + (0x90))
#define SOC_VENC_VLCST_DSRPTR20_ADDR(base) ((base) + (0x94))
#define SOC_VENC_VLCST_DSRPTR21_ADDR(base) ((base) + (0x98))
#define SOC_VENC_VLCST_DSRPTR30_ADDR(base) ((base) + (0x9c))
#define SOC_VENC_VLCST_DSRPTR31_ADDR(base) ((base) + (0xa0))
#define SOC_VENC_VLCST_DSRPTR40_ADDR(base) ((base) + (0xa4))
#define SOC_VENC_VLCST_DSRPTR41_ADDR(base) ((base) + (0xa8))
#define SOC_VENC_VLCST_DSRPTR50_ADDR(base) ((base) + (0xac))
#define SOC_VENC_VLCST_DSRPTR51_ADDR(base) ((base) + (0xb0))
#define SOC_VENC_VLCST_DSRPTR60_ADDR(base) ((base) + (0xb4))
#define SOC_VENC_VLCST_DSRPTR61_ADDR(base) ((base) + (0xb8))
#define SOC_VENC_VLCST_DSRPTR70_ADDR(base) ((base) + (0xbc))
#define SOC_VENC_VLCST_DSRPTR71_ADDR(base) ((base) + (0xc0))
#define SOC_VENC_VLCST_DSRPTR80_ADDR(base) ((base) + (0xc4))
#define SOC_VENC_VLCST_DSRPTR81_ADDR(base) ((base) + (0xc8))
#define SOC_VENC_VLCST_DSRPTR90_ADDR(base) ((base) + (0xcc))
#define SOC_VENC_VLCST_DSRPTR91_ADDR(base) ((base) + (0xd0))
#define SOC_VENC_VLCST_DSRPTR100_ADDR(base) ((base) + (0xd4))
#define SOC_VENC_VLCST_DSRPTR101_ADDR(base) ((base) + (0xd8))
#define SOC_VENC_VLCST_DSRPTR110_ADDR(base) ((base) + (0xdc))
#define SOC_VENC_VLCST_DSRPTR111_ADDR(base) ((base) + (0xe0))
#define SOC_VENC_VLCST_DSRPTR120_ADDR(base) ((base) + (0xe4))
#define SOC_VENC_VLCST_DSRPTR121_ADDR(base) ((base) + (0xe8))
#define SOC_VENC_VLCST_DSRPTR130_ADDR(base) ((base) + (0xec))
#define SOC_VENC_VLCST_DSRPTR131_ADDR(base) ((base) + (0xf0))
#define SOC_VENC_VLCST_DSRPTR140_ADDR(base) ((base) + (0xf4))
#define SOC_VENC_VLCST_DSRPTR141_ADDR(base) ((base) + (0xf8))
#define SOC_VENC_VLCST_DSRPTR150_ADDR(base) ((base) + (0xfc))
#define SOC_VENC_VLCST_DSRPTR151_ADDR(base) ((base) + (0x100))
#define SOC_VENC_VLCST_DFX_0_ADDR(base) ((base) + (0x104))
#define SOC_VENC_VLCST_RESERVED2_ADDR(base) ((base) + (0x108))
#define SOC_VENC_VLCST_PARA_DATA0_ADDR(base) ((base) + (0x118))
#define SOC_VENC_VLCST_PARA_DATA1_ADDR(base) ((base) + (0x11c))
#define SOC_VENC_VLCST_PARA_DATA2_ADDR(base) ((base) + (0x120))
#define SOC_VENC_VLCST_PARA_DATA3_ADDR(base) ((base) + (0x124))
#define SOC_VENC_VLCST_PARA_DATA4_ADDR(base) ((base) + (0x128))
#define SOC_VENC_VLCST_PARA_DATA5_ADDR(base) ((base) + (0x12c))
#define SOC_VENC_VLCST_PARA_DATA6_ADDR(base) ((base) + (0x130))
#define SOC_VENC_VLCST_PARA_DATA7_ADDR(base) ((base) + (0x134))
#define SOC_VENC_VLCST_PARA_DATA8_ADDR(base) ((base) + (0x138))
#define SOC_VENC_VLCST_PARA_DATA9_ADDR(base) ((base) + (0x13c))
#define SOC_VENC_VLCST_PARA_DATA10_ADDR(base) ((base) + (0x140))
#define SOC_VENC_VLCST_PARA_DATA11_ADDR(base) ((base) + (0x144))
#define SOC_VENC_VLCST_PARA_DATA12_ADDR(base) ((base) + (0x148))
#define SOC_VENC_VLCST_PARA_DATA13_ADDR(base) ((base) + (0x14c))
#define SOC_VENC_VLCST_PARA_DATA14_ADDR(base) ((base) + (0x150))
#define SOC_VENC_VLCST_PARA_DATA15_ADDR(base) ((base) + (0x154))
#define SOC_VENC_VLCST_PARA_DATA16_ADDR(base) ((base) + (0x158))
#define SOC_VENC_VLCST_PARA_DATA17_ADDR(base) ((base) + (0x15c))
#define SOC_VENC_VLCST_PARA_DATA18_ADDR(base) ((base) + (0x160))
#define SOC_VENC_VLCST_PARA_DATA19_ADDR(base) ((base) + (0x164))
#define SOC_VENC_VLCST_PARA_DATA20_ADDR(base) ((base) + (0x168))
#define SOC_VENC_VLCST_PARA_DATA21_ADDR(base) ((base) + (0x16c))
#define SOC_VENC_VLCST_PARA_DATA22_ADDR(base) ((base) + (0x170))
#define SOC_VENC_VLCST_PARA_DATA23_ADDR(base) ((base) + (0x174))
#define SOC_VENC_VLCST_PARA_DATA24_ADDR(base) ((base) + (0x178))
#define SOC_VENC_VLCST_PARA_DATA25_ADDR(base) ((base) + (0x17c))
#define SOC_VENC_VLCST_PARA_DATA26_ADDR(base) ((base) + (0x180))
#define SOC_VENC_VLCST_PARA_DATA27_ADDR(base) ((base) + (0x184))
#define SOC_VENC_VLCST_PARA_DATA28_ADDR(base) ((base) + (0x188))
#define SOC_VENC_VLCST_PARA_DATA29_ADDR(base) ((base) + (0x18c))
#define SOC_VENC_VLCST_PARA_DATA30_ADDR(base) ((base) + (0x190))
#define SOC_VENC_VLCST_PARA_DATA31_ADDR(base) ((base) + (0x194))
#define SOC_VENC_VLCST_PARA_DATA32_ADDR(base) ((base) + (0x198))
#define SOC_VENC_VLCST_PARA_DATA33_ADDR(base) ((base) + (0x19c))
#define SOC_VENC_VLCST_PARA_DATA34_ADDR(base) ((base) + (0x1a0))
#define SOC_VENC_VLCST_PARA_DATA35_ADDR(base) ((base) + (0x1a4))
#define SOC_VENC_VLCST_PARA_DATA36_ADDR(base) ((base) + (0x1a8))
#define SOC_VENC_VLCST_PARA_DATA37_ADDR(base) ((base) + (0x1ac))
#define SOC_VENC_VLCST_PARA_DATA38_ADDR(base) ((base) + (0x1b0))
#define SOC_VENC_VLCST_PARA_DATA39_ADDR(base) ((base) + (0x1b4))
#define SOC_VENC_VLCST_PARA_DATA40_ADDR(base) ((base) + (0x1b8))
#define SOC_VENC_VLCST_PARA_DATA41_ADDR(base) ((base) + (0x1bc))
#define SOC_VENC_VLCST_PARA_DATA42_ADDR(base) ((base) + (0x1c0))
#define SOC_VENC_VLCST_PARA_DATA43_ADDR(base) ((base) + (0x1c4))
#define SOC_VENC_VLCST_PARA_DATA44_ADDR(base) ((base) + (0x1c8))
#define SOC_VENC_VLCST_PARA_DATA45_ADDR(base) ((base) + (0x1cc))
#define SOC_VENC_VLCST_PARA_DATA46_ADDR(base) ((base) + (0x1d0))
#define SOC_VENC_VLCST_PARA_DATA47_ADDR(base) ((base) + (0x1d4))
#define SOC_VENC_VLCST_RESERVED3_ADDR(base) ((base) + (0x1d8))
#define SOC_VENC_VLC_RESERVED0_ADDR(base) ((base) + (0x00))
#define SOC_VENC_VLC_SlcHdrStrm0_ADDR(base) ((base) + (0x04))
#define SOC_VENC_VLC_SlcHdrStrm1_ADDR(base) ((base) + (0x08))
#define SOC_VENC_VLC_SlcHdrStrm2_ADDR(base) ((base) + (0x0c))
#define SOC_VENC_VLC_SlcHdrStrm3_ADDR(base) ((base) + (0x10))
#define SOC_VENC_VLC_ReorderStrm0_ADDR(base) ((base) + (0x14))
#define SOC_VENC_VLC_ReorderStrm1_ADDR(base) ((base) + (0x18))
#define SOC_VENC_VLC_MarkingStrm0_ADDR(base) ((base) + (0x1c))
#define SOC_VENC_VLC_MarkingStrm1_ADDR(base) ((base) + (0x20))
#define SOC_VENC_VLC_SLCHDRPARA_ADDR(base) ((base) + (0x24))
#define SOC_VENC_VLC_SVC_ADDR(base) ((base) + (0x28))
#define SOC_VENC_VLC_RESERVED1_ADDR(base) ((base) + (0x2c))
#define SOC_VENC_VLC_CABAC_BIT_OVER_FLOW_ADDR(base) ((base) + (0x80))
#define SOC_VENC_VLC_PIC_TOTAL_BITS_ADDR(base) ((base) + (0x84))
#define SOC_VENC_VLC_RESERVED2_ADDR(base) ((base) + (0x88))
#define SOC_VENC_VEDU_FILTER_PARAMETER0_ADDR(base) ((base) + (0x00))
#define SOC_VENC_VEDU_FILTER_PARAMETER1_ADDR(base) ((base) + (0x04))
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER0_ADDR(base) ((base) + (0x08))
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER1_ADDR(base) ((base) + (0x0C))
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER2_ADDR(base) ((base) + (0x10))
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER3_ADDR(base) ((base) + (0x14))
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER4_ADDR(base) ((base) + (0x18))
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER5_ADDR(base) ((base) + (0x1C))
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER6_ADDR(base) ((base) + (0x20))
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER7_ADDR(base) ((base) + (0x24))
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER8_ADDR(base) ((base) + (0x28))
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER9_ADDR(base) ((base) + (0x2C))
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER10_ADDR(base) ((base) + (0x30))
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER11_ADDR(base) ((base) + (0x34))
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER12_ADDR(base) ((base) + (0x38))
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER13_ADDR(base) ((base) + (0x3C))
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER14_ADDR(base) ((base) + (0x40))
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER15_ADDR(base) ((base) + (0x44))
#define SOC_VENC_VEDU_CUR_GCFG_ADDR(base) ((base) + (0x48))
#define SOC_VENC_VEDU_CLIP_THX_ADDR(base) ((base) + (0x4C))
#define SOC_VENC_VEDU_RGB_COEF0_ADDR(base) ((base) + (0x50))
#define SOC_VENC_VEDU_RGB_COEF1_ADDR(base) ((base) + (0x54))
#define SOC_VENC_VEDU_RGB_COEF2_ADDR(base) ((base) + (0x58))
#define SOC_VENC_VEDU_RGB_COEF3_ADDR(base) ((base) + (0x5c))
#define SOC_VENC_VEDU_RGB_COEF4_ADDR(base) ((base) + (0x60))
#define SOC_VENC_VEDU_RGB_COEF5_ADDR(base) ((base) + (0x64))
#define SOC_VENC_VEDU_RGB_COEF6_ADDR(base) ((base) + (0x68))
#define SOC_VENC_VEDU_RGB_CLIP_ADDR(base) ((base) + (0x6c))
#define SOC_VENC_VEDU_WIDE_NARROW_EN_ADDR(base) ((base) + (0x70))
#define SOC_VENC_CURPRE_RESERVED0_ADDR(base) ((base) + (0x74))
#define SOC_VENC_CURPRE_DFX_0_ADDR(base) ((base) + (0x80))
#define SOC_VENC_CURPRE_RESERVED1_ADDR(base) ((base) + (0x84))
#define SOC_VENC_CURPRE_DFX_1_ADDR(base) ((base) + (0x98))
#define SOC_VENC_CURPRE_RESERVED2_ADDR(base) ((base) + (0x9c))
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER0_ADDR(base) ((base) + (0x100))
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER1_ADDR(base) ((base) + (0x104))
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER2_ADDR(base) ((base) + (0x108))
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER3_ADDR(base) ((base) + (0x10C))
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER4_ADDR(base) ((base) + (0x110))
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER5_ADDR(base) ((base) + (0x114))
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER6_ADDR(base) ((base) + (0x118))
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER7_ADDR(base) ((base) + (0x11C))
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER8_ADDR(base) ((base) + (0x120))
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER9_ADDR(base) ((base) + (0x124))
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER10_ADDR(base) ((base) + (0x128))
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER11_ADDR(base) ((base) + (0x12C))
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER12_ADDR(base) ((base) + (0x130))
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER13_ADDR(base) ((base) + (0x134))
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER14_ADDR(base) ((base) + (0x138))
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER15_ADDR(base) ((base) + (0x13C))
#define SOC_VENC_CURPRE_RESERVED3_ADDR(base) ((base) + (0x140))
#define SOC_VENC_IMELD_RESERVED0_ADDR(base) ((base) + (0x0000))
#define SOC_VENC_UNVLD_RESERVED0_ADDR(base) ((base) + (0x00))
#define SOC_VENC_EMAR_WAIT_TIM_OUT_ADDR(base) ((base) + (0x0000))
#define SOC_VENC_EMAR_RCH_RPT_TH0_ADDR(base) ((base) + (0x0004))
#define SOC_VENC_EMAR_RCH_RPT_TH1_ADDR(base) ((base) + (0x0008))
#define SOC_VENC_EMAR_RCH_RPT_TH2_ADDR(base) ((base) + (0x000C))
#define SOC_VENC_EMAR_RCH_RPT_TH3_ADDR(base) ((base) + (0x0010))
#define SOC_VENC_EMAR_RCH_RPT_TH4_ADDR(base) ((base) + (0x0014))
#define SOC_VENC_EMAR_RCH_RPT_TH5_ADDR(base) ((base) + (0x00018))
#define SOC_VENC_EMAR_RCH_BST1_NUM_ADDR(base) ((base) + (0x0001C))
#define SOC_VENC_EMAR_RCH_BST2_NUM_ADDR(base) ((base) + (0x00020))
#define SOC_VENC_EMAR_RCH_BST3_NUM_ADDR(base) ((base) + (0x00024))
#define SOC_VENC_EMAR_RCH_BST4_NUM_ADDR(base) ((base) + (0x00028))
#define SOC_VENC_EMAR_RCH_BST5_NUM_ADDR(base) ((base) + (0x0002C))
#define SOC_VENC_EMAR_RCH_BST6_NUM_ADDR(base) ((base) + (0x00030))
#define SOC_VENC_EMAR_RCH_BST7_NUM_ADDR(base) ((base) + (0x00034))
#define SOC_VENC_EMAR_RCH_BST8_NUM_ADDR(base) ((base) + (0x00038))
#define SOC_VENC_EMAR_WCH_BST1_NUM_ADDR(base) ((base) + (0x0003C))
#define SOC_VENC_EMAR_WCH_BST2_NUM_ADDR(base) ((base) + (0x00040))
#define SOC_VENC_EMAR_WCH_BST3_NUM_ADDR(base) ((base) + (0x00044))
#define SOC_VENC_EMAR_WCH_BST4_NUM_ADDR(base) ((base) + (0x00048))
#define SOC_VENC_EMAR_WCH_BST5_NUM_ADDR(base) ((base) + (0x0004C))
#define SOC_VENC_EMAR_WCH_BST6_NUM_ADDR(base) ((base) + (0x00050))
#define SOC_VENC_EMAR_WCH_BST7_NUM_ADDR(base) ((base) + (0x00054))
#define SOC_VENC_EMAR_WCH_BST8_NUM_ADDR(base) ((base) + (0x00058))
#define SOC_VENC_EMAR_STA_0_ADDR(base) ((base) + (0x005C))
#define SOC_VENC_EMAR_STA_1_ADDR(base) ((base) + (0x0060))
#define SOC_VENC_EMAR_STA_2_ADDR(base) ((base) + (0x0064))
#define SOC_VENC_EMAR_STA_3_ADDR(base) ((base) + (0x0068))
#define SOC_VENC_EMAR_RESERVED1_ADDR(base) ((base) + (0x006C))
#define SOC_VENC_COMN0_SMMU_SCR_ADDR(base) ((base) + (0x0000))
#define SOC_VENC_COMN0_SMMU_MEMCTRL_ADDR(base) ((base) + (0x0004))
#define SOC_VENC_COMN0_SMMU_LP_CTRL_ADDR(base) ((base) + (0x0008))
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_ADDR(base) ((base) + (0x000C))
#define SOC_VENC_COMN0_SMMU_INTMASK_NS_ADDR(base) ((base) + (0x0010))
#define SOC_VENC_COMN0_SMMU_INTRAW_NS_ADDR(base) ((base) + (0x0014))
#define SOC_VENC_COMN0_SMMU_INTSTAT_NS_ADDR(base) ((base) + (0x0018))
#define SOC_VENC_COMN0_SMMU_INTCLR_NS_ADDR(base) ((base) + (0x001C))
#define SOC_VENC_COMN0_SMMU_SMR0_NS_ADDR(base) ((base) + (0x0020))
#define SOC_VENC_COMN0_SMMU_SMR1_NS_ADDR(base) ((base) + (0x0024))
#define SOC_VENC_COMN0_SMMU_SMR2_NS_ADDR(base) ((base) + (0x0028))
#define SOC_VENC_COMN0_SMMU_SMR3_NS_ADDR(base) ((base) + (0x002C))
#define SOC_VENC_COMN0_SMMU_SMR4_NS_ADDR(base) ((base) + (0x0030))
#define SOC_VENC_COMN0_SMMU_SMR5_NS_ADDR(base) ((base) + (0x0034))
#define SOC_VENC_COMN0_SMMU_SMR6_NS_ADDR(base) ((base) + (0x0038))
#define SOC_VENC_COMN0_SMMU_SMR7_NS_ADDR(base) ((base) + (0x003C))
#define SOC_VENC_COMN0_SMMU_SMR8_NS_ADDR(base) ((base) + (0x0040))
#define SOC_VENC_COMN0_SMMU_SMR9_NS_ADDR(base) ((base) + (0x0044))
#define SOC_VENC_COMN0_SMMU_SMR10_NS_ADDR(base) ((base) + (0x0048))
#define SOC_VENC_COMN0_SMMU_SMR11_NS_ADDR(base) ((base) + (0x004C))
#define SOC_VENC_COMN0_SMMU_SMR12_NS_ADDR(base) ((base) + (0x0050))
#define SOC_VENC_COMN0_SMMU_SMR13_NS_ADDR(base) ((base) + (0x0054))
#define SOC_VENC_COMN0_SMMU_SMR14_NS_ADDR(base) ((base) + (0x0058))
#define SOC_VENC_COMN0_SMMU_SMR15_NS_ADDR(base) ((base) + (0x005C))
#define SOC_VENC_COMN0_SMMU_SMR16_NS_ADDR(base) ((base) + (0x0060))
#define SOC_VENC_COMN0_SMMU_SMR17_NS_ADDR(base) ((base) + (0x0064))
#define SOC_VENC_COMN0_SMMU_SMR18_NS_ADDR(base) ((base) + (0x0068))
#define SOC_VENC_COMN0_SMMU_SMR19_NS_ADDR(base) ((base) + (0x006C))
#define SOC_VENC_COMN0_SMMU_SMR20_NS_ADDR(base) ((base) + (0x0070))
#define SOC_VENC_COMN0_SMMU_SMR21_NS_ADDR(base) ((base) + (0x0074))
#define SOC_VENC_COMN0_SMMU_SMR22_NS_ADDR(base) ((base) + (0x0078))
#define SOC_VENC_COMN0_SMMU_SMR23_NS_ADDR(base) ((base) + (0x007C))
#define SOC_VENC_COMN0_SMMU_SMR24_NS_ADDR(base) ((base) + (0x0080))
#define SOC_VENC_COMN0_SMMU_SMR25_NS_ADDR(base) ((base) + (0x0084))
#define SOC_VENC_COMN0_SMMU_SMR26_NS_ADDR(base) ((base) + (0x0088))
#define SOC_VENC_COMN0_SMMU_SMR27_NS_ADDR(base) ((base) + (0x008C))
#define SOC_VENC_COMN0_SMMU_SMR28_NS_ADDR(base) ((base) + (0x0090))
#define SOC_VENC_COMN0_SMMU_SMR29_NS_ADDR(base) ((base) + (0x0094))
#define SOC_VENC_COMN0_SMMU_SMR30_NS_ADDR(base) ((base) + (0x0098))
#define SOC_VENC_COMN0_SMMU_SMR31_NS_ADDR(base) ((base) + (0x009C))
#define SOC_VENC_COMN0_SMMU_SMR32_NS_ADDR(base) ((base) + (0x00A0))
#define SOC_VENC_COMN0_SMMU_SMR33_NS_ADDR(base) ((base) + (0x00A4))
#define SOC_VENC_COMN0_SMMU_SMR34_NS_ADDR(base) ((base) + (0x00A8))
#define SOC_VENC_COMN0_SMMU_SMR35_NS_ADDR(base) ((base) + (0x00AC))
#define SOC_VENC_COMN0_SMMU_SMR36_NS_ADDR(base) ((base) + (0x00B0))
#define SOC_VENC_COMN0_SMMU_SMR37_NS_ADDR(base) ((base) + (0x00B4))
#define SOC_VENC_COMN0_SMMU_SMR38_NS_ADDR(base) ((base) + (0x00B8))
#define SOC_VENC_COMN0_SMMU_SMR39_NS_ADDR(base) ((base) + (0x00BC))
#define SOC_VENC_COMN0_SMMU_SMR40_NS_ADDR(base) ((base) + (0x00C0))
#define SOC_VENC_COMN0_SMMU_SMR41_NS_ADDR(base) ((base) + (0x00C4))
#define SOC_VENC_COMN0_SMMU_SMR42_NS_ADDR(base) ((base) + (0x00C8))
#define SOC_VENC_COMN0_SMMU_SMR43_NS_ADDR(base) ((base) + (0x00CC))
#define SOC_VENC_COMN0_SMMU_SMR44_NS_ADDR(base) ((base) + (0x00D0))
#define SOC_VENC_COMN0_SMMU_SMR45_NS_ADDR(base) ((base) + (0x00D4))
#define SOC_VENC_COMN0_SMMU_SMR46_NS_ADDR(base) ((base) + (0x00D8))
#define SOC_VENC_COMN0_SMMU_SMR47_NS_ADDR(base) ((base) + (0x00DC))
#define SOC_VENC_COMN0_SMMU_SMR48_NS_ADDR(base) ((base) + (0x00E0))
#define SOC_VENC_COMN0_SMMU_SMR49_NS_ADDR(base) ((base) + (0x00E4))
#define SOC_VENC_COMN0_SMMU_SMR50_NS_ADDR(base) ((base) + (0x00E8))
#define SOC_VENC_COMN0_SMMU_SMR51_NS_ADDR(base) ((base) + (0x00EC))
#define SOC_VENC_COMN0_SMMU_SMR52_NS_ADDR(base) ((base) + (0x00F0))
#define SOC_VENC_COMN0_SMMU_SMR53_NS_ADDR(base) ((base) + (0x00F4))
#define SOC_VENC_COMN0_SMMU_SMR54_NS_ADDR(base) ((base) + (0x00F8))
#define SOC_VENC_COMN0_SMMU_SMR55_NS_ADDR(base) ((base) + (0x00FC))
#define SOC_VENC_COMN0_SMMU_SMR56_NS_ADDR(base) ((base) + (0x0100))
#define SOC_VENC_COMN0_SMMU_SMR57_NS_ADDR(base) ((base) + (0x0104))
#define SOC_VENC_COMN0_SMMU_SMR58_NS_ADDR(base) ((base) + (0x0108))
#define SOC_VENC_COMN0_SMMU_SMR59_NS_ADDR(base) ((base) + (0x010C))
#define SOC_VENC_COMN0_SMMU_SMR60_NS_ADDR(base) ((base) + (0x0110))
#define SOC_VENC_COMN0_SMMU_SMR61_NS_ADDR(base) ((base) + (0x0114))
#define SOC_VENC_COMN0_SMMU_SMR62_NS_ADDR(base) ((base) + (0x0118))
#define SOC_VENC_COMN0_SMMU_SMR63_NS_ADDR(base) ((base) + (0x011C))
#define SOC_VENC_COMN0_SMMU_SMR64_NS_ADDR(base) ((base) + (0x0120))
#define SOC_VENC_COMN0_SMMU_SMR65_NS_ADDR(base) ((base) + (0x0124))
#define SOC_VENC_COMN0_SMMU_SMR66_NS_ADDR(base) ((base) + (0x0128))
#define SOC_VENC_COMN0_SMMU_SMR67_NS_ADDR(base) ((base) + (0x012c))
#define SOC_VENC_COMN0_SMMU_SMR68_NS_ADDR(base) ((base) + (0x0130))
#define SOC_VENC_COMN0_SMMU_SMR69_NS_ADDR(base) ((base) + (0x0134))
#define SOC_VENC_COMN0_SMMU_SMR70_NS_ADDR(base) ((base) + (0x0138))
#define SOC_VENC_COMN0_SMMU_SMR71_NS_ADDR(base) ((base) + (0x013c))
#define SOC_VENC_COMN0_SMMU_SMR72_NS_ADDR(base) ((base) + (0x0140))
#define SOC_VENC_COMN0_SMMU_SMR73_NS_ADDR(base) ((base) + (0x0144))
#define SOC_VENC_COMN0_SMMU_SMR74_NS_ADDR(base) ((base) + (0x0148))
#define SOC_VENC_COMN0_SMMU_SMR75_NS_ADDR(base) ((base) + (0x014c))
#define SOC_VENC_COMN0_SMMU_SMR76_NS_ADDR(base) ((base) + (0x0150))
#define SOC_VENC_COMN0_SMMU_SMR77_NS_ADDR(base) ((base) + (0x0154))
#define SOC_VENC_COMN0_SMMU_SMR78_NS_ADDR(base) ((base) + (0x0158))
#define SOC_VENC_COMN0_SMMU_SMR79_NS_ADDR(base) ((base) + (0x015c))
#define SOC_VENC_COMN0_RESERVED_1_ADDR(base) ((base) + (0x0120))
#define SOC_VENC_COMN0_SMMU_RLD_EN0_NS_ADDR(base) ((base) + (0x01F0))
#define SOC_VENC_COMN0_SMMU_RLD_EN1_NS_ADDR(base) ((base) + (0x01F4))
#define SOC_VENC_COMN0_SMMU_RLD_EN2_NS_ADDR(base) ((base) + (0x01F8))
#define SOC_VENC_RESERVED_2_ADDR(base) ((base) + (0x01FC))
#define SOC_VENC_COMN1_SMMU_CB_SCTRL_ADDR(base) ((base) + (0x0000))
#define SOC_VENC_COMN1_SMMU_CB_TTBR0_ADDR(base) ((base) + (0x0004))
#define SOC_VENC_COMN1_SMMU_CB_TTBR1_ADDR(base) ((base) + (0x0008))
#define SOC_VENC_COMN1_SMMU_CB_TTBCR_ADDR(base) ((base) + (0x000C))
#define SOC_VENC_COMN1_SMMU_OFFSET_ADDR_NS_ADDR(base) ((base) + (0x0010))
#define SOC_VENC_COMN1_SMMU_SCACHEI_ALL_ADDR(base) ((base) + (0x0014))
#define SOC_VENC_COMN1_SMMU_SCACHEI_L1_ADDR(base) ((base) + (0x0018))
#define SOC_VENC_COMN1_SMMU_SCACHEI_L2L3_ADDR(base) ((base) + (0x001C))
#define SOC_VENC_COMN1_SMMU_FAMA_CTRL0_NS_ADDR(base) ((base) + (0x0020))
#define SOC_VENC_COMN1_SMMU_FAMA_CTRL1_NS_ADDR(base) ((base) + (0x0024))
#define SOC_VENC_COMN1_RESERVED_1_ADDR(base) ((base) + (0x0028))
#define SOC_VENC_COMN1_SMMU_ADDR_MSB_ADDR(base) ((base) + (0x0100))
#define SOC_VENC_COMN1_SMMU_ERR_RDADDR_ADDR(base) ((base) + (0x0104))
#define SOC_VENC_COMN1_SMMU_ERR_WRADDR_ADDR(base) ((base) + (0x0108))
#define SOC_VENC_COMN1_RESERVED_2_ADDR(base) ((base) + (0x10C))
#define SOC_VENC_COMN1_SMMU_FAULT_ADDR_TCU_ADDR(base) ((base) + (0x0110))
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TCU_ADDR(base) ((base) + (0x0114))
#define SOC_VENC_COMN1_RESERVED_3_ADDR(base) ((base) + (0x118))
#define SOC_VENC_COMN1_SMMU_FAULT_ADDR_TBU0_ADDR(base) ((base) + (0x0120))
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TBU0_ADDR(base) ((base) + (0x0124))
#define SOC_VENC_COMN1_SMMU_FAULT_INFO0_ADDR(base) ((base) + (0x0128))
#define SOC_VENC_COMN1_RESERVED_4_ADDR(base) ((base) + (0x012C))
#define SOC_VENC_COMN1_SMMU_FAULT_ADDR_TBU1_ADDR(base) ((base) + (0x0130))
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TBU1_ADDR(base) ((base) + (0x0134))
#define SOC_VENC_COMN1_SMMU_FAULT_INFO1_ADDR(base) ((base) + (0x0138))
#define SOC_VENC_COMN1_RESERVED_5_ADDR(base) ((base) + (0x013C))
#define SOC_VENC_COMN1_SMMU_FAULT_ADDR_TBU2_ADDR(base) ((base) + (0x0140))
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TBU2_ADDR(base) ((base) + (0x0144))
#define SOC_VENC_COMN1_SMMU_FAULT_INFO2_ADDR(base) ((base) + (0x0148))
#define SOC_VENC_COMN1_RESERVED_6_ADDR(base) ((base) + (0x014C))
#define SOC_VENC_COMN1_SMMU_FAULT_ADDR_TBU3_ADDR(base) ((base) + (0x0150))
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TBU3_ADDR(base) ((base) + (0x0154))
#define SOC_VENC_COMN1_SMMU_FAULT_INFO3_ADDR(base) ((base) + (0x0158))
#define SOC_VENC_COMN1_RESERVED_7_ADDR(base) ((base) + (0x015C))
#define SOC_VENC_COMN1_SMMU_DBGRPTR_TLB_ADDR(base) ((base) + (0x0180))
#define SOC_VENC_COMN1_SMMU_DBGRDATA_TLB_ADDR(base) ((base) + (0x0184))
#define SOC_VENC_COMN1_SMMU_DBGRPTR_CACHE_ADDR(base) ((base) + (0x0188))
#define SOC_VENC_COMN1_SMMU_DBGRDATA0_CACHE_ADDR(base) ((base) + (0x018C))
#define SOC_VENC_COMN1_SMMU_DBGRDATA1_CACHE_ADDR(base) ((base) + (0x0190))
#define SOC_VENC_COMN1_SMMU_DBGAXI_CTRL_ADDR(base) ((base) + (0x0194))
#define SOC_VENC_COMN1_SMMU_OVA_ADDR_ADDR(base) ((base) + (0x0198))
#define SOC_VENC_COMN1_SMMU_OPA_ADDR_ADDR(base) ((base) + (0x019C))
#define SOC_VENC_COMN1_SMMU_OVA_CTRL_ADDR(base) ((base) + (0x01A0))
#define SOC_VENC_COMN1_SMMU_OPREF_ADDR_ADDR(base) ((base) + (0x01A4))
#define SOC_VENC_COMN1_SMMU_OPREF_CTRL_ADDR(base) ((base) + (0x01A8))
#define SOC_VENC_COMN1_SMMU_OPREF_CNT_ADDR(base) ((base) + (0x01AC))
#define SOC_VENC_COMN1_RESERVED_8_ADDR(base) ((base) + (0x01B0))
#define SOC_VENC_COMN2_RESERVED_1_ADDR(base) ((base) + (0x0000))
#define SOC_VENC_COMN2_SMMU_SMR0_S_ADDR(base) ((base) + (0x0100))
#define SOC_VENC_COMN2_SMMU_SMR1_S_ADDR(base) ((base) + (0x0104))
#define SOC_VENC_COMN2_SMMU_SMR2_S_ADDR(base) ((base) + (0x0108))
#define SOC_VENC_COMN2_SMMU_SMR3_S_ADDR(base) ((base) + (0x010C))
#define SOC_VENC_COMN2_SMMU_SMR4_S_ADDR(base) ((base) + (0x0110))
#define SOC_VENC_COMN2_SMMU_SMR5_S_ADDR(base) ((base) + (0x0114))
#define SOC_VENC_COMN2_SMMU_SMR6_S_ADDR(base) ((base) + (0x0118))
#define SOC_VENC_COMN2_SMMU_SMR7_S_ADDR(base) ((base) + (0x011C))
#define SOC_VENC_COMN2_SMMU_SMR8_S_ADDR(base) ((base) + (0x0120))
#define SOC_VENC_COMN2_SMMU_SMR9_S_ADDR(base) ((base) + (0x0124))
#define SOC_VENC_COMN2_SMMU_SMR10_S_ADDR(base) ((base) + (0x0128))
#define SOC_VENC_COMN2_SMMU_SMR11_S_ADDR(base) ((base) + (0x012C))
#define SOC_VENC_COMN2_SMMU_SMR12_S_ADDR(base) ((base) + (0x0130))
#define SOC_VENC_COMN2_SMMU_SMR13_S_ADDR(base) ((base) + (0x0134))
#define SOC_VENC_COMN2_SMMU_SMR14_S_ADDR(base) ((base) + (0x0138))
#define SOC_VENC_COMN2_SMMU_SMR15_S_ADDR(base) ((base) + (0x013C))
#define SOC_VENC_COMN2_SMMU_SMR16_S_ADDR(base) ((base) + (0x0140))
#define SOC_VENC_COMN2_SMMU_SMR17_S_ADDR(base) ((base) + (0x0144))
#define SOC_VENC_COMN2_SMMU_SMR18_S_ADDR(base) ((base) + (0x0148))
#define SOC_VENC_COMN2_SMMU_SMR19_S_ADDR(base) ((base) + (0x014C))
#define SOC_VENC_COMN2_SMMU_SMR20_S_ADDR(base) ((base) + (0x0150))
#define SOC_VENC_COMN2_SMMU_SMR21_S_ADDR(base) ((base) + (0x0154))
#define SOC_VENC_COMN2_SMMU_SMR22_S_ADDR(base) ((base) + (0x0158))
#define SOC_VENC_COMN2_SMMU_SMR23_S_ADDR(base) ((base) + (0x015C))
#define SOC_VENC_COMN2_SMMU_SMR24_S_ADDR(base) ((base) + (0x0160))
#define SOC_VENC_COMN2_SMMU_SMR25_S_ADDR(base) ((base) + (0x0164))
#define SOC_VENC_COMN2_SMMU_SMR26_S_ADDR(base) ((base) + (0x0168))
#define SOC_VENC_COMN2_SMMU_SMR27_S_ADDR(base) ((base) + (0x016C))
#define SOC_VENC_COMN2_SMMU_SMR28_S_ADDR(base) ((base) + (0x0170))
#define SOC_VENC_COMN2_SMMU_SMR29_S_ADDR(base) ((base) + (0x0174))
#define SOC_VENC_COMN2_SMMU_SMR30_S_ADDR(base) ((base) + (0x0178))
#define SOC_VENC_COMN2_SMMU_SMR31_S_ADDR(base) ((base) + (0x017C))
#define SOC_VENC_COMN2_SMMU_SMR32_S_ADDR(base) ((base) + (0x0180))
#define SOC_VENC_COMN2_SMMU_SMR33_S_ADDR(base) ((base) + (0x0184))
#define SOC_VENC_COMN2_SMMU_SMR34_S_ADDR(base) ((base) + (0x0188))
#define SOC_VENC_COMN2_SMMU_SMR35_S_ADDR(base) ((base) + (0x018C))
#define SOC_VENC_COMN2_SMMU_SMR36_S_ADDR(base) ((base) + (0x0190))
#define SOC_VENC_COMN2_SMMU_SMR37_S_ADDR(base) ((base) + (0x0194))
#define SOC_VENC_COMN2_SMMU_SMR38_S_ADDR(base) ((base) + (0x0198))
#define SOC_VENC_COMN2_SMMU_SMR39_S_ADDR(base) ((base) + (0x019C))
#define SOC_VENC_COMN2_SMMU_SMR40_S_ADDR(base) ((base) + (0x01A0))
#define SOC_VENC_COMN2_SMMU_SMR41_S_ADDR(base) ((base) + (0x01A4))
#define SOC_VENC_COMN2_SMMU_SMR42_S_ADDR(base) ((base) + (0x01A8))
#define SOC_VENC_COMN2_SMMU_SMR43_S_ADDR(base) ((base) + (0x01AC))
#define SOC_VENC_COMN2_SMMU_SMR44_S_ADDR(base) ((base) + (0x01B0))
#define SOC_VENC_COMN2_SMMU_SMR45_S_ADDR(base) ((base) + (0x01B4))
#define SOC_VENC_COMN2_SMMU_SMR46_S_ADDR(base) ((base) + (0x01B8))
#define SOC_VENC_COMN2_SMMU_SMR47_S_ADDR(base) ((base) + (0x01BC))
#define SOC_VENC_COMN2_SMMU_SMR48_S_ADDR(base) ((base) + (0x01C0))
#define SOC_VENC_COMN2_SMMU_SMR49_S_ADDR(base) ((base) + (0x01C4))
#define SOC_VENC_COMN2_SMMU_SMR50_S_ADDR(base) ((base) + (0x01C8))
#define SOC_VENC_COMN2_SMMU_SMR51_S_ADDR(base) ((base) + (0x01CC))
#define SOC_VENC_COMN2_SMMU_SMR52_S_ADDR(base) ((base) + (0x01D0))
#define SOC_VENC_COMN2_SMMU_SMR53_S_ADDR(base) ((base) + (0x01D4))
#define SOC_VENC_COMN2_SMMU_SMR54_S_ADDR(base) ((base) + (0x01D8))
#define SOC_VENC_COMN2_SMMU_SMR55_S_ADDR(base) ((base) + (0x01DC))
#define SOC_VENC_COMN2_SMMU_SMR56_S_ADDR(base) ((base) + (0x01E0))
#define SOC_VENC_COMN2_SMMU_SMR57_S_ADDR(base) ((base) + (0x01E4))
#define SOC_VENC_COMN2_SMMU_SMR58_S_ADDR(base) ((base) + (0x01E8))
#define SOC_VENC_COMN2_SMMU_SMR59_S_ADDR(base) ((base) + (0x01EC))
#define SOC_VENC_COMN2_SMMU_SMR60_S_ADDR(base) ((base) + (0x01F0))
#define SOC_VENC_COMN2_SMMU_SMR61_S_ADDR(base) ((base) + (0x01F4))
#define SOC_VENC_COMN2_SMMU_SMR62_S_ADDR(base) ((base) + (0x01F8))
#define SOC_VENC_COMN2_SMMU_SMR63_S_ADDR(base) ((base) + (0x01FC))
#define SOC_VENC_COMN2_SMMU_SMR64_S_ADDR(base) ((base) + (0x0000))
#define SOC_VENC_COMN2_SMMU_SMR65_S_ADDR(base) ((base) + (0x0004))
#define SOC_VENC_COMN2_SMMU_SMR66_S_ADDR(base) ((base) + (0x0008))
#define SOC_VENC_COMN2_SMMU_SMR67_S_ADDR(base) ((base) + (0x000c))
#define SOC_VENC_COMN2_SMMU_SMR68_S_ADDR(base) ((base) + (0x0010))
#define SOC_VENC_COMN2_SMMU_SMR69_S_ADDR(base) ((base) + (0x0014))
#define SOC_VENC_COMN2_SMMU_SMR70_S_ADDR(base) ((base) + (0x0018))
#define SOC_VENC_COMN2_SMMU_SMR71_S_ADDR(base) ((base) + (0x001c))
#define SOC_VENC_COMN2_SMMU_SMR72_S_ADDR(base) ((base) + (0x0020))
#define SOC_VENC_COMN2_SMMU_SMR73_S_ADDR(base) ((base) + (0x0024))
#define SOC_VENC_COMN2_SMMU_SMR74_S_ADDR(base) ((base) + (0x0028))
#define SOC_VENC_COMN2_SMMU_SMR75_S_ADDR(base) ((base) + (0x002c))
#define SOC_VENC_COMN2_SMMU_SMR76_S_ADDR(base) ((base) + (0x0030))
#define SOC_VENC_COMN2_SMMU_SMR77_S_ADDR(base) ((base) + (0x0034))
#define SOC_VENC_COMN2_SMMU_SMR78_S_ADDR(base) ((base) + (0x0038))
#define SOC_VENC_COMN2_SMMU_SMR79_S_ADDR(base) ((base) + (0x003c))
#define SOC_VENC_COMN3_RESERVED_0_ADDR(base) ((base) + (0x0040))
#define SOC_VENC_COMN3_SMMU_RLD_EN0_S_ADDR(base) ((base) + (0x00F0))
#define SOC_VENC_COMN3_SMMU_RLD_EN1_S_ADDR(base) ((base) + (0x00F4))
#define SOC_VENC_COMN3_SMMU_RLD_EN2_S_ADDR(base) ((base) + (0x00F8))
#define SOC_VENC_RESERVED_1_ADDR(base) ((base) + (0x00F8))
#define SOC_VENC_COMN3_SMMU_INTMAS_S_ADDR(base) ((base) + (0x0100))
#define SOC_VENC_COMN3_SMMU_INTRAW_S_ADDR(base) ((base) + (0x0104))
#define SOC_VENC_COMN3_SMMU_INTSTAT_S_ADDR(base) ((base) + (0x0108))
#define SOC_VENC_COMN3_SMMU_INTCLR_S_ADDR(base) ((base) + (0x010C))
#define SOC_VENC_COMN3_SMMU_SCR_S_ADDR(base) ((base) + (0x0110))
#define SOC_VENC_COMN3_SMMU_SCB_SCTRL_ADDR(base) ((base) + (0x0114))
#define SOC_VENC_COMN3_SMMU_SCB_TTBR_ADDR(base) ((base) + (0x0118))
#define SOC_VENC_COMN3_SMMU_SCB_TTBCR_ADDR(base) ((base) + (0x011C))
#define SOC_VENC_COMN3_SMMU_OFFSET_ADDR_S_ADDR(base) ((base) + (0x0120))
#define SOC_VENC_COMN3_SMMU_FAMA_CTRL0_S_ADDR(base) ((base) + (0x0124))
#define SOC_VENC_COMN3_SMMU_FAMA_CTRL1_S_ADDR(base) ((base) + (0x0128))
#define SOC_VENC_COMN3_SMMU_DBGRPTR_TLB_S_ADDR(base) ((base) + (0x012C))
#define SOC_VENC_COMN3_SMMU_DBGRPTR_CACHE_S_ADDR(base) ((base) + (0x0130))
#define SOC_VENC_COMN3_SMMU_OVERRIDE_CTRL_S_ADDR(base) ((base) + (0x0134))
#define SOC_VENC_COMN3_RESERVED_2_ADDR(base) ((base) + (0x0138))
#define SOC_VENC_MST_GLB_SCR_ADDR(base) ((base) + (0x0000))
#define SOC_VENC_MST_RESERVED_1_ADDR(base) ((base) + (0x0004))
#define SOC_VENC_MST_GLB_BYPASS_ADDR(base) ((base) + (0x0010))
#define SOC_VENC_MST_SID0_BYPASS_ADDR(base) ((base) + (0x0014))
#define SOC_VENC_MST_SID1_BYPASS_ADDR(base) ((base) + (0x0018))
#define SOC_VENC_MST_PREF_CHN_ADDR(base) ((base) + (0x001c))
#define SOC_VENC_MST_RESERVED_2_ADDR(base) ((base) + (0x0020))
#define SOC_VENC_MST_RD0_0CFG_ADDR(base) ((base) + (0x0030))
#define SOC_VENC_MST_RD0_1CFG_ADDR(base) ((base) + (0x0034))
#define SOC_VENC_MST_RD1_0CFG_ADDR(base) ((base) + (0x0038))
#define SOC_VENC_MST_RD1_1CFG_ADDR(base) ((base) + (0x003c))
#define SOC_VENC_MST_RD2_0CFG_ADDR(base) ((base) + (0x0040))
#define SOC_VENC_MST_RD2_1CFG_ADDR(base) ((base) + (0x0044))
#define SOC_VENC_MST_RD3_0CFG_ADDR(base) ((base) + (0x0048))
#define SOC_VENC_MST_RD3_1CFG_ADDR(base) ((base) + (0x004c))
#define SOC_VENC_MST_RD4_0CFG_ADDR(base) ((base) + (0x0050))
#define SOC_VENC_MST_RD4_1CFG_ADDR(base) ((base) + (0x0054))
#define SOC_VENC_MST_RD5_0CFG_ADDR(base) ((base) + (0x0058))
#define SOC_VENC_MST_RD5_1CFG_ADDR(base) ((base) + (0x005c))
#define SOC_VENC_MST_RD6_0CFG_ADDR(base) ((base) + (0x0060))
#define SOC_VENC_MST_RD6_1CFG_ADDR(base) ((base) + (0x0064))
#define SOC_VENC_MST_RD7_0CFG_ADDR(base) ((base) + (0x0068))
#define SOC_VENC_MST_RD7_1CFG_ADDR(base) ((base) + (0x006c))
#define SOC_VENC_MST_RD8_0CFG_ADDR(base) ((base) + (0x0070))
#define SOC_VENC_MST_RD8_1CFG_ADDR(base) ((base) + (0x0074))
#define SOC_VENC_MST_RD9_0CFG_ADDR(base) ((base) + (0x0078))
#define SOC_VENC_MST_RD9_1CFG_ADDR(base) ((base) + (0x007c))
#define SOC_VENC_MST_WR0_0CFG_ADDR(base) ((base) + (0x0080))
#define SOC_VENC_MST_WR0_1CFG_ADDR(base) ((base) + (0x0084))
#define SOC_VENC_MST_WR1_0CFG_ADDR(base) ((base) + (0x0088))
#define SOC_VENC_MST_WR1_1CFG_ADDR(base) ((base) + (0x008c))
#define SOC_VENC_MST_WR2_0CFG_ADDR(base) ((base) + (0x0090))
#define SOC_VENC_MST_WR2_1CFG_ADDR(base) ((base) + (0x0094))
#define SOC_VENC_MST_WR3_0CFG_ADDR(base) ((base) + (0x0098))
#define SOC_VENC_MST_WR3_1CFG_ADDR(base) ((base) + (0x009c))
#define SOC_VENC_MST_WR4_0CFG_ADDR(base) ((base) + (0x00a0))
#define SOC_VENC_MST_WR4_1CFG_ADDR(base) ((base) + (0x00a4))
#define SOC_VENC_MST_WR5_0CFG_ADDR(base) ((base) + (0x00a8))
#define SOC_VENC_MST_WR5_1CFG_ADDR(base) ((base) + (0x00ac))
#define SOC_VENC_MST_WR6_0CFG_ADDR(base) ((base) + (0x00b0))
#define SOC_VENC_MST_WR6_1CFG_ADDR(base) ((base) + (0x00b4))
#define SOC_VENC_MST_WR7_0CFG_ADDR(base) ((base) + (0x00b8))
#define SOC_VENC_MST_WR7_1CFG_ADDR(base) ((base) + (0x00bc))
#define SOC_VENC_MST_RESERVED_3_ADDR(base) ((base) + (0x00c0))
#define SOC_VENC_MST_SOFT_RST_REQ_ADDR(base) ((base) + (0x0100))
#define SOC_VENC_MST_SOFT_RST_ACK_ADDR(base) ((base) + (0x0104))
#define SOC_VENC_MST_RESERVED_4_ADDR(base) ((base) + (0x0108))
#define SOC_VENC_MST_VEDU_DFX_PREF_FSM_ADDR(base) ((base) + (0x0110))
#define SOC_VENC_MST_VEDU_DFX_ARJDG_FSM_ADDR(base) ((base) + (0x0114))
#define SOC_VENC_MST_VEDU_DFX_AWJDG_FSM_ADDR(base) ((base) + (0x0118))
#define SOC_VENC_MST_RESERVED_5_ADDR(base) ((base) + (0x011c))
#define SOC_VENC_MST_VEDU_DFX_PREF_ADDR(base) ((base) + (0x0120))
#define SOC_VENC_MST_VEDU_DFX_ARJDG_ADDR(base) ((base) + (0x0124))
#define SOC_VENC_MST_VEDU_DFX_AWJDG_ADDR(base) ((base) + (0x0128))
#define SOC_VENC_MST_RESERVED_6_ADDR(base) ((base) + (0x012c))
#define SOC_VENC_MST_VEDU_DFX_PREF_CNT_ADDR(base) ((base) + (0x0130))
#define SOC_VENC_MST_VEDU_DFX_RESP_CNT_ADDR(base) ((base) + (0x0134))
#define SOC_VENC_MST_RESERVED_7_ADDR(base) ((base) + (0x0138))
#define SOC_VENC_MST_VEDU_DFX_ARIN_CNT_ADDR(base) ((base) + (0x0140))
#define SOC_VENC_MST_VEDU_DFX_AROUT_CNT_ADDR(base) ((base) + (0x0144))
#define SOC_VENC_MST_VEDU_DFX_ARACK_CNT_ADDR(base) ((base) + (0x0148))
#define SOC_VENC_MST_RESERVED_8_ADDR(base) ((base) + (0x014c))
#define SOC_VENC_MST_VEDU_DFX_AWIN_CNT_ADDR(base) ((base) + (0x0150))
#define SOC_VENC_MST_VEDU_DFX_AWOUT_CNT_ADDR(base) ((base) + (0x0154))
#define SOC_VENC_MST_VEDU_DFX_WOUT_CNT_ADDR(base) ((base) + (0x0158))
#define SOC_VENC_MST_VEDU_DFX_AWACK_CNT_ADDR(base) ((base) + (0x015c))
#define SOC_VENC_MST_VEDU_DFX_ARERR_FLAG_ADDR(base) ((base) + (0x0160))
#define SOC_VENC_MST_VEDU_DFX_ARERR_ID_ADDR(base) ((base) + (0x0164))
#define SOC_VENC_MST_VEDU_DFX_ARERR_ADDR_ADDR(base) ((base) + (0x0168))
#define SOC_VENC_MST_RESERVED_9_ADDR(base) ((base) + (0x016c))
#define SOC_VENC_MST_VEDU_DFX_AWERR_FLAG_ADDR(base) ((base) + (0x0170))
#define SOC_VENC_MST_VEDU_DFX_AWERR_ID_ADDR(base) ((base) + (0x0174))
#define SOC_VENC_MST_VEDU_DFX_AWERR_ADDR_ADDR(base) ((base) + (0x0178))
#define SOC_VENC_MST_RESERVED_10_ADDR(base) ((base) + (0x017c))
#define SOC_VENC_MST_VEDU_DFX_PREF_FLAG_ADDR(base) ((base) + (0x0180))
#define SOC_VENC_MST_RESERVED_11_ADDR(base) ((base) + (0x0184))
#define SOC_VENC_MST_VEDU_DFX_MISS_FLAG_ADDR(base) ((base) + (0x0190))
#define SOC_VENC_MST_RESERVED_12_ADDR(base) ((base) + (0x0194))
#define SOC_VENC_MST_VEDU_AR_PRESS_CNT_ADDR(base) ((base) + (0x01a0))
#define SOC_VENC_MST_VEDU_AW_PRESS_CNT_ADDR(base) ((base) + (0x01a4))
#define SOC_VENC_MST_RESERVED_13_ADDR(base) ((base) + (0x01a8))
#define SOC_VENC_MST_VEDU_DFX_ID_FLAG_ADDR(base) ((base) + (0x01b0))
#define SOC_VENC_MST_VEDU_DFX_AXI_BUS_DEC_ADDR(base) ((base) + (0x01b4))
#define SOC_VENC_MST_RESERVED_14_ADDR(base) ((base) + (0x01b8))
#define SOC_VENC_MST_VEDU_DFX_RD_FLAG_LOW_ADDR(base) ((base) + (0x01c0))
#define SOC_VENC_MST_VEDU_DFX_RD_FLAG_HIGH_ADDR(base) ((base) + (0x01c4))
#define SOC_VENC_MST_VEDU_DFX_WR_FLAG_LOW_ADDR(base) ((base) + (0x01c8))
#define SOC_VENC_MST_VEDU_DFX_WR_FLAG_HIGH_ADDR(base) ((base) + (0x01cc))
#define SOC_VENC_MST_RESERVED_15_ADDR(base) ((base) + (0x01d0))
#define SOC_VENC_MST_VEDU_MODE_MMU_ADDR(base) ((base) + (0x0000))
#define SOC_VENC_MST_RESERVED_20_ADDR(base) ((base) + (0x0004))
#define SOC_VENC_MST_VEDU_NBI_MVST_ADDR_STR_ADDR(base) ((base) + (0x0010))
#define SOC_VENC_MST_VEDU_NBI_MVST_ADDR_END_ADDR(base) ((base) + (0x0014))
#define SOC_VENC_MST_VEDU_NBI_MVLD_ADDR_STR_ADDR(base) ((base) + (0x0018))
#define SOC_VENC_MST_VEDU_NBI_MVLD_ADDR_END_ADDR(base) ((base) + (0x001C))
#define SOC_VENC_MST_VEDU_PMEST_ADDR_STR_ADDR(base) ((base) + (0x0020))
#define SOC_VENC_MST_VEDU_PMEST_ADDR_END_ADDR(base) ((base) + (0x0024))
#define SOC_VENC_MST_VEDU_PMELD_ADDR_STR_ADDR(base) ((base) + (0x0028))
#define SOC_VENC_MST_VEDU_PMELD_ADDR_END_ADDR(base) ((base) + (0x002C))
#define SOC_VENC_MST_VEDU_REC_YH_ADDR_STR_ADDR(base) ((base) + (0x0030))
#define SOC_VENC_MST_VEDU_REC_YH_ADDR_END_ADDR(base) ((base) + (0x0034))
#define SOC_VENC_MST_VEDU_REC_CH_ADDR_STR_ADDR(base) ((base) + (0x0038))
#define SOC_VENC_MST_VEDU_REC_CH_ADDR_END_ADDR(base) ((base) + (0x003C))
#define SOC_VENC_MST_VEDU_REC_YADDR_STR_ADDR(base) ((base) + (0x0040))
#define SOC_VENC_MST_VEDU_REC_YADDR_END_ADDR(base) ((base) + (0x0044))
#define SOC_VENC_MST_VEDU_REC_CADDR_STR_ADDR(base) ((base) + (0x0048))
#define SOC_VENC_MST_VEDU_REC_CADDR_END_ADDR(base) ((base) + (0x004C))
#define SOC_VENC_MST_VEDU_REF_YH_ADDR_STR_ADDR(base) ((base) + (0x0050))
#define SOC_VENC_MST_VEDU_REF_YH_ADDR_END_ADDR(base) ((base) + (0x0054))
#define SOC_VENC_MST_VEDU_REF_CH_ADDR_STR_ADDR(base) ((base) + (0x0058))
#define SOC_VENC_MST_VEDU_REF_CH_ADDR_END_ADDR(base) ((base) + (0x005C))
#define SOC_VENC_MST_VEDU_REF_YADDR_STR_ADDR(base) ((base) + (0x0060))
#define SOC_VENC_MST_VEDU_REF_YADDR_END_ADDR(base) ((base) + (0x0064))
#define SOC_VENC_MST_VEDU_REF_CADDR_STR_ADDR(base) ((base) + (0x0068))
#define SOC_VENC_MST_VEDU_REF_CADDR_END_ADDR(base) ((base) + (0x006C))
#define SOC_VENC_MST_VEDU_SRC_YADDR_STR_ADDR(base) ((base) + (0x0070))
#define SOC_VENC_MST_VEDU_SRC_YADDR_END_ADDR(base) ((base) + (0x0074))
#define SOC_VENC_MST_VEDU_SRC_CADDR_STR_ADDR(base) ((base) + (0x0078))
#define SOC_VENC_MST_VEDU_SRC_CADDR_END_ADDR(base) ((base) + (0x007C))
#define SOC_VENC_MST_VEDU_SRC_VADDR_STR_ADDR(base) ((base) + (0x0080))
#define SOC_VENC_MST_VEDU_SRC_VADDR_END_ADDR(base) ((base) + (0x0084))
#define SOC_VENC_MST_VEDU_LAT_ADDR_STR_ADDR(base) ((base) + (0x0088))
#define SOC_VENC_MST_VEDU_LAT_ADDR_END_ADDR(base) ((base) + (0x008c))
#define SOC_VENC_MST_VEDU_PPS_ADDR_STR_ADDR(base) ((base) + (0x0090))
#define SOC_VENC_MST_VEDU_PPS_ADDR_END_ADDR(base) ((base) + (0x0094))
#define SOC_VENC_MST_RESERVED_21_ADDR(base) ((base) + (0x0098))
#define SOC_VENC_MST_VEDU_STRMADDR0_STR_ADDR(base) ((base) + (0x0100))
#define SOC_VENC_MST_VEDU_STRMADDR1_STR_ADDR(base) ((base) + (0x0104))
#define SOC_VENC_MST_VEDU_STRMADDR2_STR_ADDR(base) ((base) + (0x0108))
#define SOC_VENC_MST_VEDU_STRMADDR3_STR_ADDR(base) ((base) + (0x010C))
#define SOC_VENC_MST_VEDU_STRMADDR4_STR_ADDR(base) ((base) + (0x0110))
#define SOC_VENC_MST_VEDU_STRMADDR5_STR_ADDR(base) ((base) + (0x0114))
#define SOC_VENC_MST_VEDU_STRMADDR6_STR_ADDR(base) ((base) + (0x0118))
#define SOC_VENC_MST_VEDU_STRMADDR7_STR_ADDR(base) ((base) + (0x011C))
#define SOC_VENC_MST_VEDU_STRMADDR8_STR_ADDR(base) ((base) + (0x0120))
#define SOC_VENC_MST_VEDU_STRMADDR9_STR_ADDR(base) ((base) + (0x0124))
#define SOC_VENC_MST_VEDU_STRMADDR10_STR_ADDR(base) ((base) + (0x0128))
#define SOC_VENC_MST_VEDU_STRMADDR11_STR_ADDR(base) ((base) + (0x012C))
#define SOC_VENC_MST_VEDU_STRMADDR12_STR_ADDR(base) ((base) + (0x0130))
#define SOC_VENC_MST_VEDU_STRMADDR13_STR_ADDR(base) ((base) + (0x0134))
#define SOC_VENC_MST_VEDU_STRMADDR14_STR_ADDR(base) ((base) + (0x0138))
#define SOC_VENC_MST_VEDU_STRMADDR15_STR_ADDR(base) ((base) + (0x013C))
#define SOC_VENC_MST_VEDU_STRMADDR0_END_ADDR(base) ((base) + (0x0140))
#define SOC_VENC_MST_VEDU_STRMADDR1_END_ADDR(base) ((base) + (0x0144))
#define SOC_VENC_MST_VEDU_STRMADDR2_END_ADDR(base) ((base) + (0x0148))
#define SOC_VENC_MST_VEDU_STRMADDR3_END_ADDR(base) ((base) + (0x014C))
#define SOC_VENC_MST_VEDU_STRMADDR4_END_ADDR(base) ((base) + (0x0150))
#define SOC_VENC_MST_VEDU_STRMADDR5_END_ADDR(base) ((base) + (0x0154))
#define SOC_VENC_MST_VEDU_STRMADDR6_END_ADDR(base) ((base) + (0x0158))
#define SOC_VENC_MST_VEDU_STRMADDR7_END_ADDR(base) ((base) + (0x015C))
#define SOC_VENC_MST_VEDU_STRMADDR8_END_ADDR(base) ((base) + (0x0160))
#define SOC_VENC_MST_VEDU_STRMADDR9_END_ADDR(base) ((base) + (0x0164))
#define SOC_VENC_MST_VEDU_STRMADDR10_END_ADDR(base) ((base) + (0x0168))
#define SOC_VENC_MST_VEDU_STRMADDR11_END_ADDR(base) ((base) + (0x016C))
#define SOC_VENC_MST_VEDU_STRMADDR12_END_ADDR(base) ((base) + (0x0170))
#define SOC_VENC_MST_VEDU_STRMADDR13_END_ADDR(base) ((base) + (0x0174))
#define SOC_VENC_MST_VEDU_STRMADDR14_END_ADDR(base) ((base) + (0x0178))
#define SOC_VENC_MST_VEDU_STRMADDR15_END_ADDR(base) ((base) + (0x017C))
#define SOC_VENC_MST_RESERVED_23_ADDR(base) ((base) + (0x0180))
#define SOC_VENC_DFX_ERR_ADDR(base) ((base) + (0x0000))
#define SOC_VENC_DFX_RESERVED_1_ADDR(base) ((base) + (0x0004))
#define SOC_VENC_DFX_AR_R_CNT_ADDR(base) ((base) + (0x0010))
#define SOC_VENC_DFX_AW_W_CNT_ADDR(base) ((base) + (0x0014))
#define SOC_VENC_DFX_AW_B_CNT_ADDR(base) ((base) + (0x0018))
#define SOC_VENC_DFX_RESERVED_2_ADDR(base) ((base) + (0x001c))
#define SOC_VENC_dfx_AR_R_ID_ERR_ADDR(base) ((base) + (0x0020))
#define SOC_VENC_DFX_ERR_ARID_ADDR(base) ((base) + (0x0024))
#define SOC_VENC_DFX_ERR_RID_ADDR(base) ((base) + (0x0028))
#define SOC_VENC_RESERVED_3_ADDR(base) ((base) + (0x002c))
#define SOC_VENC_dfx_AW_W_B_ID_ERR_ADDR(base) ((base) + (0x0030))
#define SOC_VENC_DFX_ERR_AWID_ADDR(base) ((base) + (0x0034))
#define SOC_VENC_DFX_ERR_WID_ADDR(base) ((base) + (0x0038))
#define SOC_VENC_DFX_ERR_BID_ADDR(base) ((base) + (0x003c))
#define SOC_VENC_DFX_ARID_TX_0ERR_ADDR(base) ((base) + (0x0040))
#define SOC_VENC_DFX_ARID_TX_1ERR_ADDR(base) ((base) + (0x0044))
#define SOC_VENC_DFX_ARID_TX_2ERR_ADDR(base) ((base) + (0x0048))
#define SOC_VENC_RESERVED_4_ADDR(base) ((base) + (0x004c))
#define SOC_VENC_DFX_RID_RX_0ERR_ADDR(base) ((base) + (0x0050))
#define SOC_VENC_DFX_RID_RX_1ERR_ADDR(base) ((base) + (0x0054))
#define SOC_VENC_DFX_RID_RX_2ERR_ADDR(base) ((base) + (0x0058))
#define SOC_VENC_RESERVED_5_ADDR(base) ((base) + (0x005c))
#define SOC_VENC_DFX_ARID_RX_0ERR_ADDR(base) ((base) + (0x0060))
#define SOC_VENC_DFX_BID_RX_ERR_ADDR(base) ((base) + (0x0064))
#define SOC_VENC_RESERVED_6_ADDR(base) ((base) + (0x0068))
#define SOC_VENC_DFX_ARID_LEN_0ERR_ADDR(base) ((base) + (0x0070))
#define SOC_VENC_DFX_ARID_LEN_1ERR_ADDR(base) ((base) + (0x0074))
#define SOC_VENC_DFX_ARID_LEN_2ERR_ADDR(base) ((base) + (0x0078))
#define SOC_VENC_RESERVED_7_ADDR(base) ((base) + (0x007c))
#define SOC_VENC_DFX_AWLEN_CNT_ADDR(base) ((base) + (0x0080))
#define SOC_VENC_DFX_WLEN_CNT_ADDR(base) ((base) + (0x0084))
#define SOC_VENC_RESERVED_8_ADDR(base) ((base) + (0x0088))
#define SOC_VENC_DFX_RESP_ERR_ADDR(base) ((base) + (0x0090))
#define SOC_VENC_DFX_ERR_RESP_ADDR(base) ((base) + (0x0094))
#define SOC_VENC_DFX_LEN_ERR_ADDR(base) ((base) + (0x0098))
#define SOC_VENC_DFX_ERR_LEN_ADDR(base) ((base) + (0x009c))
#define SOC_VENC_RESERVED_9_ADDR(base) ((base) + (0x00a0))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_ve_eop_ns : 1;
        unsigned int int_ve_buffull_ns : 1;
        unsigned int reserved_0 : 1;
        unsigned int int_ve_pbitsover_ns : 1;
        unsigned int reserved_1 : 6;
        unsigned int int_vedu_slice_end_ns : 1;
        unsigned int reserved_2 : 5;
        unsigned int int_vedu_brkpt_ns : 1;
        unsigned int int_vedu_step_ns : 1;
        unsigned int reserved_3 : 9;
        unsigned int int_vedu_timeout_ns : 1;
        unsigned int reserved_4 : 2;
        unsigned int int_cfg_err_ns : 1;
        unsigned int reserved_5 : 1;
    } reg;
} SOC_VENC_VEDU_INTSTAT_NS_UNION;
#endif
#define SOC_VENC_VEDU_INTSTAT_NS_int_ve_eop_ns_START (0)
#define SOC_VENC_VEDU_INTSTAT_NS_int_ve_eop_ns_END (0)
#define SOC_VENC_VEDU_INTSTAT_NS_int_ve_buffull_ns_START (1)
#define SOC_VENC_VEDU_INTSTAT_NS_int_ve_buffull_ns_END (1)
#define SOC_VENC_VEDU_INTSTAT_NS_int_ve_pbitsover_ns_START (3)
#define SOC_VENC_VEDU_INTSTAT_NS_int_ve_pbitsover_ns_END (3)
#define SOC_VENC_VEDU_INTSTAT_NS_int_vedu_slice_end_ns_START (10)
#define SOC_VENC_VEDU_INTSTAT_NS_int_vedu_slice_end_ns_END (10)
#define SOC_VENC_VEDU_INTSTAT_NS_int_vedu_brkpt_ns_START (16)
#define SOC_VENC_VEDU_INTSTAT_NS_int_vedu_brkpt_ns_END (16)
#define SOC_VENC_VEDU_INTSTAT_NS_int_vedu_step_ns_START (17)
#define SOC_VENC_VEDU_INTSTAT_NS_int_vedu_step_ns_END (17)
#define SOC_VENC_VEDU_INTSTAT_NS_int_vedu_timeout_ns_START (27)
#define SOC_VENC_VEDU_INTSTAT_NS_int_vedu_timeout_ns_END (27)
#define SOC_VENC_VEDU_INTSTAT_NS_int_cfg_err_ns_START (30)
#define SOC_VENC_VEDU_INTSTAT_NS_int_cfg_err_ns_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enable_ve_eop_ns : 1;
        unsigned int enable_ve_buffull_ns : 1;
        unsigned int reserved_0 : 1;
        unsigned int enable_ve_pbitsover_ns : 1;
        unsigned int reserved_1 : 6;
        unsigned int enable_vedu_slice_end_ns : 1;
        unsigned int reserved_2 : 5;
        unsigned int enable_vedu_brkpt_ns : 1;
        unsigned int enable_vedu_step_ns : 1;
        unsigned int reserved_3 : 9;
        unsigned int enable_vedu_timeout_ns : 1;
        unsigned int reserved_4 : 2;
        unsigned int enable_cfg_err_ns : 1;
        unsigned int reserved_5 : 1;
    } reg;
} SOC_VENC_VEDU_INTMASK_NS_UNION;
#endif
#define SOC_VENC_VEDU_INTMASK_NS_enable_ve_eop_ns_START (0)
#define SOC_VENC_VEDU_INTMASK_NS_enable_ve_eop_ns_END (0)
#define SOC_VENC_VEDU_INTMASK_NS_enable_ve_buffull_ns_START (1)
#define SOC_VENC_VEDU_INTMASK_NS_enable_ve_buffull_ns_END (1)
#define SOC_VENC_VEDU_INTMASK_NS_enable_ve_pbitsover_ns_START (3)
#define SOC_VENC_VEDU_INTMASK_NS_enable_ve_pbitsover_ns_END (3)
#define SOC_VENC_VEDU_INTMASK_NS_enable_vedu_slice_end_ns_START (10)
#define SOC_VENC_VEDU_INTMASK_NS_enable_vedu_slice_end_ns_END (10)
#define SOC_VENC_VEDU_INTMASK_NS_enable_vedu_brkpt_ns_START (16)
#define SOC_VENC_VEDU_INTMASK_NS_enable_vedu_brkpt_ns_END (16)
#define SOC_VENC_VEDU_INTMASK_NS_enable_vedu_step_ns_START (17)
#define SOC_VENC_VEDU_INTMASK_NS_enable_vedu_step_ns_END (17)
#define SOC_VENC_VEDU_INTMASK_NS_enable_vedu_timeout_ns_START (27)
#define SOC_VENC_VEDU_INTMASK_NS_enable_vedu_timeout_ns_END (27)
#define SOC_VENC_VEDU_INTMASK_NS_enable_cfg_err_ns_START (30)
#define SOC_VENC_VEDU_INTMASK_NS_enable_cfg_err_ns_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rint_ve_eop_ns : 1;
        unsigned int rint_ve_buffull_ns : 1;
        unsigned int reserved_0 : 1;
        unsigned int rint_ve_pbitsover_ns : 1;
        unsigned int reserved_1 : 6;
        unsigned int rint_vedu_slice_end_ns : 1;
        unsigned int reserved_2 : 5;
        unsigned int rint_vedu_brkpt_ns : 1;
        unsigned int rint_vedu_step_ns : 1;
        unsigned int reserved_3 : 9;
        unsigned int rint_vedu_timeout_ns : 1;
        unsigned int reserved_4 : 2;
        unsigned int rint_cfg_err_ns : 1;
        unsigned int reserved_5 : 1;
    } reg;
} SOC_VENC_VEDU_RAWINT_NS_UNION;
#endif
#define SOC_VENC_VEDU_RAWINT_NS_rint_ve_eop_ns_START (0)
#define SOC_VENC_VEDU_RAWINT_NS_rint_ve_eop_ns_END (0)
#define SOC_VENC_VEDU_RAWINT_NS_rint_ve_buffull_ns_START (1)
#define SOC_VENC_VEDU_RAWINT_NS_rint_ve_buffull_ns_END (1)
#define SOC_VENC_VEDU_RAWINT_NS_rint_ve_pbitsover_ns_START (3)
#define SOC_VENC_VEDU_RAWINT_NS_rint_ve_pbitsover_ns_END (3)
#define SOC_VENC_VEDU_RAWINT_NS_rint_vedu_slice_end_ns_START (10)
#define SOC_VENC_VEDU_RAWINT_NS_rint_vedu_slice_end_ns_END (10)
#define SOC_VENC_VEDU_RAWINT_NS_rint_vedu_brkpt_ns_START (16)
#define SOC_VENC_VEDU_RAWINT_NS_rint_vedu_brkpt_ns_END (16)
#define SOC_VENC_VEDU_RAWINT_NS_rint_vedu_step_ns_START (17)
#define SOC_VENC_VEDU_RAWINT_NS_rint_vedu_step_ns_END (17)
#define SOC_VENC_VEDU_RAWINT_NS_rint_vedu_timeout_ns_START (27)
#define SOC_VENC_VEDU_RAWINT_NS_rint_vedu_timeout_ns_END (27)
#define SOC_VENC_VEDU_RAWINT_NS_rint_cfg_err_ns_START (30)
#define SOC_VENC_VEDU_RAWINT_NS_rint_cfg_err_ns_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clr_ve_eop_ns : 1;
        unsigned int clr_ve_buffull_ns : 1;
        unsigned int reserved_0 : 1;
        unsigned int clr_ve_pbitsover_ns : 1;
        unsigned int reserved_1 : 6;
        unsigned int clr_vedu_slice_end_ns : 1;
        unsigned int reserved_2 : 5;
        unsigned int clr_vedu_brkpt_ns : 1;
        unsigned int clr_vedu_step_ns : 1;
        unsigned int reserved_3 : 9;
        unsigned int clr_vedu_timeout_ns : 1;
        unsigned int reserved_4 : 2;
        unsigned int clr_cfg_err_ns : 1;
        unsigned int reserved_5 : 1;
    } reg;
} SOC_VENC_VEDU_INTCLR_NS_UNION;
#endif
#define SOC_VENC_VEDU_INTCLR_NS_clr_ve_eop_ns_START (0)
#define SOC_VENC_VEDU_INTCLR_NS_clr_ve_eop_ns_END (0)
#define SOC_VENC_VEDU_INTCLR_NS_clr_ve_buffull_ns_START (1)
#define SOC_VENC_VEDU_INTCLR_NS_clr_ve_buffull_ns_END (1)
#define SOC_VENC_VEDU_INTCLR_NS_clr_ve_pbitsover_ns_START (3)
#define SOC_VENC_VEDU_INTCLR_NS_clr_ve_pbitsover_ns_END (3)
#define SOC_VENC_VEDU_INTCLR_NS_clr_vedu_slice_end_ns_START (10)
#define SOC_VENC_VEDU_INTCLR_NS_clr_vedu_slice_end_ns_END (10)
#define SOC_VENC_VEDU_INTCLR_NS_clr_vedu_brkpt_ns_START (16)
#define SOC_VENC_VEDU_INTCLR_NS_clr_vedu_brkpt_ns_END (16)
#define SOC_VENC_VEDU_INTCLR_NS_clr_vedu_step_ns_START (17)
#define SOC_VENC_VEDU_INTCLR_NS_clr_vedu_step_ns_END (17)
#define SOC_VENC_VEDU_INTCLR_NS_clr_vedu_timeout_ns_START (27)
#define SOC_VENC_VEDU_INTCLR_NS_clr_vedu_timeout_ns_END (27)
#define SOC_VENC_VEDU_INTCLR_NS_clr_cfg_err_ns_START (30)
#define SOC_VENC_VEDU_INTCLR_NS_clr_cfg_err_ns_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_vstart : 1;
        unsigned int reserved_0 : 15;
        unsigned int vcpi_vstep : 1;
        unsigned int reserved_1 : 15;
    } reg;
} SOC_VENC_VEDU_START_UNION;
#endif
#define SOC_VENC_VEDU_START_vcpi_vstart_START (0)
#define SOC_VENC_VEDU_START_vcpi_vstart_END (0)
#define SOC_VENC_VEDU_START_vcpi_vstep_START (16)
#define SOC_VENC_VEDU_START_vcpi_vstep_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_vedsel : 1;
        unsigned int vcpi_lcu_time_sel : 1;
        unsigned int vcpi_cfg_mode : 1;
        unsigned int vcpi_protocol : 2;
        unsigned int vcpi_slice_int_en : 1;
        unsigned int vcpi_sao_luma : 1;
        unsigned int vcpi_sao_chroma : 1;
        unsigned int vcpi_rec_cmp_en : 1;
        unsigned int vcpi_img_improve_en : 1;
        unsigned int vcpi_frame_type : 2;
        unsigned int vcpi_entropy_mode : 1;
        unsigned int reserved_0 : 3;
        unsigned int vcpi_idr_pic : 1;
        unsigned int vcpi_pskp_en : 1;
        unsigned int vcpi_trans_mode : 2;
        unsigned int reserved_1 : 4;
        unsigned int vcpi_ref_cmp_en : 1;
        unsigned int vcpi_tiles_en : 1;
        unsigned int vcpi_lcu_size : 2;
        unsigned int vcpi_time_en : 2;
        unsigned int vcpi_bkp_en : 1;
        unsigned int vcpi_dbgmod : 1;
    } reg;
} SOC_VENC_VEDU_MODE_UNION;
#endif
#define SOC_VENC_VEDU_MODE_vcpi_vedsel_START (0)
#define SOC_VENC_VEDU_MODE_vcpi_vedsel_END (0)
#define SOC_VENC_VEDU_MODE_vcpi_lcu_time_sel_START (1)
#define SOC_VENC_VEDU_MODE_vcpi_lcu_time_sel_END (1)
#define SOC_VENC_VEDU_MODE_vcpi_cfg_mode_START (2)
#define SOC_VENC_VEDU_MODE_vcpi_cfg_mode_END (2)
#define SOC_VENC_VEDU_MODE_vcpi_protocol_START (3)
#define SOC_VENC_VEDU_MODE_vcpi_protocol_END (4)
#define SOC_VENC_VEDU_MODE_vcpi_slice_int_en_START (5)
#define SOC_VENC_VEDU_MODE_vcpi_slice_int_en_END (5)
#define SOC_VENC_VEDU_MODE_vcpi_sao_luma_START (6)
#define SOC_VENC_VEDU_MODE_vcpi_sao_luma_END (6)
#define SOC_VENC_VEDU_MODE_vcpi_sao_chroma_START (7)
#define SOC_VENC_VEDU_MODE_vcpi_sao_chroma_END (7)
#define SOC_VENC_VEDU_MODE_vcpi_rec_cmp_en_START (8)
#define SOC_VENC_VEDU_MODE_vcpi_rec_cmp_en_END (8)
#define SOC_VENC_VEDU_MODE_vcpi_img_improve_en_START (9)
#define SOC_VENC_VEDU_MODE_vcpi_img_improve_en_END (9)
#define SOC_VENC_VEDU_MODE_vcpi_frame_type_START (10)
#define SOC_VENC_VEDU_MODE_vcpi_frame_type_END (11)
#define SOC_VENC_VEDU_MODE_vcpi_entropy_mode_START (12)
#define SOC_VENC_VEDU_MODE_vcpi_entropy_mode_END (12)
#define SOC_VENC_VEDU_MODE_vcpi_idr_pic_START (16)
#define SOC_VENC_VEDU_MODE_vcpi_idr_pic_END (16)
#define SOC_VENC_VEDU_MODE_vcpi_pskp_en_START (17)
#define SOC_VENC_VEDU_MODE_vcpi_pskp_en_END (17)
#define SOC_VENC_VEDU_MODE_vcpi_trans_mode_START (18)
#define SOC_VENC_VEDU_MODE_vcpi_trans_mode_END (19)
#define SOC_VENC_VEDU_MODE_vcpi_ref_cmp_en_START (24)
#define SOC_VENC_VEDU_MODE_vcpi_ref_cmp_en_END (24)
#define SOC_VENC_VEDU_MODE_vcpi_tiles_en_START (25)
#define SOC_VENC_VEDU_MODE_vcpi_tiles_en_END (25)
#define SOC_VENC_VEDU_MODE_vcpi_lcu_size_START (26)
#define SOC_VENC_VEDU_MODE_vcpi_lcu_size_END (27)
#define SOC_VENC_VEDU_MODE_vcpi_time_en_START (28)
#define SOC_VENC_VEDU_MODE_vcpi_time_en_END (29)
#define SOC_VENC_VEDU_MODE_vcpi_bkp_en_START (30)
#define SOC_VENC_VEDU_MODE_vcpi_bkp_en_END (30)
#define SOC_VENC_VEDU_MODE_vcpi_dbgmod_START (31)
#define SOC_VENC_VEDU_MODE_vcpi_dbgmod_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_tile_width : 9;
        unsigned int reserved_0 : 7;
        unsigned int vcpi_tile_height : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_VENC_VEDU_TILE_SIZE_UNION;
#endif
#define SOC_VENC_VEDU_TILE_SIZE_vcpi_tile_width_START (0)
#define SOC_VENC_VEDU_TILE_SIZE_vcpi_tile_width_END (8)
#define SOC_VENC_VEDU_TILE_SIZE_vcpi_tile_height_START (16)
#define SOC_VENC_VEDU_TILE_SIZE_vcpi_tile_height_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_slice_size : 16;
        unsigned int vcpi_slcspilt_mod : 1;
        unsigned int vcpi_multislc_en : 1;
        unsigned int reserved : 14;
    } reg;
} SOC_VENC_VEDU_SLICE_UNION;
#endif
#define SOC_VENC_VEDU_SLICE_vcpi_slice_size_START (0)
#define SOC_VENC_VEDU_SLICE_vcpi_slice_size_END (15)
#define SOC_VENC_VEDU_SLICE_vcpi_slcspilt_mod_START (16)
#define SOC_VENC_VEDU_SLICE_vcpi_slcspilt_mod_END (16)
#define SOC_VENC_VEDU_SLICE_vcpi_multislc_en_START (17)
#define SOC_VENC_VEDU_SLICE_vcpi_multislc_en_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_cr_qp_offset : 5;
        unsigned int vcpi_cb_qp_offset : 5;
        unsigned int vcpi_frm_qp : 6;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_VEDU_QPCFG_UNION;
#endif
#define SOC_VENC_VEDU_QPCFG_vcpi_cr_qp_offset_START (0)
#define SOC_VENC_VEDU_QPCFG_vcpi_cr_qp_offset_END (4)
#define SOC_VENC_VEDU_QPCFG_vcpi_cb_qp_offset_START (5)
#define SOC_VENC_VEDU_QPCFG_vcpi_cb_qp_offset_END (9)
#define SOC_VENC_VEDU_QPCFG_vcpi_frm_qp_START (10)
#define SOC_VENC_VEDU_QPCFG_vcpi_frm_qp_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_cnt_clr : 32;
    } reg;
} SOC_VENC_VEDU_CNTCLR_UNION;
#endif
#define SOC_VENC_VEDU_CNTCLR_vcpi_cnt_clr_START (0)
#define SOC_VENC_VEDU_CNTCLR_vcpi_cnt_clr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_frame_no : 32;
    } reg;
} SOC_VENC_VEDU_FRAMENO_UNION;
#endif
#define SOC_VENC_VEDU_FRAMENO_vcpi_frame_no_START (0)
#define SOC_VENC_VEDU_FRAMENO_vcpi_frame_no_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_dblk_beta : 4;
        unsigned int vcpi_dblk_alpha : 4;
        unsigned int vcpi_dblk_filter_flag : 2;
        unsigned int reserved : 22;
    } reg;
} SOC_VENC_VEDU_DBLKCFG_UNION;
#endif
#define SOC_VENC_VEDU_DBLKCFG_vcpi_dblk_beta_START (0)
#define SOC_VENC_VEDU_DBLKCFG_vcpi_dblk_beta_END (3)
#define SOC_VENC_VEDU_DBLKCFG_vcpi_dblk_alpha_START (4)
#define SOC_VENC_VEDU_DBLKCFG_vcpi_dblk_alpha_END (7)
#define SOC_VENC_VEDU_DBLKCFG_vcpi_dblk_filter_flag_START (8)
#define SOC_VENC_VEDU_DBLKCFG_vcpi_dblk_filter_flag_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_intra_lowpow : 1;
        unsigned int vcpi_fme_lowpow : 1;
        unsigned int vcpi_ime_lowpow : 1;
        unsigned int reserved_0 : 13;
        unsigned int tqitq_gtck_en : 1;
        unsigned int mrg_gtck_en : 1;
        unsigned int fme_gtck_en : 1;
        unsigned int vcpi_clkgate_en : 2;
        unsigned int vcpi_mem_clkgate_en : 1;
        unsigned int vcpi_protocol_clkgate_en : 1;
        unsigned int reserved_1 : 9;
    } reg;
} SOC_VENC_VEDU_LOW_POWER_UNION;
#endif
#define SOC_VENC_VEDU_LOW_POWER_vcpi_intra_lowpow_START (0)
#define SOC_VENC_VEDU_LOW_POWER_vcpi_intra_lowpow_END (0)
#define SOC_VENC_VEDU_LOW_POWER_vcpi_fme_lowpow_START (1)
#define SOC_VENC_VEDU_LOW_POWER_vcpi_fme_lowpow_END (1)
#define SOC_VENC_VEDU_LOW_POWER_vcpi_ime_lowpow_START (2)
#define SOC_VENC_VEDU_LOW_POWER_vcpi_ime_lowpow_END (2)
#define SOC_VENC_VEDU_LOW_POWER_tqitq_gtck_en_START (16)
#define SOC_VENC_VEDU_LOW_POWER_tqitq_gtck_en_END (16)
#define SOC_VENC_VEDU_LOW_POWER_mrg_gtck_en_START (17)
#define SOC_VENC_VEDU_LOW_POWER_mrg_gtck_en_END (17)
#define SOC_VENC_VEDU_LOW_POWER_fme_gtck_en_START (18)
#define SOC_VENC_VEDU_LOW_POWER_fme_gtck_en_END (18)
#define SOC_VENC_VEDU_LOW_POWER_vcpi_clkgate_en_START (19)
#define SOC_VENC_VEDU_LOW_POWER_vcpi_clkgate_en_END (20)
#define SOC_VENC_VEDU_LOW_POWER_vcpi_mem_clkgate_en_START (21)
#define SOC_VENC_VEDU_LOW_POWER_vcpi_mem_clkgate_en_END (21)
#define SOC_VENC_VEDU_LOW_POWER_vcpi_protocol_clkgate_en_START (22)
#define SOC_VENC_VEDU_LOW_POWER_vcpi_protocol_clkgate_en_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_imgwidth_pix : 13;
        unsigned int reserved_0 : 3;
        unsigned int vcpi_imgheight_pix : 13;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_VENC_VEDU_PICSIZE_PIX_UNION;
#endif
#define SOC_VENC_VEDU_PICSIZE_PIX_vcpi_imgwidth_pix_START (0)
#define SOC_VENC_VEDU_PICSIZE_PIX_vcpi_imgwidth_pix_END (12)
#define SOC_VENC_VEDU_PICSIZE_PIX_vcpi_imgheight_pix_START (16)
#define SOC_VENC_VEDU_PICSIZE_PIX_vcpi_imgheight_pix_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_bp_lcu_x : 9;
        unsigned int reserved_0 : 7;
        unsigned int vcpi_bp_lcu_y : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_VENC_VEDU_BP_POS_UNION;
#endif
#define SOC_VENC_VEDU_BP_POS_vcpi_bp_lcu_x_START (0)
#define SOC_VENC_VEDU_BP_POS_vcpi_bp_lcu_x_END (8)
#define SOC_VENC_VEDU_BP_POS_vcpi_bp_lcu_y_START (16)
#define SOC_VENC_VEDU_BP_POS_vcpi_bp_lcu_y_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vedu_timeout : 32;
    } reg;
} SOC_VENC_VEDU_TIMEOUT_UNION;
#endif
#define SOC_VENC_VEDU_TIMEOUT_vedu_timeout_START (0)
#define SOC_VENC_VEDU_TIMEOUT_vedu_timeout_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_r_outstanding : 5;
        unsigned int vcpi_w_outstanding : 5;
        unsigned int reserved : 22;
    } reg;
} SOC_VENC_VEDU_OUTSTD_UNION;
#endif
#define SOC_VENC_VEDU_OUTSTD_vcpi_r_outstanding_START (0)
#define SOC_VENC_VEDU_OUTSTD_vcpi_r_outstanding_END (4)
#define SOC_VENC_VEDU_OUTSTD_vcpi_w_outstanding_START (5)
#define SOC_VENC_VEDU_OUTSTD_vcpi_w_outstanding_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vedu_timer : 32;
    } reg;
} SOC_VENC_VEDU_TIMER_UNION;
#endif
#define SOC_VENC_VEDU_TIMER_vedu_timer_START (0)
#define SOC_VENC_VEDU_TIMER_vedu_timer_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int idle_timer : 32;
    } reg;
} SOC_VENC_VEDU_IDLE_TIMER_UNION;
#endif
#define SOC_VENC_VEDU_IDLE_TIMER_idle_timer_START (0)
#define SOC_VENC_VEDU_IDLE_TIMER_idle_timer_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vedu_version0 : 32;
    } reg;
} SOC_VENC_VEDU_VERSION0_UNION;
#endif
#define SOC_VENC_VEDU_VERSION0_vedu_version0_START (0)
#define SOC_VENC_VEDU_VERSION0_vedu_version0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vedu_version1 : 32;
    } reg;
} SOC_VENC_VEDU_VERSION1_UNION;
#endif
#define SOC_VENC_VEDU_VERSION1_vedu_version1_START (0)
#define SOC_VENC_VEDU_VERSION1_vedu_version1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_frame_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_VEDU_FRAME_CNT_UNION;
#endif
#define SOC_VENC_VEDU_FRAME_CNT_vcpi_frame_cnt_START (0)
#define SOC_VENC_VEDU_FRAME_CNT_vcpi_frame_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_sw_width : 7;
        unsigned int reserved_0 : 9;
        unsigned int vcpi_sw_height : 6;
        unsigned int reserved_1 : 10;
    } reg;
} SOC_VENC_VEDU_SW_SIZE_UNION;
#endif
#define SOC_VENC_VEDU_SW_SIZE_vcpi_sw_width_START (0)
#define SOC_VENC_VEDU_SW_SIZE_vcpi_sw_width_END (6)
#define SOC_VENC_VEDU_SW_SIZE_vcpi_sw_height_START (16)
#define SOC_VENC_VEDU_SW_SIZE_vcpi_sw_height_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_tmv_wr_rd_avail : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_VENC_VEDU_MV_LOAD_UNION;
#endif
#define SOC_VENC_VEDU_MV_LOAD_vcpi_tmv_wr_rd_avail_START (0)
#define SOC_VENC_VEDU_MV_LOAD_vcpi_tmv_wr_rd_avail_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_cross_slice : 1;
        unsigned int vcpi_cross_tile : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_VENC_VEDU_CROSS_TILE_SLC_UNION;
#endif
#define SOC_VENC_VEDU_CROSS_TILE_SLC_vcpi_cross_slice_START (0)
#define SOC_VENC_VEDU_CROSS_TILE_SLC_vcpi_cross_slice_END (0)
#define SOC_VENC_VEDU_CROSS_TILE_SLC_vcpi_cross_tile_START (1)
#define SOC_VENC_VEDU_CROSS_TILE_SLC_vcpi_cross_tile_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mem_ctrl_s : 16;
        unsigned int mem_ctrl_d1w2r : 16;
    } reg;
} SOC_VENC_VEDU_MEM_CTRL_UNION;
#endif
#define SOC_VENC_VEDU_MEM_CTRL_mem_ctrl_s_START (0)
#define SOC_VENC_VEDU_MEM_CTRL_mem_ctrl_s_END (15)
#define SOC_VENC_VEDU_MEM_CTRL_mem_ctrl_d1w2r_START (16)
#define SOC_VENC_VEDU_MEM_CTRL_mem_ctrl_d1w2r_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osd0_en : 1;
        unsigned int osd1_en : 1;
        unsigned int osd2_en : 1;
        unsigned int osd3_en : 1;
        unsigned int osd4_en : 1;
        unsigned int osd5_en : 1;
        unsigned int osd6_en : 1;
        unsigned int osd7_en : 1;
        unsigned int osd0_absqp : 1;
        unsigned int osd1_absqp : 1;
        unsigned int osd2_absqp : 1;
        unsigned int osd3_absqp : 1;
        unsigned int osd4_absqp : 1;
        unsigned int osd5_absqp : 1;
        unsigned int osd6_absqp : 1;
        unsigned int osd7_absqp : 1;
        unsigned int osd_en : 1;
        unsigned int reserved : 15;
    } reg;
} SOC_VENC_VEDU_OSD_ENABLE_UNION;
#endif
#define SOC_VENC_VEDU_OSD_ENABLE_osd0_en_START (0)
#define SOC_VENC_VEDU_OSD_ENABLE_osd0_en_END (0)
#define SOC_VENC_VEDU_OSD_ENABLE_osd1_en_START (1)
#define SOC_VENC_VEDU_OSD_ENABLE_osd1_en_END (1)
#define SOC_VENC_VEDU_OSD_ENABLE_osd2_en_START (2)
#define SOC_VENC_VEDU_OSD_ENABLE_osd2_en_END (2)
#define SOC_VENC_VEDU_OSD_ENABLE_osd3_en_START (3)
#define SOC_VENC_VEDU_OSD_ENABLE_osd3_en_END (3)
#define SOC_VENC_VEDU_OSD_ENABLE_osd4_en_START (4)
#define SOC_VENC_VEDU_OSD_ENABLE_osd4_en_END (4)
#define SOC_VENC_VEDU_OSD_ENABLE_osd5_en_START (5)
#define SOC_VENC_VEDU_OSD_ENABLE_osd5_en_END (5)
#define SOC_VENC_VEDU_OSD_ENABLE_osd6_en_START (6)
#define SOC_VENC_VEDU_OSD_ENABLE_osd6_en_END (6)
#define SOC_VENC_VEDU_OSD_ENABLE_osd7_en_START (7)
#define SOC_VENC_VEDU_OSD_ENABLE_osd7_en_END (7)
#define SOC_VENC_VEDU_OSD_ENABLE_osd0_absqp_START (8)
#define SOC_VENC_VEDU_OSD_ENABLE_osd0_absqp_END (8)
#define SOC_VENC_VEDU_OSD_ENABLE_osd1_absqp_START (9)
#define SOC_VENC_VEDU_OSD_ENABLE_osd1_absqp_END (9)
#define SOC_VENC_VEDU_OSD_ENABLE_osd2_absqp_START (10)
#define SOC_VENC_VEDU_OSD_ENABLE_osd2_absqp_END (10)
#define SOC_VENC_VEDU_OSD_ENABLE_osd3_absqp_START (11)
#define SOC_VENC_VEDU_OSD_ENABLE_osd3_absqp_END (11)
#define SOC_VENC_VEDU_OSD_ENABLE_osd4_absqp_START (12)
#define SOC_VENC_VEDU_OSD_ENABLE_osd4_absqp_END (12)
#define SOC_VENC_VEDU_OSD_ENABLE_osd5_absqp_START (13)
#define SOC_VENC_VEDU_OSD_ENABLE_osd5_absqp_END (13)
#define SOC_VENC_VEDU_OSD_ENABLE_osd6_absqp_START (14)
#define SOC_VENC_VEDU_OSD_ENABLE_osd6_absqp_END (14)
#define SOC_VENC_VEDU_OSD_ENABLE_osd7_absqp_START (15)
#define SOC_VENC_VEDU_OSD_ENABLE_osd7_absqp_END (15)
#define SOC_VENC_VEDU_OSD_ENABLE_osd_en_START (16)
#define SOC_VENC_VEDU_OSD_ENABLE_osd_en_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osd0_x : 13;
        unsigned int reserved_0: 3;
        unsigned int osd0_y : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_VENC_VEDU_OSD_POS_0_UNION;
#endif
#define SOC_VENC_VEDU_OSD_POS_0_osd0_x_START (0)
#define SOC_VENC_VEDU_OSD_POS_0_osd0_x_END (12)
#define SOC_VENC_VEDU_OSD_POS_0_osd0_y_START (16)
#define SOC_VENC_VEDU_OSD_POS_0_osd0_y_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osd1_x : 13;
        unsigned int reserved_0: 3;
        unsigned int osd1_y : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_VENC_VEDU_OSD_POS_1_UNION;
#endif
#define SOC_VENC_VEDU_OSD_POS_1_osd1_x_START (0)
#define SOC_VENC_VEDU_OSD_POS_1_osd1_x_END (12)
#define SOC_VENC_VEDU_OSD_POS_1_osd1_y_START (16)
#define SOC_VENC_VEDU_OSD_POS_1_osd1_y_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osd2_x : 13;
        unsigned int reserved_0: 3;
        unsigned int osd2_y : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_VENC_VEDU_OSD_POS_2_UNION;
#endif
#define SOC_VENC_VEDU_OSD_POS_2_osd2_x_START (0)
#define SOC_VENC_VEDU_OSD_POS_2_osd2_x_END (12)
#define SOC_VENC_VEDU_OSD_POS_2_osd2_y_START (16)
#define SOC_VENC_VEDU_OSD_POS_2_osd2_y_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osd3_x : 13;
        unsigned int reserved_0: 3;
        unsigned int osd3_y : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_VENC_VEDU_OSD_POS_3_UNION;
#endif
#define SOC_VENC_VEDU_OSD_POS_3_osd3_x_START (0)
#define SOC_VENC_VEDU_OSD_POS_3_osd3_x_END (12)
#define SOC_VENC_VEDU_OSD_POS_3_osd3_y_START (16)
#define SOC_VENC_VEDU_OSD_POS_3_osd3_y_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osd4_x : 13;
        unsigned int reserved_0: 3;
        unsigned int osd4_y : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_VENC_VEDU_OSD_POS_4_UNION;
#endif
#define SOC_VENC_VEDU_OSD_POS_4_osd4_x_START (0)
#define SOC_VENC_VEDU_OSD_POS_4_osd4_x_END (12)
#define SOC_VENC_VEDU_OSD_POS_4_osd4_y_START (16)
#define SOC_VENC_VEDU_OSD_POS_4_osd4_y_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osd5_x : 13;
        unsigned int reserved_0: 3;
        unsigned int osd5_y : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_VENC_VEDU_OSD_POS_5_UNION;
#endif
#define SOC_VENC_VEDU_OSD_POS_5_osd5_x_START (0)
#define SOC_VENC_VEDU_OSD_POS_5_osd5_x_END (12)
#define SOC_VENC_VEDU_OSD_POS_5_osd5_y_START (16)
#define SOC_VENC_VEDU_OSD_POS_5_osd5_y_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osd6_x : 13;
        unsigned int reserved_0: 3;
        unsigned int osd6_y : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_VENC_VEDU_OSD_POS_6_UNION;
#endif
#define SOC_VENC_VEDU_OSD_POS_6_osd6_x_START (0)
#define SOC_VENC_VEDU_OSD_POS_6_osd6_x_END (12)
#define SOC_VENC_VEDU_OSD_POS_6_osd6_y_START (16)
#define SOC_VENC_VEDU_OSD_POS_6_osd6_y_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osd7_x : 13;
        unsigned int reserved_0: 3;
        unsigned int osd7_y : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_VENC_VEDU_OSD_POS_7_UNION;
#endif
#define SOC_VENC_VEDU_OSD_POS_7_osd7_x_START (0)
#define SOC_VENC_VEDU_OSD_POS_7_osd7_x_END (12)
#define SOC_VENC_VEDU_OSD_POS_7_osd7_y_START (16)
#define SOC_VENC_VEDU_OSD_POS_7_osd7_y_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osd0_w : 13;
        unsigned int reserved_0: 3;
        unsigned int osd0_h : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_VENC_VEDU_OSD_SIZE_0_UNION;
#endif
#define SOC_VENC_VEDU_OSD_SIZE_0_osd0_w_START (0)
#define SOC_VENC_VEDU_OSD_SIZE_0_osd0_w_END (12)
#define SOC_VENC_VEDU_OSD_SIZE_0_osd0_h_START (16)
#define SOC_VENC_VEDU_OSD_SIZE_0_osd0_h_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osd1_w : 13;
        unsigned int reserved_0: 3;
        unsigned int osd1_h : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_VENC_VEDU_OSD_SIZE_1_UNION;
#endif
#define SOC_VENC_VEDU_OSD_SIZE_1_osd1_w_START (0)
#define SOC_VENC_VEDU_OSD_SIZE_1_osd1_w_END (12)
#define SOC_VENC_VEDU_OSD_SIZE_1_osd1_h_START (16)
#define SOC_VENC_VEDU_OSD_SIZE_1_osd1_h_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osd2_w : 13;
        unsigned int reserved_0: 3;
        unsigned int osd2_h : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_VENC_VEDU_OSD_SIZE_2_UNION;
#endif
#define SOC_VENC_VEDU_OSD_SIZE_2_osd2_w_START (0)
#define SOC_VENC_VEDU_OSD_SIZE_2_osd2_w_END (12)
#define SOC_VENC_VEDU_OSD_SIZE_2_osd2_h_START (16)
#define SOC_VENC_VEDU_OSD_SIZE_2_osd2_h_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osd3_w : 13;
        unsigned int reserved_0: 3;
        unsigned int osd3_h : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_VENC_VEDU_OSD_SIZE_3_UNION;
#endif
#define SOC_VENC_VEDU_OSD_SIZE_3_osd3_w_START (0)
#define SOC_VENC_VEDU_OSD_SIZE_3_osd3_w_END (12)
#define SOC_VENC_VEDU_OSD_SIZE_3_osd3_h_START (16)
#define SOC_VENC_VEDU_OSD_SIZE_3_osd3_h_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osd4_w : 13;
        unsigned int reserved_0: 3;
        unsigned int osd4_h : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_VENC_VEDU_OSD_SIZE_4_UNION;
#endif
#define SOC_VENC_VEDU_OSD_SIZE_4_osd4_w_START (0)
#define SOC_VENC_VEDU_OSD_SIZE_4_osd4_w_END (12)
#define SOC_VENC_VEDU_OSD_SIZE_4_osd4_h_START (16)
#define SOC_VENC_VEDU_OSD_SIZE_4_osd4_h_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osd5_w : 13;
        unsigned int reserved_0: 3;
        unsigned int osd5_h : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_VENC_VEDU_OSD_SIZE_5_UNION;
#endif
#define SOC_VENC_VEDU_OSD_SIZE_5_osd5_w_START (0)
#define SOC_VENC_VEDU_OSD_SIZE_5_osd5_w_END (12)
#define SOC_VENC_VEDU_OSD_SIZE_5_osd5_h_START (16)
#define SOC_VENC_VEDU_OSD_SIZE_5_osd5_h_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osd6_w : 13;
        unsigned int reserved_0: 3;
        unsigned int osd6_h : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_VENC_VEDU_OSD_SIZE_6_UNION;
#endif
#define SOC_VENC_VEDU_OSD_SIZE_6_osd6_w_START (0)
#define SOC_VENC_VEDU_OSD_SIZE_6_osd6_w_END (12)
#define SOC_VENC_VEDU_OSD_SIZE_6_osd6_h_START (16)
#define SOC_VENC_VEDU_OSD_SIZE_6_osd6_h_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osd7_w : 13;
        unsigned int reserved_0: 3;
        unsigned int osd7_h : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_VENC_VEDU_OSD_SIZE_7_UNION;
#endif
#define SOC_VENC_VEDU_OSD_SIZE_7_osd7_w_START (0)
#define SOC_VENC_VEDU_OSD_SIZE_7_osd7_w_END (12)
#define SOC_VENC_VEDU_OSD_SIZE_7_osd7_h_START (16)
#define SOC_VENC_VEDU_OSD_SIZE_7_osd7_h_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osd0_layer_id : 3;
        unsigned int reserved_0 : 1;
        unsigned int osd1_layer_id : 3;
        unsigned int reserved_1 : 1;
        unsigned int osd2_layer_id : 3;
        unsigned int reserved_2 : 1;
        unsigned int osd3_layer_id : 3;
        unsigned int reserved_3 : 1;
        unsigned int osd4_layer_id : 3;
        unsigned int reserved_4 : 1;
        unsigned int osd5_layer_id : 3;
        unsigned int reserved_5 : 1;
        unsigned int osd6_layer_id : 3;
        unsigned int reserved_6 : 1;
        unsigned int osd7_layer_id : 3;
        unsigned int reserved_7 : 1;
    } reg;
} SOC_VENC_VEDU_OSD_LAYERID_UNION;
#endif
#define SOC_VENC_VEDU_OSD_LAYERID_osd0_layer_id_START (0)
#define SOC_VENC_VEDU_OSD_LAYERID_osd0_layer_id_END (2)
#define SOC_VENC_VEDU_OSD_LAYERID_osd1_layer_id_START (4)
#define SOC_VENC_VEDU_OSD_LAYERID_osd1_layer_id_END (6)
#define SOC_VENC_VEDU_OSD_LAYERID_osd2_layer_id_START (8)
#define SOC_VENC_VEDU_OSD_LAYERID_osd2_layer_id_END (10)
#define SOC_VENC_VEDU_OSD_LAYERID_osd3_layer_id_START (12)
#define SOC_VENC_VEDU_OSD_LAYERID_osd3_layer_id_END (14)
#define SOC_VENC_VEDU_OSD_LAYERID_osd4_layer_id_START (16)
#define SOC_VENC_VEDU_OSD_LAYERID_osd4_layer_id_END (18)
#define SOC_VENC_VEDU_OSD_LAYERID_osd5_layer_id_START (20)
#define SOC_VENC_VEDU_OSD_LAYERID_osd5_layer_id_END (22)
#define SOC_VENC_VEDU_OSD_LAYERID_osd6_layer_id_START (24)
#define SOC_VENC_VEDU_OSD_LAYERID_osd6_layer_id_END (26)
#define SOC_VENC_VEDU_OSD_LAYERID_osd7_layer_id_START (28)
#define SOC_VENC_VEDU_OSD_LAYERID_osd7_layer_id_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osd0_qp : 7;
        unsigned int osd1_qp : 7;
        unsigned int osd2_qp : 7;
        unsigned int osd3_qp : 7;
        unsigned int reserved : 4;
    } reg;
} SOC_VENC_VEDU_OSD_QP0_UNION;
#endif
#define SOC_VENC_VEDU_OSD_QP0_osd0_qp_START (0)
#define SOC_VENC_VEDU_OSD_QP0_osd0_qp_END (6)
#define SOC_VENC_VEDU_OSD_QP0_osd1_qp_START (7)
#define SOC_VENC_VEDU_OSD_QP0_osd1_qp_END (13)
#define SOC_VENC_VEDU_OSD_QP0_osd2_qp_START (14)
#define SOC_VENC_VEDU_OSD_QP0_osd2_qp_END (20)
#define SOC_VENC_VEDU_OSD_QP0_osd3_qp_START (21)
#define SOC_VENC_VEDU_OSD_QP0_osd3_qp_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osd4_qp : 7;
        unsigned int osd5_qp : 7;
        unsigned int osd6_qp : 7;
        unsigned int osd7_qp : 7;
        unsigned int reserved : 4;
    } reg;
} SOC_VENC_VEDU_OSD_QP1_UNION;
#endif
#define SOC_VENC_VEDU_OSD_QP1_osd4_qp_START (0)
#define SOC_VENC_VEDU_OSD_QP1_osd4_qp_END (6)
#define SOC_VENC_VEDU_OSD_QP1_osd5_qp_START (7)
#define SOC_VENC_VEDU_OSD_QP1_osd5_qp_END (13)
#define SOC_VENC_VEDU_OSD_QP1_osd6_qp_START (14)
#define SOC_VENC_VEDU_OSD_QP1_osd6_qp_END (20)
#define SOC_VENC_VEDU_OSD_QP1_osd7_qp_START (21)
#define SOC_VENC_VEDU_OSD_QP1_osd7_qp_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_tunlcell_addr : 32;
    } reg;
} SOC_VENC_VEDU_TUNLCELL_ADDR_UNION;
#endif
#define SOC_VENC_VEDU_TUNLCELL_ADDR_curld_tunlcell_addr_START (0)
#define SOC_VENC_VEDU_TUNLCELL_ADDR_curld_tunlcell_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_y_addr : 32;
    } reg;
} SOC_VENC_VEDU_SRC_YADDR_UNION;
#endif
#define SOC_VENC_VEDU_SRC_YADDR_curld_y_addr_START (0)
#define SOC_VENC_VEDU_SRC_YADDR_curld_y_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_c_addr : 32;
    } reg;
} SOC_VENC_VEDU_SRC_CADDR_UNION;
#endif
#define SOC_VENC_VEDU_SRC_CADDR_curld_c_addr_START (0)
#define SOC_VENC_VEDU_SRC_CADDR_curld_c_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_v_addr : 32;
    } reg;
} SOC_VENC_VEDU_SRC_VADDR_UNION;
#endif
#define SOC_VENC_VEDU_SRC_VADDR_curld_v_addr_START (0)
#define SOC_VENC_VEDU_SRC_VADDR_curld_v_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_yh_addr : 32;
    } reg;
} SOC_VENC_VEDU_YH_ADDR_UNION;
#endif
#define SOC_VENC_VEDU_YH_ADDR_curld_yh_addr_START (0)
#define SOC_VENC_VEDU_YH_ADDR_curld_yh_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_ch_addr : 32;
    } reg;
} SOC_VENC_VEDU_CH_ADDR_UNION;
#endif
#define SOC_VENC_VEDU_CH_ADDR_curld_ch_addr_START (0)
#define SOC_VENC_VEDU_CH_ADDR_curld_ch_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_c_stride : 16;
        unsigned int curld_y_stride : 16;
    } reg;
} SOC_VENC_VEDU_STRIDE_UNION;
#endif
#define SOC_VENC_VEDU_STRIDE_curld_c_stride_START (0)
#define SOC_VENC_VEDU_STRIDE_curld_c_stride_END (15)
#define SOC_VENC_VEDU_STRIDE_curld_y_stride_START (16)
#define SOC_VENC_VEDU_STRIDE_curld_y_stride_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_ch_stride : 16;
        unsigned int curld_yh_stride : 16;
    } reg;
} SOC_VENC_VEDU_HEAD_STRIDE_UNION;
#endif
#define SOC_VENC_VEDU_HEAD_STRIDE_curld_ch_stride_START (0)
#define SOC_VENC_VEDU_HEAD_STRIDE_curld_ch_stride_END (15)
#define SOC_VENC_VEDU_HEAD_STRIDE_curld_yh_stride_START (16)
#define SOC_VENC_VEDU_HEAD_STRIDE_curld_yh_stride_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_yaddr : 32;
    } reg;
} SOC_VENC_VEDU_REC_YADDR_UNION;
#endif
#define SOC_VENC_VEDU_REC_YADDR_recst_yaddr_START (0)
#define SOC_VENC_VEDU_REC_YADDR_recst_yaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_caddr : 32;
    } reg;
} SOC_VENC_VEDU_REC_CADDR_UNION;
#endif
#define SOC_VENC_VEDU_REC_CADDR_recst_caddr_START (0)
#define SOC_VENC_VEDU_REC_CADDR_recst_caddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_ystride : 16;
        unsigned int recst_cstride : 16;
    } reg;
} SOC_VENC_VEDU_REC_STRIDE_UNION;
#endif
#define SOC_VENC_VEDU_REC_STRIDE_recst_ystride_START (0)
#define SOC_VENC_VEDU_REC_STRIDE_recst_ystride_END (15)
#define SOC_VENC_VEDU_REC_STRIDE_recst_cstride_START (16)
#define SOC_VENC_VEDU_REC_STRIDE_recst_cstride_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_yh_addr : 32;
    } reg;
} SOC_VENC_VEDU_REC_YH_ADDR_UNION;
#endif
#define SOC_VENC_VEDU_REC_YH_ADDR_recst_yh_addr_START (0)
#define SOC_VENC_VEDU_REC_YH_ADDR_recst_yh_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_ch_addr : 32;
    } reg;
} SOC_VENC_VEDU_REC_CH_ADDR_UNION;
#endif
#define SOC_VENC_VEDU_REC_CH_ADDR_recst_ch_addr_START (0)
#define SOC_VENC_VEDU_REC_CH_ADDR_recst_ch_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_head_stride : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_VEDU_REC_HEAD_STRIDE_UNION;
#endif
#define SOC_VENC_VEDU_REC_HEAD_STRIDE_recst_head_stride_START (0)
#define SOC_VENC_VEDU_REC_HEAD_STRIDE_recst_head_stride_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refld_luma_addr : 32;
    } reg;
} SOC_VENC_VEDU_REF_YADDR_UNION;
#endif
#define SOC_VENC_VEDU_REF_YADDR_refld_luma_addr_START (0)
#define SOC_VENC_VEDU_REF_YADDR_refld_luma_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refld_chroma_addr : 32;
    } reg;
} SOC_VENC_VEDU_REF_CADDR_UNION;
#endif
#define SOC_VENC_VEDU_REF_CADDR_refld_chroma_addr_START (0)
#define SOC_VENC_VEDU_REF_CADDR_refld_chroma_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refld_chroma_vstride : 16;
        unsigned int refld_luma_vstride : 16;
    } reg;
} SOC_VENC_VEDU_REF_STRIDE_UNION;
#endif
#define SOC_VENC_VEDU_REF_STRIDE_refld_chroma_vstride_START (0)
#define SOC_VENC_VEDU_REF_STRIDE_refld_chroma_vstride_END (15)
#define SOC_VENC_VEDU_REF_STRIDE_refld_luma_vstride_START (16)
#define SOC_VENC_VEDU_REF_STRIDE_refld_luma_vstride_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refld_yh_addr : 32;
    } reg;
} SOC_VENC_VEDU_REF_YH_ADDR_UNION;
#endif
#define SOC_VENC_VEDU_REF_YH_ADDR_refld_yh_addr_START (0)
#define SOC_VENC_VEDU_REF_YH_ADDR_refld_yh_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refld_ch_addr : 32;
    } reg;
} SOC_VENC_VEDU_REF_CH_ADDR_UNION;
#endif
#define SOC_VENC_VEDU_REF_CH_ADDR_refld_ch_addr_START (0)
#define SOC_VENC_VEDU_REF_CH_ADDR_refld_ch_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refld_ch_stride : 16;
        unsigned int refld_yh_stride : 16;
    } reg;
} SOC_VENC_VEDU_REF_HSTRIDE_UNION;
#endif
#define SOC_VENC_VEDU_REF_HSTRIDE_refld_ch_stride_START (0)
#define SOC_VENC_VEDU_REF_HSTRIDE_refld_ch_stride_END (15)
#define SOC_VENC_VEDU_REF_HSTRIDE_refld_yh_stride_START (16)
#define SOC_VENC_VEDU_REF_HSTRIDE_refld_yh_stride_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_pmeld_addr : 32;
    } reg;
} SOC_VENC_VEDU_PMELD_ADDR_UNION;
#endif
#define SOC_VENC_VEDU_PMELD_ADDR_vcpi_pmeld_addr_START (0)
#define SOC_VENC_VEDU_PMELD_ADDR_vcpi_pmeld_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_pmest_addr : 32;
    } reg;
} SOC_VENC_VEDU_PMEST_ADDR_UNION;
#endif
#define SOC_VENC_VEDU_PMEST_ADDR_vcpi_pmest_addr_START (0)
#define SOC_VENC_VEDU_PMEST_ADDR_vcpi_pmest_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int upst_address : 32;
    } reg;
} SOC_VENC_VEDU_NBI_UPST_ADDR_UNION;
#endif
#define SOC_VENC_VEDU_NBI_UPST_ADDR_upst_address_START (0)
#define SOC_VENC_VEDU_NBI_UPST_ADDR_upst_address_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mvst_address : 32;
    } reg;
} SOC_VENC_VEDU_NBI_MVST_ADDR_UNION;
#endif
#define SOC_VENC_VEDU_NBI_MVST_ADDR_mvst_address_START (0)
#define SOC_VENC_VEDU_NBI_MVST_ADDR_mvst_address_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mvld_address : 32;
    } reg;
} SOC_VENC_VEDU_NBI_MVLD_ADDR_UNION;
#endif
#define SOC_VENC_VEDU_NBI_MVLD_ADDR_mvld_address_START (0)
#define SOC_VENC_VEDU_NBI_MVLD_ADDR_mvld_address_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_read_interval : 8;
        unsigned int curld_lowdly_en : 1;
        unsigned int vcpi_para_sprat_en : 1;
        unsigned int reserved : 22;
    } reg;
} SOC_VENC_VEDU_CURLD_LOWDLY_UNION;
#endif
#define SOC_VENC_VEDU_CURLD_LOWDLY_curld_read_interval_START (0)
#define SOC_VENC_VEDU_CURLD_LOWDLY_curld_read_interval_END (7)
#define SOC_VENC_VEDU_CURLD_LOWDLY_curld_lowdly_en_START (8)
#define SOC_VENC_VEDU_CURLD_LOWDLY_curld_lowdly_en_END (8)
#define SOC_VENC_VEDU_CURLD_LOWDLY_vcpi_para_sprat_en_START (9)
#define SOC_VENC_VEDU_CURLD_LOWDLY_vcpi_para_sprat_en_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_VEDU_RESERVED_1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_crop_en : 1;
        unsigned int vcpi_scale_en : 1;
        unsigned int vcpi_store_mode : 1;
        unsigned int vcpi_blk_type : 3;
        unsigned int vcpi_str_fmt : 4;
        unsigned int vcpi_package_sel : 4;
        unsigned int reserved : 18;
    } reg;
} SOC_VENC_VEDU_STRFMT_UNION;
#endif
#define SOC_VENC_VEDU_STRFMT_vcpi_crop_en_START (0)
#define SOC_VENC_VEDU_STRFMT_vcpi_crop_en_END (0)
#define SOC_VENC_VEDU_STRFMT_vcpi_scale_en_START (1)
#define SOC_VENC_VEDU_STRFMT_vcpi_scale_en_END (1)
#define SOC_VENC_VEDU_STRFMT_vcpi_store_mode_START (2)
#define SOC_VENC_VEDU_STRFMT_vcpi_store_mode_END (2)
#define SOC_VENC_VEDU_STRFMT_vcpi_blk_type_START (3)
#define SOC_VENC_VEDU_STRFMT_vcpi_blk_type_END (5)
#define SOC_VENC_VEDU_STRFMT_vcpi_str_fmt_START (6)
#define SOC_VENC_VEDU_STRFMT_vcpi_str_fmt_END (9)
#define SOC_VENC_VEDU_STRFMT_vcpi_package_sel_START (10)
#define SOC_VENC_VEDU_STRFMT_vcpi_package_sel_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_crop_xstart : 13;
        unsigned int reserved_0 : 3;
        unsigned int vcpi_crop_ystart : 13;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_VENC_VEDU_CROP_START_UNION;
#endif
#define SOC_VENC_VEDU_CROP_START_vcpi_crop_xstart_START (0)
#define SOC_VENC_VEDU_CROP_START_vcpi_crop_xstart_END (12)
#define SOC_VENC_VEDU_CROP_START_vcpi_crop_ystart_START (16)
#define SOC_VENC_VEDU_CROP_START_vcpi_crop_ystart_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_crop_xend : 13;
        unsigned int reserved_0 : 3;
        unsigned int vcpi_crop_yend : 13;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_VENC_VEDU_CROP_END_UNION;
#endif
#define SOC_VENC_VEDU_CROP_END_vcpi_crop_xend_START (0)
#define SOC_VENC_VEDU_CROP_END_vcpi_crop_xend_END (12)
#define SOC_VENC_VEDU_CROP_END_vcpi_crop_yend_START (16)
#define SOC_VENC_VEDU_CROP_END_vcpi_crop_yend_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_xscale : 16;
        unsigned int vcpi_yscale : 16;
    } reg;
} SOC_VENC_VEDU_SCALE_PARA_UNION;
#endif
#define SOC_VENC_VEDU_SCALE_PARA_vcpi_xscale_START (0)
#define SOC_VENC_VEDU_SCALE_PARA_vcpi_xscale_END (15)
#define SOC_VENC_VEDU_SCALE_PARA_vcpi_yscale_START (16)
#define SOC_VENC_VEDU_SCALE_PARA_vcpi_yscale_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_oriwidth_pix : 13;
        unsigned int reserved_0 : 3;
        unsigned int vcpi_oriheight_pix : 13;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_VENC_VEDU_ORI_PICSIZE_UNION;
#endif
#define SOC_VENC_VEDU_ORI_PICSIZE_vcpi_oriwidth_pix_START (0)
#define SOC_VENC_VEDU_ORI_PICSIZE_vcpi_oriwidth_pix_END (12)
#define SOC_VENC_VEDU_ORI_PICSIZE_vcpi_oriheight_pix_START (16)
#define SOC_VENC_VEDU_ORI_PICSIZE_vcpi_oriheight_pix_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_intra_cu_en : 4;
        unsigned int vcpi_ipcm_en : 1;
        unsigned int reserved_0 : 3;
        unsigned int vcpi_fme_cu_en : 4;
        unsigned int vcpi_mrg_cu_en : 4;
        unsigned int reserved_1 : 16;
    } reg;
} SOC_VENC_VEDU_INTRA_INTER_CU_EN_UNION;
#endif
#define SOC_VENC_VEDU_INTRA_INTER_CU_EN_vcpi_intra_cu_en_START (0)
#define SOC_VENC_VEDU_INTRA_INTER_CU_EN_vcpi_intra_cu_en_END (3)
#define SOC_VENC_VEDU_INTRA_INTER_CU_EN_vcpi_ipcm_en_START (4)
#define SOC_VENC_VEDU_INTRA_INTER_CU_EN_vcpi_ipcm_en_END (4)
#define SOC_VENC_VEDU_INTRA_INTER_CU_EN_vcpi_fme_cu_en_START (8)
#define SOC_VENC_VEDU_INTRA_INTER_CU_EN_vcpi_fme_cu_en_END (11)
#define SOC_VENC_VEDU_INTRA_INTER_CU_EN_vcpi_mrg_cu_en_START (12)
#define SOC_VENC_VEDU_INTRA_INTER_CU_EN_vcpi_mrg_cu_en_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_ref_idc : 2;
        unsigned int reserved_0 : 2;
        unsigned int vcpi_cabac_init_idc : 2;
        unsigned int reserved_1 : 2;
        unsigned int vcpi_num_refidx : 1;
        unsigned int reserved_2 : 3;
        unsigned int vcpi_byte_stuffing : 1;
        unsigned int reserved_3 : 19;
    } reg;
} SOC_VENC_VEDU_VLC_CONFIG_UNION;
#endif
#define SOC_VENC_VEDU_VLC_CONFIG_vcpi_ref_idc_START (0)
#define SOC_VENC_VEDU_VLC_CONFIG_vcpi_ref_idc_END (1)
#define SOC_VENC_VEDU_VLC_CONFIG_vcpi_cabac_init_idc_START (4)
#define SOC_VENC_VEDU_VLC_CONFIG_vcpi_cabac_init_idc_END (5)
#define SOC_VENC_VEDU_VLC_CONFIG_vcpi_num_refidx_START (8)
#define SOC_VENC_VEDU_VLC_CONFIG_vcpi_num_refidx_END (8)
#define SOC_VENC_VEDU_VLC_CONFIG_vcpi_byte_stuffing_START (12)
#define SOC_VENC_VEDU_VLC_CONFIG_vcpi_byte_stuffing_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_iblk_pre_en : 1;
        unsigned int vcpi_pblk_pre_en : 1;
        unsigned int vcpi_force_inter : 1;
        unsigned int reserved_0 : 1;
        unsigned int vcpi_ext_edge_en : 1;
        unsigned int reserved_1 : 27;
    } reg;
} SOC_VENC_VEDU_PRE_JUDGE_EXT_EN_UNION;
#endif
#define SOC_VENC_VEDU_PRE_JUDGE_EXT_EN_vcpi_iblk_pre_en_START (0)
#define SOC_VENC_VEDU_PRE_JUDGE_EXT_EN_vcpi_iblk_pre_en_END (0)
#define SOC_VENC_VEDU_PRE_JUDGE_EXT_EN_vcpi_pblk_pre_en_START (1)
#define SOC_VENC_VEDU_PRE_JUDGE_EXT_EN_vcpi_pblk_pre_en_END (1)
#define SOC_VENC_VEDU_PRE_JUDGE_EXT_EN_vcpi_force_inter_START (2)
#define SOC_VENC_VEDU_PRE_JUDGE_EXT_EN_vcpi_force_inter_END (2)
#define SOC_VENC_VEDU_PRE_JUDGE_EXT_EN_vcpi_ext_edge_en_START (4)
#define SOC_VENC_VEDU_PRE_JUDGE_EXT_EN_vcpi_ext_edge_en_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_iblk_pre_cost_thr : 16;
        unsigned int vcpi_pblk_pre_cost_thr : 16;
    } reg;
} SOC_VENC_VEDU_PRE_JUDGE_COST_THR_UNION;
#endif
#define SOC_VENC_VEDU_PRE_JUDGE_COST_THR_vcpi_iblk_pre_cost_thr_START (0)
#define SOC_VENC_VEDU_PRE_JUDGE_COST_THR_vcpi_iblk_pre_cost_thr_END (15)
#define SOC_VENC_VEDU_PRE_JUDGE_COST_THR_vcpi_pblk_pre_cost_thr_START (16)
#define SOC_VENC_VEDU_PRE_JUDGE_COST_THR_vcpi_pblk_pre_cost_thr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_iblk_pre_mv_dif_thr0 : 8;
        unsigned int vcpi_iblk_pre_mv_dif_thr1 : 8;
        unsigned int vcpi_iblk_pre_mvx_thr : 8;
        unsigned int vcpi_iblk_pre_mvy_thr : 8;
    } reg;
} SOC_VENC_VEDU_IBLK_PRE_MV_THR_UNION;
#endif
#define SOC_VENC_VEDU_IBLK_PRE_MV_THR_vcpi_iblk_pre_mv_dif_thr0_START (0)
#define SOC_VENC_VEDU_IBLK_PRE_MV_THR_vcpi_iblk_pre_mv_dif_thr0_END (7)
#define SOC_VENC_VEDU_IBLK_PRE_MV_THR_vcpi_iblk_pre_mv_dif_thr1_START (8)
#define SOC_VENC_VEDU_IBLK_PRE_MV_THR_vcpi_iblk_pre_mv_dif_thr1_END (15)
#define SOC_VENC_VEDU_IBLK_PRE_MV_THR_vcpi_iblk_pre_mvx_thr_START (16)
#define SOC_VENC_VEDU_IBLK_PRE_MV_THR_vcpi_iblk_pre_mvx_thr_END (23)
#define SOC_VENC_VEDU_IBLK_PRE_MV_THR_vcpi_iblk_pre_mvy_thr_START (24)
#define SOC_VENC_VEDU_IBLK_PRE_MV_THR_vcpi_iblk_pre_mvy_thr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_win0_width : 10;
        unsigned int reserved_0 : 6;
        unsigned int vcpi_win0_height : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_VENC_VEDU_WINDOW_SIZE0_UNION;
#endif
#define SOC_VENC_VEDU_WINDOW_SIZE0_vcpi_win0_width_START (0)
#define SOC_VENC_VEDU_WINDOW_SIZE0_vcpi_win0_width_END (9)
#define SOC_VENC_VEDU_WINDOW_SIZE0_vcpi_win0_height_START (16)
#define SOC_VENC_VEDU_WINDOW_SIZE0_vcpi_win0_height_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_win1_width : 10;
        unsigned int reserved_0 : 6;
        unsigned int vcpi_win1_height : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_VENC_VEDU_WINDOW_SIZE1_UNION;
#endif
#define SOC_VENC_VEDU_WINDOW_SIZE1_vcpi_win1_width_START (0)
#define SOC_VENC_VEDU_WINDOW_SIZE1_vcpi_win1_width_END (9)
#define SOC_VENC_VEDU_WINDOW_SIZE1_vcpi_win1_height_START (16)
#define SOC_VENC_VEDU_WINDOW_SIZE1_vcpi_win1_height_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_win2_width : 10;
        unsigned int reserved_0 : 6;
        unsigned int vcpi_win2_height : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_VENC_VEDU_WINDOW_SIZE2_UNION;
#endif
#define SOC_VENC_VEDU_WINDOW_SIZE2_vcpi_win2_width_START (0)
#define SOC_VENC_VEDU_WINDOW_SIZE2_vcpi_win2_width_END (9)
#define SOC_VENC_VEDU_WINDOW_SIZE2_vcpi_win2_height_START (16)
#define SOC_VENC_VEDU_WINDOW_SIZE2_vcpi_win2_height_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_win3_width : 10;
        unsigned int reserved_0 : 6;
        unsigned int vcpi_win3_height : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_VENC_VEDU_WINDOW_SIZE3_UNION;
#endif
#define SOC_VENC_VEDU_WINDOW_SIZE3_vcpi_win3_width_START (0)
#define SOC_VENC_VEDU_WINDOW_SIZE3_vcpi_win3_width_END (9)
#define SOC_VENC_VEDU_WINDOW_SIZE3_vcpi_win3_height_START (16)
#define SOC_VENC_VEDU_WINDOW_SIZE3_vcpi_win3_height_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_skin_en : 1;
        unsigned int vcpi_highedge_en : 1;
        unsigned int vcpi_static_en : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_VENC_VEDU_PIC_STRONG_EN_UNION;
#endif
#define SOC_VENC_VEDU_PIC_STRONG_EN_vcpi_skin_en_START (0)
#define SOC_VENC_VEDU_PIC_STRONG_EN_vcpi_skin_en_END (0)
#define SOC_VENC_VEDU_PIC_STRONG_EN_vcpi_highedge_en_START (1)
#define SOC_VENC_VEDU_PIC_STRONG_EN_vcpi_highedge_en_END (1)
#define SOC_VENC_VEDU_PIC_STRONG_EN_vcpi_static_en_START (2)
#define SOC_VENC_VEDU_PIC_STRONG_EN_vcpi_static_en_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmbuflen0 : 32;
    } reg;
} SOC_VENC_VEDU_STRMBUFLEN0_UNION;
#endif
#define SOC_VENC_VEDU_STRMBUFLEN0_vcpi_strmbuflen0_START (0)
#define SOC_VENC_VEDU_STRMBUFLEN0_vcpi_strmbuflen0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmbuflen1 : 32;
    } reg;
} SOC_VENC_VEDU_STRMBUFLEN1_UNION;
#endif
#define SOC_VENC_VEDU_STRMBUFLEN1_vcpi_strmbuflen1_START (0)
#define SOC_VENC_VEDU_STRMBUFLEN1_vcpi_strmbuflen1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmbuflen2 : 32;
    } reg;
} SOC_VENC_VEDU_STRMBUFLEN2_UNION;
#endif
#define SOC_VENC_VEDU_STRMBUFLEN2_vcpi_strmbuflen2_START (0)
#define SOC_VENC_VEDU_STRMBUFLEN2_vcpi_strmbuflen2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmbuflen3 : 32;
    } reg;
} SOC_VENC_VEDU_STRMBUFLEN3_UNION;
#endif
#define SOC_VENC_VEDU_STRMBUFLEN3_vcpi_strmbuflen3_START (0)
#define SOC_VENC_VEDU_STRMBUFLEN3_vcpi_strmbuflen3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmbuflen4 : 32;
    } reg;
} SOC_VENC_VEDU_STRMBUFLEN4_UNION;
#endif
#define SOC_VENC_VEDU_STRMBUFLEN4_vcpi_strmbuflen4_START (0)
#define SOC_VENC_VEDU_STRMBUFLEN4_vcpi_strmbuflen4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmbuflen5 : 32;
    } reg;
} SOC_VENC_VEDU_STRMBUFLEN5_UNION;
#endif
#define SOC_VENC_VEDU_STRMBUFLEN5_vcpi_strmbuflen5_START (0)
#define SOC_VENC_VEDU_STRMBUFLEN5_vcpi_strmbuflen5_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmbuflen6 : 32;
    } reg;
} SOC_VENC_VEDU_STRMBUFLEN6_UNION;
#endif
#define SOC_VENC_VEDU_STRMBUFLEN6_vcpi_strmbuflen6_START (0)
#define SOC_VENC_VEDU_STRMBUFLEN6_vcpi_strmbuflen6_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmbuflen7 : 32;
    } reg;
} SOC_VENC_VEDU_STRMBUFLEN7_UNION;
#endif
#define SOC_VENC_VEDU_STRMBUFLEN7_vcpi_strmbuflen7_START (0)
#define SOC_VENC_VEDU_STRMBUFLEN7_vcpi_strmbuflen7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmbuflen8 : 32;
    } reg;
} SOC_VENC_VEDU_STRMBUFLEN8_UNION;
#endif
#define SOC_VENC_VEDU_STRMBUFLEN8_vcpi_strmbuflen8_START (0)
#define SOC_VENC_VEDU_STRMBUFLEN8_vcpi_strmbuflen8_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmbuflen9 : 32;
    } reg;
} SOC_VENC_VEDU_STRMBUFLEN9_UNION;
#endif
#define SOC_VENC_VEDU_STRMBUFLEN9_vcpi_strmbuflen9_START (0)
#define SOC_VENC_VEDU_STRMBUFLEN9_vcpi_strmbuflen9_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmbuflen10 : 32;
    } reg;
} SOC_VENC_VEDU_STRMBUFLEN10_UNION;
#endif
#define SOC_VENC_VEDU_STRMBUFLEN10_vcpi_strmbuflen10_START (0)
#define SOC_VENC_VEDU_STRMBUFLEN10_vcpi_strmbuflen10_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmbuflen11 : 32;
    } reg;
} SOC_VENC_VEDU_STRMBUFLEN11_UNION;
#endif
#define SOC_VENC_VEDU_STRMBUFLEN11_vcpi_strmbuflen11_START (0)
#define SOC_VENC_VEDU_STRMBUFLEN11_vcpi_strmbuflen11_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmbuflen12 : 32;
    } reg;
} SOC_VENC_VEDU_STRMBUFLEN12_UNION;
#endif
#define SOC_VENC_VEDU_STRMBUFLEN12_vcpi_strmbuflen12_START (0)
#define SOC_VENC_VEDU_STRMBUFLEN12_vcpi_strmbuflen12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmbuflen13 : 32;
    } reg;
} SOC_VENC_VEDU_STRMBUFLEN13_UNION;
#endif
#define SOC_VENC_VEDU_STRMBUFLEN13_vcpi_strmbuflen13_START (0)
#define SOC_VENC_VEDU_STRMBUFLEN13_vcpi_strmbuflen13_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmbuflen14 : 32;
    } reg;
} SOC_VENC_VEDU_STRMBUFLEN14_UNION;
#endif
#define SOC_VENC_VEDU_STRMBUFLEN14_vcpi_strmbuflen14_START (0)
#define SOC_VENC_VEDU_STRMBUFLEN14_vcpi_strmbuflen14_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmbuflen15 : 32;
    } reg;
} SOC_VENC_VEDU_STRMBUFLEN15_UNION;
#endif
#define SOC_VENC_VEDU_STRMBUFLEN15_vcpi_strmbuflen15_START (0)
#define SOC_VENC_VEDU_STRMBUFLEN15_vcpi_strmbuflen15_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr0 : 32;
    } reg;
} SOC_VENC_VEDU_STRMADDR0_UNION;
#endif
#define SOC_VENC_VEDU_STRMADDR0_vcpi_strmaddr0_START (0)
#define SOC_VENC_VEDU_STRMADDR0_vcpi_strmaddr0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr1 : 32;
    } reg;
} SOC_VENC_VEDU_STRMADDR1_UNION;
#endif
#define SOC_VENC_VEDU_STRMADDR1_vcpi_strmaddr1_START (0)
#define SOC_VENC_VEDU_STRMADDR1_vcpi_strmaddr1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr2 : 32;
    } reg;
} SOC_VENC_VEDU_STRMADDR2_UNION;
#endif
#define SOC_VENC_VEDU_STRMADDR2_vcpi_strmaddr2_START (0)
#define SOC_VENC_VEDU_STRMADDR2_vcpi_strmaddr2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr3 : 32;
    } reg;
} SOC_VENC_VEDU_STRMADDR3_UNION;
#endif
#define SOC_VENC_VEDU_STRMADDR3_vcpi_strmaddr3_START (0)
#define SOC_VENC_VEDU_STRMADDR3_vcpi_strmaddr3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr4 : 32;
    } reg;
} SOC_VENC_VEDU_STRMADDR4_UNION;
#endif
#define SOC_VENC_VEDU_STRMADDR4_vcpi_strmaddr4_START (0)
#define SOC_VENC_VEDU_STRMADDR4_vcpi_strmaddr4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr5 : 32;
    } reg;
} SOC_VENC_VEDU_STRMADDR5_UNION;
#endif
#define SOC_VENC_VEDU_STRMADDR5_vcpi_strmaddr5_START (0)
#define SOC_VENC_VEDU_STRMADDR5_vcpi_strmaddr5_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr6 : 32;
    } reg;
} SOC_VENC_VEDU_STRMADDR6_UNION;
#endif
#define SOC_VENC_VEDU_STRMADDR6_vcpi_strmaddr6_START (0)
#define SOC_VENC_VEDU_STRMADDR6_vcpi_strmaddr6_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr7 : 32;
    } reg;
} SOC_VENC_VEDU_STRMADDR7_UNION;
#endif
#define SOC_VENC_VEDU_STRMADDR7_vcpi_strmaddr7_START (0)
#define SOC_VENC_VEDU_STRMADDR7_vcpi_strmaddr7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr8 : 32;
    } reg;
} SOC_VENC_VEDU_STRMADDR8_UNION;
#endif
#define SOC_VENC_VEDU_STRMADDR8_vcpi_strmaddr8_START (0)
#define SOC_VENC_VEDU_STRMADDR8_vcpi_strmaddr8_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr9 : 32;
    } reg;
} SOC_VENC_VEDU_STRMADDR9_UNION;
#endif
#define SOC_VENC_VEDU_STRMADDR9_vcpi_strmaddr9_START (0)
#define SOC_VENC_VEDU_STRMADDR9_vcpi_strmaddr9_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr10 : 32;
    } reg;
} SOC_VENC_VEDU_STRMADDR10_UNION;
#endif
#define SOC_VENC_VEDU_STRMADDR10_vcpi_strmaddr10_START (0)
#define SOC_VENC_VEDU_STRMADDR10_vcpi_strmaddr10_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr11 : 32;
    } reg;
} SOC_VENC_VEDU_STRMADDR11_UNION;
#endif
#define SOC_VENC_VEDU_STRMADDR11_vcpi_strmaddr11_START (0)
#define SOC_VENC_VEDU_STRMADDR11_vcpi_strmaddr11_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr12 : 32;
    } reg;
} SOC_VENC_VEDU_STRMADDR12_UNION;
#endif
#define SOC_VENC_VEDU_STRMADDR12_vcpi_strmaddr12_START (0)
#define SOC_VENC_VEDU_STRMADDR12_vcpi_strmaddr12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr13 : 32;
    } reg;
} SOC_VENC_VEDU_STRMADDR13_UNION;
#endif
#define SOC_VENC_VEDU_STRMADDR13_vcpi_strmaddr13_START (0)
#define SOC_VENC_VEDU_STRMADDR13_vcpi_strmaddr13_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr14 : 32;
    } reg;
} SOC_VENC_VEDU_STRMADDR14_UNION;
#endif
#define SOC_VENC_VEDU_STRMADDR14_vcpi_strmaddr14_START (0)
#define SOC_VENC_VEDU_STRMADDR14_vcpi_strmaddr14_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr15 : 32;
    } reg;
} SOC_VENC_VEDU_STRMADDR15_UNION;
#endif
#define SOC_VENC_VEDU_STRMADDR15_vcpi_strmaddr15_START (0)
#define SOC_VENC_VEDU_STRMADDR15_vcpi_strmaddr15_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_para_sprat_addr : 32;
    } reg;
} SOC_VENC_VEDU_PARA_ADDR_UNION;
#endif
#define SOC_VENC_VEDU_PARA_ADDR_vcpi_para_sprat_addr_START (0)
#define SOC_VENC_VEDU_PARA_ADDR_vcpi_para_sprat_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int down_freq_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VENC_VEDU_DOWN_FREQ_EN_UNION;
#endif
#define SOC_VENC_VEDU_DOWN_FREQ_EN_down_freq_en_START (0)
#define SOC_VENC_VEDU_DOWN_FREQ_EN_down_freq_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_pblk_pre_mvx_thr : 8;
        unsigned int vcpi_pblk_pre_mvy_thr : 8;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_VEDU_PBLK_PRE_MV_THR_UNION;
#endif
#define SOC_VENC_VEDU_PBLK_PRE_MV_THR_vcpi_pblk_pre_mvx_thr_START (0)
#define SOC_VENC_VEDU_PBLK_PRE_MV_THR_vcpi_pblk_pre_mvx_thr_END (7)
#define SOC_VENC_VEDU_PBLK_PRE_MV_THR_vcpi_pblk_pre_mvy_thr_START (8)
#define SOC_VENC_VEDU_PBLK_PRE_MV_THR_vcpi_pblk_pre_mvy_thr_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_ve_eop_s : 1;
        unsigned int int_ve_buffull_s : 1;
        unsigned int reserved_0 : 1;
        unsigned int int_ve_pbitsover_s : 1;
        unsigned int reserved_1 : 6;
        unsigned int int_vedu_slice_end_s : 1;
        unsigned int reserved_2 : 5;
        unsigned int int_vedu_brkpt_s : 1;
        unsigned int int_vedu_step_s : 1;
        unsigned int reserved_3 : 9;
        unsigned int int_vedu_timeout_s : 1;
        unsigned int reserved_4 : 2;
        unsigned int int_cfg_err_s : 1;
        unsigned int reserved_5 : 1;
    } reg;
} SOC_VENC_VEDU_INTSTAT_S_UNION;
#endif
#define SOC_VENC_VEDU_INTSTAT_S_int_ve_eop_s_START (0)
#define SOC_VENC_VEDU_INTSTAT_S_int_ve_eop_s_END (0)
#define SOC_VENC_VEDU_INTSTAT_S_int_ve_buffull_s_START (1)
#define SOC_VENC_VEDU_INTSTAT_S_int_ve_buffull_s_END (1)
#define SOC_VENC_VEDU_INTSTAT_S_int_ve_pbitsover_s_START (3)
#define SOC_VENC_VEDU_INTSTAT_S_int_ve_pbitsover_s_END (3)
#define SOC_VENC_VEDU_INTSTAT_S_int_vedu_slice_end_s_START (10)
#define SOC_VENC_VEDU_INTSTAT_S_int_vedu_slice_end_s_END (10)
#define SOC_VENC_VEDU_INTSTAT_S_int_vedu_brkpt_s_START (16)
#define SOC_VENC_VEDU_INTSTAT_S_int_vedu_brkpt_s_END (16)
#define SOC_VENC_VEDU_INTSTAT_S_int_vedu_step_s_START (17)
#define SOC_VENC_VEDU_INTSTAT_S_int_vedu_step_s_END (17)
#define SOC_VENC_VEDU_INTSTAT_S_int_vedu_timeout_s_START (27)
#define SOC_VENC_VEDU_INTSTAT_S_int_vedu_timeout_s_END (27)
#define SOC_VENC_VEDU_INTSTAT_S_int_cfg_err_s_START (30)
#define SOC_VENC_VEDU_INTSTAT_S_int_cfg_err_s_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enable_ve_eop_s : 1;
        unsigned int enable_ve_buffull_s : 1;
        unsigned int reserved_0 : 1;
        unsigned int enable_ve_pbitsover_s : 1;
        unsigned int reserved_1 : 6;
        unsigned int enable_vedu_slice_end_s : 1;
        unsigned int reserved_2 : 5;
        unsigned int enable_vedu_brkpt_s : 1;
        unsigned int enable_vedu_step_s : 1;
        unsigned int reserved_3 : 9;
        unsigned int enable_vedu_timeout_s : 1;
        unsigned int reserved_4 : 2;
        unsigned int enable_cfg_err_s : 1;
        unsigned int reserved_5 : 1;
    } reg;
} SOC_VENC_VEDU_INTMASK_S_UNION;
#endif
#define SOC_VENC_VEDU_INTMASK_S_enable_ve_eop_s_START (0)
#define SOC_VENC_VEDU_INTMASK_S_enable_ve_eop_s_END (0)
#define SOC_VENC_VEDU_INTMASK_S_enable_ve_buffull_s_START (1)
#define SOC_VENC_VEDU_INTMASK_S_enable_ve_buffull_s_END (1)
#define SOC_VENC_VEDU_INTMASK_S_enable_ve_pbitsover_s_START (3)
#define SOC_VENC_VEDU_INTMASK_S_enable_ve_pbitsover_s_END (3)
#define SOC_VENC_VEDU_INTMASK_S_enable_vedu_slice_end_s_START (10)
#define SOC_VENC_VEDU_INTMASK_S_enable_vedu_slice_end_s_END (10)
#define SOC_VENC_VEDU_INTMASK_S_enable_vedu_brkpt_s_START (16)
#define SOC_VENC_VEDU_INTMASK_S_enable_vedu_brkpt_s_END (16)
#define SOC_VENC_VEDU_INTMASK_S_enable_vedu_step_s_START (17)
#define SOC_VENC_VEDU_INTMASK_S_enable_vedu_step_s_END (17)
#define SOC_VENC_VEDU_INTMASK_S_enable_vedu_timeout_s_START (27)
#define SOC_VENC_VEDU_INTMASK_S_enable_vedu_timeout_s_END (27)
#define SOC_VENC_VEDU_INTMASK_S_enable_cfg_err_s_START (30)
#define SOC_VENC_VEDU_INTMASK_S_enable_cfg_err_s_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rint_ve_eop_s : 1;
        unsigned int rint_ve_buffull_s : 1;
        unsigned int reserved_0 : 1;
        unsigned int rint_ve_pbitsover_s : 1;
        unsigned int reserved_1 : 6;
        unsigned int rint_vedu_slice_end_s : 1;
        unsigned int reserved_2 : 5;
        unsigned int rint_vedu_brkpt_s : 1;
        unsigned int rint_vedu_step_s : 1;
        unsigned int reserved_3 : 9;
        unsigned int rint_vedu_timeout_s : 1;
        unsigned int reserved_4 : 2;
        unsigned int rint_cfg_err_s : 1;
        unsigned int reserved_5 : 1;
    } reg;
} SOC_VENC_VEDU_RAWINT_S_UNION;
#endif
#define SOC_VENC_VEDU_RAWINT_S_rint_ve_eop_s_START (0)
#define SOC_VENC_VEDU_RAWINT_S_rint_ve_eop_s_END (0)
#define SOC_VENC_VEDU_RAWINT_S_rint_ve_buffull_s_START (1)
#define SOC_VENC_VEDU_RAWINT_S_rint_ve_buffull_s_END (1)
#define SOC_VENC_VEDU_RAWINT_S_rint_ve_pbitsover_s_START (3)
#define SOC_VENC_VEDU_RAWINT_S_rint_ve_pbitsover_s_END (3)
#define SOC_VENC_VEDU_RAWINT_S_rint_vedu_slice_end_s_START (10)
#define SOC_VENC_VEDU_RAWINT_S_rint_vedu_slice_end_s_END (10)
#define SOC_VENC_VEDU_RAWINT_S_rint_vedu_brkpt_s_START (16)
#define SOC_VENC_VEDU_RAWINT_S_rint_vedu_brkpt_s_END (16)
#define SOC_VENC_VEDU_RAWINT_S_rint_vedu_step_s_START (17)
#define SOC_VENC_VEDU_RAWINT_S_rint_vedu_step_s_END (17)
#define SOC_VENC_VEDU_RAWINT_S_rint_vedu_timeout_s_START (27)
#define SOC_VENC_VEDU_RAWINT_S_rint_vedu_timeout_s_END (27)
#define SOC_VENC_VEDU_RAWINT_S_rint_cfg_err_s_START (30)
#define SOC_VENC_VEDU_RAWINT_S_rint_cfg_err_s_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clr_ve_eop_s : 1;
        unsigned int clr_ve_buffull_s : 1;
        unsigned int reserved_0 : 1;
        unsigned int clr_ve_pbitsover_s : 1;
        unsigned int reserved_1 : 6;
        unsigned int clr_vedu_slice_end_s : 1;
        unsigned int reserved_2 : 5;
        unsigned int clr_vedu_brkpt_s : 1;
        unsigned int clr_vedu_step_s : 1;
        unsigned int reserved_3 : 9;
        unsigned int clr_vedu_timeout_s : 1;
        unsigned int reserved_4 : 2;
        unsigned int clr_cfg_err_s : 1;
        unsigned int reserved_5 : 1;
    } reg;
} SOC_VENC_VEDU_INTCLR_S_UNION;
#endif
#define SOC_VENC_VEDU_INTCLR_S_clr_ve_eop_s_START (0)
#define SOC_VENC_VEDU_INTCLR_S_clr_ve_eop_s_END (0)
#define SOC_VENC_VEDU_INTCLR_S_clr_ve_buffull_s_START (1)
#define SOC_VENC_VEDU_INTCLR_S_clr_ve_buffull_s_END (1)
#define SOC_VENC_VEDU_INTCLR_S_clr_ve_pbitsover_s_START (3)
#define SOC_VENC_VEDU_INTCLR_S_clr_ve_pbitsover_s_END (3)
#define SOC_VENC_VEDU_INTCLR_S_clr_vedu_slice_end_s_START (10)
#define SOC_VENC_VEDU_INTCLR_S_clr_vedu_slice_end_s_END (10)
#define SOC_VENC_VEDU_INTCLR_S_clr_vedu_brkpt_s_START (16)
#define SOC_VENC_VEDU_INTCLR_S_clr_vedu_brkpt_s_END (16)
#define SOC_VENC_VEDU_INTCLR_S_clr_vedu_step_s_START (17)
#define SOC_VENC_VEDU_INTCLR_S_clr_vedu_step_s_END (17)
#define SOC_VENC_VEDU_INTCLR_S_clr_vedu_timeout_s_START (27)
#define SOC_VENC_VEDU_INTCLR_S_clr_vedu_timeout_s_END (27)
#define SOC_VENC_VEDU_INTCLR_S_clr_cfg_err_s_START (30)
#define SOC_VENC_VEDU_INTCLR_S_clr_cfg_err_s_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int region0en : 1;
        unsigned int region1en : 1;
        unsigned int region2en : 1;
        unsigned int region3en : 1;
        unsigned int region4en : 1;
        unsigned int region5en : 1;
        unsigned int region6en : 1;
        unsigned int region7en : 1;
        unsigned int absqp0 : 1;
        unsigned int absqp1 : 1;
        unsigned int absqp2 : 1;
        unsigned int absqp3 : 1;
        unsigned int absqp4 : 1;
        unsigned int absqp5 : 1;
        unsigned int absqp6 : 1;
        unsigned int absqp7 : 1;
        unsigned int region0keep : 1;
        unsigned int region1keep : 1;
        unsigned int region2keep : 1;
        unsigned int region3keep : 1;
        unsigned int region4keep : 1;
        unsigned int region5keep : 1;
        unsigned int region6keep : 1;
        unsigned int region7keep : 1;
        unsigned int vcpi_roi_en : 1;
        unsigned int reserved : 7;
    } reg;
} SOC_VENC_VCTRL_ROI_CFG0_UNION;
#endif
#define SOC_VENC_VCTRL_ROI_CFG0_region0en_START (0)
#define SOC_VENC_VCTRL_ROI_CFG0_region0en_END (0)
#define SOC_VENC_VCTRL_ROI_CFG0_region1en_START (1)
#define SOC_VENC_VCTRL_ROI_CFG0_region1en_END (1)
#define SOC_VENC_VCTRL_ROI_CFG0_region2en_START (2)
#define SOC_VENC_VCTRL_ROI_CFG0_region2en_END (2)
#define SOC_VENC_VCTRL_ROI_CFG0_region3en_START (3)
#define SOC_VENC_VCTRL_ROI_CFG0_region3en_END (3)
#define SOC_VENC_VCTRL_ROI_CFG0_region4en_START (4)
#define SOC_VENC_VCTRL_ROI_CFG0_region4en_END (4)
#define SOC_VENC_VCTRL_ROI_CFG0_region5en_START (5)
#define SOC_VENC_VCTRL_ROI_CFG0_region5en_END (5)
#define SOC_VENC_VCTRL_ROI_CFG0_region6en_START (6)
#define SOC_VENC_VCTRL_ROI_CFG0_region6en_END (6)
#define SOC_VENC_VCTRL_ROI_CFG0_region7en_START (7)
#define SOC_VENC_VCTRL_ROI_CFG0_region7en_END (7)
#define SOC_VENC_VCTRL_ROI_CFG0_absqp0_START (8)
#define SOC_VENC_VCTRL_ROI_CFG0_absqp0_END (8)
#define SOC_VENC_VCTRL_ROI_CFG0_absqp1_START (9)
#define SOC_VENC_VCTRL_ROI_CFG0_absqp1_END (9)
#define SOC_VENC_VCTRL_ROI_CFG0_absqp2_START (10)
#define SOC_VENC_VCTRL_ROI_CFG0_absqp2_END (10)
#define SOC_VENC_VCTRL_ROI_CFG0_absqp3_START (11)
#define SOC_VENC_VCTRL_ROI_CFG0_absqp3_END (11)
#define SOC_VENC_VCTRL_ROI_CFG0_absqp4_START (12)
#define SOC_VENC_VCTRL_ROI_CFG0_absqp4_END (12)
#define SOC_VENC_VCTRL_ROI_CFG0_absqp5_START (13)
#define SOC_VENC_VCTRL_ROI_CFG0_absqp5_END (13)
#define SOC_VENC_VCTRL_ROI_CFG0_absqp6_START (14)
#define SOC_VENC_VCTRL_ROI_CFG0_absqp6_END (14)
#define SOC_VENC_VCTRL_ROI_CFG0_absqp7_START (15)
#define SOC_VENC_VCTRL_ROI_CFG0_absqp7_END (15)
#define SOC_VENC_VCTRL_ROI_CFG0_region0keep_START (16)
#define SOC_VENC_VCTRL_ROI_CFG0_region0keep_END (16)
#define SOC_VENC_VCTRL_ROI_CFG0_region1keep_START (17)
#define SOC_VENC_VCTRL_ROI_CFG0_region1keep_END (17)
#define SOC_VENC_VCTRL_ROI_CFG0_region2keep_START (18)
#define SOC_VENC_VCTRL_ROI_CFG0_region2keep_END (18)
#define SOC_VENC_VCTRL_ROI_CFG0_region3keep_START (19)
#define SOC_VENC_VCTRL_ROI_CFG0_region3keep_END (19)
#define SOC_VENC_VCTRL_ROI_CFG0_region4keep_START (20)
#define SOC_VENC_VCTRL_ROI_CFG0_region4keep_END (20)
#define SOC_VENC_VCTRL_ROI_CFG0_region5keep_START (21)
#define SOC_VENC_VCTRL_ROI_CFG0_region5keep_END (21)
#define SOC_VENC_VCTRL_ROI_CFG0_region6keep_START (22)
#define SOC_VENC_VCTRL_ROI_CFG0_region6keep_END (22)
#define SOC_VENC_VCTRL_ROI_CFG0_region7keep_START (23)
#define SOC_VENC_VCTRL_ROI_CFG0_region7keep_END (23)
#define SOC_VENC_VCTRL_ROI_CFG0_vcpi_roi_en_START (24)
#define SOC_VENC_VCTRL_ROI_CFG0_vcpi_roi_en_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int roiqp0 : 7;
        unsigned int reserved_0: 1;
        unsigned int roiqp1 : 7;
        unsigned int reserved_1: 1;
        unsigned int roiqp2 : 7;
        unsigned int reserved_2: 1;
        unsigned int roiqp3 : 7;
        unsigned int reserved_3: 1;
    } reg;
} SOC_VENC_VCTRL_ROI_CFG1_UNION;
#endif
#define SOC_VENC_VCTRL_ROI_CFG1_roiqp0_START (0)
#define SOC_VENC_VCTRL_ROI_CFG1_roiqp0_END (6)
#define SOC_VENC_VCTRL_ROI_CFG1_roiqp1_START (8)
#define SOC_VENC_VCTRL_ROI_CFG1_roiqp1_END (14)
#define SOC_VENC_VCTRL_ROI_CFG1_roiqp2_START (16)
#define SOC_VENC_VCTRL_ROI_CFG1_roiqp2_END (22)
#define SOC_VENC_VCTRL_ROI_CFG1_roiqp3_START (24)
#define SOC_VENC_VCTRL_ROI_CFG1_roiqp3_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int roiqp4 : 7;
        unsigned int reserved_0: 1;
        unsigned int roiqp5 : 7;
        unsigned int reserved_1: 1;
        unsigned int roiqp6 : 7;
        unsigned int reserved_2: 1;
        unsigned int roiqp7 : 7;
        unsigned int reserved_3: 1;
    } reg;
} SOC_VENC_VCTRL_ROI_CFG2_UNION;
#endif
#define SOC_VENC_VCTRL_ROI_CFG2_roiqp4_START (0)
#define SOC_VENC_VCTRL_ROI_CFG2_roiqp4_END (6)
#define SOC_VENC_VCTRL_ROI_CFG2_roiqp5_START (8)
#define SOC_VENC_VCTRL_ROI_CFG2_roiqp5_END (14)
#define SOC_VENC_VCTRL_ROI_CFG2_roiqp6_START (16)
#define SOC_VENC_VCTRL_ROI_CFG2_roiqp6_END (22)
#define SOC_VENC_VCTRL_ROI_CFG2_roiqp7_START (24)
#define SOC_VENC_VCTRL_ROI_CFG2_roiqp7_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int size0_roiwidth : 10;
        unsigned int reserved_0 : 6;
        unsigned int size0_roiheight : 10;
        unsigned int reserved_1 : 6;
    } reg;
} SOC_VENC_VCTRL_ROI_SIZE_0_UNION;
#endif
#define SOC_VENC_VCTRL_ROI_SIZE_0_size0_roiwidth_START (0)
#define SOC_VENC_VCTRL_ROI_SIZE_0_size0_roiwidth_END (9)
#define SOC_VENC_VCTRL_ROI_SIZE_0_size0_roiheight_START (16)
#define SOC_VENC_VCTRL_ROI_SIZE_0_size0_roiheight_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int start0_roistartx : 9;
        unsigned int reserved_0 : 7;
        unsigned int start0_roistarty : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_VENC_VCTRL_ROI_START_0_UNION;
#endif
#define SOC_VENC_VCTRL_ROI_START_0_start0_roistartx_START (0)
#define SOC_VENC_VCTRL_ROI_START_0_start0_roistartx_END (8)
#define SOC_VENC_VCTRL_ROI_START_0_start0_roistarty_START (16)
#define SOC_VENC_VCTRL_ROI_START_0_start0_roistarty_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int size1_roiwidth : 10;
        unsigned int reserved_0 : 6;
        unsigned int size1_roiheight : 10;
        unsigned int reserved_1 : 6;
    } reg;
} SOC_VENC_VCTRL_ROI_SIZE_1_UNION;
#endif
#define SOC_VENC_VCTRL_ROI_SIZE_1_size1_roiwidth_START (0)
#define SOC_VENC_VCTRL_ROI_SIZE_1_size1_roiwidth_END (9)
#define SOC_VENC_VCTRL_ROI_SIZE_1_size1_roiheight_START (16)
#define SOC_VENC_VCTRL_ROI_SIZE_1_size1_roiheight_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int start1_roistartx : 9;
        unsigned int reserved_0 : 7;
        unsigned int start1_roistarty : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_VENC_VCTRL_ROI_START_1_UNION;
#endif
#define SOC_VENC_VCTRL_ROI_START_1_start1_roistartx_START (0)
#define SOC_VENC_VCTRL_ROI_START_1_start1_roistartx_END (8)
#define SOC_VENC_VCTRL_ROI_START_1_start1_roistarty_START (16)
#define SOC_VENC_VCTRL_ROI_START_1_start1_roistarty_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int size2_roiwidth : 10;
        unsigned int reserved_0 : 6;
        unsigned int size2_roiheight : 10;
        unsigned int reserved_1 : 6;
    } reg;
} SOC_VENC_VCTRL_ROI_SIZE_2_UNION;
#endif
#define SOC_VENC_VCTRL_ROI_SIZE_2_size2_roiwidth_START (0)
#define SOC_VENC_VCTRL_ROI_SIZE_2_size2_roiwidth_END (9)
#define SOC_VENC_VCTRL_ROI_SIZE_2_size2_roiheight_START (16)
#define SOC_VENC_VCTRL_ROI_SIZE_2_size2_roiheight_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int start2_roistartx : 9;
        unsigned int reserved_0 : 7;
        unsigned int start2_roistarty : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_VENC_VCTRL_ROI_START_2_UNION;
#endif
#define SOC_VENC_VCTRL_ROI_START_2_start2_roistartx_START (0)
#define SOC_VENC_VCTRL_ROI_START_2_start2_roistartx_END (8)
#define SOC_VENC_VCTRL_ROI_START_2_start2_roistarty_START (16)
#define SOC_VENC_VCTRL_ROI_START_2_start2_roistarty_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int size3_roiwidth : 10;
        unsigned int reserved_0 : 6;
        unsigned int size3_roiheight : 10;
        unsigned int reserved_1 : 6;
    } reg;
} SOC_VENC_VCTRL_ROI_SIZE_3_UNION;
#endif
#define SOC_VENC_VCTRL_ROI_SIZE_3_size3_roiwidth_START (0)
#define SOC_VENC_VCTRL_ROI_SIZE_3_size3_roiwidth_END (9)
#define SOC_VENC_VCTRL_ROI_SIZE_3_size3_roiheight_START (16)
#define SOC_VENC_VCTRL_ROI_SIZE_3_size3_roiheight_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int start3_roistartx : 9;
        unsigned int reserved_0 : 7;
        unsigned int start3_roistarty : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_VENC_VCTRL_ROI_START_3_UNION;
#endif
#define SOC_VENC_VCTRL_ROI_START_3_start3_roistartx_START (0)
#define SOC_VENC_VCTRL_ROI_START_3_start3_roistartx_END (8)
#define SOC_VENC_VCTRL_ROI_START_3_start3_roistarty_START (16)
#define SOC_VENC_VCTRL_ROI_START_3_start3_roistarty_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int size4_roiwidth : 10;
        unsigned int reserved_0 : 6;
        unsigned int size4_roiheight : 10;
        unsigned int reserved_1 : 6;
    } reg;
} SOC_VENC_VCTRL_ROI_SIZE_4_UNION;
#endif
#define SOC_VENC_VCTRL_ROI_SIZE_4_size4_roiwidth_START (0)
#define SOC_VENC_VCTRL_ROI_SIZE_4_size4_roiwidth_END (9)
#define SOC_VENC_VCTRL_ROI_SIZE_4_size4_roiheight_START (16)
#define SOC_VENC_VCTRL_ROI_SIZE_4_size4_roiheight_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int start4_roistartx : 9;
        unsigned int reserved_0 : 7;
        unsigned int start4_roistarty : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_VENC_VCTRL_ROI_START_4_UNION;
#endif
#define SOC_VENC_VCTRL_ROI_START_4_start4_roistartx_START (0)
#define SOC_VENC_VCTRL_ROI_START_4_start4_roistartx_END (8)
#define SOC_VENC_VCTRL_ROI_START_4_start4_roistarty_START (16)
#define SOC_VENC_VCTRL_ROI_START_4_start4_roistarty_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int size5_roiwidth : 10;
        unsigned int reserved_0 : 6;
        unsigned int size5_roiheight : 10;
        unsigned int reserved_1 : 6;
    } reg;
} SOC_VENC_VCTRL_ROI_SIZE_5_UNION;
#endif
#define SOC_VENC_VCTRL_ROI_SIZE_5_size5_roiwidth_START (0)
#define SOC_VENC_VCTRL_ROI_SIZE_5_size5_roiwidth_END (9)
#define SOC_VENC_VCTRL_ROI_SIZE_5_size5_roiheight_START (16)
#define SOC_VENC_VCTRL_ROI_SIZE_5_size5_roiheight_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int start5_roistartx : 9;
        unsigned int reserved_0 : 7;
        unsigned int start5_roistarty : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_VENC_VCTRL_ROI_START_5_UNION;
#endif
#define SOC_VENC_VCTRL_ROI_START_5_start5_roistartx_START (0)
#define SOC_VENC_VCTRL_ROI_START_5_start5_roistartx_END (8)
#define SOC_VENC_VCTRL_ROI_START_5_start5_roistarty_START (16)
#define SOC_VENC_VCTRL_ROI_START_5_start5_roistarty_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int size6_roiwidth : 10;
        unsigned int reserved_0 : 6;
        unsigned int size6_roiheight : 10;
        unsigned int reserved_1 : 6;
    } reg;
} SOC_VENC_VCTRL_ROI_SIZE_6_UNION;
#endif
#define SOC_VENC_VCTRL_ROI_SIZE_6_size6_roiwidth_START (0)
#define SOC_VENC_VCTRL_ROI_SIZE_6_size6_roiwidth_END (9)
#define SOC_VENC_VCTRL_ROI_SIZE_6_size6_roiheight_START (16)
#define SOC_VENC_VCTRL_ROI_SIZE_6_size6_roiheight_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int start6_roistartx : 9;
        unsigned int reserved_0 : 7;
        unsigned int start6_roistarty : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_VENC_VCTRL_ROI_START_6_UNION;
#endif
#define SOC_VENC_VCTRL_ROI_START_6_start6_roistartx_START (0)
#define SOC_VENC_VCTRL_ROI_START_6_start6_roistartx_END (8)
#define SOC_VENC_VCTRL_ROI_START_6_start6_roistarty_START (16)
#define SOC_VENC_VCTRL_ROI_START_6_start6_roistarty_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int size7_roiwidth : 10;
        unsigned int reserved_0 : 6;
        unsigned int size7_roiheight : 10;
        unsigned int reserved_1 : 6;
    } reg;
} SOC_VENC_VCTRL_ROI_SIZE_7_UNION;
#endif
#define SOC_VENC_VCTRL_ROI_SIZE_7_size7_roiwidth_START (0)
#define SOC_VENC_VCTRL_ROI_SIZE_7_size7_roiwidth_END (9)
#define SOC_VENC_VCTRL_ROI_SIZE_7_size7_roiheight_START (16)
#define SOC_VENC_VCTRL_ROI_SIZE_7_size7_roiheight_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int start7_roistartx : 9;
        unsigned int reserved_0 : 7;
        unsigned int start7_roistarty : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_VENC_VCTRL_ROI_START_7_UNION;
#endif
#define SOC_VENC_VCTRL_ROI_START_7_start7_roistartx_START (0)
#define SOC_VENC_VCTRL_ROI_START_7_start7_roistartx_END (8)
#define SOC_VENC_VCTRL_ROI_START_7_start7_roistarty_START (16)
#define SOC_VENC_VCTRL_ROI_START_7_start7_roistarty_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_target_bit : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_VCTRL_LCU_TARGET_BIT_UNION;
#endif
#define SOC_VENC_VCTRL_LCU_TARGET_BIT_lcu_target_bit_START (0)
#define SOC_VENC_VCTRL_LCU_TARGET_BIT_lcu_target_bit_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int narrow_tile_width : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_VENC_VCTRL_NARROW_THRESHOLD_UNION;
#endif
#define SOC_VENC_VCTRL_NARROW_THRESHOLD_narrow_tile_width_START (0)
#define SOC_VENC_VCTRL_NARROW_THRESHOLD_narrow_tile_width_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_performance_baseline : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_VCTRL_LCU_BASELINE_UNION;
#endif
#define SOC_VENC_VCTRL_LCU_BASELINE_lcu_performance_baseline_START (0)
#define SOC_VENC_VCTRL_LCU_BASELINE_lcu_performance_baseline_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_VCTRL_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int stage_1_busy : 1;
        unsigned int stage_2_busy : 1;
        unsigned int stage_3_busy : 1;
        unsigned int stage_4_busy : 1;
        unsigned int stage_5_busy : 1;
        unsigned int stage_6_busy : 1;
        unsigned int stage_7_busy : 1;
        unsigned int stage_8_busy : 1;
        unsigned int stage_9_busy : 1;
        unsigned int stage_10_busy : 1;
        unsigned int reseve : 18;
        unsigned int nbi_picend : 1;
        unsigned int pmest_end : 1;
        unsigned int vclst_end : 1;
        unsigned int recst_end : 1;
    } reg;
} SOC_VENC_VCTRL_PIPE_STATE_UNION;
#endif
#define SOC_VENC_VCTRL_PIPE_STATE_stage_1_busy_START (0)
#define SOC_VENC_VCTRL_PIPE_STATE_stage_1_busy_END (0)
#define SOC_VENC_VCTRL_PIPE_STATE_stage_2_busy_START (1)
#define SOC_VENC_VCTRL_PIPE_STATE_stage_2_busy_END (1)
#define SOC_VENC_VCTRL_PIPE_STATE_stage_3_busy_START (2)
#define SOC_VENC_VCTRL_PIPE_STATE_stage_3_busy_END (2)
#define SOC_VENC_VCTRL_PIPE_STATE_stage_4_busy_START (3)
#define SOC_VENC_VCTRL_PIPE_STATE_stage_4_busy_END (3)
#define SOC_VENC_VCTRL_PIPE_STATE_stage_5_busy_START (4)
#define SOC_VENC_VCTRL_PIPE_STATE_stage_5_busy_END (4)
#define SOC_VENC_VCTRL_PIPE_STATE_stage_6_busy_START (5)
#define SOC_VENC_VCTRL_PIPE_STATE_stage_6_busy_END (5)
#define SOC_VENC_VCTRL_PIPE_STATE_stage_7_busy_START (6)
#define SOC_VENC_VCTRL_PIPE_STATE_stage_7_busy_END (6)
#define SOC_VENC_VCTRL_PIPE_STATE_stage_8_busy_START (7)
#define SOC_VENC_VCTRL_PIPE_STATE_stage_8_busy_END (7)
#define SOC_VENC_VCTRL_PIPE_STATE_stage_9_busy_START (8)
#define SOC_VENC_VCTRL_PIPE_STATE_stage_9_busy_END (8)
#define SOC_VENC_VCTRL_PIPE_STATE_stage_10_busy_START (9)
#define SOC_VENC_VCTRL_PIPE_STATE_stage_10_busy_END (9)
#define SOC_VENC_VCTRL_PIPE_STATE_reseve_START (10)
#define SOC_VENC_VCTRL_PIPE_STATE_reseve_END (27)
#define SOC_VENC_VCTRL_PIPE_STATE_nbi_picend_START (28)
#define SOC_VENC_VCTRL_PIPE_STATE_nbi_picend_END (28)
#define SOC_VENC_VCTRL_PIPE_STATE_pmest_end_START (29)
#define SOC_VENC_VCTRL_PIPE_STATE_pmest_end_END (29)
#define SOC_VENC_VCTRL_PIPE_STATE_vclst_end_START (30)
#define SOC_VENC_VCTRL_PIPE_STATE_vclst_end_END (30)
#define SOC_VENC_VCTRL_PIPE_STATE_recst_end_START (31)
#define SOC_VENC_VCTRL_PIPE_STATE_recst_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_valid : 1;
        unsigned int pmeld_valid : 1;
        unsigned int nbi_valid : 1;
        unsigned int reserved_0 : 1;
        unsigned int pme_valid : 1;
        unsigned int reserved_1 : 3;
        unsigned int refld_luma_ready : 1;
        unsigned int qpg_valid : 1;
        unsigned int reserved_2 : 2;
        unsigned int ime_valid : 1;
        unsigned int pintra_valid : 1;
        unsigned int refld_chma_valid : 1;
        unsigned int reserved_3 : 1;
        unsigned int intra_valid : 1;
        unsigned int mrg_valid : 1;
        unsigned int fme_valid : 1;
        unsigned int pmv_valid : 1;
        unsigned int sel_valid : 1;
        unsigned int reserved_4 : 3;
        unsigned int dblk_valid : 1;
        unsigned int sao_valid : 1;
        unsigned int reserved_5 : 2;
        unsigned int pack_valid : 1;
        unsigned int cabac_valid : 1;
        unsigned int reserved_6 : 2;
    } reg;
} SOC_VENC_VCTRL_MODULE_STATE_UNION;
#endif
#define SOC_VENC_VCTRL_MODULE_STATE_curld_valid_START (0)
#define SOC_VENC_VCTRL_MODULE_STATE_curld_valid_END (0)
#define SOC_VENC_VCTRL_MODULE_STATE_pmeld_valid_START (1)
#define SOC_VENC_VCTRL_MODULE_STATE_pmeld_valid_END (1)
#define SOC_VENC_VCTRL_MODULE_STATE_nbi_valid_START (2)
#define SOC_VENC_VCTRL_MODULE_STATE_nbi_valid_END (2)
#define SOC_VENC_VCTRL_MODULE_STATE_pme_valid_START (4)
#define SOC_VENC_VCTRL_MODULE_STATE_pme_valid_END (4)
#define SOC_VENC_VCTRL_MODULE_STATE_refld_luma_ready_START (8)
#define SOC_VENC_VCTRL_MODULE_STATE_refld_luma_ready_END (8)
#define SOC_VENC_VCTRL_MODULE_STATE_qpg_valid_START (9)
#define SOC_VENC_VCTRL_MODULE_STATE_qpg_valid_END (9)
#define SOC_VENC_VCTRL_MODULE_STATE_ime_valid_START (12)
#define SOC_VENC_VCTRL_MODULE_STATE_ime_valid_END (12)
#define SOC_VENC_VCTRL_MODULE_STATE_pintra_valid_START (13)
#define SOC_VENC_VCTRL_MODULE_STATE_pintra_valid_END (13)
#define SOC_VENC_VCTRL_MODULE_STATE_refld_chma_valid_START (14)
#define SOC_VENC_VCTRL_MODULE_STATE_refld_chma_valid_END (14)
#define SOC_VENC_VCTRL_MODULE_STATE_intra_valid_START (16)
#define SOC_VENC_VCTRL_MODULE_STATE_intra_valid_END (16)
#define SOC_VENC_VCTRL_MODULE_STATE_mrg_valid_START (17)
#define SOC_VENC_VCTRL_MODULE_STATE_mrg_valid_END (17)
#define SOC_VENC_VCTRL_MODULE_STATE_fme_valid_START (18)
#define SOC_VENC_VCTRL_MODULE_STATE_fme_valid_END (18)
#define SOC_VENC_VCTRL_MODULE_STATE_pmv_valid_START (19)
#define SOC_VENC_VCTRL_MODULE_STATE_pmv_valid_END (19)
#define SOC_VENC_VCTRL_MODULE_STATE_sel_valid_START (20)
#define SOC_VENC_VCTRL_MODULE_STATE_sel_valid_END (20)
#define SOC_VENC_VCTRL_MODULE_STATE_dblk_valid_START (24)
#define SOC_VENC_VCTRL_MODULE_STATE_dblk_valid_END (24)
#define SOC_VENC_VCTRL_MODULE_STATE_sao_valid_START (25)
#define SOC_VENC_VCTRL_MODULE_STATE_sao_valid_END (25)
#define SOC_VENC_VCTRL_MODULE_STATE_pack_valid_START (28)
#define SOC_VENC_VCTRL_MODULE_STATE_pack_valid_END (28)
#define SOC_VENC_VCTRL_MODULE_STATE_cabac_valid_START (29)
#define SOC_VENC_VCTRL_MODULE_STATE_cabac_valid_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tile_x : 5;
        unsigned int reserved_0: 3;
        unsigned int tile_y : 5;
        unsigned int reserved_1: 19;
    } reg;
} SOC_VENC_VCTRL_CUR_TILE_INFO_0_UNION;
#endif
#define SOC_VENC_VCTRL_CUR_TILE_INFO_0_tile_x_START (0)
#define SOC_VENC_VCTRL_CUR_TILE_INFO_0_tile_x_END (4)
#define SOC_VENC_VCTRL_CUR_TILE_INFO_0_tile_y_START (8)
#define SOC_VENC_VCTRL_CUR_TILE_INFO_0_tile_y_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tile_base_lcu_x : 9;
        unsigned int reserved_0 : 7;
        unsigned int tile_base_lcu_y : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_VENC_VCTRL_CUR_TILE_INFO_1_UNION;
#endif
#define SOC_VENC_VCTRL_CUR_TILE_INFO_1_tile_base_lcu_x_START (0)
#define SOC_VENC_VCTRL_CUR_TILE_INFO_1_tile_base_lcu_x_END (8)
#define SOC_VENC_VCTRL_CUR_TILE_INFO_1_tile_base_lcu_y_START (16)
#define SOC_VENC_VCTRL_CUR_TILE_INFO_1_tile_base_lcu_y_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tile_lcu_x : 9;
        unsigned int reserved_0 : 7;
        unsigned int tile_lcu_y : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_VENC_VCTRL_CUR_TILE_INFO_2_UNION;
#endif
#define SOC_VENC_VCTRL_CUR_TILE_INFO_2_tile_lcu_x_START (0)
#define SOC_VENC_VCTRL_CUR_TILE_INFO_2_tile_lcu_x_END (8)
#define SOC_VENC_VCTRL_CUR_TILE_INFO_2_tile_lcu_y_START (16)
#define SOC_VENC_VCTRL_CUR_TILE_INFO_2_tile_lcu_y_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slice_base_lcu_x : 9;
        unsigned int reserved_0 : 7;
        unsigned int slice_base_lcu_y : 9;
        unsigned int reserved_1 : 3;
        unsigned int slice_number : 4;
    } reg;
} SOC_VENC_VCTRL_SLICE_INFO_UNION;
#endif
#define SOC_VENC_VCTRL_SLICE_INFO_slice_base_lcu_x_START (0)
#define SOC_VENC_VCTRL_SLICE_INFO_slice_base_lcu_x_END (8)
#define SOC_VENC_VCTRL_SLICE_INFO_slice_base_lcu_y_START (16)
#define SOC_VENC_VCTRL_SLICE_INFO_slice_base_lcu_y_END (24)
#define SOC_VENC_VCTRL_SLICE_INFO_slice_number_START (28)
#define SOC_VENC_VCTRL_SLICE_INFO_slice_number_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_x : 9;
        unsigned int reserved_0: 7;
        unsigned int lcu_y : 9;
        unsigned int reserved_1: 7;
    } reg;
} SOC_VENC_VCTRL_CTB_PIPE_S_COORD_UNION;
#endif
#define SOC_VENC_VCTRL_CTB_PIPE_S_COORD_lcu_x_START (0)
#define SOC_VENC_VCTRL_CTB_PIPE_S_COORD_lcu_x_END (8)
#define SOC_VENC_VCTRL_CTB_PIPE_S_COORD_lcu_y_START (16)
#define SOC_VENC_VCTRL_CTB_PIPE_S_COORD_lcu_y_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_VCTRL_RESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int norm32_coeff_protect_num : 10;
        unsigned int reserved_0 : 6;
        unsigned int norm32_tr1_denois_max_num : 5;
        unsigned int reserved_1 : 11;
    } reg;
} SOC_VENC_VCTRL_NORM_TR32X32_COEFF_DENOISE_UNION;
#endif
#define SOC_VENC_VCTRL_NORM_TR32X32_COEFF_DENOISE_norm32_coeff_protect_num_START (0)
#define SOC_VENC_VCTRL_NORM_TR32X32_COEFF_DENOISE_norm32_coeff_protect_num_END (9)
#define SOC_VENC_VCTRL_NORM_TR32X32_COEFF_DENOISE_norm32_tr1_denois_max_num_START (16)
#define SOC_VENC_VCTRL_NORM_TR32X32_COEFF_DENOISE_norm32_tr1_denois_max_num_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int norm16_coeff_protect_num : 8;
        unsigned int reserved_0 : 8;
        unsigned int norm16_tr1_denois_max_num : 5;
        unsigned int reserved_1 : 11;
    } reg;
} SOC_VENC_VCTRL_NORM_TR16X16_COEFF_DENOISE_UNION;
#endif
#define SOC_VENC_VCTRL_NORM_TR16X16_COEFF_DENOISE_norm16_coeff_protect_num_START (0)
#define SOC_VENC_VCTRL_NORM_TR16X16_COEFF_DENOISE_norm16_coeff_protect_num_END (7)
#define SOC_VENC_VCTRL_NORM_TR16X16_COEFF_DENOISE_norm16_tr1_denois_max_num_START (16)
#define SOC_VENC_VCTRL_NORM_TR16X16_COEFF_DENOISE_norm16_tr1_denois_max_num_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int skin32_coeff_protect_num : 10;
        unsigned int reserved_0 : 6;
        unsigned int skin32_tr1_denois_max_num : 5;
        unsigned int reserved_1 : 11;
    } reg;
} SOC_VENC_VCTRL_SKIN_TR32X32_COEFF_DENOISE_UNION;
#endif
#define SOC_VENC_VCTRL_SKIN_TR32X32_COEFF_DENOISE_skin32_coeff_protect_num_START (0)
#define SOC_VENC_VCTRL_SKIN_TR32X32_COEFF_DENOISE_skin32_coeff_protect_num_END (9)
#define SOC_VENC_VCTRL_SKIN_TR32X32_COEFF_DENOISE_skin32_tr1_denois_max_num_START (16)
#define SOC_VENC_VCTRL_SKIN_TR32X32_COEFF_DENOISE_skin32_tr1_denois_max_num_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int skin16_coeff_protect_num : 8;
        unsigned int reserved_0 : 8;
        unsigned int skin16_tr1_denois_max_num : 5;
        unsigned int reserved_1 : 11;
    } reg;
} SOC_VENC_VCTRL_SKIN_TR16X16_COEFF_DENOISE_UNION;
#endif
#define SOC_VENC_VCTRL_SKIN_TR16X16_COEFF_DENOISE_skin16_coeff_protect_num_START (0)
#define SOC_VENC_VCTRL_SKIN_TR16X16_COEFF_DENOISE_skin16_coeff_protect_num_END (7)
#define SOC_VENC_VCTRL_SKIN_TR16X16_COEFF_DENOISE_skin16_tr1_denois_max_num_START (16)
#define SOC_VENC_VCTRL_SKIN_TR16X16_COEFF_DENOISE_skin16_tr1_denois_max_num_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int static32_coeff_protect_num : 10;
        unsigned int reserved_0 : 6;
        unsigned int static32_tr1_denois_max_num : 5;
        unsigned int reserved_1 : 11;
    } reg;
} SOC_VENC_VCTRL_STATIC_TR32X32_COEFF_DENOISE_UNION;
#endif
#define SOC_VENC_VCTRL_STATIC_TR32X32_COEFF_DENOISE_static32_coeff_protect_num_START (0)
#define SOC_VENC_VCTRL_STATIC_TR32X32_COEFF_DENOISE_static32_coeff_protect_num_END (9)
#define SOC_VENC_VCTRL_STATIC_TR32X32_COEFF_DENOISE_static32_tr1_denois_max_num_START (16)
#define SOC_VENC_VCTRL_STATIC_TR32X32_COEFF_DENOISE_static32_tr1_denois_max_num_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int static16_coeff_protect_num : 8;
        unsigned int reserved_0 : 8;
        unsigned int static16_tr1_denois_max_num : 5;
        unsigned int reserved_1 : 11;
    } reg;
} SOC_VENC_VCTRL_STATIC_TR16X16_COEFF_DENOISE_UNION;
#endif
#define SOC_VENC_VCTRL_STATIC_TR16X16_COEFF_DENOISE_static16_coeff_protect_num_START (0)
#define SOC_VENC_VCTRL_STATIC_TR16X16_COEFF_DENOISE_static16_coeff_protect_num_END (7)
#define SOC_VENC_VCTRL_STATIC_TR16X16_COEFF_DENOISE_static16_tr1_denois_max_num_START (16)
#define SOC_VENC_VCTRL_STATIC_TR16X16_COEFF_DENOISE_static16_tr1_denois_max_num_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hedge32_coeff_protect_num : 10;
        unsigned int reserved_0 : 6;
        unsigned int hedge32_tr1_denois_max_num : 5;
        unsigned int reserved_1 : 11;
    } reg;
} SOC_VENC_VCTRL_HEDGE_TR32X32_COEFF_DENOISE_UNION;
#endif
#define SOC_VENC_VCTRL_HEDGE_TR32X32_COEFF_DENOISE_hedge32_coeff_protect_num_START (0)
#define SOC_VENC_VCTRL_HEDGE_TR32X32_COEFF_DENOISE_hedge32_coeff_protect_num_END (9)
#define SOC_VENC_VCTRL_HEDGE_TR32X32_COEFF_DENOISE_hedge32_tr1_denois_max_num_START (16)
#define SOC_VENC_VCTRL_HEDGE_TR32X32_COEFF_DENOISE_hedge32_tr1_denois_max_num_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hedge16_coeff_protect_num : 8;
        unsigned int reserved_0 : 8;
        unsigned int hedge16_tr1_denois_max_num : 5;
        unsigned int reserved_1 : 11;
    } reg;
} SOC_VENC_VCTRL_HEDGE_TR16X16_COEFF_DENOISE_UNION;
#endif
#define SOC_VENC_VCTRL_HEDGE_TR16X16_COEFF_DENOISE_hedge16_coeff_protect_num_START (0)
#define SOC_VENC_VCTRL_HEDGE_TR16X16_COEFF_DENOISE_hedge16_coeff_protect_num_END (7)
#define SOC_VENC_VCTRL_HEDGE_TR16X16_COEFF_DENOISE_hedge16_tr1_denois_max_num_START (16)
#define SOC_VENC_VCTRL_HEDGE_TR16X16_COEFF_DENOISE_hedge16_tr1_denois_max_num_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int norm_intra_cu4_rdcost_offset : 4;
        unsigned int norm_intra_cu8_rdcost_offset : 4;
        unsigned int norm_intra_cu16_rdcost_offset : 4;
        unsigned int norm_intra_cu32_rdcost_offset : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_VCTRL_NORMAL_INTRA_RDO_FACTOR_UNION;
#endif
#define SOC_VENC_VCTRL_NORMAL_INTRA_RDO_FACTOR_norm_intra_cu4_rdcost_offset_START (0)
#define SOC_VENC_VCTRL_NORMAL_INTRA_RDO_FACTOR_norm_intra_cu4_rdcost_offset_END (3)
#define SOC_VENC_VCTRL_NORMAL_INTRA_RDO_FACTOR_norm_intra_cu8_rdcost_offset_START (4)
#define SOC_VENC_VCTRL_NORMAL_INTRA_RDO_FACTOR_norm_intra_cu8_rdcost_offset_END (7)
#define SOC_VENC_VCTRL_NORMAL_INTRA_RDO_FACTOR_norm_intra_cu16_rdcost_offset_START (8)
#define SOC_VENC_VCTRL_NORMAL_INTRA_RDO_FACTOR_norm_intra_cu16_rdcost_offset_END (11)
#define SOC_VENC_VCTRL_NORMAL_INTRA_RDO_FACTOR_norm_intra_cu32_rdcost_offset_START (12)
#define SOC_VENC_VCTRL_NORMAL_INTRA_RDO_FACTOR_norm_intra_cu32_rdcost_offset_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int norm_mrg_cu8_rdcost_offset : 4;
        unsigned int norm_mrg_cu16_rdcost_offset : 4;
        unsigned int norm_mrg_cu32_rdcost_offset : 4;
        unsigned int norm_mrg_cu64_rdcost_offset : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_VCTRL_NORMAL_MRG_RDO_FACTOR_UNION;
#endif
#define SOC_VENC_VCTRL_NORMAL_MRG_RDO_FACTOR_norm_mrg_cu8_rdcost_offset_START (0)
#define SOC_VENC_VCTRL_NORMAL_MRG_RDO_FACTOR_norm_mrg_cu8_rdcost_offset_END (3)
#define SOC_VENC_VCTRL_NORMAL_MRG_RDO_FACTOR_norm_mrg_cu16_rdcost_offset_START (4)
#define SOC_VENC_VCTRL_NORMAL_MRG_RDO_FACTOR_norm_mrg_cu16_rdcost_offset_END (7)
#define SOC_VENC_VCTRL_NORMAL_MRG_RDO_FACTOR_norm_mrg_cu32_rdcost_offset_START (8)
#define SOC_VENC_VCTRL_NORMAL_MRG_RDO_FACTOR_norm_mrg_cu32_rdcost_offset_END (11)
#define SOC_VENC_VCTRL_NORMAL_MRG_RDO_FACTOR_norm_mrg_cu64_rdcost_offset_START (12)
#define SOC_VENC_VCTRL_NORMAL_MRG_RDO_FACTOR_norm_mrg_cu64_rdcost_offset_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int norm_fme_cu8_rdcost_offset : 4;
        unsigned int norm_fme_cu16_rdcost_offset : 4;
        unsigned int norm_fme_cu32_rdcost_offset : 4;
        unsigned int norm_fme_cu64_rdcost_offset : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_VCTRL_NORMAL_FME_RDO_FACTOR_UNION;
#endif
#define SOC_VENC_VCTRL_NORMAL_FME_RDO_FACTOR_norm_fme_cu8_rdcost_offset_START (0)
#define SOC_VENC_VCTRL_NORMAL_FME_RDO_FACTOR_norm_fme_cu8_rdcost_offset_END (3)
#define SOC_VENC_VCTRL_NORMAL_FME_RDO_FACTOR_norm_fme_cu16_rdcost_offset_START (4)
#define SOC_VENC_VCTRL_NORMAL_FME_RDO_FACTOR_norm_fme_cu16_rdcost_offset_END (7)
#define SOC_VENC_VCTRL_NORMAL_FME_RDO_FACTOR_norm_fme_cu32_rdcost_offset_START (8)
#define SOC_VENC_VCTRL_NORMAL_FME_RDO_FACTOR_norm_fme_cu32_rdcost_offset_END (11)
#define SOC_VENC_VCTRL_NORMAL_FME_RDO_FACTOR_norm_fme_cu64_rdcost_offset_START (12)
#define SOC_VENC_VCTRL_NORMAL_FME_RDO_FACTOR_norm_fme_cu64_rdcost_offset_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int skin_intra_cu4_rdcost_offset : 4;
        unsigned int skin_intra_cu8_rdcost_offset : 4;
        unsigned int skin_intra_cu16_rdcost_offset : 4;
        unsigned int skin_intra_cu32_rdcost_offset : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_VCTRL_SKIN_REGION_INTRA_RDO_FACTOR_UNION;
#endif
#define SOC_VENC_VCTRL_SKIN_REGION_INTRA_RDO_FACTOR_skin_intra_cu4_rdcost_offset_START (0)
#define SOC_VENC_VCTRL_SKIN_REGION_INTRA_RDO_FACTOR_skin_intra_cu4_rdcost_offset_END (3)
#define SOC_VENC_VCTRL_SKIN_REGION_INTRA_RDO_FACTOR_skin_intra_cu8_rdcost_offset_START (4)
#define SOC_VENC_VCTRL_SKIN_REGION_INTRA_RDO_FACTOR_skin_intra_cu8_rdcost_offset_END (7)
#define SOC_VENC_VCTRL_SKIN_REGION_INTRA_RDO_FACTOR_skin_intra_cu16_rdcost_offset_START (8)
#define SOC_VENC_VCTRL_SKIN_REGION_INTRA_RDO_FACTOR_skin_intra_cu16_rdcost_offset_END (11)
#define SOC_VENC_VCTRL_SKIN_REGION_INTRA_RDO_FACTOR_skin_intra_cu32_rdcost_offset_START (12)
#define SOC_VENC_VCTRL_SKIN_REGION_INTRA_RDO_FACTOR_skin_intra_cu32_rdcost_offset_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int skin_mrg_cu8_rdcost_offset : 4;
        unsigned int skin_mrg_cu16_rdcost_offset : 4;
        unsigned int skin_mrg_cu32_rdcost_offset : 4;
        unsigned int skin_mrg_cu64_rdcost_offset : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_VCTRL_SKIN_REGION_MRG_RDO_FACTOR_UNION;
#endif
#define SOC_VENC_VCTRL_SKIN_REGION_MRG_RDO_FACTOR_skin_mrg_cu8_rdcost_offset_START (0)
#define SOC_VENC_VCTRL_SKIN_REGION_MRG_RDO_FACTOR_skin_mrg_cu8_rdcost_offset_END (3)
#define SOC_VENC_VCTRL_SKIN_REGION_MRG_RDO_FACTOR_skin_mrg_cu16_rdcost_offset_START (4)
#define SOC_VENC_VCTRL_SKIN_REGION_MRG_RDO_FACTOR_skin_mrg_cu16_rdcost_offset_END (7)
#define SOC_VENC_VCTRL_SKIN_REGION_MRG_RDO_FACTOR_skin_mrg_cu32_rdcost_offset_START (8)
#define SOC_VENC_VCTRL_SKIN_REGION_MRG_RDO_FACTOR_skin_mrg_cu32_rdcost_offset_END (11)
#define SOC_VENC_VCTRL_SKIN_REGION_MRG_RDO_FACTOR_skin_mrg_cu64_rdcost_offset_START (12)
#define SOC_VENC_VCTRL_SKIN_REGION_MRG_RDO_FACTOR_skin_mrg_cu64_rdcost_offset_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int skin_fme_cu8_rdcost_offset : 4;
        unsigned int skin_fme_cu16_rdcost_offset : 4;
        unsigned int skin_fme_cu32_rdcost_offset : 4;
        unsigned int skin_fme_cu64_rdcost_offset : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_VCTRL_SKIN_REGION_FME_RDO_FACTOR_UNION;
#endif
#define SOC_VENC_VCTRL_SKIN_REGION_FME_RDO_FACTOR_skin_fme_cu8_rdcost_offset_START (0)
#define SOC_VENC_VCTRL_SKIN_REGION_FME_RDO_FACTOR_skin_fme_cu8_rdcost_offset_END (3)
#define SOC_VENC_VCTRL_SKIN_REGION_FME_RDO_FACTOR_skin_fme_cu16_rdcost_offset_START (4)
#define SOC_VENC_VCTRL_SKIN_REGION_FME_RDO_FACTOR_skin_fme_cu16_rdcost_offset_END (7)
#define SOC_VENC_VCTRL_SKIN_REGION_FME_RDO_FACTOR_skin_fme_cu32_rdcost_offset_START (8)
#define SOC_VENC_VCTRL_SKIN_REGION_FME_RDO_FACTOR_skin_fme_cu32_rdcost_offset_END (11)
#define SOC_VENC_VCTRL_SKIN_REGION_FME_RDO_FACTOR_skin_fme_cu64_rdcost_offset_START (12)
#define SOC_VENC_VCTRL_SKIN_REGION_FME_RDO_FACTOR_skin_fme_cu64_rdcost_offset_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hedge_intra_cu4_rdcost_offset : 4;
        unsigned int hedge_intra_cu8_rdcost_offset : 4;
        unsigned int hedge_intra_cu16_rdcost_offset : 4;
        unsigned int hedge_intra_cu32_rdcost_offset : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_VCTRL_HIGH_EDGE_INTRA_RDO_FACTOR_UNION;
#endif
#define SOC_VENC_VCTRL_HIGH_EDGE_INTRA_RDO_FACTOR_hedge_intra_cu4_rdcost_offset_START (0)
#define SOC_VENC_VCTRL_HIGH_EDGE_INTRA_RDO_FACTOR_hedge_intra_cu4_rdcost_offset_END (3)
#define SOC_VENC_VCTRL_HIGH_EDGE_INTRA_RDO_FACTOR_hedge_intra_cu8_rdcost_offset_START (4)
#define SOC_VENC_VCTRL_HIGH_EDGE_INTRA_RDO_FACTOR_hedge_intra_cu8_rdcost_offset_END (7)
#define SOC_VENC_VCTRL_HIGH_EDGE_INTRA_RDO_FACTOR_hedge_intra_cu16_rdcost_offset_START (8)
#define SOC_VENC_VCTRL_HIGH_EDGE_INTRA_RDO_FACTOR_hedge_intra_cu16_rdcost_offset_END (11)
#define SOC_VENC_VCTRL_HIGH_EDGE_INTRA_RDO_FACTOR_hedge_intra_cu32_rdcost_offset_START (12)
#define SOC_VENC_VCTRL_HIGH_EDGE_INTRA_RDO_FACTOR_hedge_intra_cu32_rdcost_offset_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hedge_mrg_cu8_rdcost_offset : 4;
        unsigned int hedge_mrg_cu16_rdcost_offset : 4;
        unsigned int hedge_mrg_cu32_rdcost_offset : 4;
        unsigned int hedge_mrg_cu64_rdcost_offset : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_VCTRL_HIGH_EDGE_MRG_RDO_FACTOR_UNION;
#endif
#define SOC_VENC_VCTRL_HIGH_EDGE_MRG_RDO_FACTOR_hedge_mrg_cu8_rdcost_offset_START (0)
#define SOC_VENC_VCTRL_HIGH_EDGE_MRG_RDO_FACTOR_hedge_mrg_cu8_rdcost_offset_END (3)
#define SOC_VENC_VCTRL_HIGH_EDGE_MRG_RDO_FACTOR_hedge_mrg_cu16_rdcost_offset_START (4)
#define SOC_VENC_VCTRL_HIGH_EDGE_MRG_RDO_FACTOR_hedge_mrg_cu16_rdcost_offset_END (7)
#define SOC_VENC_VCTRL_HIGH_EDGE_MRG_RDO_FACTOR_hedge_mrg_cu32_rdcost_offset_START (8)
#define SOC_VENC_VCTRL_HIGH_EDGE_MRG_RDO_FACTOR_hedge_mrg_cu32_rdcost_offset_END (11)
#define SOC_VENC_VCTRL_HIGH_EDGE_MRG_RDO_FACTOR_hedge_mrg_cu64_rdcost_offset_START (12)
#define SOC_VENC_VCTRL_HIGH_EDGE_MRG_RDO_FACTOR_hedge_mrg_cu64_rdcost_offset_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hedge_fme_cu8_rdcost_offset : 4;
        unsigned int hedge_fme_cu16_rdcost_offset : 4;
        unsigned int hedge_fme_cu32_rdcost_offset : 4;
        unsigned int hedge_fme_cu64_rdcost_offset : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_VCTRL_HIGH_EDGE_FME_RDO_FACTOR_UNION;
#endif
#define SOC_VENC_VCTRL_HIGH_EDGE_FME_RDO_FACTOR_hedge_fme_cu8_rdcost_offset_START (0)
#define SOC_VENC_VCTRL_HIGH_EDGE_FME_RDO_FACTOR_hedge_fme_cu8_rdcost_offset_END (3)
#define SOC_VENC_VCTRL_HIGH_EDGE_FME_RDO_FACTOR_hedge_fme_cu16_rdcost_offset_START (4)
#define SOC_VENC_VCTRL_HIGH_EDGE_FME_RDO_FACTOR_hedge_fme_cu16_rdcost_offset_END (7)
#define SOC_VENC_VCTRL_HIGH_EDGE_FME_RDO_FACTOR_hedge_fme_cu32_rdcost_offset_START (8)
#define SOC_VENC_VCTRL_HIGH_EDGE_FME_RDO_FACTOR_hedge_fme_cu32_rdcost_offset_END (11)
#define SOC_VENC_VCTRL_HIGH_EDGE_FME_RDO_FACTOR_hedge_fme_cu64_rdcost_offset_START (12)
#define SOC_VENC_VCTRL_HIGH_EDGE_FME_RDO_FACTOR_hedge_fme_cu64_rdcost_offset_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_VCTRL_RESERVED2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pipe_total_cycle : 32;
    } reg;
} SOC_VENC_VCTRL_PERF_TOTAL_PIPE_UNION;
#endif
#define SOC_VENC_VCTRL_PERF_TOTAL_PIPE_pipe_total_cycle_START (0)
#define SOC_VENC_VCTRL_PERF_TOTAL_PIPE_pipe_total_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pmeld_toal_cycle : 32;
    } reg;
} SOC_VENC_VCTRL_PERF_TOTAL_PMELD_UNION;
#endif
#define SOC_VENC_VCTRL_PERF_TOTAL_PMELD_pmeld_toal_cycle_START (0)
#define SOC_VENC_VCTRL_PERF_TOTAL_PMELD_pmeld_toal_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int nbi_total_cycle : 32;
    } reg;
} SOC_VENC_VCTRL_PERF_TOTAL_NBI_UNION;
#endif
#define SOC_VENC_VCTRL_PERF_TOTAL_NBI_nbi_total_cycle_START (0)
#define SOC_VENC_VCTRL_PERF_TOTAL_NBI_nbi_total_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int qpg_total_cycle : 32;
    } reg;
} SOC_VENC_VCTRL_PERF_TOTAL_QPG_UNION;
#endif
#define SOC_VENC_VCTRL_PERF_TOTAL_QPG_qpg_total_cycle_START (0)
#define SOC_VENC_VCTRL_PERF_TOTAL_QPG_qpg_total_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pme_total_cycle : 32;
    } reg;
} SOC_VENC_VCTRL_PERF_TOTAL_PME_UNION;
#endif
#define SOC_VENC_VCTRL_PERF_TOTAL_PME_pme_total_cycle_START (0)
#define SOC_VENC_VCTRL_PERF_TOTAL_PME_pme_total_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refld_luma_total_cycle : 32;
    } reg;
} SOC_VENC_VCTRL_PERF_TOTAL_REFLD_LUMA_UNION;
#endif
#define SOC_VENC_VCTRL_PERF_TOTAL_REFLD_LUMA_refld_luma_total_cycle_START (0)
#define SOC_VENC_VCTRL_PERF_TOTAL_REFLD_LUMA_refld_luma_total_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refld_chroma_total_cycle : 32;
    } reg;
} SOC_VENC_VCTRL_PERF_TOTAL_REFLD_CHMA_UNION;
#endif
#define SOC_VENC_VCTRL_PERF_TOTAL_REFLD_CHMA_refld_chroma_total_cycle_START (0)
#define SOC_VENC_VCTRL_PERF_TOTAL_REFLD_CHMA_refld_chroma_total_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_total_cycle : 32;
    } reg;
} SOC_VENC_VCTRL_PERF_TOTAL_CURLD_UNION;
#endif
#define SOC_VENC_VCTRL_PERF_TOTAL_CURLD_curld_total_cycle_START (0)
#define SOC_VENC_VCTRL_PERF_TOTAL_CURLD_curld_total_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ime_total_cycle : 32;
    } reg;
} SOC_VENC_VCTRL_PERF_TOTAL_IME_UNION;
#endif
#define SOC_VENC_VCTRL_PERF_TOTAL_IME_ime_total_cycle_START (0)
#define SOC_VENC_VCTRL_PERF_TOTAL_IME_ime_total_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pintra_total_cycle : 32;
    } reg;
} SOC_VENC_VCTRL_PERF_TOTAL_PINTRA_UNION;
#endif
#define SOC_VENC_VCTRL_PERF_TOTAL_PINTRA_pintra_total_cycle_START (0)
#define SOC_VENC_VCTRL_PERF_TOTAL_PINTRA_pintra_total_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mrg_total_cycle : 32;
    } reg;
} SOC_VENC_VCTRL_PERF_TOTAL_MRG_UNION;
#endif
#define SOC_VENC_VCTRL_PERF_TOTAL_MRG_mrg_total_cycle_START (0)
#define SOC_VENC_VCTRL_PERF_TOTAL_MRG_mrg_total_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fme_total_cycle : 32;
    } reg;
} SOC_VENC_VCTRL_PERF_TOTAL_FME_UNION;
#endif
#define SOC_VENC_VCTRL_PERF_TOTAL_FME_fme_total_cycle_START (0)
#define SOC_VENC_VCTRL_PERF_TOTAL_FME_fme_total_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pmv_total_cycle : 32;
    } reg;
} SOC_VENC_VCTRL_PERF_TOTAL_PMV_UNION;
#endif
#define SOC_VENC_VCTRL_PERF_TOTAL_PMV_pmv_total_cycle_START (0)
#define SOC_VENC_VCTRL_PERF_TOTAL_PMV_pmv_total_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sel_toal_cycle : 32;
    } reg;
} SOC_VENC_VCTRL_PERF_TOTAL_SEL_UNION;
#endif
#define SOC_VENC_VCTRL_PERF_TOTAL_SEL_sel_toal_cycle_START (0)
#define SOC_VENC_VCTRL_PERF_TOTAL_SEL_sel_toal_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intra_toal_cycle : 32;
    } reg;
} SOC_VENC_VCTRL_PERF_TOTAL_INTRA_UNION;
#endif
#define SOC_VENC_VCTRL_PERF_TOTAL_INTRA_intra_toal_cycle_START (0)
#define SOC_VENC_VCTRL_PERF_TOTAL_INTRA_intra_toal_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao_toal_cycle : 32;
    } reg;
} SOC_VENC_VCTRL_PERF_TOTAL_SAO_UNION;
#endif
#define SOC_VENC_VCTRL_PERF_TOTAL_SAO_sao_toal_cycle_START (0)
#define SOC_VENC_VCTRL_PERF_TOTAL_SAO_sao_toal_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dblk_total_cycle : 32;
    } reg;
} SOC_VENC_VCTRL_PERF_TOTAL_DBLK_UNION;
#endif
#define SOC_VENC_VCTRL_PERF_TOTAL_DBLK_dblk_total_cycle_START (0)
#define SOC_VENC_VCTRL_PERF_TOTAL_DBLK_dblk_total_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pack_total_cycle : 32;
    } reg;
} SOC_VENC_VCTRL_PERF_TOTAL_PACK_UNION;
#endif
#define SOC_VENC_VCTRL_PERF_TOTAL_PACK_pack_total_cycle_START (0)
#define SOC_VENC_VCTRL_PERF_TOTAL_PACK_pack_total_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cabac_total_cycle : 32;
    } reg;
} SOC_VENC_VCTRL_PERF_TOTAL_CABAC_UNION;
#endif
#define SOC_VENC_VCTRL_PERF_TOTAL_CABAC_cabac_total_cycle_START (0)
#define SOC_VENC_VCTRL_PERF_TOTAL_CABAC_cabac_total_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_num_ovr_pref_base : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_VCTRL_OVERHEAD_PIPE_UNION;
#endif
#define SOC_VENC_VCTRL_OVERHEAD_PIPE_lcu_num_ovr_pref_base_START (0)
#define SOC_VENC_VCTRL_OVERHEAD_PIPE_lcu_num_ovr_pref_base_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_num_ovr_pref_base : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_VCTRL_OVERHEAD_PMELD_UNION;
#endif
#define SOC_VENC_VCTRL_OVERHEAD_PMELD_lcu_num_ovr_pref_base_START (0)
#define SOC_VENC_VCTRL_OVERHEAD_PMELD_lcu_num_ovr_pref_base_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_num_ovr_pref_base : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_VCTRL_OVERHEAD_NBI_UNION;
#endif
#define SOC_VENC_VCTRL_OVERHEAD_NBI_lcu_num_ovr_pref_base_START (0)
#define SOC_VENC_VCTRL_OVERHEAD_NBI_lcu_num_ovr_pref_base_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_num_ovr_pref_base : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_VCTRL_OVERHEAD_QPG_UNION;
#endif
#define SOC_VENC_VCTRL_OVERHEAD_QPG_lcu_num_ovr_pref_base_START (0)
#define SOC_VENC_VCTRL_OVERHEAD_QPG_lcu_num_ovr_pref_base_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_num_ovr_pref_base : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_VCTRL_OVERHEAD_PME_UNION;
#endif
#define SOC_VENC_VCTRL_OVERHEAD_PME_lcu_num_ovr_pref_base_START (0)
#define SOC_VENC_VCTRL_OVERHEAD_PME_lcu_num_ovr_pref_base_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_num_ovr_pref_base : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_VCTRL_OVERHEAD_REFLD_LUMA_UNION;
#endif
#define SOC_VENC_VCTRL_OVERHEAD_REFLD_LUMA_lcu_num_ovr_pref_base_START (0)
#define SOC_VENC_VCTRL_OVERHEAD_REFLD_LUMA_lcu_num_ovr_pref_base_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_num_ovr_pref_base : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_VCTRL_OVERHEAD_REFLD_CHMA_UNION;
#endif
#define SOC_VENC_VCTRL_OVERHEAD_REFLD_CHMA_lcu_num_ovr_pref_base_START (0)
#define SOC_VENC_VCTRL_OVERHEAD_REFLD_CHMA_lcu_num_ovr_pref_base_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_num_ovr_pref_base : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_VCTRL_OVERHEAD_CURLD_UNION;
#endif
#define SOC_VENC_VCTRL_OVERHEAD_CURLD_lcu_num_ovr_pref_base_START (0)
#define SOC_VENC_VCTRL_OVERHEAD_CURLD_lcu_num_ovr_pref_base_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_num_ovr_pref_base : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_VCTRL_OVERHEAD_IME_UNION;
#endif
#define SOC_VENC_VCTRL_OVERHEAD_IME_lcu_num_ovr_pref_base_START (0)
#define SOC_VENC_VCTRL_OVERHEAD_IME_lcu_num_ovr_pref_base_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_num_ovr_pref_base : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_VCTRL_OVERHEAD_PINTRA_UNION;
#endif
#define SOC_VENC_VCTRL_OVERHEAD_PINTRA_lcu_num_ovr_pref_base_START (0)
#define SOC_VENC_VCTRL_OVERHEAD_PINTRA_lcu_num_ovr_pref_base_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_num_ovr_pref_base : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_VCTRL_OVERHEAD_MRG_UNION;
#endif
#define SOC_VENC_VCTRL_OVERHEAD_MRG_lcu_num_ovr_pref_base_START (0)
#define SOC_VENC_VCTRL_OVERHEAD_MRG_lcu_num_ovr_pref_base_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_num_ovr_pref_base : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_VCTRL_OVERHEAD_FME_UNION;
#endif
#define SOC_VENC_VCTRL_OVERHEAD_FME_lcu_num_ovr_pref_base_START (0)
#define SOC_VENC_VCTRL_OVERHEAD_FME_lcu_num_ovr_pref_base_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_num_ovr_pref_base : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_VCTRL_OVERHEAD_PMV_UNION;
#endif
#define SOC_VENC_VCTRL_OVERHEAD_PMV_lcu_num_ovr_pref_base_START (0)
#define SOC_VENC_VCTRL_OVERHEAD_PMV_lcu_num_ovr_pref_base_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_num_ovr_pref_base : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_VCTRL_OVERHEAD_SEL_UNION;
#endif
#define SOC_VENC_VCTRL_OVERHEAD_SEL_lcu_num_ovr_pref_base_START (0)
#define SOC_VENC_VCTRL_OVERHEAD_SEL_lcu_num_ovr_pref_base_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_num_ovr_pref_base : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_VCTRL_OVERHEAD_INTRA_UNION;
#endif
#define SOC_VENC_VCTRL_OVERHEAD_INTRA_lcu_num_ovr_pref_base_START (0)
#define SOC_VENC_VCTRL_OVERHEAD_INTRA_lcu_num_ovr_pref_base_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_num_ovr_pref_base : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_VCTRL_OVERHEAD_SAO_UNION;
#endif
#define SOC_VENC_VCTRL_OVERHEAD_SAO_lcu_num_ovr_pref_base_START (0)
#define SOC_VENC_VCTRL_OVERHEAD_SAO_lcu_num_ovr_pref_base_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_num_ovr_pref_base : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_VCTRL_OVERHEAD_DBLK_UNION;
#endif
#define SOC_VENC_VCTRL_OVERHEAD_DBLK_lcu_num_ovr_pref_base_START (0)
#define SOC_VENC_VCTRL_OVERHEAD_DBLK_lcu_num_ovr_pref_base_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_num_ovr_pref_base : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_VCTRL_OVERHEAD_PACK_UNION;
#endif
#define SOC_VENC_VCTRL_OVERHEAD_PACK_lcu_num_ovr_pref_base_START (0)
#define SOC_VENC_VCTRL_OVERHEAD_PACK_lcu_num_ovr_pref_base_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_num_ovr_pref_base : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_VCTRL_OVERHEAD_CABAC_UNION;
#endif
#define SOC_VENC_VCTRL_OVERHEAD_CABAC_lcu_num_ovr_pref_base_START (0)
#define SOC_VENC_VCTRL_OVERHEAD_CABAC_lcu_num_ovr_pref_base_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fme_cu_info_low_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_VCTRL_FME_CU_INFO_LOW_CNT_UNION;
#endif
#define SOC_VENC_VCTRL_FME_CU_INFO_LOW_CNT_fme_cu_info_low_cnt_START (0)
#define SOC_VENC_VCTRL_FME_CU_INFO_LOW_CNT_fme_cu_info_low_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fme_cu_info_high_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_VCTRL_FME_CU_INFO_HIGH_CNT_UNION;
#endif
#define SOC_VENC_VCTRL_FME_CU_INFO_HIGH_CNT_fme_cu_info_high_cnt_START (0)
#define SOC_VENC_VCTRL_FME_CU_INFO_HIGH_CNT_fme_cu_info_high_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intra_low_pwr_en_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_VCTRL_INTRA_LOW_PWR_CNT_UNION;
#endif
#define SOC_VENC_VCTRL_INTRA_LOW_PWR_CNT_intra_low_pwr_en_cnt_START (0)
#define SOC_VENC_VCTRL_INTRA_LOW_PWR_CNT_intra_low_pwr_en_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inter_low_pwr_en_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_VCTRL_INTER_LOW_PWR_CNT_UNION;
#endif
#define SOC_VENC_VCTRL_INTER_LOW_PWR_CNT_inter_low_pwr_en_cnt_START (0)
#define SOC_VENC_VCTRL_INTER_LOW_PWR_CNT_inter_low_pwr_en_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_vedu_frm_cyc_cnt : 32;
    } reg;
} SOC_VENC_VCTRL_CLK_VEDU_FRM_CYC_CNT_UNION;
#endif
#define SOC_VENC_VCTRL_CLK_VEDU_FRM_CYC_CNT_clk_vedu_frm_cyc_cnt_START (0)
#define SOC_VENC_VCTRL_CLK_VEDU_FRM_CYC_CNT_clk_vedu_frm_cyc_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_VCTRL_RESERVED3_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_CURLD_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_psw_adapt_en : 1;
        unsigned int vcpi_new_cost_en : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_VENC_PME_SW_EN_UNION;
#endif
#define SOC_VENC_PME_SW_EN_vcpi_psw_adapt_en_START (0)
#define SOC_VENC_PME_SW_EN_vcpi_psw_adapt_en_END (0)
#define SOC_VENC_PME_SW_EN_vcpi_new_cost_en_START (1)
#define SOC_VENC_PME_SW_EN_vcpi_new_cost_en_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_psw_thr0 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_PME_SW_TR0_UNION;
#endif
#define SOC_VENC_PME_SW_TR0_vcpi_psw_thr0_START (0)
#define SOC_VENC_PME_SW_TR0_vcpi_psw_thr0_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_psw_thr1 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_PME_SW_TR1_UNION;
#endif
#define SOC_VENC_PME_SW_TR1_vcpi_psw_thr1_START (0)
#define SOC_VENC_PME_SW_TR1_vcpi_psw_thr1_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_psw_thr2 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_PME_SW_TR2_UNION;
#endif
#define SOC_VENC_PME_SW_TR2_vcpi_psw_thr2_START (0)
#define SOC_VENC_PME_SW_TR2_vcpi_psw_thr2_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_PME_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tr_weightx_0 : 9;
        unsigned int tr_weightx_1 : 9;
        unsigned int tr_weightx_2 : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_VENC_PME_TR_WEIGHTX_UNION;
#endif
#define SOC_VENC_PME_TR_WEIGHTX_tr_weightx_0_START (0)
#define SOC_VENC_PME_TR_WEIGHTX_tr_weightx_0_END (8)
#define SOC_VENC_PME_TR_WEIGHTX_tr_weightx_1_START (9)
#define SOC_VENC_PME_TR_WEIGHTX_tr_weightx_1_END (17)
#define SOC_VENC_PME_TR_WEIGHTX_tr_weightx_2_START (18)
#define SOC_VENC_PME_TR_WEIGHTX_tr_weightx_2_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tr_weighty_0 : 8;
        unsigned int tr_weighty_1 : 8;
        unsigned int tr_weighty_2 : 8;
        unsigned int reserved : 8;
    } reg;
} SOC_VENC_PME_TR_WEIGHTY_UNION;
#endif
#define SOC_VENC_PME_TR_WEIGHTY_tr_weighty_0_START (0)
#define SOC_VENC_PME_TR_WEIGHTY_tr_weighty_0_END (7)
#define SOC_VENC_PME_TR_WEIGHTY_tr_weighty_1_START (8)
#define SOC_VENC_PME_TR_WEIGHTY_tr_weighty_1_END (15)
#define SOC_VENC_PME_TR_WEIGHTY_tr_weighty_2_START (16)
#define SOC_VENC_PME_TR_WEIGHTY_tr_weighty_2_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sr_weight_0 : 4;
        unsigned int sr_weight_1 : 4;
        unsigned int sr_weight_2 : 4;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_PME_SR_WEIGHT_UNION;
#endif
#define SOC_VENC_PME_SR_WEIGHT_sr_weight_0_START (0)
#define SOC_VENC_PME_SR_WEIGHT_sr_weight_0_END (3)
#define SOC_VENC_PME_SR_WEIGHT_sr_weight_1_START (4)
#define SOC_VENC_PME_SR_WEIGHT_sr_weight_1_END (7)
#define SOC_VENC_PME_SR_WEIGHT_sr_weight_2_START (8)
#define SOC_VENC_PME_SR_WEIGHT_sr_weight_2_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_PME_RESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iblk_lcu_num : 32;
    } reg;
} SOC_VENC_pme_iblk_lcu_num_UNION;
#endif
#define SOC_VENC_pme_iblk_lcu_num_iblk_lcu_num_START (0)
#define SOC_VENC_pme_iblk_lcu_num_iblk_lcu_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pblk_lcu_num : 32;
    } reg;
} SOC_VENC_pme_pblk_lcu_num_UNION;
#endif
#define SOC_VENC_pme_pblk_lcu_num_pblk_lcu_num_START (0)
#define SOC_VENC_pme_pblk_lcu_num_pblk_lcu_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int skin_u_max_thr : 8;
        unsigned int skin_u_min_thr : 8;
        unsigned int skin_v_max_thr : 8;
        unsigned int skin_v_min_thr : 8;
    } reg;
} SOC_VENC_pme_skin_thr_UNION;
#endif
#define SOC_VENC_pme_skin_thr_skin_u_max_thr_START (0)
#define SOC_VENC_pme_skin_thr_skin_u_max_thr_END (7)
#define SOC_VENC_pme_skin_thr_skin_u_min_thr_START (8)
#define SOC_VENC_pme_skin_thr_skin_u_min_thr_END (15)
#define SOC_VENC_pme_skin_thr_skin_v_max_thr_START (16)
#define SOC_VENC_pme_skin_thr_skin_v_max_thr_END (23)
#define SOC_VENC_pme_skin_thr_skin_v_min_thr_START (24)
#define SOC_VENC_pme_skin_thr_skin_v_min_thr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_PME_RESERVED2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int skin_num : 9;
        unsigned int high_edge_thr : 8;
        unsigned int high_edge_cnt : 5;
        unsigned int still_scene_thr : 9;
        unsigned int reserved : 1;
    } reg;
} SOC_VENC_pme_high_edge_UNION;
#endif
#define SOC_VENC_pme_high_edge_skin_num_START (0)
#define SOC_VENC_pme_high_edge_skin_num_END (8)
#define SOC_VENC_pme_high_edge_high_edge_thr_START (9)
#define SOC_VENC_pme_high_edge_high_edge_thr_END (16)
#define SOC_VENC_pme_high_edge_high_edge_cnt_START (17)
#define SOC_VENC_pme_high_edge_high_edge_cnt_END (21)
#define SOC_VENC_pme_high_edge_still_scene_thr_START (22)
#define SOC_VENC_pme_high_edge_still_scene_thr_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_PME_RESERVED3_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_cross_idx : 10;
        unsigned int reserved_0 : 7;
        unsigned int refld_vcpi2cont_title_en : 1;
        unsigned int reserved_1 : 14;
    } reg;
} SOC_VENC_REFLD_CMD_CFG_UNION;
#endif
#define SOC_VENC_REFLD_CMD_CFG_ddr_cross_idx_START (0)
#define SOC_VENC_REFLD_CMD_CFG_ddr_cross_idx_END (9)
#define SOC_VENC_REFLD_CMD_CFG_refld_vcpi2cont_title_en_START (17)
#define SOC_VENC_REFLD_CMD_CFG_refld_vcpi2cont_title_en_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_REFLD_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_REFLD_TBL_ADDR_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_REFLD_TBL_RD_DATA0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_REFLD_TBL_RD_DATA1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_REFLD_TBL_RD_DATA2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_REFLD_TBL_RD_DATA3_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_REFLD_TBL_RD_DATA4_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_REFLD_RESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcux : 9;
        unsigned int lcuy : 9;
        unsigned int need_modify_flag : 1;
        unsigned int nulock_miss_flag : 1;
        unsigned int lock_table_cs_err : 1;
        unsigned int reserved : 11;
    } reg;
} SOC_VENC_REFLD_LOCK_STATE_UNION;
#endif
#define SOC_VENC_REFLD_LOCK_STATE_lcux_START (0)
#define SOC_VENC_REFLD_LOCK_STATE_lcux_END (8)
#define SOC_VENC_REFLD_LOCK_STATE_lcuy_START (9)
#define SOC_VENC_REFLD_LOCK_STATE_lcuy_END (17)
#define SOC_VENC_REFLD_LOCK_STATE_need_modify_flag_START (18)
#define SOC_VENC_REFLD_LOCK_STATE_need_modify_flag_END (18)
#define SOC_VENC_REFLD_LOCK_STATE_nulock_miss_flag_START (19)
#define SOC_VENC_REFLD_LOCK_STATE_nulock_miss_flag_END (19)
#define SOC_VENC_REFLD_LOCK_STATE_lock_table_cs_err_START (20)
#define SOC_VENC_REFLD_LOCK_STATE_lock_table_cs_err_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cacheline_posx : 7;
        unsigned int cacheline_posy : 12;
        unsigned int buf_pose : 3;
        unsigned int cacheline_lcux : 9;
        unsigned int cacheline_wr_full : 1;
    } reg;
} SOC_VENC_REFLD_CMD_STATE_UNION;
#endif
#define SOC_VENC_REFLD_CMD_STATE_cacheline_posx_START (0)
#define SOC_VENC_REFLD_CMD_STATE_cacheline_posx_END (6)
#define SOC_VENC_REFLD_CMD_STATE_cacheline_posy_START (7)
#define SOC_VENC_REFLD_CMD_STATE_cacheline_posy_END (18)
#define SOC_VENC_REFLD_CMD_STATE_buf_pose_START (19)
#define SOC_VENC_REFLD_CMD_STATE_buf_pose_END (21)
#define SOC_VENC_REFLD_CMD_STATE_cacheline_lcux_START (22)
#define SOC_VENC_REFLD_CMD_STATE_cacheline_lcux_END (30)
#define SOC_VENC_REFLD_CMD_STATE_cacheline_wr_full_START (31)
#define SOC_VENC_REFLD_CMD_STATE_cacheline_wr_full_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int data_blk_rd_pntr : 5;
        unsigned int reserved_0 : 3;
        unsigned int data_blk_wr_pntr : 5;
        unsigned int reserved_1 : 3;
        unsigned int pre_blk_rd_pntr : 5;
        unsigned int reserved_2 : 3;
        unsigned int refld2dcmp_empty : 1;
        unsigned int rdata_blk_empty : 1;
        unsigned int data_blk_full : 1;
        unsigned int reserved_3 : 5;
    } reg;
} SOC_VENC_REFLD_MAG_STATE_UNION;
#endif
#define SOC_VENC_REFLD_MAG_STATE_data_blk_rd_pntr_START (0)
#define SOC_VENC_REFLD_MAG_STATE_data_blk_rd_pntr_END (4)
#define SOC_VENC_REFLD_MAG_STATE_data_blk_wr_pntr_START (8)
#define SOC_VENC_REFLD_MAG_STATE_data_blk_wr_pntr_END (12)
#define SOC_VENC_REFLD_MAG_STATE_pre_blk_rd_pntr_START (16)
#define SOC_VENC_REFLD_MAG_STATE_pre_blk_rd_pntr_END (20)
#define SOC_VENC_REFLD_MAG_STATE_refld2dcmp_empty_START (24)
#define SOC_VENC_REFLD_MAG_STATE_refld2dcmp_empty_END (24)
#define SOC_VENC_REFLD_MAG_STATE_rdata_blk_empty_START (25)
#define SOC_VENC_REFLD_MAG_STATE_rdata_blk_empty_END (25)
#define SOC_VENC_REFLD_MAG_STATE_data_blk_full_START (26)
#define SOC_VENC_REFLD_MAG_STATE_data_blk_full_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refld_wr_fifo_empty : 1;
        unsigned int refld_data_fifo_empty : 1;
        unsigned int cacheline_sche_wr_empty : 1;
        unsigned int need_modify_flag : 1;
        unsigned int axi_return_empty : 1;
        unsigned int axi_return_rd_pntr : 10;
        unsigned int axi_return_wr_pntr : 10;
        unsigned int reserved : 7;
    } reg;
} SOC_VENC_REFLD_DARB_STATE_UNION;
#endif
#define SOC_VENC_REFLD_DARB_STATE_refld_wr_fifo_empty_START (0)
#define SOC_VENC_REFLD_DARB_STATE_refld_wr_fifo_empty_END (0)
#define SOC_VENC_REFLD_DARB_STATE_refld_data_fifo_empty_START (1)
#define SOC_VENC_REFLD_DARB_STATE_refld_data_fifo_empty_END (1)
#define SOC_VENC_REFLD_DARB_STATE_cacheline_sche_wr_empty_START (2)
#define SOC_VENC_REFLD_DARB_STATE_cacheline_sche_wr_empty_END (2)
#define SOC_VENC_REFLD_DARB_STATE_need_modify_flag_START (3)
#define SOC_VENC_REFLD_DARB_STATE_need_modify_flag_END (3)
#define SOC_VENC_REFLD_DARB_STATE_axi_return_empty_START (4)
#define SOC_VENC_REFLD_DARB_STATE_axi_return_empty_END (4)
#define SOC_VENC_REFLD_DARB_STATE_axi_return_rd_pntr_START (5)
#define SOC_VENC_REFLD_DARB_STATE_axi_return_rd_pntr_END (14)
#define SOC_VENC_REFLD_DARB_STATE_axi_return_wr_pntr_START (15)
#define SOC_VENC_REFLD_DARB_STATE_axi_return_wr_pntr_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refld_luma_buf_full : 1;
        unsigned int luma_rd_pntr : 2;
        unsigned int luma_wr_pntr : 2;
        unsigned int reserved_0 : 3;
        unsigned int refld_chroma_buf_full : 1;
        unsigned int chroma_h265_rd_pntr : 3;
        unsigned int chroma_h265_wr_pntr : 3;
        unsigned int reserved_1 : 17;
    } reg;
} SOC_VENC_REFLD_BUF_STATE0_UNION;
#endif
#define SOC_VENC_REFLD_BUF_STATE0_refld_luma_buf_full_START (0)
#define SOC_VENC_REFLD_BUF_STATE0_refld_luma_buf_full_END (0)
#define SOC_VENC_REFLD_BUF_STATE0_luma_rd_pntr_START (1)
#define SOC_VENC_REFLD_BUF_STATE0_luma_rd_pntr_END (2)
#define SOC_VENC_REFLD_BUF_STATE0_luma_wr_pntr_START (3)
#define SOC_VENC_REFLD_BUF_STATE0_luma_wr_pntr_END (4)
#define SOC_VENC_REFLD_BUF_STATE0_refld_chroma_buf_full_START (8)
#define SOC_VENC_REFLD_BUF_STATE0_refld_chroma_buf_full_END (8)
#define SOC_VENC_REFLD_BUF_STATE0_chroma_h265_rd_pntr_START (9)
#define SOC_VENC_REFLD_BUF_STATE0_chroma_h265_rd_pntr_END (11)
#define SOC_VENC_REFLD_BUF_STATE0_chroma_h265_wr_pntr_START (12)
#define SOC_VENC_REFLD_BUF_STATE0_chroma_h265_wr_pntr_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dcmp_data_rdy : 16;
        unsigned int dcmp_data_empty : 1;
        unsigned int dcmp_data_full : 1;
        unsigned int dcmp_data_rd_base : 5;
        unsigned int dcmp_data_wr_base : 5;
        unsigned int chroma_head_buf_empty : 1;
        unsigned int luma_head_buf_empty : 1;
        unsigned int reserved : 2;
    } reg;
} SOC_VENC_REFLD_BUF_STATE1_UNION;
#endif
#define SOC_VENC_REFLD_BUF_STATE1_dcmp_data_rdy_START (0)
#define SOC_VENC_REFLD_BUF_STATE1_dcmp_data_rdy_END (15)
#define SOC_VENC_REFLD_BUF_STATE1_dcmp_data_empty_START (16)
#define SOC_VENC_REFLD_BUF_STATE1_dcmp_data_empty_END (16)
#define SOC_VENC_REFLD_BUF_STATE1_dcmp_data_full_START (17)
#define SOC_VENC_REFLD_BUF_STATE1_dcmp_data_full_END (17)
#define SOC_VENC_REFLD_BUF_STATE1_dcmp_data_rd_base_START (18)
#define SOC_VENC_REFLD_BUF_STATE1_dcmp_data_rd_base_END (22)
#define SOC_VENC_REFLD_BUF_STATE1_dcmp_data_wr_base_START (23)
#define SOC_VENC_REFLD_BUF_STATE1_dcmp_data_wr_base_END (27)
#define SOC_VENC_REFLD_BUF_STATE1_chroma_head_buf_empty_START (28)
#define SOC_VENC_REFLD_BUF_STATE1_chroma_head_buf_empty_END (28)
#define SOC_VENC_REFLD_BUF_STATE1_luma_head_buf_empty_START (29)
#define SOC_VENC_REFLD_BUF_STATE1_luma_head_buf_empty_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refld2emar_data_rdata : 32;
    } reg;
} SOC_VENC_REFLD_DATA_STATE0_UNION;
#endif
#define SOC_VENC_REFLD_DATA_STATE0_refld2emar_data_rdata_START (0)
#define SOC_VENC_REFLD_DATA_STATE0_refld2emar_data_rdata_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refld2emar_data_rcnt : 32;
    } reg;
} SOC_VENC_REFLD_DATA_STATE1_UNION;
#endif
#define SOC_VENC_REFLD_DATA_STATE1_refld2emar_data_rcnt_START (0)
#define SOC_VENC_REFLD_DATA_STATE1_refld2emar_data_rcnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cache_hit_cnt : 32;
    } reg;
} SOC_VENC_REFLD_DATA_STATE2_UNION;
#endif
#define SOC_VENC_REFLD_DATA_STATE2_cache_hit_cnt_START (0)
#define SOC_VENC_REFLD_DATA_STATE2_cache_hit_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cache_miss_cnt : 32;
    } reg;
} SOC_VENC_REFLD_DATA_STATE3_UNION;
#endif
#define SOC_VENC_REFLD_DATA_STATE3_cache_miss_cnt_START (0)
#define SOC_VENC_REFLD_DATA_STATE3_cache_miss_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dcmp_error : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_REFLD_ERROR_STATE_UNION;
#endif
#define SOC_VENC_REFLD_ERROR_STATE_dcmp_error_START (0)
#define SOC_VENC_REFLD_ERROR_STATE_dcmp_error_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pre_split_curr_state : 1;
        unsigned int reserved_0 : 15;
        unsigned int pre_judge_curr_state : 2;
        unsigned int reserved_1 : 14;
    } reg;
} SOC_VENC_REFLD_PRE_STATE_UNION;
#endif
#define SOC_VENC_REFLD_PRE_STATE_pre_split_curr_state_START (0)
#define SOC_VENC_REFLD_PRE_STATE_pre_split_curr_state_END (0)
#define SOC_VENC_REFLD_PRE_STATE_pre_judge_curr_state_START (16)
#define SOC_VENC_REFLD_PRE_STATE_pre_judge_curr_state_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_REFLD_RESERVED2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int vcpi_inter8x8_en : 1;
        unsigned int reserved_1 : 1;
        unsigned int vcpi_rect1_mod : 1;
        unsigned int vcpi_rect2_mod : 1;
        unsigned int vcpi_rect3_mod : 1;
        unsigned int vcpi_high3pre_en : 2;
        unsigned int reserved_2 : 24;
    } reg;
} SOC_VENC_INTER_MODE_UNION;
#endif
#define SOC_VENC_INTER_MODE_vcpi_inter8x8_en_START (1)
#define SOC_VENC_INTER_MODE_vcpi_inter8x8_en_END (1)
#define SOC_VENC_INTER_MODE_vcpi_rect1_mod_START (3)
#define SOC_VENC_INTER_MODE_vcpi_rect1_mod_END (3)
#define SOC_VENC_INTER_MODE_vcpi_rect2_mod_START (4)
#define SOC_VENC_INTER_MODE_vcpi_rect2_mod_END (4)
#define SOC_VENC_INTER_MODE_vcpi_rect3_mod_START (5)
#define SOC_VENC_INTER_MODE_vcpi_rect3_mod_END (5)
#define SOC_VENC_INTER_MODE_vcpi_high3pre_en_START (6)
#define SOC_VENC_INTER_MODE_vcpi_high3pre_en_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_IME_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_rect0_hstep : 2;
        unsigned int vcpi_rect0_vstep : 2;
        unsigned int reserved : 28;
    } reg;
} SOC_VENC_IME_CFG1_UNION;
#endif
#define SOC_VENC_IME_CFG1_vcpi_rect0_hstep_START (0)
#define SOC_VENC_IME_CFG1_vcpi_rect0_hstep_END (1)
#define SOC_VENC_IME_CFG1_vcpi_rect0_vstep_START (2)
#define SOC_VENC_IME_CFG1_vcpi_rect0_vstep_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_rect1_hstep : 2;
        unsigned int vcpi_rect1_vstep : 2;
        unsigned int reserved : 28;
    } reg;
} SOC_VENC_IME_CFG2_UNION;
#endif
#define SOC_VENC_IME_CFG2_vcpi_rect1_hstep_START (0)
#define SOC_VENC_IME_CFG2_vcpi_rect1_hstep_END (1)
#define SOC_VENC_IME_CFG2_vcpi_rect1_vstep_START (2)
#define SOC_VENC_IME_CFG2_vcpi_rect1_vstep_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_rect2_hstep : 2;
        unsigned int vcpi_rect2_vstep : 2;
        unsigned int reserved : 28;
    } reg;
} SOC_VENC_IME_CFG3_UNION;
#endif
#define SOC_VENC_IME_CFG3_vcpi_rect2_hstep_START (0)
#define SOC_VENC_IME_CFG3_vcpi_rect2_hstep_END (1)
#define SOC_VENC_IME_CFG3_vcpi_rect2_vstep_START (2)
#define SOC_VENC_IME_CFG3_vcpi_rect2_vstep_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_rect3_hstep : 2;
        unsigned int vcpi_rect3_vstep : 2;
        unsigned int reserved : 28;
    } reg;
} SOC_VENC_IME_CFG4_UNION;
#endif
#define SOC_VENC_IME_CFG4_vcpi_rect3_hstep_START (0)
#define SOC_VENC_IME_CFG4_vcpi_rect3_hstep_END (1)
#define SOC_VENC_IME_CFG4_vcpi_rect3_vstep_START (2)
#define SOC_VENC_IME_CFG4_vcpi_rect3_vstep_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_start_thr : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_IME_THR0_UNION;
#endif
#define SOC_VENC_IME_THR0_vcpi_start_thr_START (0)
#define SOC_VENC_IME_THR0_vcpi_start_thr_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_intra_thr : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_IME_THR1_UNION;
#endif
#define SOC_VENC_IME_THR1_vcpi_intra_thr_START (0)
#define SOC_VENC_IME_THR1_vcpi_intra_thr_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_lambdaoff8 : 16;
        unsigned int vcpi_lambdaoff16 : 16;
    } reg;
} SOC_VENC_IME_RDOCFG_UNION;
#endif
#define SOC_VENC_IME_RDOCFG_vcpi_lambdaoff8_START (0)
#define SOC_VENC_IME_RDOCFG_vcpi_lambdaoff8_END (15)
#define SOC_VENC_IME_RDOCFG_vcpi_lambdaoff16_START (16)
#define SOC_VENC_IME_RDOCFG_vcpi_lambdaoff16_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_lowpow_fme_thr0 : 6;
        unsigned int vcpi_lowpow_fme_thr1 : 6;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_IME_FME_LPOW_THR_UNION;
#endif
#define SOC_VENC_IME_FME_LPOW_THR_vcpi_lowpow_fme_thr0_START (0)
#define SOC_VENC_IME_FME_LPOW_THR_vcpi_lowpow_fme_thr0_END (5)
#define SOC_VENC_IME_FME_LPOW_THR_vcpi_lowpow_fme_thr1_START (6)
#define SOC_VENC_IME_FME_LPOW_THR_vcpi_lowpow_fme_thr1_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_IME_RESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_QPG_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int min_qp : 6;
        unsigned int reserved_0: 2;
        unsigned int max_qp : 6;
        unsigned int reserved_1: 18;
    } reg;
} SOC_VENC_QPG_MAX_MIN_QP_UNION;
#endif
#define SOC_VENC_QPG_MAX_MIN_QP_min_qp_START (0)
#define SOC_VENC_QPG_MAX_MIN_QP_min_qp_END (5)
#define SOC_VENC_QPG_MAX_MIN_QP_max_qp_START (8)
#define SOC_VENC_QPG_MAX_MIN_QP_max_qp_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ave_lcu_bits : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_QPG_AVERAGE_LCU_BITS_UNION;
#endif
#define SOC_VENC_QPG_AVERAGE_LCU_BITS_ave_lcu_bits_START (0)
#define SOC_VENC_QPG_AVERAGE_LCU_BITS_ave_lcu_bits_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int qp_delta : 6;
        unsigned int reserved : 26;
    } reg;
} SOC_VENC_QPG_QP_DELTA_UNION;
#endif
#define SOC_VENC_QPG_QP_DELTA_qp_delta_START (0)
#define SOC_VENC_QPG_QP_DELTA_qp_delta_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cu_qp_delta_thresh0 : 8;
        unsigned int cu_qp_delta_thresh1 : 8;
        unsigned int cu_qp_delta_thresh2 : 8;
        unsigned int cu_qp_delta_thresh3 : 8;
    } reg;
} SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG0_UNION;
#endif
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG0_cu_qp_delta_thresh0_START (0)
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG0_cu_qp_delta_thresh0_END (7)
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG0_cu_qp_delta_thresh1_START (8)
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG0_cu_qp_delta_thresh1_END (15)
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG0_cu_qp_delta_thresh2_START (16)
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG0_cu_qp_delta_thresh2_END (23)
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG0_cu_qp_delta_thresh3_START (24)
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG0_cu_qp_delta_thresh3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cu_qp_delta_thresh4 : 8;
        unsigned int cu_qp_delta_thresh5 : 8;
        unsigned int cu_qp_delta_thresh6 : 8;
        unsigned int cu_qp_delta_thresh7 : 8;
    } reg;
} SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG1_UNION;
#endif
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG1_cu_qp_delta_thresh4_START (0)
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG1_cu_qp_delta_thresh4_END (7)
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG1_cu_qp_delta_thresh5_START (8)
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG1_cu_qp_delta_thresh5_END (15)
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG1_cu_qp_delta_thresh6_START (16)
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG1_cu_qp_delta_thresh6_END (23)
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG1_cu_qp_delta_thresh7_START (24)
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG1_cu_qp_delta_thresh7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cu_qp_delta_thresh8 : 8;
        unsigned int cu_qp_delta_thresh9 : 8;
        unsigned int cu_qp_delta_thresh10 : 8;
        unsigned int cu_qp_delta_thresh11 : 8;
    } reg;
} SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG2_UNION;
#endif
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG2_cu_qp_delta_thresh8_START (0)
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG2_cu_qp_delta_thresh8_END (7)
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG2_cu_qp_delta_thresh9_START (8)
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG2_cu_qp_delta_thresh9_END (15)
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG2_cu_qp_delta_thresh10_START (16)
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG2_cu_qp_delta_thresh10_END (23)
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG2_cu_qp_delta_thresh11_START (24)
#define SOC_VENC_QPG_CU_QP_DELTA_THRESH_REG2_cu_qp_delta_thresh11_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_QPG_RESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strong_edge_qp_delta : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_VENC_QPG_STRONG_EDGE_QP_DELTA_UNION;
#endif
#define SOC_VENC_QPG_STRONG_EDGE_QP_DELTA_strong_edge_qp_delta_START (0)
#define SOC_VENC_QPG_STRONG_EDGE_QP_DELTA_strong_edge_qp_delta_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_QPG_RESERVED2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int skin_qp_delta : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_VENC_QPG_SKIN_QP_DELTA_UNION;
#endif
#define SOC_VENC_QPG_SKIN_QP_DELTA_skin_qp_delta_START (0)
#define SOC_VENC_QPG_SKIN_QP_DELTA_skin_qp_delta_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_QPG_RESERVED3_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda00 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG00_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG00_lambda00_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG00_lambda00_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda01 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG01_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG01_lambda01_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG01_lambda01_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda02 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG02_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG02_lambda02_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG02_lambda02_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda03 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG03_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG03_lambda03_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG03_lambda03_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda04 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG04_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG04_lambda04_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG04_lambda04_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda05 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG05_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG05_lambda05_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG05_lambda05_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda06 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG06_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG06_lambda06_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG06_lambda06_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda07 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG07_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG07_lambda07_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG07_lambda07_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda08 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG08_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG08_lambda08_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG08_lambda08_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda09 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG09_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG09_lambda09_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG09_lambda09_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda10 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG10_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG10_lambda10_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG10_lambda10_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda11 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG11_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG11_lambda11_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG11_lambda11_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda12 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG12_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG12_lambda12_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG12_lambda12_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda13 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG13_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG13_lambda13_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG13_lambda13_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda14 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG14_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG14_lambda14_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG14_lambda14_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda15 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG15_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG15_lambda15_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG15_lambda15_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda16 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG16_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG16_lambda16_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG16_lambda16_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda17 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG17_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG17_lambda17_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG17_lambda17_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda18 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG18_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG18_lambda18_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG18_lambda18_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda19 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG19_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG19_lambda19_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG19_lambda19_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda20 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG20_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG20_lambda20_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG20_lambda20_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda21 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG21_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG21_lambda21_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG21_lambda21_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda22 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG22_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG22_lambda22_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG22_lambda22_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda23 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG23_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG23_lambda23_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG23_lambda23_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda24 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG24_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG24_lambda24_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG24_lambda24_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda25 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG25_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG25_lambda25_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG25_lambda25_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda26 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG26_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG26_lambda26_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG26_lambda26_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda27 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG27_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG27_lambda27_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG27_lambda27_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda28 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG28_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG28_lambda28_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG28_lambda28_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda29 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG29_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG29_lambda29_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG29_lambda29_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda30 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG30_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG30_lambda30_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG30_lambda30_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda31 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG31_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG31_lambda31_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG31_lambda31_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda32 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG32_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG32_lambda32_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG32_lambda32_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda33 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG33_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG33_lambda33_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG33_lambda33_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda34 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG34_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG34_lambda34_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG34_lambda34_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda35 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG35_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG35_lambda35_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG35_lambda35_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda36 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG36_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG36_lambda36_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG36_lambda36_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda37 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG37_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG37_lambda37_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG37_lambda37_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda38 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG38_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG38_lambda38_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG38_lambda38_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda39 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG39_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG39_lambda39_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG39_lambda39_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda40 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG40_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG40_lambda40_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG40_lambda40_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda41 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG41_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG41_lambda41_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG41_lambda41_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda42 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG42_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG42_lambda42_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG42_lambda42_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda43 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG43_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG43_lambda43_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG43_lambda43_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda44 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG44_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG44_lambda44_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG44_lambda44_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda45 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG45_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG45_lambda45_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG45_lambda45_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda46 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG46_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG46_lambda46_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG46_lambda46_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda47 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG47_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG47_lambda47_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG47_lambda47_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda48 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG48_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG48_lambda48_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG48_lambda48_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda49 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG49_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG49_lambda49_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG49_lambda49_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda50 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG50_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG50_lambda50_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG50_lambda50_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda51 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG51_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG51_lambda51_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG51_lambda51_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda52 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG52_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG52_lambda52_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG52_lambda52_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda53 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG53_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG53_lambda53_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG53_lambda53_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda54 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG54_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG54_lambda54_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG54_lambda54_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda55 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG55_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG55_lambda55_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG55_lambda55_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda56 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG56_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG56_lambda56_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG56_lambda56_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda57 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG57_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG57_lambda57_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG57_lambda57_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda58 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG58_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG58_lambda58_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG58_lambda58_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda59 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG59_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG59_lambda59_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG59_lambda59_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda60 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG60_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG60_lambda60_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG60_lambda60_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda61 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG61_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG61_lambda61_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG61_lambda61_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda62 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG62_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG62_lambda62_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG62_lambda62_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda63 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG63_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG63_lambda63_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG63_lambda63_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda64 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG64_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG64_lambda64_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG64_lambda64_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda65 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG65_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG65_lambda65_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG65_lambda65_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda66 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG66_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG66_lambda66_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG66_lambda66_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda67 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG67_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG67_lambda67_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG67_lambda67_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda68 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG68_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG68_lambda68_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG68_lambda68_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda69 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG69_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG69_lambda69_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG69_lambda69_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda70 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG70_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG70_lambda70_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG70_lambda70_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda71 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG71_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG71_lambda71_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG71_lambda71_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda72 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG72_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG72_lambda72_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG72_lambda72_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda73 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG73_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG73_lambda73_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG73_lambda73_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda74 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG74_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG74_lambda74_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG74_lambda74_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda75 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG75_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG75_lambda75_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG75_lambda75_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda76 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG76_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG76_lambda76_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG76_lambda76_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda77 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG77_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG77_lambda77_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG77_lambda77_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda78 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG78_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG78_lambda78_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG78_lambda78_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lambda79 : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_QPG_QP_LAMBDA_CTRL_REG79_UNION;
#endif
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG79_lambda79_START (0)
#define SOC_VENC_QPG_QP_LAMBDA_CTRL_REG79_lambda79_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_QPG_RESERVED4_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int version : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_VENC_QPG_VERSION_UNION;
#endif
#define SOC_VENC_QPG_VERSION_version_START (0)
#define SOC_VENC_QPG_VERSION_version_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_QPG_RESERVED5_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_MRG_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_ckgt_cnt : 32;
    } reg;
} SOC_VENC_MRG_INT_GTCK_CNT_UNION;
#endif
#define SOC_VENC_MRG_INT_GTCK_CNT_int_ckgt_cnt_START (0)
#define SOC_VENC_MRG_INT_GTCK_CNT_int_ckgt_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int frac_ckgt_cnt : 32;
    } reg;
} SOC_VENC_MRG_FRAC_GTCK_CNT_UNION;
#endif
#define SOC_VENC_MRG_FRAC_GTCK_CNT_frac_ckgt_cnt_START (0)
#define SOC_VENC_MRG_FRAC_GTCK_CNT_frac_ckgt_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_MRG_RESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pu0_info : 32;
    } reg;
} SOC_VENC_MRG_PU0_INFO_UNION;
#endif
#define SOC_VENC_MRG_PU0_INFO_pu0_info_START (0)
#define SOC_VENC_MRG_PU0_INFO_pu0_info_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pu1_info : 32;
    } reg;
} SOC_VENC_MRG_PU1_INFO_UNION;
#endif
#define SOC_VENC_MRG_PU1_INFO_pu1_info_START (0)
#define SOC_VENC_MRG_PU1_INFO_pu1_info_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pu2_info : 32;
    } reg;
} SOC_VENC_MRG_PU2_INFO_UNION;
#endif
#define SOC_VENC_MRG_PU2_INFO_pu2_info_START (0)
#define SOC_VENC_MRG_PU2_INFO_pu2_info_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pu3_info : 32;
    } reg;
} SOC_VENC_MRG_PU3_INFO_UNION;
#endif
#define SOC_VENC_MRG_PU3_INFO_pu3_info_START (0)
#define SOC_VENC_MRG_PU3_INFO_pu3_info_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pmv_pu8_cnt : 7;
        unsigned int reserved_0 : 1;
        unsigned int pmv_pu16_cnt : 8;
        unsigned int pmv_pu32_cnt : 5;
        unsigned int pmv_pu64_cnt : 1;
        unsigned int reserved_1 : 10;
    } reg;
} SOC_VENC_MRG_PMV_CNT_UNION;
#endif
#define SOC_VENC_MRG_PMV_CNT_pmv_pu8_cnt_START (0)
#define SOC_VENC_MRG_PMV_CNT_pmv_pu8_cnt_END (6)
#define SOC_VENC_MRG_PMV_CNT_pmv_pu16_cnt_START (8)
#define SOC_VENC_MRG_PMV_CNT_pmv_pu16_cnt_END (15)
#define SOC_VENC_MRG_PMV_CNT_pmv_pu32_cnt_START (16)
#define SOC_VENC_MRG_PMV_CNT_pmv_pu32_cnt_END (20)
#define SOC_VENC_MRG_PMV_CNT_pmv_pu64_cnt_START (21)
#define SOC_VENC_MRG_PMV_CNT_pmv_pu64_cnt_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fme_pu8_cnt : 7;
        unsigned int reserved_0 : 1;
        unsigned int fme_pu16_cnt : 8;
        unsigned int fme_pu32_cnt : 5;
        unsigned int fme_pu64_cnt : 1;
        unsigned int reserved_1 : 10;
    } reg;
} SOC_VENC_MRG_FMV_CNT_UNION;
#endif
#define SOC_VENC_MRG_FMV_CNT_fme_pu8_cnt_START (0)
#define SOC_VENC_MRG_FMV_CNT_fme_pu8_cnt_END (6)
#define SOC_VENC_MRG_FMV_CNT_fme_pu16_cnt_START (8)
#define SOC_VENC_MRG_FMV_CNT_fme_pu16_cnt_END (15)
#define SOC_VENC_MRG_FMV_CNT_fme_pu32_cnt_START (16)
#define SOC_VENC_MRG_FMV_CNT_fme_pu32_cnt_END (20)
#define SOC_VENC_MRG_FMV_CNT_fme_pu64_cnt_START (21)
#define SOC_VENC_MRG_FMV_CNT_fme_pu64_cnt_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_oper_cnt : 16;
        unsigned int lcu_oper_state : 1;
        unsigned int reserved : 15;
    } reg;
} SOC_VENC_MRG_LCU_STA_UNION;
#endif
#define SOC_VENC_MRG_LCU_STA_lcu_oper_cnt_START (0)
#define SOC_VENC_MRG_LCU_STA_lcu_oper_cnt_END (15)
#define SOC_VENC_MRG_LCU_STA_lcu_oper_state_START (16)
#define SOC_VENC_MRG_LCU_STA_lcu_oper_state_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_roikeep_en : 16;
        unsigned int cu_info : 2;
        unsigned int layer_info : 2;
        unsigned int lcu_roikeep : 1;
        unsigned int lcu_lpw_en : 1;
        unsigned int reserved : 10;
    } reg;
} SOC_VENC_MRG_LCU_INFO_STA_UNION;
#endif
#define SOC_VENC_MRG_LCU_INFO_STA_lcu_roikeep_en_START (0)
#define SOC_VENC_MRG_LCU_INFO_STA_lcu_roikeep_en_END (15)
#define SOC_VENC_MRG_LCU_INFO_STA_cu_info_START (16)
#define SOC_VENC_MRG_LCU_INFO_STA_cu_info_END (17)
#define SOC_VENC_MRG_LCU_INFO_STA_layer_info_START (18)
#define SOC_VENC_MRG_LCU_INFO_STA_layer_info_END (19)
#define SOC_VENC_MRG_LCU_INFO_STA_lcu_roikeep_START (20)
#define SOC_VENC_MRG_LCU_INFO_STA_lcu_roikeep_END (20)
#define SOC_VENC_MRG_LCU_INFO_STA_lcu_lpw_en_START (21)
#define SOC_VENC_MRG_LCU_INFO_STA_lcu_lpw_en_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_MRG_RESERVED2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_FME_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inip_ckgt_cnt : 32;
    } reg;
} SOC_VENC_FME_GTCK_CNT_UNION;
#endif
#define SOC_VENC_FME_GTCK_CNT_inip_ckgt_cnt_START (0)
#define SOC_VENC_FME_GTCK_CNT_inip_ckgt_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_FME_RESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pmv_pu8_cnt : 7;
        unsigned int reserved_0 : 1;
        unsigned int pmv_pu16_cnt : 8;
        unsigned int pmv_pu32_cnt : 5;
        unsigned int pmv_pu64_cnt : 1;
        unsigned int reserved_1 : 10;
    } reg;
} SOC_VENC_FME_PMV_CNT_UNION;
#endif
#define SOC_VENC_FME_PMV_CNT_pmv_pu8_cnt_START (0)
#define SOC_VENC_FME_PMV_CNT_pmv_pu8_cnt_END (6)
#define SOC_VENC_FME_PMV_CNT_pmv_pu16_cnt_START (8)
#define SOC_VENC_FME_PMV_CNT_pmv_pu16_cnt_END (15)
#define SOC_VENC_FME_PMV_CNT_pmv_pu32_cnt_START (16)
#define SOC_VENC_FME_PMV_CNT_pmv_pu32_cnt_END (20)
#define SOC_VENC_FME_PMV_CNT_pmv_pu64_cnt_START (21)
#define SOC_VENC_FME_PMV_CNT_pmv_pu64_cnt_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ime_pu8_cnt : 7;
        unsigned int reserved_0 : 1;
        unsigned int ime_pu16_cnt : 8;
        unsigned int ime_pu32_cnt : 5;
        unsigned int ime_pu64_cnt : 1;
        unsigned int reserved_1 : 10;
    } reg;
} SOC_VENC_FME_IMV_CNT_UNION;
#endif
#define SOC_VENC_FME_IMV_CNT_ime_pu8_cnt_START (0)
#define SOC_VENC_FME_IMV_CNT_ime_pu8_cnt_END (6)
#define SOC_VENC_FME_IMV_CNT_ime_pu16_cnt_START (8)
#define SOC_VENC_FME_IMV_CNT_ime_pu16_cnt_END (15)
#define SOC_VENC_FME_IMV_CNT_ime_pu32_cnt_START (16)
#define SOC_VENC_FME_IMV_CNT_ime_pu32_cnt_END (20)
#define SOC_VENC_FME_IMV_CNT_ime_pu64_cnt_START (21)
#define SOC_VENC_FME_IMV_CNT_ime_pu64_cnt_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_oper_cnt : 16;
        unsigned int lcu_oper_state : 1;
        unsigned int reserved_0 : 3;
        unsigned int pu_ctrl_state : 2;
        unsigned int mv_ctrl_state : 2;
        unsigned int lcu_lpw_en : 1;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_VENC_FME_FME_STA_UNION;
#endif
#define SOC_VENC_FME_FME_STA_lcu_oper_cnt_START (0)
#define SOC_VENC_FME_FME_STA_lcu_oper_cnt_END (15)
#define SOC_VENC_FME_FME_STA_lcu_oper_state_START (16)
#define SOC_VENC_FME_FME_STA_lcu_oper_state_END (16)
#define SOC_VENC_FME_FME_STA_pu_ctrl_state_START (20)
#define SOC_VENC_FME_FME_STA_pu_ctrl_state_END (21)
#define SOC_VENC_FME_FME_STA_mv_ctrl_state_START (22)
#define SOC_VENC_FME_FME_STA_mv_ctrl_state_END (23)
#define SOC_VENC_FME_FME_STA_lcu_lpw_en_START (24)
#define SOC_VENC_FME_FME_STA_lcu_lpw_en_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_FME_RESERVED2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inter_avail : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VENC_INTER_AVAIL_UNION;
#endif
#define SOC_VENC_INTER_AVAIL_inter_avail_START (0)
#define SOC_VENC_INTER_AVAIL_inter_avail_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intra_smooth : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VENC_INTRA_SMOOTH_UNION;
#endif
#define SOC_VENC_INTRA_SMOOTH_intra_smooth_START (0)
#define SOC_VENC_INTRA_SMOOTH_intra_smooth_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_INTRA_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intra_bit_weight : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_VENC_INTRA_BIT_WEIGHT_UNION;
#endif
#define SOC_VENC_INTRA_BIT_WEIGHT_intra_bit_weight_START (0)
#define SOC_VENC_INTRA_BIT_WEIGHT_intra_bit_weight_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_INTRA_RESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intra_cu4_mode0_en : 1;
        unsigned int intra_cu4_mode1_en : 1;
        unsigned int intra_cu4_mode2_en : 1;
        unsigned int intra_cu4_mode3_en : 1;
        unsigned int intra_cu4_mode4_en : 1;
        unsigned int intra_cu4_mode5_en : 1;
        unsigned int intra_cu4_mode6_en : 1;
        unsigned int intra_cu4_mode7_en : 1;
        unsigned int intra_cu4_mode8_en : 1;
        unsigned int intra_cu4_mode9_en : 1;
        unsigned int intra_cu4_mode10_en : 1;
        unsigned int intra_cu4_mode11_en : 1;
        unsigned int intra_cu4_mode12_en : 1;
        unsigned int intra_cu4_mode13_en : 1;
        unsigned int intra_cu4_mode14_en : 1;
        unsigned int intra_cu4_mode15_en : 1;
        unsigned int intra_cu4_mode16_en : 1;
        unsigned int intra_cu4_mode17_en : 1;
        unsigned int intra_cu4_mode18_en : 1;
        unsigned int intra_cu4_mode19_en : 1;
        unsigned int intra_cu4_mode20_en : 1;
        unsigned int intra_cu4_mode21_en : 1;
        unsigned int intra_cu4_mode22_en : 1;
        unsigned int intra_cu4_mode23_en : 1;
        unsigned int intra_cu4_mode24_en : 1;
        unsigned int intra_cu4_mode25_en : 1;
        unsigned int intra_cu4_mode26_en : 1;
        unsigned int intra_cu4_mode27_en : 1;
        unsigned int intra_cu4_mode28_en : 1;
        unsigned int intra_cu4_mode29_en : 1;
        unsigned int intra_cu4_mode30_en : 1;
        unsigned int intra_cu4_mode31_en : 1;
    } reg;
} SOC_VENC_INTRA_CHNL4_ANG_0EN_UNION;
#endif
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode0_en_START (0)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode0_en_END (0)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode1_en_START (1)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode1_en_END (1)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode2_en_START (2)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode2_en_END (2)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode3_en_START (3)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode3_en_END (3)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode4_en_START (4)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode4_en_END (4)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode5_en_START (5)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode5_en_END (5)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode6_en_START (6)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode6_en_END (6)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode7_en_START (7)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode7_en_END (7)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode8_en_START (8)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode8_en_END (8)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode9_en_START (9)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode9_en_END (9)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode10_en_START (10)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode10_en_END (10)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode11_en_START (11)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode11_en_END (11)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode12_en_START (12)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode12_en_END (12)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode13_en_START (13)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode13_en_END (13)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode14_en_START (14)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode14_en_END (14)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode15_en_START (15)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode15_en_END (15)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode16_en_START (16)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode16_en_END (16)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode17_en_START (17)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode17_en_END (17)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode18_en_START (18)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode18_en_END (18)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode19_en_START (19)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode19_en_END (19)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode20_en_START (20)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode20_en_END (20)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode21_en_START (21)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode21_en_END (21)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode22_en_START (22)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode22_en_END (22)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode23_en_START (23)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode23_en_END (23)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode24_en_START (24)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode24_en_END (24)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode25_en_START (25)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode25_en_END (25)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode26_en_START (26)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode26_en_END (26)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode27_en_START (27)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode27_en_END (27)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode28_en_START (28)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode28_en_END (28)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode29_en_START (29)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode29_en_END (29)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode30_en_START (30)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode30_en_END (30)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode31_en_START (31)
#define SOC_VENC_INTRA_CHNL4_ANG_0EN_intra_cu4_mode31_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intra_cu4_mode32_en : 1;
        unsigned int intra_cu4_mode33_en : 1;
        unsigned int intra_cu4_mode34_en : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_VENC_INTRA_CHNL4_ANG_1EN_UNION;
#endif
#define SOC_VENC_INTRA_CHNL4_ANG_1EN_intra_cu4_mode32_en_START (0)
#define SOC_VENC_INTRA_CHNL4_ANG_1EN_intra_cu4_mode32_en_END (0)
#define SOC_VENC_INTRA_CHNL4_ANG_1EN_intra_cu4_mode33_en_START (1)
#define SOC_VENC_INTRA_CHNL4_ANG_1EN_intra_cu4_mode33_en_END (1)
#define SOC_VENC_INTRA_CHNL4_ANG_1EN_intra_cu4_mode34_en_START (2)
#define SOC_VENC_INTRA_CHNL4_ANG_1EN_intra_cu4_mode34_en_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intra_cu8_mode0_en : 1;
        unsigned int intra_cu8_mode1_en : 1;
        unsigned int intra_cu8_mode2_en : 1;
        unsigned int intra_cu8_mode3_en : 1;
        unsigned int intra_cu8_mode4_en : 1;
        unsigned int intra_cu8_mode5_en : 1;
        unsigned int intra_cu8_mode6_en : 1;
        unsigned int intra_cu8_mode7_en : 1;
        unsigned int intra_cu8_mode8_en : 1;
        unsigned int intra_cu8_mode9_en : 1;
        unsigned int intra_cu8_mode10_en : 1;
        unsigned int intra_cu8_mode11_en : 1;
        unsigned int intra_cu8_mode12_en : 1;
        unsigned int intra_cu8_mode13_en : 1;
        unsigned int intra_cu8_mode14_en : 1;
        unsigned int intra_cu8_mode15_en : 1;
        unsigned int intra_cu8_mode16_en : 1;
        unsigned int intra_cu8_mode17_en : 1;
        unsigned int intra_cu8_mode18_en : 1;
        unsigned int intra_cu8_mode19_en : 1;
        unsigned int intra_cu8_mode20_en : 1;
        unsigned int intra_cu8_mode21_en : 1;
        unsigned int intra_cu8_mode22_en : 1;
        unsigned int intra_cu8_mode23_en : 1;
        unsigned int intra_cu8_mode24_en : 1;
        unsigned int intra_cu8_mode25_en : 1;
        unsigned int intra_cu8_mode26_en : 1;
        unsigned int intra_cu8_mode27_en : 1;
        unsigned int intra_cu8_mode28_en : 1;
        unsigned int intra_cu8_mode29_en : 1;
        unsigned int intra_cu8_mode30_en : 1;
        unsigned int intra_cu8_mode31_en : 1;
    } reg;
} SOC_VENC_INTRA_CHNL8_ANG_0EN_UNION;
#endif
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode0_en_START (0)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode0_en_END (0)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode1_en_START (1)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode1_en_END (1)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode2_en_START (2)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode2_en_END (2)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode3_en_START (3)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode3_en_END (3)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode4_en_START (4)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode4_en_END (4)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode5_en_START (5)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode5_en_END (5)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode6_en_START (6)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode6_en_END (6)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode7_en_START (7)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode7_en_END (7)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode8_en_START (8)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode8_en_END (8)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode9_en_START (9)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode9_en_END (9)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode10_en_START (10)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode10_en_END (10)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode11_en_START (11)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode11_en_END (11)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode12_en_START (12)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode12_en_END (12)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode13_en_START (13)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode13_en_END (13)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode14_en_START (14)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode14_en_END (14)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode15_en_START (15)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode15_en_END (15)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode16_en_START (16)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode16_en_END (16)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode17_en_START (17)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode17_en_END (17)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode18_en_START (18)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode18_en_END (18)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode19_en_START (19)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode19_en_END (19)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode20_en_START (20)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode20_en_END (20)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode21_en_START (21)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode21_en_END (21)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode22_en_START (22)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode22_en_END (22)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode23_en_START (23)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode23_en_END (23)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode24_en_START (24)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode24_en_END (24)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode25_en_START (25)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode25_en_END (25)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode26_en_START (26)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode26_en_END (26)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode27_en_START (27)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode27_en_END (27)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode28_en_START (28)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode28_en_END (28)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode29_en_START (29)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode29_en_END (29)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode30_en_START (30)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode30_en_END (30)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode31_en_START (31)
#define SOC_VENC_INTRA_CHNL8_ANG_0EN_intra_cu8_mode31_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intra_cu8_mode32_en : 1;
        unsigned int intra_cu8_mode33_en : 1;
        unsigned int intra_cu8_mode34_en : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_VENC_INTRA_CHNL8_ANG_1EN_UNION;
#endif
#define SOC_VENC_INTRA_CHNL8_ANG_1EN_intra_cu8_mode32_en_START (0)
#define SOC_VENC_INTRA_CHNL8_ANG_1EN_intra_cu8_mode32_en_END (0)
#define SOC_VENC_INTRA_CHNL8_ANG_1EN_intra_cu8_mode33_en_START (1)
#define SOC_VENC_INTRA_CHNL8_ANG_1EN_intra_cu8_mode33_en_END (1)
#define SOC_VENC_INTRA_CHNL8_ANG_1EN_intra_cu8_mode34_en_START (2)
#define SOC_VENC_INTRA_CHNL8_ANG_1EN_intra_cu8_mode34_en_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intra_cu16_mode0_en : 1;
        unsigned int intra_cu16_mode1_en : 1;
        unsigned int intra_cu16_mode2_en : 1;
        unsigned int intra_cu16_mode3_en : 1;
        unsigned int intra_cu16_mode4_en : 1;
        unsigned int intra_cu16_mode5_en : 1;
        unsigned int intra_cu16_mode6_en : 1;
        unsigned int intra_cu16_mode7_en : 1;
        unsigned int intra_cu16_mode8_en : 1;
        unsigned int intra_cu16_mode9_en : 1;
        unsigned int intra_cu16_mode10_en : 1;
        unsigned int intra_cu16_mode11_en : 1;
        unsigned int intra_cu16_mode12_en : 1;
        unsigned int intra_cu16_mode13_en : 1;
        unsigned int intra_cu16_mode14_en : 1;
        unsigned int intra_cu16_mode15_en : 1;
        unsigned int intra_cu16_mode16_en : 1;
        unsigned int intra_cu16_mode17_en : 1;
        unsigned int intra_cu16_mode18_en : 1;
        unsigned int intra_cu16_mode19_en : 1;
        unsigned int intra_cu16_mode20_en : 1;
        unsigned int intra_cu16_mode21_en : 1;
        unsigned int intra_cu16_mode22_en : 1;
        unsigned int intra_cu16_mode23_en : 1;
        unsigned int intra_cu16_mode24_en : 1;
        unsigned int intra_cu16_mode25_en : 1;
        unsigned int intra_cu16_mode26_en : 1;
        unsigned int intra_cu16_mode27_en : 1;
        unsigned int intra_cu16_mode28_en : 1;
        unsigned int intra_cu16_mode29_en : 1;
        unsigned int intra_cu16_mode30_en : 1;
        unsigned int intra_cu16_mode31_en : 1;
    } reg;
} SOC_VENC_INTRA_CHNL16_ANG_0EN_UNION;
#endif
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode0_en_START (0)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode0_en_END (0)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode1_en_START (1)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode1_en_END (1)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode2_en_START (2)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode2_en_END (2)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode3_en_START (3)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode3_en_END (3)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode4_en_START (4)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode4_en_END (4)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode5_en_START (5)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode5_en_END (5)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode6_en_START (6)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode6_en_END (6)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode7_en_START (7)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode7_en_END (7)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode8_en_START (8)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode8_en_END (8)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode9_en_START (9)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode9_en_END (9)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode10_en_START (10)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode10_en_END (10)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode11_en_START (11)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode11_en_END (11)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode12_en_START (12)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode12_en_END (12)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode13_en_START (13)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode13_en_END (13)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode14_en_START (14)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode14_en_END (14)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode15_en_START (15)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode15_en_END (15)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode16_en_START (16)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode16_en_END (16)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode17_en_START (17)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode17_en_END (17)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode18_en_START (18)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode18_en_END (18)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode19_en_START (19)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode19_en_END (19)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode20_en_START (20)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode20_en_END (20)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode21_en_START (21)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode21_en_END (21)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode22_en_START (22)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode22_en_END (22)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode23_en_START (23)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode23_en_END (23)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode24_en_START (24)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode24_en_END (24)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode25_en_START (25)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode25_en_END (25)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode26_en_START (26)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode26_en_END (26)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode27_en_START (27)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode27_en_END (27)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode28_en_START (28)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode28_en_END (28)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode29_en_START (29)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode29_en_END (29)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode30_en_START (30)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode30_en_END (30)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode31_en_START (31)
#define SOC_VENC_INTRA_CHNL16_ANG_0EN_intra_cu16_mode31_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intra_cu16_mode32_en : 1;
        unsigned int intra_cu16_mode33_en : 1;
        unsigned int intra_cu16_mode34_en : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_VENC_INTRA_CHNL16_ANG_1EN_UNION;
#endif
#define SOC_VENC_INTRA_CHNL16_ANG_1EN_intra_cu16_mode32_en_START (0)
#define SOC_VENC_INTRA_CHNL16_ANG_1EN_intra_cu16_mode32_en_END (0)
#define SOC_VENC_INTRA_CHNL16_ANG_1EN_intra_cu16_mode33_en_START (1)
#define SOC_VENC_INTRA_CHNL16_ANG_1EN_intra_cu16_mode33_en_END (1)
#define SOC_VENC_INTRA_CHNL16_ANG_1EN_intra_cu16_mode34_en_START (2)
#define SOC_VENC_INTRA_CHNL16_ANG_1EN_intra_cu16_mode34_en_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intra_cu32_mode0_en : 1;
        unsigned int intra_cu32_mode1_en : 1;
        unsigned int intra_cu32_mode2_en : 1;
        unsigned int intra_cu32_mode3_en : 1;
        unsigned int intra_cu32_mode4_en : 1;
        unsigned int intra_cu32_mode5_en : 1;
        unsigned int intra_cu32_mode6_en : 1;
        unsigned int intra_cu32_mode7_en : 1;
        unsigned int intra_cu32_mode8_en : 1;
        unsigned int intra_cu32_mode9_en : 1;
        unsigned int intra_cu32_mode10_en : 1;
        unsigned int intra_cu32_mode11_en : 1;
        unsigned int intra_cu32_mode12_en : 1;
        unsigned int intra_cu32_mode13_en : 1;
        unsigned int intra_cu32_mode14_en : 1;
        unsigned int intra_cu32_mode15_en : 1;
        unsigned int intra_cu32_mode16_en : 1;
        unsigned int intra_cu32_mode17_en : 1;
        unsigned int intra_cu32_mode18_en : 1;
        unsigned int intra_cu32_mode19_en : 1;
        unsigned int intra_cu32_mode20_en : 1;
        unsigned int intra_cu32_mode21_en : 1;
        unsigned int intra_cu32_mode22_en : 1;
        unsigned int intra_cu32_mode23_en : 1;
        unsigned int intra_cu32_mode24_en : 1;
        unsigned int intra_cu32_mode25_en : 1;
        unsigned int intra_cu32_mode26_en : 1;
        unsigned int intra_cu32_mode27_en : 1;
        unsigned int intra_cu32_mode28_en : 1;
        unsigned int intra_cu32_mode29_en : 1;
        unsigned int intra_cu32_mode30_en : 1;
        unsigned int intra_cu32_mode31_en : 1;
    } reg;
} SOC_VENC_INTRA_CHNL32_ANG_0EN_UNION;
#endif
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode0_en_START (0)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode0_en_END (0)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode1_en_START (1)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode1_en_END (1)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode2_en_START (2)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode2_en_END (2)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode3_en_START (3)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode3_en_END (3)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode4_en_START (4)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode4_en_END (4)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode5_en_START (5)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode5_en_END (5)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode6_en_START (6)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode6_en_END (6)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode7_en_START (7)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode7_en_END (7)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode8_en_START (8)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode8_en_END (8)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode9_en_START (9)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode9_en_END (9)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode10_en_START (10)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode10_en_END (10)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode11_en_START (11)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode11_en_END (11)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode12_en_START (12)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode12_en_END (12)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode13_en_START (13)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode13_en_END (13)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode14_en_START (14)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode14_en_END (14)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode15_en_START (15)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode15_en_END (15)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode16_en_START (16)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode16_en_END (16)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode17_en_START (17)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode17_en_END (17)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode18_en_START (18)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode18_en_END (18)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode19_en_START (19)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode19_en_END (19)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode20_en_START (20)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode20_en_END (20)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode21_en_START (21)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode21_en_END (21)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode22_en_START (22)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode22_en_END (22)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode23_en_START (23)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode23_en_END (23)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode24_en_START (24)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode24_en_END (24)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode25_en_START (25)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode25_en_END (25)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode26_en_START (26)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode26_en_END (26)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode27_en_START (27)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode27_en_END (27)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode28_en_START (28)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode28_en_END (28)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode29_en_START (29)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode29_en_END (29)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode30_en_START (30)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode30_en_END (30)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode31_en_START (31)
#define SOC_VENC_INTRA_CHNL32_ANG_0EN_intra_cu32_mode31_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intra_cu32_mode32_en : 1;
        unsigned int intra_cu32_mode33_en : 1;
        unsigned int intra_cu32_mode34_en : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_VENC_INTRA_CHNL32_ANG_1EN_UNION;
#endif
#define SOC_VENC_INTRA_CHNL32_ANG_1EN_intra_cu32_mode32_en_START (0)
#define SOC_VENC_INTRA_CHNL32_ANG_1EN_intra_cu32_mode32_en_END (0)
#define SOC_VENC_INTRA_CHNL32_ANG_1EN_intra_cu32_mode33_en_START (1)
#define SOC_VENC_INTRA_CHNL32_ANG_1EN_intra_cu32_mode33_en_END (1)
#define SOC_VENC_INTRA_CHNL32_ANG_1EN_intra_cu32_mode34_en_START (2)
#define SOC_VENC_INTRA_CHNL32_ANG_1EN_intra_cu32_mode34_en_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_frm_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_INTRA_DFX_FRM_CNT_UNION;
#endif
#define SOC_VENC_INTRA_DFX_FRM_CNT_dfx_frm_cnt_START (0)
#define SOC_VENC_INTRA_DFX_FRM_CNT_dfx_frm_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_lcu_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_INTRA_DFX_LCU_CNT_UNION;
#endif
#define SOC_VENC_INTRA_DFX_LCU_CNT_dfx_lcu_cnt_START (0)
#define SOC_VENC_INTRA_DFX_LCU_CNT_dfx_lcu_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_lcu_end_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_INTRA_DFX_LCU_END_CNT_UNION;
#endif
#define SOC_VENC_INTRA_DFX_LCU_END_CNT_dfx_lcu_end_cnt_START (0)
#define SOC_VENC_INTRA_DFX_LCU_END_CNT_dfx_lcu_end_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_lcu_cycle_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_INTRA_DFX_LCU_CYCLE_CNT_UNION;
#endif
#define SOC_VENC_INTRA_DFX_LCU_CYCLE_CNT_dfx_lcu_cycle_cnt_START (0)
#define SOC_VENC_INTRA_DFX_LCU_CYCLE_CNT_dfx_lcu_cycle_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_nbi_rd_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_INTRA_DFX_NBI_RD_CNT_UNION;
#endif
#define SOC_VENC_INTRA_DFX_NBI_RD_CNT_dfx_nbi_rd_cnt_START (0)
#define SOC_VENC_INTRA_DFX_NBI_RD_CNT_dfx_nbi_rd_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_nbi_wr_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_INTRA_DFX_NBI_WR_CNT_UNION;
#endif
#define SOC_VENC_INTRA_DFX_NBI_WR_CNT_dfx_nbi_wr_cnt_START (0)
#define SOC_VENC_INTRA_DFX_NBI_WR_CNT_dfx_nbi_wr_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_RESERVED2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_cu8_done_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_INTRA_DFX_CU8_DONE_CNT_UNION;
#endif
#define SOC_VENC_INTRA_DFX_CU8_DONE_CNT_dfx_cu8_done_cnt_START (0)
#define SOC_VENC_INTRA_DFX_CU8_DONE_CNT_dfx_cu8_done_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_cu16_done_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_INTRA_DFX_CU16_DONE_CNT_UNION;
#endif
#define SOC_VENC_INTRA_DFX_CU16_DONE_CNT_dfx_cu16_done_cnt_START (0)
#define SOC_VENC_INTRA_DFX_CU16_DONE_CNT_dfx_cu16_done_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_cu32_done_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_INTRA_DFX_CU32_DONE_CNT_UNION;
#endif
#define SOC_VENC_INTRA_DFX_CU32_DONE_CNT_dfx_cu32_done_cnt_START (0)
#define SOC_VENC_INTRA_DFX_CU32_DONE_CNT_dfx_cu32_done_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_cu64_done_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_INTRA_DFX_CU64_DONE_CNT_UNION;
#endif
#define SOC_VENC_INTRA_DFX_CU64_DONE_CNT_dfx_cu64_done_cnt_START (0)
#define SOC_VENC_INTRA_DFX_CU64_DONE_CNT_dfx_cu64_done_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_cu8_rdo_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_INTRA_DFX_CU8_RDO_CNT_UNION;
#endif
#define SOC_VENC_INTRA_DFX_CU8_RDO_CNT_dfx_cu8_rdo_cnt_START (0)
#define SOC_VENC_INTRA_DFX_CU8_RDO_CNT_dfx_cu8_rdo_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_cu16_rdo_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_INTRA_DFX_CU16_RDO_CNT_UNION;
#endif
#define SOC_VENC_INTRA_DFX_CU16_RDO_CNT_dfx_cu16_rdo_cnt_START (0)
#define SOC_VENC_INTRA_DFX_CU16_RDO_CNT_dfx_cu16_rdo_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_cu32_rdo_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_INTRA_DFX_CU32_RDO_CNT_UNION;
#endif
#define SOC_VENC_INTRA_DFX_CU32_RDO_CNT_dfx_cu32_rdo_cnt_START (0)
#define SOC_VENC_INTRA_DFX_CU32_RDO_CNT_dfx_cu32_rdo_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_RESERVED3_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_cu8_fsm : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_VENC_INTRA_DFX_CU8_FSM_UNION;
#endif
#define SOC_VENC_INTRA_DFX_CU8_FSM_dfx_cu8_fsm_START (0)
#define SOC_VENC_INTRA_DFX_CU8_FSM_dfx_cu8_fsm_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_cu16_fsm : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_VENC_INTRA_DFX_CU16_FSM_UNION;
#endif
#define SOC_VENC_INTRA_DFX_CU16_FSM_dfx_cu16_fsm_START (0)
#define SOC_VENC_INTRA_DFX_CU16_FSM_dfx_cu16_fsm_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_cu32_fsm : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_VENC_INTRA_DFX_CU32_FSM_UNION;
#endif
#define SOC_VENC_INTRA_DFX_CU32_FSM_dfx_cu32_fsm_START (0)
#define SOC_VENC_INTRA_DFX_CU32_FSM_dfx_cu32_fsm_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_RESERVED4_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_pcm : 1;
        unsigned int reserved_0 : 3;
        unsigned int dfx_lpw : 1;
        unsigned int reserved_1 : 3;
        unsigned int dfx_frm_type : 2;
        unsigned int reserved_2 : 22;
    } reg;
} SOC_VENC_INTRA_DFX_PCM_PWR__TYPE_UNION;
#endif
#define SOC_VENC_INTRA_DFX_PCM_PWR__TYPE_dfx_pcm_START (0)
#define SOC_VENC_INTRA_DFX_PCM_PWR__TYPE_dfx_pcm_END (0)
#define SOC_VENC_INTRA_DFX_PCM_PWR__TYPE_dfx_lpw_START (4)
#define SOC_VENC_INTRA_DFX_PCM_PWR__TYPE_dfx_lpw_END (4)
#define SOC_VENC_INTRA_DFX_PCM_PWR__TYPE_dfx_frm_type_START (8)
#define SOC_VENC_INTRA_DFX_PCM_PWR__TYPE_dfx_frm_type_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_head_bit_weight : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_VENC_INTRA_DFX_HEAD_BIT_WEIGHT_UNION;
#endif
#define SOC_VENC_INTRA_DFX_HEAD_BIT_WEIGHT_dfx_head_bit_weight_START (0)
#define SOC_VENC_INTRA_DFX_HEAD_BIT_WEIGHT_dfx_head_bit_weight_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_rdo_weight : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_INTRA_DFX_RDO_WEIGHT_UNION;
#endif
#define SOC_VENC_INTRA_DFX_RDO_WEIGHT_dfx_rdo_weight_START (0)
#define SOC_VENC_INTRA_DFX_RDO_WEIGHT_dfx_rdo_weight_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_cu4_idx : 8;
        unsigned int dfx_cu8_idx : 6;
        unsigned int reserved_0 : 2;
        unsigned int dfx_cu16_idx : 4;
        unsigned int reserved_1 : 4;
        unsigned int dfx_cu32_idx : 2;
        unsigned int reserved_2 : 6;
    } reg;
} SOC_VENC_INTRA_DFX_BLK_CNT_UNION;
#endif
#define SOC_VENC_INTRA_DFX_BLK_CNT_dfx_cu4_idx_START (0)
#define SOC_VENC_INTRA_DFX_BLK_CNT_dfx_cu4_idx_END (7)
#define SOC_VENC_INTRA_DFX_BLK_CNT_dfx_cu8_idx_START (8)
#define SOC_VENC_INTRA_DFX_BLK_CNT_dfx_cu8_idx_END (13)
#define SOC_VENC_INTRA_DFX_BLK_CNT_dfx_cu16_idx_START (16)
#define SOC_VENC_INTRA_DFX_BLK_CNT_dfx_cu16_idx_END (19)
#define SOC_VENC_INTRA_DFX_BLK_CNT_dfx_cu32_idx_START (24)
#define SOC_VENC_INTRA_DFX_BLK_CNT_dfx_cu32_idx_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_RESERVED5_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cnt_lcu_done : 8;
        unsigned int cnt_lcu_start : 8;
        unsigned int cnt_frame : 16;
    } reg;
} SOC_VENC_PMV_CNT_FRAME_UNION;
#endif
#define SOC_VENC_PMV_CNT_FRAME_cnt_lcu_done_START (0)
#define SOC_VENC_PMV_CNT_FRAME_cnt_lcu_done_END (7)
#define SOC_VENC_PMV_CNT_FRAME_cnt_lcu_start_START (8)
#define SOC_VENC_PMV_CNT_FRAME_cnt_lcu_start_END (15)
#define SOC_VENC_PMV_CNT_FRAME_cnt_frame_START (16)
#define SOC_VENC_PMV_CNT_FRAME_cnt_frame_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tmv_0_ver : 12;
        unsigned int reserved_0: 4;
        unsigned int tmv_0_hor : 13;
        unsigned int tmv_0_vld : 1;
        unsigned int reserved_1: 2;
    } reg;
} SOC_VENC_PMV_TMV_0_UNION;
#endif
#define SOC_VENC_PMV_TMV_0_tmv_0_ver_START (0)
#define SOC_VENC_PMV_TMV_0_tmv_0_ver_END (11)
#define SOC_VENC_PMV_TMV_0_tmv_0_hor_START (16)
#define SOC_VENC_PMV_TMV_0_tmv_0_hor_END (28)
#define SOC_VENC_PMV_TMV_0_tmv_0_vld_START (29)
#define SOC_VENC_PMV_TMV_0_tmv_0_vld_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tmv_1_ver : 12;
        unsigned int reserved_0: 4;
        unsigned int tmv_1_hor : 13;
        unsigned int tmv_1_vld : 1;
        unsigned int reserved_1: 2;
    } reg;
} SOC_VENC_PMV_TMV_1_UNION;
#endif
#define SOC_VENC_PMV_TMV_1_tmv_1_ver_START (0)
#define SOC_VENC_PMV_TMV_1_tmv_1_ver_END (11)
#define SOC_VENC_PMV_TMV_1_tmv_1_hor_START (16)
#define SOC_VENC_PMV_TMV_1_tmv_1_hor_END (28)
#define SOC_VENC_PMV_TMV_1_tmv_1_vld_START (29)
#define SOC_VENC_PMV_TMV_1_tmv_1_vld_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tmv_2_ver : 12;
        unsigned int reserved_0: 4;
        unsigned int tmv_2_hor : 13;
        unsigned int tmv_2_vld : 1;
        unsigned int reserved_1: 2;
    } reg;
} SOC_VENC_PMV_TMV_2_UNION;
#endif
#define SOC_VENC_PMV_TMV_2_tmv_2_ver_START (0)
#define SOC_VENC_PMV_TMV_2_tmv_2_ver_END (11)
#define SOC_VENC_PMV_TMV_2_tmv_2_hor_START (16)
#define SOC_VENC_PMV_TMV_2_tmv_2_hor_END (28)
#define SOC_VENC_PMV_TMV_2_tmv_2_vld_START (29)
#define SOC_VENC_PMV_TMV_2_tmv_2_vld_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tmv_3_ver : 12;
        unsigned int reserved_0: 4;
        unsigned int tmv_3_hor : 13;
        unsigned int tmv_3_vld : 1;
        unsigned int reserved_1: 2;
    } reg;
} SOC_VENC_PMV_TMV_3_UNION;
#endif
#define SOC_VENC_PMV_TMV_3_tmv_3_ver_START (0)
#define SOC_VENC_PMV_TMV_3_tmv_3_ver_END (11)
#define SOC_VENC_PMV_TMV_3_tmv_3_hor_START (16)
#define SOC_VENC_PMV_TMV_3_tmv_3_hor_END (28)
#define SOC_VENC_PMV_TMV_3_tmv_3_vld_START (29)
#define SOC_VENC_PMV_TMV_3_tmv_3_vld_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tmv_4_ver : 12;
        unsigned int reserved_0: 4;
        unsigned int tmv_4_hor : 13;
        unsigned int tmv_4_vld : 1;
        unsigned int reserved_1: 2;
    } reg;
} SOC_VENC_PMV_TMV_4_UNION;
#endif
#define SOC_VENC_PMV_TMV_4_tmv_4_ver_START (0)
#define SOC_VENC_PMV_TMV_4_tmv_4_ver_END (11)
#define SOC_VENC_PMV_TMV_4_tmv_4_hor_START (16)
#define SOC_VENC_PMV_TMV_4_tmv_4_hor_END (28)
#define SOC_VENC_PMV_TMV_4_tmv_4_vld_START (29)
#define SOC_VENC_PMV_TMV_4_tmv_4_vld_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tmv_5_ver : 12;
        unsigned int reserved_0: 4;
        unsigned int tmv_5_hor : 13;
        unsigned int tmv_5_vld : 1;
        unsigned int reserved_1: 2;
    } reg;
} SOC_VENC_PMV_TMV_5_UNION;
#endif
#define SOC_VENC_PMV_TMV_5_tmv_5_ver_START (0)
#define SOC_VENC_PMV_TMV_5_tmv_5_ver_END (11)
#define SOC_VENC_PMV_TMV_5_tmv_5_hor_START (16)
#define SOC_VENC_PMV_TMV_5_tmv_5_hor_END (28)
#define SOC_VENC_PMV_TMV_5_tmv_5_vld_START (29)
#define SOC_VENC_PMV_TMV_5_tmv_5_vld_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tmv_6_ver : 12;
        unsigned int reserved_0: 4;
        unsigned int tmv_6_hor : 13;
        unsigned int tmv_6_vld : 1;
        unsigned int reserved_1: 2;
    } reg;
} SOC_VENC_PMV_TMV_6_UNION;
#endif
#define SOC_VENC_PMV_TMV_6_tmv_6_ver_START (0)
#define SOC_VENC_PMV_TMV_6_tmv_6_ver_END (11)
#define SOC_VENC_PMV_TMV_6_tmv_6_hor_START (16)
#define SOC_VENC_PMV_TMV_6_tmv_6_hor_END (28)
#define SOC_VENC_PMV_TMV_6_tmv_6_vld_START (29)
#define SOC_VENC_PMV_TMV_6_tmv_6_vld_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tmv_7_ver : 12;
        unsigned int reserved_0: 4;
        unsigned int tmv_7_hor : 13;
        unsigned int tmv_7_vld : 1;
        unsigned int reserved_1: 2;
    } reg;
} SOC_VENC_PMV_TMV_7_UNION;
#endif
#define SOC_VENC_PMV_TMV_7_tmv_7_ver_START (0)
#define SOC_VENC_PMV_TMV_7_tmv_7_ver_END (11)
#define SOC_VENC_PMV_TMV_7_tmv_7_hor_START (16)
#define SOC_VENC_PMV_TMV_7_tmv_7_hor_END (28)
#define SOC_VENC_PMV_TMV_7_tmv_7_vld_START (29)
#define SOC_VENC_PMV_TMV_7_tmv_7_vld_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tmv_8_ver : 12;
        unsigned int reserved_0: 4;
        unsigned int tmv_8_hor : 13;
        unsigned int tmv_8_vld : 1;
        unsigned int reserved_1: 2;
    } reg;
} SOC_VENC_PMV_TMV_8_UNION;
#endif
#define SOC_VENC_PMV_TMV_8_tmv_8_ver_START (0)
#define SOC_VENC_PMV_TMV_8_tmv_8_ver_END (11)
#define SOC_VENC_PMV_TMV_8_tmv_8_hor_START (16)
#define SOC_VENC_PMV_TMV_8_tmv_8_hor_END (28)
#define SOC_VENC_PMV_TMV_8_tmv_8_vld_START (29)
#define SOC_VENC_PMV_TMV_8_tmv_8_vld_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tmv_9_ver : 12;
        unsigned int reserved_0: 4;
        unsigned int tmv_9_hor : 13;
        unsigned int tmv_9_vld : 1;
        unsigned int reserved_1: 2;
    } reg;
} SOC_VENC_PMV_TMV_9_UNION;
#endif
#define SOC_VENC_PMV_TMV_9_tmv_9_ver_START (0)
#define SOC_VENC_PMV_TMV_9_tmv_9_ver_END (11)
#define SOC_VENC_PMV_TMV_9_tmv_9_hor_START (16)
#define SOC_VENC_PMV_TMV_9_tmv_9_hor_END (28)
#define SOC_VENC_PMV_TMV_9_tmv_9_vld_START (29)
#define SOC_VENC_PMV_TMV_9_tmv_9_vld_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tmv_10_ver : 12;
        unsigned int reserved_0 : 4;
        unsigned int tmv_10_hor : 13;
        unsigned int tmv_10_vld : 1;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_PMV_TMV_10_UNION;
#endif
#define SOC_VENC_PMV_TMV_10_tmv_10_ver_START (0)
#define SOC_VENC_PMV_TMV_10_tmv_10_ver_END (11)
#define SOC_VENC_PMV_TMV_10_tmv_10_hor_START (16)
#define SOC_VENC_PMV_TMV_10_tmv_10_hor_END (28)
#define SOC_VENC_PMV_TMV_10_tmv_10_vld_START (29)
#define SOC_VENC_PMV_TMV_10_tmv_10_vld_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tmv_11_ver : 12;
        unsigned int reserved_0 : 4;
        unsigned int tmv_11_hor : 13;
        unsigned int tmv_11_vld : 1;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_PMV_TMV_11_UNION;
#endif
#define SOC_VENC_PMV_TMV_11_tmv_11_ver_START (0)
#define SOC_VENC_PMV_TMV_11_tmv_11_ver_END (11)
#define SOC_VENC_PMV_TMV_11_tmv_11_hor_START (16)
#define SOC_VENC_PMV_TMV_11_tmv_11_hor_END (28)
#define SOC_VENC_PMV_TMV_11_tmv_11_vld_START (29)
#define SOC_VENC_PMV_TMV_11_tmv_11_vld_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tmv_12_ver : 12;
        unsigned int reserved_0 : 4;
        unsigned int tmv_12_hor : 13;
        unsigned int tmv_12_vld : 1;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_PMV_TMV_12_UNION;
#endif
#define SOC_VENC_PMV_TMV_12_tmv_12_ver_START (0)
#define SOC_VENC_PMV_TMV_12_tmv_12_ver_END (11)
#define SOC_VENC_PMV_TMV_12_tmv_12_hor_START (16)
#define SOC_VENC_PMV_TMV_12_tmv_12_hor_END (28)
#define SOC_VENC_PMV_TMV_12_tmv_12_vld_START (29)
#define SOC_VENC_PMV_TMV_12_tmv_12_vld_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tmv_13_ver : 12;
        unsigned int reserved_0 : 4;
        unsigned int tmv_13_hor : 13;
        unsigned int tmv_13_vld : 1;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_PMV_TMV_13_UNION;
#endif
#define SOC_VENC_PMV_TMV_13_tmv_13_ver_START (0)
#define SOC_VENC_PMV_TMV_13_tmv_13_ver_END (11)
#define SOC_VENC_PMV_TMV_13_tmv_13_hor_START (16)
#define SOC_VENC_PMV_TMV_13_tmv_13_hor_END (28)
#define SOC_VENC_PMV_TMV_13_tmv_13_vld_START (29)
#define SOC_VENC_PMV_TMV_13_tmv_13_vld_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tmv_14_ver : 12;
        unsigned int reserved_0 : 4;
        unsigned int tmv_14_hor : 13;
        unsigned int tmv_14_vld : 1;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_PMV_TMV_14_UNION;
#endif
#define SOC_VENC_PMV_TMV_14_tmv_14_ver_START (0)
#define SOC_VENC_PMV_TMV_14_tmv_14_ver_END (11)
#define SOC_VENC_PMV_TMV_14_tmv_14_hor_START (16)
#define SOC_VENC_PMV_TMV_14_tmv_14_hor_END (28)
#define SOC_VENC_PMV_TMV_14_tmv_14_vld_START (29)
#define SOC_VENC_PMV_TMV_14_tmv_14_vld_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tmv_15_ver : 12;
        unsigned int reserved_0 : 4;
        unsigned int tmv_15_hor : 13;
        unsigned int tmv_15_vld : 1;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_PMV_TMV_15_UNION;
#endif
#define SOC_VENC_PMV_TMV_15_tmv_15_ver_START (0)
#define SOC_VENC_PMV_TMV_15_tmv_15_ver_END (11)
#define SOC_VENC_PMV_TMV_15_tmv_15_hor_START (16)
#define SOC_VENC_PMV_TMV_15_tmv_15_hor_END (28)
#define SOC_VENC_PMV_TMV_15_tmv_15_vld_START (29)
#define SOC_VENC_PMV_TMV_15_tmv_15_vld_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tmv_16_ver : 12;
        unsigned int reserved_0 : 4;
        unsigned int tmv_16_hor : 13;
        unsigned int tmv_16_vld : 1;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_PMV_TMV_16_UNION;
#endif
#define SOC_VENC_PMV_TMV_16_tmv_16_ver_START (0)
#define SOC_VENC_PMV_TMV_16_tmv_16_ver_END (11)
#define SOC_VENC_PMV_TMV_16_tmv_16_hor_START (16)
#define SOC_VENC_PMV_TMV_16_tmv_16_hor_END (28)
#define SOC_VENC_PMV_TMV_16_tmv_16_vld_START (29)
#define SOC_VENC_PMV_TMV_16_tmv_16_vld_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tmv_17_ver : 12;
        unsigned int reserved_0 : 4;
        unsigned int tmv_17_hor : 13;
        unsigned int tmv_17_vld : 1;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_PMV_TMV_17_UNION;
#endif
#define SOC_VENC_PMV_TMV_17_tmv_17_ver_START (0)
#define SOC_VENC_PMV_TMV_17_tmv_17_ver_END (11)
#define SOC_VENC_PMV_TMV_17_tmv_17_hor_START (16)
#define SOC_VENC_PMV_TMV_17_tmv_17_hor_END (28)
#define SOC_VENC_PMV_TMV_17_tmv_17_vld_START (29)
#define SOC_VENC_PMV_TMV_17_tmv_17_vld_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tmv_18_ver : 12;
        unsigned int reserved_0 : 4;
        unsigned int tmv_18_hor : 13;
        unsigned int tmv_18_vld : 1;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_PMV_TMV_18_UNION;
#endif
#define SOC_VENC_PMV_TMV_18_tmv_18_ver_START (0)
#define SOC_VENC_PMV_TMV_18_tmv_18_ver_END (11)
#define SOC_VENC_PMV_TMV_18_tmv_18_hor_START (16)
#define SOC_VENC_PMV_TMV_18_tmv_18_hor_END (28)
#define SOC_VENC_PMV_TMV_18_tmv_18_vld_START (29)
#define SOC_VENC_PMV_TMV_18_tmv_18_vld_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tmv_19_ver : 12;
        unsigned int reserved_0 : 4;
        unsigned int tmv_19_hor : 13;
        unsigned int tmv_19_vld : 1;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_PMV_TMV_19_UNION;
#endif
#define SOC_VENC_PMV_TMV_19_tmv_19_ver_START (0)
#define SOC_VENC_PMV_TMV_19_tmv_19_ver_END (11)
#define SOC_VENC_PMV_TMV_19_tmv_19_hor_START (16)
#define SOC_VENC_PMV_TMV_19_tmv_19_hor_END (28)
#define SOC_VENC_PMV_TMV_19_tmv_19_vld_START (29)
#define SOC_VENC_PMV_TMV_19_tmv_19_vld_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tmv_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VENC_PMV_TMV_EN_UNION;
#endif
#define SOC_VENC_PMV_TMV_EN_tmv_en_START (0)
#define SOC_VENC_PMV_TMV_EN_tmv_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_PMV_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int q_scaling_wdata : 16;
        unsigned int q_scaling_waddr : 16;
    } reg;
} SOC_VENC_TQITQ_QSCALINGLIST_UNION;
#endif
#define SOC_VENC_TQITQ_QSCALINGLIST_q_scaling_wdata_START (0)
#define SOC_VENC_TQITQ_QSCALINGLIST_q_scaling_wdata_END (15)
#define SOC_VENC_TQITQ_QSCALINGLIST_q_scaling_waddr_START (16)
#define SOC_VENC_TQITQ_QSCALINGLIST_q_scaling_waddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_cnt : 32;
    } reg;
} SOC_VENC_TQITQ_LCU_COUNT_UNION;
#endif
#define SOC_VENC_TQITQ_LCU_COUNT_lcu_cnt_START (0)
#define SOC_VENC_TQITQ_LCU_COUNT_lcu_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_TQITQ_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_TQITQ_TU4GATE_ENCNT_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_TQITQ_DST4GATE_ENCNT_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_TQITQ_TU8GATE_ENCNT_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_TQITQ_TU16GATE_ENCNT_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_TQITQ_TU32GATE_ENCNT_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_TQITQ_RESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int opt_8x8_cnt : 19;
        unsigned int reserved : 13;
    } reg;
} SOC_VENC_SEL_OPT_8X8_CNT_UNION;
#endif
#define SOC_VENC_SEL_OPT_8X8_CNT_opt_8x8_cnt_START (0)
#define SOC_VENC_SEL_OPT_8X8_CNT_opt_8x8_cnt_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intra_opt_8x8_cnt : 19;
        unsigned int reserved : 13;
    } reg;
} SOC_VENC_SEL_INTRA_OPT_8X8_CNT_UNION;
#endif
#define SOC_VENC_SEL_INTRA_OPT_8X8_CNT_intra_opt_8x8_cnt_START (0)
#define SOC_VENC_SEL_INTRA_OPT_8X8_CNT_intra_opt_8x8_cnt_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intra_normal_opt_8x8_cnt : 19;
        unsigned int reserved : 13;
    } reg;
} SOC_VENC_SEL_INTRA_NORMAL_OPT_8X8_CNT_UNION;
#endif
#define SOC_VENC_SEL_INTRA_NORMAL_OPT_8X8_CNT_intra_normal_opt_8x8_cnt_START (0)
#define SOC_VENC_SEL_INTRA_NORMAL_OPT_8X8_CNT_intra_normal_opt_8x8_cnt_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcm_opt_8x8_cnt : 19;
        unsigned int reserved : 13;
    } reg;
} SOC_VENC_SEL_INTRA_PCM_OPT_8X8_CNT_UNION;
#endif
#define SOC_VENC_SEL_INTRA_PCM_OPT_8X8_CNT_pcm_opt_8x8_cnt_START (0)
#define SOC_VENC_SEL_INTRA_PCM_OPT_8X8_CNT_pcm_opt_8x8_cnt_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inter_opt_8x8_cnt : 19;
        unsigned int reserved : 13;
    } reg;
} SOC_VENC_SEL_INTER_OPT_8X8_CNT_UNION;
#endif
#define SOC_VENC_SEL_INTER_OPT_8X8_CNT_inter_opt_8x8_cnt_START (0)
#define SOC_VENC_SEL_INTER_OPT_8X8_CNT_inter_opt_8x8_cnt_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fme_opt_8x8_cnt : 19;
        unsigned int reserved : 13;
    } reg;
} SOC_VENC_SEL_INTER_FME_OPT_8X8_CNT_UNION;
#endif
#define SOC_VENC_SEL_INTER_FME_OPT_8X8_CNT_fme_opt_8x8_cnt_START (0)
#define SOC_VENC_SEL_INTER_FME_OPT_8X8_CNT_fme_opt_8x8_cnt_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mrg_opt_8x8_cnt : 19;
        unsigned int reserved : 13;
    } reg;
} SOC_VENC_SEL_INTER_MERGE_OPT_8X8_CNT_UNION;
#endif
#define SOC_VENC_SEL_INTER_MERGE_OPT_8X8_CNT_mrg_opt_8x8_cnt_START (0)
#define SOC_VENC_SEL_INTER_MERGE_OPT_8X8_CNT_mrg_opt_8x8_cnt_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mrg_skip_opt_8x8_cnt : 19;
        unsigned int reserved : 13;
    } reg;
} SOC_VENC_SEL_INTER_SKIP_OPT_8X8_CNT_UNION;
#endif
#define SOC_VENC_SEL_INTER_SKIP_OPT_8X8_CNT_mrg_skip_opt_8x8_cnt_START (0)
#define SOC_VENC_SEL_INTER_SKIP_OPT_8X8_CNT_mrg_skip_opt_8x8_cnt_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int opt_16x16_cnt : 17;
        unsigned int reserved : 15;
    } reg;
} SOC_VENC_SEL_OPT_16X16_CNT_UNION;
#endif
#define SOC_VENC_SEL_OPT_16X16_CNT_opt_16x16_cnt_START (0)
#define SOC_VENC_SEL_OPT_16X16_CNT_opt_16x16_cnt_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intra_opt_16x16_cnt : 17;
        unsigned int reserved : 15;
    } reg;
} SOC_VENC_SEL_INTRA_OPT_16X16_CNT_UNION;
#endif
#define SOC_VENC_SEL_INTRA_OPT_16X16_CNT_intra_opt_16x16_cnt_START (0)
#define SOC_VENC_SEL_INTRA_OPT_16X16_CNT_intra_opt_16x16_cnt_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int opt_4x4_cnt : 19;
        unsigned int reserved : 13;
    } reg;
} SOC_VENC_SEL_OPT_4X4_CNT_UNION;
#endif
#define SOC_VENC_SEL_OPT_4X4_CNT_opt_4x4_cnt_START (0)
#define SOC_VENC_SEL_OPT_4X4_CNT_opt_4x4_cnt_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_SEL_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inter_opt_16x16_cnt : 17;
        unsigned int reserved : 15;
    } reg;
} SOC_VENC_SEL_INTER_OPT_16X16_CNT_UNION;
#endif
#define SOC_VENC_SEL_INTER_OPT_16X16_CNT_inter_opt_16x16_cnt_START (0)
#define SOC_VENC_SEL_INTER_OPT_16X16_CNT_inter_opt_16x16_cnt_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fme_opt_16x16_cnt : 17;
        unsigned int reserved : 15;
    } reg;
} SOC_VENC_SEL_INTER_FME_OPT_16X16_CNT_UNION;
#endif
#define SOC_VENC_SEL_INTER_FME_OPT_16X16_CNT_fme_opt_16x16_cnt_START (0)
#define SOC_VENC_SEL_INTER_FME_OPT_16X16_CNT_fme_opt_16x16_cnt_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mrg_opt_16x16_cnt : 17;
        unsigned int reserved : 15;
    } reg;
} SOC_VENC_SEL_INTER_MERGE_OPT_16X16_CNT_UNION;
#endif
#define SOC_VENC_SEL_INTER_MERGE_OPT_16X16_CNT_mrg_opt_16x16_cnt_START (0)
#define SOC_VENC_SEL_INTER_MERGE_OPT_16X16_CNT_mrg_opt_16x16_cnt_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mrg_skip_opt_16x16_cnt : 17;
        unsigned int reserved : 15;
    } reg;
} SOC_VENC_SEL_INTER_SKIP_OPT_16X16_CNT_UNION;
#endif
#define SOC_VENC_SEL_INTER_SKIP_OPT_16X16_CNT_mrg_skip_opt_16x16_cnt_START (0)
#define SOC_VENC_SEL_INTER_SKIP_OPT_16X16_CNT_mrg_skip_opt_16x16_cnt_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int opt_32x32_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_SEL_OPT_32X32_CNT_UNION;
#endif
#define SOC_VENC_SEL_OPT_32X32_CNT_opt_32x32_cnt_START (0)
#define SOC_VENC_SEL_OPT_32X32_CNT_opt_32x32_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intra_opt_32x32_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_SEL_INTRA_OPT_32X32_CNT_UNION;
#endif
#define SOC_VENC_SEL_INTRA_OPT_32X32_CNT_intra_opt_32x32_cnt_START (0)
#define SOC_VENC_SEL_INTRA_OPT_32X32_CNT_intra_opt_32x32_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_SEL_RESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inter_opt_32x32_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_SEL_INTER_OPT_32X32_CNT_UNION;
#endif
#define SOC_VENC_SEL_INTER_OPT_32X32_CNT_inter_opt_32x32_cnt_START (0)
#define SOC_VENC_SEL_INTER_OPT_32X32_CNT_inter_opt_32x32_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fme_opt_32x32_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_SEL_INTER_FME_OPT_32X32_CNT_UNION;
#endif
#define SOC_VENC_SEL_INTER_FME_OPT_32X32_CNT_fme_opt_32x32_cnt_START (0)
#define SOC_VENC_SEL_INTER_FME_OPT_32X32_CNT_fme_opt_32x32_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mrg_opt_32x32_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_SEL_INTER_MERGE_OPT_32X32_CNT_UNION;
#endif
#define SOC_VENC_SEL_INTER_MERGE_OPT_32X32_CNT_mrg_opt_32x32_cnt_START (0)
#define SOC_VENC_SEL_INTER_MERGE_OPT_32X32_CNT_mrg_opt_32x32_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mrg_skip_opt_32x32_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_SEL_INTER_SKIP_OPT_32X32_CNT_UNION;
#endif
#define SOC_VENC_SEL_INTER_SKIP_OPT_32X32_CNT_mrg_skip_opt_32x32_cnt_START (0)
#define SOC_VENC_SEL_INTER_SKIP_OPT_32X32_CNT_mrg_skip_opt_32x32_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int opt_64x64_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_SEL_OPT_64X64_CNT_UNION;
#endif
#define SOC_VENC_SEL_OPT_64X64_CNT_opt_64x64_cnt_START (0)
#define SOC_VENC_SEL_OPT_64X64_CNT_opt_64x64_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fme_opt_64x64_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_SEL_INTER_FME_OPT_64X64_CNT_UNION;
#endif
#define SOC_VENC_SEL_INTER_FME_OPT_64X64_CNT_fme_opt_64x64_cnt_START (0)
#define SOC_VENC_SEL_INTER_FME_OPT_64X64_CNT_fme_opt_64x64_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mrg_opt_64x64_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_SEL_INTER_MERGE_OPT_64X64_CNT_UNION;
#endif
#define SOC_VENC_SEL_INTER_MERGE_OPT_64X64_CNT_mrg_opt_64x64_cnt_START (0)
#define SOC_VENC_SEL_INTER_MERGE_OPT_64X64_CNT_mrg_opt_64x64_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mrg_skip_opt_64x64_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_SEL_INTER_SKIP_OPT_64X64_CNT_UNION;
#endif
#define SOC_VENC_SEL_INTER_SKIP_OPT_64X64_CNT_mrg_skip_opt_64x64_cnt_START (0)
#define SOC_VENC_SEL_INTER_SKIP_OPT_64X64_CNT_mrg_skip_opt_64x64_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int total_luma_qp : 26;
        unsigned int reserved : 6;
    } reg;
} SOC_VENC_SEL_TOTAL_LUMA_QP_UNION;
#endif
#define SOC_VENC_SEL_TOTAL_LUMA_QP_total_luma_qp_START (0)
#define SOC_VENC_SEL_TOTAL_LUMA_QP_total_luma_qp_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_SEL_RESERVED2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int version : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_VENC_SEL_VERSION_UNION;
#endif
#define SOC_VENC_SEL_VERSION_version_START (0)
#define SOC_VENC_SEL_VERSION_version_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_SEL_RESERVED3_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_DBLK_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int frame_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_dblk_frame_cnt_UNION;
#endif
#define SOC_VENC_dblk_frame_cnt_frame_cnt_START (0)
#define SOC_VENC_dblk_frame_cnt_frame_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_cnt : 18;
        unsigned int reserved : 14;
    } reg;
} SOC_VENC_dblk_lcu_cnt_UNION;
#endif
#define SOC_VENC_dblk_lcu_cnt_lcu_cnt_START (0)
#define SOC_VENC_dblk_lcu_cnt_lcu_cnt_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int db_sao_cft_ls_c : 1;
        unsigned int db_sao_cft_us_c : 1;
        unsigned int db_sao_cft_ls : 1;
        unsigned int db_sao_cft_us : 1;
        unsigned int reserved_0 : 6;
        unsigned int fsm_error_c : 1;
        unsigned int fsm_error : 1;
        unsigned int reserved_1 : 20;
    } reg;
} SOC_VENC_dblk_dfx_flag_UNION;
#endif
#define SOC_VENC_dblk_dfx_flag_db_sao_cft_ls_c_START (0)
#define SOC_VENC_dblk_dfx_flag_db_sao_cft_ls_c_END (0)
#define SOC_VENC_dblk_dfx_flag_db_sao_cft_us_c_START (1)
#define SOC_VENC_dblk_dfx_flag_db_sao_cft_us_c_END (1)
#define SOC_VENC_dblk_dfx_flag_db_sao_cft_ls_START (2)
#define SOC_VENC_dblk_dfx_flag_db_sao_cft_ls_END (2)
#define SOC_VENC_dblk_dfx_flag_db_sao_cft_us_START (3)
#define SOC_VENC_dblk_dfx_flag_db_sao_cft_us_END (3)
#define SOC_VENC_dblk_dfx_flag_fsm_error_c_START (10)
#define SOC_VENC_dblk_dfx_flag_fsm_error_c_END (10)
#define SOC_VENC_dblk_dfx_flag_fsm_error_START (11)
#define SOC_VENC_dblk_dfx_flag_fsm_error_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_DBLK_RESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_SAO_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2vcpi_fsm_dfx : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_VENC_SAO_FSM_DFX_UNION;
#endif
#define SOC_VENC_SAO_FSM_DFX_sao2vcpi_fsm_dfx_START (0)
#define SOC_VENC_SAO_FSM_DFX_sao2vcpi_fsm_dfx_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2vcpi_lcu_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_SAO_LCU_CNT_UNION;
#endif
#define SOC_VENC_SAO_LCU_CNT_sao2vcpi_lcu_cnt_START (0)
#define SOC_VENC_SAO_LCU_CNT_sao2vcpi_lcu_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2vcpi_saooff_num_luma : 14;
        unsigned int reserved_0 : 2;
        unsigned int sao2vcpi_saooff_num_chroma : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_SAO_OFF_NUM_UNION;
#endif
#define SOC_VENC_SAO_OFF_NUM_sao2vcpi_saooff_num_luma_START (0)
#define SOC_VENC_SAO_OFF_NUM_sao2vcpi_saooff_num_luma_END (13)
#define SOC_VENC_SAO_OFF_NUM_sao2vcpi_saooff_num_chroma_START (16)
#define SOC_VENC_SAO_OFF_NUM_sao2vcpi_saooff_num_chroma_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_SAO_RESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_PACK_DFX_0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi2cu_tq_bypass_enabled_flag : 1;
        unsigned int reserved_0 : 3;
        unsigned int vcpi2cu_qp_min_cu_size : 3;
        unsigned int reserved_1 : 25;
    } reg;
} SOC_VENC_PACK_CU_PARAMETER_UNION;
#endif
#define SOC_VENC_PACK_CU_PARAMETER_vcpi2cu_tq_bypass_enabled_flag_START (0)
#define SOC_VENC_PACK_CU_PARAMETER_vcpi2cu_tq_bypass_enabled_flag_END (0)
#define SOC_VENC_PACK_CU_PARAMETER_vcpi2cu_qp_min_cu_size_START (4)
#define SOC_VENC_PACK_CU_PARAMETER_vcpi2cu_qp_min_cu_size_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi2pu_log2_min_ipcm_cbsizey : 3;
        unsigned int reserved_0 : 1;
        unsigned int vcpi2pu_log2_max_ipcm_cbsizey : 3;
        unsigned int reserved_1 : 25;
    } reg;
} SOC_VENC_PACK_PCM_PARAMETER_UNION;
#endif
#define SOC_VENC_PACK_PCM_PARAMETER_vcpi2pu_log2_min_ipcm_cbsizey_START (0)
#define SOC_VENC_PACK_PCM_PARAMETER_vcpi2pu_log2_min_ipcm_cbsizey_END (2)
#define SOC_VENC_PACK_PCM_PARAMETER_vcpi2pu_log2_max_ipcm_cbsizey_START (4)
#define SOC_VENC_PACK_PCM_PARAMETER_vcpi2pu_log2_max_ipcm_cbsizey_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi2res_tf_skip_enabled_flag : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VENC_PACK_TF_SKIP_FLAG_UNION;
#endif
#define SOC_VENC_PACK_TF_SKIP_FLAG_vcpi2res_tf_skip_enabled_flag_START (0)
#define SOC_VENC_PACK_TF_SKIP_FLAG_vcpi2res_tf_skip_enabled_flag_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_PACK_DFX_1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pack_dfx_err_cnt : 32;
    } reg;
} SOC_VENC_PACK_DFX_ERR_CNT_UNION;
#endif
#define SOC_VENC_PACK_DFX_ERR_CNT_pack_dfx_err_cnt_START (0)
#define SOC_VENC_PACK_DFX_ERR_CNT_pack_dfx_err_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pack_dfx_fsm : 32;
    } reg;
} SOC_VENC_PACK_DFX_FSM_UNION;
#endif
#define SOC_VENC_PACK_DFX_FSM_pack_dfx_fsm_START (0)
#define SOC_VENC_PACK_DFX_FSM_pack_dfx_fsm_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pack_dfx_fifo_state : 32;
    } reg;
} SOC_VENC_PACK_DFX_FIFO_STATE_UNION;
#endif
#define SOC_VENC_PACK_DFX_FIFO_STATE_pack_dfx_fifo_state_START (0)
#define SOC_VENC_PACK_DFX_FIFO_STATE_pack_dfx_fifo_state_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_PACK_RESERVED2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 8;
        unsigned int max_num_mergecand : 3;
        unsigned int reserved_1 : 5;
        unsigned int nal_unit_head : 16;
    } reg;
} SOC_VENC_CABAC_GLB_CFG_UNION;
#endif
#define SOC_VENC_CABAC_GLB_CFG_max_num_mergecand_START (8)
#define SOC_VENC_CABAC_GLB_CFG_max_num_mergecand_END (10)
#define SOC_VENC_CABAC_GLB_CFG_nal_unit_head_START (16)
#define SOC_VENC_CABAC_GLB_CFG_nal_unit_head_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slchdr_size_part1 : 5;
        unsigned int reserved : 11;
        unsigned int slchdr_size_part2 : 16;
    } reg;
} SOC_VENC_CABAC_SLCHDR_SIZE_UNION;
#endif
#define SOC_VENC_CABAC_SLCHDR_SIZE_slchdr_size_part1_START (0)
#define SOC_VENC_CABAC_SLCHDR_SIZE_slchdr_size_part1_END (4)
#define SOC_VENC_CABAC_SLCHDR_SIZE_slchdr_size_part2_START (16)
#define SOC_VENC_CABAC_SLCHDR_SIZE_slchdr_size_part2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slchdr_part1 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_CABAC_SLCHDR_PART1_UNION;
#endif
#define SOC_VENC_CABAC_SLCHDR_PART1_slchdr_part1_START (0)
#define SOC_VENC_CABAC_SLCHDR_PART1_slchdr_part1_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slchdr_part2_seg1 : 32;
    } reg;
} SOC_VENC_CABAC_SLCHDR_PART2_SEG1_UNION;
#endif
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG1_slchdr_part2_seg1_START (0)
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG1_slchdr_part2_seg1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slchdr_part2_seg2 : 32;
    } reg;
} SOC_VENC_CABAC_SLCHDR_PART2_SEG2_UNION;
#endif
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG2_slchdr_part2_seg2_START (0)
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG2_slchdr_part2_seg2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slchdr_part2_seg3 : 32;
    } reg;
} SOC_VENC_CABAC_SLCHDR_PART2_SEG3_UNION;
#endif
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG3_slchdr_part2_seg3_START (0)
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG3_slchdr_part2_seg3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slchdr_part2_seg4 : 32;
    } reg;
} SOC_VENC_CABAC_SLCHDR_PART2_SEG4_UNION;
#endif
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG4_slchdr_part2_seg4_START (0)
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG4_slchdr_part2_seg4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slchdr_part2_seg5 : 32;
    } reg;
} SOC_VENC_CABAC_SLCHDR_PART2_SEG5_UNION;
#endif
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG5_slchdr_part2_seg5_START (0)
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG5_slchdr_part2_seg5_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slchdr_part2_seg6 : 32;
    } reg;
} SOC_VENC_CABAC_SLCHDR_PART2_SEG6_UNION;
#endif
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG6_slchdr_part2_seg6_START (0)
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG6_slchdr_part2_seg6_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slchdr_part2_seg7 : 32;
    } reg;
} SOC_VENC_CABAC_SLCHDR_PART2_SEG7_UNION;
#endif
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG7_slchdr_part2_seg7_START (0)
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG7_slchdr_part2_seg7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slchdr_part2_seg8 : 32;
    } reg;
} SOC_VENC_CABAC_SLCHDR_PART2_SEG8_UNION;
#endif
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG8_slchdr_part2_seg8_START (0)
#define SOC_VENC_CABAC_SLCHDR_PART2_SEG8_slchdr_part2_seg8_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_CABAC_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cabac_pic_strmsize : 32;
    } reg;
} SOC_VENC_CABAC_PIC_STRMSIZE_UNION;
#endif
#define SOC_VENC_CABAC_PIC_STRMSIZE_cabac_pic_strmsize_START (0)
#define SOC_VENC_CABAC_PIC_STRMSIZE_cabac_pic_strmsize_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_CABAC_RESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cabac_dfx_0 : 32;
    } reg;
} SOC_VENC_CABAC_DFX_0_UNION;
#endif
#define SOC_VENC_CABAC_DFX_0_cabac_dfx_0_START (0)
#define SOC_VENC_CABAC_DFX_0_cabac_dfx_0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cabac_dfx_1 : 32;
    } reg;
} SOC_VENC_CABAC_DFX_1_UNION;
#endif
#define SOC_VENC_CABAC_DFX_1_cabac_dfx_1_START (0)
#define SOC_VENC_CABAC_DFX_1_cabac_dfx_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cabac_dfx_2 : 32;
    } reg;
} SOC_VENC_CABAC_DFX_2_UNION;
#endif
#define SOC_VENC_CABAC_DFX_2_cabac_dfx_2_START (0)
#define SOC_VENC_CABAC_DFX_2_cabac_dfx_2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cabac_dfx_3 : 32;
    } reg;
} SOC_VENC_CABAC_DFX_3_UNION;
#endif
#define SOC_VENC_CABAC_DFX_3_cabac_dfx_3_START (0)
#define SOC_VENC_CABAC_DFX_3_cabac_dfx_3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cabac_dfx_4 : 32;
    } reg;
} SOC_VENC_CABAC_DFX_4_UNION;
#endif
#define SOC_VENC_CABAC_DFX_4_cabac_dfx_4_START (0)
#define SOC_VENC_CABAC_DFX_4_cabac_dfx_4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cabac_dfx_5 : 32;
    } reg;
} SOC_VENC_CABAC_DFX_5_UNION;
#endif
#define SOC_VENC_CABAC_DFX_5_cabac_dfx_5_START (0)
#define SOC_VENC_CABAC_DFX_5_cabac_dfx_5_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_CABAC_RESERVED2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_PMELD_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pmest_dfx_0 : 32;
    } reg;
} SOC_VENC_PMEST_DFX_0_UNION;
#endif
#define SOC_VENC_PMEST_DFX_0_pmest_dfx_0_START (0)
#define SOC_VENC_PMEST_DFX_0_pmest_dfx_0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pmest_dfx_1 : 32;
    } reg;
} SOC_VENC_PMEST_DFX_1_UNION;
#endif
#define SOC_VENC_PMEST_DFX_1_pmest_dfx_1_START (0)
#define SOC_VENC_PMEST_DFX_1_pmest_dfx_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pmest_dfx_2 : 32;
    } reg;
} SOC_VENC_PMEST_DFX_2_UNION;
#endif
#define SOC_VENC_PMEST_DFX_2_pmest_dfx_2_START (0)
#define SOC_VENC_PMEST_DFX_2_pmest_dfx_2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_PMEST_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_NBI_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ld_fifo_empty : 1;
        unsigned int ld_fifo_full : 1;
        unsigned int ld_fsm_state : 2;
        unsigned int st_fifo_empty : 1;
        unsigned int st_fifo_full : 1;
        unsigned int st_fsm_state : 2;
        unsigned int tmv_wr_en : 1;
        unsigned int tmv_rd_en : 1;
        unsigned int reserved : 22;
    } reg;
} SOC_VENC_NBI_STATE_UNION;
#endif
#define SOC_VENC_NBI_STATE_ld_fifo_empty_START (0)
#define SOC_VENC_NBI_STATE_ld_fifo_empty_END (0)
#define SOC_VENC_NBI_STATE_ld_fifo_full_START (1)
#define SOC_VENC_NBI_STATE_ld_fifo_full_END (1)
#define SOC_VENC_NBI_STATE_ld_fsm_state_START (2)
#define SOC_VENC_NBI_STATE_ld_fsm_state_END (3)
#define SOC_VENC_NBI_STATE_st_fifo_empty_START (4)
#define SOC_VENC_NBI_STATE_st_fifo_empty_END (4)
#define SOC_VENC_NBI_STATE_st_fifo_full_START (5)
#define SOC_VENC_NBI_STATE_st_fifo_full_END (5)
#define SOC_VENC_NBI_STATE_st_fsm_state_START (6)
#define SOC_VENC_NBI_STATE_st_fsm_state_END (7)
#define SOC_VENC_NBI_STATE_tmv_wr_en_START (8)
#define SOC_VENC_NBI_STATE_tmv_wr_en_END (8)
#define SOC_VENC_NBI_STATE_tmv_rd_en_START (9)
#define SOC_VENC_NBI_STATE_tmv_rd_en_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fsm_state_up : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_NBI_STATE_UP_UNION;
#endif
#define SOC_VENC_NBI_STATE_UP_fsm_state_up_START (0)
#define SOC_VENC_NBI_STATE_UP_fsm_state_up_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_NBI_RESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lcu_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_NBI_LCU_COUNT_UNION;
#endif
#define SOC_VENC_NBI_LCU_COUNT_lcu_cnt_START (0)
#define SOC_VENC_NBI_LCU_COUNT_lcu_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tile_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_NBI_TILE_COUNT_UNION;
#endif
#define SOC_VENC_NBI_TILE_COUNT_tile_cnt_START (0)
#define SOC_VENC_NBI_TILE_COUNT_tile_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int frame_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_NBI_FRAME_COUNT_UNION;
#endif
#define SOC_VENC_NBI_FRAME_COUNT_frame_cnt_START (0)
#define SOC_VENC_NBI_FRAME_COUNT_frame_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_NBI_RESERVED2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_cross_idx : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_VENC_RECST_DDR_CROSS_UNION;
#endif
#define SOC_VENC_RECST_DDR_CROSS_ddr_cross_idx_START (0)
#define SOC_VENC_RECST_DDR_CROSS_ddr_cross_idx_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_RECST_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_dfx_0 : 32;
    } reg;
} SOC_VENC_RECST_DFX_0_UNION;
#endif
#define SOC_VENC_RECST_DFX_0_recst_dfx_0_START (0)
#define SOC_VENC_RECST_DFX_0_recst_dfx_0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_dfx_1 : 32;
    } reg;
} SOC_VENC_RECST_DFX_1_UNION;
#endif
#define SOC_VENC_RECST_DFX_1_recst_dfx_1_START (0)
#define SOC_VENC_RECST_DFX_1_recst_dfx_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_dfx_2 : 32;
    } reg;
} SOC_VENC_RECST_DFX_2_UNION;
#endif
#define SOC_VENC_RECST_DFX_2_recst_dfx_2_START (0)
#define SOC_VENC_RECST_DFX_2_recst_dfx_2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_dfx_3 : 32;
    } reg;
} SOC_VENC_RECST_DFX_3_UNION;
#endif
#define SOC_VENC_RECST_DFX_3_recst_dfx_3_START (0)
#define SOC_VENC_RECST_DFX_3_recst_dfx_3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_dfx_4 : 32;
    } reg;
} SOC_VENC_RECST_DFX_4_UNION;
#endif
#define SOC_VENC_RECST_DFX_4_recst_dfx_4_START (0)
#define SOC_VENC_RECST_DFX_4_recst_dfx_4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_dfx_5 : 32;
    } reg;
} SOC_VENC_RECST_DFX_5_UNION;
#endif
#define SOC_VENC_RECST_DFX_5_recst_dfx_5_START (0)
#define SOC_VENC_RECST_DFX_5_recst_dfx_5_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_dfx_6 : 32;
    } reg;
} SOC_VENC_RECST_DFX_6_UNION;
#endif
#define SOC_VENC_RECST_DFX_6_recst_dfx_6_START (0)
#define SOC_VENC_RECST_DFX_6_recst_dfx_6_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_dfx_7 : 32;
    } reg;
} SOC_VENC_RECST_DFX_7_UNION;
#endif
#define SOC_VENC_RECST_DFX_7_recst_dfx_7_START (0)
#define SOC_VENC_RECST_DFX_7_recst_dfx_7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_RECST_RESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_VLCST_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ptbits_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VENC_VLCST_PTBITS_EN_UNION;
#endif
#define SOC_VENC_VLCST_PTBITS_EN_ptbits_en_START (0)
#define SOC_VENC_VLCST_PTBITS_EN_ptbits_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ptbits : 32;
    } reg;
} SOC_VENC_VLCST_PTBITS_UNION;
#endif
#define SOC_VENC_VLCST_PTBITS_ptbits_START (0)
#define SOC_VENC_VLCST_PTBITS_ptbits_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_len : 8;
        unsigned int reserved_0 : 8;
        unsigned int vlcst_para_set_en : 1;
        unsigned int reserved_1 : 15;
    } reg;
} SOC_VENC_VLCST_PARAMETER_UNION;
#endif
#define SOC_VENC_VLCST_PARAMETER_vlcst_para_set_len_START (0)
#define SOC_VENC_VLCST_PARAMETER_vlcst_para_set_len_END (7)
#define SOC_VENC_VLCST_PARAMETER_vlcst_para_set_en_START (16)
#define SOC_VENC_VLCST_PARAMETER_vlcst_para_set_en_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_VLCST_RESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_slc_len_cnt : 32;
    } reg;
} SOC_VENC_VLCST_SLC_LEN_CNT_UNION;
#endif
#define SOC_VENC_VLCST_SLC_LEN_CNT_vlcst_slc_len_cnt_START (0)
#define SOC_VENC_VLCST_SLC_LEN_CNT_vlcst_slc_len_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slc_len0 : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_VENC_VLCST_DSRPTR00_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR00_slc_len0_START (0)
#define SOC_VENC_VLCST_DSRPTR00_slc_len0_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int invalidnum0 : 7;
        unsigned int reserved : 24;
        unsigned int islastslc0 : 1;
    } reg;
} SOC_VENC_VLCST_DSRPTR01_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR01_invalidnum0_START (0)
#define SOC_VENC_VLCST_DSRPTR01_invalidnum0_END (6)
#define SOC_VENC_VLCST_DSRPTR01_islastslc0_START (31)
#define SOC_VENC_VLCST_DSRPTR01_islastslc0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slc_len1 : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_VENC_VLCST_DSRPTR10_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR10_slc_len1_START (0)
#define SOC_VENC_VLCST_DSRPTR10_slc_len1_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int invalidnum1 : 7;
        unsigned int reserved : 24;
        unsigned int islastslc1 : 1;
    } reg;
} SOC_VENC_VLCST_DSRPTR11_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR11_invalidnum1_START (0)
#define SOC_VENC_VLCST_DSRPTR11_invalidnum1_END (6)
#define SOC_VENC_VLCST_DSRPTR11_islastslc1_START (31)
#define SOC_VENC_VLCST_DSRPTR11_islastslc1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slc_len2 : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_VENC_VLCST_DSRPTR20_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR20_slc_len2_START (0)
#define SOC_VENC_VLCST_DSRPTR20_slc_len2_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int invalidnum2 : 7;
        unsigned int reserved : 24;
        unsigned int islastslc2 : 1;
    } reg;
} SOC_VENC_VLCST_DSRPTR21_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR21_invalidnum2_START (0)
#define SOC_VENC_VLCST_DSRPTR21_invalidnum2_END (6)
#define SOC_VENC_VLCST_DSRPTR21_islastslc2_START (31)
#define SOC_VENC_VLCST_DSRPTR21_islastslc2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slc_len3 : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_VENC_VLCST_DSRPTR30_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR30_slc_len3_START (0)
#define SOC_VENC_VLCST_DSRPTR30_slc_len3_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int invalidnum3 : 7;
        unsigned int reserved : 24;
        unsigned int islastslc3 : 1;
    } reg;
} SOC_VENC_VLCST_DSRPTR31_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR31_invalidnum3_START (0)
#define SOC_VENC_VLCST_DSRPTR31_invalidnum3_END (6)
#define SOC_VENC_VLCST_DSRPTR31_islastslc3_START (31)
#define SOC_VENC_VLCST_DSRPTR31_islastslc3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slc_len4 : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_VENC_VLCST_DSRPTR40_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR40_slc_len4_START (0)
#define SOC_VENC_VLCST_DSRPTR40_slc_len4_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int invalidnum4 : 7;
        unsigned int reserved : 24;
        unsigned int islastslc4 : 1;
    } reg;
} SOC_VENC_VLCST_DSRPTR41_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR41_invalidnum4_START (0)
#define SOC_VENC_VLCST_DSRPTR41_invalidnum4_END (6)
#define SOC_VENC_VLCST_DSRPTR41_islastslc4_START (31)
#define SOC_VENC_VLCST_DSRPTR41_islastslc4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slc_len5 : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_VENC_VLCST_DSRPTR50_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR50_slc_len5_START (0)
#define SOC_VENC_VLCST_DSRPTR50_slc_len5_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int invalidnum5 : 7;
        unsigned int reserved : 24;
        unsigned int islastslc5 : 1;
    } reg;
} SOC_VENC_VLCST_DSRPTR51_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR51_invalidnum5_START (0)
#define SOC_VENC_VLCST_DSRPTR51_invalidnum5_END (6)
#define SOC_VENC_VLCST_DSRPTR51_islastslc5_START (31)
#define SOC_VENC_VLCST_DSRPTR51_islastslc5_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slc_len6 : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_VENC_VLCST_DSRPTR60_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR60_slc_len6_START (0)
#define SOC_VENC_VLCST_DSRPTR60_slc_len6_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int invalidnum6 : 7;
        unsigned int reserved : 24;
        unsigned int islastslc6 : 1;
    } reg;
} SOC_VENC_VLCST_DSRPTR61_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR61_invalidnum6_START (0)
#define SOC_VENC_VLCST_DSRPTR61_invalidnum6_END (6)
#define SOC_VENC_VLCST_DSRPTR61_islastslc6_START (31)
#define SOC_VENC_VLCST_DSRPTR61_islastslc6_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slc_len7 : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_VENC_VLCST_DSRPTR70_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR70_slc_len7_START (0)
#define SOC_VENC_VLCST_DSRPTR70_slc_len7_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int invalidnum7 : 7;
        unsigned int reserved : 24;
        unsigned int islastslc7 : 1;
    } reg;
} SOC_VENC_VLCST_DSRPTR71_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR71_invalidnum7_START (0)
#define SOC_VENC_VLCST_DSRPTR71_invalidnum7_END (6)
#define SOC_VENC_VLCST_DSRPTR71_islastslc7_START (31)
#define SOC_VENC_VLCST_DSRPTR71_islastslc7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slc_len8 : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_VENC_VLCST_DSRPTR80_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR80_slc_len8_START (0)
#define SOC_VENC_VLCST_DSRPTR80_slc_len8_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int invalidnum8 : 7;
        unsigned int reserved : 24;
        unsigned int islastslc8 : 1;
    } reg;
} SOC_VENC_VLCST_DSRPTR81_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR81_invalidnum8_START (0)
#define SOC_VENC_VLCST_DSRPTR81_invalidnum8_END (6)
#define SOC_VENC_VLCST_DSRPTR81_islastslc8_START (31)
#define SOC_VENC_VLCST_DSRPTR81_islastslc8_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slc_len9 : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_VENC_VLCST_DSRPTR90_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR90_slc_len9_START (0)
#define SOC_VENC_VLCST_DSRPTR90_slc_len9_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int invalidnum9 : 7;
        unsigned int reserved : 24;
        unsigned int islastslc9 : 1;
    } reg;
} SOC_VENC_VLCST_DSRPTR91_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR91_invalidnum9_START (0)
#define SOC_VENC_VLCST_DSRPTR91_invalidnum9_END (6)
#define SOC_VENC_VLCST_DSRPTR91_islastslc9_START (31)
#define SOC_VENC_VLCST_DSRPTR91_islastslc9_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slc_len10 : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_VENC_VLCST_DSRPTR100_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR100_slc_len10_START (0)
#define SOC_VENC_VLCST_DSRPTR100_slc_len10_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int invalidnum10 : 7;
        unsigned int reserved : 24;
        unsigned int islastslc10 : 1;
    } reg;
} SOC_VENC_VLCST_DSRPTR101_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR101_invalidnum10_START (0)
#define SOC_VENC_VLCST_DSRPTR101_invalidnum10_END (6)
#define SOC_VENC_VLCST_DSRPTR101_islastslc10_START (31)
#define SOC_VENC_VLCST_DSRPTR101_islastslc10_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slc_len11 : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_VENC_VLCST_DSRPTR110_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR110_slc_len11_START (0)
#define SOC_VENC_VLCST_DSRPTR110_slc_len11_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int invalidnum11 : 7;
        unsigned int reserved : 24;
        unsigned int islastslc11 : 1;
    } reg;
} SOC_VENC_VLCST_DSRPTR111_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR111_invalidnum11_START (0)
#define SOC_VENC_VLCST_DSRPTR111_invalidnum11_END (6)
#define SOC_VENC_VLCST_DSRPTR111_islastslc11_START (31)
#define SOC_VENC_VLCST_DSRPTR111_islastslc11_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slc_len12 : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_VENC_VLCST_DSRPTR120_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR120_slc_len12_START (0)
#define SOC_VENC_VLCST_DSRPTR120_slc_len12_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int invalidnum12 : 7;
        unsigned int reserved : 24;
        unsigned int islastslc12 : 1;
    } reg;
} SOC_VENC_VLCST_DSRPTR121_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR121_invalidnum12_START (0)
#define SOC_VENC_VLCST_DSRPTR121_invalidnum12_END (6)
#define SOC_VENC_VLCST_DSRPTR121_islastslc12_START (31)
#define SOC_VENC_VLCST_DSRPTR121_islastslc12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slc_len13 : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_VENC_VLCST_DSRPTR130_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR130_slc_len13_START (0)
#define SOC_VENC_VLCST_DSRPTR130_slc_len13_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int invalidnum13 : 7;
        unsigned int reserved : 24;
        unsigned int islastslc13 : 1;
    } reg;
} SOC_VENC_VLCST_DSRPTR131_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR131_invalidnum13_START (0)
#define SOC_VENC_VLCST_DSRPTR131_invalidnum13_END (6)
#define SOC_VENC_VLCST_DSRPTR131_islastslc13_START (31)
#define SOC_VENC_VLCST_DSRPTR131_islastslc13_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slc_len14 : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_VENC_VLCST_DSRPTR140_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR140_slc_len14_START (0)
#define SOC_VENC_VLCST_DSRPTR140_slc_len14_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int invalidnum14 : 7;
        unsigned int reserved : 24;
        unsigned int islastslc14 : 1;
    } reg;
} SOC_VENC_VLCST_DSRPTR141_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR141_invalidnum14_START (0)
#define SOC_VENC_VLCST_DSRPTR141_invalidnum14_END (6)
#define SOC_VENC_VLCST_DSRPTR141_islastslc14_START (31)
#define SOC_VENC_VLCST_DSRPTR141_islastslc14_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slc_len15 : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_VENC_VLCST_DSRPTR150_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR150_slc_len15_START (0)
#define SOC_VENC_VLCST_DSRPTR150_slc_len15_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int invalidnum15 : 7;
        unsigned int reserved : 24;
        unsigned int islastslc15 : 1;
    } reg;
} SOC_VENC_VLCST_DSRPTR151_UNION;
#endif
#define SOC_VENC_VLCST_DSRPTR151_invalidnum15_START (0)
#define SOC_VENC_VLCST_DSRPTR151_invalidnum15_END (6)
#define SOC_VENC_VLCST_DSRPTR151_islastslc15_START (31)
#define SOC_VENC_VLCST_DSRPTR151_islastslc15_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_dfx_0 : 32;
    } reg;
} SOC_VENC_VLCST_DFX_0_UNION;
#endif
#define SOC_VENC_VLCST_DFX_0_vlcst_dfx_0_START (0)
#define SOC_VENC_VLCST_DFX_0_vlcst_dfx_0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_VLCST_RESERVED2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data0 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA0_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA0_vlcst_para_set_data0_START (0)
#define SOC_VENC_VLCST_PARA_DATA0_vlcst_para_set_data0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data1 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA1_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA1_vlcst_para_set_data1_START (0)
#define SOC_VENC_VLCST_PARA_DATA1_vlcst_para_set_data1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data2 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA2_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA2_vlcst_para_set_data2_START (0)
#define SOC_VENC_VLCST_PARA_DATA2_vlcst_para_set_data2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data3 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA3_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA3_vlcst_para_set_data3_START (0)
#define SOC_VENC_VLCST_PARA_DATA3_vlcst_para_set_data3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data4 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA4_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA4_vlcst_para_set_data4_START (0)
#define SOC_VENC_VLCST_PARA_DATA4_vlcst_para_set_data4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data5 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA5_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA5_vlcst_para_set_data5_START (0)
#define SOC_VENC_VLCST_PARA_DATA5_vlcst_para_set_data5_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data6 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA6_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA6_vlcst_para_set_data6_START (0)
#define SOC_VENC_VLCST_PARA_DATA6_vlcst_para_set_data6_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data7 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA7_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA7_vlcst_para_set_data7_START (0)
#define SOC_VENC_VLCST_PARA_DATA7_vlcst_para_set_data7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data8 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA8_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA8_vlcst_para_set_data8_START (0)
#define SOC_VENC_VLCST_PARA_DATA8_vlcst_para_set_data8_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data9 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA9_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA9_vlcst_para_set_data9_START (0)
#define SOC_VENC_VLCST_PARA_DATA9_vlcst_para_set_data9_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data10 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA10_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA10_vlcst_para_set_data10_START (0)
#define SOC_VENC_VLCST_PARA_DATA10_vlcst_para_set_data10_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data11 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA11_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA11_vlcst_para_set_data11_START (0)
#define SOC_VENC_VLCST_PARA_DATA11_vlcst_para_set_data11_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data12 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA12_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA12_vlcst_para_set_data12_START (0)
#define SOC_VENC_VLCST_PARA_DATA12_vlcst_para_set_data12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data13 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA13_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA13_vlcst_para_set_data13_START (0)
#define SOC_VENC_VLCST_PARA_DATA13_vlcst_para_set_data13_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data14 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA14_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA14_vlcst_para_set_data14_START (0)
#define SOC_VENC_VLCST_PARA_DATA14_vlcst_para_set_data14_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data15 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA15_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA15_vlcst_para_set_data15_START (0)
#define SOC_VENC_VLCST_PARA_DATA15_vlcst_para_set_data15_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data16 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA16_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA16_vlcst_para_set_data16_START (0)
#define SOC_VENC_VLCST_PARA_DATA16_vlcst_para_set_data16_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data17 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA17_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA17_vlcst_para_set_data17_START (0)
#define SOC_VENC_VLCST_PARA_DATA17_vlcst_para_set_data17_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data18 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA18_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA18_vlcst_para_set_data18_START (0)
#define SOC_VENC_VLCST_PARA_DATA18_vlcst_para_set_data18_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data19 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA19_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA19_vlcst_para_set_data19_START (0)
#define SOC_VENC_VLCST_PARA_DATA19_vlcst_para_set_data19_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data20 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA20_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA20_vlcst_para_set_data20_START (0)
#define SOC_VENC_VLCST_PARA_DATA20_vlcst_para_set_data20_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data21 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA21_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA21_vlcst_para_set_data21_START (0)
#define SOC_VENC_VLCST_PARA_DATA21_vlcst_para_set_data21_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data22 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA22_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA22_vlcst_para_set_data22_START (0)
#define SOC_VENC_VLCST_PARA_DATA22_vlcst_para_set_data22_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data23 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA23_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA23_vlcst_para_set_data23_START (0)
#define SOC_VENC_VLCST_PARA_DATA23_vlcst_para_set_data23_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data24 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA24_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA24_vlcst_para_set_data24_START (0)
#define SOC_VENC_VLCST_PARA_DATA24_vlcst_para_set_data24_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data25 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA25_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA25_vlcst_para_set_data25_START (0)
#define SOC_VENC_VLCST_PARA_DATA25_vlcst_para_set_data25_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data26 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA26_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA26_vlcst_para_set_data26_START (0)
#define SOC_VENC_VLCST_PARA_DATA26_vlcst_para_set_data26_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data27 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA27_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA27_vlcst_para_set_data27_START (0)
#define SOC_VENC_VLCST_PARA_DATA27_vlcst_para_set_data27_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data28 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA28_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA28_vlcst_para_set_data28_START (0)
#define SOC_VENC_VLCST_PARA_DATA28_vlcst_para_set_data28_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data29 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA29_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA29_vlcst_para_set_data29_START (0)
#define SOC_VENC_VLCST_PARA_DATA29_vlcst_para_set_data29_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data30 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA30_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA30_vlcst_para_set_data30_START (0)
#define SOC_VENC_VLCST_PARA_DATA30_vlcst_para_set_data30_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data31 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA31_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA31_vlcst_para_set_data31_START (0)
#define SOC_VENC_VLCST_PARA_DATA31_vlcst_para_set_data31_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data32 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA32_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA32_vlcst_para_set_data32_START (0)
#define SOC_VENC_VLCST_PARA_DATA32_vlcst_para_set_data32_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data33 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA33_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA33_vlcst_para_set_data33_START (0)
#define SOC_VENC_VLCST_PARA_DATA33_vlcst_para_set_data33_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data34 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA34_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA34_vlcst_para_set_data34_START (0)
#define SOC_VENC_VLCST_PARA_DATA34_vlcst_para_set_data34_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data35 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA35_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA35_vlcst_para_set_data35_START (0)
#define SOC_VENC_VLCST_PARA_DATA35_vlcst_para_set_data35_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data36 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA36_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA36_vlcst_para_set_data36_START (0)
#define SOC_VENC_VLCST_PARA_DATA36_vlcst_para_set_data36_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data37 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA37_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA37_vlcst_para_set_data37_START (0)
#define SOC_VENC_VLCST_PARA_DATA37_vlcst_para_set_data37_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data38 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA38_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA38_vlcst_para_set_data38_START (0)
#define SOC_VENC_VLCST_PARA_DATA38_vlcst_para_set_data38_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data39 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA39_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA39_vlcst_para_set_data39_START (0)
#define SOC_VENC_VLCST_PARA_DATA39_vlcst_para_set_data39_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data40 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA40_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA40_vlcst_para_set_data40_START (0)
#define SOC_VENC_VLCST_PARA_DATA40_vlcst_para_set_data40_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data41 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA41_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA41_vlcst_para_set_data41_START (0)
#define SOC_VENC_VLCST_PARA_DATA41_vlcst_para_set_data41_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data42 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA42_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA42_vlcst_para_set_data42_START (0)
#define SOC_VENC_VLCST_PARA_DATA42_vlcst_para_set_data42_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data43 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA43_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA43_vlcst_para_set_data43_START (0)
#define SOC_VENC_VLCST_PARA_DATA43_vlcst_para_set_data43_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data44 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA44_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA44_vlcst_para_set_data44_START (0)
#define SOC_VENC_VLCST_PARA_DATA44_vlcst_para_set_data44_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data45 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA45_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA45_vlcst_para_set_data45_START (0)
#define SOC_VENC_VLCST_PARA_DATA45_vlcst_para_set_data45_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data46 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA46_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA46_vlcst_para_set_data46_START (0)
#define SOC_VENC_VLCST_PARA_DATA46_vlcst_para_set_data46_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcst_para_set_data47 : 32;
    } reg;
} SOC_VENC_VLCST_PARA_DATA47_UNION;
#endif
#define SOC_VENC_VLCST_PARA_DATA47_vlcst_para_set_data47_START (0)
#define SOC_VENC_VLCST_PARA_DATA47_vlcst_para_set_data47_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_VLCST_RESERVED3_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_VLC_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_slchdrstrm0 : 32;
    } reg;
} SOC_VENC_VLC_SlcHdrStrm0_UNION;
#endif
#define SOC_VENC_VLC_SlcHdrStrm0_vcpi_slchdrstrm0_START (0)
#define SOC_VENC_VLC_SlcHdrStrm0_vcpi_slchdrstrm0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_slchdrstrm1 : 32;
    } reg;
} SOC_VENC_VLC_SlcHdrStrm1_UNION;
#endif
#define SOC_VENC_VLC_SlcHdrStrm1_vcpi_slchdrstrm1_START (0)
#define SOC_VENC_VLC_SlcHdrStrm1_vcpi_slchdrstrm1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_slchdrstrm2 : 32;
    } reg;
} SOC_VENC_VLC_SlcHdrStrm2_UNION;
#endif
#define SOC_VENC_VLC_SlcHdrStrm2_vcpi_slchdrstrm2_START (0)
#define SOC_VENC_VLC_SlcHdrStrm2_vcpi_slchdrstrm2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_slchdrstrm3 : 32;
    } reg;
} SOC_VENC_VLC_SlcHdrStrm3_UNION;
#endif
#define SOC_VENC_VLC_SlcHdrStrm3_vcpi_slchdrstrm3_START (0)
#define SOC_VENC_VLC_SlcHdrStrm3_vcpi_slchdrstrm3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_reorderstrm0 : 32;
    } reg;
} SOC_VENC_VLC_ReorderStrm0_UNION;
#endif
#define SOC_VENC_VLC_ReorderStrm0_vcpi_reorderstrm0_START (0)
#define SOC_VENC_VLC_ReorderStrm0_vcpi_reorderstrm0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_reorderstrm1 : 32;
    } reg;
} SOC_VENC_VLC_ReorderStrm1_UNION;
#endif
#define SOC_VENC_VLC_ReorderStrm1_vcpi_reorderstrm1_START (0)
#define SOC_VENC_VLC_ReorderStrm1_vcpi_reorderstrm1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_markingstrm0 : 32;
    } reg;
} SOC_VENC_VLC_MarkingStrm0_UNION;
#endif
#define SOC_VENC_VLC_MarkingStrm0_vcpi_markingstrm0_START (0)
#define SOC_VENC_VLC_MarkingStrm0_vcpi_markingstrm0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_markingstrm1 : 32;
    } reg;
} SOC_VENC_VLC_MarkingStrm1_UNION;
#endif
#define SOC_VENC_VLC_MarkingStrm1_vcpi_markingstrm1_START (0)
#define SOC_VENC_VLC_MarkingStrm1_vcpi_markingstrm1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_markingbit : 6;
        unsigned int reserved_0 : 2;
        unsigned int vcpi_reorderbit : 6;
        unsigned int reserved_1 : 2;
        unsigned int vcpi_parabit : 7;
        unsigned int reserved_2 : 9;
    } reg;
} SOC_VENC_VLC_SLCHDRPARA_UNION;
#endif
#define SOC_VENC_VLC_SLCHDRPARA_vcpi_markingbit_START (0)
#define SOC_VENC_VLC_SLCHDRPARA_vcpi_markingbit_END (5)
#define SOC_VENC_VLC_SLCHDRPARA_vcpi_reorderbit_START (8)
#define SOC_VENC_VLC_SLCHDRPARA_vcpi_reorderbit_END (13)
#define SOC_VENC_VLC_SLCHDRPARA_vcpi_parabit_START (16)
#define SOC_VENC_VLC_SLCHDRPARA_vcpi_parabit_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_svc_en : 1;
        unsigned int vcpi_svc_strm : 24;
        unsigned int reserved : 7;
    } reg;
} SOC_VENC_VLC_SVC_UNION;
#endif
#define SOC_VENC_VLC_SVC_vcpi_svc_en_START (0)
#define SOC_VENC_VLC_SVC_vcpi_svc_en_END (0)
#define SOC_VENC_VLC_SVC_vcpi_svc_strm_START (1)
#define SOC_VENC_VLC_SVC_vcpi_svc_strm_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_VLC_RESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_cabac_bitout_overflow : 25;
        unsigned int reserved : 7;
    } reg;
} SOC_VENC_VLC_CABAC_BIT_OVER_FLOW_UNION;
#endif
#define SOC_VENC_VLC_CABAC_BIT_OVER_FLOW_vcpi_cabac_bitout_overflow_START (0)
#define SOC_VENC_VLC_CABAC_BIT_OVER_FLOW_vcpi_cabac_bitout_overflow_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlc_vcpi_pic_ttbits : 32;
    } reg;
} SOC_VENC_VLC_PIC_TOTAL_BITS_UNION;
#endif
#define SOC_VENC_VLC_PIC_TOTAL_BITS_vlc_vcpi_pic_ttbits_START (0)
#define SOC_VENC_VLC_PIC_TOTAL_BITS_vlc_vcpi_pic_ttbits_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_VLC_RESERVED2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_filter_h0 : 4;
        unsigned int curld_filter_h1 : 4;
        unsigned int curld_filter_h2 : 4;
        unsigned int curld_filter_h3 : 4;
        unsigned int curld_filter_hrnd : 4;
        unsigned int curld_filter_hshift : 3;
        unsigned int reserved : 9;
    } reg;
} SOC_VENC_VEDU_FILTER_PARAMETER0_UNION;
#endif
#define SOC_VENC_VEDU_FILTER_PARAMETER0_curld_filter_h0_START (0)
#define SOC_VENC_VEDU_FILTER_PARAMETER0_curld_filter_h0_END (3)
#define SOC_VENC_VEDU_FILTER_PARAMETER0_curld_filter_h1_START (4)
#define SOC_VENC_VEDU_FILTER_PARAMETER0_curld_filter_h1_END (7)
#define SOC_VENC_VEDU_FILTER_PARAMETER0_curld_filter_h2_START (8)
#define SOC_VENC_VEDU_FILTER_PARAMETER0_curld_filter_h2_END (11)
#define SOC_VENC_VEDU_FILTER_PARAMETER0_curld_filter_h3_START (12)
#define SOC_VENC_VEDU_FILTER_PARAMETER0_curld_filter_h3_END (15)
#define SOC_VENC_VEDU_FILTER_PARAMETER0_curld_filter_hrnd_START (16)
#define SOC_VENC_VEDU_FILTER_PARAMETER0_curld_filter_hrnd_END (19)
#define SOC_VENC_VEDU_FILTER_PARAMETER0_curld_filter_hshift_START (20)
#define SOC_VENC_VEDU_FILTER_PARAMETER0_curld_filter_hshift_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_filter_v0 : 4;
        unsigned int curld_filter_v1 : 4;
        unsigned int curld_filter_v2 : 4;
        unsigned int curld_filter_v3 : 4;
        unsigned int curld_filter_vrnd : 4;
        unsigned int curld_filter_vshift : 3;
        unsigned int reserved : 9;
    } reg;
} SOC_VENC_VEDU_FILTER_PARAMETER1_UNION;
#endif
#define SOC_VENC_VEDU_FILTER_PARAMETER1_curld_filter_v0_START (0)
#define SOC_VENC_VEDU_FILTER_PARAMETER1_curld_filter_v0_END (3)
#define SOC_VENC_VEDU_FILTER_PARAMETER1_curld_filter_v1_START (4)
#define SOC_VENC_VEDU_FILTER_PARAMETER1_curld_filter_v1_END (7)
#define SOC_VENC_VEDU_FILTER_PARAMETER1_curld_filter_v2_START (8)
#define SOC_VENC_VEDU_FILTER_PARAMETER1_curld_filter_v2_END (11)
#define SOC_VENC_VEDU_FILTER_PARAMETER1_curld_filter_v3_START (12)
#define SOC_VENC_VEDU_FILTER_PARAMETER1_curld_filter_v3_END (15)
#define SOC_VENC_VEDU_FILTER_PARAMETER1_curld_filter_vrnd_START (16)
#define SOC_VENC_VEDU_FILTER_PARAMETER1_curld_filter_vrnd_END (19)
#define SOC_VENC_VEDU_FILTER_PARAMETER1_curld_filter_vshift_START (20)
#define SOC_VENC_VEDU_FILTER_PARAMETER1_curld_filter_vshift_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_y_filt_00coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_y_filt_01coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_PARAMETER0_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER0_curld_y_filt_00coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER0_curld_y_filt_00coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER0_curld_y_filt_01coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER0_curld_y_filt_01coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_y_filt_02coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_y_filt_03coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_PARAMETER1_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER1_curld_y_filt_02coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER1_curld_y_filt_02coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER1_curld_y_filt_03coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER1_curld_y_filt_03coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_y_filt_10coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_y_filt_11coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_PARAMETER2_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER2_curld_y_filt_10coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER2_curld_y_filt_10coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER2_curld_y_filt_11coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER2_curld_y_filt_11coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_y_filt_12coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_y_filt_13coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_PARAMETER3_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER3_curld_y_filt_12coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER3_curld_y_filt_12coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER3_curld_y_filt_13coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER3_curld_y_filt_13coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_y_filt_20coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_y_filt_21coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_PARAMETER4_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER4_curld_y_filt_20coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER4_curld_y_filt_20coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER4_curld_y_filt_21coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER4_curld_y_filt_21coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_y_filt_22coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_y_filt_23coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_PARAMETER5_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER5_curld_y_filt_22coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER5_curld_y_filt_22coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER5_curld_y_filt_23coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER5_curld_y_filt_23coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_y_filt_30coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_y_filt_31coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_PARAMETER6_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER6_curld_y_filt_30coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER6_curld_y_filt_30coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER6_curld_y_filt_31coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER6_curld_y_filt_31coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_y_filt_32coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_y_filt_33coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_PARAMETER7_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER7_curld_y_filt_32coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER7_curld_y_filt_32coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER7_curld_y_filt_33coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER7_curld_y_filt_33coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_c_filt_00coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_c_filt_01coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_PARAMETER8_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER8_curld_c_filt_00coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER8_curld_c_filt_00coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER8_curld_c_filt_01coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER8_curld_c_filt_01coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_c_filt_02coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_c_filt_03coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_PARAMETER9_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER9_curld_c_filt_02coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER9_curld_c_filt_02coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER9_curld_c_filt_03coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER9_curld_c_filt_03coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_c_filt_10coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_c_filt_11coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_PARAMETER10_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER10_curld_c_filt_10coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER10_curld_c_filt_10coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER10_curld_c_filt_11coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER10_curld_c_filt_11coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_c_filt_12coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_c_filt_13coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_PARAMETER11_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER11_curld_c_filt_12coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER11_curld_c_filt_12coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER11_curld_c_filt_13coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER11_curld_c_filt_13coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_c_filt_20coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_c_filt_21coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_PARAMETER12_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER12_curld_c_filt_20coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER12_curld_c_filt_20coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER12_curld_c_filt_21coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER12_curld_c_filt_21coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_c_filt_22coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_c_filt_23coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_PARAMETER13_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER13_curld_c_filt_22coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER13_curld_c_filt_22coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER13_curld_c_filt_23coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER13_curld_c_filt_23coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_c_filt_30coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_c_filt_31coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_PARAMETER14_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER14_curld_c_filt_30coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER14_curld_c_filt_30coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER14_curld_c_filt_31coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER14_curld_c_filt_31coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_c_filt_32coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_c_filt_33coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_PARAMETER15_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER15_curld_c_filt_32coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER15_curld_c_filt_32coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER15_curld_c_filt_33coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_PARAMETER15_curld_c_filt_33coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_clip_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VENC_VEDU_CUR_GCFG_UNION;
#endif
#define SOC_VENC_VEDU_CUR_GCFG_curld_clip_en_START (0)
#define SOC_VENC_VEDU_CUR_GCFG_curld_clip_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clip_luma_min : 8;
        unsigned int clip_luma_max : 8;
        unsigned int clip_chrm_min : 8;
        unsigned int clip_chrm_max : 8;
    } reg;
} SOC_VENC_VEDU_CLIP_THX_UNION;
#endif
#define SOC_VENC_VEDU_CLIP_THX_clip_luma_min_START (0)
#define SOC_VENC_VEDU_CLIP_THX_clip_luma_min_END (7)
#define SOC_VENC_VEDU_CLIP_THX_clip_luma_max_START (8)
#define SOC_VENC_VEDU_CLIP_THX_clip_luma_max_END (15)
#define SOC_VENC_VEDU_CLIP_THX_clip_chrm_min_START (16)
#define SOC_VENC_VEDU_CLIP_THX_clip_chrm_min_END (23)
#define SOC_VENC_VEDU_CLIP_THX_clip_chrm_max_START (24)
#define SOC_VENC_VEDU_CLIP_THX_clip_chrm_max_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_coeff_gy : 15;
        unsigned int reserved_0 : 1;
        unsigned int vcpi_coeff_ry : 15;
        unsigned int reserved_1 : 1;
    } reg;
} SOC_VENC_VEDU_RGB_COEF0_UNION;
#endif
#define SOC_VENC_VEDU_RGB_COEF0_vcpi_coeff_gy_START (0)
#define SOC_VENC_VEDU_RGB_COEF0_vcpi_coeff_gy_END (14)
#define SOC_VENC_VEDU_RGB_COEF0_vcpi_coeff_ry_START (16)
#define SOC_VENC_VEDU_RGB_COEF0_vcpi_coeff_ry_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_coeff_rcb : 15;
        unsigned int reserved_0 : 1;
        unsigned int vcpi_coeff_by : 15;
        unsigned int reserved_1 : 1;
    } reg;
} SOC_VENC_VEDU_RGB_COEF1_UNION;
#endif
#define SOC_VENC_VEDU_RGB_COEF1_vcpi_coeff_rcb_START (0)
#define SOC_VENC_VEDU_RGB_COEF1_vcpi_coeff_rcb_END (14)
#define SOC_VENC_VEDU_RGB_COEF1_vcpi_coeff_by_START (16)
#define SOC_VENC_VEDU_RGB_COEF1_vcpi_coeff_by_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_coeff_bcb : 15;
        unsigned int reserved_0 : 1;
        unsigned int vcpi_coeff_gcb : 15;
        unsigned int reserved_1 : 1;
    } reg;
} SOC_VENC_VEDU_RGB_COEF2_UNION;
#endif
#define SOC_VENC_VEDU_RGB_COEF2_vcpi_coeff_bcb_START (0)
#define SOC_VENC_VEDU_RGB_COEF2_vcpi_coeff_bcb_END (14)
#define SOC_VENC_VEDU_RGB_COEF2_vcpi_coeff_gcb_START (16)
#define SOC_VENC_VEDU_RGB_COEF2_vcpi_coeff_gcb_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_coeff_gcr : 15;
        unsigned int reserved_0 : 1;
        unsigned int vcpi_coeff_rcr : 15;
        unsigned int reserved_1 : 1;
    } reg;
} SOC_VENC_VEDU_RGB_COEF3_UNION;
#endif
#define SOC_VENC_VEDU_RGB_COEF3_vcpi_coeff_gcr_START (0)
#define SOC_VENC_VEDU_RGB_COEF3_vcpi_coeff_gcr_END (14)
#define SOC_VENC_VEDU_RGB_COEF3_vcpi_coeff_rcr_START (16)
#define SOC_VENC_VEDU_RGB_COEF3_vcpi_coeff_rcr_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_coeff_bcr : 15;
        unsigned int reserved : 17;
    } reg;
} SOC_VENC_VEDU_RGB_COEF4_UNION;
#endif
#define SOC_VENC_VEDU_RGB_COEF4_vcpi_coeff_bcr_START (0)
#define SOC_VENC_VEDU_RGB_COEF4_vcpi_coeff_bcr_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_rgb_rndy : 16;
        unsigned int vcpi_rgb_shift : 4;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_VEDU_RGB_COEF5_UNION;
#endif
#define SOC_VENC_VEDU_RGB_COEF5_vcpi_rgb_rndy_START (0)
#define SOC_VENC_VEDU_RGB_COEF5_vcpi_rgb_rndy_END (15)
#define SOC_VENC_VEDU_RGB_COEF5_vcpi_rgb_shift_START (16)
#define SOC_VENC_VEDU_RGB_COEF5_vcpi_rgb_shift_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_rgb_rndcr : 16;
        unsigned int vcpi_rgb_rndcb : 16;
    } reg;
} SOC_VENC_VEDU_RGB_COEF6_UNION;
#endif
#define SOC_VENC_VEDU_RGB_COEF6_vcpi_rgb_rndcr_START (0)
#define SOC_VENC_VEDU_RGB_COEF6_vcpi_rgb_rndcr_END (15)
#define SOC_VENC_VEDU_RGB_COEF6_vcpi_rgb_rndcb_START (16)
#define SOC_VENC_VEDU_RGB_COEF6_vcpi_rgb_rndcb_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_rgb_clpmin : 8;
        unsigned int vcpi_rgb_clpmax : 8;
        unsigned int vcpi_rgb_clip_en : 1;
        unsigned int reserved : 15;
    } reg;
} SOC_VENC_VEDU_RGB_CLIP_UNION;
#endif
#define SOC_VENC_VEDU_RGB_CLIP_vcpi_rgb_clpmin_START (0)
#define SOC_VENC_VEDU_RGB_CLIP_vcpi_rgb_clpmin_END (7)
#define SOC_VENC_VEDU_RGB_CLIP_vcpi_rgb_clpmax_START (8)
#define SOC_VENC_VEDU_RGB_CLIP_vcpi_rgb_clpmax_END (15)
#define SOC_VENC_VEDU_RGB_CLIP_vcpi_rgb_clip_en_START (16)
#define SOC_VENC_VEDU_RGB_CLIP_vcpi_rgb_clip_en_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_y_wide_narrow_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VENC_VEDU_WIDE_NARROW_EN_UNION;
#endif
#define SOC_VENC_VEDU_WIDE_NARROW_EN_curld_y_wide_narrow_en_START (0)
#define SOC_VENC_VEDU_WIDE_NARROW_EN_curld_y_wide_narrow_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_CURPRE_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curpre_dfx_0 : 32;
    } reg;
} SOC_VENC_CURPRE_DFX_0_UNION;
#endif
#define SOC_VENC_CURPRE_DFX_0_curpre_dfx_0_START (0)
#define SOC_VENC_CURPRE_DFX_0_curpre_dfx_0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_CURPRE_RESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curpre_dfx_1 : 32;
    } reg;
} SOC_VENC_CURPRE_DFX_1_UNION;
#endif
#define SOC_VENC_CURPRE_DFX_1_curpre_dfx_1_START (0)
#define SOC_VENC_CURPRE_DFX_1_curpre_dfx_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_CURPRE_RESERVED2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_y_filt_col_00coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_y_filt_col_01coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER0_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER0_curld_y_filt_col_00coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER0_curld_y_filt_col_00coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER0_curld_y_filt_col_01coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER0_curld_y_filt_col_01coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_y_filt_col_02coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_y_filt_col_03coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER1_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER1_curld_y_filt_col_02coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER1_curld_y_filt_col_02coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER1_curld_y_filt_col_03coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER1_curld_y_filt_col_03coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_y_filt_col_10coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_y_filt_col_11coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER2_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER2_curld_y_filt_col_10coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER2_curld_y_filt_col_10coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER2_curld_y_filt_col_11coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER2_curld_y_filt_col_11coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_y_filt_col_12coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_y_filt_col_13coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER3_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER3_curld_y_filt_col_12coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER3_curld_y_filt_col_12coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER3_curld_y_filt_col_13coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER3_curld_y_filt_col_13coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_y_filt_col_20coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_y_filt_col_21coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER4_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER4_curld_y_filt_col_20coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER4_curld_y_filt_col_20coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER4_curld_y_filt_col_21coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER4_curld_y_filt_col_21coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_y_filt_col_22coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_y_filt_col_23coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER5_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER5_curld_y_filt_col_22coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER5_curld_y_filt_col_22coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER5_curld_y_filt_col_23coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER5_curld_y_filt_col_23coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_y_filt_col_30coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_y_filt_col_31coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER6_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER6_curld_y_filt_col_30coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER6_curld_y_filt_col_30coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER6_curld_y_filt_col_31coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER6_curld_y_filt_col_31coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_y_filt_col_32coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_y_filt_col_33coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER7_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER7_curld_y_filt_col_32coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER7_curld_y_filt_col_32coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER7_curld_y_filt_col_33coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER7_curld_y_filt_col_33coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_c_filt_col_00coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_c_filt_col_01coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER8_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER8_curld_c_filt_col_00coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER8_curld_c_filt_col_00coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER8_curld_c_filt_col_01coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER8_curld_c_filt_col_01coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_c_filt_col_02coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_c_filt_col_03coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER9_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER9_curld_c_filt_col_02coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER9_curld_c_filt_col_02coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER9_curld_c_filt_col_03coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER9_curld_c_filt_col_03coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_c_filt_col_10coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_c_filt_col_11coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER10_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER10_curld_c_filt_col_10coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER10_curld_c_filt_col_10coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER10_curld_c_filt_col_11coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER10_curld_c_filt_col_11coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_c_filt_col_12coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_c_filt_col_13coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER11_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER11_curld_c_filt_col_12coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER11_curld_c_filt_col_12coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER11_curld_c_filt_col_13coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER11_curld_c_filt_col_13coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_c_filt_col_20coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_c_filt_col_21coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER12_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER12_curld_c_filt_col_20coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER12_curld_c_filt_col_20coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER12_curld_c_filt_col_21coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER12_curld_c_filt_col_21coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_c_filt_col_22coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_c_filt_col_23coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER13_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER13_curld_c_filt_col_22coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER13_curld_c_filt_col_22coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER13_curld_c_filt_col_23coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER13_curld_c_filt_col_23coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_c_filt_col_30coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_c_filt_col_31coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER14_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER14_curld_c_filt_col_30coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER14_curld_c_filt_col_30coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER14_curld_c_filt_col_31coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER14_curld_c_filt_col_31coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_c_filt_col_32coef : 14;
        unsigned int reserved_0 : 2;
        unsigned int curld_c_filt_col_33coef : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER15_UNION;
#endif
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER15_curld_c_filt_col_32coef_START (0)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER15_curld_c_filt_col_32coef_END (13)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER15_curld_c_filt_col_33coef_START (16)
#define SOC_VENC_VEDU_CUR_SCALE_COL_PARAMETER15_curld_c_filt_col_33coef_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_CURPRE_RESERVED3_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_IMELD_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_UNVLD_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_wtmax : 10;
        unsigned int vcpi_rtmax : 10;
        unsigned int reserved : 12;
    } reg;
} SOC_VENC_EMAR_WAIT_TIM_OUT_UNION;
#endif
#define SOC_VENC_EMAR_WAIT_TIM_OUT_vcpi_wtmax_START (0)
#define SOC_VENC_EMAR_WAIT_TIM_OUT_vcpi_wtmax_END (9)
#define SOC_VENC_EMAR_WAIT_TIM_OUT_vcpi_rtmax_START (10)
#define SOC_VENC_EMAR_WAIT_TIM_OUT_vcpi_rtmax_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_ch00_rrmax : 5;
        unsigned int vcpi_ch01_rrmax : 5;
        unsigned int vcpi_ch02_rrmax : 5;
        unsigned int vcpi_ch03_rrmax : 5;
        unsigned int vcpi_ch04_rrmax : 5;
        unsigned int vcpi_ch05_rrmax : 5;
        unsigned int reserved : 2;
    } reg;
} SOC_VENC_EMAR_RCH_RPT_TH0_UNION;
#endif
#define SOC_VENC_EMAR_RCH_RPT_TH0_vcpi_ch00_rrmax_START (0)
#define SOC_VENC_EMAR_RCH_RPT_TH0_vcpi_ch00_rrmax_END (4)
#define SOC_VENC_EMAR_RCH_RPT_TH0_vcpi_ch01_rrmax_START (5)
#define SOC_VENC_EMAR_RCH_RPT_TH0_vcpi_ch01_rrmax_END (9)
#define SOC_VENC_EMAR_RCH_RPT_TH0_vcpi_ch02_rrmax_START (10)
#define SOC_VENC_EMAR_RCH_RPT_TH0_vcpi_ch02_rrmax_END (14)
#define SOC_VENC_EMAR_RCH_RPT_TH0_vcpi_ch03_rrmax_START (15)
#define SOC_VENC_EMAR_RCH_RPT_TH0_vcpi_ch03_rrmax_END (19)
#define SOC_VENC_EMAR_RCH_RPT_TH0_vcpi_ch04_rrmax_START (20)
#define SOC_VENC_EMAR_RCH_RPT_TH0_vcpi_ch04_rrmax_END (24)
#define SOC_VENC_EMAR_RCH_RPT_TH0_vcpi_ch05_rrmax_START (25)
#define SOC_VENC_EMAR_RCH_RPT_TH0_vcpi_ch05_rrmax_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_ch06_rrmax : 5;
        unsigned int vcpi_ch07_rrmax : 5;
        unsigned int vcpi_ch08_rrmax : 5;
        unsigned int vcpi_ch09_rrmax : 5;
        unsigned int vcpi_ch10_rrmax : 5;
        unsigned int vcpi_ch11_rrmax : 5;
        unsigned int reserved : 2;
    } reg;
} SOC_VENC_EMAR_RCH_RPT_TH1_UNION;
#endif
#define SOC_VENC_EMAR_RCH_RPT_TH1_vcpi_ch06_rrmax_START (0)
#define SOC_VENC_EMAR_RCH_RPT_TH1_vcpi_ch06_rrmax_END (4)
#define SOC_VENC_EMAR_RCH_RPT_TH1_vcpi_ch07_rrmax_START (5)
#define SOC_VENC_EMAR_RCH_RPT_TH1_vcpi_ch07_rrmax_END (9)
#define SOC_VENC_EMAR_RCH_RPT_TH1_vcpi_ch08_rrmax_START (10)
#define SOC_VENC_EMAR_RCH_RPT_TH1_vcpi_ch08_rrmax_END (14)
#define SOC_VENC_EMAR_RCH_RPT_TH1_vcpi_ch09_rrmax_START (15)
#define SOC_VENC_EMAR_RCH_RPT_TH1_vcpi_ch09_rrmax_END (19)
#define SOC_VENC_EMAR_RCH_RPT_TH1_vcpi_ch10_rrmax_START (20)
#define SOC_VENC_EMAR_RCH_RPT_TH1_vcpi_ch10_rrmax_END (24)
#define SOC_VENC_EMAR_RCH_RPT_TH1_vcpi_ch11_rrmax_START (25)
#define SOC_VENC_EMAR_RCH_RPT_TH1_vcpi_ch11_rrmax_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_ch12_rrmax : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_VENC_EMAR_RCH_RPT_TH2_UNION;
#endif
#define SOC_VENC_EMAR_RCH_RPT_TH2_vcpi_ch12_rrmax_START (0)
#define SOC_VENC_EMAR_RCH_RPT_TH2_vcpi_ch12_rrmax_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_ch00_wrmax : 5;
        unsigned int vcpi_ch01_wrmax : 5;
        unsigned int vcpi_ch02_wrmax : 5;
        unsigned int vcpi_ch03_wrmax : 5;
        unsigned int vcpi_ch04_wrmax : 5;
        unsigned int vcpi_ch05_wrmax : 5;
        unsigned int reserved : 2;
    } reg;
} SOC_VENC_EMAR_RCH_RPT_TH3_UNION;
#endif
#define SOC_VENC_EMAR_RCH_RPT_TH3_vcpi_ch00_wrmax_START (0)
#define SOC_VENC_EMAR_RCH_RPT_TH3_vcpi_ch00_wrmax_END (4)
#define SOC_VENC_EMAR_RCH_RPT_TH3_vcpi_ch01_wrmax_START (5)
#define SOC_VENC_EMAR_RCH_RPT_TH3_vcpi_ch01_wrmax_END (9)
#define SOC_VENC_EMAR_RCH_RPT_TH3_vcpi_ch02_wrmax_START (10)
#define SOC_VENC_EMAR_RCH_RPT_TH3_vcpi_ch02_wrmax_END (14)
#define SOC_VENC_EMAR_RCH_RPT_TH3_vcpi_ch03_wrmax_START (15)
#define SOC_VENC_EMAR_RCH_RPT_TH3_vcpi_ch03_wrmax_END (19)
#define SOC_VENC_EMAR_RCH_RPT_TH3_vcpi_ch04_wrmax_START (20)
#define SOC_VENC_EMAR_RCH_RPT_TH3_vcpi_ch04_wrmax_END (24)
#define SOC_VENC_EMAR_RCH_RPT_TH3_vcpi_ch05_wrmax_START (25)
#define SOC_VENC_EMAR_RCH_RPT_TH3_vcpi_ch05_wrmax_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_ch06_wrmax : 5;
        unsigned int vcpi_ch07_wrmax : 5;
        unsigned int vcpi_ch08_wrmax : 5;
        unsigned int vcpi_ch09_wrmax : 5;
        unsigned int vcpi_ch10_wrmax : 5;
        unsigned int vcpi_ch11_wrmax : 5;
        unsigned int reserved : 2;
    } reg;
} SOC_VENC_EMAR_RCH_RPT_TH4_UNION;
#endif
#define SOC_VENC_EMAR_RCH_RPT_TH4_vcpi_ch06_wrmax_START (0)
#define SOC_VENC_EMAR_RCH_RPT_TH4_vcpi_ch06_wrmax_END (4)
#define SOC_VENC_EMAR_RCH_RPT_TH4_vcpi_ch07_wrmax_START (5)
#define SOC_VENC_EMAR_RCH_RPT_TH4_vcpi_ch07_wrmax_END (9)
#define SOC_VENC_EMAR_RCH_RPT_TH4_vcpi_ch08_wrmax_START (10)
#define SOC_VENC_EMAR_RCH_RPT_TH4_vcpi_ch08_wrmax_END (14)
#define SOC_VENC_EMAR_RCH_RPT_TH4_vcpi_ch09_wrmax_START (15)
#define SOC_VENC_EMAR_RCH_RPT_TH4_vcpi_ch09_wrmax_END (19)
#define SOC_VENC_EMAR_RCH_RPT_TH4_vcpi_ch10_wrmax_START (20)
#define SOC_VENC_EMAR_RCH_RPT_TH4_vcpi_ch10_wrmax_END (24)
#define SOC_VENC_EMAR_RCH_RPT_TH4_vcpi_ch11_wrmax_START (25)
#define SOC_VENC_EMAR_RCH_RPT_TH4_vcpi_ch11_wrmax_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_ch12_wrmax : 5;
        unsigned int vcpi_ch13_wrmax : 5;
        unsigned int vcpi_ch14_wrmax : 5;
        unsigned int reserved : 17;
    } reg;
} SOC_VENC_EMAR_RCH_RPT_TH5_UNION;
#endif
#define SOC_VENC_EMAR_RCH_RPT_TH5_vcpi_ch12_wrmax_START (0)
#define SOC_VENC_EMAR_RCH_RPT_TH5_vcpi_ch12_wrmax_END (4)
#define SOC_VENC_EMAR_RCH_RPT_TH5_vcpi_ch13_wrmax_START (5)
#define SOC_VENC_EMAR_RCH_RPT_TH5_vcpi_ch13_wrmax_END (9)
#define SOC_VENC_EMAR_RCH_RPT_TH5_vcpi_ch14_wrmax_START (10)
#define SOC_VENC_EMAR_RCH_RPT_TH5_vcpi_ch14_wrmax_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rch_bst1_num : 32;
    } reg;
} SOC_VENC_EMAR_RCH_BST1_NUM_UNION;
#endif
#define SOC_VENC_EMAR_RCH_BST1_NUM_rch_bst1_num_START (0)
#define SOC_VENC_EMAR_RCH_BST1_NUM_rch_bst1_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rch_bst2_num : 32;
    } reg;
} SOC_VENC_EMAR_RCH_BST2_NUM_UNION;
#endif
#define SOC_VENC_EMAR_RCH_BST2_NUM_rch_bst2_num_START (0)
#define SOC_VENC_EMAR_RCH_BST2_NUM_rch_bst2_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rch_bst3_num : 32;
    } reg;
} SOC_VENC_EMAR_RCH_BST3_NUM_UNION;
#endif
#define SOC_VENC_EMAR_RCH_BST3_NUM_rch_bst3_num_START (0)
#define SOC_VENC_EMAR_RCH_BST3_NUM_rch_bst3_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rch_bst4_num : 32;
    } reg;
} SOC_VENC_EMAR_RCH_BST4_NUM_UNION;
#endif
#define SOC_VENC_EMAR_RCH_BST4_NUM_rch_bst4_num_START (0)
#define SOC_VENC_EMAR_RCH_BST4_NUM_rch_bst4_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rch_bst5_num : 32;
    } reg;
} SOC_VENC_EMAR_RCH_BST5_NUM_UNION;
#endif
#define SOC_VENC_EMAR_RCH_BST5_NUM_rch_bst5_num_START (0)
#define SOC_VENC_EMAR_RCH_BST5_NUM_rch_bst5_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rch_bst6_num : 32;
    } reg;
} SOC_VENC_EMAR_RCH_BST6_NUM_UNION;
#endif
#define SOC_VENC_EMAR_RCH_BST6_NUM_rch_bst6_num_START (0)
#define SOC_VENC_EMAR_RCH_BST6_NUM_rch_bst6_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rch_bst7_num : 32;
    } reg;
} SOC_VENC_EMAR_RCH_BST7_NUM_UNION;
#endif
#define SOC_VENC_EMAR_RCH_BST7_NUM_rch_bst7_num_START (0)
#define SOC_VENC_EMAR_RCH_BST7_NUM_rch_bst7_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rch_bst8_num : 32;
    } reg;
} SOC_VENC_EMAR_RCH_BST8_NUM_UNION;
#endif
#define SOC_VENC_EMAR_RCH_BST8_NUM_rch_bst8_num_START (0)
#define SOC_VENC_EMAR_RCH_BST8_NUM_rch_bst8_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wch_bst1_num : 32;
    } reg;
} SOC_VENC_EMAR_WCH_BST1_NUM_UNION;
#endif
#define SOC_VENC_EMAR_WCH_BST1_NUM_wch_bst1_num_START (0)
#define SOC_VENC_EMAR_WCH_BST1_NUM_wch_bst1_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wch_bst2_num : 32;
    } reg;
} SOC_VENC_EMAR_WCH_BST2_NUM_UNION;
#endif
#define SOC_VENC_EMAR_WCH_BST2_NUM_wch_bst2_num_START (0)
#define SOC_VENC_EMAR_WCH_BST2_NUM_wch_bst2_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wch_bst3_num : 32;
    } reg;
} SOC_VENC_EMAR_WCH_BST3_NUM_UNION;
#endif
#define SOC_VENC_EMAR_WCH_BST3_NUM_wch_bst3_num_START (0)
#define SOC_VENC_EMAR_WCH_BST3_NUM_wch_bst3_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wch_bst4_num : 32;
    } reg;
} SOC_VENC_EMAR_WCH_BST4_NUM_UNION;
#endif
#define SOC_VENC_EMAR_WCH_BST4_NUM_wch_bst4_num_START (0)
#define SOC_VENC_EMAR_WCH_BST4_NUM_wch_bst4_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wch_bst5_num : 32;
    } reg;
} SOC_VENC_EMAR_WCH_BST5_NUM_UNION;
#endif
#define SOC_VENC_EMAR_WCH_BST5_NUM_wch_bst5_num_START (0)
#define SOC_VENC_EMAR_WCH_BST5_NUM_wch_bst5_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wch_bst6_num : 32;
    } reg;
} SOC_VENC_EMAR_WCH_BST6_NUM_UNION;
#endif
#define SOC_VENC_EMAR_WCH_BST6_NUM_wch_bst6_num_START (0)
#define SOC_VENC_EMAR_WCH_BST6_NUM_wch_bst6_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wch_bst7_num : 32;
    } reg;
} SOC_VENC_EMAR_WCH_BST7_NUM_UNION;
#endif
#define SOC_VENC_EMAR_WCH_BST7_NUM_wch_bst7_num_START (0)
#define SOC_VENC_EMAR_WCH_BST7_NUM_wch_bst7_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wch_bst8_num : 32;
    } reg;
} SOC_VENC_EMAR_WCH_BST8_NUM_UNION;
#endif
#define SOC_VENC_EMAR_WCH_BST8_NUM_wch_bst8_num_START (0)
#define SOC_VENC_EMAR_WCH_BST8_NUM_wch_bst8_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cur_rcmd_st : 2;
        unsigned int reserved_0 : 2;
        unsigned int rcmd_chn_cnt : 7;
        unsigned int reserved_1 : 1;
        unsigned int save_cnt : 2;
        unsigned int all_r_mid_info : 18;
    } reg;
} SOC_VENC_EMAR_STA_0_UNION;
#endif
#define SOC_VENC_EMAR_STA_0_cur_rcmd_st_START (0)
#define SOC_VENC_EMAR_STA_0_cur_rcmd_st_END (1)
#define SOC_VENC_EMAR_STA_0_rcmd_chn_cnt_START (4)
#define SOC_VENC_EMAR_STA_0_rcmd_chn_cnt_END (10)
#define SOC_VENC_EMAR_STA_0_save_cnt_START (12)
#define SOC_VENC_EMAR_STA_0_save_cnt_END (13)
#define SOC_VENC_EMAR_STA_0_all_r_mid_info_START (14)
#define SOC_VENC_EMAR_STA_0_all_r_mid_info_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int r00_arbit_cfifo_cnt : 6;
        unsigned int r00_sp_128_rd_cnt : 6;
        unsigned int r00_sp_bst8_rd_cnt : 6;
        unsigned int r00_syn_cfifo_cnt : 6;
        unsigned int reserved : 8;
    } reg;
} SOC_VENC_EMAR_STA_1_UNION;
#endif
#define SOC_VENC_EMAR_STA_1_r00_arbit_cfifo_cnt_START (0)
#define SOC_VENC_EMAR_STA_1_r00_arbit_cfifo_cnt_END (5)
#define SOC_VENC_EMAR_STA_1_r00_sp_128_rd_cnt_START (6)
#define SOC_VENC_EMAR_STA_1_r00_sp_128_rd_cnt_END (11)
#define SOC_VENC_EMAR_STA_1_r00_sp_bst8_rd_cnt_START (12)
#define SOC_VENC_EMAR_STA_1_r00_sp_bst8_rd_cnt_END (17)
#define SOC_VENC_EMAR_STA_1_r00_syn_cfifo_cnt_START (18)
#define SOC_VENC_EMAR_STA_1_r00_syn_cfifo_cnt_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int r01_arbit_cfifo_cnt : 6;
        unsigned int r01_sp_128_rd_cnt : 6;
        unsigned int r01_sp_bst8_rd_cnt : 6;
        unsigned int r01_syn_cfifo_cnt : 6;
        unsigned int reserved : 8;
    } reg;
} SOC_VENC_EMAR_STA_2_UNION;
#endif
#define SOC_VENC_EMAR_STA_2_r01_arbit_cfifo_cnt_START (0)
#define SOC_VENC_EMAR_STA_2_r01_arbit_cfifo_cnt_END (5)
#define SOC_VENC_EMAR_STA_2_r01_sp_128_rd_cnt_START (6)
#define SOC_VENC_EMAR_STA_2_r01_sp_128_rd_cnt_END (11)
#define SOC_VENC_EMAR_STA_2_r01_sp_bst8_rd_cnt_START (12)
#define SOC_VENC_EMAR_STA_2_r01_sp_bst8_rd_cnt_END (17)
#define SOC_VENC_EMAR_STA_2_r01_syn_cfifo_cnt_START (18)
#define SOC_VENC_EMAR_STA_2_r01_syn_cfifo_cnt_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int warbit_cfifo_cnt : 6;
        unsigned int wsp_128_rd_cnt : 6;
        unsigned int wsp_bst8_rd_cnt : 6;
        unsigned int wsyn_cfifo_cnt : 4;
        unsigned int reserved : 10;
    } reg;
} SOC_VENC_EMAR_STA_3_UNION;
#endif
#define SOC_VENC_EMAR_STA_3_warbit_cfifo_cnt_START (0)
#define SOC_VENC_EMAR_STA_3_warbit_cfifo_cnt_END (5)
#define SOC_VENC_EMAR_STA_3_wsp_128_rd_cnt_START (6)
#define SOC_VENC_EMAR_STA_3_wsp_128_rd_cnt_END (11)
#define SOC_VENC_EMAR_STA_3_wsp_bst8_rd_cnt_START (12)
#define SOC_VENC_EMAR_STA_3_wsp_bst8_rd_cnt_END (17)
#define SOC_VENC_EMAR_STA_3_wsyn_cfifo_cnt_START (18)
#define SOC_VENC_EMAR_STA_3_wsyn_cfifo_cnt_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_EMAR_RESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int glb_bypass : 1;
        unsigned int rqos_en : 1;
        unsigned int wqos_en : 1;
        unsigned int int_en : 1;
        unsigned int cache_l1_en : 1;
        unsigned int cache_l2_en : 1;
        unsigned int rqos : 4;
        unsigned int wqos : 4;
        unsigned int reserved_0 : 1;
        unsigned int smr_rd_shadow : 1;
        unsigned int ptw_pf : 4;
        unsigned int ptw_mid : 8;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_VENC_COMN0_SMMU_SCR_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SCR_glb_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SCR_glb_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SCR_rqos_en_START (1)
#define SOC_VENC_COMN0_SMMU_SCR_rqos_en_END (1)
#define SOC_VENC_COMN0_SMMU_SCR_wqos_en_START (2)
#define SOC_VENC_COMN0_SMMU_SCR_wqos_en_END (2)
#define SOC_VENC_COMN0_SMMU_SCR_int_en_START (3)
#define SOC_VENC_COMN0_SMMU_SCR_int_en_END (3)
#define SOC_VENC_COMN0_SMMU_SCR_cache_l1_en_START (4)
#define SOC_VENC_COMN0_SMMU_SCR_cache_l1_en_END (4)
#define SOC_VENC_COMN0_SMMU_SCR_cache_l2_en_START (5)
#define SOC_VENC_COMN0_SMMU_SCR_cache_l2_en_END (5)
#define SOC_VENC_COMN0_SMMU_SCR_rqos_START (6)
#define SOC_VENC_COMN0_SMMU_SCR_rqos_END (9)
#define SOC_VENC_COMN0_SMMU_SCR_wqos_START (10)
#define SOC_VENC_COMN0_SMMU_SCR_wqos_END (13)
#define SOC_VENC_COMN0_SMMU_SCR_smr_rd_shadow_START (15)
#define SOC_VENC_COMN0_SMMU_SCR_smr_rd_shadow_END (15)
#define SOC_VENC_COMN0_SMMU_SCR_ptw_pf_START (16)
#define SOC_VENC_COMN0_SMMU_SCR_ptw_pf_END (19)
#define SOC_VENC_COMN0_SMMU_SCR_ptw_mid_START (20)
#define SOC_VENC_COMN0_SMMU_SCR_ptw_mid_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mem_ctrl_wr : 16;
        unsigned int mem_ctrl_rd : 16;
    } reg;
} SOC_VENC_COMN0_SMMU_MEMCTRL_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_MEMCTRL_mem_ctrl_wr_START (0)
#define SOC_VENC_COMN0_SMMU_MEMCTRL_mem_ctrl_wr_END (15)
#define SOC_VENC_COMN0_SMMU_MEMCTRL_mem_ctrl_rd_START (16)
#define SOC_VENC_COMN0_SMMU_MEMCTRL_mem_ctrl_rd_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int auto_clk_gt_en : 1;
        unsigned int reserved_0 : 1;
        unsigned int smmu_idle : 1;
        unsigned int reserved_1 : 29;
    } reg;
} SOC_VENC_COMN0_SMMU_LP_CTRL_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_LP_CTRL_auto_clk_gt_en_START (0)
#define SOC_VENC_COMN0_SMMU_LP_CTRL_auto_clk_gt_en_END (0)
#define SOC_VENC_COMN0_SMMU_LP_CTRL_smmu_idle_START (2)
#define SOC_VENC_COMN0_SMMU_LP_CTRL_smmu_idle_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int remap_sel0 : 2;
        unsigned int remap_sel1 : 2;
        unsigned int remap_sel2 : 2;
        unsigned int remap_sel3 : 2;
        unsigned int remap_sel4 : 2;
        unsigned int remap_sel5 : 2;
        unsigned int remap_sel6 : 2;
        unsigned int remap_sel7 : 2;
        unsigned int remap_sel8 : 2;
        unsigned int remap_sel9 : 2;
        unsigned int remap_sel10 : 2;
        unsigned int remap_sel11 : 2;
        unsigned int remap_sel12 : 2;
        unsigned int remap_sel13 : 2;
        unsigned int remap_sel14 : 2;
        unsigned int remap_sel15 : 2;
    } reg;
} SOC_VENC_COMN0_SMMU_PRESS_REMAP_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel0_START (0)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel0_END (1)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel1_START (2)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel1_END (3)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel2_START (4)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel2_END (5)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel3_START (6)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel3_END (7)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel4_START (8)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel4_END (9)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel5_START (10)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel5_END (11)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel6_START (12)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel6_END (13)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel7_START (14)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel7_END (15)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel8_START (16)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel8_END (17)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel9_START (18)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel9_END (19)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel10_START (20)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel10_END (21)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel11_START (22)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel11_END (23)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel12_START (24)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel12_END (25)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel13_START (26)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel13_END (27)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel14_START (28)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel14_END (29)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel15_START (30)
#define SOC_VENC_COMN0_SMMU_PRESS_REMAP_remap_sel15_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intns_permis_msk : 1;
        unsigned int intns_ext_msk : 1;
        unsigned int intns_tlbmiss_msk : 1;
        unsigned int intns_ptw_trans_msk : 1;
        unsigned int intns_ptw_invalid_msk : 1;
        unsigned int intns_ptw_ns_msk : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_VENC_COMN0_SMMU_INTMASK_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_INTMASK_NS_intns_permis_msk_START (0)
#define SOC_VENC_COMN0_SMMU_INTMASK_NS_intns_permis_msk_END (0)
#define SOC_VENC_COMN0_SMMU_INTMASK_NS_intns_ext_msk_START (1)
#define SOC_VENC_COMN0_SMMU_INTMASK_NS_intns_ext_msk_END (1)
#define SOC_VENC_COMN0_SMMU_INTMASK_NS_intns_tlbmiss_msk_START (2)
#define SOC_VENC_COMN0_SMMU_INTMASK_NS_intns_tlbmiss_msk_END (2)
#define SOC_VENC_COMN0_SMMU_INTMASK_NS_intns_ptw_trans_msk_START (3)
#define SOC_VENC_COMN0_SMMU_INTMASK_NS_intns_ptw_trans_msk_END (3)
#define SOC_VENC_COMN0_SMMU_INTMASK_NS_intns_ptw_invalid_msk_START (4)
#define SOC_VENC_COMN0_SMMU_INTMASK_NS_intns_ptw_invalid_msk_END (4)
#define SOC_VENC_COMN0_SMMU_INTMASK_NS_intns_ptw_ns_msk_START (5)
#define SOC_VENC_COMN0_SMMU_INTMASK_NS_intns_ptw_ns_msk_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intns_permis_raw : 1;
        unsigned int intns_ext_raw : 1;
        unsigned int intns_tlbmiss_raw : 1;
        unsigned int intns_ptw_trans_raw : 1;
        unsigned int intns_ptw_invalid_raw : 1;
        unsigned int intns_ptw_ns_raw : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_VENC_COMN0_SMMU_INTRAW_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_INTRAW_NS_intns_permis_raw_START (0)
#define SOC_VENC_COMN0_SMMU_INTRAW_NS_intns_permis_raw_END (0)
#define SOC_VENC_COMN0_SMMU_INTRAW_NS_intns_ext_raw_START (1)
#define SOC_VENC_COMN0_SMMU_INTRAW_NS_intns_ext_raw_END (1)
#define SOC_VENC_COMN0_SMMU_INTRAW_NS_intns_tlbmiss_raw_START (2)
#define SOC_VENC_COMN0_SMMU_INTRAW_NS_intns_tlbmiss_raw_END (2)
#define SOC_VENC_COMN0_SMMU_INTRAW_NS_intns_ptw_trans_raw_START (3)
#define SOC_VENC_COMN0_SMMU_INTRAW_NS_intns_ptw_trans_raw_END (3)
#define SOC_VENC_COMN0_SMMU_INTRAW_NS_intns_ptw_invalid_raw_START (4)
#define SOC_VENC_COMN0_SMMU_INTRAW_NS_intns_ptw_invalid_raw_END (4)
#define SOC_VENC_COMN0_SMMU_INTRAW_NS_intns_ptw_ns_raw_START (5)
#define SOC_VENC_COMN0_SMMU_INTRAW_NS_intns_ptw_ns_raw_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intns_permis_stat : 1;
        unsigned int intns_ext_stat : 1;
        unsigned int intns_tlbmiss_stat : 1;
        unsigned int intns_ptw_trans_stat : 1;
        unsigned int intns_ptw_invalid_stat : 1;
        unsigned int intns_ptw_ns_stat : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_VENC_COMN0_SMMU_INTSTAT_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_INTSTAT_NS_intns_permis_stat_START (0)
#define SOC_VENC_COMN0_SMMU_INTSTAT_NS_intns_permis_stat_END (0)
#define SOC_VENC_COMN0_SMMU_INTSTAT_NS_intns_ext_stat_START (1)
#define SOC_VENC_COMN0_SMMU_INTSTAT_NS_intns_ext_stat_END (1)
#define SOC_VENC_COMN0_SMMU_INTSTAT_NS_intns_tlbmiss_stat_START (2)
#define SOC_VENC_COMN0_SMMU_INTSTAT_NS_intns_tlbmiss_stat_END (2)
#define SOC_VENC_COMN0_SMMU_INTSTAT_NS_intns_ptw_trans_stat_START (3)
#define SOC_VENC_COMN0_SMMU_INTSTAT_NS_intns_ptw_trans_stat_END (3)
#define SOC_VENC_COMN0_SMMU_INTSTAT_NS_intns_ptw_invalid_stat_START (4)
#define SOC_VENC_COMN0_SMMU_INTSTAT_NS_intns_ptw_invalid_stat_END (4)
#define SOC_VENC_COMN0_SMMU_INTSTAT_NS_intns_ptw_ns_stat_START (5)
#define SOC_VENC_COMN0_SMMU_INTSTAT_NS_intns_ptw_ns_stat_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intns_permis_clr : 1;
        unsigned int intns_ext_clr : 1;
        unsigned int intns_tlbmiss_clr : 1;
        unsigned int intns_ptw_trans_clr : 1;
        unsigned int intns_ptw_invalid_clr : 1;
        unsigned int intns_ptw_ns_clr : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_VENC_COMN0_SMMU_INTCLR_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_INTCLR_NS_intns_permis_clr_START (0)
#define SOC_VENC_COMN0_SMMU_INTCLR_NS_intns_permis_clr_END (0)
#define SOC_VENC_COMN0_SMMU_INTCLR_NS_intns_ext_clr_START (1)
#define SOC_VENC_COMN0_SMMU_INTCLR_NS_intns_ext_clr_END (1)
#define SOC_VENC_COMN0_SMMU_INTCLR_NS_intns_tlbmiss_clr_START (2)
#define SOC_VENC_COMN0_SMMU_INTCLR_NS_intns_tlbmiss_clr_END (2)
#define SOC_VENC_COMN0_SMMU_INTCLR_NS_intns_ptw_trans_clr_START (3)
#define SOC_VENC_COMN0_SMMU_INTCLR_NS_intns_ptw_trans_clr_END (3)
#define SOC_VENC_COMN0_SMMU_INTCLR_NS_intns_ptw_invalid_clr_START (4)
#define SOC_VENC_COMN0_SMMU_INTCLR_NS_intns_ptw_invalid_clr_END (4)
#define SOC_VENC_COMN0_SMMU_INTCLR_NS_intns_ptw_ns_clr_START (5)
#define SOC_VENC_COMN0_SMMU_INTCLR_NS_intns_ptw_ns_clr_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr0_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr0_invld_en : 1;
        unsigned int smr0_ptw_qos : 7;
        unsigned int smr0_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR0_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR0_NS_smr0_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR0_NS_smr0_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR0_NS_smr0_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR0_NS_smr0_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR0_NS_smr0_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR0_NS_smr0_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR0_NS_smr0_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR0_NS_smr0_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr1_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr1_invld_en : 1;
        unsigned int smr1_ptw_qos : 7;
        unsigned int smr1_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR1_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR1_NS_smr1_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR1_NS_smr1_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR1_NS_smr1_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR1_NS_smr1_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR1_NS_smr1_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR1_NS_smr1_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR1_NS_smr1_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR1_NS_smr1_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr2_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr2_invld_en : 1;
        unsigned int smr2_ptw_qos : 7;
        unsigned int smr2_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR2_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR2_NS_smr2_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR2_NS_smr2_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR2_NS_smr2_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR2_NS_smr2_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR2_NS_smr2_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR2_NS_smr2_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR2_NS_smr2_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR2_NS_smr2_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr3_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr3_invld_en : 1;
        unsigned int smr3_ptw_qos : 7;
        unsigned int smr3_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR3_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR3_NS_smr3_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR3_NS_smr3_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR3_NS_smr3_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR3_NS_smr3_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR3_NS_smr3_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR3_NS_smr3_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR3_NS_smr3_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR3_NS_smr3_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr4_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr4_invld_en : 1;
        unsigned int smr4_ptw_qos : 7;
        unsigned int smr4_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR4_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR4_NS_smr4_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR4_NS_smr4_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR4_NS_smr4_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR4_NS_smr4_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR4_NS_smr4_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR4_NS_smr4_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR4_NS_smr4_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR4_NS_smr4_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr5_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr5_invld_en : 1;
        unsigned int smr5_ptw_qos : 7;
        unsigned int smr5_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR5_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR5_NS_smr5_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR5_NS_smr5_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR5_NS_smr5_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR5_NS_smr5_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR5_NS_smr5_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR5_NS_smr5_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR5_NS_smr5_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR5_NS_smr5_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr6_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr6_invld_en : 1;
        unsigned int smr6_ptw_qos : 7;
        unsigned int smr6_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR6_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR6_NS_smr6_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR6_NS_smr6_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR6_NS_smr6_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR6_NS_smr6_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR6_NS_smr6_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR6_NS_smr6_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR6_NS_smr6_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR6_NS_smr6_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr7_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr7_invld_en : 1;
        unsigned int smr7_ptw_qos : 7;
        unsigned int smr7_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR7_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR7_NS_smr7_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR7_NS_smr7_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR7_NS_smr7_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR7_NS_smr7_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR7_NS_smr7_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR7_NS_smr7_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR7_NS_smr7_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR7_NS_smr7_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr8_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr8_invld_en : 1;
        unsigned int smr8_ptw_qos : 7;
        unsigned int smr8_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR8_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR8_NS_smr8_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR8_NS_smr8_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR8_NS_smr8_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR8_NS_smr8_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR8_NS_smr8_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR8_NS_smr8_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR8_NS_smr8_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR8_NS_smr8_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr9_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr9_invld_en : 1;
        unsigned int smr9_ptw_qos : 7;
        unsigned int smr9_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR9_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR9_NS_smr9_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR9_NS_smr9_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR9_NS_smr9_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR9_NS_smr9_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR9_NS_smr9_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR9_NS_smr9_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR9_NS_smr9_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR9_NS_smr9_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr10_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr10_invld_en : 1;
        unsigned int smr10_ptw_qos : 7;
        unsigned int smr10_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR10_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR10_NS_smr10_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR10_NS_smr10_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR10_NS_smr10_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR10_NS_smr10_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR10_NS_smr10_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR10_NS_smr10_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR10_NS_smr10_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR10_NS_smr10_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr11_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr11_invld_en : 1;
        unsigned int smr11_ptw_qos : 7;
        unsigned int smr11_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR11_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR11_NS_smr11_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR11_NS_smr11_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR11_NS_smr11_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR11_NS_smr11_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR11_NS_smr11_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR11_NS_smr11_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR11_NS_smr11_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR11_NS_smr11_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr12_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr12_invld_en : 1;
        unsigned int smr12_ptw_qos : 7;
        unsigned int smr12_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR12_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR12_NS_smr12_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR12_NS_smr12_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR12_NS_smr12_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR12_NS_smr12_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR12_NS_smr12_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR12_NS_smr12_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR12_NS_smr12_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR12_NS_smr12_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr13_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr13_invld_en : 1;
        unsigned int smr13_ptw_qos : 7;
        unsigned int smr13_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR13_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR13_NS_smr13_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR13_NS_smr13_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR13_NS_smr13_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR13_NS_smr13_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR13_NS_smr13_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR13_NS_smr13_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR13_NS_smr13_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR13_NS_smr13_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr14_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr14_invld_en : 1;
        unsigned int smr14_ptw_qos : 7;
        unsigned int smr14_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR14_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR14_NS_smr14_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR14_NS_smr14_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR14_NS_smr14_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR14_NS_smr14_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR14_NS_smr14_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR14_NS_smr14_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR14_NS_smr14_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR14_NS_smr14_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr15_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr15_invld_en : 1;
        unsigned int smr15_ptw_qos : 7;
        unsigned int smr15_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR15_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR15_NS_smr15_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR15_NS_smr15_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR15_NS_smr15_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR15_NS_smr15_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR15_NS_smr15_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR15_NS_smr15_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR15_NS_smr15_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR15_NS_smr15_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr16_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr16_invld_en : 1;
        unsigned int smr16_ptw_qos : 7;
        unsigned int smr16_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR16_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR16_NS_smr16_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR16_NS_smr16_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR16_NS_smr16_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR16_NS_smr16_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR16_NS_smr16_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR16_NS_smr16_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR16_NS_smr16_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR16_NS_smr16_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr17_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr17_invld_en : 1;
        unsigned int smr17_ptw_qos : 7;
        unsigned int smr17_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR17_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR17_NS_smr17_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR17_NS_smr17_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR17_NS_smr17_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR17_NS_smr17_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR17_NS_smr17_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR17_NS_smr17_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR17_NS_smr17_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR17_NS_smr17_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr18_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr18_invld_en : 1;
        unsigned int smr18_ptw_qos : 7;
        unsigned int smr18_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR18_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR18_NS_smr18_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR18_NS_smr18_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR18_NS_smr18_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR18_NS_smr18_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR18_NS_smr18_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR18_NS_smr18_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR18_NS_smr18_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR18_NS_smr18_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr19_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr19_invld_en : 1;
        unsigned int smr19_ptw_qos : 7;
        unsigned int smr19_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR19_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR19_NS_smr19_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR19_NS_smr19_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR19_NS_smr19_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR19_NS_smr19_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR19_NS_smr19_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR19_NS_smr19_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR19_NS_smr19_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR19_NS_smr19_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr20_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr20_invld_en : 1;
        unsigned int smr20_ptw_qos : 7;
        unsigned int smr20_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR20_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR20_NS_smr20_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR20_NS_smr20_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR20_NS_smr20_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR20_NS_smr20_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR20_NS_smr20_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR20_NS_smr20_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR20_NS_smr20_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR20_NS_smr20_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr21_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr21_invld_en : 1;
        unsigned int smr21_ptw_qos : 7;
        unsigned int smr21_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR21_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR21_NS_smr21_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR21_NS_smr21_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR21_NS_smr21_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR21_NS_smr21_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR21_NS_smr21_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR21_NS_smr21_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR21_NS_smr21_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR21_NS_smr21_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr22_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr22_invld_en : 1;
        unsigned int smr22_ptw_qos : 7;
        unsigned int smr22_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR22_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR22_NS_smr22_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR22_NS_smr22_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR22_NS_smr22_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR22_NS_smr22_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR22_NS_smr22_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR22_NS_smr22_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR22_NS_smr22_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR22_NS_smr22_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr23_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr23_invld_en : 1;
        unsigned int smr23_ptw_qos : 7;
        unsigned int smr23_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR23_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR23_NS_smr23_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR23_NS_smr23_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR23_NS_smr23_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR23_NS_smr23_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR23_NS_smr23_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR23_NS_smr23_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR23_NS_smr23_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR23_NS_smr23_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr24_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr24_invld_en : 1;
        unsigned int smr24_ptw_qos : 7;
        unsigned int smr24_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR24_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR24_NS_smr24_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR24_NS_smr24_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR24_NS_smr24_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR24_NS_smr24_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR24_NS_smr24_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR24_NS_smr24_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR24_NS_smr24_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR24_NS_smr24_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr25_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr25_invld_en : 1;
        unsigned int smr25_ptw_qos : 7;
        unsigned int smr25_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR25_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR25_NS_smr25_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR25_NS_smr25_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR25_NS_smr25_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR25_NS_smr25_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR25_NS_smr25_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR25_NS_smr25_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR25_NS_smr25_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR25_NS_smr25_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr26_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr26_invld_en : 1;
        unsigned int smr26_ptw_qos : 7;
        unsigned int smr26_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR26_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR26_NS_smr26_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR26_NS_smr26_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR26_NS_smr26_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR26_NS_smr26_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR26_NS_smr26_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR26_NS_smr26_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR26_NS_smr26_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR26_NS_smr26_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr27_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr27_invld_en : 1;
        unsigned int smr27_ptw_qos : 7;
        unsigned int smr27_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR27_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR27_NS_smr27_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR27_NS_smr27_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR27_NS_smr27_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR27_NS_smr27_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR27_NS_smr27_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR27_NS_smr27_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR27_NS_smr27_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR27_NS_smr27_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr28_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr28_invld_en : 1;
        unsigned int smr28_ptw_qos : 7;
        unsigned int smr28_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR28_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR28_NS_smr28_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR28_NS_smr28_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR28_NS_smr28_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR28_NS_smr28_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR28_NS_smr28_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR28_NS_smr28_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR28_NS_smr28_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR28_NS_smr28_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr29_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr29_invld_en : 1;
        unsigned int smr29_ptw_qos : 7;
        unsigned int smr29_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR29_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR29_NS_smr29_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR29_NS_smr29_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR29_NS_smr29_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR29_NS_smr29_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR29_NS_smr29_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR29_NS_smr29_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR29_NS_smr29_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR29_NS_smr29_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr30_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr30_invld_en : 1;
        unsigned int smr30_ptw_qos : 7;
        unsigned int smr30_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR30_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR30_NS_smr30_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR30_NS_smr30_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR30_NS_smr30_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR30_NS_smr30_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR30_NS_smr30_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR30_NS_smr30_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR30_NS_smr30_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR30_NS_smr30_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr31_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr31_invld_en : 1;
        unsigned int smr31_ptw_qos : 7;
        unsigned int smr31_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR31_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR31_NS_smr31_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR31_NS_smr31_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR31_NS_smr31_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR31_NS_smr31_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR31_NS_smr31_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR31_NS_smr31_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR31_NS_smr31_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR31_NS_smr31_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr32_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr32_invld_en : 1;
        unsigned int smr32_ptw_qos : 7;
        unsigned int smr32_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR32_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR32_NS_smr32_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR32_NS_smr32_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR32_NS_smr32_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR32_NS_smr32_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR32_NS_smr32_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR32_NS_smr32_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR32_NS_smr32_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR32_NS_smr32_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr33_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr33_invld_en : 1;
        unsigned int smr33_ptw_qos : 7;
        unsigned int smr33_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR33_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR33_NS_smr33_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR33_NS_smr33_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR33_NS_smr33_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR33_NS_smr33_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR33_NS_smr33_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR33_NS_smr33_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR33_NS_smr33_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR33_NS_smr33_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr34_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr34_invld_en : 1;
        unsigned int smr34_ptw_qos : 7;
        unsigned int smr34_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR34_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR34_NS_smr34_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR34_NS_smr34_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR34_NS_smr34_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR34_NS_smr34_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR34_NS_smr34_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR34_NS_smr34_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR34_NS_smr34_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR34_NS_smr34_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr35_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr35_invld_en : 1;
        unsigned int smr35_ptw_qos : 7;
        unsigned int smr35_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR35_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR35_NS_smr35_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR35_NS_smr35_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR35_NS_smr35_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR35_NS_smr35_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR35_NS_smr35_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR35_NS_smr35_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR35_NS_smr35_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR35_NS_smr35_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr36_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr36_invld_en : 1;
        unsigned int smr36_ptw_qos : 7;
        unsigned int smr36_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR36_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR36_NS_smr36_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR36_NS_smr36_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR36_NS_smr36_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR36_NS_smr36_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR36_NS_smr36_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR36_NS_smr36_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR36_NS_smr36_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR36_NS_smr36_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr37_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr37_invld_en : 1;
        unsigned int smr37_ptw_qos : 7;
        unsigned int smr37_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR37_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR37_NS_smr37_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR37_NS_smr37_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR37_NS_smr37_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR37_NS_smr37_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR37_NS_smr37_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR37_NS_smr37_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR37_NS_smr37_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR37_NS_smr37_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr38_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr38_invld_en : 1;
        unsigned int smr38_ptw_qos : 7;
        unsigned int smr38_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR38_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR38_NS_smr38_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR38_NS_smr38_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR38_NS_smr38_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR38_NS_smr38_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR38_NS_smr38_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR38_NS_smr38_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR38_NS_smr38_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR38_NS_smr38_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr39_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr39_invld_en : 1;
        unsigned int smr39_ptw_qos : 7;
        unsigned int smr39_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR39_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR39_NS_smr39_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR39_NS_smr39_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR39_NS_smr39_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR39_NS_smr39_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR39_NS_smr39_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR39_NS_smr39_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR39_NS_smr39_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR39_NS_smr39_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr40_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr40_invld_en : 1;
        unsigned int smr40_ptw_qos : 7;
        unsigned int smr40_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR40_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR40_NS_smr40_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR40_NS_smr40_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR40_NS_smr40_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR40_NS_smr40_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR40_NS_smr40_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR40_NS_smr40_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR40_NS_smr40_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR40_NS_smr40_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr41_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr41_invld_en : 1;
        unsigned int smr41_ptw_qos : 7;
        unsigned int smr41_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR41_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR41_NS_smr41_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR41_NS_smr41_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR41_NS_smr41_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR41_NS_smr41_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR41_NS_smr41_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR41_NS_smr41_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR41_NS_smr41_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR41_NS_smr41_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr42_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr42_invld_en : 1;
        unsigned int smr42_ptw_qos : 7;
        unsigned int smr42_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR42_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR42_NS_smr42_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR42_NS_smr42_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR42_NS_smr42_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR42_NS_smr42_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR42_NS_smr42_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR42_NS_smr42_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR42_NS_smr42_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR42_NS_smr42_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr43_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr43_invld_en : 1;
        unsigned int smr43_ptw_qos : 7;
        unsigned int smr43_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR43_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR43_NS_smr43_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR43_NS_smr43_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR43_NS_smr43_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR43_NS_smr43_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR43_NS_smr43_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR43_NS_smr43_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR43_NS_smr43_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR43_NS_smr43_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr44_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr44_invld_en : 1;
        unsigned int smr44_ptw_qos : 7;
        unsigned int smr44_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR44_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR44_NS_smr44_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR44_NS_smr44_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR44_NS_smr44_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR44_NS_smr44_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR44_NS_smr44_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR44_NS_smr44_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR44_NS_smr44_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR44_NS_smr44_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr45_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr45_invld_en : 1;
        unsigned int smr45_ptw_qos : 7;
        unsigned int smr45_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR45_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR45_NS_smr45_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR45_NS_smr45_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR45_NS_smr45_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR45_NS_smr45_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR45_NS_smr45_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR45_NS_smr45_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR45_NS_smr45_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR45_NS_smr45_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr46_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr46_invld_en : 1;
        unsigned int smr46_ptw_qos : 7;
        unsigned int smr46_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR46_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR46_NS_smr46_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR46_NS_smr46_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR46_NS_smr46_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR46_NS_smr46_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR46_NS_smr46_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR46_NS_smr46_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR46_NS_smr46_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR46_NS_smr46_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr47_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr47_invld_en : 1;
        unsigned int smr47_ptw_qos : 7;
        unsigned int smr47_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR47_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR47_NS_smr47_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR47_NS_smr47_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR47_NS_smr47_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR47_NS_smr47_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR47_NS_smr47_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR47_NS_smr47_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR47_NS_smr47_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR47_NS_smr47_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr48_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr48_invld_en : 1;
        unsigned int smr48_ptw_qos : 7;
        unsigned int smr48_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR48_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR48_NS_smr48_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR48_NS_smr48_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR48_NS_smr48_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR48_NS_smr48_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR48_NS_smr48_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR48_NS_smr48_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR48_NS_smr48_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR48_NS_smr48_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr49_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr49_invld_en : 1;
        unsigned int smr49_ptw_qos : 7;
        unsigned int smr49_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR49_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR49_NS_smr49_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR49_NS_smr49_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR49_NS_smr49_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR49_NS_smr49_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR49_NS_smr49_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR49_NS_smr49_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR49_NS_smr49_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR49_NS_smr49_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr50_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr50_invld_en : 1;
        unsigned int smr50_ptw_qos : 7;
        unsigned int smr50_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR50_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR50_NS_smr50_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR50_NS_smr50_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR50_NS_smr50_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR50_NS_smr50_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR50_NS_smr50_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR50_NS_smr50_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR50_NS_smr50_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR50_NS_smr50_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr51_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr51_invld_en : 1;
        unsigned int smr51_ptw_qos : 7;
        unsigned int smr51_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR51_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR51_NS_smr51_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR51_NS_smr51_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR51_NS_smr51_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR51_NS_smr51_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR51_NS_smr51_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR51_NS_smr51_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR51_NS_smr51_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR51_NS_smr51_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr52_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr52_invld_en : 1;
        unsigned int smr52_ptw_qos : 7;
        unsigned int smr52_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR52_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR52_NS_smr52_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR52_NS_smr52_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR52_NS_smr52_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR52_NS_smr52_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR52_NS_smr52_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR52_NS_smr52_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR52_NS_smr52_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR52_NS_smr52_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr53_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr53_invld_en : 1;
        unsigned int smr53_ptw_qos : 7;
        unsigned int smr53_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR53_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR53_NS_smr53_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR53_NS_smr53_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR53_NS_smr53_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR53_NS_smr53_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR53_NS_smr53_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR53_NS_smr53_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR53_NS_smr53_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR53_NS_smr53_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr54_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr54_invld_en : 1;
        unsigned int smr54_ptw_qos : 7;
        unsigned int smr54_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR54_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR54_NS_smr54_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR54_NS_smr54_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR54_NS_smr54_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR54_NS_smr54_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR54_NS_smr54_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR54_NS_smr54_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR54_NS_smr54_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR54_NS_smr54_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr55_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr55_invld_en : 1;
        unsigned int smr55_ptw_qos : 7;
        unsigned int smr55_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR55_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR55_NS_smr55_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR55_NS_smr55_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR55_NS_smr55_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR55_NS_smr55_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR55_NS_smr55_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR55_NS_smr55_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR55_NS_smr55_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR55_NS_smr55_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr56_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr56_invld_en : 1;
        unsigned int smr56_ptw_qos : 7;
        unsigned int smr56_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR56_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR56_NS_smr56_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR56_NS_smr56_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR56_NS_smr56_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR56_NS_smr56_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR56_NS_smr56_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR56_NS_smr56_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR56_NS_smr56_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR56_NS_smr56_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr57_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr57_invld_en : 1;
        unsigned int smr57_ptw_qos : 7;
        unsigned int smr57_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR57_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR57_NS_smr57_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR57_NS_smr57_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR57_NS_smr57_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR57_NS_smr57_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR57_NS_smr57_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR57_NS_smr57_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR57_NS_smr57_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR57_NS_smr57_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr58_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr58_invld_en : 1;
        unsigned int smr58_ptw_qos : 7;
        unsigned int smr58_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR58_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR58_NS_smr58_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR58_NS_smr58_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR58_NS_smr58_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR58_NS_smr58_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR58_NS_smr58_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR58_NS_smr58_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR58_NS_smr58_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR58_NS_smr58_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr59_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr59_invld_en : 1;
        unsigned int smr59_ptw_qos : 7;
        unsigned int smr59_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR59_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR59_NS_smr59_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR59_NS_smr59_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR59_NS_smr59_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR59_NS_smr59_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR59_NS_smr59_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR59_NS_smr59_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR59_NS_smr59_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR59_NS_smr59_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr60_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr60_invld_en : 1;
        unsigned int smr60_ptw_qos : 7;
        unsigned int smr60_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR60_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR60_NS_smr60_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR60_NS_smr60_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR60_NS_smr60_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR60_NS_smr60_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR60_NS_smr60_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR60_NS_smr60_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR60_NS_smr60_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR60_NS_smr60_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr61_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr61_invld_en : 1;
        unsigned int smr61_ptw_qos : 7;
        unsigned int smr61_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR61_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR61_NS_smr61_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR61_NS_smr61_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR61_NS_smr61_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR61_NS_smr61_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR61_NS_smr61_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR61_NS_smr61_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR61_NS_smr61_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR61_NS_smr61_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr62_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr62_invld_en : 1;
        unsigned int smr62_ptw_qos : 7;
        unsigned int smr62_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR62_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR62_NS_smr62_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR62_NS_smr62_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR62_NS_smr62_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR62_NS_smr62_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR62_NS_smr62_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR62_NS_smr62_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR62_NS_smr62_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR62_NS_smr62_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr63_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr63_invld_en : 1;
        unsigned int smr63_ptw_qos : 7;
        unsigned int smr63_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR63_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR63_NS_smr63_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR63_NS_smr63_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR63_NS_smr63_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR63_NS_smr63_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR63_NS_smr63_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR63_NS_smr63_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR63_NS_smr63_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR63_NS_smr63_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr64_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr64_invld_en : 1;
        unsigned int smr64_ptw_qos : 7;
        unsigned int smr64_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR64_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR64_NS_smr64_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR64_NS_smr64_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR64_NS_smr64_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR64_NS_smr64_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR64_NS_smr64_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR64_NS_smr64_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR64_NS_smr64_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR64_NS_smr64_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr65_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr65_invld_en : 1;
        unsigned int smr65_ptw_qos : 7;
        unsigned int smr65_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR65_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR65_NS_smr65_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR65_NS_smr65_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR65_NS_smr65_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR65_NS_smr65_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR65_NS_smr65_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR65_NS_smr65_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR65_NS_smr65_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR65_NS_smr65_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr66_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr66_invld_en : 1;
        unsigned int smr66_ptw_qos : 7;
        unsigned int smr66_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR66_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR66_NS_smr66_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR66_NS_smr66_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR66_NS_smr66_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR66_NS_smr66_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR66_NS_smr66_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR66_NS_smr66_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR66_NS_smr66_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR66_NS_smr66_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr67_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr67_invld_en : 1;
        unsigned int smr67_ptw_qos : 7;
        unsigned int smr67_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR67_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR67_NS_smr67_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR67_NS_smr67_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR67_NS_smr67_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR67_NS_smr67_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR67_NS_smr67_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR67_NS_smr67_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR67_NS_smr67_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR67_NS_smr67_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr68_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr68_invld_en : 1;
        unsigned int smr68_ptw_qos : 7;
        unsigned int smr68_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR68_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR68_NS_smr68_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR68_NS_smr68_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR68_NS_smr68_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR68_NS_smr68_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR68_NS_smr68_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR68_NS_smr68_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR68_NS_smr68_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR68_NS_smr68_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr69_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr69_invld_en : 1;
        unsigned int smr69_ptw_qos : 7;
        unsigned int smr69_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR69_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR69_NS_smr69_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR69_NS_smr69_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR69_NS_smr69_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR69_NS_smr69_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR69_NS_smr69_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR69_NS_smr69_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR69_NS_smr69_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR69_NS_smr69_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr70_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr70_invld_en : 1;
        unsigned int smr70_ptw_qos : 7;
        unsigned int smr70_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR70_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR70_NS_smr70_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR70_NS_smr70_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR70_NS_smr70_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR70_NS_smr70_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR70_NS_smr70_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR70_NS_smr70_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR70_NS_smr70_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR70_NS_smr70_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr71_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr71_invld_en : 1;
        unsigned int smr71_ptw_qos : 7;
        unsigned int smr71_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR71_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR71_NS_smr71_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR71_NS_smr71_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR71_NS_smr71_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR71_NS_smr71_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR71_NS_smr71_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR71_NS_smr71_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR71_NS_smr71_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR71_NS_smr71_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr72_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr72_invld_en : 1;
        unsigned int smr72_ptw_qos : 7;
        unsigned int smr72_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR72_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR72_NS_smr72_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR72_NS_smr72_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR72_NS_smr72_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR72_NS_smr72_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR72_NS_smr72_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR72_NS_smr72_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR72_NS_smr72_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR72_NS_smr72_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr73_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr73_invld_en : 1;
        unsigned int smr73_ptw_qos : 7;
        unsigned int smr73_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR73_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR73_NS_smr73_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR73_NS_smr73_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR73_NS_smr73_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR73_NS_smr73_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR73_NS_smr73_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR73_NS_smr73_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR73_NS_smr73_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR73_NS_smr73_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr74_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr74_invld_en : 1;
        unsigned int smr74_ptw_qos : 7;
        unsigned int smr74_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR74_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR74_NS_smr74_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR74_NS_smr74_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR74_NS_smr74_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR74_NS_smr74_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR74_NS_smr74_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR74_NS_smr74_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR74_NS_smr74_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR74_NS_smr74_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr75_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr75_invld_en : 1;
        unsigned int smr75_ptw_qos : 7;
        unsigned int smr75_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR75_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR75_NS_smr75_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR75_NS_smr75_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR75_NS_smr75_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR75_NS_smr75_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR75_NS_smr75_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR75_NS_smr75_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR75_NS_smr75_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR75_NS_smr75_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr76_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr76_invld_en : 1;
        unsigned int smr76_ptw_qos : 7;
        unsigned int smr76_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR76_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR76_NS_smr76_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR76_NS_smr76_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR76_NS_smr76_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR76_NS_smr76_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR76_NS_smr76_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR76_NS_smr76_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR76_NS_smr76_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR76_NS_smr76_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr77_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr77_invld_en : 1;
        unsigned int smr77_ptw_qos : 7;
        unsigned int smr77_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR77_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR77_NS_smr77_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR77_NS_smr77_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR77_NS_smr77_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR77_NS_smr77_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR77_NS_smr77_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR77_NS_smr77_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR77_NS_smr77_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR77_NS_smr77_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr78_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr78_invld_en : 1;
        unsigned int smr78_ptw_qos : 7;
        unsigned int smr78_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR78_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR78_NS_smr78_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR78_NS_smr78_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR78_NS_smr78_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR78_NS_smr78_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR78_NS_smr78_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR78_NS_smr78_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR78_NS_smr78_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR78_NS_smr78_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr79_bypass : 1;
        unsigned int reserved : 3;
        unsigned int smr79_invld_en : 1;
        unsigned int smr79_ptw_qos : 7;
        unsigned int smr79_offset_addr : 20;
    } reg;
} SOC_VENC_COMN0_SMMU_SMR79_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_SMR79_NS_smr79_bypass_START (0)
#define SOC_VENC_COMN0_SMMU_SMR79_NS_smr79_bypass_END (0)
#define SOC_VENC_COMN0_SMMU_SMR79_NS_smr79_invld_en_START (4)
#define SOC_VENC_COMN0_SMMU_SMR79_NS_smr79_invld_en_END (4)
#define SOC_VENC_COMN0_SMMU_SMR79_NS_smr79_ptw_qos_START (5)
#define SOC_VENC_COMN0_SMMU_SMR79_NS_smr79_ptw_qos_END (11)
#define SOC_VENC_COMN0_SMMU_SMR79_NS_smr79_offset_addr_START (12)
#define SOC_VENC_COMN0_SMMU_SMR79_NS_smr79_offset_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_COMN0_RESERVED_1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr_rld_en0 : 32;
    } reg;
} SOC_VENC_COMN0_SMMU_RLD_EN0_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_RLD_EN0_NS_smr_rld_en0_START (0)
#define SOC_VENC_COMN0_SMMU_RLD_EN0_NS_smr_rld_en0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr_rld_en1 : 32;
    } reg;
} SOC_VENC_COMN0_SMMU_RLD_EN1_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_RLD_EN1_NS_smr_rld_en1_START (0)
#define SOC_VENC_COMN0_SMMU_RLD_EN1_NS_smr_rld_en1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr_rld_en2 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_COMN0_SMMU_RLD_EN2_NS_UNION;
#endif
#define SOC_VENC_COMN0_SMMU_RLD_EN2_NS_smr_rld_en2_START (0)
#define SOC_VENC_COMN0_SMMU_RLD_EN2_NS_smr_rld_en2_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_RESERVED_2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cb_bypass : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VENC_COMN1_SMMU_CB_SCTRL_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_CB_SCTRL_cb_bypass_START (0)
#define SOC_VENC_COMN1_SMMU_CB_SCTRL_cb_bypass_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cb_ttbr0 : 32;
    } reg;
} SOC_VENC_COMN1_SMMU_CB_TTBR0_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_CB_TTBR0_cb_ttbr0_START (0)
#define SOC_VENC_COMN1_SMMU_CB_TTBR0_cb_ttbr0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cb_ttbr1 : 32;
    } reg;
} SOC_VENC_COMN1_SMMU_CB_TTBR1_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_CB_TTBR1_cb_ttbr1_START (0)
#define SOC_VENC_COMN1_SMMU_CB_TTBR1_cb_ttbr1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cb_ttbcr_des : 1;
        unsigned int cb_ttbcr_t0sz : 3;
        unsigned int cb_ttbcr_n : 3;
        unsigned int reserved_0 : 9;
        unsigned int cb_ttbcr_t1sz : 3;
        unsigned int reserved_1 : 13;
    } reg;
} SOC_VENC_COMN1_SMMU_CB_TTBCR_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_CB_TTBCR_cb_ttbcr_des_START (0)
#define SOC_VENC_COMN1_SMMU_CB_TTBCR_cb_ttbcr_des_END (0)
#define SOC_VENC_COMN1_SMMU_CB_TTBCR_cb_ttbcr_t0sz_START (1)
#define SOC_VENC_COMN1_SMMU_CB_TTBCR_cb_ttbcr_t0sz_END (3)
#define SOC_VENC_COMN1_SMMU_CB_TTBCR_cb_ttbcr_n_START (4)
#define SOC_VENC_COMN1_SMMU_CB_TTBCR_cb_ttbcr_n_END (6)
#define SOC_VENC_COMN1_SMMU_CB_TTBCR_cb_ttbcr_t1sz_START (16)
#define SOC_VENC_COMN1_SMMU_CB_TTBCR_cb_ttbcr_t1sz_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int offset_addr_ns : 14;
        unsigned int reserved : 18;
    } reg;
} SOC_VENC_COMN1_SMMU_OFFSET_ADDR_NS_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_OFFSET_ADDR_NS_offset_addr_ns_START (0)
#define SOC_VENC_COMN1_SMMU_OFFSET_ADDR_NS_offset_addr_ns_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cache_all_invalid : 1;
        unsigned int cache_all_level : 2;
        unsigned int reserved : 29;
    } reg;
} SOC_VENC_COMN1_SMMU_SCACHEI_ALL_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_SCACHEI_ALL_cache_all_invalid_START (0)
#define SOC_VENC_COMN1_SMMU_SCACHEI_ALL_cache_all_invalid_END (0)
#define SOC_VENC_COMN1_SMMU_SCACHEI_ALL_cache_all_level_START (1)
#define SOC_VENC_COMN1_SMMU_SCACHEI_ALL_cache_all_level_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cache_l1_invalid : 1;
        unsigned int cache_l1_security : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_VENC_COMN1_SMMU_SCACHEI_L1_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_SCACHEI_L1_cache_l1_invalid_START (0)
#define SOC_VENC_COMN1_SMMU_SCACHEI_L1_cache_l1_invalid_END (0)
#define SOC_VENC_COMN1_SMMU_SCACHEI_L1_cache_l1_security_START (1)
#define SOC_VENC_COMN1_SMMU_SCACHEI_L1_cache_l1_security_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cache_l2l3_invalid : 1;
        unsigned int cache_l2l3_strmid : 15;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_COMN1_SMMU_SCACHEI_L2L3_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_SCACHEI_L2L3_cache_l2l3_invalid_START (0)
#define SOC_VENC_COMN1_SMMU_SCACHEI_L2L3_cache_l2l3_invalid_END (0)
#define SOC_VENC_COMN1_SMMU_SCACHEI_L2L3_cache_l2l3_strmid_START (1)
#define SOC_VENC_COMN1_SMMU_SCACHEI_L2L3_cache_l2l3_strmid_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fama_sdes_msb : 7;
        unsigned int fama_chn_sel : 1;
        unsigned int fama_bps_msb : 6;
        unsigned int reserved : 18;
    } reg;
} SOC_VENC_COMN1_SMMU_FAMA_CTRL0_NS_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_FAMA_CTRL0_NS_fama_sdes_msb_START (0)
#define SOC_VENC_COMN1_SMMU_FAMA_CTRL0_NS_fama_sdes_msb_END (6)
#define SOC_VENC_COMN1_SMMU_FAMA_CTRL0_NS_fama_chn_sel_START (7)
#define SOC_VENC_COMN1_SMMU_FAMA_CTRL0_NS_fama_chn_sel_END (7)
#define SOC_VENC_COMN1_SMMU_FAMA_CTRL0_NS_fama_bps_msb_START (8)
#define SOC_VENC_COMN1_SMMU_FAMA_CTRL0_NS_fama_bps_msb_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fama_ptw_msb : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_VENC_COMN1_SMMU_FAMA_CTRL1_NS_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_FAMA_CTRL1_NS_fama_ptw_msb_START (0)
#define SOC_VENC_COMN1_SMMU_FAMA_CTRL1_NS_fama_ptw_msb_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_COMN1_RESERVED_1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int msb_errrd : 7;
        unsigned int msb_errwr : 7;
        unsigned int msb_ova : 7;
        unsigned int reserved : 11;
    } reg;
} SOC_VENC_COMN1_SMMU_ADDR_MSB_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_ADDR_MSB_msb_errrd_START (0)
#define SOC_VENC_COMN1_SMMU_ADDR_MSB_msb_errrd_END (6)
#define SOC_VENC_COMN1_SMMU_ADDR_MSB_msb_errwr_START (7)
#define SOC_VENC_COMN1_SMMU_ADDR_MSB_msb_errwr_END (13)
#define SOC_VENC_COMN1_SMMU_ADDR_MSB_msb_ova_START (14)
#define SOC_VENC_COMN1_SMMU_ADDR_MSB_msb_ova_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int err_rd_addr : 32;
    } reg;
} SOC_VENC_COMN1_SMMU_ERR_RDADDR_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_ERR_RDADDR_err_rd_addr_START (0)
#define SOC_VENC_COMN1_SMMU_ERR_RDADDR_err_rd_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int err_wr_addr : 32;
    } reg;
} SOC_VENC_COMN1_SMMU_ERR_WRADDR_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_ERR_WRADDR_err_wr_addr_START (0)
#define SOC_VENC_COMN1_SMMU_ERR_WRADDR_err_wr_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_COMN1_RESERVED_2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fault_addr_tcu : 32;
    } reg;
} SOC_VENC_COMN1_SMMU_FAULT_ADDR_TCU_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_FAULT_ADDR_TCU_fault_addr_tcu_START (0)
#define SOC_VENC_COMN1_SMMU_FAULT_ADDR_TCU_fault_addr_tcu_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fault_index_id_tcu : 16;
        unsigned int fault_strm_id_tcu : 16;
    } reg;
} SOC_VENC_COMN1_SMMU_FAULT_ID_TCU_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TCU_fault_index_id_tcu_START (0)
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TCU_fault_index_id_tcu_END (15)
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TCU_fault_strm_id_tcu_START (16)
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TCU_fault_strm_id_tcu_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_COMN1_RESERVED_3_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fault_addr_tbu0 : 32;
    } reg;
} SOC_VENC_COMN1_SMMU_FAULT_ADDR_TBU0_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_FAULT_ADDR_TBU0_fault_addr_tbu0_START (0)
#define SOC_VENC_COMN1_SMMU_FAULT_ADDR_TBU0_fault_addr_tbu0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fault_index_id_tbu0 : 16;
        unsigned int fault_strm_id_tbu0 : 16;
    } reg;
} SOC_VENC_COMN1_SMMU_FAULT_ID_TBU0_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TBU0_fault_index_id_tbu0_START (0)
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TBU0_fault_index_id_tbu0_END (15)
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TBU0_fault_strm_id_tbu0_START (16)
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TBU0_fault_strm_id_tbu0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fault_tlbmiss_err_tbu0 : 2;
        unsigned int fault_permis_err_tbu0 : 2;
        unsigned int fautl_ext_err_tbu0 : 2;
        unsigned int fault_ext_err_id_tbu0 : 10;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_COMN1_SMMU_FAULT_INFO0_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_FAULT_INFO0_fault_tlbmiss_err_tbu0_START (0)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO0_fault_tlbmiss_err_tbu0_END (1)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO0_fault_permis_err_tbu0_START (2)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO0_fault_permis_err_tbu0_END (3)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO0_fautl_ext_err_tbu0_START (4)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO0_fautl_ext_err_tbu0_END (5)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO0_fault_ext_err_id_tbu0_START (6)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO0_fault_ext_err_id_tbu0_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_COMN1_RESERVED_4_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fault_addr_tbu1 : 32;
    } reg;
} SOC_VENC_COMN1_SMMU_FAULT_ADDR_TBU1_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_FAULT_ADDR_TBU1_fault_addr_tbu1_START (0)
#define SOC_VENC_COMN1_SMMU_FAULT_ADDR_TBU1_fault_addr_tbu1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fault_index_id_tbu1 : 16;
        unsigned int fault_strm_id_tbu1 : 16;
    } reg;
} SOC_VENC_COMN1_SMMU_FAULT_ID_TBU1_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TBU1_fault_index_id_tbu1_START (0)
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TBU1_fault_index_id_tbu1_END (15)
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TBU1_fault_strm_id_tbu1_START (16)
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TBU1_fault_strm_id_tbu1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fault_tlbmiss_err_tbu1 : 2;
        unsigned int fault_permis_err_tbu1 : 2;
        unsigned int fautl_ext_err_tbu1 : 2;
        unsigned int fault_ext_err_id_tbu1 : 10;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_COMN1_SMMU_FAULT_INFO1_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_FAULT_INFO1_fault_tlbmiss_err_tbu1_START (0)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO1_fault_tlbmiss_err_tbu1_END (1)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO1_fault_permis_err_tbu1_START (2)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO1_fault_permis_err_tbu1_END (3)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO1_fautl_ext_err_tbu1_START (4)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO1_fautl_ext_err_tbu1_END (5)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO1_fault_ext_err_id_tbu1_START (6)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO1_fault_ext_err_id_tbu1_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_COMN1_RESERVED_5_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fault_addr_tbu2 : 32;
    } reg;
} SOC_VENC_COMN1_SMMU_FAULT_ADDR_TBU2_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_FAULT_ADDR_TBU2_fault_addr_tbu2_START (0)
#define SOC_VENC_COMN1_SMMU_FAULT_ADDR_TBU2_fault_addr_tbu2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fault_index_id_tbu2 : 16;
        unsigned int fault_strm_id_tbu2 : 16;
    } reg;
} SOC_VENC_COMN1_SMMU_FAULT_ID_TBU2_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TBU2_fault_index_id_tbu2_START (0)
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TBU2_fault_index_id_tbu2_END (15)
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TBU2_fault_strm_id_tbu2_START (16)
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TBU2_fault_strm_id_tbu2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fault_tlbmiss_err_tbu2 : 2;
        unsigned int fault_permis_err_tbu2 : 2;
        unsigned int fautl_ext_err_tbu2 : 2;
        unsigned int fault_ext_err_id_tbu2 : 10;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_COMN1_SMMU_FAULT_INFO2_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_FAULT_INFO2_fault_tlbmiss_err_tbu2_START (0)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO2_fault_tlbmiss_err_tbu2_END (1)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO2_fault_permis_err_tbu2_START (2)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO2_fault_permis_err_tbu2_END (3)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO2_fautl_ext_err_tbu2_START (4)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO2_fautl_ext_err_tbu2_END (5)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO2_fault_ext_err_id_tbu2_START (6)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO2_fault_ext_err_id_tbu2_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_COMN1_RESERVED_6_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fault_addr_tbu3 : 32;
    } reg;
} SOC_VENC_COMN1_SMMU_FAULT_ADDR_TBU3_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_FAULT_ADDR_TBU3_fault_addr_tbu3_START (0)
#define SOC_VENC_COMN1_SMMU_FAULT_ADDR_TBU3_fault_addr_tbu3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fault_index_id_tbu3 : 16;
        unsigned int fault_strm_id_tbu3 : 16;
    } reg;
} SOC_VENC_COMN1_SMMU_FAULT_ID_TBU3_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TBU3_fault_index_id_tbu3_START (0)
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TBU3_fault_index_id_tbu3_END (15)
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TBU3_fault_strm_id_tbu3_START (16)
#define SOC_VENC_COMN1_SMMU_FAULT_ID_TBU3_fault_strm_id_tbu3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fault_tlbmiss_err_tbu3 : 2;
        unsigned int fault_permis_err_tbu3 : 2;
        unsigned int fautl_ext_err_tbu3 : 2;
        unsigned int fault_ext_err_id_tbu3 : 10;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_COMN1_SMMU_FAULT_INFO3_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_FAULT_INFO3_fault_tlbmiss_err_tbu3_START (0)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO3_fault_tlbmiss_err_tbu3_END (1)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO3_fault_permis_err_tbu3_START (2)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO3_fault_permis_err_tbu3_END (3)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO3_fautl_ext_err_tbu3_START (4)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO3_fautl_ext_err_tbu3_END (5)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO3_fault_ext_err_id_tbu3_START (6)
#define SOC_VENC_COMN1_SMMU_FAULT_INFO3_fault_ext_err_id_tbu3_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_COMN1_RESERVED_7_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbg_tlbword_pointer : 3;
        unsigned int dbg_tlbentry_pointer : 13;
        unsigned int reserved_0 : 14;
        unsigned int dbg_tlb_type : 1;
        unsigned int reserved_1 : 1;
    } reg;
} SOC_VENC_COMN1_SMMU_DBGRPTR_TLB_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_DBGRPTR_TLB_dbg_tlbword_pointer_START (0)
#define SOC_VENC_COMN1_SMMU_DBGRPTR_TLB_dbg_tlbword_pointer_END (2)
#define SOC_VENC_COMN1_SMMU_DBGRPTR_TLB_dbg_tlbentry_pointer_START (3)
#define SOC_VENC_COMN1_SMMU_DBGRPTR_TLB_dbg_tlbentry_pointer_END (15)
#define SOC_VENC_COMN1_SMMU_DBGRPTR_TLB_dbg_tlb_type_START (30)
#define SOC_VENC_COMN1_SMMU_DBGRPTR_TLB_dbg_tlb_type_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbg_tlb_rdata : 26;
        unsigned int reserved : 6;
    } reg;
} SOC_VENC_COMN1_SMMU_DBGRDATA_TLB_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_DBGRDATA_TLB_dbg_tlb_rdata_START (0)
#define SOC_VENC_COMN1_SMMU_DBGRDATA_TLB_dbg_tlb_rdata_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbg_cache_level : 2;
        unsigned int dbg_cache_l1_pointer : 2;
        unsigned int dbg_cache_l1_ns : 1;
        unsigned int dbg_cache_l2_strmid : 11;
        unsigned int reserved_0 : 15;
        unsigned int reserved_1 : 1;
    } reg;
} SOC_VENC_COMN1_SMMU_DBGRPTR_CACHE_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_DBGRPTR_CACHE_dbg_cache_level_START (0)
#define SOC_VENC_COMN1_SMMU_DBGRPTR_CACHE_dbg_cache_level_END (1)
#define SOC_VENC_COMN1_SMMU_DBGRPTR_CACHE_dbg_cache_l1_pointer_START (2)
#define SOC_VENC_COMN1_SMMU_DBGRPTR_CACHE_dbg_cache_l1_pointer_END (3)
#define SOC_VENC_COMN1_SMMU_DBGRPTR_CACHE_dbg_cache_l1_ns_START (4)
#define SOC_VENC_COMN1_SMMU_DBGRPTR_CACHE_dbg_cache_l1_ns_END (4)
#define SOC_VENC_COMN1_SMMU_DBGRPTR_CACHE_dbg_cache_l2_strmid_START (5)
#define SOC_VENC_COMN1_SMMU_DBGRPTR_CACHE_dbg_cache_l2_strmid_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbg_cache_rdata0 : 24;
        unsigned int reserved : 8;
    } reg;
} SOC_VENC_COMN1_SMMU_DBGRDATA0_CACHE_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_DBGRDATA0_CACHE_dbg_cache_rdata0_START (0)
#define SOC_VENC_COMN1_SMMU_DBGRDATA0_CACHE_dbg_cache_rdata0_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbg_cache_rdata1 : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_VENC_COMN1_SMMU_DBGRDATA1_CACHE_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_DBGRDATA1_CACHE_dbg_cache_rdata1_START (0)
#define SOC_VENC_COMN1_SMMU_DBGRDATA1_CACHE_dbg_cache_rdata1_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbg_axilock_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VENC_COMN1_SMMU_DBGAXI_CTRL_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_DBGAXI_CTRL_dbg_axilock_en_START (0)
#define SOC_VENC_COMN1_SMMU_DBGAXI_CTRL_dbg_axilock_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int override_va : 32;
    } reg;
} SOC_VENC_COMN1_SMMU_OVA_ADDR_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_OVA_ADDR_override_va_START (0)
#define SOC_VENC_COMN1_SMMU_OVA_ADDR_override_va_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int override_acquire_pa : 22;
        unsigned int override_pa_done : 1;
        unsigned int reserved : 9;
    } reg;
} SOC_VENC_COMN1_SMMU_OPA_ADDR_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_OPA_ADDR_override_acquire_pa_START (0)
#define SOC_VENC_COMN1_SMMU_OPA_ADDR_override_acquire_pa_END (21)
#define SOC_VENC_COMN1_SMMU_OPA_ADDR_override_pa_done_START (22)
#define SOC_VENC_COMN1_SMMU_OPA_ADDR_override_pa_done_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int override_va_cfg : 1;
        unsigned int reserved : 1;
        unsigned int override_va_type : 1;
        unsigned int override_va_indexid : 13;
        unsigned int override_va_strmid : 12;
        unsigned int override_tbu_num : 4;
    } reg;
} SOC_VENC_COMN1_SMMU_OVA_CTRL_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_OVA_CTRL_override_va_cfg_START (0)
#define SOC_VENC_COMN1_SMMU_OVA_CTRL_override_va_cfg_END (0)
#define SOC_VENC_COMN1_SMMU_OVA_CTRL_override_va_type_START (2)
#define SOC_VENC_COMN1_SMMU_OVA_CTRL_override_va_type_END (2)
#define SOC_VENC_COMN1_SMMU_OVA_CTRL_override_va_indexid_START (3)
#define SOC_VENC_COMN1_SMMU_OVA_CTRL_override_va_indexid_END (15)
#define SOC_VENC_COMN1_SMMU_OVA_CTRL_override_va_strmid_START (16)
#define SOC_VENC_COMN1_SMMU_OVA_CTRL_override_va_strmid_END (27)
#define SOC_VENC_COMN1_SMMU_OVA_CTRL_override_tbu_num_START (28)
#define SOC_VENC_COMN1_SMMU_OVA_CTRL_override_tbu_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int override_pref_addr : 32;
    } reg;
} SOC_VENC_COMN1_SMMU_OPREF_ADDR_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_OPREF_ADDR_override_pref_addr_START (0)
#define SOC_VENC_COMN1_SMMU_OPREF_ADDR_override_pref_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int override_pref_cfg : 1;
        unsigned int reserved : 1;
        unsigned int override_pref_type : 1;
        unsigned int override_pref_initial : 1;
        unsigned int override_pref_indexid : 12;
        unsigned int override_pref_strmid : 16;
    } reg;
} SOC_VENC_COMN1_SMMU_OPREF_CTRL_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_OPREF_CTRL_override_pref_cfg_START (0)
#define SOC_VENC_COMN1_SMMU_OPREF_CTRL_override_pref_cfg_END (0)
#define SOC_VENC_COMN1_SMMU_OPREF_CTRL_override_pref_type_START (2)
#define SOC_VENC_COMN1_SMMU_OPREF_CTRL_override_pref_type_END (2)
#define SOC_VENC_COMN1_SMMU_OPREF_CTRL_override_pref_initial_START (3)
#define SOC_VENC_COMN1_SMMU_OPREF_CTRL_override_pref_initial_END (3)
#define SOC_VENC_COMN1_SMMU_OPREF_CTRL_override_pref_indexid_START (4)
#define SOC_VENC_COMN1_SMMU_OPREF_CTRL_override_pref_indexid_END (15)
#define SOC_VENC_COMN1_SMMU_OPREF_CTRL_override_pref_strmid_START (16)
#define SOC_VENC_COMN1_SMMU_OPREF_CTRL_override_pref_strmid_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int override_pref_cnt : 32;
    } reg;
} SOC_VENC_COMN1_SMMU_OPREF_CNT_UNION;
#endif
#define SOC_VENC_COMN1_SMMU_OPREF_CNT_override_pref_cnt_START (0)
#define SOC_VENC_COMN1_SMMU_OPREF_CNT_override_pref_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_COMN1_RESERVED_8_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_COMN2_RESERVED_1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr0_nscfg : 1;
        unsigned int smr0_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr0_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR0_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR0_S_smr0_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR0_S_smr0_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR0_S_smr0_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR0_S_smr0_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR0_S_smr0_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR0_S_smr0_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr1_nscfg : 1;
        unsigned int smr1_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr1_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR1_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR1_S_smr1_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR1_S_smr1_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR1_S_smr1_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR1_S_smr1_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR1_S_smr1_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR1_S_smr1_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr2_nscfg : 1;
        unsigned int smr2_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr2_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR2_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR2_S_smr2_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR2_S_smr2_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR2_S_smr2_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR2_S_smr2_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR2_S_smr2_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR2_S_smr2_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr3_nscfg : 1;
        unsigned int smr3_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr3_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR3_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR3_S_smr3_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR3_S_smr3_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR3_S_smr3_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR3_S_smr3_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR3_S_smr3_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR3_S_smr3_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr4_nscfg : 1;
        unsigned int smr4_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr4_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR4_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR4_S_smr4_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR4_S_smr4_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR4_S_smr4_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR4_S_smr4_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR4_S_smr4_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR4_S_smr4_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr5_nscfg : 1;
        unsigned int smr5_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr5_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR5_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR5_S_smr5_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR5_S_smr5_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR5_S_smr5_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR5_S_smr5_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR5_S_smr5_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR5_S_smr5_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr6_nscfg : 1;
        unsigned int smr6_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr6_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR6_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR6_S_smr6_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR6_S_smr6_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR6_S_smr6_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR6_S_smr6_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR6_S_smr6_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR6_S_smr6_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr7_nscfg : 1;
        unsigned int smr7_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr7_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR7_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR7_S_smr7_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR7_S_smr7_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR7_S_smr7_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR7_S_smr7_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR7_S_smr7_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR7_S_smr7_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr8_nscfg : 1;
        unsigned int smr8_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr8_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR8_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR8_S_smr8_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR8_S_smr8_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR8_S_smr8_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR8_S_smr8_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR8_S_smr8_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR8_S_smr8_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr9_nscfg : 1;
        unsigned int smr9_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr9_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR9_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR9_S_smr9_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR9_S_smr9_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR9_S_smr9_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR9_S_smr9_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR9_S_smr9_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR9_S_smr9_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr10_nscfg : 1;
        unsigned int smr10_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr10_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR10_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR10_S_smr10_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR10_S_smr10_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR10_S_smr10_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR10_S_smr10_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR10_S_smr10_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR10_S_smr10_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr11_nscfg : 1;
        unsigned int smr11_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr11_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR11_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR11_S_smr11_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR11_S_smr11_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR11_S_smr11_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR11_S_smr11_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR11_S_smr11_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR11_S_smr11_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr12_nscfg : 1;
        unsigned int smr12_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr12_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR12_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR12_S_smr12_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR12_S_smr12_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR12_S_smr12_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR12_S_smr12_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR12_S_smr12_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR12_S_smr12_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr13_nscfg : 1;
        unsigned int smr13_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr13_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR13_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR13_S_smr13_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR13_S_smr13_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR13_S_smr13_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR13_S_smr13_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR13_S_smr13_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR13_S_smr13_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr14_nscfg : 1;
        unsigned int smr14_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr14_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR14_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR14_S_smr14_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR14_S_smr14_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR14_S_smr14_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR14_S_smr14_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR14_S_smr14_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR14_S_smr14_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr15_nscfg : 1;
        unsigned int smr15_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr15_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR15_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR15_S_smr15_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR15_S_smr15_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR15_S_smr15_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR15_S_smr15_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR15_S_smr15_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR15_S_smr15_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr16_nscfg : 1;
        unsigned int smr16_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr16_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR16_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR16_S_smr16_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR16_S_smr16_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR16_S_smr16_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR16_S_smr16_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR16_S_smr16_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR16_S_smr16_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr17_nscfg : 1;
        unsigned int smr17_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr17_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR17_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR17_S_smr17_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR17_S_smr17_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR17_S_smr17_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR17_S_smr17_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR17_S_smr17_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR17_S_smr17_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr18_nscfg : 1;
        unsigned int smr18_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr18_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR18_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR18_S_smr18_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR18_S_smr18_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR18_S_smr18_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR18_S_smr18_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR18_S_smr18_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR18_S_smr18_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr19_nscfg : 1;
        unsigned int smr19_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr19_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR19_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR19_S_smr19_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR19_S_smr19_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR19_S_smr19_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR19_S_smr19_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR19_S_smr19_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR19_S_smr19_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr20_nscfg : 1;
        unsigned int smr20_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr20_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR20_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR20_S_smr20_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR20_S_smr20_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR20_S_smr20_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR20_S_smr20_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR20_S_smr20_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR20_S_smr20_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr21_nscfg : 1;
        unsigned int smr21_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr21_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR21_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR21_S_smr21_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR21_S_smr21_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR21_S_smr21_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR21_S_smr21_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR21_S_smr21_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR21_S_smr21_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr22_nscfg : 1;
        unsigned int smr22_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr22_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR22_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR22_S_smr22_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR22_S_smr22_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR22_S_smr22_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR22_S_smr22_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR22_S_smr22_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR22_S_smr22_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr23_nscfg : 1;
        unsigned int smr23_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr23_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR23_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR23_S_smr23_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR23_S_smr23_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR23_S_smr23_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR23_S_smr23_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR23_S_smr23_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR23_S_smr23_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr24_nscfg : 1;
        unsigned int smr24_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr24_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR24_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR24_S_smr24_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR24_S_smr24_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR24_S_smr24_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR24_S_smr24_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR24_S_smr24_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR24_S_smr24_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr25_nscfg : 1;
        unsigned int smr25_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr25_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR25_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR25_S_smr25_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR25_S_smr25_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR25_S_smr25_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR25_S_smr25_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR25_S_smr25_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR25_S_smr25_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr26_nscfg : 1;
        unsigned int smr26_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr26_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR26_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR26_S_smr26_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR26_S_smr26_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR26_S_smr26_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR26_S_smr26_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR26_S_smr26_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR26_S_smr26_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr27_nscfg : 1;
        unsigned int smr27_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr27_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR27_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR27_S_smr27_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR27_S_smr27_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR27_S_smr27_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR27_S_smr27_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR27_S_smr27_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR27_S_smr27_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr28_nscfg : 1;
        unsigned int smr28_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr28_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR28_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR28_S_smr28_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR28_S_smr28_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR28_S_smr28_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR28_S_smr28_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR28_S_smr28_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR28_S_smr28_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr29_nscfg : 1;
        unsigned int smr29_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr29_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR29_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR29_S_smr29_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR29_S_smr29_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR29_S_smr29_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR29_S_smr29_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR29_S_smr29_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR29_S_smr29_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr30_nscfg : 1;
        unsigned int smr30_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr30_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR30_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR30_S_smr30_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR30_S_smr30_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR30_S_smr30_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR30_S_smr30_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR30_S_smr30_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR30_S_smr30_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr31_nscfg : 1;
        unsigned int smr31_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr31_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR31_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR31_S_smr31_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR31_S_smr31_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR31_S_smr31_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR31_S_smr31_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR31_S_smr31_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR31_S_smr31_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr32_nscfg : 1;
        unsigned int smr32_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr32_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR32_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR32_S_smr32_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR32_S_smr32_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR32_S_smr32_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR32_S_smr32_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR32_S_smr32_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR32_S_smr32_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr33_nscfg : 1;
        unsigned int smr33_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr33_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR33_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR33_S_smr33_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR33_S_smr33_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR33_S_smr33_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR33_S_smr33_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR33_S_smr33_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR33_S_smr33_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr34_nscfg : 1;
        unsigned int smr34_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr34_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR34_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR34_S_smr34_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR34_S_smr34_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR34_S_smr34_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR34_S_smr34_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR34_S_smr34_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR34_S_smr34_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr35_nscfg : 1;
        unsigned int smr35_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr35_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR35_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR35_S_smr35_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR35_S_smr35_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR35_S_smr35_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR35_S_smr35_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR35_S_smr35_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR35_S_smr35_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr36_nscfg : 1;
        unsigned int smr36_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr36_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR36_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR36_S_smr36_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR36_S_smr36_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR36_S_smr36_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR36_S_smr36_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR36_S_smr36_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR36_S_smr36_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr37_nscfg : 1;
        unsigned int smr37_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr37_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR37_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR37_S_smr37_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR37_S_smr37_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR37_S_smr37_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR37_S_smr37_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR37_S_smr37_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR37_S_smr37_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr38_nscfg : 1;
        unsigned int smr38_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr38_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR38_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR38_S_smr38_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR38_S_smr38_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR38_S_smr38_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR38_S_smr38_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR38_S_smr38_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR38_S_smr38_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr39_nscfg : 1;
        unsigned int smr39_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr39_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR39_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR39_S_smr39_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR39_S_smr39_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR39_S_smr39_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR39_S_smr39_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR39_S_smr39_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR39_S_smr39_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr40_nscfg : 1;
        unsigned int smr40_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr40_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR40_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR40_S_smr40_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR40_S_smr40_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR40_S_smr40_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR40_S_smr40_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR40_S_smr40_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR40_S_smr40_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr41_nscfg : 1;
        unsigned int smr41_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr41_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR41_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR41_S_smr41_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR41_S_smr41_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR41_S_smr41_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR41_S_smr41_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR41_S_smr41_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR41_S_smr41_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr42_nscfg : 1;
        unsigned int smr42_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr42_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR42_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR42_S_smr42_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR42_S_smr42_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR42_S_smr42_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR42_S_smr42_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR42_S_smr42_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR42_S_smr42_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr43_nscfg : 1;
        unsigned int smr43_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr43_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR43_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR43_S_smr43_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR43_S_smr43_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR43_S_smr43_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR43_S_smr43_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR43_S_smr43_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR43_S_smr43_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr44_nscfg : 1;
        unsigned int smr44_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr44_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR44_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR44_S_smr44_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR44_S_smr44_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR44_S_smr44_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR44_S_smr44_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR44_S_smr44_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR44_S_smr44_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr45_nscfg : 1;
        unsigned int smr45_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr45_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR45_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR45_S_smr45_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR45_S_smr45_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR45_S_smr45_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR45_S_smr45_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR45_S_smr45_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR45_S_smr45_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr46_nscfg : 1;
        unsigned int smr46_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr46_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR46_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR46_S_smr46_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR46_S_smr46_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR46_S_smr46_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR46_S_smr46_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR46_S_smr46_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR46_S_smr46_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr47_nscfg : 1;
        unsigned int smr47_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr47_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR47_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR47_S_smr47_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR47_S_smr47_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR47_S_smr47_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR47_S_smr47_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR47_S_smr47_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR47_S_smr47_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr48_nscfg : 1;
        unsigned int smr48_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr48_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR48_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR48_S_smr48_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR48_S_smr48_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR48_S_smr48_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR48_S_smr48_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR48_S_smr48_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR48_S_smr48_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr49_nscfg : 1;
        unsigned int smr49_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr49_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR49_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR49_S_smr49_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR49_S_smr49_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR49_S_smr49_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR49_S_smr49_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR49_S_smr49_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR49_S_smr49_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr50_nscfg : 1;
        unsigned int smr50_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr50_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR50_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR50_S_smr50_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR50_S_smr50_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR50_S_smr50_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR50_S_smr50_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR50_S_smr50_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR50_S_smr50_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr51_nscfg : 1;
        unsigned int smr51_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr51_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR51_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR51_S_smr51_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR51_S_smr51_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR51_S_smr51_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR51_S_smr51_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR51_S_smr51_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR51_S_smr51_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr52_nscfg : 1;
        unsigned int smr52_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr52_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR52_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR52_S_smr52_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR52_S_smr52_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR52_S_smr52_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR52_S_smr52_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR52_S_smr52_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR52_S_smr52_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr53_nscfg : 1;
        unsigned int smr53_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr53_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR53_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR53_S_smr53_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR53_S_smr53_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR53_S_smr53_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR53_S_smr53_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR53_S_smr53_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR53_S_smr53_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr54_nscfg : 1;
        unsigned int smr54_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr54_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR54_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR54_S_smr54_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR54_S_smr54_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR54_S_smr54_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR54_S_smr54_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR54_S_smr54_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR54_S_smr54_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr55_nscfg : 1;
        unsigned int smr55_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr55_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR55_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR55_S_smr55_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR55_S_smr55_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR55_S_smr55_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR55_S_smr55_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR55_S_smr55_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR55_S_smr55_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr56_nscfg : 1;
        unsigned int smr56_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr56_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR56_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR56_S_smr56_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR56_S_smr56_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR56_S_smr56_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR56_S_smr56_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR56_S_smr56_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR56_S_smr56_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr57_nscfg : 1;
        unsigned int smr57_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr57_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR57_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR57_S_smr57_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR57_S_smr57_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR57_S_smr57_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR57_S_smr57_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR57_S_smr57_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR57_S_smr57_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr58_nscfg : 1;
        unsigned int smr58_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr58_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR58_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR58_S_smr58_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR58_S_smr58_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR58_S_smr58_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR58_S_smr58_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR58_S_smr58_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR58_S_smr58_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr59_nscfg : 1;
        unsigned int smr59_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr59_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR59_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR59_S_smr59_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR59_S_smr59_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR59_S_smr59_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR59_S_smr59_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR59_S_smr59_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR59_S_smr59_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr60_nscfg : 1;
        unsigned int smr60_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr60_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR60_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR60_S_smr60_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR60_S_smr60_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR60_S_smr60_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR60_S_smr60_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR60_S_smr60_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR60_S_smr60_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr61_nscfg : 1;
        unsigned int smr61_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr61_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR61_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR61_S_smr61_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR61_S_smr61_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR61_S_smr61_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR61_S_smr61_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR61_S_smr61_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR61_S_smr61_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr62_nscfg : 1;
        unsigned int smr62_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr62_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR62_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR62_S_smr62_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR62_S_smr62_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR62_S_smr62_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR62_S_smr62_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR62_S_smr62_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR62_S_smr62_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr63_nscfg : 1;
        unsigned int smr63_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr63_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR63_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR63_S_smr63_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR63_S_smr63_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR63_S_smr63_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR63_S_smr63_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR63_S_smr63_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR63_S_smr63_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr64_nscfg : 1;
        unsigned int smr64_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr64_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR64_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR64_S_smr64_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR64_S_smr64_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR64_S_smr64_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR64_S_smr64_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR64_S_smr64_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR64_S_smr64_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr65_nscfg : 1;
        unsigned int smr65_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr65_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR65_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR65_S_smr65_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR65_S_smr65_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR65_S_smr65_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR65_S_smr65_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR65_S_smr65_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR65_S_smr65_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr66_nscfg : 1;
        unsigned int smr66_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr66_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR66_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR66_S_smr66_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR66_S_smr66_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR66_S_smr66_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR66_S_smr66_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR66_S_smr66_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR66_S_smr66_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr67_nscfg : 1;
        unsigned int smr67_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr67_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR67_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR67_S_smr67_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR67_S_smr67_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR67_S_smr67_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR67_S_smr67_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR67_S_smr67_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR67_S_smr67_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr68_nscfg : 1;
        unsigned int smr68_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr68_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR68_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR68_S_smr68_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR68_S_smr68_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR68_S_smr68_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR68_S_smr68_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR68_S_smr68_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR68_S_smr68_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr69_nscfg : 1;
        unsigned int smr69_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr69_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR69_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR69_S_smr69_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR69_S_smr69_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR69_S_smr69_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR69_S_smr69_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR69_S_smr69_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR69_S_smr69_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr70_nscfg : 1;
        unsigned int smr70_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr70_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR70_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR70_S_smr70_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR70_S_smr70_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR70_S_smr70_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR70_S_smr70_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR70_S_smr70_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR70_S_smr70_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr71_nscfg : 1;
        unsigned int smr71_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr71_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR71_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR71_S_smr71_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR71_S_smr71_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR71_S_smr71_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR71_S_smr71_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR71_S_smr71_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR71_S_smr71_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr72_nscfg : 1;
        unsigned int smr72_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr72_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR72_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR72_S_smr72_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR72_S_smr72_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR72_S_smr72_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR72_S_smr72_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR72_S_smr72_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR72_S_smr72_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr73_nscfg : 1;
        unsigned int smr73_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr73_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR73_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR73_S_smr73_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR73_S_smr73_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR73_S_smr73_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR73_S_smr73_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR73_S_smr73_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR73_S_smr73_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr74_nscfg : 1;
        unsigned int smr74_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr74_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR74_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR74_S_smr74_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR74_S_smr74_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR74_S_smr74_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR74_S_smr74_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR74_S_smr74_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR74_S_smr74_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr75_nscfg : 1;
        unsigned int smr75_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr75_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR75_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR75_S_smr75_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR75_S_smr75_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR75_S_smr75_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR75_S_smr75_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR75_S_smr75_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR75_S_smr75_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr76_nscfg : 1;
        unsigned int smr76_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr76_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR76_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR76_S_smr76_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR76_S_smr76_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR76_S_smr76_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR76_S_smr76_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR76_S_smr76_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR76_S_smr76_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr77_nscfg : 1;
        unsigned int smr77_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr77_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR77_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR77_S_smr77_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR77_S_smr77_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR77_S_smr77_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR77_S_smr77_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR77_S_smr77_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR77_S_smr77_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr78_nscfg : 1;
        unsigned int smr78_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr78_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR78_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR78_S_smr78_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR78_S_smr78_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR78_S_smr78_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR78_S_smr78_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR78_S_smr78_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR78_S_smr78_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr79_nscfg : 1;
        unsigned int smr79_nscfg_en : 1;
        unsigned int reserved : 10;
        unsigned int smr79_offset_addr_s : 20;
    } reg;
} SOC_VENC_COMN2_SMMU_SMR79_S_UNION;
#endif
#define SOC_VENC_COMN2_SMMU_SMR79_S_smr79_nscfg_START (0)
#define SOC_VENC_COMN2_SMMU_SMR79_S_smr79_nscfg_END (0)
#define SOC_VENC_COMN2_SMMU_SMR79_S_smr79_nscfg_en_START (1)
#define SOC_VENC_COMN2_SMMU_SMR79_S_smr79_nscfg_en_END (1)
#define SOC_VENC_COMN2_SMMU_SMR79_S_smr79_offset_addr_s_START (12)
#define SOC_VENC_COMN2_SMMU_SMR79_S_smr79_offset_addr_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_COMN3_RESERVED_0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr_rld_en0_s : 32;
    } reg;
} SOC_VENC_COMN3_SMMU_RLD_EN0_S_UNION;
#endif
#define SOC_VENC_COMN3_SMMU_RLD_EN0_S_smr_rld_en0_s_START (0)
#define SOC_VENC_COMN3_SMMU_RLD_EN0_S_smr_rld_en0_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr_rld_en1_s : 32;
    } reg;
} SOC_VENC_COMN3_SMMU_RLD_EN1_S_UNION;
#endif
#define SOC_VENC_COMN3_SMMU_RLD_EN1_S_smr_rld_en1_s_START (0)
#define SOC_VENC_COMN3_SMMU_RLD_EN1_S_smr_rld_en1_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smr_rld_en2_s : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VENC_COMN3_SMMU_RLD_EN2_S_UNION;
#endif
#define SOC_VENC_COMN3_SMMU_RLD_EN2_S_smr_rld_en2_s_START (0)
#define SOC_VENC_COMN3_SMMU_RLD_EN2_S_smr_rld_en2_s_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_RESERVED_1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ints_permis_msk : 1;
        unsigned int ints_ext_msk : 1;
        unsigned int ints_tlbmiss_msk : 1;
        unsigned int ints_ptw_trans_msk : 1;
        unsigned int ints_ptw_invalid_msk : 1;
        unsigned int ints_ptw_ns_msk : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_VENC_COMN3_SMMU_INTMAS_S_UNION;
#endif
#define SOC_VENC_COMN3_SMMU_INTMAS_S_ints_permis_msk_START (0)
#define SOC_VENC_COMN3_SMMU_INTMAS_S_ints_permis_msk_END (0)
#define SOC_VENC_COMN3_SMMU_INTMAS_S_ints_ext_msk_START (1)
#define SOC_VENC_COMN3_SMMU_INTMAS_S_ints_ext_msk_END (1)
#define SOC_VENC_COMN3_SMMU_INTMAS_S_ints_tlbmiss_msk_START (2)
#define SOC_VENC_COMN3_SMMU_INTMAS_S_ints_tlbmiss_msk_END (2)
#define SOC_VENC_COMN3_SMMU_INTMAS_S_ints_ptw_trans_msk_START (3)
#define SOC_VENC_COMN3_SMMU_INTMAS_S_ints_ptw_trans_msk_END (3)
#define SOC_VENC_COMN3_SMMU_INTMAS_S_ints_ptw_invalid_msk_START (4)
#define SOC_VENC_COMN3_SMMU_INTMAS_S_ints_ptw_invalid_msk_END (4)
#define SOC_VENC_COMN3_SMMU_INTMAS_S_ints_ptw_ns_msk_START (5)
#define SOC_VENC_COMN3_SMMU_INTMAS_S_ints_ptw_ns_msk_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ints_permis_raw : 1;
        unsigned int ints_ext_raw : 1;
        unsigned int ints_tlbmiss_raw : 1;
        unsigned int ints_ptw_trans_raw : 1;
        unsigned int ints_ptw_invalid_raw : 1;
        unsigned int ints_ptw_ns_raw : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_VENC_COMN3_SMMU_INTRAW_S_UNION;
#endif
#define SOC_VENC_COMN3_SMMU_INTRAW_S_ints_permis_raw_START (0)
#define SOC_VENC_COMN3_SMMU_INTRAW_S_ints_permis_raw_END (0)
#define SOC_VENC_COMN3_SMMU_INTRAW_S_ints_ext_raw_START (1)
#define SOC_VENC_COMN3_SMMU_INTRAW_S_ints_ext_raw_END (1)
#define SOC_VENC_COMN3_SMMU_INTRAW_S_ints_tlbmiss_raw_START (2)
#define SOC_VENC_COMN3_SMMU_INTRAW_S_ints_tlbmiss_raw_END (2)
#define SOC_VENC_COMN3_SMMU_INTRAW_S_ints_ptw_trans_raw_START (3)
#define SOC_VENC_COMN3_SMMU_INTRAW_S_ints_ptw_trans_raw_END (3)
#define SOC_VENC_COMN3_SMMU_INTRAW_S_ints_ptw_invalid_raw_START (4)
#define SOC_VENC_COMN3_SMMU_INTRAW_S_ints_ptw_invalid_raw_END (4)
#define SOC_VENC_COMN3_SMMU_INTRAW_S_ints_ptw_ns_raw_START (5)
#define SOC_VENC_COMN3_SMMU_INTRAW_S_ints_ptw_ns_raw_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ints_permis_stat : 1;
        unsigned int ints_ext_stat : 1;
        unsigned int ints_tlbmiss_stat : 1;
        unsigned int ints_ptw_trans_stat : 1;
        unsigned int ints_ptw_invalid_stat : 1;
        unsigned int ints_ptw_ns_stat : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_VENC_COMN3_SMMU_INTSTAT_S_UNION;
#endif
#define SOC_VENC_COMN3_SMMU_INTSTAT_S_ints_permis_stat_START (0)
#define SOC_VENC_COMN3_SMMU_INTSTAT_S_ints_permis_stat_END (0)
#define SOC_VENC_COMN3_SMMU_INTSTAT_S_ints_ext_stat_START (1)
#define SOC_VENC_COMN3_SMMU_INTSTAT_S_ints_ext_stat_END (1)
#define SOC_VENC_COMN3_SMMU_INTSTAT_S_ints_tlbmiss_stat_START (2)
#define SOC_VENC_COMN3_SMMU_INTSTAT_S_ints_tlbmiss_stat_END (2)
#define SOC_VENC_COMN3_SMMU_INTSTAT_S_ints_ptw_trans_stat_START (3)
#define SOC_VENC_COMN3_SMMU_INTSTAT_S_ints_ptw_trans_stat_END (3)
#define SOC_VENC_COMN3_SMMU_INTSTAT_S_ints_ptw_invalid_stat_START (4)
#define SOC_VENC_COMN3_SMMU_INTSTAT_S_ints_ptw_invalid_stat_END (4)
#define SOC_VENC_COMN3_SMMU_INTSTAT_S_ints_ptw_ns_stat_START (5)
#define SOC_VENC_COMN3_SMMU_INTSTAT_S_ints_ptw_ns_stat_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ints_permis_clr : 1;
        unsigned int ints_ext_clr : 1;
        unsigned int ints_tlbmiss_clr : 1;
        unsigned int ints_ptw_trans_clr : 1;
        unsigned int ints_ptw_invalid_clr : 1;
        unsigned int ints_ptw_ns_clr : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_VENC_COMN3_SMMU_INTCLR_S_UNION;
#endif
#define SOC_VENC_COMN3_SMMU_INTCLR_S_ints_permis_clr_START (0)
#define SOC_VENC_COMN3_SMMU_INTCLR_S_ints_permis_clr_END (0)
#define SOC_VENC_COMN3_SMMU_INTCLR_S_ints_ext_clr_START (1)
#define SOC_VENC_COMN3_SMMU_INTCLR_S_ints_ext_clr_END (1)
#define SOC_VENC_COMN3_SMMU_INTCLR_S_ints_tlbmiss_clr_START (2)
#define SOC_VENC_COMN3_SMMU_INTCLR_S_ints_tlbmiss_clr_END (2)
#define SOC_VENC_COMN3_SMMU_INTCLR_S_ints_ptw_trans_clr_START (3)
#define SOC_VENC_COMN3_SMMU_INTCLR_S_ints_ptw_trans_clr_END (3)
#define SOC_VENC_COMN3_SMMU_INTCLR_S_ints_ptw_invalid_clr_START (4)
#define SOC_VENC_COMN3_SMMU_INTCLR_S_ints_ptw_invalid_clr_END (4)
#define SOC_VENC_COMN3_SMMU_INTCLR_S_ints_ptw_ns_clr_START (5)
#define SOC_VENC_COMN3_SMMU_INTCLR_S_ints_ptw_ns_clr_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int glb_nscfg : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_VENC_COMN3_SMMU_SCR_S_UNION;
#endif
#define SOC_VENC_COMN3_SMMU_SCR_S_glb_nscfg_START (0)
#define SOC_VENC_COMN3_SMMU_SCR_S_glb_nscfg_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int scb_bypass : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VENC_COMN3_SMMU_SCB_SCTRL_UNION;
#endif
#define SOC_VENC_COMN3_SMMU_SCB_SCTRL_scb_bypass_START (0)
#define SOC_VENC_COMN3_SMMU_SCB_SCTRL_scb_bypass_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int scb_ttbr : 32;
    } reg;
} SOC_VENC_COMN3_SMMU_SCB_TTBR_UNION;
#endif
#define SOC_VENC_COMN3_SMMU_SCB_TTBR_scb_ttbr_START (0)
#define SOC_VENC_COMN3_SMMU_SCB_TTBR_scb_ttbr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int scb_ttbcr_des : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VENC_COMN3_SMMU_SCB_TTBCR_UNION;
#endif
#define SOC_VENC_COMN3_SMMU_SCB_TTBCR_scb_ttbcr_des_START (0)
#define SOC_VENC_COMN3_SMMU_SCB_TTBCR_scb_ttbcr_des_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int offset_addr_s : 14;
        unsigned int reserved : 18;
    } reg;
} SOC_VENC_COMN3_SMMU_OFFSET_ADDR_S_UNION;
#endif
#define SOC_VENC_COMN3_SMMU_OFFSET_ADDR_S_offset_addr_s_START (0)
#define SOC_VENC_COMN3_SMMU_OFFSET_ADDR_S_offset_addr_s_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fama_sdes_msb_s : 7;
        unsigned int fama_chn_sel_s : 1;
        unsigned int fama_bps_msb_s : 6;
        unsigned int reserved : 18;
    } reg;
} SOC_VENC_COMN3_SMMU_FAMA_CTRL0_S_UNION;
#endif
#define SOC_VENC_COMN3_SMMU_FAMA_CTRL0_S_fama_sdes_msb_s_START (0)
#define SOC_VENC_COMN3_SMMU_FAMA_CTRL0_S_fama_sdes_msb_s_END (6)
#define SOC_VENC_COMN3_SMMU_FAMA_CTRL0_S_fama_chn_sel_s_START (7)
#define SOC_VENC_COMN3_SMMU_FAMA_CTRL0_S_fama_chn_sel_s_END (7)
#define SOC_VENC_COMN3_SMMU_FAMA_CTRL0_S_fama_bps_msb_s_START (8)
#define SOC_VENC_COMN3_SMMU_FAMA_CTRL0_S_fama_bps_msb_s_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fama_ptw_msb_s : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_VENC_COMN3_SMMU_FAMA_CTRL1_S_UNION;
#endif
#define SOC_VENC_COMN3_SMMU_FAMA_CTRL1_S_fama_ptw_msb_s_START (0)
#define SOC_VENC_COMN3_SMMU_FAMA_CTRL1_S_fama_ptw_msb_s_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbg_tlb_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VENC_COMN3_SMMU_DBGRPTR_TLB_S_UNION;
#endif
#define SOC_VENC_COMN3_SMMU_DBGRPTR_TLB_S_dbg_tlb_en_START (0)
#define SOC_VENC_COMN3_SMMU_DBGRPTR_TLB_S_dbg_tlb_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbg_cache_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VENC_COMN3_SMMU_DBGRPTR_CACHE_S_UNION;
#endif
#define SOC_VENC_COMN3_SMMU_DBGRPTR_CACHE_S_dbg_cache_en_START (0)
#define SOC_VENC_COMN3_SMMU_DBGRPTR_CACHE_S_dbg_cache_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int override_va_security : 1;
        unsigned int reserved_1 : 30;
    } reg;
} SOC_VENC_COMN3_SMMU_OVERRIDE_CTRL_S_UNION;
#endif
#define SOC_VENC_COMN3_SMMU_OVERRIDE_CTRL_S_override_va_security_START (1)
#define SOC_VENC_COMN3_SMMU_OVERRIDE_CTRL_S_override_va_security_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_COMN3_RESERVED_2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int glb_scr : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VENC_MST_GLB_SCR_UNION;
#endif
#define SOC_VENC_MST_GLB_SCR_glb_scr_START (0)
#define SOC_VENC_MST_GLB_SCR_glb_scr_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_MST_RESERVED_1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int glb_bypass : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VENC_MST_GLB_BYPASS_UNION;
#endif
#define SOC_VENC_MST_GLB_BYPASS_glb_bypass_START (0)
#define SOC_VENC_MST_GLB_BYPASS_glb_bypass_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sid0_bypass : 1;
        unsigned int sid1_bypass : 1;
        unsigned int sid2_bypass : 1;
        unsigned int sid3_bypass : 1;
        unsigned int sid4_bypass : 1;
        unsigned int sid5_bypass : 1;
        unsigned int sid6_bypass : 1;
        unsigned int sid7_bypass : 1;
        unsigned int sid8_bypass : 1;
        unsigned int sid9_bypass : 1;
        unsigned int sid10_bypass : 1;
        unsigned int sid11_bypass : 1;
        unsigned int sid12_bypass : 1;
        unsigned int sid13_bypass : 1;
        unsigned int sid14_bypass : 1;
        unsigned int sid15_bypass : 1;
        unsigned int sid16_bypass : 1;
        unsigned int sid17_bypass : 1;
        unsigned int sid18_bypass : 1;
        unsigned int sid19_bypass : 1;
        unsigned int sid20_bypass : 1;
        unsigned int sid21_bypass : 1;
        unsigned int sid22_bypass : 1;
        unsigned int sid23_bypass : 1;
        unsigned int sid24_bypass : 1;
        unsigned int sid25_bypass : 1;
        unsigned int sid26_bypass : 1;
        unsigned int sid27_bypass : 1;
        unsigned int sid28_bypass : 1;
        unsigned int sid29_bypass : 1;
        unsigned int sid30_bypass : 1;
        unsigned int sid31_bypass : 1;
    } reg;
} SOC_VENC_MST_SID0_BYPASS_UNION;
#endif
#define SOC_VENC_MST_SID0_BYPASS_sid0_bypass_START (0)
#define SOC_VENC_MST_SID0_BYPASS_sid0_bypass_END (0)
#define SOC_VENC_MST_SID0_BYPASS_sid1_bypass_START (1)
#define SOC_VENC_MST_SID0_BYPASS_sid1_bypass_END (1)
#define SOC_VENC_MST_SID0_BYPASS_sid2_bypass_START (2)
#define SOC_VENC_MST_SID0_BYPASS_sid2_bypass_END (2)
#define SOC_VENC_MST_SID0_BYPASS_sid3_bypass_START (3)
#define SOC_VENC_MST_SID0_BYPASS_sid3_bypass_END (3)
#define SOC_VENC_MST_SID0_BYPASS_sid4_bypass_START (4)
#define SOC_VENC_MST_SID0_BYPASS_sid4_bypass_END (4)
#define SOC_VENC_MST_SID0_BYPASS_sid5_bypass_START (5)
#define SOC_VENC_MST_SID0_BYPASS_sid5_bypass_END (5)
#define SOC_VENC_MST_SID0_BYPASS_sid6_bypass_START (6)
#define SOC_VENC_MST_SID0_BYPASS_sid6_bypass_END (6)
#define SOC_VENC_MST_SID0_BYPASS_sid7_bypass_START (7)
#define SOC_VENC_MST_SID0_BYPASS_sid7_bypass_END (7)
#define SOC_VENC_MST_SID0_BYPASS_sid8_bypass_START (8)
#define SOC_VENC_MST_SID0_BYPASS_sid8_bypass_END (8)
#define SOC_VENC_MST_SID0_BYPASS_sid9_bypass_START (9)
#define SOC_VENC_MST_SID0_BYPASS_sid9_bypass_END (9)
#define SOC_VENC_MST_SID0_BYPASS_sid10_bypass_START (10)
#define SOC_VENC_MST_SID0_BYPASS_sid10_bypass_END (10)
#define SOC_VENC_MST_SID0_BYPASS_sid11_bypass_START (11)
#define SOC_VENC_MST_SID0_BYPASS_sid11_bypass_END (11)
#define SOC_VENC_MST_SID0_BYPASS_sid12_bypass_START (12)
#define SOC_VENC_MST_SID0_BYPASS_sid12_bypass_END (12)
#define SOC_VENC_MST_SID0_BYPASS_sid13_bypass_START (13)
#define SOC_VENC_MST_SID0_BYPASS_sid13_bypass_END (13)
#define SOC_VENC_MST_SID0_BYPASS_sid14_bypass_START (14)
#define SOC_VENC_MST_SID0_BYPASS_sid14_bypass_END (14)
#define SOC_VENC_MST_SID0_BYPASS_sid15_bypass_START (15)
#define SOC_VENC_MST_SID0_BYPASS_sid15_bypass_END (15)
#define SOC_VENC_MST_SID0_BYPASS_sid16_bypass_START (16)
#define SOC_VENC_MST_SID0_BYPASS_sid16_bypass_END (16)
#define SOC_VENC_MST_SID0_BYPASS_sid17_bypass_START (17)
#define SOC_VENC_MST_SID0_BYPASS_sid17_bypass_END (17)
#define SOC_VENC_MST_SID0_BYPASS_sid18_bypass_START (18)
#define SOC_VENC_MST_SID0_BYPASS_sid18_bypass_END (18)
#define SOC_VENC_MST_SID0_BYPASS_sid19_bypass_START (19)
#define SOC_VENC_MST_SID0_BYPASS_sid19_bypass_END (19)
#define SOC_VENC_MST_SID0_BYPASS_sid20_bypass_START (20)
#define SOC_VENC_MST_SID0_BYPASS_sid20_bypass_END (20)
#define SOC_VENC_MST_SID0_BYPASS_sid21_bypass_START (21)
#define SOC_VENC_MST_SID0_BYPASS_sid21_bypass_END (21)
#define SOC_VENC_MST_SID0_BYPASS_sid22_bypass_START (22)
#define SOC_VENC_MST_SID0_BYPASS_sid22_bypass_END (22)
#define SOC_VENC_MST_SID0_BYPASS_sid23_bypass_START (23)
#define SOC_VENC_MST_SID0_BYPASS_sid23_bypass_END (23)
#define SOC_VENC_MST_SID0_BYPASS_sid24_bypass_START (24)
#define SOC_VENC_MST_SID0_BYPASS_sid24_bypass_END (24)
#define SOC_VENC_MST_SID0_BYPASS_sid25_bypass_START (25)
#define SOC_VENC_MST_SID0_BYPASS_sid25_bypass_END (25)
#define SOC_VENC_MST_SID0_BYPASS_sid26_bypass_START (26)
#define SOC_VENC_MST_SID0_BYPASS_sid26_bypass_END (26)
#define SOC_VENC_MST_SID0_BYPASS_sid27_bypass_START (27)
#define SOC_VENC_MST_SID0_BYPASS_sid27_bypass_END (27)
#define SOC_VENC_MST_SID0_BYPASS_sid28_bypass_START (28)
#define SOC_VENC_MST_SID0_BYPASS_sid28_bypass_END (28)
#define SOC_VENC_MST_SID0_BYPASS_sid29_bypass_START (29)
#define SOC_VENC_MST_SID0_BYPASS_sid29_bypass_END (29)
#define SOC_VENC_MST_SID0_BYPASS_sid30_bypass_START (30)
#define SOC_VENC_MST_SID0_BYPASS_sid30_bypass_END (30)
#define SOC_VENC_MST_SID0_BYPASS_sid31_bypass_START (31)
#define SOC_VENC_MST_SID0_BYPASS_sid31_bypass_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sid32_bypass : 1;
        unsigned int sid33_bypass : 1;
        unsigned int sid34_bypass : 1;
        unsigned int sid35_bypass : 1;
        unsigned int sid36_bypass : 1;
        unsigned int sid37_bypass : 1;
        unsigned int sid38_bypass : 1;
        unsigned int sid39_bypass : 1;
        unsigned int sid40_bypass : 1;
        unsigned int sid41_bypass : 1;
        unsigned int sid42_bypass : 1;
        unsigned int sid43_bypass : 1;
        unsigned int sid44_bypass : 1;
        unsigned int sid45_bypass : 1;
        unsigned int sid46_bypass : 1;
        unsigned int sid47_bypass : 1;
        unsigned int sid48_bypass : 1;
        unsigned int sid49_bypass : 1;
        unsigned int sid50_bypass : 1;
        unsigned int sid51_bypass : 1;
        unsigned int sid52_bypass : 1;
        unsigned int sid53_bypass : 1;
        unsigned int sid54_bypass : 1;
        unsigned int sid55_bypass : 1;
        unsigned int sid56_bypass : 1;
        unsigned int sid57_bypass : 1;
        unsigned int sid58_bypass : 1;
        unsigned int sid59_bypass : 1;
        unsigned int sid60_bypass : 1;
        unsigned int sid61_bypass : 1;
        unsigned int sid62_bypass : 1;
        unsigned int sid63_bypass : 1;
    } reg;
} SOC_VENC_MST_SID1_BYPASS_UNION;
#endif
#define SOC_VENC_MST_SID1_BYPASS_sid32_bypass_START (0)
#define SOC_VENC_MST_SID1_BYPASS_sid32_bypass_END (0)
#define SOC_VENC_MST_SID1_BYPASS_sid33_bypass_START (1)
#define SOC_VENC_MST_SID1_BYPASS_sid33_bypass_END (1)
#define SOC_VENC_MST_SID1_BYPASS_sid34_bypass_START (2)
#define SOC_VENC_MST_SID1_BYPASS_sid34_bypass_END (2)
#define SOC_VENC_MST_SID1_BYPASS_sid35_bypass_START (3)
#define SOC_VENC_MST_SID1_BYPASS_sid35_bypass_END (3)
#define SOC_VENC_MST_SID1_BYPASS_sid36_bypass_START (4)
#define SOC_VENC_MST_SID1_BYPASS_sid36_bypass_END (4)
#define SOC_VENC_MST_SID1_BYPASS_sid37_bypass_START (5)
#define SOC_VENC_MST_SID1_BYPASS_sid37_bypass_END (5)
#define SOC_VENC_MST_SID1_BYPASS_sid38_bypass_START (6)
#define SOC_VENC_MST_SID1_BYPASS_sid38_bypass_END (6)
#define SOC_VENC_MST_SID1_BYPASS_sid39_bypass_START (7)
#define SOC_VENC_MST_SID1_BYPASS_sid39_bypass_END (7)
#define SOC_VENC_MST_SID1_BYPASS_sid40_bypass_START (8)
#define SOC_VENC_MST_SID1_BYPASS_sid40_bypass_END (8)
#define SOC_VENC_MST_SID1_BYPASS_sid41_bypass_START (9)
#define SOC_VENC_MST_SID1_BYPASS_sid41_bypass_END (9)
#define SOC_VENC_MST_SID1_BYPASS_sid42_bypass_START (10)
#define SOC_VENC_MST_SID1_BYPASS_sid42_bypass_END (10)
#define SOC_VENC_MST_SID1_BYPASS_sid43_bypass_START (11)
#define SOC_VENC_MST_SID1_BYPASS_sid43_bypass_END (11)
#define SOC_VENC_MST_SID1_BYPASS_sid44_bypass_START (12)
#define SOC_VENC_MST_SID1_BYPASS_sid44_bypass_END (12)
#define SOC_VENC_MST_SID1_BYPASS_sid45_bypass_START (13)
#define SOC_VENC_MST_SID1_BYPASS_sid45_bypass_END (13)
#define SOC_VENC_MST_SID1_BYPASS_sid46_bypass_START (14)
#define SOC_VENC_MST_SID1_BYPASS_sid46_bypass_END (14)
#define SOC_VENC_MST_SID1_BYPASS_sid47_bypass_START (15)
#define SOC_VENC_MST_SID1_BYPASS_sid47_bypass_END (15)
#define SOC_VENC_MST_SID1_BYPASS_sid48_bypass_START (16)
#define SOC_VENC_MST_SID1_BYPASS_sid48_bypass_END (16)
#define SOC_VENC_MST_SID1_BYPASS_sid49_bypass_START (17)
#define SOC_VENC_MST_SID1_BYPASS_sid49_bypass_END (17)
#define SOC_VENC_MST_SID1_BYPASS_sid50_bypass_START (18)
#define SOC_VENC_MST_SID1_BYPASS_sid50_bypass_END (18)
#define SOC_VENC_MST_SID1_BYPASS_sid51_bypass_START (19)
#define SOC_VENC_MST_SID1_BYPASS_sid51_bypass_END (19)
#define SOC_VENC_MST_SID1_BYPASS_sid52_bypass_START (20)
#define SOC_VENC_MST_SID1_BYPASS_sid52_bypass_END (20)
#define SOC_VENC_MST_SID1_BYPASS_sid53_bypass_START (21)
#define SOC_VENC_MST_SID1_BYPASS_sid53_bypass_END (21)
#define SOC_VENC_MST_SID1_BYPASS_sid54_bypass_START (22)
#define SOC_VENC_MST_SID1_BYPASS_sid54_bypass_END (22)
#define SOC_VENC_MST_SID1_BYPASS_sid55_bypass_START (23)
#define SOC_VENC_MST_SID1_BYPASS_sid55_bypass_END (23)
#define SOC_VENC_MST_SID1_BYPASS_sid56_bypass_START (24)
#define SOC_VENC_MST_SID1_BYPASS_sid56_bypass_END (24)
#define SOC_VENC_MST_SID1_BYPASS_sid57_bypass_START (25)
#define SOC_VENC_MST_SID1_BYPASS_sid57_bypass_END (25)
#define SOC_VENC_MST_SID1_BYPASS_sid58_bypass_START (26)
#define SOC_VENC_MST_SID1_BYPASS_sid58_bypass_END (26)
#define SOC_VENC_MST_SID1_BYPASS_sid59_bypass_START (27)
#define SOC_VENC_MST_SID1_BYPASS_sid59_bypass_END (27)
#define SOC_VENC_MST_SID1_BYPASS_sid60_bypass_START (28)
#define SOC_VENC_MST_SID1_BYPASS_sid60_bypass_END (28)
#define SOC_VENC_MST_SID1_BYPASS_sid61_bypass_START (29)
#define SOC_VENC_MST_SID1_BYPASS_sid61_bypass_END (29)
#define SOC_VENC_MST_SID1_BYPASS_sid62_bypass_START (30)
#define SOC_VENC_MST_SID1_BYPASS_sid62_bypass_END (30)
#define SOC_VENC_MST_SID1_BYPASS_sid63_bypass_START (31)
#define SOC_VENC_MST_SID1_BYPASS_sid63_bypass_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mst_pref_0chn : 1;
        unsigned int mst_pref_1chn : 1;
        unsigned int mst_pref_2chn : 1;
        unsigned int mst_pref_3chn : 1;
        unsigned int mst_pref_4chn : 1;
        unsigned int mst_pref_5chn : 1;
        unsigned int mst_pref_6chn : 1;
        unsigned int mst_pref_7chn : 1;
        unsigned int mst_pref_8chn : 1;
        unsigned int mst_pref_9chn : 1;
        unsigned int mst_pref_10chn : 1;
        unsigned int mst_pref_11chn : 1;
        unsigned int mst_pref_12chn : 1;
        unsigned int mst_pref_13chn : 1;
        unsigned int mst_pref_14chn : 1;
        unsigned int mst_pref_15chn : 1;
        unsigned int mst_pref_16chn : 1;
        unsigned int mst_pref_17chn : 1;
        unsigned int reserved : 14;
    } reg;
} SOC_VENC_MST_PREF_CHN_UNION;
#endif
#define SOC_VENC_MST_PREF_CHN_mst_pref_0chn_START (0)
#define SOC_VENC_MST_PREF_CHN_mst_pref_0chn_END (0)
#define SOC_VENC_MST_PREF_CHN_mst_pref_1chn_START (1)
#define SOC_VENC_MST_PREF_CHN_mst_pref_1chn_END (1)
#define SOC_VENC_MST_PREF_CHN_mst_pref_2chn_START (2)
#define SOC_VENC_MST_PREF_CHN_mst_pref_2chn_END (2)
#define SOC_VENC_MST_PREF_CHN_mst_pref_3chn_START (3)
#define SOC_VENC_MST_PREF_CHN_mst_pref_3chn_END (3)
#define SOC_VENC_MST_PREF_CHN_mst_pref_4chn_START (4)
#define SOC_VENC_MST_PREF_CHN_mst_pref_4chn_END (4)
#define SOC_VENC_MST_PREF_CHN_mst_pref_5chn_START (5)
#define SOC_VENC_MST_PREF_CHN_mst_pref_5chn_END (5)
#define SOC_VENC_MST_PREF_CHN_mst_pref_6chn_START (6)
#define SOC_VENC_MST_PREF_CHN_mst_pref_6chn_END (6)
#define SOC_VENC_MST_PREF_CHN_mst_pref_7chn_START (7)
#define SOC_VENC_MST_PREF_CHN_mst_pref_7chn_END (7)
#define SOC_VENC_MST_PREF_CHN_mst_pref_8chn_START (8)
#define SOC_VENC_MST_PREF_CHN_mst_pref_8chn_END (8)
#define SOC_VENC_MST_PREF_CHN_mst_pref_9chn_START (9)
#define SOC_VENC_MST_PREF_CHN_mst_pref_9chn_END (9)
#define SOC_VENC_MST_PREF_CHN_mst_pref_10chn_START (10)
#define SOC_VENC_MST_PREF_CHN_mst_pref_10chn_END (10)
#define SOC_VENC_MST_PREF_CHN_mst_pref_11chn_START (11)
#define SOC_VENC_MST_PREF_CHN_mst_pref_11chn_END (11)
#define SOC_VENC_MST_PREF_CHN_mst_pref_12chn_START (12)
#define SOC_VENC_MST_PREF_CHN_mst_pref_12chn_END (12)
#define SOC_VENC_MST_PREF_CHN_mst_pref_13chn_START (13)
#define SOC_VENC_MST_PREF_CHN_mst_pref_13chn_END (13)
#define SOC_VENC_MST_PREF_CHN_mst_pref_14chn_START (14)
#define SOC_VENC_MST_PREF_CHN_mst_pref_14chn_END (14)
#define SOC_VENC_MST_PREF_CHN_mst_pref_15chn_START (15)
#define SOC_VENC_MST_PREF_CHN_mst_pref_15chn_END (15)
#define SOC_VENC_MST_PREF_CHN_mst_pref_16chn_START (16)
#define SOC_VENC_MST_PREF_CHN_mst_pref_16chn_END (16)
#define SOC_VENC_MST_PREF_CHN_mst_pref_17chn_START (17)
#define SOC_VENC_MST_PREF_CHN_mst_pref_17chn_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_MST_RESERVED_2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd0_tlb_depth : 9;
        unsigned int rd0_tlb_base : 9;
        unsigned int rd0_tlb_last : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_VENC_MST_RD0_0CFG_UNION;
#endif
#define SOC_VENC_MST_RD0_0CFG_rd0_tlb_depth_START (0)
#define SOC_VENC_MST_RD0_0CFG_rd0_tlb_depth_END (8)
#define SOC_VENC_MST_RD0_0CFG_rd0_tlb_base_START (9)
#define SOC_VENC_MST_RD0_0CFG_rd0_tlb_base_END (17)
#define SOC_VENC_MST_RD0_0CFG_rd0_tlb_last_START (18)
#define SOC_VENC_MST_RD0_0CFG_rd0_tlb_last_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd0_tlb_nxt : 8;
        unsigned int rd0_tlb_uw : 8;
        unsigned int rd0_tlb_upd_dis : 8;
        unsigned int rd0_tlb_upd_len : 8;
    } reg;
} SOC_VENC_MST_RD0_1CFG_UNION;
#endif
#define SOC_VENC_MST_RD0_1CFG_rd0_tlb_nxt_START (0)
#define SOC_VENC_MST_RD0_1CFG_rd0_tlb_nxt_END (7)
#define SOC_VENC_MST_RD0_1CFG_rd0_tlb_uw_START (8)
#define SOC_VENC_MST_RD0_1CFG_rd0_tlb_uw_END (15)
#define SOC_VENC_MST_RD0_1CFG_rd0_tlb_upd_dis_START (16)
#define SOC_VENC_MST_RD0_1CFG_rd0_tlb_upd_dis_END (23)
#define SOC_VENC_MST_RD0_1CFG_rd0_tlb_upd_len_START (24)
#define SOC_VENC_MST_RD0_1CFG_rd0_tlb_upd_len_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd1_tlb_depth : 9;
        unsigned int rd1_tlb_base : 9;
        unsigned int rd1_tlb_last : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_VENC_MST_RD1_0CFG_UNION;
#endif
#define SOC_VENC_MST_RD1_0CFG_rd1_tlb_depth_START (0)
#define SOC_VENC_MST_RD1_0CFG_rd1_tlb_depth_END (8)
#define SOC_VENC_MST_RD1_0CFG_rd1_tlb_base_START (9)
#define SOC_VENC_MST_RD1_0CFG_rd1_tlb_base_END (17)
#define SOC_VENC_MST_RD1_0CFG_rd1_tlb_last_START (18)
#define SOC_VENC_MST_RD1_0CFG_rd1_tlb_last_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd1_tlb_nxt : 8;
        unsigned int rd1_tlb_uw : 8;
        unsigned int rd1_tlb_upd_dis : 8;
        unsigned int rd1_tlb_upd_len : 8;
    } reg;
} SOC_VENC_MST_RD1_1CFG_UNION;
#endif
#define SOC_VENC_MST_RD1_1CFG_rd1_tlb_nxt_START (0)
#define SOC_VENC_MST_RD1_1CFG_rd1_tlb_nxt_END (7)
#define SOC_VENC_MST_RD1_1CFG_rd1_tlb_uw_START (8)
#define SOC_VENC_MST_RD1_1CFG_rd1_tlb_uw_END (15)
#define SOC_VENC_MST_RD1_1CFG_rd1_tlb_upd_dis_START (16)
#define SOC_VENC_MST_RD1_1CFG_rd1_tlb_upd_dis_END (23)
#define SOC_VENC_MST_RD1_1CFG_rd1_tlb_upd_len_START (24)
#define SOC_VENC_MST_RD1_1CFG_rd1_tlb_upd_len_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd2_tlb_depth : 9;
        unsigned int rd2_tlb_base : 9;
        unsigned int rd2_tlb_last : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_VENC_MST_RD2_0CFG_UNION;
#endif
#define SOC_VENC_MST_RD2_0CFG_rd2_tlb_depth_START (0)
#define SOC_VENC_MST_RD2_0CFG_rd2_tlb_depth_END (8)
#define SOC_VENC_MST_RD2_0CFG_rd2_tlb_base_START (9)
#define SOC_VENC_MST_RD2_0CFG_rd2_tlb_base_END (17)
#define SOC_VENC_MST_RD2_0CFG_rd2_tlb_last_START (18)
#define SOC_VENC_MST_RD2_0CFG_rd2_tlb_last_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd2_tlb_nxt : 8;
        unsigned int rd2_tlb_uw : 8;
        unsigned int rd2_tlb_upd_dis : 8;
        unsigned int rd2_tlb_upd_len : 8;
    } reg;
} SOC_VENC_MST_RD2_1CFG_UNION;
#endif
#define SOC_VENC_MST_RD2_1CFG_rd2_tlb_nxt_START (0)
#define SOC_VENC_MST_RD2_1CFG_rd2_tlb_nxt_END (7)
#define SOC_VENC_MST_RD2_1CFG_rd2_tlb_uw_START (8)
#define SOC_VENC_MST_RD2_1CFG_rd2_tlb_uw_END (15)
#define SOC_VENC_MST_RD2_1CFG_rd2_tlb_upd_dis_START (16)
#define SOC_VENC_MST_RD2_1CFG_rd2_tlb_upd_dis_END (23)
#define SOC_VENC_MST_RD2_1CFG_rd2_tlb_upd_len_START (24)
#define SOC_VENC_MST_RD2_1CFG_rd2_tlb_upd_len_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd3_tlb_depth : 9;
        unsigned int rd3_tlb_base : 9;
        unsigned int rd3_tlb_last : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_VENC_MST_RD3_0CFG_UNION;
#endif
#define SOC_VENC_MST_RD3_0CFG_rd3_tlb_depth_START (0)
#define SOC_VENC_MST_RD3_0CFG_rd3_tlb_depth_END (8)
#define SOC_VENC_MST_RD3_0CFG_rd3_tlb_base_START (9)
#define SOC_VENC_MST_RD3_0CFG_rd3_tlb_base_END (17)
#define SOC_VENC_MST_RD3_0CFG_rd3_tlb_last_START (18)
#define SOC_VENC_MST_RD3_0CFG_rd3_tlb_last_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd3_tlb_nxt : 8;
        unsigned int rd3_tlb_uw : 8;
        unsigned int rd3_tlb_upd_dis : 8;
        unsigned int rd3_tlb_upd_len : 8;
    } reg;
} SOC_VENC_MST_RD3_1CFG_UNION;
#endif
#define SOC_VENC_MST_RD3_1CFG_rd3_tlb_nxt_START (0)
#define SOC_VENC_MST_RD3_1CFG_rd3_tlb_nxt_END (7)
#define SOC_VENC_MST_RD3_1CFG_rd3_tlb_uw_START (8)
#define SOC_VENC_MST_RD3_1CFG_rd3_tlb_uw_END (15)
#define SOC_VENC_MST_RD3_1CFG_rd3_tlb_upd_dis_START (16)
#define SOC_VENC_MST_RD3_1CFG_rd3_tlb_upd_dis_END (23)
#define SOC_VENC_MST_RD3_1CFG_rd3_tlb_upd_len_START (24)
#define SOC_VENC_MST_RD3_1CFG_rd3_tlb_upd_len_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd4_tlb_depth : 9;
        unsigned int rd4_tlb_base : 9;
        unsigned int rd4_tlb_last : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_VENC_MST_RD4_0CFG_UNION;
#endif
#define SOC_VENC_MST_RD4_0CFG_rd4_tlb_depth_START (0)
#define SOC_VENC_MST_RD4_0CFG_rd4_tlb_depth_END (8)
#define SOC_VENC_MST_RD4_0CFG_rd4_tlb_base_START (9)
#define SOC_VENC_MST_RD4_0CFG_rd4_tlb_base_END (17)
#define SOC_VENC_MST_RD4_0CFG_rd4_tlb_last_START (18)
#define SOC_VENC_MST_RD4_0CFG_rd4_tlb_last_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd4_tlb_nxt : 8;
        unsigned int rd4_tlb_uw : 8;
        unsigned int rd4_tlb_upd_dis : 8;
        unsigned int rd4_tlb_upd_len : 8;
    } reg;
} SOC_VENC_MST_RD4_1CFG_UNION;
#endif
#define SOC_VENC_MST_RD4_1CFG_rd4_tlb_nxt_START (0)
#define SOC_VENC_MST_RD4_1CFG_rd4_tlb_nxt_END (7)
#define SOC_VENC_MST_RD4_1CFG_rd4_tlb_uw_START (8)
#define SOC_VENC_MST_RD4_1CFG_rd4_tlb_uw_END (15)
#define SOC_VENC_MST_RD4_1CFG_rd4_tlb_upd_dis_START (16)
#define SOC_VENC_MST_RD4_1CFG_rd4_tlb_upd_dis_END (23)
#define SOC_VENC_MST_RD4_1CFG_rd4_tlb_upd_len_START (24)
#define SOC_VENC_MST_RD4_1CFG_rd4_tlb_upd_len_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd5_tlb_depth : 9;
        unsigned int rd5_tlb_base : 9;
        unsigned int rd5_tlb_last : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_VENC_MST_RD5_0CFG_UNION;
#endif
#define SOC_VENC_MST_RD5_0CFG_rd5_tlb_depth_START (0)
#define SOC_VENC_MST_RD5_0CFG_rd5_tlb_depth_END (8)
#define SOC_VENC_MST_RD5_0CFG_rd5_tlb_base_START (9)
#define SOC_VENC_MST_RD5_0CFG_rd5_tlb_base_END (17)
#define SOC_VENC_MST_RD5_0CFG_rd5_tlb_last_START (18)
#define SOC_VENC_MST_RD5_0CFG_rd5_tlb_last_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd5_tlb_nxt : 8;
        unsigned int rd5_tlb_uw : 8;
        unsigned int rd5_tlb_upd_dis : 8;
        unsigned int rd5_tlb_upd_len : 8;
    } reg;
} SOC_VENC_MST_RD5_1CFG_UNION;
#endif
#define SOC_VENC_MST_RD5_1CFG_rd5_tlb_nxt_START (0)
#define SOC_VENC_MST_RD5_1CFG_rd5_tlb_nxt_END (7)
#define SOC_VENC_MST_RD5_1CFG_rd5_tlb_uw_START (8)
#define SOC_VENC_MST_RD5_1CFG_rd5_tlb_uw_END (15)
#define SOC_VENC_MST_RD5_1CFG_rd5_tlb_upd_dis_START (16)
#define SOC_VENC_MST_RD5_1CFG_rd5_tlb_upd_dis_END (23)
#define SOC_VENC_MST_RD5_1CFG_rd5_tlb_upd_len_START (24)
#define SOC_VENC_MST_RD5_1CFG_rd5_tlb_upd_len_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd6_tlb_depth : 9;
        unsigned int rd6_tlb_base : 9;
        unsigned int rd6_tlb_last : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_VENC_MST_RD6_0CFG_UNION;
#endif
#define SOC_VENC_MST_RD6_0CFG_rd6_tlb_depth_START (0)
#define SOC_VENC_MST_RD6_0CFG_rd6_tlb_depth_END (8)
#define SOC_VENC_MST_RD6_0CFG_rd6_tlb_base_START (9)
#define SOC_VENC_MST_RD6_0CFG_rd6_tlb_base_END (17)
#define SOC_VENC_MST_RD6_0CFG_rd6_tlb_last_START (18)
#define SOC_VENC_MST_RD6_0CFG_rd6_tlb_last_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd6_tlb_nxt : 8;
        unsigned int rd6_tlb_uw : 8;
        unsigned int rd6_tlb_upd_dis : 8;
        unsigned int rd6_tlb_upd_len : 8;
    } reg;
} SOC_VENC_MST_RD6_1CFG_UNION;
#endif
#define SOC_VENC_MST_RD6_1CFG_rd6_tlb_nxt_START (0)
#define SOC_VENC_MST_RD6_1CFG_rd6_tlb_nxt_END (7)
#define SOC_VENC_MST_RD6_1CFG_rd6_tlb_uw_START (8)
#define SOC_VENC_MST_RD6_1CFG_rd6_tlb_uw_END (15)
#define SOC_VENC_MST_RD6_1CFG_rd6_tlb_upd_dis_START (16)
#define SOC_VENC_MST_RD6_1CFG_rd6_tlb_upd_dis_END (23)
#define SOC_VENC_MST_RD6_1CFG_rd6_tlb_upd_len_START (24)
#define SOC_VENC_MST_RD6_1CFG_rd6_tlb_upd_len_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd7_tlb_depth : 9;
        unsigned int rd7_tlb_base : 9;
        unsigned int rd7_tlb_last : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_VENC_MST_RD7_0CFG_UNION;
#endif
#define SOC_VENC_MST_RD7_0CFG_rd7_tlb_depth_START (0)
#define SOC_VENC_MST_RD7_0CFG_rd7_tlb_depth_END (8)
#define SOC_VENC_MST_RD7_0CFG_rd7_tlb_base_START (9)
#define SOC_VENC_MST_RD7_0CFG_rd7_tlb_base_END (17)
#define SOC_VENC_MST_RD7_0CFG_rd7_tlb_last_START (18)
#define SOC_VENC_MST_RD7_0CFG_rd7_tlb_last_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd7_tlb_nxt : 8;
        unsigned int rd7_tlb_uw : 8;
        unsigned int rd7_tlb_upd_dis : 8;
        unsigned int rd7_tlb_upd_len : 8;
    } reg;
} SOC_VENC_MST_RD7_1CFG_UNION;
#endif
#define SOC_VENC_MST_RD7_1CFG_rd7_tlb_nxt_START (0)
#define SOC_VENC_MST_RD7_1CFG_rd7_tlb_nxt_END (7)
#define SOC_VENC_MST_RD7_1CFG_rd7_tlb_uw_START (8)
#define SOC_VENC_MST_RD7_1CFG_rd7_tlb_uw_END (15)
#define SOC_VENC_MST_RD7_1CFG_rd7_tlb_upd_dis_START (16)
#define SOC_VENC_MST_RD7_1CFG_rd7_tlb_upd_dis_END (23)
#define SOC_VENC_MST_RD7_1CFG_rd7_tlb_upd_len_START (24)
#define SOC_VENC_MST_RD7_1CFG_rd7_tlb_upd_len_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd8_tlb_depth : 9;
        unsigned int rd8_tlb_base : 9;
        unsigned int rd8_tlb_last : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_VENC_MST_RD8_0CFG_UNION;
#endif
#define SOC_VENC_MST_RD8_0CFG_rd8_tlb_depth_START (0)
#define SOC_VENC_MST_RD8_0CFG_rd8_tlb_depth_END (8)
#define SOC_VENC_MST_RD8_0CFG_rd8_tlb_base_START (9)
#define SOC_VENC_MST_RD8_0CFG_rd8_tlb_base_END (17)
#define SOC_VENC_MST_RD8_0CFG_rd8_tlb_last_START (18)
#define SOC_VENC_MST_RD8_0CFG_rd8_tlb_last_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd8_tlb_nxt : 8;
        unsigned int rd8_tlb_uw : 8;
        unsigned int rd8_tlb_upd_dis : 8;
        unsigned int rd8_tlb_upd_len : 8;
    } reg;
} SOC_VENC_MST_RD8_1CFG_UNION;
#endif
#define SOC_VENC_MST_RD8_1CFG_rd8_tlb_nxt_START (0)
#define SOC_VENC_MST_RD8_1CFG_rd8_tlb_nxt_END (7)
#define SOC_VENC_MST_RD8_1CFG_rd8_tlb_uw_START (8)
#define SOC_VENC_MST_RD8_1CFG_rd8_tlb_uw_END (15)
#define SOC_VENC_MST_RD8_1CFG_rd8_tlb_upd_dis_START (16)
#define SOC_VENC_MST_RD8_1CFG_rd8_tlb_upd_dis_END (23)
#define SOC_VENC_MST_RD8_1CFG_rd8_tlb_upd_len_START (24)
#define SOC_VENC_MST_RD8_1CFG_rd8_tlb_upd_len_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd9_tlb_depth : 9;
        unsigned int rd9_tlb_base : 9;
        unsigned int rd9_tlb_last : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_VENC_MST_RD9_0CFG_UNION;
#endif
#define SOC_VENC_MST_RD9_0CFG_rd9_tlb_depth_START (0)
#define SOC_VENC_MST_RD9_0CFG_rd9_tlb_depth_END (8)
#define SOC_VENC_MST_RD9_0CFG_rd9_tlb_base_START (9)
#define SOC_VENC_MST_RD9_0CFG_rd9_tlb_base_END (17)
#define SOC_VENC_MST_RD9_0CFG_rd9_tlb_last_START (18)
#define SOC_VENC_MST_RD9_0CFG_rd9_tlb_last_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd9_tlb_nxt : 8;
        unsigned int rd9_tlb_uw : 8;
        unsigned int rd9_tlb_upd_dis : 8;
        unsigned int rd9_tlb_upd_len : 8;
    } reg;
} SOC_VENC_MST_RD9_1CFG_UNION;
#endif
#define SOC_VENC_MST_RD9_1CFG_rd9_tlb_nxt_START (0)
#define SOC_VENC_MST_RD9_1CFG_rd9_tlb_nxt_END (7)
#define SOC_VENC_MST_RD9_1CFG_rd9_tlb_uw_START (8)
#define SOC_VENC_MST_RD9_1CFG_rd9_tlb_uw_END (15)
#define SOC_VENC_MST_RD9_1CFG_rd9_tlb_upd_dis_START (16)
#define SOC_VENC_MST_RD9_1CFG_rd9_tlb_upd_dis_END (23)
#define SOC_VENC_MST_RD9_1CFG_rd9_tlb_upd_len_START (24)
#define SOC_VENC_MST_RD9_1CFG_rd9_tlb_upd_len_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr0_tlb_depth : 9;
        unsigned int wr0_tlb_base : 9;
        unsigned int wr0_tlb_last : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_VENC_MST_WR0_0CFG_UNION;
#endif
#define SOC_VENC_MST_WR0_0CFG_wr0_tlb_depth_START (0)
#define SOC_VENC_MST_WR0_0CFG_wr0_tlb_depth_END (8)
#define SOC_VENC_MST_WR0_0CFG_wr0_tlb_base_START (9)
#define SOC_VENC_MST_WR0_0CFG_wr0_tlb_base_END (17)
#define SOC_VENC_MST_WR0_0CFG_wr0_tlb_last_START (18)
#define SOC_VENC_MST_WR0_0CFG_wr0_tlb_last_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr0_tlb_nxt : 8;
        unsigned int wr0_tlb_uw : 8;
        unsigned int wr0_tlb_upd_dis : 8;
        unsigned int wr0_tlb_upd_len : 8;
    } reg;
} SOC_VENC_MST_WR0_1CFG_UNION;
#endif
#define SOC_VENC_MST_WR0_1CFG_wr0_tlb_nxt_START (0)
#define SOC_VENC_MST_WR0_1CFG_wr0_tlb_nxt_END (7)
#define SOC_VENC_MST_WR0_1CFG_wr0_tlb_uw_START (8)
#define SOC_VENC_MST_WR0_1CFG_wr0_tlb_uw_END (15)
#define SOC_VENC_MST_WR0_1CFG_wr0_tlb_upd_dis_START (16)
#define SOC_VENC_MST_WR0_1CFG_wr0_tlb_upd_dis_END (23)
#define SOC_VENC_MST_WR0_1CFG_wr0_tlb_upd_len_START (24)
#define SOC_VENC_MST_WR0_1CFG_wr0_tlb_upd_len_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr1_tlb_depth : 9;
        unsigned int wr1_tlb_base : 9;
        unsigned int wr1_tlb_last : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_VENC_MST_WR1_0CFG_UNION;
#endif
#define SOC_VENC_MST_WR1_0CFG_wr1_tlb_depth_START (0)
#define SOC_VENC_MST_WR1_0CFG_wr1_tlb_depth_END (8)
#define SOC_VENC_MST_WR1_0CFG_wr1_tlb_base_START (9)
#define SOC_VENC_MST_WR1_0CFG_wr1_tlb_base_END (17)
#define SOC_VENC_MST_WR1_0CFG_wr1_tlb_last_START (18)
#define SOC_VENC_MST_WR1_0CFG_wr1_tlb_last_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr1_tlb_nxt : 8;
        unsigned int wr1_tlb_uw : 8;
        unsigned int wr1_tlb_upd_dis : 8;
        unsigned int wr1_tlb_upd_len : 8;
    } reg;
} SOC_VENC_MST_WR1_1CFG_UNION;
#endif
#define SOC_VENC_MST_WR1_1CFG_wr1_tlb_nxt_START (0)
#define SOC_VENC_MST_WR1_1CFG_wr1_tlb_nxt_END (7)
#define SOC_VENC_MST_WR1_1CFG_wr1_tlb_uw_START (8)
#define SOC_VENC_MST_WR1_1CFG_wr1_tlb_uw_END (15)
#define SOC_VENC_MST_WR1_1CFG_wr1_tlb_upd_dis_START (16)
#define SOC_VENC_MST_WR1_1CFG_wr1_tlb_upd_dis_END (23)
#define SOC_VENC_MST_WR1_1CFG_wr1_tlb_upd_len_START (24)
#define SOC_VENC_MST_WR1_1CFG_wr1_tlb_upd_len_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr2_tlb_depth : 9;
        unsigned int wr2_tlb_base : 9;
        unsigned int wr2_tlb_last : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_VENC_MST_WR2_0CFG_UNION;
#endif
#define SOC_VENC_MST_WR2_0CFG_wr2_tlb_depth_START (0)
#define SOC_VENC_MST_WR2_0CFG_wr2_tlb_depth_END (8)
#define SOC_VENC_MST_WR2_0CFG_wr2_tlb_base_START (9)
#define SOC_VENC_MST_WR2_0CFG_wr2_tlb_base_END (17)
#define SOC_VENC_MST_WR2_0CFG_wr2_tlb_last_START (18)
#define SOC_VENC_MST_WR2_0CFG_wr2_tlb_last_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr2_tlb_nxt : 8;
        unsigned int wr2_tlb_uw : 8;
        unsigned int wr2_tlb_upd_dis : 8;
        unsigned int wr2_tlb_upd_len : 8;
    } reg;
} SOC_VENC_MST_WR2_1CFG_UNION;
#endif
#define SOC_VENC_MST_WR2_1CFG_wr2_tlb_nxt_START (0)
#define SOC_VENC_MST_WR2_1CFG_wr2_tlb_nxt_END (7)
#define SOC_VENC_MST_WR2_1CFG_wr2_tlb_uw_START (8)
#define SOC_VENC_MST_WR2_1CFG_wr2_tlb_uw_END (15)
#define SOC_VENC_MST_WR2_1CFG_wr2_tlb_upd_dis_START (16)
#define SOC_VENC_MST_WR2_1CFG_wr2_tlb_upd_dis_END (23)
#define SOC_VENC_MST_WR2_1CFG_wr2_tlb_upd_len_START (24)
#define SOC_VENC_MST_WR2_1CFG_wr2_tlb_upd_len_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr3_tlb_depth : 9;
        unsigned int wr3_tlb_base : 9;
        unsigned int wr3_tlb_last : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_VENC_MST_WR3_0CFG_UNION;
#endif
#define SOC_VENC_MST_WR3_0CFG_wr3_tlb_depth_START (0)
#define SOC_VENC_MST_WR3_0CFG_wr3_tlb_depth_END (8)
#define SOC_VENC_MST_WR3_0CFG_wr3_tlb_base_START (9)
#define SOC_VENC_MST_WR3_0CFG_wr3_tlb_base_END (17)
#define SOC_VENC_MST_WR3_0CFG_wr3_tlb_last_START (18)
#define SOC_VENC_MST_WR3_0CFG_wr3_tlb_last_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr3_tlb_nxt : 8;
        unsigned int wr3_tlb_uw : 8;
        unsigned int wr3_tlb_upd_dis : 8;
        unsigned int wr3_tlb_upd_len : 8;
    } reg;
} SOC_VENC_MST_WR3_1CFG_UNION;
#endif
#define SOC_VENC_MST_WR3_1CFG_wr3_tlb_nxt_START (0)
#define SOC_VENC_MST_WR3_1CFG_wr3_tlb_nxt_END (7)
#define SOC_VENC_MST_WR3_1CFG_wr3_tlb_uw_START (8)
#define SOC_VENC_MST_WR3_1CFG_wr3_tlb_uw_END (15)
#define SOC_VENC_MST_WR3_1CFG_wr3_tlb_upd_dis_START (16)
#define SOC_VENC_MST_WR3_1CFG_wr3_tlb_upd_dis_END (23)
#define SOC_VENC_MST_WR3_1CFG_wr3_tlb_upd_len_START (24)
#define SOC_VENC_MST_WR3_1CFG_wr3_tlb_upd_len_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr4_tlb_depth : 9;
        unsigned int wr4_tlb_base : 9;
        unsigned int wr4_tlb_last : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_VENC_MST_WR4_0CFG_UNION;
#endif
#define SOC_VENC_MST_WR4_0CFG_wr4_tlb_depth_START (0)
#define SOC_VENC_MST_WR4_0CFG_wr4_tlb_depth_END (8)
#define SOC_VENC_MST_WR4_0CFG_wr4_tlb_base_START (9)
#define SOC_VENC_MST_WR4_0CFG_wr4_tlb_base_END (17)
#define SOC_VENC_MST_WR4_0CFG_wr4_tlb_last_START (18)
#define SOC_VENC_MST_WR4_0CFG_wr4_tlb_last_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr4_tlb_nxt : 8;
        unsigned int wr4_tlb_uw : 8;
        unsigned int wr4_tlb_upd_dis : 8;
        unsigned int wr4_tlb_upd_len : 8;
    } reg;
} SOC_VENC_MST_WR4_1CFG_UNION;
#endif
#define SOC_VENC_MST_WR4_1CFG_wr4_tlb_nxt_START (0)
#define SOC_VENC_MST_WR4_1CFG_wr4_tlb_nxt_END (7)
#define SOC_VENC_MST_WR4_1CFG_wr4_tlb_uw_START (8)
#define SOC_VENC_MST_WR4_1CFG_wr4_tlb_uw_END (15)
#define SOC_VENC_MST_WR4_1CFG_wr4_tlb_upd_dis_START (16)
#define SOC_VENC_MST_WR4_1CFG_wr4_tlb_upd_dis_END (23)
#define SOC_VENC_MST_WR4_1CFG_wr4_tlb_upd_len_START (24)
#define SOC_VENC_MST_WR4_1CFG_wr4_tlb_upd_len_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr5_tlb_depth : 9;
        unsigned int wr5_tlb_base : 9;
        unsigned int wr5_tlb_last : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_VENC_MST_WR5_0CFG_UNION;
#endif
#define SOC_VENC_MST_WR5_0CFG_wr5_tlb_depth_START (0)
#define SOC_VENC_MST_WR5_0CFG_wr5_tlb_depth_END (8)
#define SOC_VENC_MST_WR5_0CFG_wr5_tlb_base_START (9)
#define SOC_VENC_MST_WR5_0CFG_wr5_tlb_base_END (17)
#define SOC_VENC_MST_WR5_0CFG_wr5_tlb_last_START (18)
#define SOC_VENC_MST_WR5_0CFG_wr5_tlb_last_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr5_tlb_nxt : 8;
        unsigned int wr5_tlb_uw : 8;
        unsigned int wr5_tlb_upd_dis : 8;
        unsigned int wr5_tlb_upd_len : 8;
    } reg;
} SOC_VENC_MST_WR5_1CFG_UNION;
#endif
#define SOC_VENC_MST_WR5_1CFG_wr5_tlb_nxt_START (0)
#define SOC_VENC_MST_WR5_1CFG_wr5_tlb_nxt_END (7)
#define SOC_VENC_MST_WR5_1CFG_wr5_tlb_uw_START (8)
#define SOC_VENC_MST_WR5_1CFG_wr5_tlb_uw_END (15)
#define SOC_VENC_MST_WR5_1CFG_wr5_tlb_upd_dis_START (16)
#define SOC_VENC_MST_WR5_1CFG_wr5_tlb_upd_dis_END (23)
#define SOC_VENC_MST_WR5_1CFG_wr5_tlb_upd_len_START (24)
#define SOC_VENC_MST_WR5_1CFG_wr5_tlb_upd_len_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr6_tlb_depth : 9;
        unsigned int wr6_tlb_base : 9;
        unsigned int wr6_tlb_last : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_VENC_MST_WR6_0CFG_UNION;
#endif
#define SOC_VENC_MST_WR6_0CFG_wr6_tlb_depth_START (0)
#define SOC_VENC_MST_WR6_0CFG_wr6_tlb_depth_END (8)
#define SOC_VENC_MST_WR6_0CFG_wr6_tlb_base_START (9)
#define SOC_VENC_MST_WR6_0CFG_wr6_tlb_base_END (17)
#define SOC_VENC_MST_WR6_0CFG_wr6_tlb_last_START (18)
#define SOC_VENC_MST_WR6_0CFG_wr6_tlb_last_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr6_tlb_nxt : 8;
        unsigned int wr6_tlb_uw : 8;
        unsigned int wr6_tlb_upd_dis : 8;
        unsigned int wr6_tlb_upd_len : 8;
    } reg;
} SOC_VENC_MST_WR6_1CFG_UNION;
#endif
#define SOC_VENC_MST_WR6_1CFG_wr6_tlb_nxt_START (0)
#define SOC_VENC_MST_WR6_1CFG_wr6_tlb_nxt_END (7)
#define SOC_VENC_MST_WR6_1CFG_wr6_tlb_uw_START (8)
#define SOC_VENC_MST_WR6_1CFG_wr6_tlb_uw_END (15)
#define SOC_VENC_MST_WR6_1CFG_wr6_tlb_upd_dis_START (16)
#define SOC_VENC_MST_WR6_1CFG_wr6_tlb_upd_dis_END (23)
#define SOC_VENC_MST_WR6_1CFG_wr6_tlb_upd_len_START (24)
#define SOC_VENC_MST_WR6_1CFG_wr6_tlb_upd_len_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr7_tlb_depth : 9;
        unsigned int wr7_tlb_base : 9;
        unsigned int wr7_tlb_last : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_VENC_MST_WR7_0CFG_UNION;
#endif
#define SOC_VENC_MST_WR7_0CFG_wr7_tlb_depth_START (0)
#define SOC_VENC_MST_WR7_0CFG_wr7_tlb_depth_END (8)
#define SOC_VENC_MST_WR7_0CFG_wr7_tlb_base_START (9)
#define SOC_VENC_MST_WR7_0CFG_wr7_tlb_base_END (17)
#define SOC_VENC_MST_WR7_0CFG_wr7_tlb_last_START (18)
#define SOC_VENC_MST_WR7_0CFG_wr7_tlb_last_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr7_tlb_nxt : 8;
        unsigned int wr7_tlb_uw : 8;
        unsigned int wr7_tlb_upd_dis : 8;
        unsigned int wr7_tlb_upd_len : 8;
    } reg;
} SOC_VENC_MST_WR7_1CFG_UNION;
#endif
#define SOC_VENC_MST_WR7_1CFG_wr7_tlb_nxt_START (0)
#define SOC_VENC_MST_WR7_1CFG_wr7_tlb_nxt_END (7)
#define SOC_VENC_MST_WR7_1CFG_wr7_tlb_uw_START (8)
#define SOC_VENC_MST_WR7_1CFG_wr7_tlb_uw_END (15)
#define SOC_VENC_MST_WR7_1CFG_wr7_tlb_upd_dis_START (16)
#define SOC_VENC_MST_WR7_1CFG_wr7_tlb_upd_dis_END (23)
#define SOC_VENC_MST_WR7_1CFG_wr7_tlb_upd_len_START (24)
#define SOC_VENC_MST_WR7_1CFG_wr7_tlb_upd_len_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_MST_RESERVED_3_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int axi_soft_rst_req : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VENC_MST_SOFT_RST_REQ_UNION;
#endif
#define SOC_VENC_MST_SOFT_RST_REQ_axi_soft_rst_req_START (0)
#define SOC_VENC_MST_SOFT_RST_REQ_axi_soft_rst_req_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int axi_soft_rst_ack : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VENC_MST_SOFT_RST_ACK_UNION;
#endif
#define SOC_VENC_MST_SOFT_RST_ACK_axi_soft_rst_ack_START (0)
#define SOC_VENC_MST_SOFT_RST_ACK_axi_soft_rst_ack_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_MST_RESERVED_4_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_pref_fsm : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_VENC_MST_VEDU_DFX_PREF_FSM_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_PREF_FSM_dfx_pref_fsm_START (0)
#define SOC_VENC_MST_VEDU_DFX_PREF_FSM_dfx_pref_fsm_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_ar_fsm : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_VENC_MST_VEDU_DFX_ARJDG_FSM_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_ARJDG_FSM_dfx_ar_fsm_START (0)
#define SOC_VENC_MST_VEDU_DFX_ARJDG_FSM_dfx_ar_fsm_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_aw_fsm : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_VENC_MST_VEDU_DFX_AWJDG_FSM_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_AWJDG_FSM_dfx_aw_fsm_START (0)
#define SOC_VENC_MST_VEDU_DFX_AWJDG_FSM_dfx_aw_fsm_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_MST_RESERVED_5_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mst2com_pref_vld : 1;
        unsigned int com2mst_pref_rdy : 1;
        unsigned int com2mst_pref_resp_vld : 1;
        unsigned int mst2com_pref_resp_rdy : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_VENC_MST_VEDU_DFX_PREF_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_PREF_mst2com_pref_vld_START (0)
#define SOC_VENC_MST_VEDU_DFX_PREF_mst2com_pref_vld_END (0)
#define SOC_VENC_MST_VEDU_DFX_PREF_com2mst_pref_rdy_START (1)
#define SOC_VENC_MST_VEDU_DFX_PREF_com2mst_pref_rdy_END (1)
#define SOC_VENC_MST_VEDU_DFX_PREF_com2mst_pref_resp_vld_START (2)
#define SOC_VENC_MST_VEDU_DFX_PREF_com2mst_pref_resp_vld_END (2)
#define SOC_VENC_MST_VEDU_DFX_PREF_mst2com_pref_resp_rdy_START (3)
#define SOC_VENC_MST_VEDU_DFX_PREF_mst2com_pref_resp_rdy_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int emar2mst_arvalid : 1;
        unsigned int mst2emar_arready : 1;
        unsigned int mst2com_arvalid : 1;
        unsigned int com2mst_arready : 1;
        unsigned int ar_rx_fifo_full : 1;
        unsigned int ar_rx_fifo_empty : 1;
        unsigned int ar_tx_fifo_full : 1;
        unsigned int ar_tx_fifo_empty : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_VENC_MST_VEDU_DFX_ARJDG_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_ARJDG_emar2mst_arvalid_START (0)
#define SOC_VENC_MST_VEDU_DFX_ARJDG_emar2mst_arvalid_END (0)
#define SOC_VENC_MST_VEDU_DFX_ARJDG_mst2emar_arready_START (1)
#define SOC_VENC_MST_VEDU_DFX_ARJDG_mst2emar_arready_END (1)
#define SOC_VENC_MST_VEDU_DFX_ARJDG_mst2com_arvalid_START (2)
#define SOC_VENC_MST_VEDU_DFX_ARJDG_mst2com_arvalid_END (2)
#define SOC_VENC_MST_VEDU_DFX_ARJDG_com2mst_arready_START (3)
#define SOC_VENC_MST_VEDU_DFX_ARJDG_com2mst_arready_END (3)
#define SOC_VENC_MST_VEDU_DFX_ARJDG_ar_rx_fifo_full_START (4)
#define SOC_VENC_MST_VEDU_DFX_ARJDG_ar_rx_fifo_full_END (4)
#define SOC_VENC_MST_VEDU_DFX_ARJDG_ar_rx_fifo_empty_START (5)
#define SOC_VENC_MST_VEDU_DFX_ARJDG_ar_rx_fifo_empty_END (5)
#define SOC_VENC_MST_VEDU_DFX_ARJDG_ar_tx_fifo_full_START (6)
#define SOC_VENC_MST_VEDU_DFX_ARJDG_ar_tx_fifo_full_END (6)
#define SOC_VENC_MST_VEDU_DFX_ARJDG_ar_tx_fifo_empty_START (7)
#define SOC_VENC_MST_VEDU_DFX_ARJDG_ar_tx_fifo_empty_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int emar2mst_awvalid : 1;
        unsigned int mst2emar_awready : 1;
        unsigned int mst2com_awvalid : 1;
        unsigned int com2mst_awready : 1;
        unsigned int aw_rx_fifo_full : 1;
        unsigned int aw_rx_fifo_empty : 1;
        unsigned int aw_tx_fifo_full : 1;
        unsigned int aw_tx_fifo_empty : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_VENC_MST_VEDU_DFX_AWJDG_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_AWJDG_emar2mst_awvalid_START (0)
#define SOC_VENC_MST_VEDU_DFX_AWJDG_emar2mst_awvalid_END (0)
#define SOC_VENC_MST_VEDU_DFX_AWJDG_mst2emar_awready_START (1)
#define SOC_VENC_MST_VEDU_DFX_AWJDG_mst2emar_awready_END (1)
#define SOC_VENC_MST_VEDU_DFX_AWJDG_mst2com_awvalid_START (2)
#define SOC_VENC_MST_VEDU_DFX_AWJDG_mst2com_awvalid_END (2)
#define SOC_VENC_MST_VEDU_DFX_AWJDG_com2mst_awready_START (3)
#define SOC_VENC_MST_VEDU_DFX_AWJDG_com2mst_awready_END (3)
#define SOC_VENC_MST_VEDU_DFX_AWJDG_aw_rx_fifo_full_START (4)
#define SOC_VENC_MST_VEDU_DFX_AWJDG_aw_rx_fifo_full_END (4)
#define SOC_VENC_MST_VEDU_DFX_AWJDG_aw_rx_fifo_empty_START (5)
#define SOC_VENC_MST_VEDU_DFX_AWJDG_aw_rx_fifo_empty_END (5)
#define SOC_VENC_MST_VEDU_DFX_AWJDG_aw_tx_fifo_full_START (6)
#define SOC_VENC_MST_VEDU_DFX_AWJDG_aw_tx_fifo_full_END (6)
#define SOC_VENC_MST_VEDU_DFX_AWJDG_aw_tx_fifo_empty_START (7)
#define SOC_VENC_MST_VEDU_DFX_AWJDG_aw_tx_fifo_empty_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_MST_RESERVED_6_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_pref_cnt : 32;
    } reg;
} SOC_VENC_MST_VEDU_DFX_PREF_CNT_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_PREF_CNT_dfx_pref_cnt_START (0)
#define SOC_VENC_MST_VEDU_DFX_PREF_CNT_dfx_pref_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_resp_cnt : 32;
    } reg;
} SOC_VENC_MST_VEDU_DFX_RESP_CNT_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_RESP_CNT_dfx_resp_cnt_START (0)
#define SOC_VENC_MST_VEDU_DFX_RESP_CNT_dfx_resp_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_MST_RESERVED_7_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_arin_cnt : 32;
    } reg;
} SOC_VENC_MST_VEDU_DFX_ARIN_CNT_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_ARIN_CNT_dfx_arin_cnt_START (0)
#define SOC_VENC_MST_VEDU_DFX_ARIN_CNT_dfx_arin_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_arout_cnt : 32;
    } reg;
} SOC_VENC_MST_VEDU_DFX_AROUT_CNT_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_AROUT_CNT_dfx_arout_cnt_START (0)
#define SOC_VENC_MST_VEDU_DFX_AROUT_CNT_dfx_arout_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_arout_cnt : 32;
    } reg;
} SOC_VENC_MST_VEDU_DFX_ARACK_CNT_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_ARACK_CNT_dfx_arout_cnt_START (0)
#define SOC_VENC_MST_VEDU_DFX_ARACK_CNT_dfx_arout_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_MST_RESERVED_8_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_awin_cnt : 32;
    } reg;
} SOC_VENC_MST_VEDU_DFX_AWIN_CNT_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_AWIN_CNT_dfx_awin_cnt_START (0)
#define SOC_VENC_MST_VEDU_DFX_AWIN_CNT_dfx_awin_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_awout_cnt : 32;
    } reg;
} SOC_VENC_MST_VEDU_DFX_AWOUT_CNT_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_AWOUT_CNT_dfx_awout_cnt_START (0)
#define SOC_VENC_MST_VEDU_DFX_AWOUT_CNT_dfx_awout_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_awout_cnt : 32;
    } reg;
} SOC_VENC_MST_VEDU_DFX_WOUT_CNT_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_WOUT_CNT_dfx_awout_cnt_START (0)
#define SOC_VENC_MST_VEDU_DFX_WOUT_CNT_dfx_awout_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_awout_cnt : 32;
    } reg;
} SOC_VENC_MST_VEDU_DFX_AWACK_CNT_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_AWACK_CNT_dfx_awout_cnt_START (0)
#define SOC_VENC_MST_VEDU_DFX_AWACK_CNT_dfx_awout_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_arerr_ar_flag : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VENC_MST_VEDU_DFX_ARERR_FLAG_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_ARERR_FLAG_dfx_arerr_ar_flag_START (0)
#define SOC_VENC_MST_VEDU_DFX_ARERR_FLAG_dfx_arerr_ar_flag_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_err_ar_id : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_VENC_MST_VEDU_DFX_ARERR_ID_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_ARERR_ID_dfx_err_ar_id_START (0)
#define SOC_VENC_MST_VEDU_DFX_ARERR_ID_dfx_err_ar_id_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dx_err_ar_addr : 32;
    } reg;
} SOC_VENC_MST_VEDU_DFX_ARERR_ADDR_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_ARERR_ADDR_dx_err_ar_addr_START (0)
#define SOC_VENC_MST_VEDU_DFX_ARERR_ADDR_dx_err_ar_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_MST_RESERVED_9_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_arerr_aw_flag : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VENC_MST_VEDU_DFX_AWERR_FLAG_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_AWERR_FLAG_dfx_arerr_aw_flag_START (0)
#define SOC_VENC_MST_VEDU_DFX_AWERR_FLAG_dfx_arerr_aw_flag_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_err_aw_id : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_VENC_MST_VEDU_DFX_AWERR_ID_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_AWERR_ID_dfx_err_aw_id_START (0)
#define SOC_VENC_MST_VEDU_DFX_AWERR_ID_dfx_err_aw_id_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dx_err_aw_addr : 32;
    } reg;
} SOC_VENC_MST_VEDU_DFX_AWERR_ADDR_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_AWERR_ADDR_dx_err_aw_addr_START (0)
#define SOC_VENC_MST_VEDU_DFX_AWERR_ADDR_dx_err_aw_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_MST_RESERVED_10_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_pref_err : 18;
        unsigned int reserved : 14;
    } reg;
} SOC_VENC_MST_VEDU_DFX_PREF_FLAG_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_PREF_FLAG_dfx_pref_err_START (0)
#define SOC_VENC_MST_VEDU_DFX_PREF_FLAG_dfx_pref_err_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_MST_RESERVED_11_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_miss_flag : 18;
        unsigned int reserved : 14;
    } reg;
} SOC_VENC_MST_VEDU_DFX_MISS_FLAG_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_MISS_FLAG_dfx_miss_flag_START (0)
#define SOC_VENC_MST_VEDU_DFX_MISS_FLAG_dfx_miss_flag_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_MST_RESERVED_12_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ar_press_cnt : 32;
    } reg;
} SOC_VENC_MST_VEDU_AR_PRESS_CNT_UNION;
#endif
#define SOC_VENC_MST_VEDU_AR_PRESS_CNT_ar_press_cnt_START (0)
#define SOC_VENC_MST_VEDU_AR_PRESS_CNT_ar_press_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int aw_press_cnt : 32;
    } reg;
} SOC_VENC_MST_VEDU_AW_PRESS_CNT_UNION;
#endif
#define SOC_VENC_MST_VEDU_AW_PRESS_CNT_aw_press_cnt_START (0)
#define SOC_VENC_MST_VEDU_AW_PRESS_CNT_aw_press_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_MST_RESERVED_13_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_tx_rd_err : 1;
        unsigned int dfx_rx_rd_err : 1;
        unsigned int dfx_tx_wr_err : 1;
        unsigned int dfx_rx_wr_err : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_VENC_MST_VEDU_DFX_ID_FLAG_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_ID_FLAG_dfx_tx_rd_err_START (0)
#define SOC_VENC_MST_VEDU_DFX_ID_FLAG_dfx_tx_rd_err_END (0)
#define SOC_VENC_MST_VEDU_DFX_ID_FLAG_dfx_rx_rd_err_START (1)
#define SOC_VENC_MST_VEDU_DFX_ID_FLAG_dfx_rx_rd_err_END (1)
#define SOC_VENC_MST_VEDU_DFX_ID_FLAG_dfx_tx_wr_err_START (2)
#define SOC_VENC_MST_VEDU_DFX_ID_FLAG_dfx_tx_wr_err_END (2)
#define SOC_VENC_MST_VEDU_DFX_ID_FLAG_dfx_rx_wr_err_START (3)
#define SOC_VENC_MST_VEDU_DFX_ID_FLAG_dfx_rx_wr_err_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_ar_dec : 1;
        unsigned int dfx_r_dec : 1;
        unsigned int dfx_aw_dec : 1;
        unsigned int dfx_w_dec : 1;
        unsigned int dfx_b_dec : 1;
        unsigned int reserved : 27;
    } reg;
} SOC_VENC_MST_VEDU_DFX_AXI_BUS_DEC_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_AXI_BUS_DEC_dfx_ar_dec_START (0)
#define SOC_VENC_MST_VEDU_DFX_AXI_BUS_DEC_dfx_ar_dec_END (0)
#define SOC_VENC_MST_VEDU_DFX_AXI_BUS_DEC_dfx_r_dec_START (1)
#define SOC_VENC_MST_VEDU_DFX_AXI_BUS_DEC_dfx_r_dec_END (1)
#define SOC_VENC_MST_VEDU_DFX_AXI_BUS_DEC_dfx_aw_dec_START (2)
#define SOC_VENC_MST_VEDU_DFX_AXI_BUS_DEC_dfx_aw_dec_END (2)
#define SOC_VENC_MST_VEDU_DFX_AXI_BUS_DEC_dfx_w_dec_START (3)
#define SOC_VENC_MST_VEDU_DFX_AXI_BUS_DEC_dfx_w_dec_END (3)
#define SOC_VENC_MST_VEDU_DFX_AXI_BUS_DEC_dfx_b_dec_START (4)
#define SOC_VENC_MST_VEDU_DFX_AXI_BUS_DEC_dfx_b_dec_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_MST_RESERVED_14_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ar_press_cnt : 32;
    } reg;
} SOC_VENC_MST_VEDU_DFX_RD_FLAG_LOW_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_RD_FLAG_LOW_ar_press_cnt_START (0)
#define SOC_VENC_MST_VEDU_DFX_RD_FLAG_LOW_ar_press_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int aw_press_cnt : 32;
    } reg;
} SOC_VENC_MST_VEDU_DFX_RD_FLAG_HIGH_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_RD_FLAG_HIGH_aw_press_cnt_START (0)
#define SOC_VENC_MST_VEDU_DFX_RD_FLAG_HIGH_aw_press_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ar_press_cnt : 32;
    } reg;
} SOC_VENC_MST_VEDU_DFX_WR_FLAG_LOW_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_WR_FLAG_LOW_ar_press_cnt_START (0)
#define SOC_VENC_MST_VEDU_DFX_WR_FLAG_LOW_ar_press_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int aw_press_cnt : 32;
    } reg;
} SOC_VENC_MST_VEDU_DFX_WR_FLAG_HIGH_UNION;
#endif
#define SOC_VENC_MST_VEDU_DFX_WR_FLAG_HIGH_aw_press_cnt_START (0)
#define SOC_VENC_MST_VEDU_DFX_WR_FLAG_HIGH_aw_press_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_MST_RESERVED_15_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_protocol : 2;
        unsigned int vcpi_str_fmt : 4;
        unsigned int reserved : 26;
    } reg;
} SOC_VENC_MST_VEDU_MODE_MMU_UNION;
#endif
#define SOC_VENC_MST_VEDU_MODE_MMU_vcpi_protocol_START (0)
#define SOC_VENC_MST_VEDU_MODE_MMU_vcpi_protocol_END (1)
#define SOC_VENC_MST_VEDU_MODE_MMU_vcpi_str_fmt_START (2)
#define SOC_VENC_MST_VEDU_MODE_MMU_vcpi_str_fmt_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_MST_RESERVED_20_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mvst_address_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_NBI_MVST_ADDR_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_NBI_MVST_ADDR_STR_mvst_address_str_START (0)
#define SOC_VENC_MST_VEDU_NBI_MVST_ADDR_STR_mvst_address_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mvst_address_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_NBI_MVST_ADDR_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_NBI_MVST_ADDR_END_mvst_address_end_START (0)
#define SOC_VENC_MST_VEDU_NBI_MVST_ADDR_END_mvst_address_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mvld_address_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_NBI_MVLD_ADDR_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_NBI_MVLD_ADDR_STR_mvld_address_str_START (0)
#define SOC_VENC_MST_VEDU_NBI_MVLD_ADDR_STR_mvld_address_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mvld_address_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_NBI_MVLD_ADDR_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_NBI_MVLD_ADDR_END_mvld_address_end_START (0)
#define SOC_VENC_MST_VEDU_NBI_MVLD_ADDR_END_mvld_address_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_pmest_addr_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_PMEST_ADDR_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_PMEST_ADDR_STR_vcpi_pmest_addr_str_START (0)
#define SOC_VENC_MST_VEDU_PMEST_ADDR_STR_vcpi_pmest_addr_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_pmest_addr_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_PMEST_ADDR_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_PMEST_ADDR_END_vcpi_pmest_addr_end_START (0)
#define SOC_VENC_MST_VEDU_PMEST_ADDR_END_vcpi_pmest_addr_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_pmeld_addr_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_PMELD_ADDR_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_PMELD_ADDR_STR_vcpi_pmeld_addr_str_START (0)
#define SOC_VENC_MST_VEDU_PMELD_ADDR_STR_vcpi_pmeld_addr_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_pmeld_addr_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_PMELD_ADDR_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_PMELD_ADDR_END_vcpi_pmeld_addr_end_START (0)
#define SOC_VENC_MST_VEDU_PMELD_ADDR_END_vcpi_pmeld_addr_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_yh_addr_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_REC_YH_ADDR_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_REC_YH_ADDR_STR_recst_yh_addr_str_START (0)
#define SOC_VENC_MST_VEDU_REC_YH_ADDR_STR_recst_yh_addr_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_yh_addr_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_REC_YH_ADDR_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_REC_YH_ADDR_END_recst_yh_addr_end_START (0)
#define SOC_VENC_MST_VEDU_REC_YH_ADDR_END_recst_yh_addr_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_ch_addr_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_REC_CH_ADDR_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_REC_CH_ADDR_STR_recst_ch_addr_str_START (0)
#define SOC_VENC_MST_VEDU_REC_CH_ADDR_STR_recst_ch_addr_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_ch_addr_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_REC_CH_ADDR_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_REC_CH_ADDR_END_recst_ch_addr_end_START (0)
#define SOC_VENC_MST_VEDU_REC_CH_ADDR_END_recst_ch_addr_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_yaddr_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_REC_YADDR_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_REC_YADDR_STR_recst_yaddr_str_START (0)
#define SOC_VENC_MST_VEDU_REC_YADDR_STR_recst_yaddr_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_yaddr_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_REC_YADDR_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_REC_YADDR_END_recst_yaddr_end_START (0)
#define SOC_VENC_MST_VEDU_REC_YADDR_END_recst_yaddr_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_caddr_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_REC_CADDR_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_REC_CADDR_STR_recst_caddr_str_START (0)
#define SOC_VENC_MST_VEDU_REC_CADDR_STR_recst_caddr_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int recst_caddr_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_REC_CADDR_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_REC_CADDR_END_recst_caddr_end_START (0)
#define SOC_VENC_MST_VEDU_REC_CADDR_END_recst_caddr_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refld_yh_addr_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_REF_YH_ADDR_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_REF_YH_ADDR_STR_refld_yh_addr_str_START (0)
#define SOC_VENC_MST_VEDU_REF_YH_ADDR_STR_refld_yh_addr_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refld_yh_addr_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_REF_YH_ADDR_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_REF_YH_ADDR_END_refld_yh_addr_end_START (0)
#define SOC_VENC_MST_VEDU_REF_YH_ADDR_END_refld_yh_addr_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refld_ch_addr_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_REF_CH_ADDR_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_REF_CH_ADDR_STR_refld_ch_addr_str_START (0)
#define SOC_VENC_MST_VEDU_REF_CH_ADDR_STR_refld_ch_addr_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refld_ch_addr_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_REF_CH_ADDR_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_REF_CH_ADDR_END_refld_ch_addr_end_START (0)
#define SOC_VENC_MST_VEDU_REF_CH_ADDR_END_refld_ch_addr_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refld_luma_addr_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_REF_YADDR_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_REF_YADDR_STR_refld_luma_addr_str_START (0)
#define SOC_VENC_MST_VEDU_REF_YADDR_STR_refld_luma_addr_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refld_luma_addr_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_REF_YADDR_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_REF_YADDR_END_refld_luma_addr_end_START (0)
#define SOC_VENC_MST_VEDU_REF_YADDR_END_refld_luma_addr_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refld_chroma_addr_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_REF_CADDR_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_REF_CADDR_STR_refld_chroma_addr_str_START (0)
#define SOC_VENC_MST_VEDU_REF_CADDR_STR_refld_chroma_addr_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refld_chroma_addr_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_REF_CADDR_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_REF_CADDR_END_refld_chroma_addr_end_START (0)
#define SOC_VENC_MST_VEDU_REF_CADDR_END_refld_chroma_addr_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_y_addr_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_SRC_YADDR_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_SRC_YADDR_STR_curld_y_addr_str_START (0)
#define SOC_VENC_MST_VEDU_SRC_YADDR_STR_curld_y_addr_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_y_addr_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_SRC_YADDR_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_SRC_YADDR_END_curld_y_addr_end_START (0)
#define SOC_VENC_MST_VEDU_SRC_YADDR_END_curld_y_addr_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_c_addr_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_SRC_CADDR_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_SRC_CADDR_STR_curld_c_addr_str_START (0)
#define SOC_VENC_MST_VEDU_SRC_CADDR_STR_curld_c_addr_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_c_addr_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_SRC_CADDR_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_SRC_CADDR_END_curld_c_addr_end_START (0)
#define SOC_VENC_MST_VEDU_SRC_CADDR_END_curld_c_addr_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_v_addr_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_SRC_VADDR_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_SRC_VADDR_STR_curld_v_addr_str_START (0)
#define SOC_VENC_MST_VEDU_SRC_VADDR_STR_curld_v_addr_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curld_v_addr_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_SRC_VADDR_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_SRC_VADDR_END_curld_v_addr_end_START (0)
#define SOC_VENC_MST_VEDU_SRC_VADDR_END_curld_v_addr_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lat_addr_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_LAT_ADDR_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_LAT_ADDR_STR_lat_addr_str_START (0)
#define SOC_VENC_MST_VEDU_LAT_ADDR_STR_lat_addr_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lat_addr_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_LAT_ADDR_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_LAT_ADDR_END_lat_addr_end_START (0)
#define SOC_VENC_MST_VEDU_LAT_ADDR_END_lat_addr_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pps_addr_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_PPS_ADDR_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_PPS_ADDR_STR_pps_addr_str_START (0)
#define SOC_VENC_MST_VEDU_PPS_ADDR_STR_pps_addr_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pps_addr_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_PPS_ADDR_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_PPS_ADDR_END_pps_addr_end_START (0)
#define SOC_VENC_MST_VEDU_PPS_ADDR_END_pps_addr_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_MST_RESERVED_21_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr0_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR0_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR0_STR_vcpi_strmaddr0_str_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR0_STR_vcpi_strmaddr0_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr1_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR1_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR1_STR_vcpi_strmaddr1_str_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR1_STR_vcpi_strmaddr1_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr2_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR2_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR2_STR_vcpi_strmaddr2_str_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR2_STR_vcpi_strmaddr2_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr3_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR3_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR3_STR_vcpi_strmaddr3_str_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR3_STR_vcpi_strmaddr3_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr4_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR4_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR4_STR_vcpi_strmaddr4_str_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR4_STR_vcpi_strmaddr4_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr5_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR5_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR5_STR_vcpi_strmaddr5_str_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR5_STR_vcpi_strmaddr5_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr6_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR6_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR6_STR_vcpi_strmaddr6_str_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR6_STR_vcpi_strmaddr6_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr7_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR7_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR7_STR_vcpi_strmaddr7_str_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR7_STR_vcpi_strmaddr7_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr8_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR8_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR8_STR_vcpi_strmaddr8_str_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR8_STR_vcpi_strmaddr8_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr9_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR9_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR9_STR_vcpi_strmaddr9_str_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR9_STR_vcpi_strmaddr9_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr10_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR10_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR10_STR_vcpi_strmaddr10_str_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR10_STR_vcpi_strmaddr10_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr11_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR11_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR11_STR_vcpi_strmaddr11_str_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR11_STR_vcpi_strmaddr11_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr12_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR12_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR12_STR_vcpi_strmaddr12_str_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR12_STR_vcpi_strmaddr12_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr13_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR13_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR13_STR_vcpi_strmaddr13_str_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR13_STR_vcpi_strmaddr13_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr14_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR14_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR14_STR_vcpi_strmaddr14_str_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR14_STR_vcpi_strmaddr14_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr15_str : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR15_STR_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR15_STR_vcpi_strmaddr15_str_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR15_STR_vcpi_strmaddr15_str_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr0_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR0_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR0_END_vcpi_strmaddr0_end_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR0_END_vcpi_strmaddr0_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr1_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR1_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR1_END_vcpi_strmaddr1_end_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR1_END_vcpi_strmaddr1_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr2_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR2_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR2_END_vcpi_strmaddr2_end_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR2_END_vcpi_strmaddr2_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr3_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR3_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR3_END_vcpi_strmaddr3_end_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR3_END_vcpi_strmaddr3_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr4_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR4_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR4_END_vcpi_strmaddr4_end_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR4_END_vcpi_strmaddr4_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr5_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR5_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR5_END_vcpi_strmaddr5_end_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR5_END_vcpi_strmaddr5_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr6_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR6_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR6_END_vcpi_strmaddr6_end_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR6_END_vcpi_strmaddr6_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr7_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR7_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR7_END_vcpi_strmaddr7_end_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR7_END_vcpi_strmaddr7_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr8_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR8_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR8_END_vcpi_strmaddr8_end_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR8_END_vcpi_strmaddr8_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr9_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR9_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR9_END_vcpi_strmaddr9_end_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR9_END_vcpi_strmaddr9_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr10_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR10_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR10_END_vcpi_strmaddr10_end_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR10_END_vcpi_strmaddr10_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr11_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR11_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR11_END_vcpi_strmaddr11_end_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR11_END_vcpi_strmaddr11_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr12_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR12_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR12_END_vcpi_strmaddr12_end_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR12_END_vcpi_strmaddr12_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr13_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR13_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR13_END_vcpi_strmaddr13_end_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR13_END_vcpi_strmaddr13_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr14_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR14_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR14_END_vcpi_strmaddr14_end_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR14_END_vcpi_strmaddr14_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vcpi_strmaddr15_end : 32;
    } reg;
} SOC_VENC_MST_VEDU_STRMADDR15_END_UNION;
#endif
#define SOC_VENC_MST_VEDU_STRMADDR15_END_vcpi_strmaddr15_end_START (0)
#define SOC_VENC_MST_VEDU_STRMADDR15_END_vcpi_strmaddr15_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_MST_RESERVED_23_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_ar_r_err : 1;
        unsigned int dfx_aw_w_err : 1;
        unsigned int dfx_aw_b_err : 1;
        unsigned int dfx_arid_err : 1;
        unsigned int dfx_rid_err : 1;
        unsigned int dfx_awid_err : 1;
        unsigned int dfx_wid_err : 1;
        unsigned int dfx_bid_err : 1;
        unsigned int dfx_arid_tx_err : 1;
        unsigned int dfx_rid_rx_err : 1;
        unsigned int dfx_awid_tx_err : 1;
        unsigned int dfx_bid_rx_err : 1;
        unsigned int dfx_arid_len_err : 1;
        unsigned int dfx_awid_len : 1;
        unsigned int dfx_rresp_err : 1;
        unsigned int dfx_bresp_err : 1;
        unsigned int dfx_ar_ovr_err : 1;
        unsigned int dfx_r_ovr_err : 1;
        unsigned int dfx_aw_ovr_err : 1;
        unsigned int dfx_w_ovr_err : 1;
        unsigned int dfx_b_ovr_err : 1;
        unsigned int dfx_ar_outstanding_err : 1;
        unsigned int dfx_aw_outstanding_err : 1;
        unsigned int dfx_arlen_err : 1;
        unsigned int dfx_awlen_err : 1;
        unsigned int reserved : 7;
    } reg;
} SOC_VENC_DFX_ERR_UNION;
#endif
#define SOC_VENC_DFX_ERR_dfx_ar_r_err_START (0)
#define SOC_VENC_DFX_ERR_dfx_ar_r_err_END (0)
#define SOC_VENC_DFX_ERR_dfx_aw_w_err_START (1)
#define SOC_VENC_DFX_ERR_dfx_aw_w_err_END (1)
#define SOC_VENC_DFX_ERR_dfx_aw_b_err_START (2)
#define SOC_VENC_DFX_ERR_dfx_aw_b_err_END (2)
#define SOC_VENC_DFX_ERR_dfx_arid_err_START (3)
#define SOC_VENC_DFX_ERR_dfx_arid_err_END (3)
#define SOC_VENC_DFX_ERR_dfx_rid_err_START (4)
#define SOC_VENC_DFX_ERR_dfx_rid_err_END (4)
#define SOC_VENC_DFX_ERR_dfx_awid_err_START (5)
#define SOC_VENC_DFX_ERR_dfx_awid_err_END (5)
#define SOC_VENC_DFX_ERR_dfx_wid_err_START (6)
#define SOC_VENC_DFX_ERR_dfx_wid_err_END (6)
#define SOC_VENC_DFX_ERR_dfx_bid_err_START (7)
#define SOC_VENC_DFX_ERR_dfx_bid_err_END (7)
#define SOC_VENC_DFX_ERR_dfx_arid_tx_err_START (8)
#define SOC_VENC_DFX_ERR_dfx_arid_tx_err_END (8)
#define SOC_VENC_DFX_ERR_dfx_rid_rx_err_START (9)
#define SOC_VENC_DFX_ERR_dfx_rid_rx_err_END (9)
#define SOC_VENC_DFX_ERR_dfx_awid_tx_err_START (10)
#define SOC_VENC_DFX_ERR_dfx_awid_tx_err_END (10)
#define SOC_VENC_DFX_ERR_dfx_bid_rx_err_START (11)
#define SOC_VENC_DFX_ERR_dfx_bid_rx_err_END (11)
#define SOC_VENC_DFX_ERR_dfx_arid_len_err_START (12)
#define SOC_VENC_DFX_ERR_dfx_arid_len_err_END (12)
#define SOC_VENC_DFX_ERR_dfx_awid_len_START (13)
#define SOC_VENC_DFX_ERR_dfx_awid_len_END (13)
#define SOC_VENC_DFX_ERR_dfx_rresp_err_START (14)
#define SOC_VENC_DFX_ERR_dfx_rresp_err_END (14)
#define SOC_VENC_DFX_ERR_dfx_bresp_err_START (15)
#define SOC_VENC_DFX_ERR_dfx_bresp_err_END (15)
#define SOC_VENC_DFX_ERR_dfx_ar_ovr_err_START (16)
#define SOC_VENC_DFX_ERR_dfx_ar_ovr_err_END (16)
#define SOC_VENC_DFX_ERR_dfx_r_ovr_err_START (17)
#define SOC_VENC_DFX_ERR_dfx_r_ovr_err_END (17)
#define SOC_VENC_DFX_ERR_dfx_aw_ovr_err_START (18)
#define SOC_VENC_DFX_ERR_dfx_aw_ovr_err_END (18)
#define SOC_VENC_DFX_ERR_dfx_w_ovr_err_START (19)
#define SOC_VENC_DFX_ERR_dfx_w_ovr_err_END (19)
#define SOC_VENC_DFX_ERR_dfx_b_ovr_err_START (20)
#define SOC_VENC_DFX_ERR_dfx_b_ovr_err_END (20)
#define SOC_VENC_DFX_ERR_dfx_ar_outstanding_err_START (21)
#define SOC_VENC_DFX_ERR_dfx_ar_outstanding_err_END (21)
#define SOC_VENC_DFX_ERR_dfx_aw_outstanding_err_START (22)
#define SOC_VENC_DFX_ERR_dfx_aw_outstanding_err_END (22)
#define SOC_VENC_DFX_ERR_dfx_arlen_err_START (23)
#define SOC_VENC_DFX_ERR_dfx_arlen_err_END (23)
#define SOC_VENC_DFX_ERR_dfx_awlen_err_START (24)
#define SOC_VENC_DFX_ERR_dfx_awlen_err_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_DFX_RESERVED_1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ar_r_cnt : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_VENC_DFX_AR_R_CNT_UNION;
#endif
#define SOC_VENC_DFX_AR_R_CNT_ar_r_cnt_START (0)
#define SOC_VENC_DFX_AR_R_CNT_ar_r_cnt_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int aw_w_cnt : 6;
        unsigned int reserved : 26;
    } reg;
} SOC_VENC_DFX_AW_W_CNT_UNION;
#endif
#define SOC_VENC_DFX_AW_W_CNT_aw_w_cnt_START (0)
#define SOC_VENC_DFX_AW_W_CNT_aw_w_cnt_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int aw_b_cnt : 6;
        unsigned int reserved : 26;
    } reg;
} SOC_VENC_DFX_AW_B_CNT_UNION;
#endif
#define SOC_VENC_DFX_AW_B_CNT_aw_b_cnt_START (0)
#define SOC_VENC_DFX_AW_B_CNT_aw_b_cnt_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_DFX_RESERVED_2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_arid_err : 1;
        unsigned int reserved_0 : 3;
        unsigned int dfx_rid_err : 1;
        unsigned int reserved_1 : 27;
    } reg;
} SOC_VENC_dfx_AR_R_ID_ERR_UNION;
#endif
#define SOC_VENC_dfx_AR_R_ID_ERR_dfx_arid_err_START (0)
#define SOC_VENC_dfx_AR_R_ID_ERR_dfx_arid_err_END (0)
#define SOC_VENC_dfx_AR_R_ID_ERR_dfx_rid_err_START (4)
#define SOC_VENC_dfx_AR_R_ID_ERR_dfx_rid_err_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_err_arid : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_VENC_DFX_ERR_ARID_UNION;
#endif
#define SOC_VENC_DFX_ERR_ARID_dfx_err_arid_START (0)
#define SOC_VENC_DFX_ERR_ARID_dfx_err_arid_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_err_rid : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_VENC_DFX_ERR_RID_UNION;
#endif
#define SOC_VENC_DFX_ERR_RID_dfx_err_rid_START (0)
#define SOC_VENC_DFX_ERR_RID_dfx_err_rid_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_RESERVED_3_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_awid_err : 1;
        unsigned int reserved_0 : 3;
        unsigned int dfx_wid_err : 1;
        unsigned int reserved_1 : 3;
        unsigned int dfx_bid_err : 1;
        unsigned int reserved_2 : 23;
    } reg;
} SOC_VENC_dfx_AW_W_B_ID_ERR_UNION;
#endif
#define SOC_VENC_dfx_AW_W_B_ID_ERR_dfx_awid_err_START (0)
#define SOC_VENC_dfx_AW_W_B_ID_ERR_dfx_awid_err_END (0)
#define SOC_VENC_dfx_AW_W_B_ID_ERR_dfx_wid_err_START (4)
#define SOC_VENC_dfx_AW_W_B_ID_ERR_dfx_wid_err_END (4)
#define SOC_VENC_dfx_AW_W_B_ID_ERR_dfx_bid_err_START (8)
#define SOC_VENC_dfx_AW_W_B_ID_ERR_dfx_bid_err_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_err_awid : 6;
        unsigned int reserved : 26;
    } reg;
} SOC_VENC_DFX_ERR_AWID_UNION;
#endif
#define SOC_VENC_DFX_ERR_AWID_dfx_err_awid_START (0)
#define SOC_VENC_DFX_ERR_AWID_dfx_err_awid_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_err_wid : 6;
        unsigned int reserved : 26;
    } reg;
} SOC_VENC_DFX_ERR_WID_UNION;
#endif
#define SOC_VENC_DFX_ERR_WID_dfx_err_wid_START (0)
#define SOC_VENC_DFX_ERR_WID_dfx_err_wid_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_err_bid : 6;
        unsigned int reserved : 26;
    } reg;
} SOC_VENC_DFX_ERR_BID_UNION;
#endif
#define SOC_VENC_DFX_ERR_BID_dfx_err_bid_START (0)
#define SOC_VENC_DFX_ERR_BID_dfx_err_bid_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_arid0_tx_err : 1;
        unsigned int dfx_arid1_tx_err : 1;
        unsigned int dfx_arid2_tx_err : 1;
        unsigned int dfx_arid3_tx_err : 1;
        unsigned int dfx_arid4_tx_err : 1;
        unsigned int dfx_arid5_tx_err : 1;
        unsigned int dfx_arid6_tx_err : 1;
        unsigned int dfx_arid7_tx_err : 1;
        unsigned int dfx_arid8_tx_err : 1;
        unsigned int dfx_arid9_tx_err : 1;
        unsigned int dfx_arid10_tx_err : 1;
        unsigned int dfx_arid11_tx_err : 1;
        unsigned int dfx_arid12_tx_err : 1;
        unsigned int dfx_arid13_tx_err : 1;
        unsigned int dfx_arid14_tx_err : 1;
        unsigned int dfx_arid15_tx_err : 1;
        unsigned int dfx_arid16_tx_err : 1;
        unsigned int dfx_arid17_tx_err : 1;
        unsigned int dfx_arid18_tx_err : 1;
        unsigned int dfx_arid19_tx_err : 1;
        unsigned int dfx_arid20_tx_err : 1;
        unsigned int dfx_arid21_tx_err : 1;
        unsigned int dfx_arid22_tx_err : 1;
        unsigned int dfx_arid23_tx_err : 1;
        unsigned int dfx_arid24_tx_err : 1;
        unsigned int dfx_arid25_tx_err : 1;
        unsigned int dfx_arid26_tx_err : 1;
        unsigned int dfx_arid27_tx_err : 1;
        unsigned int dfx_arid28_tx_err : 1;
        unsigned int dfx_arid29_tx_err : 1;
        unsigned int dfx_arid30_tx_err : 1;
        unsigned int dfx_arid31_tx_err : 1;
    } reg;
} SOC_VENC_DFX_ARID_TX_0ERR_UNION;
#endif
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid0_tx_err_START (0)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid0_tx_err_END (0)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid1_tx_err_START (1)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid1_tx_err_END (1)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid2_tx_err_START (2)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid2_tx_err_END (2)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid3_tx_err_START (3)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid3_tx_err_END (3)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid4_tx_err_START (4)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid4_tx_err_END (4)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid5_tx_err_START (5)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid5_tx_err_END (5)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid6_tx_err_START (6)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid6_tx_err_END (6)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid7_tx_err_START (7)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid7_tx_err_END (7)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid8_tx_err_START (8)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid8_tx_err_END (8)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid9_tx_err_START (9)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid9_tx_err_END (9)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid10_tx_err_START (10)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid10_tx_err_END (10)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid11_tx_err_START (11)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid11_tx_err_END (11)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid12_tx_err_START (12)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid12_tx_err_END (12)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid13_tx_err_START (13)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid13_tx_err_END (13)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid14_tx_err_START (14)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid14_tx_err_END (14)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid15_tx_err_START (15)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid15_tx_err_END (15)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid16_tx_err_START (16)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid16_tx_err_END (16)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid17_tx_err_START (17)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid17_tx_err_END (17)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid18_tx_err_START (18)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid18_tx_err_END (18)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid19_tx_err_START (19)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid19_tx_err_END (19)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid20_tx_err_START (20)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid20_tx_err_END (20)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid21_tx_err_START (21)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid21_tx_err_END (21)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid22_tx_err_START (22)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid22_tx_err_END (22)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid23_tx_err_START (23)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid23_tx_err_END (23)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid24_tx_err_START (24)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid24_tx_err_END (24)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid25_tx_err_START (25)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid25_tx_err_END (25)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid26_tx_err_START (26)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid26_tx_err_END (26)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid27_tx_err_START (27)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid27_tx_err_END (27)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid28_tx_err_START (28)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid28_tx_err_END (28)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid29_tx_err_START (29)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid29_tx_err_END (29)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid30_tx_err_START (30)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid30_tx_err_END (30)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid31_tx_err_START (31)
#define SOC_VENC_DFX_ARID_TX_0ERR_dfx_arid31_tx_err_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_arid32_tx_err : 1;
        unsigned int dfx_arid33_tx_err : 1;
        unsigned int dfx_arid34_tx_err : 1;
        unsigned int dfx_arid35_tx_err : 1;
        unsigned int dfx_arid36_tx_err : 1;
        unsigned int dfx_arid37_tx_err : 1;
        unsigned int dfx_arid38_tx_err : 1;
        unsigned int dfx_arid39_tx_err : 1;
        unsigned int dfx_arid40_tx_err : 1;
        unsigned int dfx_arid41_tx_err : 1;
        unsigned int dfx_arid42_tx_err : 1;
        unsigned int dfx_arid43_tx_err : 1;
        unsigned int dfx_arid44_tx_err : 1;
        unsigned int dfx_arid45_tx_err : 1;
        unsigned int dfx_arid46_tx_err : 1;
        unsigned int dfx_arid47_tx_err : 1;
        unsigned int dfx_arid48_tx_err : 1;
        unsigned int dfx_arid49_tx_err : 1;
        unsigned int dfx_arid50_tx_err : 1;
        unsigned int dfx_arid51_tx_err : 1;
        unsigned int dfx_arid52_tx_err : 1;
        unsigned int dfx_arid53_tx_err : 1;
        unsigned int dfx_arid54_tx_err : 1;
        unsigned int dfx_arid55_tx_err : 1;
        unsigned int dfx_arid56_tx_err : 1;
        unsigned int dfx_arid57_tx_err : 1;
        unsigned int dfx_arid58_tx_err : 1;
        unsigned int dfx_arid59_tx_err : 1;
        unsigned int dfx_arid60_tx_err : 1;
        unsigned int dfx_arid61_tx_err : 1;
        unsigned int dfx_arid62_tx_err : 1;
        unsigned int dfx_arid63_tx_err : 1;
    } reg;
} SOC_VENC_DFX_ARID_TX_1ERR_UNION;
#endif
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid32_tx_err_START (0)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid32_tx_err_END (0)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid33_tx_err_START (1)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid33_tx_err_END (1)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid34_tx_err_START (2)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid34_tx_err_END (2)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid35_tx_err_START (3)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid35_tx_err_END (3)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid36_tx_err_START (4)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid36_tx_err_END (4)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid37_tx_err_START (5)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid37_tx_err_END (5)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid38_tx_err_START (6)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid38_tx_err_END (6)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid39_tx_err_START (7)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid39_tx_err_END (7)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid40_tx_err_START (8)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid40_tx_err_END (8)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid41_tx_err_START (9)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid41_tx_err_END (9)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid42_tx_err_START (10)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid42_tx_err_END (10)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid43_tx_err_START (11)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid43_tx_err_END (11)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid44_tx_err_START (12)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid44_tx_err_END (12)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid45_tx_err_START (13)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid45_tx_err_END (13)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid46_tx_err_START (14)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid46_tx_err_END (14)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid47_tx_err_START (15)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid47_tx_err_END (15)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid48_tx_err_START (16)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid48_tx_err_END (16)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid49_tx_err_START (17)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid49_tx_err_END (17)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid50_tx_err_START (18)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid50_tx_err_END (18)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid51_tx_err_START (19)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid51_tx_err_END (19)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid52_tx_err_START (20)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid52_tx_err_END (20)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid53_tx_err_START (21)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid53_tx_err_END (21)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid54_tx_err_START (22)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid54_tx_err_END (22)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid55_tx_err_START (23)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid55_tx_err_END (23)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid56_tx_err_START (24)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid56_tx_err_END (24)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid57_tx_err_START (25)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid57_tx_err_END (25)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid58_tx_err_START (26)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid58_tx_err_END (26)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid59_tx_err_START (27)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid59_tx_err_END (27)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid60_tx_err_START (28)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid60_tx_err_END (28)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid61_tx_err_START (29)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid61_tx_err_END (29)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid62_tx_err_START (30)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid62_tx_err_END (30)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid63_tx_err_START (31)
#define SOC_VENC_DFX_ARID_TX_1ERR_dfx_arid63_tx_err_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_arid64_tx_err : 1;
        unsigned int dfx_arid65_tx_err : 1;
        unsigned int dfx_arid66_tx_err : 1;
        unsigned int dfx_arid67_tx_err : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_VENC_DFX_ARID_TX_2ERR_UNION;
#endif
#define SOC_VENC_DFX_ARID_TX_2ERR_dfx_arid64_tx_err_START (0)
#define SOC_VENC_DFX_ARID_TX_2ERR_dfx_arid64_tx_err_END (0)
#define SOC_VENC_DFX_ARID_TX_2ERR_dfx_arid65_tx_err_START (1)
#define SOC_VENC_DFX_ARID_TX_2ERR_dfx_arid65_tx_err_END (1)
#define SOC_VENC_DFX_ARID_TX_2ERR_dfx_arid66_tx_err_START (2)
#define SOC_VENC_DFX_ARID_TX_2ERR_dfx_arid66_tx_err_END (2)
#define SOC_VENC_DFX_ARID_TX_2ERR_dfx_arid67_tx_err_START (3)
#define SOC_VENC_DFX_ARID_TX_2ERR_dfx_arid67_tx_err_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_RESERVED_4_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_rid0_rx_err : 1;
        unsigned int dfx_rid1_rx_err : 1;
        unsigned int dfx_rid2_rx_err : 1;
        unsigned int dfx_rid3_rx_err : 1;
        unsigned int dfx_rid4_rx_err : 1;
        unsigned int dfx_rid5_rx_err : 1;
        unsigned int dfx_rid6_rx_err : 1;
        unsigned int dfx_rid7_rx_err : 1;
        unsigned int dfx_rid8_rx_err : 1;
        unsigned int dfx_rid9_rx_err : 1;
        unsigned int dfx_rid10_rx_err : 1;
        unsigned int dfx_rid11_rx_err : 1;
        unsigned int dfx_rid12_rx_err : 1;
        unsigned int dfx_rid13_rx_err : 1;
        unsigned int dfx_rid14_rx_err : 1;
        unsigned int dfx_rid15_rx_err : 1;
        unsigned int dfx_rid16_rx_err : 1;
        unsigned int dfx_rid17_rx_err : 1;
        unsigned int dfx_rid18_rx_err : 1;
        unsigned int dfx_rid19_rx_err : 1;
        unsigned int dfx_rid20_rx_err : 1;
        unsigned int dfx_rid21_rx_err : 1;
        unsigned int dfx_rid22_rx_err : 1;
        unsigned int dfx_rid23_rx_err : 1;
        unsigned int dfx_rid24_rx_err : 1;
        unsigned int dfx_rid25_rx_err : 1;
        unsigned int dfx_rid26_rx_err : 1;
        unsigned int dfx_rid27_rx_err : 1;
        unsigned int dfx_rid28_rx_err : 1;
        unsigned int dfx_rid29_rx_err : 1;
        unsigned int dfx_rid30_rx_err : 1;
        unsigned int dfx_rid31_rx_err : 1;
    } reg;
} SOC_VENC_DFX_RID_RX_0ERR_UNION;
#endif
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid0_rx_err_START (0)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid0_rx_err_END (0)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid1_rx_err_START (1)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid1_rx_err_END (1)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid2_rx_err_START (2)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid2_rx_err_END (2)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid3_rx_err_START (3)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid3_rx_err_END (3)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid4_rx_err_START (4)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid4_rx_err_END (4)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid5_rx_err_START (5)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid5_rx_err_END (5)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid6_rx_err_START (6)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid6_rx_err_END (6)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid7_rx_err_START (7)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid7_rx_err_END (7)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid8_rx_err_START (8)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid8_rx_err_END (8)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid9_rx_err_START (9)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid9_rx_err_END (9)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid10_rx_err_START (10)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid10_rx_err_END (10)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid11_rx_err_START (11)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid11_rx_err_END (11)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid12_rx_err_START (12)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid12_rx_err_END (12)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid13_rx_err_START (13)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid13_rx_err_END (13)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid14_rx_err_START (14)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid14_rx_err_END (14)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid15_rx_err_START (15)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid15_rx_err_END (15)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid16_rx_err_START (16)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid16_rx_err_END (16)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid17_rx_err_START (17)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid17_rx_err_END (17)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid18_rx_err_START (18)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid18_rx_err_END (18)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid19_rx_err_START (19)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid19_rx_err_END (19)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid20_rx_err_START (20)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid20_rx_err_END (20)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid21_rx_err_START (21)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid21_rx_err_END (21)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid22_rx_err_START (22)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid22_rx_err_END (22)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid23_rx_err_START (23)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid23_rx_err_END (23)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid24_rx_err_START (24)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid24_rx_err_END (24)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid25_rx_err_START (25)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid25_rx_err_END (25)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid26_rx_err_START (26)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid26_rx_err_END (26)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid27_rx_err_START (27)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid27_rx_err_END (27)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid28_rx_err_START (28)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid28_rx_err_END (28)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid29_rx_err_START (29)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid29_rx_err_END (29)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid30_rx_err_START (30)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid30_rx_err_END (30)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid31_rx_err_START (31)
#define SOC_VENC_DFX_RID_RX_0ERR_dfx_rid31_rx_err_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_rid32_rx_err : 1;
        unsigned int dfx_rid33_rx_err : 1;
        unsigned int dfx_rid34_rx_err : 1;
        unsigned int dfx_rid35_rx_err : 1;
        unsigned int dfx_rid36_rx_err : 1;
        unsigned int dfx_rid37_rx_err : 1;
        unsigned int dfx_rid38_rx_err : 1;
        unsigned int dfx_rid39_rx_err : 1;
        unsigned int dfx_rid40_rx_err : 1;
        unsigned int dfx_rid41_rx_err : 1;
        unsigned int dfx_rid42_rx_err : 1;
        unsigned int dfx_rid43_rx_err : 1;
        unsigned int dfx_rid44_rx_err : 1;
        unsigned int dfx_rid45_rx_err : 1;
        unsigned int dfx_rid46_rx_err : 1;
        unsigned int dfx_rid47_rx_err : 1;
        unsigned int dfx_rid48_rx_err : 1;
        unsigned int dfx_rid49_rx_err : 1;
        unsigned int dfx_rid50_rx_err : 1;
        unsigned int dfx_rid51_rx_err : 1;
        unsigned int dfx_rid52_rx_err : 1;
        unsigned int dfx_rid53_rx_err : 1;
        unsigned int dfx_rid54_rx_err : 1;
        unsigned int dfx_rid55_rx_err : 1;
        unsigned int dfx_rid56_rx_err : 1;
        unsigned int dfx_rid57_rx_err : 1;
        unsigned int dfx_rid58_rx_err : 1;
        unsigned int dfx_rid59_rx_err : 1;
        unsigned int dfx_rid60_rx_err : 1;
        unsigned int dfx_rid61_rx_err : 1;
        unsigned int dfx_rid62_rx_err : 1;
        unsigned int dfx_rid63_rx_err : 1;
    } reg;
} SOC_VENC_DFX_RID_RX_1ERR_UNION;
#endif
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid32_rx_err_START (0)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid32_rx_err_END (0)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid33_rx_err_START (1)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid33_rx_err_END (1)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid34_rx_err_START (2)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid34_rx_err_END (2)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid35_rx_err_START (3)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid35_rx_err_END (3)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid36_rx_err_START (4)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid36_rx_err_END (4)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid37_rx_err_START (5)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid37_rx_err_END (5)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid38_rx_err_START (6)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid38_rx_err_END (6)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid39_rx_err_START (7)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid39_rx_err_END (7)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid40_rx_err_START (8)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid40_rx_err_END (8)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid41_rx_err_START (9)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid41_rx_err_END (9)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid42_rx_err_START (10)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid42_rx_err_END (10)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid43_rx_err_START (11)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid43_rx_err_END (11)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid44_rx_err_START (12)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid44_rx_err_END (12)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid45_rx_err_START (13)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid45_rx_err_END (13)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid46_rx_err_START (14)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid46_rx_err_END (14)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid47_rx_err_START (15)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid47_rx_err_END (15)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid48_rx_err_START (16)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid48_rx_err_END (16)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid49_rx_err_START (17)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid49_rx_err_END (17)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid50_rx_err_START (18)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid50_rx_err_END (18)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid51_rx_err_START (19)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid51_rx_err_END (19)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid52_rx_err_START (20)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid52_rx_err_END (20)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid53_rx_err_START (21)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid53_rx_err_END (21)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid54_rx_err_START (22)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid54_rx_err_END (22)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid55_rx_err_START (23)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid55_rx_err_END (23)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid56_rx_err_START (24)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid56_rx_err_END (24)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid57_rx_err_START (25)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid57_rx_err_END (25)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid58_rx_err_START (26)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid58_rx_err_END (26)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid59_rx_err_START (27)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid59_rx_err_END (27)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid60_rx_err_START (28)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid60_rx_err_END (28)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid61_rx_err_START (29)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid61_rx_err_END (29)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid62_rx_err_START (30)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid62_rx_err_END (30)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid63_rx_err_START (31)
#define SOC_VENC_DFX_RID_RX_1ERR_dfx_rid63_rx_err_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_rid64_rx_err : 1;
        unsigned int dfx_rid65_rx_err : 1;
        unsigned int dfx_rid66_rx_err : 1;
        unsigned int dfx_rid67_rx_err : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_VENC_DFX_RID_RX_2ERR_UNION;
#endif
#define SOC_VENC_DFX_RID_RX_2ERR_dfx_rid64_rx_err_START (0)
#define SOC_VENC_DFX_RID_RX_2ERR_dfx_rid64_rx_err_END (0)
#define SOC_VENC_DFX_RID_RX_2ERR_dfx_rid65_rx_err_START (1)
#define SOC_VENC_DFX_RID_RX_2ERR_dfx_rid65_rx_err_END (1)
#define SOC_VENC_DFX_RID_RX_2ERR_dfx_rid66_rx_err_START (2)
#define SOC_VENC_DFX_RID_RX_2ERR_dfx_rid66_rx_err_END (2)
#define SOC_VENC_DFX_RID_RX_2ERR_dfx_rid67_rx_err_START (3)
#define SOC_VENC_DFX_RID_RX_2ERR_dfx_rid67_rx_err_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_RESERVED_5_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_awid0_rx_err : 1;
        unsigned int dfx_awid1_rx_err : 1;
        unsigned int dfx_awid2_rx_err : 1;
        unsigned int dfx_awid3_rx_err : 1;
        unsigned int dfx_awid4_rx_err : 1;
        unsigned int dfx_awid5_rx_err : 1;
        unsigned int dfx_awid6_rx_err : 1;
        unsigned int dfx_awid7_rx_err : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_VENC_DFX_ARID_RX_0ERR_UNION;
#endif
#define SOC_VENC_DFX_ARID_RX_0ERR_dfx_awid0_rx_err_START (0)
#define SOC_VENC_DFX_ARID_RX_0ERR_dfx_awid0_rx_err_END (0)
#define SOC_VENC_DFX_ARID_RX_0ERR_dfx_awid1_rx_err_START (1)
#define SOC_VENC_DFX_ARID_RX_0ERR_dfx_awid1_rx_err_END (1)
#define SOC_VENC_DFX_ARID_RX_0ERR_dfx_awid2_rx_err_START (2)
#define SOC_VENC_DFX_ARID_RX_0ERR_dfx_awid2_rx_err_END (2)
#define SOC_VENC_DFX_ARID_RX_0ERR_dfx_awid3_rx_err_START (3)
#define SOC_VENC_DFX_ARID_RX_0ERR_dfx_awid3_rx_err_END (3)
#define SOC_VENC_DFX_ARID_RX_0ERR_dfx_awid4_rx_err_START (4)
#define SOC_VENC_DFX_ARID_RX_0ERR_dfx_awid4_rx_err_END (4)
#define SOC_VENC_DFX_ARID_RX_0ERR_dfx_awid5_rx_err_START (5)
#define SOC_VENC_DFX_ARID_RX_0ERR_dfx_awid5_rx_err_END (5)
#define SOC_VENC_DFX_ARID_RX_0ERR_dfx_awid6_rx_err_START (6)
#define SOC_VENC_DFX_ARID_RX_0ERR_dfx_awid6_rx_err_END (6)
#define SOC_VENC_DFX_ARID_RX_0ERR_dfx_awid7_rx_err_START (7)
#define SOC_VENC_DFX_ARID_RX_0ERR_dfx_awid7_rx_err_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_bid0_rx_err : 1;
        unsigned int dfx_bid1_rx_err : 1;
        unsigned int dfx_bid2_rx_err : 1;
        unsigned int dfx_bid3_rx_err : 1;
        unsigned int dfx_bid4_rx_err : 1;
        unsigned int dfx_bid5_rx_err : 1;
        unsigned int dfx_bid6_rx_err : 1;
        unsigned int dfx_bid7_rx_err : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_VENC_DFX_BID_RX_ERR_UNION;
#endif
#define SOC_VENC_DFX_BID_RX_ERR_dfx_bid0_rx_err_START (0)
#define SOC_VENC_DFX_BID_RX_ERR_dfx_bid0_rx_err_END (0)
#define SOC_VENC_DFX_BID_RX_ERR_dfx_bid1_rx_err_START (1)
#define SOC_VENC_DFX_BID_RX_ERR_dfx_bid1_rx_err_END (1)
#define SOC_VENC_DFX_BID_RX_ERR_dfx_bid2_rx_err_START (2)
#define SOC_VENC_DFX_BID_RX_ERR_dfx_bid2_rx_err_END (2)
#define SOC_VENC_DFX_BID_RX_ERR_dfx_bid3_rx_err_START (3)
#define SOC_VENC_DFX_BID_RX_ERR_dfx_bid3_rx_err_END (3)
#define SOC_VENC_DFX_BID_RX_ERR_dfx_bid4_rx_err_START (4)
#define SOC_VENC_DFX_BID_RX_ERR_dfx_bid4_rx_err_END (4)
#define SOC_VENC_DFX_BID_RX_ERR_dfx_bid5_rx_err_START (5)
#define SOC_VENC_DFX_BID_RX_ERR_dfx_bid5_rx_err_END (5)
#define SOC_VENC_DFX_BID_RX_ERR_dfx_bid6_rx_err_START (6)
#define SOC_VENC_DFX_BID_RX_ERR_dfx_bid6_rx_err_END (6)
#define SOC_VENC_DFX_BID_RX_ERR_dfx_bid7_rx_err_START (7)
#define SOC_VENC_DFX_BID_RX_ERR_dfx_bid7_rx_err_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_RESERVED_6_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_arid0_len_err : 1;
        unsigned int dfx_arid1_len_err : 1;
        unsigned int dfx_arid2_len_err : 1;
        unsigned int dfx_arid3_len_err : 1;
        unsigned int dfx_arid4_len_err : 1;
        unsigned int dfx_arid5_len_err : 1;
        unsigned int dfx_arid6_len_err : 1;
        unsigned int dfx_arid7_len_err : 1;
        unsigned int dfx_arid8_len_err : 1;
        unsigned int dfx_arid9_len_err : 1;
        unsigned int dfx_arid10_len_err : 1;
        unsigned int dfx_arid11_len_err : 1;
        unsigned int dfx_arid12_len_err : 1;
        unsigned int dfx_arid13_len_err : 1;
        unsigned int dfx_arid14_len_err : 1;
        unsigned int dfx_arid15_len_err : 1;
        unsigned int dfx_arid16_len_err : 1;
        unsigned int dfx_arid17_len_err : 1;
        unsigned int dfx_arid18_len_err : 1;
        unsigned int dfx_arid19_len_err : 1;
        unsigned int dfx_arid20_len_err : 1;
        unsigned int dfx_arid21_len_err : 1;
        unsigned int dfx_arid22_len_err : 1;
        unsigned int dfx_arid23_len_err : 1;
        unsigned int dfx_arid24_len_err : 1;
        unsigned int dfx_arid25_len_err : 1;
        unsigned int dfx_arid26_len_err : 1;
        unsigned int dfx_arid27_len_err : 1;
        unsigned int dfx_arid28_len_err : 1;
        unsigned int dfx_arid29_len_err : 1;
        unsigned int dfx_arid30_len_err : 1;
        unsigned int dfx_arid31_len_err : 1;
    } reg;
} SOC_VENC_DFX_ARID_LEN_0ERR_UNION;
#endif
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid0_len_err_START (0)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid0_len_err_END (0)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid1_len_err_START (1)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid1_len_err_END (1)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid2_len_err_START (2)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid2_len_err_END (2)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid3_len_err_START (3)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid3_len_err_END (3)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid4_len_err_START (4)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid4_len_err_END (4)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid5_len_err_START (5)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid5_len_err_END (5)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid6_len_err_START (6)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid6_len_err_END (6)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid7_len_err_START (7)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid7_len_err_END (7)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid8_len_err_START (8)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid8_len_err_END (8)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid9_len_err_START (9)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid9_len_err_END (9)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid10_len_err_START (10)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid10_len_err_END (10)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid11_len_err_START (11)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid11_len_err_END (11)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid12_len_err_START (12)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid12_len_err_END (12)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid13_len_err_START (13)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid13_len_err_END (13)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid14_len_err_START (14)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid14_len_err_END (14)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid15_len_err_START (15)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid15_len_err_END (15)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid16_len_err_START (16)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid16_len_err_END (16)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid17_len_err_START (17)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid17_len_err_END (17)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid18_len_err_START (18)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid18_len_err_END (18)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid19_len_err_START (19)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid19_len_err_END (19)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid20_len_err_START (20)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid20_len_err_END (20)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid21_len_err_START (21)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid21_len_err_END (21)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid22_len_err_START (22)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid22_len_err_END (22)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid23_len_err_START (23)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid23_len_err_END (23)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid24_len_err_START (24)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid24_len_err_END (24)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid25_len_err_START (25)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid25_len_err_END (25)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid26_len_err_START (26)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid26_len_err_END (26)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid27_len_err_START (27)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid27_len_err_END (27)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid28_len_err_START (28)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid28_len_err_END (28)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid29_len_err_START (29)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid29_len_err_END (29)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid30_len_err_START (30)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid30_len_err_END (30)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid31_len_err_START (31)
#define SOC_VENC_DFX_ARID_LEN_0ERR_dfx_arid31_len_err_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_arid32_len_err : 1;
        unsigned int dfx_arid33_len_err : 1;
        unsigned int dfx_arid34_len_err : 1;
        unsigned int dfx_arid35_len_err : 1;
        unsigned int dfx_arid36_len_err : 1;
        unsigned int dfx_arid37_len_err : 1;
        unsigned int dfx_arid38_len_err : 1;
        unsigned int dfx_arid39_len_err : 1;
        unsigned int dfx_arid40_len_err : 1;
        unsigned int dfx_arid41_len_err : 1;
        unsigned int dfx_arid42_len_err : 1;
        unsigned int dfx_arid43_len_err : 1;
        unsigned int dfx_arid44_len_err : 1;
        unsigned int dfx_arid45_len_err : 1;
        unsigned int dfx_arid46_len_err : 1;
        unsigned int dfx_arid47_len_err : 1;
        unsigned int dfx_arid48_len_err : 1;
        unsigned int dfx_arid49_len_err : 1;
        unsigned int dfx_arid50_len_err : 1;
        unsigned int dfx_arid51_len_err : 1;
        unsigned int dfx_arid52_len_err : 1;
        unsigned int dfx_arid53_len_err : 1;
        unsigned int dfx_arid54_len_err : 1;
        unsigned int dfx_arid55_len_err : 1;
        unsigned int dfx_arid56_len_err : 1;
        unsigned int dfx_arid57_len_err : 1;
        unsigned int dfx_arid58_len_err : 1;
        unsigned int dfx_arid59_len_err : 1;
        unsigned int dfx_arid60_len_err : 1;
        unsigned int dfx_arid61_len_err : 1;
        unsigned int dfx_arid62_len_err : 1;
        unsigned int dfx_arid63_len_err : 1;
    } reg;
} SOC_VENC_DFX_ARID_LEN_1ERR_UNION;
#endif
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid32_len_err_START (0)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid32_len_err_END (0)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid33_len_err_START (1)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid33_len_err_END (1)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid34_len_err_START (2)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid34_len_err_END (2)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid35_len_err_START (3)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid35_len_err_END (3)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid36_len_err_START (4)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid36_len_err_END (4)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid37_len_err_START (5)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid37_len_err_END (5)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid38_len_err_START (6)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid38_len_err_END (6)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid39_len_err_START (7)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid39_len_err_END (7)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid40_len_err_START (8)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid40_len_err_END (8)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid41_len_err_START (9)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid41_len_err_END (9)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid42_len_err_START (10)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid42_len_err_END (10)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid43_len_err_START (11)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid43_len_err_END (11)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid44_len_err_START (12)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid44_len_err_END (12)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid45_len_err_START (13)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid45_len_err_END (13)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid46_len_err_START (14)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid46_len_err_END (14)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid47_len_err_START (15)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid47_len_err_END (15)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid48_len_err_START (16)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid48_len_err_END (16)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid49_len_err_START (17)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid49_len_err_END (17)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid50_len_err_START (18)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid50_len_err_END (18)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid51_len_err_START (19)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid51_len_err_END (19)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid52_len_err_START (20)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid52_len_err_END (20)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid53_len_err_START (21)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid53_len_err_END (21)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid54_len_err_START (22)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid54_len_err_END (22)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid55_len_err_START (23)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid55_len_err_END (23)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid56_len_err_START (24)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid56_len_err_END (24)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid57_len_err_START (25)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid57_len_err_END (25)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid58_len_err_START (26)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid58_len_err_END (26)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid59_len_err_START (27)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid59_len_err_END (27)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid60_len_err_START (28)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid60_len_err_END (28)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid61_len_err_START (29)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid61_len_err_END (29)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid62_len_err_START (30)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid62_len_err_END (30)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid63_len_err_START (31)
#define SOC_VENC_DFX_ARID_LEN_1ERR_dfx_arid63_len_err_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_arid64_len_err : 1;
        unsigned int dfx_arid65_len_err : 1;
        unsigned int dfx_arid66_len_err : 1;
        unsigned int dfx_arid67_len_err : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_VENC_DFX_ARID_LEN_2ERR_UNION;
#endif
#define SOC_VENC_DFX_ARID_LEN_2ERR_dfx_arid64_len_err_START (0)
#define SOC_VENC_DFX_ARID_LEN_2ERR_dfx_arid64_len_err_END (0)
#define SOC_VENC_DFX_ARID_LEN_2ERR_dfx_arid65_len_err_START (1)
#define SOC_VENC_DFX_ARID_LEN_2ERR_dfx_arid65_len_err_END (1)
#define SOC_VENC_DFX_ARID_LEN_2ERR_dfx_arid66_len_err_START (2)
#define SOC_VENC_DFX_ARID_LEN_2ERR_dfx_arid66_len_err_END (2)
#define SOC_VENC_DFX_ARID_LEN_2ERR_dfx_arid67_len_err_START (3)
#define SOC_VENC_DFX_ARID_LEN_2ERR_dfx_arid67_len_err_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_RESERVED_7_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_awlen_cnt : 32;
    } reg;
} SOC_VENC_DFX_AWLEN_CNT_UNION;
#endif
#define SOC_VENC_DFX_AWLEN_CNT_dfx_awlen_cnt_START (0)
#define SOC_VENC_DFX_AWLEN_CNT_dfx_awlen_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_wlen_cnt : 32;
    } reg;
} SOC_VENC_DFX_WLEN_CNT_UNION;
#endif
#define SOC_VENC_DFX_WLEN_CNT_dfx_wlen_cnt_START (0)
#define SOC_VENC_DFX_WLEN_CNT_dfx_wlen_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_RESERVED_8_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_rresp_err : 1;
        unsigned int reserved_0 : 3;
        unsigned int dfx_bresp_err : 1;
        unsigned int reserved_1 : 27;
    } reg;
} SOC_VENC_DFX_RESP_ERR_UNION;
#endif
#define SOC_VENC_DFX_RESP_ERR_dfx_rresp_err_START (0)
#define SOC_VENC_DFX_RESP_ERR_dfx_rresp_err_END (0)
#define SOC_VENC_DFX_RESP_ERR_dfx_bresp_err_START (4)
#define SOC_VENC_DFX_RESP_ERR_dfx_bresp_err_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_err_rresp : 2;
        unsigned int dfx_err_bresp : 2;
        unsigned int reserved : 28;
    } reg;
} SOC_VENC_DFX_ERR_RESP_UNION;
#endif
#define SOC_VENC_DFX_ERR_RESP_dfx_err_rresp_START (0)
#define SOC_VENC_DFX_ERR_RESP_dfx_err_rresp_END (1)
#define SOC_VENC_DFX_ERR_RESP_dfx_err_bresp_START (2)
#define SOC_VENC_DFX_ERR_RESP_dfx_err_bresp_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_arlen_err : 1;
        unsigned int reserved_0 : 3;
        unsigned int dfx_awlen_err : 1;
        unsigned int reserved_1 : 27;
    } reg;
} SOC_VENC_DFX_LEN_ERR_UNION;
#endif
#define SOC_VENC_DFX_LEN_ERR_dfx_arlen_err_START (0)
#define SOC_VENC_DFX_LEN_ERR_dfx_arlen_err_END (0)
#define SOC_VENC_DFX_LEN_ERR_dfx_awlen_err_START (4)
#define SOC_VENC_DFX_LEN_ERR_dfx_awlen_err_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfx_err_arlen : 4;
        unsigned int dfx_err_awlen : 4;
        unsigned int reserved : 24;
    } reg;
} SOC_VENC_DFX_ERR_LEN_UNION;
#endif
#define SOC_VENC_DFX_ERR_LEN_dfx_err_arlen_START (0)
#define SOC_VENC_DFX_ERR_LEN_dfx_err_arlen_END (3)
#define SOC_VENC_DFX_ERR_LEN_dfx_err_awlen_START (4)
#define SOC_VENC_DFX_ERR_LEN_dfx_err_awlen_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VENC_RESERVED_9_UNION;
#endif
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
