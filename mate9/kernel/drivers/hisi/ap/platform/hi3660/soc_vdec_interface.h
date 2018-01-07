#ifndef __SOC_VDEC_INTERFACE_H__
#define __SOC_VDEC_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_VDEC_VDH_START_ADDR(base) ((base) + (0x0000))
#define SOC_VDEC_VDH_REPAIR_ADDR(base) ((base) + (0x0004))
#define SOC_VDEC_BASIC_CFG0_ADDR(base) ((base) + (0x0008))
#define SOC_VDEC_BASIC_CFG1_ADDR(base) ((base) + (0x000c))
#define SOC_VDEC_AVM_ADDR_ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_VAM_ADDR_ADDR(base) ((base) + (0x0014))
#define SOC_VDEC_STREAM_BASE_ADDR_ADDR(base) ((base) + (0x0018))
#define SOC_VDEC_VDH_STATE_ADDR(base) ((base) + (0x001c))
#define SOC_VDEC_NORM_INT_ADDR(base) ((base) + (0x0020))
#define SOC_VDEC_NORM_INT_MASK_ADDR(base) ((base) + (0x0024))
#define SOC_VDEC_VCTRL_STATE_ADDR(base) ((base) + (0x0028))
#define SOC_VDEC_VDH_VERSION_ID_ADDR(base) ((base) + (0x002c))
#define SOC_VDEC_EMAR_ID_ADDR(base) ((base) + (0x0030))
#define SOC_VDEC_RPT_CNT_ADDR(base) ((base) + (0x0034))
#define SOC_VDEC_VCTRL_TO_ADDR(base) ((base) + (0x0038))
#define SOC_VDEC_SED_TO_ADDR(base) ((base) + (0x003c))
#define SOC_VDEC_ITRANS_TO_ADDR(base) ((base) + (0x0040))
#define SOC_VDEC_PMV_TO_ADDR(base) ((base) + (0x0044))
#define SOC_VDEC_PRC_TO_ADDR(base) ((base) + (0x0048))
#define SOC_VDEC_RCN_TO_ADDR(base) ((base) + (0x004c))
#define SOC_VDEC_DBLK_TO_ADDR(base) ((base) + (0x0050))
#define SOC_VDEC_PPFD_TO_ADDR(base) ((base) + (0x0054))
#define SOC_VDEC_FPGA_VERSION_ADDR(base) ((base) + (0x0058))
#define SOC_VDEC_PART_OVER_INT_LEVEL_ADDR(base) ((base) + (0x005c))
#define SOC_VDEC_YSTADDR_ADDR(base) ((base) + (0x0060))
#define SOC_VDEC_YSTRIDE_ADDR(base) ((base) + (0x0064))
#define SOC_VDEC_UVOFFSET_ADDR(base) ((base) + (0x0068))
#define SOC_VDEC_LINE_NUM_STADDR_ADDR(base) ((base) + (0x0070))
#define SOC_VDEC_PPFD_BUF_ADDR_ADDR(base) ((base) + (0x0080))
#define SOC_VDEC_PPFD_BUF_LEN_ADDR(base) ((base) + (0x0084))
#define SOC_VDEC_PPFD_CACHE_TYPE_ADDR(base) ((base) + (0x0098))
#define SOC_VDEC_DOMN_CLK_CFG_CNT_ADDR(base) ((base) + (0x009c))
#define SOC_VDEC_SAFE_INT_ADDR(base) ((base) + (0x00A8))
#define SOC_VDEC_SAFE_INT_MASK_ADDR(base) ((base) + (0x00AC))
#define SOC_VDEC_DEC_CYCLEPERPIC_ADDR(base) ((base) + (0x00B0))
#define SOC_VDEC_RD_BDWIDTH_PERPIC_ADDR(base) ((base) + (0x00B4))
#define SOC_VDEC_WR_BDWIDTH_PERPIC_ADDR(base) ((base) + (0x00B8))
#define SOC_VDEC_RD_REQ_PERPIC_ADDR(base) ((base) + (0x00BC))
#define SOC_VDEC_WR_REQ_PERPIC_ADDR(base) ((base) + (0x00C0))
#define SOC_VDEC_EMAR_STATE0_ADDR(base) ((base) + (0x00C4))
#define SOC_VDEC_EMAR_STATE1_ADDR(base) ((base) + (0x00C8))
#define SOC_VDEC_VIDEO_STANDARD_EN_ADDR(base) ((base) + (0x00CC))
#define SOC_VDEC_MB0_QP_IN_CURR_PIC_ADDR(base) ((base) + (0x00D0))
#define SOC_VDEC_SWITCH_ROUNDING_ADDR(base) ((base) + (0x00D4))
#define SOC_VDEC_VDH_RD_REQ_CYCLE_PERPIC_L_ADDR(base) ((base) + (0x00D8))
#define SOC_VDEC_VDH_RD_REQ_CYCLE_PERPIC_H_ADDR(base) ((base) + (0x00DC))
#define SOC_VDEC_VDH_WR_REQ_CYCLE_PERPIC_L_ADDR(base) ((base) + (0x00E0))
#define SOC_VDEC_VDH_WR_REQ_CYCLE_PERPIC_H_ADDR(base) ((base) + (0x00E4))
#define SOC_VDEC_EMAR_STATE2_ADDR(base) ((base) + (0x00E8))
#define SOC_VDEC_EMAR_STATE3_ADDR(base) ((base) + (0x00EC))
#define SOC_VDEC_EMAR_STATE4_ADDR(base) ((base) + (0x00F0))
#define SOC_VDEC_SED_STA_ADDR(base) ((base) + (0x0000))
#define SOC_VDEC_SED_MBXY_ADDR(base) ((base) + (0x0004))
#define SOC_VDEC_SED_FSTMB_ADDR(base) ((base) + (0x0008))
#define SOC_VDEC_SED_LSTMB_ADDR(base) ((base) + (0x000c))
#define SOC_VDEC_SED_STATE2_0(H264) _ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_SED_STATE2_1(MPEG2) _ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_SED_STATE2_1(DIVX3) _ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_SED_STATE2_1(MPEG4) _ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_SED_STATE2_1(H265) _ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_SED_STATE2_1(H264) _ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_SED_STATE2_1(RV) _ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_SED_STATE2_1(AVS) _ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_SED_STATE1_0(H265) _ADDR(base) ((base) + (0x0014))
#define SOC_VDEC_SED_STATE0_0(REAL) _ADDR(base) ((base) + (0x0018))
#define SOC_VDEC_SED_STATE0_1(DIVX3) _ADDR(base) ((base) + (0x0018))
#define SOC_VDEC_SED_STATE0_2(VPX) _ADDR(base) ((base) + (0x0018))
#define SOC_VDEC_SED_STATE0_3(HEVC) _ADDR(base) ((base) + (0x0018))
#define SOC_VDEC_SED_MB_CNT_0_ADDR(base) ((base) + (0x001c))
#define SOC_VDEC_SED_RESIDUAL_CNT(others) _ADDR(base) ((base) + (0x0020))
#define SOC_VDEC_SED_CTB_CNT_ADDR(base) ((base) + (0x0020))
#define SOC_VDEC_SED_BSINV_CNT(others) _ADDR(base) ((base) + (0x0024))
#define SOC_VDEC_SED_HEAD_CNT(Others) _ADDR(base) ((base) + (0x0028))
#define SOC_VDEC_SED_PU_CNT_ADDR(base) ((base) + (0x0028))
#define SOC_VDEC_SED_RESIDUAL_NUM(others) _ADDR(base) ((base) + (0x002C))
#define SOC_VDEC_SED_COEF_CNT_ADDR(base) ((base) + (0x002c))
#define SOC_VDEC_SED_SPRESIDUAL_NUM(Others) _ADDR(base) ((base) + (0x0030))
#define SOC_VDEC_HEVC_T_TREE_CNT_ADDR(base) ((base) + (0x0030))
#define SOC_VDEC_HEVC_ITRANS_CNT_ADDR(base) ((base) + (0x0034))
#define SOC_VDEC_HEVC_CU_WRIT_TOP_CNT(HEVC) _ADDR(base) ((base) + (0x0038))
#define SOC_VDEC_HEVC_SEND_WAIT_CNT_ADDR(base) ((base) + (0x003c))
#define SOC_VDEC_HEVC_SE_DEC_CNT_ADDR(base) ((base) + (0x0040))
#define SOC_VDEC_HEVC_RGU_DEC_CNT_ADDR(base) ((base) + (0x0044))
#define SOC_VDEC_HEVC_BYPASS_DEC_CNT_ADDR(base) ((base) + (0x0048))
#define SOC_VDEC_HEVC_TERM_DEC_CNT_ADDR(base) ((base) + (0x004c))
#define SOC_VDEC_BIT_NUM_CNT_ADDR(base) ((base) + (0x0050))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK0_ADDR(base) ((base) + (0x0070))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK1_ADDR(base) ((base) + (0x0074))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK2_ADDR(base) ((base) + (0x0078))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK3_ADDR(base) ((base) + (0x007c))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK4_ADDR(base) ((base) + (0x0080))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK5_ADDR(base) ((base) + (0x0084))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK6_ADDR(base) ((base) + (0x0088))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK7_ADDR(base) ((base) + (0x008c))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK8_ADDR(base) ((base) + (0x0090))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK9_ADDR(base) ((base) + (0x0094))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK10_ADDR(base) ((base) + (0x0098))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK11_ADDR(base) ((base) + (0x009c))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK12_ADDR(base) ((base) + (0x00a0))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK13_ADDR(base) ((base) + (0x00a4))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK14_ADDR(base) ((base) + (0x00a8))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK15_ADDR(base) ((base) + (0x00ac))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK16_ADDR(base) ((base) + (0x00b0))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK17_ADDR(base) ((base) + (0x00b4))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK18_ADDR(base) ((base) + (0x00b8))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK19_ADDR(base) ((base) + (0x00bc))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK20_ADDR(base) ((base) + (0x00c0))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK21_ADDR(base) ((base) + (0x00c4))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK22_ADDR(base) ((base) + (0x00c8))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK23_ADDR(base) ((base) + (0x00cc))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK24_ADDR(base) ((base) + (0x00d0))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK25_ADDR(base) ((base) + (0x00d4))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK26_ADDR(base) ((base) + (0x00d8))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK27_ADDR(base) ((base) + (0x00dc))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK28_ADDR(base) ((base) + (0x00f0))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK29_ADDR(base) ((base) + (0x00f4))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK30_ADDR(base) ((base) + (0x00f8))
#define SOC_VDEC_SED_STRM_BUF0_RDBCK31_ADDR(base) ((base) + (0x00fc))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK0_ADDR(base) ((base) + (0x0100))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK1_ADDR(base) ((base) + (0x0104))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK2_ADDR(base) ((base) + (0x0108))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK3_ADDR(base) ((base) + (0x010c))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK4_ADDR(base) ((base) + (0x0110))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK5_ADDR(base) ((base) + (0x0114))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK6_ADDR(base) ((base) + (0x0118))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK7_ADDR(base) ((base) + (0x011c))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK8_ADDR(base) ((base) + (0x0120))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK9_ADDR(base) ((base) + (0x0124))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK10_ADDR(base) ((base) + (0x0128))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK11_ADDR(base) ((base) + (0x012c))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK12_ADDR(base) ((base) + (0x0130))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK13_ADDR(base) ((base) + (0x0134))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK14_ADDR(base) ((base) + (0x0138))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK15_ADDR(base) ((base) + (0x013c))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK16_ADDR(base) ((base) + (0x0140))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK17_ADDR(base) ((base) + (0x0144))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK18_ADDR(base) ((base) + (0x0148))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK19_ADDR(base) ((base) + (0x014c))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK20_ADDR(base) ((base) + (0x0150))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK21_ADDR(base) ((base) + (0x0154))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK22_ADDR(base) ((base) + (0x0158))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK23_ADDR(base) ((base) + (0x015c))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK24_ADDR(base) ((base) + (0x0160))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK25_ADDR(base) ((base) + (0x0164))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK26_ADDR(base) ((base) + (0x0168))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK27_ADDR(base) ((base) + (0x016c))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK28_ADDR(base) ((base) + (0x0170))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK29_ADDR(base) ((base) + (0x0174))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK30_ADDR(base) ((base) + (0x0178))
#define SOC_VDEC_SED_STRM_BUF1_RDBCK31_ADDR(base) ((base) + (0x017c))
#define SOC_VDEC_ITRANS_INFO_ADDR(base) ((base) + (0x0000))
#define SOC_VDEC_ITR_ADDR_ADDR(base) ((base) + (0x0004))
#define SOC_VDEC_ITR_INF_ADDR(base) ((base) + (0x0008))
#define SOC_VDEC_ITR_STA_0_ADDR(base) ((base) + (0x000c))
#define SOC_VDEC_ITR_STA_1_ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_ITR_MB_INF_ADDR(base) ((base) + (0x0014))
#define SOC_VDEC_IS_FRM_CYCLE_ADDR(base) ((base) + (0x0018))
#define SOC_VDEC_AHS_FRM_CYCLE_ADDR(base) ((base) + (0x001c))
#define SOC_VDEC_PMV_STATE0_0_ADDR(base) ((base) + (0x0000))
#define SOC_VDEC_PMV_STATE0_1_ADDR(base) ((base) + (0x0000))
#define SOC_VDEC_PMV_STATE1_0_ADDR(base) ((base) + (0x0004))
#define SOC_VDEC_PMV_STATE1_1_ADDR(base) ((base) + (0x0004))
#define SOC_VDEC_PMV_CYCLE_CNT_ADDR(base) ((base) + (0x0008))
#define SOC_VDEC_PMV_STATE_2 (H265)_ADDR(base) ((base) + (0x0008))
#define SOC_VDEC_PMV_STATE_3 (H265)_ADDR(base) ((base) + (0x000c))
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_0_ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_PMV_STATE_4 (H265)_ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_1_ADDR(base) ((base) + (0x0014))
#define SOC_VDEC_PMV_STATE_5_ADDR(base) ((base) + (0x0014))
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_2_ADDR(base) ((base) + (0x0018))
#define SOC_VDEC_PMV_STATE_6(H265) _ADDR(base) ((base) + (0x0018))
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_3_ADDR(base) ((base) + (0x001c))
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_4_ADDR(base) ((base) + (0x0020))
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_5_ADDR(base) ((base) + (0x0024))
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_6_ADDR(base) ((base) + (0x0028))
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_7_ADDR(base) ((base) + (0x002c))
#define SOC_VDEC_MB_INF_ADDR(base) ((base) + (0x0000))
#define SOC_VDEC_CACHE0_TOTAL_CNT_ADDR(base) ((base) + (0x0004))
#define SOC_VDEC_CACHE0_HIT_CNT_ADDR(base) ((base) + (0x0008))
#define SOC_VDEC_CACHE0_REQHIT_CNT_ADDR(base) ((base) + (0x000c))
#define SOC_VDEC_CACHE0_MISS_CNT_ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_CACHE0_FE_WORK_TIME_ADDR(base) ((base) + (0x0014))
#define SOC_VDEC_CACHE1_TOTAL_CNT_ADDR(base) ((base) + (0x0018))
#define SOC_VDEC_CACHE1_HIT_CNT_ADDR(base) ((base) + (0x001c))
#define SOC_VDEC_CACHE1_REQHIT_CNT_ADDR(base) ((base) + (0x0020))
#define SOC_VDEC_CACHE1_MISS_CNT_ADDR(base) ((base) + (0x0024))
#define SOC_VDEC_CACHE1_FE_WORK_TIME_ADDR(base) ((base) + (0x0028))
#define SOC_VDEC_PRC_STATE_ADDR(base) ((base) + (0x002c))
#define SOC_VDEC_PRC_BUF_STATE0_ADDR(base) ((base) + (0x0030))
#define SOC_VDEC_PRC_BUF_8BIT_STATE1_ADDR(base) ((base) + (0x0034))
#define SOC_VDEC_OUT_STATE &#10;_ADDR(base) ((base) + (0x0038))
#define SOC_VDEC_FMT_STATE_ADDR(base) ((base) + (0x003c))
#define SOC_VDEC_PRF_INFO_ADDR(base) ((base) + (0x0000))
#define SOC_VDEC_PRF_STATE_ADDR(base) ((base) + (0x0004))
#define SOC_VDEC_PRF_IBUF_ST_ADDR(base) ((base) + (0x0008))
#define SOC_VDEC_PRF_OBUF_ST_ADDR(base) ((base) + (0x000c))
#define SOC_VDEC_RCN_PIC_PARA_ADDR(base) ((base) + (0x0000))
#define SOC_VDEC_RCN_MB_PARA_0_ADDR(base) ((base) + (0x0004))
#define SOC_VDEC_RCN_MB_PARA_1_ADDR(base) ((base) + (0x0008))
#define SOC_VDEC_RCN_MB_PARA_2_ADDR(base) ((base) + (0x000c))
#define SOC_VDEC_RCN_MB_PARA_3_ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_RCN_MB_PARA_4_ADDR(base) ((base) + (0x0014))
#define SOC_VDEC_RCN_MB_PARA_5_ADDR(base) ((base) + (0x0018))
#define SOC_VDEC_RCN_MB_PARA_6_ADDR(base) ((base) + (0x001c))
#define SOC_VDEC_RCN_BUF_STATE_ADDR(base) ((base) + (0x0020))
#define SOC_VDEC_DBLK_PIC_INFO_ADDR(base) ((base) + (0x0000))
#define SOC_VDEC_DBLK_FLT_INFO_ADDR(base) ((base) + (0x0004))
#define SOC_VDEC_DBLK_DDR_STRD_ADDR(base) ((base) + (0x0008))
#define SOC_VDEC_DBLK_YADDR_ADDR(base) ((base) + (0x000c))
#define SOC_VDEC_DBLK_CADDR_ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_DBLK_ST_IN_CTRL_ADDR(base) ((base) + (0x001c))
#define SOC_VDEC_DBLK_ST_FLT_ADDR(base) ((base) + (0x0020))
#define SOC_VDEC_DBLK_ST_DO_ADDR(base) ((base) + (0x0024))
#define SOC_VDEC_DBLK_ST_FLT_STATE_ADDR(base) ((base) + (0x0028))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT0_ADDR(base) ((base) + (0x0100))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT1_ADDR(base) ((base) + (0x0104))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT2_ADDR(base) ((base) + (0x0108))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT3_ADDR(base) ((base) + (0x010c))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT4_ADDR(base) ((base) + (0x0110))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT5_ADDR(base) ((base) + (0x0114))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT6_ADDR(base) ((base) + (0x0118))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT7_ADDR(base) ((base) + (0x011c))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT8_ADDR(base) ((base) + (0x0120))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT9_ADDR(base) ((base) + (0x0124))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT10_ADDR(base) ((base) + (0x0128))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT11_ADDR(base) ((base) + (0x012c))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT12_ADDR(base) ((base) + (0x0130))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT13_ADDR(base) ((base) + (0x0134))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT14_ADDR(base) ((base) + (0x0138))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT15_ADDR(base) ((base) + (0x013c))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT16_ADDR(base) ((base) + (0x0140))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT17_ADDR(base) ((base) + (0x0144))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT18_ADDR(base) ((base) + (0x0148))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT19_ADDR(base) ((base) + (0x014c))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT20_ADDR(base) ((base) + (0x0150))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT21_ADDR(base) ((base) + (0x0154))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT22_ADDR(base) ((base) + (0x0158))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT23_ADDR(base) ((base) + (0x015c))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT24_ADDR(base) ((base) + (0x0160))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT25_ADDR(base) ((base) + (0x0164))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT26_ADDR(base) ((base) + (0x0168))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT27_ADDR(base) ((base) + (0x016c))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT28_ADDR(base) ((base) + (0x0170))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT29_ADDR(base) ((base) + (0x0174))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT30_ADDR(base) ((base) + (0x0178))
#define SOC_VDEC_LUMA_HISTOGRAM_CNT31_ADDR(base) ((base) + (0x017c))
#define SOC_VDEC_LUMA_SUM0_ADDR(base) ((base) + (0x0180))
#define SOC_VDEC_LUMA_SUM1_ADDR(base) ((base) + (0x0184))
#define SOC_VDEC_DBLK_MEM_INFO_ADDR(base) ((base) + (0x0400~0x053f))
#define SOC_VDEC_PPFD_LEN_ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_PPFD_STADDR_ADDR(base) ((base) + (0x0014))
#define SOC_VDEC_PPFD_ENDADDR_ADDR(base) ((base) + (0x0018))
#define SOC_VDEC_PPFD_EN_ADDR(base) ((base) + (0x001c))
#define SOC_VDEC_PPFD_ENC_ST0_ADDR(base) ((base) + (0x0040))
#define SOC_VDEC_PPFD_ENC_ST1_ADDR(base) ((base) + (0x0044))
#define SOC_VDEC_PPFD_ST_ADDR(base) ((base) + (0x0048))
#define SOC_VDEC_PPFD_DEC_ST0_ADDR(base) ((base) + (0x004c))
#define SOC_VDEC_PPFD_DEC_ST1_ADDR(base) ((base) + (0x0050))
#define SOC_VDEC_SAO_YSTADDR_ADDR(base) ((base) + (0x0000))
#define SOC_VDEC_SAO_TOP_ADDR_ADDR(base) ((base) + (0x0004))
#define SOC_VDEC_SAO_LEFT_ADDR_ADDR(base) ((base) + (0x0008))
#define SOC_VDEC_SAO_UVSTADDR_ADDR(base) ((base) + (0x000c))
#define SOC_VDEC_SAO_INFO_0_ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_SAO_INFO_1_ADDR(base) ((base) + (0x0014))
#define SOC_VDEC_SAO_INFO_2_ADDR(base) ((base) + (0x0018))
#define SOC_VDEC_SAO_INFO_3_ADDR(base) ((base) + (0x001c))
#define SOC_VDEC_SAO_INFO_4_ADDR(base) ((base) + (0x0020))
#define SOC_VDEC_SAO_INFO_5_ADDR(base) ((base) + (0x0024))
#define SOC_VDEC_SAO_INFO_6_ADDR(base) ((base) + (0x0028))
#define SOC_VDEC_SAO_INFO_7_ADDR(base) ((base) + (0x002c))
#define SOC_VDEC_SAO_INFO_8_ADDR(base) ((base) + (0x0030))
#define SOC_VDEC_SAO_INFO_9_ADDR(base) ((base) + (0x0034))
#define SOC_VDEC_SAO_INFO_10_ADDR(base) ((base) + (0x0038))
#define SOC_VDEC_SAO_INFO_11_ADDR(base) ((base) + (0x003C))
#define SOC_VDEC_SAO_INFO_12_ADDR(base) ((base) + (0x0040))
#define SOC_VDEC_SAO_INFO_13_ADDR(base) ((base) + (0x0044))
#define SOC_VDEC_SAO_INFO_14_ADDR(base) ((base) + (0x0048))
#define SOC_VDEC_SAO_INFO_15_ADDR(base) ((base) + (0x004c))
#define SOC_VDEC_SAO_INFO_16_ADDR(base) ((base) + (0x0048))
#define SOC_VDEC_SAO_INFO_17_ADDR(base) ((base) + (0x004C))
#define SOC_VDEC_SAO_INFO_18_ADDR(base) ((base) + (0x0050))
#define SOC_VDEC_SAO_INFO_19_ADDR(base) ((base) + (0x0054))
#define SOC_VDEC_SAO_INFO_20_ADDR(base) ((base) + (0x0058))
#define SOC_VDEC_SAO_INFO_21_ADDR(base) ((base) + (0x005c))
#define SOC_VDEC_SAO_INFO_22_ADDR(base) ((base) + (0x0060))
#define SOC_VDEC_SAO_INFO_23_ADDR(base) ((base) + (0x0064))
#define SOC_VDEC_SAO_INFO_24_ADDR(base) ((base) + (0x0068))
#define SOC_VDEC_SAO_INFO_25_ADDR(base) ((base) + (0x006c))
#define SOC_VDEC_SAO_INFO_26_ADDR(base) ((base) + (0x0070))
#define SOC_VDEC_SAO_INFO_27_ADDR(base) ((base) + (0x0074))
#define SOC_VDEC_SAO_INFO_28_ADDR(base) ((base) + (0x0078))
#define SOC_VDEC_SAO_INFO_29_ADDR(base) ((base) + (0x007c))
#define SOC_VDEC_SAO_INFO_30_ADDR(base) ((base) + (0x0080))
#define SOC_VDEC_SAO_INFO_31_ADDR(base) ((base) + (0x0084))
#define SOC_VDEC_SAO_INFO_32_ADDR(base) ((base) + (0x0088))
#define SOC_VDEC_SAO_INFO_33_ADDR(base) ((base) + (0x008c))
#define SOC_VDEC_SAO_INFO_34_ADDR(base) ((base) + (0x0090))
#define SOC_VDEC_SAO_INFO_35_ADDR(base) ((base) + (0x0094))
#define SOC_VDEC_SAO_INFO_36_ADDR(base) ((base) + (0x0098))
#define SOC_VDEC_SAO_INFO_37_ADDR(base) ((base) + (0x009C))
#define SOC_VDEC_SAO_INFO_38_ADDR(base) ((base) + (0x00A0))
#define SOC_VDEC_SRC_LUMA_ADDR_ADDR(base) ((base) + (0x0000))
#define SOC_VDEC_SRC_CHROMA_ADDR_ADDR(base) ((base) + (0x0004))
#define SOC_VDEC_DST_LUMA_ADDR_ADDR(base) ((base) + (0x0008))
#define SOC_VDEC_DST_CHROMA_ADDR_ADDR(base) ((base) + (0x000c))
#define SOC_VDEC_DATA_STRIDE_ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_HEAD_INF_OFFSET_ADDR(base) ((base) + (0x0014))
#define SOC_VDEC_PIC_IN_MB_ADDR(base) ((base) + (0x0018))
#define SOC_VDEC_TOTAL_GRP_ADDR(base) ((base) + (0x001c))
#define SOC_VDEC_START_MB_ADDR(base) ((base) + (0x0020))
#define SOC_VDEC_END_MB_ADDR(base) ((base) + (0x0024))
#define SOC_VDEC_IN_MB_ADDR(base) ((base) + (0x0028))
#define SOC_VDEC_SEND_MB_ADDR(base) ((base) + (0x002c))
#define SOC_VDEC_DMA_CMD_ADDR(base) ((base) + (0x0030))
#define SOC_VDEC_CNT0_ADDR(base) ((base) + (0x0034))
#define SOC_VDEC_CNT1_ADDR(base) ((base) + (0x0038))
#define SOC_VDEC_AVS_PLUS_ADDR(base) ((base) + (0x0000))
#define SOC_VDEC_EMAR_ADDR_ADDR(base) ((base) + (0x0004))
#define SOC_VDEC_VDH_RST_EN_ADDR(base) ((base) + (0x0008))
#define SOC_VDEC_CK_GT_EN_ADDR(base) ((base) + (0x000c))
#define SOC_VDEC_VDH_USE_STATE_ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_OVER_TIME_ADDR(base) ((base) + (0x0018))
#define SOC_VDEC_OVER_4K_CNT_ADDR(base) ((base) + (0x001C))
#define SOC_VDEC_OVER_16M_CNT_ADDR(base) ((base) + (0x0020))
#define SOC_VDEC_ALL_R_MID_INFO_ADDR(base) ((base) + (0x0024))
#define SOC_VDEC_ALL_W_MID_INFO_ADDR(base) ((base) + (0x0028))
#define SOC_VDEC_SRC_STATE_INFO_ADDR(base) ((base) + (0x002c))
#define SOC_VDEC_DSP_PROG_ST_ADDR(base) ((base) + (0x0100))
#define SOC_VDEC_DSP_PROG_OVER_ADDR(base) ((base) + (0x0104))
#define SOC_VDEC_DSP_PROG_WLEN_ADDR(base) ((base) + (0x0108))
#define SOC_VDEC_DSP_PROG_STADDR_ADDR(base) ((base) + (0x010C))
#define SOC_VDEC_SCD_START_ADDR(base) ((base) + (0x0000))
#define SOC_VDEC_LIST_ADDRESS_ADDR(base) ((base) + (0x0004))
#define SOC_VDEC_UP_ADDRESS_ADDR(base) ((base) + (0x0008))
#define SOC_VDEC_UP_LEN_ADDR(base) ((base) + (0x000c))
#define SOC_VDEC_BUFFER_FIRST_ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_BUFFER_LAST_ADDR(base) ((base) + (0x0014))
#define SOC_VDEC_BUFFER_INI_ADDR(base) ((base) + (0x0018))
#define SOC_VDEC_SCD_NORM_INT_MASK_ADDR(base) ((base) + (0x001c))
#define SOC_VDEC_SCD_PROTOCOL_ADDR(base) ((base) + (0x0020))
#define SOC_VDEC_SCD_NORM_INI_CLR_ADDR(base) ((base) + (0x0024))
#define SOC_VDEC_DSP_SPS_ADDR_ADDR(base) ((base) + (0x0028))
#define SOC_VDEC_DSP_PPS_ADDR_ADDR(base) ((base) + (0x002c))
#define SOC_VDEC_DSP_MSG_ADDR_ADDR(base) ((base) + (0x0030))
#define SOC_VDEC_DSP_TOP_ADDR_ADDR(base) ((base) + (0x0034))
#define SOC_VDEC_DSP_CAMN_ADDR_ADDR(base) ((base) + (0x0038))
#define SOC_VDEC_TST_BASE_ADDR_ADDR(base) ((base) + (0x003c))
#define SOC_VDEC_SCD_INT_FLAG_ADDR(base) ((base) + (0x0040))
#define SOC_VDEC_SCD_NUMBER_ADDR(base) ((base) + (0x0048))
#define SOC_VDEC_RLL_ADDR_ADDR(base) ((base) + (0x004C))
#define SOC_VDEC_SCR_RAT_ADDR(base) ((base) + (0x0050))
#define SOC_VDEC_STA_ADDR(base) ((base) + (0x0054))
#define SOC_VDEC_SDWR_ADDR(base) ((base) + (0x0058))
#define SOC_VDEC_RUN_CYCLE_ADDR(base) ((base) + (0x005c))
#define SOC_VDEC_SCD_RD_REQ_ADDR(base) ((base) + (0x0060))
#define SOC_VDEC_SCD_RD_DAT_ADDR(base) ((base) + (0x0064))
#define SOC_VDEC_SCD_WR_REQ_ADDR(base) ((base) + (0x0068))
#define SOC_VDEC_SCD_WR_DAT_ADDR(base) ((base) + (0x006c))
#define SOC_VDEC_SCD_WORK_ST_ADDR(base) ((base) + (0x0070))
#define SOC_VDEC_SCD_SAFE_INT_MASK_ADDR(base) ((base) + (0x0084))
#define SOC_VDEC_SCD_SAFE_INI_CLR_ADDR(base) ((base) + (0x0088))
#define SOC_VDEC_BPD_START_ADDR(base) ((base) + (0x0000))
#define SOC_VDEC_BPD_CFG0_ADDR(base) ((base) + (0x0004))
#define SOC_VDEC_BPD_CFG1_ADDR(base) ((base) + (0x0008))
#define SOC_VDEC_BPD_CFG2_ADDR(base) ((base) + (0x000C))
#define SOC_VDEC_BPD_CFG3_ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_BPD_CFG4_ADDR(base) ((base) + (0x0014))
#define SOC_VDEC_BPD_CFG5_ADDR(base) ((base) + (0x0018))
#define SOC_VDEC_BPD_CFG6_ADDR(base) ((base) + (0x001C))
#define SOC_VDEC_BPD_CFG7_ADDR(base) ((base) + (0x0020))
#define SOC_VDEC_BPD_CFG8_ADDR(base) ((base) + (0x0024))
#define SOC_VDEC_BPD_CFG9_ADDR(base) ((base) + (0x0028))
#define SOC_VDEC_BPD_CFG10_ADDR(base) ((base) + (0x002C))
#define SOC_VDEC_BPD_CFG11_ADDR(base) ((base) + (0x0030))
#define SOC_VDEC_BPD_NORM_INT_MASK_ADDR(base) ((base) + (0x0034))
#define SOC_VDEC_BPD_STATE_ADDR(base) ((base) + (0x0040))
#define SOC_VDEC_BPD_NORM_INT_STATE_ADDR(base) ((base) + (0x0044))
#define SOC_VDEC_BPD_CTRL_STATE_ADDR(base) ((base) + (0x0048))
#define SOC_VDEC_BPD_CYCLE_COUNT_ADDR(base) ((base) + (0x004C))
#define SOC_VDEC_BPD_OUT0_ADDR(base) ((base) + (0x0050))
#define SOC_VDEC_BPD_OUT1_ADDR(base) ((base) + (0x0054))
#define SOC_VDEC_BPD_SAFE_INT_STATE_ADDR(base) ((base) + (0x0058))
#define SOC_VDEC_BPD_SAFE_INT_MASK_ADDR(base) ((base) + (0x005c))
#define SOC_VDEC_SMMU_MSTR_GLB_BYPASS_ADDR(base) ((base) + (0x0000))
#define SOC_VDEC_SMMU_MSTR_DEBUG_MODE_ADDR(base) ((base) + (0x0004))
#define SOC_VDEC_SMMU_MSTR_MEM_CTRL_ADDR(base) ((base) + (0x0008))
#define SOC_VDEC_SMMU_MSTR_CLK_EN_ADDR(base) ((base) + (0x000C))
#define SOC_VDEC_SMMU_MSTR_DBG_0_ADDR(base) ((base) + (0x0010))
#define SOC_VDEC_SMMU_MSTR_DBG_1_ADDR(base) ((base) + (0x0014))
#define SOC_VDEC_SMMU_MSTR_DBG_2_ADDR(base) ((base) + (0x0018))
#define SOC_VDEC_SMMU_MSTR_DBG_3_ADDR(base) ((base) + (0x001C))
#define SOC_VDEC_SMMU_MSTR_DBG_4_ADDR(base) ((base) + (0x0020))
#define SOC_VDEC_SMMU_MSTR_DBG_5_ADDR(base) ((base) + (0x0024))
#define SOC_VDEC_SMMU_MSTR_DBG_6_ADDR(base) ((base) + (0x0028))
#define SOC_VDEC_SMMU_MSTR_DBG_PORT_IN_0_ADDR(base) ((base) + (0x002C))
#define SOC_VDEC_SMMU_MSTR_DBG_PORT_IN_1_ADDR(base) ((base) + (0x0030))
#define SOC_VDEC_SMMU_MSTR_DBG_PORT_OUT_ADDR(base) ((base) + (0x0034))
#define SOC_VDEC_RD_CMD_TOTAL_CNT_ADDR(base,q) ((base) + ((q)*0x4+0x100))
#define SOC_VDEC_RD_CMD_MISS_CNT_ADDR(base,q) ((base) + ((q)*0x4+0x150))
#define SOC_VDEC_RD_DATA_TOTAL_CNT_ADDR(base,q) ((base) + ((q)*0x4+0x1A0))
#define SOC_VDEC_RD_CMD_CASE_CNT_ADDR(base,s) ((base) + ((s)*0x4+0x1F0))
#define SOC_VDEC_RD_CMD_TRANS_LATENCY_ADDR(base) ((base) + (0x0204))
#define SOC_VDEC_WR_CMD_TOTAL_CNT_ADDR(base,r) ((base) + ((r)*0x4+0x300))
#define SOC_VDEC_WR_CMD_MISS_CNT_ADDR(base,r) ((base) + ((r)*0x4+0x330))
#define SOC_VDEC_WR_DATA_TOTAL_CNT_ADDR(base,r) ((base) + ((r)*0x4+0x360))
#define SOC_VDEC_WR_CMD_CASE_CNT_ADDR(base,s) ((base) + ((s)*0x4+0x390))
#define SOC_VDEC_WR_CMD_TRANS_LATENCY_ADDR(base) ((base) + (0x03A4))
#define SOC_VDEC_VDH_VIDEO_STANDARD_EN_ADDR(base) ((base) + (0x0000))
#define SOC_VDEC_VDH_CLKSEL_ADDR(base) ((base) + (0x0004))
#define SOC_VDEC_VDH_CRG_APB_CLKSEL_ADDR(base) ((base) + (0x0008))
#define SOC_VDEC_VDH_SRST_REQ_ADDR(base) ((base) + (0x000C))
#define SOC_VDEC_VDH_SRST_ST_ADDR(base) ((base) + (0x0010))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dec_start : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VDEC_VDH_START_UNION;
#endif
#define SOC_VDEC_VDH_START_dec_start_START (0)
#define SOC_VDEC_VDH_START_dec_start_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_VDEC_VDH_REPAIR_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mbamt_to_dec : 20;
        unsigned int reserved : 2;
        unsigned int marker_bit_detect_en : 1;
        unsigned int ac_last_detect_en : 1;
        unsigned int coef_idx_detect_en : 1;
        unsigned int vop_type_detect_en : 1;
        unsigned int work_mode : 2;
        unsigned int luma_sum_en : 1;
        unsigned int luma_histogram_en : 1;
        unsigned int ld_qmatrix_flag : 1;
        unsigned int vdh_safe_flag : 1;
    } reg;
} SOC_VDEC_BASIC_CFG0_UNION;
#endif
#define SOC_VDEC_BASIC_CFG0_mbamt_to_dec_START (0)
#define SOC_VDEC_BASIC_CFG0_mbamt_to_dec_END (19)
#define SOC_VDEC_BASIC_CFG0_marker_bit_detect_en_START (22)
#define SOC_VDEC_BASIC_CFG0_marker_bit_detect_en_END (22)
#define SOC_VDEC_BASIC_CFG0_ac_last_detect_en_START (23)
#define SOC_VDEC_BASIC_CFG0_ac_last_detect_en_END (23)
#define SOC_VDEC_BASIC_CFG0_coef_idx_detect_en_START (24)
#define SOC_VDEC_BASIC_CFG0_coef_idx_detect_en_END (24)
#define SOC_VDEC_BASIC_CFG0_vop_type_detect_en_START (25)
#define SOC_VDEC_BASIC_CFG0_vop_type_detect_en_END (25)
#define SOC_VDEC_BASIC_CFG0_work_mode_START (26)
#define SOC_VDEC_BASIC_CFG0_work_mode_END (27)
#define SOC_VDEC_BASIC_CFG0_luma_sum_en_START (28)
#define SOC_VDEC_BASIC_CFG0_luma_sum_en_END (28)
#define SOC_VDEC_BASIC_CFG0_luma_histogram_en_START (29)
#define SOC_VDEC_BASIC_CFG0_luma_histogram_en_END (29)
#define SOC_VDEC_BASIC_CFG0_ld_qmatrix_flag_START (30)
#define SOC_VDEC_BASIC_CFG0_ld_qmatrix_flag_END (30)
#define SOC_VDEC_BASIC_CFG0_vdh_safe_flag_START (31)
#define SOC_VDEC_BASIC_CFG0_vdh_safe_flag_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int video_standard : 4;
        unsigned int reserved : 8;
        unsigned int mfd_mmu_en : 1;
        unsigned int uv_order_en : 1;
        unsigned int fst_slc_grp : 1;
        unsigned int mv_output_en : 1;
        unsigned int max_slcgrp_num : 12;
        unsigned int line_num_output_en : 1;
        unsigned int vdh_2d_en : 1;
        unsigned int frm_cmp_en : 1;
        unsigned int ppfd_en : 1;
    } reg;
} SOC_VDEC_BASIC_CFG1_UNION;
#endif
#define SOC_VDEC_BASIC_CFG1_video_standard_START (0)
#define SOC_VDEC_BASIC_CFG1_video_standard_END (3)
#define SOC_VDEC_BASIC_CFG1_mfd_mmu_en_START (12)
#define SOC_VDEC_BASIC_CFG1_mfd_mmu_en_END (12)
#define SOC_VDEC_BASIC_CFG1_uv_order_en_START (13)
#define SOC_VDEC_BASIC_CFG1_uv_order_en_END (13)
#define SOC_VDEC_BASIC_CFG1_fst_slc_grp_START (14)
#define SOC_VDEC_BASIC_CFG1_fst_slc_grp_END (14)
#define SOC_VDEC_BASIC_CFG1_mv_output_en_START (15)
#define SOC_VDEC_BASIC_CFG1_mv_output_en_END (15)
#define SOC_VDEC_BASIC_CFG1_max_slcgrp_num_START (16)
#define SOC_VDEC_BASIC_CFG1_max_slcgrp_num_END (27)
#define SOC_VDEC_BASIC_CFG1_line_num_output_en_START (28)
#define SOC_VDEC_BASIC_CFG1_line_num_output_en_END (28)
#define SOC_VDEC_BASIC_CFG1_vdh_2d_en_START (29)
#define SOC_VDEC_BASIC_CFG1_vdh_2d_en_END (29)
#define SOC_VDEC_BASIC_CFG1_frm_cmp_en_START (30)
#define SOC_VDEC_BASIC_CFG1_frm_cmp_en_END (30)
#define SOC_VDEC_BASIC_CFG1_ppfd_en_START (31)
#define SOC_VDEC_BASIC_CFG1_ppfd_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int av_msg_addr : 32;
    } reg;
} SOC_VDEC_AVM_ADDR_UNION;
#endif
#define SOC_VDEC_AVM_ADDR_av_msg_addr_START (0)
#define SOC_VDEC_AVM_ADDR_av_msg_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_msg_addr : 32;
    } reg;
} SOC_VDEC_VAM_ADDR_UNION;
#endif
#define SOC_VDEC_VAM_ADDR_va_msg_addr_START (0)
#define SOC_VDEC_VAM_ADDR_va_msg_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int stream_base_addr : 32;
    } reg;
} SOC_VDEC_STREAM_BASE_ADDR_UNION;
#endif
#define SOC_VDEC_STREAM_BASE_ADDR_stream_base_addr_START (0)
#define SOC_VDEC_STREAM_BASE_ADDR_stream_base_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int decoded_slice_num : 17;
        unsigned int norm_intrs_vdh_dec_over : 1;
        unsigned int norm_intrs_vdh_dec_err : 1;
        unsigned int norm_intrs_vdh_part_over : 1;
        unsigned int safe_intrs_vdh_dec_over : 1;
        unsigned int safe_intrs_vdh_dec_err : 1;
        unsigned int safe_intrs_vdh_part_over : 1;
        unsigned int reserved : 9;
    } reg;
} SOC_VDEC_VDH_STATE_UNION;
#endif
#define SOC_VDEC_VDH_STATE_decoded_slice_num_START (0)
#define SOC_VDEC_VDH_STATE_decoded_slice_num_END (16)
#define SOC_VDEC_VDH_STATE_norm_intrs_vdh_dec_over_START (17)
#define SOC_VDEC_VDH_STATE_norm_intrs_vdh_dec_over_END (17)
#define SOC_VDEC_VDH_STATE_norm_intrs_vdh_dec_err_START (18)
#define SOC_VDEC_VDH_STATE_norm_intrs_vdh_dec_err_END (18)
#define SOC_VDEC_VDH_STATE_norm_intrs_vdh_part_over_START (19)
#define SOC_VDEC_VDH_STATE_norm_intrs_vdh_part_over_END (19)
#define SOC_VDEC_VDH_STATE_safe_intrs_vdh_dec_over_START (20)
#define SOC_VDEC_VDH_STATE_safe_intrs_vdh_dec_over_END (20)
#define SOC_VDEC_VDH_STATE_safe_intrs_vdh_dec_err_START (21)
#define SOC_VDEC_VDH_STATE_safe_intrs_vdh_dec_err_END (21)
#define SOC_VDEC_VDH_STATE_safe_intrs_vdh_part_over_START (22)
#define SOC_VDEC_VDH_STATE_safe_intrs_vdh_part_over_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int norm_intrms_vdh_dec_over : 1;
        unsigned int norm_intrms_vdh_dec_err : 1;
        unsigned int norm_intrms_vdh_part_dec_over : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_VDEC_NORM_INT_UNION;
#endif
#define SOC_VDEC_NORM_INT_norm_intrms_vdh_dec_over_START (0)
#define SOC_VDEC_NORM_INT_norm_intrms_vdh_dec_over_END (0)
#define SOC_VDEC_NORM_INT_norm_intrms_vdh_dec_err_START (1)
#define SOC_VDEC_NORM_INT_norm_intrms_vdh_dec_err_END (1)
#define SOC_VDEC_NORM_INT_norm_intrms_vdh_part_dec_over_START (2)
#define SOC_VDEC_NORM_INT_norm_intrms_vdh_part_dec_over_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int norm_intm_vdh_dec_over : 1;
        unsigned int norm_intm_vdh_dec_err : 1;
        unsigned int norm_intm_vdh_part_dec_over : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_VDEC_NORM_INT_MASK_UNION;
#endif
#define SOC_VDEC_NORM_INT_MASK_norm_intm_vdh_dec_over_START (0)
#define SOC_VDEC_NORM_INT_MASK_norm_intm_vdh_dec_over_END (0)
#define SOC_VDEC_NORM_INT_MASK_norm_intm_vdh_dec_err_START (1)
#define SOC_VDEC_NORM_INT_MASK_norm_intm_vdh_dec_err_END (1)
#define SOC_VDEC_NORM_INT_MASK_norm_intm_vdh_part_dec_over_START (2)
#define SOC_VDEC_NORM_INT_MASK_norm_intm_vdh_part_dec_over_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vctrl_state : 9;
        unsigned int reserved : 23;
    } reg;
} SOC_VDEC_VCTRL_STATE_UNION;
#endif
#define SOC_VDEC_VCTRL_STATE_vctrl_state_START (0)
#define SOC_VDEC_VCTRL_STATE_vctrl_state_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vdh_version_id : 32;
    } reg;
} SOC_VDEC_VDH_VERSION_ID_UNION;
#endif
#define SOC_VDEC_VDH_VERSION_ID_vdh_version_id_START (0)
#define SOC_VDEC_VDH_VERSION_ID_vdh_version_id_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int emar_wosd : 4;
        unsigned int emar_rosd : 8;
        unsigned int reserved : 20;
    } reg;
} SOC_VDEC_EMAR_ID_UNION;
#endif
#define SOC_VDEC_EMAR_ID_emar_wosd_START (0)
#define SOC_VDEC_EMAR_ID_emar_wosd_END (3)
#define SOC_VDEC_EMAR_ID_emar_rosd_START (4)
#define SOC_VDEC_EMAR_ID_emar_rosd_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int max_cnt_dblk_rd : 5;
        unsigned int max_cnt_dblk_wr : 5;
        unsigned int max_cnt_prc : 5;
        unsigned int max_cnt_other : 5;
        unsigned int reserved : 12;
    } reg;
} SOC_VDEC_RPT_CNT_UNION;
#endif
#define SOC_VDEC_RPT_CNT_max_cnt_dblk_rd_START (0)
#define SOC_VDEC_RPT_CNT_max_cnt_dblk_rd_END (4)
#define SOC_VDEC_RPT_CNT_max_cnt_dblk_wr_START (5)
#define SOC_VDEC_RPT_CNT_max_cnt_dblk_wr_END (9)
#define SOC_VDEC_RPT_CNT_max_cnt_prc_START (10)
#define SOC_VDEC_RPT_CNT_max_cnt_prc_END (14)
#define SOC_VDEC_RPT_CNT_max_cnt_other_START (15)
#define SOC_VDEC_RPT_CNT_max_cnt_other_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vctrl_rd_to : 10;
        unsigned int vctrl_wr_to : 10;
        unsigned int reserved : 12;
    } reg;
} SOC_VDEC_VCTRL_TO_UNION;
#endif
#define SOC_VDEC_VCTRL_TO_vctrl_rd_to_START (0)
#define SOC_VDEC_VCTRL_TO_vctrl_rd_to_END (9)
#define SOC_VDEC_VCTRL_TO_vctrl_wr_to_START (10)
#define SOC_VDEC_VCTRL_TO_vctrl_wr_to_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sed_rd_stream_to : 10;
        unsigned int sed_rd_top_to : 10;
        unsigned int sed_wr_top_to : 10;
        unsigned int reserved : 2;
    } reg;
} SOC_VDEC_SED_TO_UNION;
#endif
#define SOC_VDEC_SED_TO_sed_rd_stream_to_START (0)
#define SOC_VDEC_SED_TO_sed_rd_stream_to_END (9)
#define SOC_VDEC_SED_TO_sed_rd_top_to_START (10)
#define SOC_VDEC_SED_TO_sed_rd_top_to_END (19)
#define SOC_VDEC_SED_TO_sed_wr_top_to_START (20)
#define SOC_VDEC_SED_TO_sed_wr_top_to_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int it_rd_to : 10;
        unsigned int it_wr_to : 10;
        unsigned int reserved : 12;
    } reg;
} SOC_VDEC_ITRANS_TO_UNION;
#endif
#define SOC_VDEC_ITRANS_TO_it_rd_to_START (0)
#define SOC_VDEC_ITRANS_TO_it_rd_to_END (9)
#define SOC_VDEC_ITRANS_TO_it_wr_to_START (10)
#define SOC_VDEC_ITRANS_TO_it_wr_to_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pmv_rd_col_to : 10;
        unsigned int pmv_rd_top_to : 10;
        unsigned int pmv_wr_to : 10;
        unsigned int reserved : 2;
    } reg;
} SOC_VDEC_PMV_TO_UNION;
#endif
#define SOC_VDEC_PMV_TO_pmv_rd_col_to_START (0)
#define SOC_VDEC_PMV_TO_pmv_rd_col_to_END (9)
#define SOC_VDEC_PMV_TO_pmv_rd_top_to_START (10)
#define SOC_VDEC_PMV_TO_pmv_rd_top_to_END (19)
#define SOC_VDEC_PMV_TO_pmv_wr_to_START (20)
#define SOC_VDEC_PMV_TO_pmv_wr_to_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int prc_rd_to : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_VDEC_PRC_TO_UNION;
#endif
#define SOC_VDEC_PRC_TO_prc_rd_to_START (0)
#define SOC_VDEC_PRC_TO_prc_rd_to_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rcn_rd_to : 10;
        unsigned int rcn_wr_to : 10;
        unsigned int reserved : 12;
    } reg;
} SOC_VDEC_RCN_TO_UNION;
#endif
#define SOC_VDEC_RCN_TO_rcn_rd_to_START (0)
#define SOC_VDEC_RCN_TO_rcn_rd_to_END (9)
#define SOC_VDEC_RCN_TO_rcn_wr_to_START (10)
#define SOC_VDEC_RCN_TO_rcn_wr_to_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dblk_rd_to : 10;
        unsigned int dblk_wr_to : 10;
        unsigned int reserved : 12;
    } reg;
} SOC_VDEC_DBLK_TO_UNION;
#endif
#define SOC_VDEC_DBLK_TO_dblk_rd_to_START (0)
#define SOC_VDEC_DBLK_TO_dblk_rd_to_END (9)
#define SOC_VDEC_DBLK_TO_dblk_wr_to_START (10)
#define SOC_VDEC_DBLK_TO_dblk_wr_to_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ppfd_rd_slice_to : 10;
        unsigned int ppfd_rd_buf_to : 10;
        unsigned int ppfd_wr_buf_to : 10;
        unsigned int reserved : 2;
    } reg;
} SOC_VDEC_PPFD_TO_UNION;
#endif
#define SOC_VDEC_PPFD_TO_ppfd_rd_slice_to_START (0)
#define SOC_VDEC_PPFD_TO_ppfd_rd_slice_to_END (9)
#define SOC_VDEC_PPFD_TO_ppfd_rd_buf_to_START (10)
#define SOC_VDEC_PPFD_TO_ppfd_rd_buf_to_END (19)
#define SOC_VDEC_PPFD_TO_ppfd_wr_buf_to_START (20)
#define SOC_VDEC_PPFD_TO_ppfd_wr_buf_to_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fpga_version_id : 32;
    } reg;
} SOC_VDEC_FPGA_VERSION_UNION;
#endif
#define SOC_VDEC_FPGA_VERSION_fpga_version_id_START (0)
#define SOC_VDEC_FPGA_VERSION_fpga_version_id_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int part_over_int_level : 32;
    } reg;
} SOC_VDEC_PART_OVER_INT_LEVEL_UNION;
#endif
#define SOC_VDEC_PART_OVER_INT_LEVEL_part_over_int_level_START (0)
#define SOC_VDEC_PART_OVER_INT_LEVEL_part_over_int_level_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ystaddr : 32;
    } reg;
} SOC_VDEC_YSTADDR_UNION;
#endif
#define SOC_VDEC_YSTADDR_ystaddr_START (0)
#define SOC_VDEC_YSTADDR_ystaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ystride : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VDEC_YSTRIDE_UNION;
#endif
#define SOC_VDEC_YSTRIDE_ystride_START (0)
#define SOC_VDEC_YSTRIDE_ystride_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int uvoffset : 32;
    } reg;
} SOC_VDEC_UVOFFSET_UNION;
#endif
#define SOC_VDEC_UVOFFSET_uvoffset_START (0)
#define SOC_VDEC_UVOFFSET_uvoffset_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int line_num_staddr : 32;
    } reg;
} SOC_VDEC_LINE_NUM_STADDR_UNION;
#endif
#define SOC_VDEC_LINE_NUM_STADDR_line_num_staddr_START (0)
#define SOC_VDEC_LINE_NUM_STADDR_line_num_staddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 4;
        unsigned int ppfd_buf_addr : 28;
    } reg;
} SOC_VDEC_PPFD_BUF_ADDR_UNION;
#endif
#define SOC_VDEC_PPFD_BUF_ADDR_ppfd_buf_addr_START (4)
#define SOC_VDEC_PPFD_BUF_ADDR_ppfd_buf_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ppfd_buf_len : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VDEC_PPFD_BUF_LEN_UNION;
#endif
#define SOC_VDEC_PPFD_BUF_LEN_ppfd_buf_len_START (0)
#define SOC_VDEC_PPFD_BUF_LEN_ppfd_buf_len_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int prc_cache_type : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_VDEC_PPFD_CACHE_TYPE_UNION;
#endif
#define SOC_VDEC_PPFD_CACHE_TYPE_prc_cache_type_START (0)
#define SOC_VDEC_PPFD_CACHE_TYPE_prc_cache_type_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sed_domn_clk_cfg : 2;
        unsigned int itrans_domn_clk_cfg : 2;
        unsigned int pmv_domn_clk_cfg : 2;
        unsigned int prc_domn_clk_cfg : 2;
        unsigned int prf_domn_clk_cfg : 2;
        unsigned int rcn_domn_clk_cfg : 2;
        unsigned int dblk_domn_clk_cfg : 2;
        unsigned int sao_domn_clk_cfg : 2;
        unsigned int cmp_domn_clk_cfg : 2;
        unsigned int vctrl_domn_clk_cfg : 2;
        unsigned int reserved_0 : 2;
        unsigned int vdh_arbit_domn_clk_cfg : 2;
        unsigned int reserved_1 : 8;
    } reg;
} SOC_VDEC_DOMN_CLK_CFG_CNT_UNION;
#endif
#define SOC_VDEC_DOMN_CLK_CFG_CNT_sed_domn_clk_cfg_START (0)
#define SOC_VDEC_DOMN_CLK_CFG_CNT_sed_domn_clk_cfg_END (1)
#define SOC_VDEC_DOMN_CLK_CFG_CNT_itrans_domn_clk_cfg_START (2)
#define SOC_VDEC_DOMN_CLK_CFG_CNT_itrans_domn_clk_cfg_END (3)
#define SOC_VDEC_DOMN_CLK_CFG_CNT_pmv_domn_clk_cfg_START (4)
#define SOC_VDEC_DOMN_CLK_CFG_CNT_pmv_domn_clk_cfg_END (5)
#define SOC_VDEC_DOMN_CLK_CFG_CNT_prc_domn_clk_cfg_START (6)
#define SOC_VDEC_DOMN_CLK_CFG_CNT_prc_domn_clk_cfg_END (7)
#define SOC_VDEC_DOMN_CLK_CFG_CNT_prf_domn_clk_cfg_START (8)
#define SOC_VDEC_DOMN_CLK_CFG_CNT_prf_domn_clk_cfg_END (9)
#define SOC_VDEC_DOMN_CLK_CFG_CNT_rcn_domn_clk_cfg_START (10)
#define SOC_VDEC_DOMN_CLK_CFG_CNT_rcn_domn_clk_cfg_END (11)
#define SOC_VDEC_DOMN_CLK_CFG_CNT_dblk_domn_clk_cfg_START (12)
#define SOC_VDEC_DOMN_CLK_CFG_CNT_dblk_domn_clk_cfg_END (13)
#define SOC_VDEC_DOMN_CLK_CFG_CNT_sao_domn_clk_cfg_START (14)
#define SOC_VDEC_DOMN_CLK_CFG_CNT_sao_domn_clk_cfg_END (15)
#define SOC_VDEC_DOMN_CLK_CFG_CNT_cmp_domn_clk_cfg_START (16)
#define SOC_VDEC_DOMN_CLK_CFG_CNT_cmp_domn_clk_cfg_END (17)
#define SOC_VDEC_DOMN_CLK_CFG_CNT_vctrl_domn_clk_cfg_START (18)
#define SOC_VDEC_DOMN_CLK_CFG_CNT_vctrl_domn_clk_cfg_END (19)
#define SOC_VDEC_DOMN_CLK_CFG_CNT_vdh_arbit_domn_clk_cfg_START (22)
#define SOC_VDEC_DOMN_CLK_CFG_CNT_vdh_arbit_domn_clk_cfg_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int safe_intrms_vdh_dec_over : 1;
        unsigned int safe_intrms_vdh_dec_err : 1;
        unsigned int safe_intrms_vdh_part_dec_over : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_VDEC_SAFE_INT_UNION;
#endif
#define SOC_VDEC_SAFE_INT_safe_intrms_vdh_dec_over_START (0)
#define SOC_VDEC_SAFE_INT_safe_intrms_vdh_dec_over_END (0)
#define SOC_VDEC_SAFE_INT_safe_intrms_vdh_dec_err_START (1)
#define SOC_VDEC_SAFE_INT_safe_intrms_vdh_dec_err_END (1)
#define SOC_VDEC_SAFE_INT_safe_intrms_vdh_part_dec_over_START (2)
#define SOC_VDEC_SAFE_INT_safe_intrms_vdh_part_dec_over_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int safe_intm_vdh_dec_over : 1;
        unsigned int safe_intm_vdh_dec_err : 1;
        unsigned int safe_intm_vdh_part_dec_over : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_VDEC_SAFE_INT_MASK_UNION;
#endif
#define SOC_VDEC_SAFE_INT_MASK_safe_intm_vdh_dec_over_START (0)
#define SOC_VDEC_SAFE_INT_MASK_safe_intm_vdh_dec_over_END (0)
#define SOC_VDEC_SAFE_INT_MASK_safe_intm_vdh_dec_err_START (1)
#define SOC_VDEC_SAFE_INT_MASK_safe_intm_vdh_dec_err_END (1)
#define SOC_VDEC_SAFE_INT_MASK_safe_intm_vdh_part_dec_over_START (2)
#define SOC_VDEC_SAFE_INT_MASK_safe_intm_vdh_part_dec_over_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dec_cycleperpic : 32;
    } reg;
} SOC_VDEC_DEC_CYCLEPERPIC_UNION;
#endif
#define SOC_VDEC_DEC_CYCLEPERPIC_dec_cycleperpic_START (0)
#define SOC_VDEC_DEC_CYCLEPERPIC_dec_cycleperpic_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_bdwidth_perpic : 32;
    } reg;
} SOC_VDEC_RD_BDWIDTH_PERPIC_UNION;
#endif
#define SOC_VDEC_RD_BDWIDTH_PERPIC_rd_bdwidth_perpic_START (0)
#define SOC_VDEC_RD_BDWIDTH_PERPIC_rd_bdwidth_perpic_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr_bdwidth_perpic : 32;
    } reg;
} SOC_VDEC_WR_BDWIDTH_PERPIC_UNION;
#endif
#define SOC_VDEC_WR_BDWIDTH_PERPIC_wr_bdwidth_perpic_START (0)
#define SOC_VDEC_WR_BDWIDTH_PERPIC_wr_bdwidth_perpic_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_req_perpic : 32;
    } reg;
} SOC_VDEC_RD_REQ_PERPIC_UNION;
#endif
#define SOC_VDEC_RD_REQ_PERPIC_rd_req_perpic_START (0)
#define SOC_VDEC_RD_REQ_PERPIC_rd_req_perpic_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr_req_perpic : 32;
    } reg;
} SOC_VDEC_WR_REQ_PERPIC_UNION;
#endif
#define SOC_VDEC_WR_REQ_PERPIC_wr_req_perpic_START (0)
#define SOC_VDEC_WR_REQ_PERPIC_wr_req_perpic_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int r0_chn : 4;
        unsigned int r1_chn : 4;
        unsigned int w0_chn : 4;
        unsigned int w1_chn : 4;
        unsigned int r0_ch_over : 1;
        unsigned int r1_ch_over : 1;
        unsigned int w0_ch_over : 1;
        unsigned int w1_ch_over : 1;
        unsigned int cur_rcmd_st : 2;
        unsigned int save_cnt : 2;
        unsigned int rcmd_chn_cnt : 5;
        unsigned int reserved : 3;
    } reg;
} SOC_VDEC_EMAR_STATE0_UNION;
#endif
#define SOC_VDEC_EMAR_STATE0_r0_chn_START (0)
#define SOC_VDEC_EMAR_STATE0_r0_chn_END (3)
#define SOC_VDEC_EMAR_STATE0_r1_chn_START (4)
#define SOC_VDEC_EMAR_STATE0_r1_chn_END (7)
#define SOC_VDEC_EMAR_STATE0_w0_chn_START (8)
#define SOC_VDEC_EMAR_STATE0_w0_chn_END (11)
#define SOC_VDEC_EMAR_STATE0_w1_chn_START (12)
#define SOC_VDEC_EMAR_STATE0_w1_chn_END (15)
#define SOC_VDEC_EMAR_STATE0_r0_ch_over_START (16)
#define SOC_VDEC_EMAR_STATE0_r0_ch_over_END (16)
#define SOC_VDEC_EMAR_STATE0_r1_ch_over_START (17)
#define SOC_VDEC_EMAR_STATE0_r1_ch_over_END (17)
#define SOC_VDEC_EMAR_STATE0_w0_ch_over_START (18)
#define SOC_VDEC_EMAR_STATE0_w0_ch_over_END (18)
#define SOC_VDEC_EMAR_STATE0_w1_ch_over_START (19)
#define SOC_VDEC_EMAR_STATE0_w1_ch_over_END (19)
#define SOC_VDEC_EMAR_STATE0_cur_rcmd_st_START (20)
#define SOC_VDEC_EMAR_STATE0_cur_rcmd_st_END (21)
#define SOC_VDEC_EMAR_STATE0_save_cnt_START (22)
#define SOC_VDEC_EMAR_STATE0_save_cnt_END (23)
#define SOC_VDEC_EMAR_STATE0_rcmd_chn_cnt_START (24)
#define SOC_VDEC_EMAR_STATE0_rcmd_chn_cnt_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int emar_state1 : 32;
    } reg;
} SOC_VDEC_EMAR_STATE1_UNION;
#endif
#define SOC_VDEC_EMAR_STATE1_emar_state1_START (0)
#define SOC_VDEC_EMAR_STATE1_emar_state1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int video_standard_en : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VDEC_VIDEO_STANDARD_EN_UNION;
#endif
#define SOC_VDEC_VIDEO_STANDARD_EN_video_standard_en_START (0)
#define SOC_VDEC_VIDEO_STANDARD_EN_video_standard_en_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int currpicmb0qp : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_VDEC_MB0_QP_IN_CURR_PIC_UNION;
#endif
#define SOC_VDEC_MB0_QP_IN_CURR_PIC_currpicmb0qp_START (0)
#define SOC_VDEC_MB0_QP_IN_CURR_PIC_currpicmb0qp_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int switch_rounding : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VDEC_SWITCH_ROUNDING_UNION;
#endif
#define SOC_VDEC_SWITCH_ROUNDING_switch_rounding_START (0)
#define SOC_VDEC_SWITCH_ROUNDING_switch_rounding_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_cnt_total[31:0] : 32;
    } reg;
} SOC_VDEC_VDH_RD_REQ_CYCLE_PERPIC_L_UNION;
#endif
#define SOC_VDEC_VDH_RD_REQ_CYCLE_PERPIC_L_rd_cnt_total [31:0]_START (0)
#define SOC_VDEC_VDH_RD_REQ_CYCLE_PERPIC_L_rd_cnt_total [31:0]_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_cnt_total[63:31] : 32;
    } reg;
} SOC_VDEC_VDH_RD_REQ_CYCLE_PERPIC_H_UNION;
#endif
#define SOC_VDEC_VDH_RD_REQ_CYCLE_PERPIC_H_rd_cnt_total [63:31]_START (0)
#define SOC_VDEC_VDH_RD_REQ_CYCLE_PERPIC_H_rd_cnt_total [63:31]_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr_cnt_total[31:0] : 32;
    } reg;
} SOC_VDEC_VDH_WR_REQ_CYCLE_PERPIC_L_UNION;
#endif
#define SOC_VDEC_VDH_WR_REQ_CYCLE_PERPIC_L_wr_cnt_total [31:0]_START (0)
#define SOC_VDEC_VDH_WR_REQ_CYCLE_PERPIC_L_wr_cnt_total [31:0]_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr_cnt_total[63:32] : 32;
    } reg;
} SOC_VDEC_VDH_WR_REQ_CYCLE_PERPIC_H_UNION;
#endif
#define SOC_VDEC_VDH_WR_REQ_CYCLE_PERPIC_H_wr_cnt_total [63:32]_START (0)
#define SOC_VDEC_VDH_WR_REQ_CYCLE_PERPIC_H_wr_cnt_total [63:32]_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int emar_state2 : 32;
    } reg;
} SOC_VDEC_EMAR_STATE2_UNION;
#endif
#define SOC_VDEC_EMAR_STATE2_emar_state2_START (0)
#define SOC_VDEC_EMAR_STATE2_emar_state2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int emar_state3 : 32;
    } reg;
} SOC_VDEC_EMAR_STATE3_UNION;
#endif
#define SOC_VDEC_EMAR_STATE3_emar_state3_START (0)
#define SOC_VDEC_EMAR_STATE3_emar_state3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int emar_state4 : 32;
    } reg;
} SOC_VDEC_EMAR_STATE4_UNION;
#endif
#define SOC_VDEC_EMAR_STATE4_emar_state4_START (0)
#define SOC_VDEC_EMAR_STATE4_emar_state4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ctl2par_mb_rdy : 1;
        unsigned int ctl2par_slc_rdy : 1;
        unsigned int ctl2par_pic_rdy : 1;
        unsigned int ctl2par_err : 1;
        unsigned int ctl2par_top_sta : 8;
        unsigned int pmv2sed_tu_buf_full : 1;
        unsigned int pmv2sed_pu_buf_full : 1;
        unsigned int pmv2sed_cu_buf_full : 1;
        unsigned int pmv2sed_ctb_buf_full : 1;
        unsigned int pmv2se_buffer_full : 1;
        unsigned int it2se_buffer_full : 1;
        unsigned int reserved : 14;
    } reg;
} SOC_VDEC_SED_STA_UNION;
#endif
#define SOC_VDEC_SED_STA_ctl2par_mb_rdy_START (0)
#define SOC_VDEC_SED_STA_ctl2par_mb_rdy_END (0)
#define SOC_VDEC_SED_STA_ctl2par_slc_rdy_START (1)
#define SOC_VDEC_SED_STA_ctl2par_slc_rdy_END (1)
#define SOC_VDEC_SED_STA_ctl2par_pic_rdy_START (2)
#define SOC_VDEC_SED_STA_ctl2par_pic_rdy_END (2)
#define SOC_VDEC_SED_STA_ctl2par_err_START (3)
#define SOC_VDEC_SED_STA_ctl2par_err_END (3)
#define SOC_VDEC_SED_STA_ctl2par_top_sta_START (4)
#define SOC_VDEC_SED_STA_ctl2par_top_sta_END (11)
#define SOC_VDEC_SED_STA_pmv2sed_tu_buf_full_START (12)
#define SOC_VDEC_SED_STA_pmv2sed_tu_buf_full_END (12)
#define SOC_VDEC_SED_STA_pmv2sed_pu_buf_full_START (13)
#define SOC_VDEC_SED_STA_pmv2sed_pu_buf_full_END (13)
#define SOC_VDEC_SED_STA_pmv2sed_cu_buf_full_START (14)
#define SOC_VDEC_SED_STA_pmv2sed_cu_buf_full_END (14)
#define SOC_VDEC_SED_STA_pmv2sed_ctb_buf_full_START (15)
#define SOC_VDEC_SED_STA_pmv2sed_ctb_buf_full_END (15)
#define SOC_VDEC_SED_STA_pmv2se_buffer_full_START (16)
#define SOC_VDEC_SED_STA_pmv2se_buffer_full_END (16)
#define SOC_VDEC_SED_STA_it2se_buffer_full_START (17)
#define SOC_VDEC_SED_STA_it2se_buffer_full_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int se2dpi_mbx : 9;
        unsigned int reserved_0 : 7;
        unsigned int se2dpi_mby : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_VDEC_SED_MBXY_UNION;
#endif
#define SOC_VDEC_SED_MBXY_se2dpi_mbx_START (0)
#define SOC_VDEC_SED_MBXY_se2dpi_mbx_END (8)
#define SOC_VDEC_SED_MBXY_se2dpi_mby_START (16)
#define SOC_VDEC_SED_MBXY_se2dpi_mby_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int first_mb_num : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VDEC_SED_FSTMB_UNION;
#endif
#define SOC_VDEC_SED_FSTMB_first_mb_num_START (0)
#define SOC_VDEC_SED_FSTMB_first_mb_num_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int last_mb_num : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_VDEC_SED_LSTMB_UNION;
#endif
#define SOC_VDEC_SED_LSTMB_last_mb_num_START (0)
#define SOC_VDEC_SED_LSTMB_last_mb_num_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mb_layer_state : 4;
        unsigned int residul_state : 3;
        unsigned int seg_luma4x4_state : 4;
        unsigned int luma4x4_b8_state : 3;
        unsigned int resblk_state : 3;
        unsigned int reserved : 11;
        unsigned int se_mvd_state : 4;
    } reg;
} SOC_VDEC_SED_STATE2_0(H264)_UNION;
#endif
#define SOC_VDEC_SED_STATE2_0(H264) _mb_layer_state_START (0)
#define SOC_VDEC_SED_STATE2_0(H264) _mb_layer_state_END (3)
#define SOC_VDEC_SED_STATE2_0(H264) _residul_state_START (4)
#define SOC_VDEC_SED_STATE2_0(H264) _residul_state_END (6)
#define SOC_VDEC_SED_STATE2_0(H264) _seg_luma4x4_state_START (7)
#define SOC_VDEC_SED_STATE2_0(H264) _seg_luma4x4_state_END (10)
#define SOC_VDEC_SED_STATE2_0(H264) _luma4x4_b8_state_START (11)
#define SOC_VDEC_SED_STATE2_0(H264) _luma4x4_b8_state_END (13)
#define SOC_VDEC_SED_STATE2_0(H264) _resblk_state_START (14)
#define SOC_VDEC_SED_STATE2_0(H264) _resblk_state_END (16)
#define SOC_VDEC_SED_STATE2_0(H264) _se_mvd_state_START (28)
#define SOC_VDEC_SED_STATE2_0(H264) _se_mvd_state_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int macroblock_pattern : 1;
        unsigned int macroblock_forward : 1;
        unsigned int reserved : 6;
        unsigned int cur_sta_qpmode : 9;
        unsigned int mb_addr_incr : 11;
        unsigned int err_sta : 4;
    } reg;
} SOC_VDEC_SED_STATE2_1(MPEG2)_UNION;
#endif
#define SOC_VDEC_SED_STATE2_1(MPEG2) _macroblock_pattern_START (0)
#define SOC_VDEC_SED_STATE2_1(MPEG2) _macroblock_pattern_END (0)
#define SOC_VDEC_SED_STATE2_1(MPEG2) _macroblock_forward_START (1)
#define SOC_VDEC_SED_STATE2_1(MPEG2) _macroblock_forward_END (1)
#define SOC_VDEC_SED_STATE2_1(MPEG2) _cur_sta_qpmode_START (8)
#define SOC_VDEC_SED_STATE2_1(MPEG2) _cur_sta_qpmode_END (16)
#define SOC_VDEC_SED_STATE2_1(MPEG2) _mb_addr_incr_START (17)
#define SOC_VDEC_SED_STATE2_1(MPEG2) _mb_addr_incr_END (27)
#define SOC_VDEC_SED_STATE2_1(MPEG2) _err_sta_START (28)
#define SOC_VDEC_SED_STATE2_1(MPEG2) _err_sta_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int d3_coef_sta : 5;
        unsigned int d3_blk_sta : 7;
        unsigned int d3_mb_sta : 9;
        unsigned int d3_main_sta : 4;
        unsigned int cbp_cur : 6;
        unsigned int mb_type : 1;
    } reg;
} SOC_VDEC_SED_STATE2_1(DIVX3)_UNION;
#endif
#define SOC_VDEC_SED_STATE2_1(DIVX3) _d3_coef_sta_START (0)
#define SOC_VDEC_SED_STATE2_1(DIVX3) _d3_coef_sta_END (4)
#define SOC_VDEC_SED_STATE2_1(DIVX3) _d3_blk_sta_START (5)
#define SOC_VDEC_SED_STATE2_1(DIVX3) _d3_blk_sta_END (11)
#define SOC_VDEC_SED_STATE2_1(DIVX3) _d3_mb_sta_START (12)
#define SOC_VDEC_SED_STATE2_1(DIVX3) _d3_mb_sta_END (20)
#define SOC_VDEC_SED_STATE2_1(DIVX3) _d3_main_sta_START (21)
#define SOC_VDEC_SED_STATE2_1(DIVX3) _d3_main_sta_END (24)
#define SOC_VDEC_SED_STATE2_1(DIVX3) _cbp_cur_START (25)
#define SOC_VDEC_SED_STATE2_1(DIVX3) _cbp_cur_END (30)
#define SOC_VDEC_SED_STATE2_1(DIVX3) _mb_type_START (31)
#define SOC_VDEC_SED_STATE2_1(DIVX3) _mb_type_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cur_sta_inlac : 4;
        unsigned int cur_sta_mv : 6;
        unsigned int cur_sta_mb : 10;
        unsigned int reserved : 8;
        unsigned int err_sta : 4;
    } reg;
} SOC_VDEC_SED_STATE2_1(MPEG4)_UNION;
#endif
#define SOC_VDEC_SED_STATE2_1(MPEG4) _cur_sta_inlac_START (0)
#define SOC_VDEC_SED_STATE2_1(MPEG4) _cur_sta_inlac_END (3)
#define SOC_VDEC_SED_STATE2_1(MPEG4) _cur_sta_mv_START (4)
#define SOC_VDEC_SED_STATE2_1(MPEG4) _cur_sta_mv_END (9)
#define SOC_VDEC_SED_STATE2_1(MPEG4) _cur_sta_mb_START (10)
#define SOC_VDEC_SED_STATE2_1(MPEG4) _cur_sta_mb_END (19)
#define SOC_VDEC_SED_STATE2_1(MPEG4) _err_sta_START (28)
#define SOC_VDEC_SED_STATE2_1(MPEG4) _err_sta_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int stacker1 : 4;
        unsigned int stacker2 : 4;
        unsigned int stacker3 : 4;
        unsigned int stacker_ptr : 4;
        unsigned int part_mode : 4;
        unsigned int cu_pred_mode : 4;
        unsigned int scanidx : 4;
        unsigned int cu_skip_flag : 1;
        unsigned int pcm_flag : 1;
        unsigned int repair_en : 1;
        unsigned int rqt_root_cbf : 1;
    } reg;
} SOC_VDEC_SED_STATE2_1(H265)_UNION;
#endif
#define SOC_VDEC_SED_STATE2_1(H265) _stacker1_START (0)
#define SOC_VDEC_SED_STATE2_1(H265) _stacker1_END (3)
#define SOC_VDEC_SED_STATE2_1(H265) _stacker2_START (4)
#define SOC_VDEC_SED_STATE2_1(H265) _stacker2_END (7)
#define SOC_VDEC_SED_STATE2_1(H265) _stacker3_START (8)
#define SOC_VDEC_SED_STATE2_1(H265) _stacker3_END (11)
#define SOC_VDEC_SED_STATE2_1(H265) _stacker_ptr_START (12)
#define SOC_VDEC_SED_STATE2_1(H265) _stacker_ptr_END (15)
#define SOC_VDEC_SED_STATE2_1(H265) _part_mode_START (16)
#define SOC_VDEC_SED_STATE2_1(H265) _part_mode_END (19)
#define SOC_VDEC_SED_STATE2_1(H265) _cu_pred_mode_START (20)
#define SOC_VDEC_SED_STATE2_1(H265) _cu_pred_mode_END (23)
#define SOC_VDEC_SED_STATE2_1(H265) _scanidx_START (24)
#define SOC_VDEC_SED_STATE2_1(H265) _scanidx_END (27)
#define SOC_VDEC_SED_STATE2_1(H265) _cu_skip_flag_START (28)
#define SOC_VDEC_SED_STATE2_1(H265) _cu_skip_flag_END (28)
#define SOC_VDEC_SED_STATE2_1(H265) _pcm_flag_START (29)
#define SOC_VDEC_SED_STATE2_1(H265) _pcm_flag_END (29)
#define SOC_VDEC_SED_STATE2_1(H265) _repair_en_START (30)
#define SOC_VDEC_SED_STATE2_1(H265) _repair_en_END (30)
#define SOC_VDEC_SED_STATE2_1(H265) _rqt_root_cbf_START (31)
#define SOC_VDEC_SED_STATE2_1(H265) _rqt_root_cbf_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int blk_err_state : 3;
        unsigned int prs_err_state : 3;
        unsigned int h4_err_state : 2;
        unsigned int submb_pred_cur_sta : 4;
        unsigned int mb_pred_cur_sta : 5;
        unsigned int h4_mb_cur_sta : 10;
        unsigned int h4_slc_cur_sta : 5;
    } reg;
} SOC_VDEC_SED_STATE2_1(H264)_UNION;
#endif
#define SOC_VDEC_SED_STATE2_1(H264) _blk_err_state_START (0)
#define SOC_VDEC_SED_STATE2_1(H264) _blk_err_state_END (2)
#define SOC_VDEC_SED_STATE2_1(H264) _prs_err_state_START (3)
#define SOC_VDEC_SED_STATE2_1(H264) _prs_err_state_END (5)
#define SOC_VDEC_SED_STATE2_1(H264) _h4_err_state_START (6)
#define SOC_VDEC_SED_STATE2_1(H264) _h4_err_state_END (7)
#define SOC_VDEC_SED_STATE2_1(H264) _submb_pred_cur_sta_START (8)
#define SOC_VDEC_SED_STATE2_1(H264) _submb_pred_cur_sta_END (11)
#define SOC_VDEC_SED_STATE2_1(H264) _mb_pred_cur_sta_START (12)
#define SOC_VDEC_SED_STATE2_1(H264) _mb_pred_cur_sta_END (16)
#define SOC_VDEC_SED_STATE2_1(H264) _h4_mb_cur_sta_START (17)
#define SOC_VDEC_SED_STATE2_1(H264) _h4_mb_cur_sta_END (26)
#define SOC_VDEC_SED_STATE2_1(H264) _h4_slc_cur_sta_START (27)
#define SOC_VDEC_SED_STATE2_1(H264) _h4_slc_cur_sta_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mb0_qp_in_cur_pic : 5;
        unsigned int reserved_0 : 3;
        unsigned int rv_error_state : 8;
        unsigned int reserved_1 : 16;
    } reg;
} SOC_VDEC_SED_STATE2_1(RV)_UNION;
#endif
#define SOC_VDEC_SED_STATE2_1(RV) _mb0_qp_in_cur_pic_START (0)
#define SOC_VDEC_SED_STATE2_1(RV) _mb0_qp_in_cur_pic_END (4)
#define SOC_VDEC_SED_STATE2_1(RV) _rv_error_state_START (8)
#define SOC_VDEC_SED_STATE2_1(RV) _rv_error_state_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int blk2ctl_blkcnt : 3;
        unsigned int cur_sta_cbpqp : 5;
        unsigned int cur_sta_mb : 8;
        unsigned int reserved : 7;
        unsigned int cur_sta_main : 5;
        unsigned int error_state : 4;
    } reg;
} SOC_VDEC_SED_STATE2_1(AVS)_UNION;
#endif
#define SOC_VDEC_SED_STATE2_1(AVS) _blk2ctl_blkcnt_START (0)
#define SOC_VDEC_SED_STATE2_1(AVS) _blk2ctl_blkcnt_END (2)
#define SOC_VDEC_SED_STATE2_1(AVS) _cur_sta_cbpqp_START (3)
#define SOC_VDEC_SED_STATE2_1(AVS) _cur_sta_cbpqp_END (7)
#define SOC_VDEC_SED_STATE2_1(AVS) _cur_sta_mb_START (8)
#define SOC_VDEC_SED_STATE2_1(AVS) _cur_sta_mb_END (15)
#define SOC_VDEC_SED_STATE2_1(AVS) _cur_sta_main_START (23)
#define SOC_VDEC_SED_STATE2_1(AVS) _cur_sta_main_END (27)
#define SOC_VDEC_SED_STATE2_1(AVS) _error_state_START (28)
#define SOC_VDEC_SED_STATE2_1(AVS) _error_state_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hevc_sta_debug[47:32] : 16;
        unsigned int sed_error : 1;
        unsigned int dpi2se_endofvop : 1;
        unsigned int reserved_0 : 3;
        unsigned int se2dpi_err_type : 8;
        unsigned int reserved_1 : 2;
        unsigned int se2dpi_err : 1;
    } reg;
} SOC_VDEC_SED_STATE1_0(H265)_UNION;
#endif
#define SOC_VDEC_SED_STATE1_0(H265) _hevc_sta_debug[47:32]_START (0)
#define SOC_VDEC_SED_STATE1_0(H265) _hevc_sta_debug[47:32]_END (15)
#define SOC_VDEC_SED_STATE1_0(H265) _sed_error_START (16)
#define SOC_VDEC_SED_STATE1_0(H265) _sed_error_END (16)
#define SOC_VDEC_SED_STATE1_0(H265) _dpi2se_endofvop_START (17)
#define SOC_VDEC_SED_STATE1_0(H265) _dpi2se_endofvop_END (17)
#define SOC_VDEC_SED_STATE1_0(H265) _se2dpi_err_type_START (21)
#define SOC_VDEC_SED_STATE1_0(H265) _se2dpi_err_type_END (28)
#define SOC_VDEC_SED_STATE1_0(H265) _se2dpi_err_START (31)
#define SOC_VDEC_SED_STATE1_0(H265) _se2dpi_err_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int se2dpi_sta_1 : 32;
    } reg;
} SOC_VDEC_SED_STATE0_0(REAL)_UNION;
#endif
#define SOC_VDEC_SED_STATE0_0(REAL) _se2dpi_sta_1_START (0)
#define SOC_VDEC_SED_STATE0_0(REAL) _se2dpi_sta_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int se2dpi_d3_switch_rounding : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VDEC_SED_STATE0_1(DIVX3)_UNION;
#endif
#define SOC_VDEC_SED_STATE0_1(DIVX3) _se2dpi_d3_switch_rounding_START (0)
#define SOC_VDEC_SED_STATE0_1(DIVX3) _se2dpi_d3_switch_rounding_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ctrl2par_last_num : 18;
        unsigned int reserved : 14;
    } reg;
} SOC_VDEC_SED_STATE0_2(VPX)_UNION;
#endif
#define SOC_VDEC_SED_STATE0_2(VPX) _ctrl2par_last_num_START (0)
#define SOC_VDEC_SED_STATE0_2(VPX) _ctrl2par_last_num_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cur_slice_st : 4;
        unsigned int cur_sub_strm_st : 4;
        unsigned int cur_ctb_st : 4;
        unsigned int cur_q_tree : 4;
        unsigned int cur_cu_st : 8;
        unsigned int cur_pcm_st : 4;
        unsigned int slice_type : 4;
    } reg;
} SOC_VDEC_SED_STATE0_3(HEVC)_UNION;
#endif
#define SOC_VDEC_SED_STATE0_3(HEVC) _cur_slice_st_START (0)
#define SOC_VDEC_SED_STATE0_3(HEVC) _cur_slice_st_END (3)
#define SOC_VDEC_SED_STATE0_3(HEVC) _cur_sub_strm_st_START (4)
#define SOC_VDEC_SED_STATE0_3(HEVC) _cur_sub_strm_st_END (7)
#define SOC_VDEC_SED_STATE0_3(HEVC) _cur_ctb_st_START (8)
#define SOC_VDEC_SED_STATE0_3(HEVC) _cur_ctb_st_END (11)
#define SOC_VDEC_SED_STATE0_3(HEVC) _cur_q_tree_START (12)
#define SOC_VDEC_SED_STATE0_3(HEVC) _cur_q_tree_END (15)
#define SOC_VDEC_SED_STATE0_3(HEVC) _cur_cu_st_START (16)
#define SOC_VDEC_SED_STATE0_3(HEVC) _cur_cu_st_END (23)
#define SOC_VDEC_SED_STATE0_3(HEVC) _cur_pcm_st_START (24)
#define SOC_VDEC_SED_STATE0_3(HEVC) _cur_pcm_st_END (27)
#define SOC_VDEC_SED_STATE0_3(HEVC) _slice_type_START (28)
#define SOC_VDEC_SED_STATE0_3(HEVC) _slice_type_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sed_performance_perpic : 32;
    } reg;
} SOC_VDEC_SED_MB_CNT_0_UNION;
#endif
#define SOC_VDEC_SED_MB_CNT_0_sed_performance_perpic_START (0)
#define SOC_VDEC_SED_MB_CNT_0_sed_performance_perpic_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sed_residual_cnt : 32;
    } reg;
} SOC_VDEC_SED_RESIDUAL_CNT(others)_UNION;
#endif
#define SOC_VDEC_SED_RESIDUAL_CNT(others) _sed_residual_cnt_START (0)
#define SOC_VDEC_SED_RESIDUAL_CNT(others) _sed_residual_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sed_ctb_cnt : 32;
    } reg;
} SOC_VDEC_SED_CTB_CNT_UNION;
#endif
#define SOC_VDEC_SED_CTB_CNT_sed_ctb_cnt_START (0)
#define SOC_VDEC_SED_CTB_CNT_sed_ctb_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sed_bs_inv_cnt : 32;
    } reg;
} SOC_VDEC_SED_BSINV_CNT(others)_UNION;
#endif
#define SOC_VDEC_SED_BSINV_CNT(others) _sed_bs_inv_cnt_START (0)
#define SOC_VDEC_SED_BSINV_CNT(others) _sed_bs_inv_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sed_head_cnt : 32;
    } reg;
} SOC_VDEC_SED_HEAD_CNT(Others)_UNION;
#endif
#define SOC_VDEC_SED_HEAD_CNT(Others) _sed_head_cnt_START (0)
#define SOC_VDEC_SED_HEAD_CNT(Others) _sed_head_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sed_pu_cnt : 32;
    } reg;
} SOC_VDEC_SED_PU_CNT_UNION;
#endif
#define SOC_VDEC_SED_PU_CNT_sed_pu_cnt_START (0)
#define SOC_VDEC_SED_PU_CNT_sed_pu_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sed_residual_num : 32;
    } reg;
} SOC_VDEC_SED_RESIDUAL_NUM(others)_UNION;
#endif
#define SOC_VDEC_SED_RESIDUAL_NUM(others) _sed_residual_num_START (0)
#define SOC_VDEC_SED_RESIDUAL_NUM(others) _sed_residual_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sed_coeff_cnt : 32;
    } reg;
} SOC_VDEC_SED_COEF_CNT_UNION;
#endif
#define SOC_VDEC_SED_COEF_CNT_sed_coeff_cnt_START (0)
#define SOC_VDEC_SED_COEF_CNT_sed_coeff_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sed_spresidual_num : 32;
    } reg;
} SOC_VDEC_SED_SPRESIDUAL_NUM(Others)_UNION;
#endif
#define SOC_VDEC_SED_SPRESIDUAL_NUM(Others) _sed_spresidual_num_START (0)
#define SOC_VDEC_SED_SPRESIDUAL_NUM(Others) _sed_spresidual_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int h5_t_tree_cnt : 32;
    } reg;
} SOC_VDEC_HEVC_T_TREE_CNT_UNION;
#endif
#define SOC_VDEC_HEVC_T_TREE_CNT_h5_t_tree_cnt_START (0)
#define SOC_VDEC_HEVC_T_TREE_CNT_h5_t_tree_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hevc_itrans_cnt : 32;
    } reg;
} SOC_VDEC_HEVC_ITRANS_CNT_UNION;
#endif
#define SOC_VDEC_HEVC_ITRANS_CNT_hevc_itrans_cnt_START (0)
#define SOC_VDEC_HEVC_ITRANS_CNT_hevc_itrans_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hevc_cu_write_top_cnt : 32;
    } reg;
} SOC_VDEC_HEVC_CU_WRIT_TOP_CNT(HEVC)_UNION;
#endif
#define SOC_VDEC_HEVC_CU_WRIT_TOP_CNT(HEVC) _hevc_cu_write_top_cnt_START (0)
#define SOC_VDEC_HEVC_CU_WRIT_TOP_CNT(HEVC) _hevc_cu_write_top_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hevc_send_wait_cnt : 32;
    } reg;
} SOC_VDEC_HEVC_SEND_WAIT_CNT_UNION;
#endif
#define SOC_VDEC_HEVC_SEND_WAIT_CNT_hevc_send_wait_cnt_START (0)
#define SOC_VDEC_HEVC_SEND_WAIT_CNT_hevc_send_wait_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hevc_se_dec_cnt : 32;
    } reg;
} SOC_VDEC_HEVC_SE_DEC_CNT_UNION;
#endif
#define SOC_VDEC_HEVC_SE_DEC_CNT_hevc_se_dec_cnt_START (0)
#define SOC_VDEC_HEVC_SE_DEC_CNT_hevc_se_dec_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hevc_regular_cnt : 32;
    } reg;
} SOC_VDEC_HEVC_RGU_DEC_CNT_UNION;
#endif
#define SOC_VDEC_HEVC_RGU_DEC_CNT_hevc_regular_cnt_START (0)
#define SOC_VDEC_HEVC_RGU_DEC_CNT_hevc_regular_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hevc_bypass_cnt : 32;
    } reg;
} SOC_VDEC_HEVC_BYPASS_DEC_CNT_UNION;
#endif
#define SOC_VDEC_HEVC_BYPASS_DEC_CNT_hevc_bypass_cnt_START (0)
#define SOC_VDEC_HEVC_BYPASS_DEC_CNT_hevc_bypass_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hevc_terminal_cnt : 32;
    } reg;
} SOC_VDEC_HEVC_TERM_DEC_CNT_UNION;
#endif
#define SOC_VDEC_HEVC_TERM_DEC_CNT_hevc_terminal_cnt_START (0)
#define SOC_VDEC_HEVC_TERM_DEC_CNT_hevc_terminal_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bit_num_cnt_total : 32;
    } reg;
} SOC_VDEC_BIT_NUM_CNT_UNION;
#endif
#define SOC_VDEC_BIT_NUM_CNT_bit_num_cnt_total_START (0)
#define SOC_VDEC_BIT_NUM_CNT_bit_num_cnt_total_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata0 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK0_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK0_strm_buf0_rdata0_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK0_strm_buf0_rdata0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata1 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK1_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK1_strm_buf0_rdata1_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK1_strm_buf0_rdata1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata2 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK2_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK2_strm_buf0_rdata2_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK2_strm_buf0_rdata2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata3 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK3_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK3_strm_buf0_rdata3_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK3_strm_buf0_rdata3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata4 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK4_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK4_strm_buf0_rdata4_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK4_strm_buf0_rdata4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata5 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK5_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK5_strm_buf0_rdata5_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK5_strm_buf0_rdata5_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata6 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK6_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK6_strm_buf0_rdata6_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK6_strm_buf0_rdata6_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata7 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK7_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK7_strm_buf0_rdata7_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK7_strm_buf0_rdata7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata8 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK8_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK8_strm_buf0_rdata8_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK8_strm_buf0_rdata8_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata9 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK9_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK9_strm_buf0_rdata9_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK9_strm_buf0_rdata9_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata10 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK10_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK10_strm_buf0_rdata10_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK10_strm_buf0_rdata10_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata11 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK11_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK11_strm_buf0_rdata11_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK11_strm_buf0_rdata11_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata12 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK12_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK12_strm_buf0_rdata12_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK12_strm_buf0_rdata12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata13 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK13_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK13_strm_buf0_rdata13_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK13_strm_buf0_rdata13_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata14 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK14_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK14_strm_buf0_rdata14_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK14_strm_buf0_rdata14_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata15 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK15_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK15_strm_buf0_rdata15_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK15_strm_buf0_rdata15_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata16 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK16_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK16_strm_buf0_rdata16_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK16_strm_buf0_rdata16_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata17 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK17_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK17_strm_buf0_rdata17_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK17_strm_buf0_rdata17_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata18 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK18_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK18_strm_buf0_rdata18_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK18_strm_buf0_rdata18_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata19 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK19_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK19_strm_buf0_rdata19_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK19_strm_buf0_rdata19_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata20 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK20_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK20_strm_buf0_rdata20_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK20_strm_buf0_rdata20_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata21 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK21_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK21_strm_buf0_rdata21_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK21_strm_buf0_rdata21_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata22 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK22_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK22_strm_buf0_rdata22_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK22_strm_buf0_rdata22_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata23 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK23_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK23_strm_buf0_rdata23_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK23_strm_buf0_rdata23_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata24 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK24_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK24_strm_buf0_rdata24_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK24_strm_buf0_rdata24_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata25 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK25_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK25_strm_buf0_rdata25_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK25_strm_buf0_rdata25_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata26 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK26_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK26_strm_buf0_rdata26_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK26_strm_buf0_rdata26_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata27 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK27_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK27_strm_buf0_rdata27_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK27_strm_buf0_rdata27_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata28 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK28_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK28_strm_buf0_rdata28_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK28_strm_buf0_rdata28_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata29 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK29_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK29_strm_buf0_rdata29_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK29_strm_buf0_rdata29_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata30 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK30_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK30_strm_buf0_rdata30_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK30_strm_buf0_rdata30_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf0_rdata31 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF0_RDBCK31_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF0_RDBCK31_strm_buf0_rdata31_START (0)
#define SOC_VDEC_SED_STRM_BUF0_RDBCK31_strm_buf0_rdata31_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata0 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK0_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK0_strm_buf1_rdata0_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK0_strm_buf1_rdata0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata1 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK1_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK1_strm_buf1_rdata1_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK1_strm_buf1_rdata1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata2 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK2_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK2_strm_buf1_rdata2_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK2_strm_buf1_rdata2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata3 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK3_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK3_strm_buf1_rdata3_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK3_strm_buf1_rdata3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata4 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK4_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK4_strm_buf1_rdata4_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK4_strm_buf1_rdata4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata5 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK5_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK5_strm_buf1_rdata5_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK5_strm_buf1_rdata5_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata6 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK6_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK6_strm_buf1_rdata6_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK6_strm_buf1_rdata6_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata7 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK7_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK7_strm_buf1_rdata7_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK7_strm_buf1_rdata7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata8 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK8_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK8_strm_buf1_rdata8_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK8_strm_buf1_rdata8_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata9 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK9_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK9_strm_buf1_rdata9_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK9_strm_buf1_rdata9_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata10 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK10_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK10_strm_buf1_rdata10_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK10_strm_buf1_rdata10_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata11 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK11_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK11_strm_buf1_rdata11_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK11_strm_buf1_rdata11_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata12 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK12_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK12_strm_buf1_rdata12_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK12_strm_buf1_rdata12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata13 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK13_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK13_strm_buf1_rdata13_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK13_strm_buf1_rdata13_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata14 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK14_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK14_strm_buf1_rdata14_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK14_strm_buf1_rdata14_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata15 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK15_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK15_strm_buf1_rdata15_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK15_strm_buf1_rdata15_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata16 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK16_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK16_strm_buf1_rdata16_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK16_strm_buf1_rdata16_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata17 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK17_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK17_strm_buf1_rdata17_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK17_strm_buf1_rdata17_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata18 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK18_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK18_strm_buf1_rdata18_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK18_strm_buf1_rdata18_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata19 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK19_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK19_strm_buf1_rdata19_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK19_strm_buf1_rdata19_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata20 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK20_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK20_strm_buf1_rdata20_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK20_strm_buf1_rdata20_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata21 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK21_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK21_strm_buf1_rdata21_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK21_strm_buf1_rdata21_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata22 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK22_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK22_strm_buf1_rdata22_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK22_strm_buf1_rdata22_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata23 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK23_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK23_strm_buf1_rdata23_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK23_strm_buf1_rdata23_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata24 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK24_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK24_strm_buf1_rdata24_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK24_strm_buf1_rdata24_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata25 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK25_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK25_strm_buf1_rdata25_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK25_strm_buf1_rdata25_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata26 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK26_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK26_strm_buf1_rdata26_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK26_strm_buf1_rdata26_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata27 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK27_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK27_strm_buf1_rdata27_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK27_strm_buf1_rdata27_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata28 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK28_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK28_strm_buf1_rdata28_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK28_strm_buf1_rdata28_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata29 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK29_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK29_strm_buf1_rdata29_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK29_strm_buf1_rdata29_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata30 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK30_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK30_strm_buf1_rdata30_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK30_strm_buf1_rdata30_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int strm_buf1_rdata31 : 32;
    } reg;
} SOC_VDEC_SED_STRM_BUF1_RDBCK31_UNION;
#endif
#define SOC_VDEC_SED_STRM_BUF1_RDBCK31_strm_buf1_rdata31_START (0)
#define SOC_VDEC_SED_STRM_BUF1_RDBCK31_strm_buf1_rdata31_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int prot_mod : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_VDEC_ITRANS_INFO_UNION;
#endif
#define SOC_VDEC_ITRANS_INFO_prot_mod_START (0)
#define SOC_VDEC_ITRANS_INFO_prot_mod_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adm_staddr : 32;
    } reg;
} SOC_VDEC_ITR_ADDR_UNION;
#endif
#define SOC_VDEC_ITR_ADDR_adm_staddr_START (0)
#define SOC_VDEC_ITR_ADDR_adm_staddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int adm_width : 9;
        unsigned int reserved_0 : 4;
        unsigned int scale_type : 1;
        unsigned int dc_precision : 2;
        unsigned int mpeg1_flag : 1;
        unsigned int short_header : 1;
        unsigned int interlaced : 1;
        unsigned int vc1_overlap : 1;
        unsigned int picture_structure : 2;
        unsigned int real_pic_type : 2;
        unsigned int quant_type : 1;
        unsigned int alver_scanflag : 1;
        unsigned int pic_structure : 2;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_VDEC_ITR_INF_UNION;
#endif
#define SOC_VDEC_ITR_INF_adm_width_START (0)
#define SOC_VDEC_ITR_INF_adm_width_END (8)
#define SOC_VDEC_ITR_INF_scale_type_START (13)
#define SOC_VDEC_ITR_INF_scale_type_END (13)
#define SOC_VDEC_ITR_INF_dc_precision_START (14)
#define SOC_VDEC_ITR_INF_dc_precision_END (15)
#define SOC_VDEC_ITR_INF_mpeg1_flag_START (16)
#define SOC_VDEC_ITR_INF_mpeg1_flag_END (16)
#define SOC_VDEC_ITR_INF_short_header_START (17)
#define SOC_VDEC_ITR_INF_short_header_END (17)
#define SOC_VDEC_ITR_INF_interlaced_START (18)
#define SOC_VDEC_ITR_INF_interlaced_END (18)
#define SOC_VDEC_ITR_INF_vc1_overlap_START (19)
#define SOC_VDEC_ITR_INF_vc1_overlap_END (19)
#define SOC_VDEC_ITR_INF_picture_structure_START (20)
#define SOC_VDEC_ITR_INF_picture_structure_END (21)
#define SOC_VDEC_ITR_INF_real_pic_type_START (22)
#define SOC_VDEC_ITR_INF_real_pic_type_END (23)
#define SOC_VDEC_ITR_INF_quant_type_START (24)
#define SOC_VDEC_ITR_INF_quant_type_END (24)
#define SOC_VDEC_ITR_INF_alver_scanflag_START (25)
#define SOC_VDEC_ITR_INF_alver_scanflag_END (25)
#define SOC_VDEC_ITR_INF_pic_structure_START (26)
#define SOC_VDEC_ITR_INF_pic_structure_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int is_cur_fsm : 3;
        unsigned int reserved_0 : 2;
        unsigned int scaling_list_enable_flag : 1;
        unsigned int reserved_1 : 1;
        unsigned int is_inb_empt : 1;
        unsigned int ahs_inb_empt : 1;
        unsigned int top_rdy : 1;
        unsigned int it2se_buffer_full : 1;
        unsigned int reserved_2 : 1;
        unsigned int cal_cur_fsm : 4;
        unsigned int ctrl_cur_fsm : 2;
        unsigned int reserved_3 : 2;
        unsigned int outb_pempt : 1;
        unsigned int itb_empt_hvp : 1;
        unsigned int itb_full_hvp : 1;
        unsigned int outb_reg_empt : 1;
        unsigned int routb_cur_fsm : 2;
        unsigned int obutb_empt : 1;
        unsigned int outb_full : 1;
        unsigned int ritb_cur_fsm : 2;
        unsigned int itb_empt : 1;
        unsigned int itb_full : 1;
    } reg;
} SOC_VDEC_ITR_STA_0_UNION;
#endif
#define SOC_VDEC_ITR_STA_0_is_cur_fsm_START (0)
#define SOC_VDEC_ITR_STA_0_is_cur_fsm_END (2)
#define SOC_VDEC_ITR_STA_0_scaling_list_enable_flag_START (5)
#define SOC_VDEC_ITR_STA_0_scaling_list_enable_flag_END (5)
#define SOC_VDEC_ITR_STA_0_is_inb_empt_START (7)
#define SOC_VDEC_ITR_STA_0_is_inb_empt_END (7)
#define SOC_VDEC_ITR_STA_0_ahs_inb_empt_START (8)
#define SOC_VDEC_ITR_STA_0_ahs_inb_empt_END (8)
#define SOC_VDEC_ITR_STA_0_top_rdy_START (9)
#define SOC_VDEC_ITR_STA_0_top_rdy_END (9)
#define SOC_VDEC_ITR_STA_0_it2se_buffer_full_START (10)
#define SOC_VDEC_ITR_STA_0_it2se_buffer_full_END (10)
#define SOC_VDEC_ITR_STA_0_cal_cur_fsm_START (12)
#define SOC_VDEC_ITR_STA_0_cal_cur_fsm_END (15)
#define SOC_VDEC_ITR_STA_0_ctrl_cur_fsm_START (16)
#define SOC_VDEC_ITR_STA_0_ctrl_cur_fsm_END (17)
#define SOC_VDEC_ITR_STA_0_outb_pempt_START (20)
#define SOC_VDEC_ITR_STA_0_outb_pempt_END (20)
#define SOC_VDEC_ITR_STA_0_itb_empt_hvp_START (21)
#define SOC_VDEC_ITR_STA_0_itb_empt_hvp_END (21)
#define SOC_VDEC_ITR_STA_0_itb_full_hvp_START (22)
#define SOC_VDEC_ITR_STA_0_itb_full_hvp_END (22)
#define SOC_VDEC_ITR_STA_0_outb_reg_empt_START (23)
#define SOC_VDEC_ITR_STA_0_outb_reg_empt_END (23)
#define SOC_VDEC_ITR_STA_0_routb_cur_fsm_START (24)
#define SOC_VDEC_ITR_STA_0_routb_cur_fsm_END (25)
#define SOC_VDEC_ITR_STA_0_obutb_empt_START (26)
#define SOC_VDEC_ITR_STA_0_obutb_empt_END (26)
#define SOC_VDEC_ITR_STA_0_outb_full_START (27)
#define SOC_VDEC_ITR_STA_0_outb_full_END (27)
#define SOC_VDEC_ITR_STA_0_ritb_cur_fsm_START (28)
#define SOC_VDEC_ITR_STA_0_ritb_cur_fsm_END (29)
#define SOC_VDEC_ITR_STA_0_itb_empt_START (30)
#define SOC_VDEC_ITR_STA_0_itb_empt_END (30)
#define SOC_VDEC_ITR_STA_0_itb_full_START (31)
#define SOC_VDEC_ITR_STA_0_itb_full_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int is_quant : 7;
        unsigned int reserved_0 : 2;
        unsigned int is_dct_type : 1;
        unsigned int is_field : 1;
        unsigned int is_intra_16x16 : 1;
        unsigned int is_predmode : 3;
        unsigned int is_inter_16x16 : 1;
        unsigned int is_mb_type : 2;
        unsigned int reserved_1 : 2;
        unsigned int acdcmtn_st : 12;
    } reg;
} SOC_VDEC_ITR_STA_1_UNION;
#endif
#define SOC_VDEC_ITR_STA_1_is_quant_START (0)
#define SOC_VDEC_ITR_STA_1_is_quant_END (6)
#define SOC_VDEC_ITR_STA_1_is_dct_type_START (9)
#define SOC_VDEC_ITR_STA_1_is_dct_type_END (9)
#define SOC_VDEC_ITR_STA_1_is_field_START (10)
#define SOC_VDEC_ITR_STA_1_is_field_END (10)
#define SOC_VDEC_ITR_STA_1_is_intra_16x16_START (11)
#define SOC_VDEC_ITR_STA_1_is_intra_16x16_END (11)
#define SOC_VDEC_ITR_STA_1_is_predmode_START (12)
#define SOC_VDEC_ITR_STA_1_is_predmode_END (14)
#define SOC_VDEC_ITR_STA_1_is_inter_16x16_START (15)
#define SOC_VDEC_ITR_STA_1_is_inter_16x16_END (15)
#define SOC_VDEC_ITR_STA_1_is_mb_type_START (16)
#define SOC_VDEC_ITR_STA_1_is_mb_type_END (17)
#define SOC_VDEC_ITR_STA_1_acdcmtn_st_START (20)
#define SOC_VDEC_ITR_STA_1_acdcmtn_st_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ahs_adm_mbx : 9;
        unsigned int reserved_0 : 3;
        unsigned int ahs_adm_mby : 9;
        unsigned int reserved_1 : 3;
        unsigned int ahs_quant : 7;
        unsigned int acpre_flag : 1;
    } reg;
} SOC_VDEC_ITR_MB_INF_UNION;
#endif
#define SOC_VDEC_ITR_MB_INF_ahs_adm_mbx_START (0)
#define SOC_VDEC_ITR_MB_INF_ahs_adm_mbx_END (8)
#define SOC_VDEC_ITR_MB_INF_ahs_adm_mby_START (12)
#define SOC_VDEC_ITR_MB_INF_ahs_adm_mby_END (20)
#define SOC_VDEC_ITR_MB_INF_ahs_quant_START (24)
#define SOC_VDEC_ITR_MB_INF_ahs_quant_END (30)
#define SOC_VDEC_ITR_MB_INF_acpre_flag_START (31)
#define SOC_VDEC_ITR_MB_INF_acpre_flag_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int is_frm_cycle : 32;
    } reg;
} SOC_VDEC_IS_FRM_CYCLE_UNION;
#endif
#define SOC_VDEC_IS_FRM_CYCLE_is_frm_cycle_START (0)
#define SOC_VDEC_IS_FRM_CYCLE_is_frm_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ahs_frm_cycle : 32;
    } reg;
} SOC_VDEC_AHS_FRM_CYCLE_UNION;
#endif
#define SOC_VDEC_AHS_FRM_CYCLE_ahs_frm_cycle_START (0)
#define SOC_VDEC_AHS_FRM_CYCLE_ahs_frm_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dpi2pmv_mbx : 10;
        unsigned int reserved_0 : 6;
        unsigned int dpi2pmv_mby : 10;
        unsigned int reserved_1 : 6;
    } reg;
} SOC_VDEC_PMV_STATE0_0_UNION;
#endif
#define SOC_VDEC_PMV_STATE0_0_dpi2pmv_mbx_START (0)
#define SOC_VDEC_PMV_STATE0_0_dpi2pmv_mbx_END (9)
#define SOC_VDEC_PMV_STATE0_0_dpi2pmv_mby_START (16)
#define SOC_VDEC_PMV_STATE0_0_dpi2pmv_mby_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ctrl2cfg_ctb_y : 10;
        unsigned int reserved_0 : 6;
        unsigned int ctrl2cfg_ctb_x : 10;
        unsigned int reserved_1 : 6;
    } reg;
} SOC_VDEC_PMV_STATE0_1_UNION;
#endif
#define SOC_VDEC_PMV_STATE0_1_ctrl2cfg_ctb_y_START (0)
#define SOC_VDEC_PMV_STATE0_1_ctrl2cfg_ctb_y_END (9)
#define SOC_VDEC_PMV_STATE0_1_ctrl2cfg_ctb_x_START (16)
#define SOC_VDEC_PMV_STATE0_1_ctrl2cfg_ctb_x_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cur_st_pmv[4:0] : 5;
        unsigned int reserved_0 : 3;
        unsigned int pmv2se_buffer_full : 1;
        unsigned int reserved_1 : 7;
        unsigned int mp2dpi_mp_err : 1;
        unsigned int reserved_2 : 7;
        unsigned int ci2cfg_mb_is_discon : 1;
        unsigned int reserved_3 : 7;
    } reg;
} SOC_VDEC_PMV_STATE1_0_UNION;
#endif
#define SOC_VDEC_PMV_STATE1_0_cur_st_pmv [4:0]_START (0)
#define SOC_VDEC_PMV_STATE1_0_cur_st_pmv [4:0]_END (4)
#define SOC_VDEC_PMV_STATE1_0_pmv2se_buffer_full_START (8)
#define SOC_VDEC_PMV_STATE1_0_pmv2se_buffer_full_END (8)
#define SOC_VDEC_PMV_STATE1_0_mp2dpi_mp_err_START (16)
#define SOC_VDEC_PMV_STATE1_0_mp2dpi_mp_err_END (16)
#define SOC_VDEC_PMV_STATE1_0_ci2cfg_mb_is_discon_START (24)
#define SOC_VDEC_PMV_STATE1_0_ci2cfg_mb_is_discon_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ctrl2cfg_pu_mby : 10;
        unsigned int reserved_0 : 6;
        unsigned int ctrl2cfg_pu_mbx : 10;
        unsigned int reserved_1 : 6;
    } reg;
} SOC_VDEC_PMV_STATE1_1_UNION;
#endif
#define SOC_VDEC_PMV_STATE1_1_ctrl2cfg_pu_mby_START (0)
#define SOC_VDEC_PMV_STATE1_1_ctrl2cfg_pu_mby_END (9)
#define SOC_VDEC_PMV_STATE1_1_ctrl2cfg_pu_mbx_START (16)
#define SOC_VDEC_PMV_STATE1_1_ctrl2cfg_pu_mbx_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pmv_cycle_cnt : 32;
    } reg;
} SOC_VDEC_PMV_CYCLE_CNT_UNION;
#endif
#define SOC_VDEC_PMV_CYCLE_CNT_pmv_cycle_cnt_START (0)
#define SOC_VDEC_PMV_CYCLE_CNT_pmv_cycle_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ctrl2cfg_tu_mby : 10;
        unsigned int reserved_0 : 6;
        unsigned int ctrl2cfg_tu_mbx : 10;
        unsigned int reserved_1 : 6;
    } reg;
} SOC_VDEC_PMV_STATE_2 (H265)_UNION;
#endif
#define SOC_VDEC_PMV_STATE_2 (H265)_ctrl2cfg_tu_mby_START (0)
#define SOC_VDEC_PMV_STATE_2 (H265)_ctrl2cfg_tu_mby_END (9)
#define SOC_VDEC_PMV_STATE_2 (H265)_ctrl2cfg_tu_mbx_START (16)
#define SOC_VDEC_PMV_STATE_2 (H265)_ctrl2cfg_tu_mbx_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ctrl2cfg_ctb_st : 3;
        unsigned int reserved_0 : 5;
        unsigned int ctrl2cfg_cu_st : 2;
        unsigned int reserved_1 : 6;
        unsigned int ctrl2cfg_tu_st : 4;
        unsigned int reserved_2 : 4;
        unsigned int ctrl2cfg_pu_st : 3;
        unsigned int reserved_3 : 5;
    } reg;
} SOC_VDEC_PMV_STATE_3 (H265)_UNION;
#endif
#define SOC_VDEC_PMV_STATE_3 (H265)_ctrl2cfg_ctb_st_START (0)
#define SOC_VDEC_PMV_STATE_3 (H265)_ctrl2cfg_ctb_st_END (2)
#define SOC_VDEC_PMV_STATE_3 (H265)_ctrl2cfg_cu_st_START (8)
#define SOC_VDEC_PMV_STATE_3 (H265)_ctrl2cfg_cu_st_END (9)
#define SOC_VDEC_PMV_STATE_3 (H265)_ctrl2cfg_tu_st_START (16)
#define SOC_VDEC_PMV_STATE_3 (H265)_ctrl2cfg_tu_st_END (19)
#define SOC_VDEC_PMV_STATE_3 (H265)_ctrl2cfg_pu_st_START (24)
#define SOC_VDEC_PMV_STATE_3 (H265)_ctrl2cfg_pu_st_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipmd_err0 : 32;
    } reg;
} SOC_VDEC_INTRA_PRED_MODE_ERROR_0_UNION;
#endif
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_0_ipmd_err0_START (0)
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_0_ipmd_err0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ctrl2cfg_qp_st : 2;
        unsigned int reserved_0 : 6;
        unsigned int ctrl2cfg_rcn_st : 2;
        unsigned int reserved_1 : 6;
        unsigned int ctrl2cfg_dblk_st : 3;
        unsigned int reserved_2 : 5;
        unsigned int ctrl2cfg_bak_pu_st : 2;
        unsigned int reserved_3 : 6;
    } reg;
} SOC_VDEC_PMV_STATE_4 (H265)_UNION;
#endif
#define SOC_VDEC_PMV_STATE_4 (H265)_ctrl2cfg_qp_st_START (0)
#define SOC_VDEC_PMV_STATE_4 (H265)_ctrl2cfg_qp_st_END (1)
#define SOC_VDEC_PMV_STATE_4 (H265)_ctrl2cfg_rcn_st_START (8)
#define SOC_VDEC_PMV_STATE_4 (H265)_ctrl2cfg_rcn_st_END (9)
#define SOC_VDEC_PMV_STATE_4 (H265)_ctrl2cfg_dblk_st_START (16)
#define SOC_VDEC_PMV_STATE_4 (H265)_ctrl2cfg_dblk_st_END (18)
#define SOC_VDEC_PMV_STATE_4 (H265)_ctrl2cfg_bak_pu_st_START (24)
#define SOC_VDEC_PMV_STATE_4 (H265)_ctrl2cfg_bak_pu_st_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipmd_err1 : 32;
    } reg;
} SOC_VDEC_INTRA_PRED_MODE_ERROR_1_UNION;
#endif
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_1_ipmd_err1_START (0)
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_1_ipmd_err1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ctrl2cfg_obuf_ctb_full : 1;
        unsigned int reserved_0 : 7;
        unsigned int ctrl2cfg_obuf_mb_full : 1;
        unsigned int reserved_1 : 7;
        unsigned int ctrl2cfg_obuf_cbf_full : 1;
        unsigned int reserved_2 : 7;
        unsigned int buf2cfg_ctb_full : 1;
        unsigned int reserved_3 : 7;
    } reg;
} SOC_VDEC_PMV_STATE_5_UNION;
#endif
#define SOC_VDEC_PMV_STATE_5_ctrl2cfg_obuf_ctb_full_START (0)
#define SOC_VDEC_PMV_STATE_5_ctrl2cfg_obuf_ctb_full_END (0)
#define SOC_VDEC_PMV_STATE_5_ctrl2cfg_obuf_mb_full_START (8)
#define SOC_VDEC_PMV_STATE_5_ctrl2cfg_obuf_mb_full_END (8)
#define SOC_VDEC_PMV_STATE_5_ctrl2cfg_obuf_cbf_full_START (16)
#define SOC_VDEC_PMV_STATE_5_ctrl2cfg_obuf_cbf_full_END (16)
#define SOC_VDEC_PMV_STATE_5_buf2cfg_ctb_full_START (24)
#define SOC_VDEC_PMV_STATE_5_buf2cfg_ctb_full_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipmd_err2 : 32;
    } reg;
} SOC_VDEC_INTRA_PRED_MODE_ERROR_2_UNION;
#endif
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_2_ipmd_err2_START (0)
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_2_ipmd_err2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int buf2cfg_cu_full : 1;
        unsigned int reserved_0 : 7;
        unsigned int buf2cfg_pu_full : 1;
        unsigned int reserved_1 : 7;
        unsigned int buf2cfg_tu_full : 1;
        unsigned int reserved_2 : 15;
    } reg;
} SOC_VDEC_PMV_STATE_6(H265)_UNION;
#endif
#define SOC_VDEC_PMV_STATE_6(H265) _buf2cfg_cu_full_START (0)
#define SOC_VDEC_PMV_STATE_6(H265) _buf2cfg_cu_full_END (0)
#define SOC_VDEC_PMV_STATE_6(H265) _buf2cfg_pu_full_START (8)
#define SOC_VDEC_PMV_STATE_6(H265) _buf2cfg_pu_full_END (8)
#define SOC_VDEC_PMV_STATE_6(H265) _buf2cfg_tu_full_START (16)
#define SOC_VDEC_PMV_STATE_6(H265) _buf2cfg_tu_full_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipmd_err3 : 32;
    } reg;
} SOC_VDEC_INTRA_PRED_MODE_ERROR_3_UNION;
#endif
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_3_ipmd_err3_START (0)
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_3_ipmd_err3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipmd_err4 : 32;
    } reg;
} SOC_VDEC_INTRA_PRED_MODE_ERROR_4_UNION;
#endif
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_4_ipmd_err4_START (0)
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_4_ipmd_err4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipmd_err5 : 32;
    } reg;
} SOC_VDEC_INTRA_PRED_MODE_ERROR_5_UNION;
#endif
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_5_ipmd_err5_START (0)
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_5_ipmd_err5_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipmd_err6 : 32;
    } reg;
} SOC_VDEC_INTRA_PRED_MODE_ERROR_6_UNION;
#endif
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_6_ipmd_err6_START (0)
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_6_ipmd_err6_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipmd_err7 : 32;
    } reg;
} SOC_VDEC_INTRA_PRED_MODE_ERROR_7_UNION;
#endif
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_7_ipmd_err7_START (0)
#define SOC_VDEC_INTRA_PRED_MODE_ERROR_7_ipmd_err7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int prc_mbx : 9;
        unsigned int reserved_0: 7;
        unsigned int prc_mby : 9;
        unsigned int reserved_1: 7;
    } reg;
} SOC_VDEC_MB_INF_UNION;
#endif
#define SOC_VDEC_MB_INF_prc_mbx_START (0)
#define SOC_VDEC_MB_INF_prc_mbx_END (8)
#define SOC_VDEC_MB_INF_prc_mby_START (16)
#define SOC_VDEC_MB_INF_prc_mby_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fetch0_total_cnt : 32;
    } reg;
} SOC_VDEC_CACHE0_TOTAL_CNT_UNION;
#endif
#define SOC_VDEC_CACHE0_TOTAL_CNT_fetch0_total_cnt_START (0)
#define SOC_VDEC_CACHE0_TOTAL_CNT_fetch0_total_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fetch0_hit_cnt : 32;
    } reg;
} SOC_VDEC_CACHE0_HIT_CNT_UNION;
#endif
#define SOC_VDEC_CACHE0_HIT_CNT_fetch0_hit_cnt_START (0)
#define SOC_VDEC_CACHE0_HIT_CNT_fetch0_hit_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fetch0_reqhit_cnt : 32;
    } reg;
} SOC_VDEC_CACHE0_REQHIT_CNT_UNION;
#endif
#define SOC_VDEC_CACHE0_REQHIT_CNT_fetch0_reqhit_cnt_START (0)
#define SOC_VDEC_CACHE0_REQHIT_CNT_fetch0_reqhit_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fetch0_miss_cnt : 32;
    } reg;
} SOC_VDEC_CACHE0_MISS_CNT_UNION;
#endif
#define SOC_VDEC_CACHE0_MISS_CNT_fetch0_miss_cnt_START (0)
#define SOC_VDEC_CACHE0_MISS_CNT_fetch0_miss_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fetch0_fe_work_time : 32;
    } reg;
} SOC_VDEC_CACHE0_FE_WORK_TIME_UNION;
#endif
#define SOC_VDEC_CACHE0_FE_WORK_TIME_fetch0_fe_work_time_START (0)
#define SOC_VDEC_CACHE0_FE_WORK_TIME_fetch0_fe_work_time_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fetch1_total_cnt : 32;
    } reg;
} SOC_VDEC_CACHE1_TOTAL_CNT_UNION;
#endif
#define SOC_VDEC_CACHE1_TOTAL_CNT_fetch1_total_cnt_START (0)
#define SOC_VDEC_CACHE1_TOTAL_CNT_fetch1_total_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fetch1_hit_cnt : 32;
    } reg;
} SOC_VDEC_CACHE1_HIT_CNT_UNION;
#endif
#define SOC_VDEC_CACHE1_HIT_CNT_fetch1_hit_cnt_START (0)
#define SOC_VDEC_CACHE1_HIT_CNT_fetch1_hit_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fetch1_reqhit_cnt : 32;
    } reg;
} SOC_VDEC_CACHE1_REQHIT_CNT_UNION;
#endif
#define SOC_VDEC_CACHE1_REQHIT_CNT_fetch1_reqhit_cnt_START (0)
#define SOC_VDEC_CACHE1_REQHIT_CNT_fetch1_reqhit_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fetch1_miss_cnt : 32;
    } reg;
} SOC_VDEC_CACHE1_MISS_CNT_UNION;
#endif
#define SOC_VDEC_CACHE1_MISS_CNT_fetch1_miss_cnt_START (0)
#define SOC_VDEC_CACHE1_MISS_CNT_fetch1_miss_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fetch1_fe_work_time : 32;
    } reg;
} SOC_VDEC_CACHE1_FE_WORK_TIME_UNION;
#endif
#define SOC_VDEC_CACHE1_FE_WORK_TIME_fetch1_fe_work_time_START (0)
#define SOC_VDEC_CACHE1_FE_WORK_TIME_fetch1_fe_work_time_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fetch0_festate : 3;
        unsigned int reserved_0 : 1;
        unsigned int fetch0_fistate : 3;
        unsigned int reserved_1 : 1;
        unsigned int cmd_state : 3;
        unsigned int reserved_2 : 21;
    } reg;
} SOC_VDEC_PRC_STATE_UNION;
#endif
#define SOC_VDEC_PRC_STATE_fetch0_festate_START (0)
#define SOC_VDEC_PRC_STATE_fetch0_festate_END (2)
#define SOC_VDEC_PRC_STATE_fetch0_fistate_START (4)
#define SOC_VDEC_PRC_STATE_fetch0_fistate_END (6)
#define SOC_VDEC_PRC_STATE_cmd_state_START (8)
#define SOC_VDEC_PRC_STATE_cmd_state_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fetch0_fbuf_valid_fag : 1;
        unsigned int fetch0_fereqfull : 1;
        unsigned int fetcho_festall : 1;
        unsigned int fetcho_fbuffull : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_VDEC_PRC_BUF_STATE0_UNION;
#endif
#define SOC_VDEC_PRC_BUF_STATE0_fetch0_fbuf_valid_fag_START (0)
#define SOC_VDEC_PRC_BUF_STATE0_fetch0_fbuf_valid_fag_END (0)
#define SOC_VDEC_PRC_BUF_STATE0_fetch0_fereqfull_START (1)
#define SOC_VDEC_PRC_BUF_STATE0_fetch0_fereqfull_END (1)
#define SOC_VDEC_PRC_BUF_STATE0_fetcho_festall_START (2)
#define SOC_VDEC_PRC_BUF_STATE0_fetcho_festall_END (2)
#define SOC_VDEC_PRC_BUF_STATE0_fetcho_fbuffull_START (3)
#define SOC_VDEC_PRC_BUF_STATE0_fetcho_fbuffull_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fmt_inf_8bit_cnt : 8;
        unsigned int fe_inf0_8bit_cnt : 8;
        unsigned int fe_inf1_8bit_cnt : 8;
        unsigned int reserved : 8;
    } reg;
} SOC_VDEC_PRC_BUF_8BIT_STATE1_UNION;
#endif
#define SOC_VDEC_PRC_BUF_8BIT_STATE1_fmt_inf_8bit_cnt_START (0)
#define SOC_VDEC_PRC_BUF_8BIT_STATE1_fmt_inf_8bit_cnt_END (7)
#define SOC_VDEC_PRC_BUF_8BIT_STATE1_fe_inf0_8bit_cnt_START (8)
#define SOC_VDEC_PRC_BUF_8BIT_STATE1_fe_inf0_8bit_cnt_END (15)
#define SOC_VDEC_PRC_BUF_8BIT_STATE1_fe_inf1_8bit_cnt_START (16)
#define SOC_VDEC_PRC_BUF_8BIT_STATE1_fe_inf1_8bit_cnt_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 4;
        unsigned int out_str_ful : 1;
        unsigned int reserved_1 : 27;
    } reg;
} SOC_VDEC_OUT_STATE&#10;_UNION;
#endif
#define SOC_VDEC_OUT_STATE &#10;_out_str_ful_START (4)
#define SOC_VDEC_OUT_STATE &#10;_out_str_ful_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cur_st_fmt : 3;
        unsigned int reserved_0 : 1;
        unsigned int cur_st_pod : 3;
        unsigned int reserved_1 : 1;
        unsigned int cur_st_rdf : 2;
        unsigned int reserved_2 : 22;
    } reg;
} SOC_VDEC_FMT_STATE_UNION;
#endif
#define SOC_VDEC_FMT_STATE_cur_st_fmt_START (0)
#define SOC_VDEC_FMT_STATE_cur_st_fmt_END (2)
#define SOC_VDEC_FMT_STATE_cur_st_pod_START (4)
#define SOC_VDEC_FMT_STATE_cur_st_pod_END (6)
#define SOC_VDEC_FMT_STATE_cur_st_rdf_START (8)
#define SOC_VDEC_FMT_STATE_cur_st_rdf_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int prf_protocol : 4;
        unsigned int flt_mode_mpeg4 : 1;
        unsigned int frst_cmd[4:3] : 2;
        unsigned int frst_mvy : 3;
        unsigned int frst_mvx : 3;
        unsigned int mpeg4_rnd : 1;
        unsigned int frst_part_mod : 2;
        unsigned int frst_data_type : 1;
        unsigned int reserved : 15;
    } reg;
} SOC_VDEC_PRF_INFO_UNION;
#endif
#define SOC_VDEC_PRF_INFO_prf_protocol_START (0)
#define SOC_VDEC_PRF_INFO_prf_protocol_END (3)
#define SOC_VDEC_PRF_INFO_flt_mode_mpeg4_START (4)
#define SOC_VDEC_PRF_INFO_flt_mode_mpeg4_END (4)
#define SOC_VDEC_PRF_INFO_frst_cmd [4:3]_START (5)
#define SOC_VDEC_PRF_INFO_frst_cmd [4:3]_END (6)
#define SOC_VDEC_PRF_INFO_frst_mvy_START (7)
#define SOC_VDEC_PRF_INFO_frst_mvy_END (9)
#define SOC_VDEC_PRF_INFO_frst_mvx_START (10)
#define SOC_VDEC_PRF_INFO_frst_mvx_END (12)
#define SOC_VDEC_PRF_INFO_mpeg4_rnd_START (13)
#define SOC_VDEC_PRF_INFO_mpeg4_rnd_END (13)
#define SOC_VDEC_PRF_INFO_frst_part_mod_START (14)
#define SOC_VDEC_PRF_INFO_frst_part_mod_END (15)
#define SOC_VDEC_PRF_INFO_frst_data_type_START (16)
#define SOC_VDEC_PRF_INFO_frst_data_type_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cur_hst : 7;
        unsigned int cur_vst : 6;
        unsigned int reserved : 19;
    } reg;
} SOC_VDEC_PRF_STATE_UNION;
#endif
#define SOC_VDEC_PRF_STATE_cur_hst_START (0)
#define SOC_VDEC_PRF_STATE_cur_hst_END (6)
#define SOC_VDEC_PRF_STATE_cur_vst_START (7)
#define SOC_VDEC_PRF_STATE_cur_vst_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int prf2prc_wac : 1;
        unsigned int reserved_0 : 7;
        unsigned int ibuf_cmd_cnt[7:0] : 8;
        unsigned int reserved_1 : 16;
    } reg;
} SOC_VDEC_PRF_IBUF_ST_UNION;
#endif
#define SOC_VDEC_PRF_IBUF_ST_prf2prc_wac_START (0)
#define SOC_VDEC_PRF_IBUF_ST_prf2prc_wac_END (0)
#define SOC_VDEC_PRF_IBUF_ST_ibuf_cmd_cnt [7:0]_START (8)
#define SOC_VDEC_PRF_IBUF_ST_ibuf_cmd_cnt [7:0]_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int obuf_we_cnt[2:0] : 3;
        unsigned int reserved_0 : 1;
        unsigned int obuf_rd_cnt[2:0] : 3;
        unsigned int reserved_1 : 1;
        unsigned int obuf_deep[6:0] : 7;
        unsigned int reserved_2 : 1;
        unsigned int obuf2_deep[1:0] : 2;
        unsigned int reserved_3 : 7;
        unsigned int obuf2_empty : 1;
        unsigned int reserved_4 : 2;
        unsigned int obuf2_ful : 1;
        unsigned int reserved_5 : 3;
    } reg;
} SOC_VDEC_PRF_OBUF_ST_UNION;
#endif
#define SOC_VDEC_PRF_OBUF_ST_obuf_we_cnt [2:0]_START (0)
#define SOC_VDEC_PRF_OBUF_ST_obuf_we_cnt [2:0]_END (2)
#define SOC_VDEC_PRF_OBUF_ST_obuf_rd_cnt [2:0]_START (4)
#define SOC_VDEC_PRF_OBUF_ST_obuf_rd_cnt [2:0]_END (6)
#define SOC_VDEC_PRF_OBUF_ST_obuf_deep [6:0]_START (8)
#define SOC_VDEC_PRF_OBUF_ST_obuf_deep [6:0]_END (14)
#define SOC_VDEC_PRF_OBUF_ST_obuf2_deep [1:0]_START (16)
#define SOC_VDEC_PRF_OBUF_ST_obuf2_deep [1:0]_END (17)
#define SOC_VDEC_PRF_OBUF_ST_obuf2_empty_START (25)
#define SOC_VDEC_PRF_OBUF_ST_obuf2_empty_END (25)
#define SOC_VDEC_PRF_OBUF_ST_obuf2_ful_START (28)
#define SOC_VDEC_PRF_OBUF_ST_obuf2_ful_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int weight_flag : 2;
        unsigned int pic_type : 2;
        unsigned int avs_code_type : 2;
        unsigned int rcn_slc_type : 2;
        unsigned int rcn_cnstrn_prd : 1;
        unsigned int first_mb_inslc : 1;
        unsigned int reserved : 22;
    } reg;
} SOC_VDEC_RCN_PIC_PARA_UNION;
#endif
#define SOC_VDEC_RCN_PIC_PARA_weight_flag_START (0)
#define SOC_VDEC_RCN_PIC_PARA_weight_flag_END (1)
#define SOC_VDEC_RCN_PIC_PARA_pic_type_START (2)
#define SOC_VDEC_RCN_PIC_PARA_pic_type_END (3)
#define SOC_VDEC_RCN_PIC_PARA_avs_code_type_START (4)
#define SOC_VDEC_RCN_PIC_PARA_avs_code_type_END (5)
#define SOC_VDEC_RCN_PIC_PARA_rcn_slc_type_START (6)
#define SOC_VDEC_RCN_PIC_PARA_rcn_slc_type_END (7)
#define SOC_VDEC_RCN_PIC_PARA_rcn_cnstrn_prd_START (8)
#define SOC_VDEC_RCN_PIC_PARA_rcn_cnstrn_prd_END (8)
#define SOC_VDEC_RCN_PIC_PARA_first_mb_inslc_START (9)
#define SOC_VDEC_RCN_PIC_PARA_first_mb_inslc_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rcn_mbx : 10;
        unsigned int reserved_0 : 2;
        unsigned int rcn_mby : 10;
        unsigned int reserved_1 : 2;
        unsigned int mb_type_sc : 6;
        unsigned int transform_size_8x8_flag : 1;
        unsigned int rcn_fld_prd : 1;
    } reg;
} SOC_VDEC_RCN_MB_PARA_0_UNION;
#endif
#define SOC_VDEC_RCN_MB_PARA_0_rcn_mbx_START (0)
#define SOC_VDEC_RCN_MB_PARA_0_rcn_mbx_END (9)
#define SOC_VDEC_RCN_MB_PARA_0_rcn_mby_START (12)
#define SOC_VDEC_RCN_MB_PARA_0_rcn_mby_END (21)
#define SOC_VDEC_RCN_MB_PARA_0_mb_type_sc_START (24)
#define SOC_VDEC_RCN_MB_PARA_0_mb_type_sc_END (29)
#define SOC_VDEC_RCN_MB_PARA_0_transform_size_8x8_flag_START (30)
#define SOC_VDEC_RCN_MB_PARA_0_transform_size_8x8_flag_END (30)
#define SOC_VDEC_RCN_MB_PARA_0_rcn_fld_prd_START (31)
#define SOC_VDEC_RCN_MB_PARA_0_rcn_fld_prd_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rcn_mbav : 12;
        unsigned int rcn_cbcr_mod : 2;
        unsigned int reserved_0 : 2;
        unsigned int rcn_l16_mod : 2;
        unsigned int reserved_1 : 2;
        unsigned int rcn_wght_pred : 1;
        unsigned int rcn_mb_wght : 1;
        unsigned int rcn_slc_wght : 1;
        unsigned int reserved_2 : 9;
    } reg;
} SOC_VDEC_RCN_MB_PARA_1_UNION;
#endif
#define SOC_VDEC_RCN_MB_PARA_1_rcn_mbav_START (0)
#define SOC_VDEC_RCN_MB_PARA_1_rcn_mbav_END (11)
#define SOC_VDEC_RCN_MB_PARA_1_rcn_cbcr_mod_START (12)
#define SOC_VDEC_RCN_MB_PARA_1_rcn_cbcr_mod_END (13)
#define SOC_VDEC_RCN_MB_PARA_1_rcn_l16_mod_START (16)
#define SOC_VDEC_RCN_MB_PARA_1_rcn_l16_mod_END (17)
#define SOC_VDEC_RCN_MB_PARA_1_rcn_wght_pred_START (20)
#define SOC_VDEC_RCN_MB_PARA_1_rcn_wght_pred_END (20)
#define SOC_VDEC_RCN_MB_PARA_1_rcn_mb_wght_START (21)
#define SOC_VDEC_RCN_MB_PARA_1_rcn_mb_wght_END (21)
#define SOC_VDEC_RCN_MB_PARA_1_rcn_slc_wght_START (22)
#define SOC_VDEC_RCN_MB_PARA_1_rcn_slc_wght_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rcn_l4_mod[31:0] : 32;
    } reg;
} SOC_VDEC_RCN_MB_PARA_2_UNION;
#endif
#define SOC_VDEC_RCN_MB_PARA_2_rcn_l4_mod [31:0]_START (0)
#define SOC_VDEC_RCN_MB_PARA_2_rcn_l4_mod [31:0]_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rcn_l4_mod[63:32] : 32;
    } reg;
} SOC_VDEC_RCN_MB_PARA_3_UNION;
#endif
#define SOC_VDEC_RCN_MB_PARA_3_rcn_l4_mod [63:32]_START (0)
#define SOC_VDEC_RCN_MB_PARA_3_rcn_l4_mod [63:32]_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rcn_prd_l0 : 8;
        unsigned int mv_mod_pmv : 2;
        unsigned int reserved_0 : 2;
        unsigned int rcn_prd_c0 : 8;
        unsigned int reserved_1 : 12;
    } reg;
} SOC_VDEC_RCN_MB_PARA_4_UNION;
#endif
#define SOC_VDEC_RCN_MB_PARA_4_rcn_prd_l0_START (0)
#define SOC_VDEC_RCN_MB_PARA_4_rcn_prd_l0_END (7)
#define SOC_VDEC_RCN_MB_PARA_4_mv_mod_pmv_START (8)
#define SOC_VDEC_RCN_MB_PARA_4_mv_mod_pmv_END (9)
#define SOC_VDEC_RCN_MB_PARA_4_rcn_prd_c0_START (12)
#define SOC_VDEC_RCN_MB_PARA_4_rcn_prd_c0_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rcn_prd_l1 : 8;
        unsigned int reserved : 4;
        unsigned int rcn_prd_c1 : 8;
        unsigned int reversed : 12;
    } reg;
} SOC_VDEC_RCN_MB_PARA_5_UNION;
#endif
#define SOC_VDEC_RCN_MB_PARA_5_rcn_prd_l1_START (0)
#define SOC_VDEC_RCN_MB_PARA_5_rcn_prd_l1_END (7)
#define SOC_VDEC_RCN_MB_PARA_5_rcn_prd_c1_START (12)
#define SOC_VDEC_RCN_MB_PARA_5_rcn_prd_c1_END (19)
#define SOC_VDEC_RCN_MB_PARA_5_reversed_START (20)
#define SOC_VDEC_RCN_MB_PARA_5_reversed_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cur_st_cfg : 3;
        unsigned int reserved_0 : 1;
        unsigned int rcn_rdy : 1;
        unsigned int m_rcn_rdy : 1;
        unsigned int intra_rdy : 1;
        unsigned int pred_inter_rdy : 1;
        unsigned int top_rdy : 1;
        unsigned int reserved_1 : 23;
    } reg;
} SOC_VDEC_RCN_MB_PARA_6_UNION;
#endif
#define SOC_VDEC_RCN_MB_PARA_6_cur_st_cfg_START (0)
#define SOC_VDEC_RCN_MB_PARA_6_cur_st_cfg_END (2)
#define SOC_VDEC_RCN_MB_PARA_6_rcn_rdy_START (4)
#define SOC_VDEC_RCN_MB_PARA_6_rcn_rdy_END (4)
#define SOC_VDEC_RCN_MB_PARA_6_m_rcn_rdy_START (5)
#define SOC_VDEC_RCN_MB_PARA_6_m_rcn_rdy_END (5)
#define SOC_VDEC_RCN_MB_PARA_6_intra_rdy_START (6)
#define SOC_VDEC_RCN_MB_PARA_6_intra_rdy_END (6)
#define SOC_VDEC_RCN_MB_PARA_6_pred_inter_rdy_START (7)
#define SOC_VDEC_RCN_MB_PARA_6_pred_inter_rdy_END (7)
#define SOC_VDEC_RCN_MB_PARA_6_top_rdy_START (8)
#define SOC_VDEC_RCN_MB_PARA_6_top_rdy_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inf_dat_cnt : 5;
        unsigned int reserved_0 : 1;
        unsigned int rsd_ram_cnt : 5;
        unsigned int rcn2pmv_buffer_full : 1;
        unsigned int dblk2rcn_wack : 1;
        unsigned int rcn2prf_buffer_full : 1;
        unsigned int rcn2itrans_ack : 1;
        unsigned int reserved_1 : 17;
    } reg;
} SOC_VDEC_RCN_BUF_STATE_UNION;
#endif
#define SOC_VDEC_RCN_BUF_STATE_inf_dat_cnt_START (0)
#define SOC_VDEC_RCN_BUF_STATE_inf_dat_cnt_END (4)
#define SOC_VDEC_RCN_BUF_STATE_rsd_ram_cnt_START (6)
#define SOC_VDEC_RCN_BUF_STATE_rsd_ram_cnt_END (10)
#define SOC_VDEC_RCN_BUF_STATE_rcn2pmv_buffer_full_START (11)
#define SOC_VDEC_RCN_BUF_STATE_rcn2pmv_buffer_full_END (11)
#define SOC_VDEC_RCN_BUF_STATE_dblk2rcn_wack_START (12)
#define SOC_VDEC_RCN_BUF_STATE_dblk2rcn_wack_END (12)
#define SOC_VDEC_RCN_BUF_STATE_rcn2prf_buffer_full_START (13)
#define SOC_VDEC_RCN_BUF_STATE_rcn2prf_buffer_full_END (13)
#define SOC_VDEC_RCN_BUF_STATE_rcn2itrans_ack_START (14)
#define SOC_VDEC_RCN_BUF_STATE_rcn2itrans_ack_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int video_standard_p : 4;
        unsigned int pic_strct : 2;
        unsigned int reserved_0 : 2;
        unsigned int intf2core_imagewidth : 9;
        unsigned int reserved_1 : 3;
        unsigned int intf2core_imageheight : 9;
        unsigned int reserved_2 : 3;
    } reg;
} SOC_VDEC_DBLK_PIC_INFO_UNION;
#endif
#define SOC_VDEC_DBLK_PIC_INFO_video_standard_p_START (0)
#define SOC_VDEC_DBLK_PIC_INFO_video_standard_p_END (3)
#define SOC_VDEC_DBLK_PIC_INFO_pic_strct_START (4)
#define SOC_VDEC_DBLK_PIC_INFO_pic_strct_END (5)
#define SOC_VDEC_DBLK_PIC_INFO_intf2core_imagewidth_START (8)
#define SOC_VDEC_DBLK_PIC_INFO_intf2core_imagewidth_END (16)
#define SOC_VDEC_DBLK_PIC_INFO_intf2core_imageheight_START (20)
#define SOC_VDEC_DBLK_PIC_INFO_intf2core_imageheight_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dblk_beta_offset : 5;
        unsigned int dblk_alpha_offset : 5;
        unsigned int dblk_dis_filter_idc : 2;
        unsigned int dblk_chr_qp_idx : 5;
        unsigned int reserved : 15;
    } reg;
} SOC_VDEC_DBLK_FLT_INFO_UNION;
#endif
#define SOC_VDEC_DBLK_FLT_INFO_dblk_beta_offset_START (0)
#define SOC_VDEC_DBLK_FLT_INFO_dblk_beta_offset_END (4)
#define SOC_VDEC_DBLK_FLT_INFO_dblk_alpha_offset_START (5)
#define SOC_VDEC_DBLK_FLT_INFO_dblk_alpha_offset_END (9)
#define SOC_VDEC_DBLK_FLT_INFO_dblk_dis_filter_idc_START (10)
#define SOC_VDEC_DBLK_FLT_INFO_dblk_dis_filter_idc_END (11)
#define SOC_VDEC_DBLK_FLT_INFO_dblk_chr_qp_idx_START (12)
#define SOC_VDEC_DBLK_FLT_INFO_dblk_chr_qp_idx_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_stride : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_VDEC_DBLK_DDR_STRD_UNION;
#endif
#define SOC_VDEC_DBLK_DDR_STRD_ddr_stride_START (0)
#define SOC_VDEC_DBLK_DDR_STRD_ddr_stride_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dblk_ystaddr_1d : 32;
    } reg;
} SOC_VDEC_DBLK_YADDR_UNION;
#endif
#define SOC_VDEC_DBLK_YADDR_dblk_ystaddr_1d_START (0)
#define SOC_VDEC_DBLK_YADDR_dblk_ystaddr_1d_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dblk_cstaddr : 32;
    } reg;
} SOC_VDEC_DBLK_CADDR_UNION;
#endif
#define SOC_VDEC_DBLK_CADDR_dblk_cstaddr_START (0)
#define SOC_VDEC_DBLK_CADDR_dblk_cstaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rcn_flt_cnt : 3;
        unsigned int reserved_0 : 5;
        unsigned int pmv_flt_cnt : 6;
        unsigned int reserved_1 : 2;
        unsigned int rcn_flt_rpt : 2;
        unsigned int reserved_2 : 2;
        unsigned int rcn_mb_wpt : 2;
        unsigned int reserved_3 : 2;
        unsigned int pmv_mb_wpt : 5;
        unsigned int reserved_4 : 3;
    } reg;
} SOC_VDEC_DBLK_ST_IN_CTRL_UNION;
#endif
#define SOC_VDEC_DBLK_ST_IN_CTRL_rcn_flt_cnt_START (0)
#define SOC_VDEC_DBLK_ST_IN_CTRL_rcn_flt_cnt_END (2)
#define SOC_VDEC_DBLK_ST_IN_CTRL_pmv_flt_cnt_START (8)
#define SOC_VDEC_DBLK_ST_IN_CTRL_pmv_flt_cnt_END (13)
#define SOC_VDEC_DBLK_ST_IN_CTRL_rcn_flt_rpt_START (16)
#define SOC_VDEC_DBLK_ST_IN_CTRL_rcn_flt_rpt_END (17)
#define SOC_VDEC_DBLK_ST_IN_CTRL_rcn_mb_wpt_START (20)
#define SOC_VDEC_DBLK_ST_IN_CTRL_rcn_mb_wpt_END (21)
#define SOC_VDEC_DBLK_ST_IN_CTRL_pmv_mb_wpt_START (24)
#define SOC_VDEC_DBLK_ST_IN_CTRL_pmv_mb_wpt_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cur_mbx : 10;
        unsigned int reserved_0: 6;
        unsigned int cur_mby : 10;
        unsigned int reserved_1: 6;
    } reg;
} SOC_VDEC_DBLK_ST_FLT_UNION;
#endif
#define SOC_VDEC_DBLK_ST_FLT_cur_mbx_START (0)
#define SOC_VDEC_DBLK_ST_FLT_cur_mbx_END (9)
#define SOC_VDEC_DBLK_ST_FLT_cur_mby_START (16)
#define SOC_VDEC_DBLK_ST_FLT_cur_mby_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr_emar_cur_st : 6;
        unsigned int obuf_rdy : 1;
        unsigned int reserved : 1;
        unsigned int mbx : 10;
        unsigned int mby : 10;
        unsigned int mbnum_in_obuf : 4;
    } reg;
} SOC_VDEC_DBLK_ST_DO_UNION;
#endif
#define SOC_VDEC_DBLK_ST_DO_wr_emar_cur_st_START (0)
#define SOC_VDEC_DBLK_ST_DO_wr_emar_cur_st_END (5)
#define SOC_VDEC_DBLK_ST_DO_obuf_rdy_START (6)
#define SOC_VDEC_DBLK_ST_DO_obuf_rdy_END (6)
#define SOC_VDEC_DBLK_ST_DO_mbx_START (8)
#define SOC_VDEC_DBLK_ST_DO_mbx_END (17)
#define SOC_VDEC_DBLK_ST_DO_mby_START (18)
#define SOC_VDEC_DBLK_ST_DO_mby_END (27)
#define SOC_VDEC_DBLK_ST_DO_mbnum_in_obuf_START (28)
#define SOC_VDEC_DBLK_ST_DO_mbnum_in_obuf_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cur_wr_st : 8;
        unsigned int cur_rd_st : 8;
        unsigned int regs_full : 1;
        unsigned int reserved_0: 7;
        unsigned int cur_mst : 3;
        unsigned int reserved_1: 5;
    } reg;
} SOC_VDEC_DBLK_ST_FLT_STATE_UNION;
#endif
#define SOC_VDEC_DBLK_ST_FLT_STATE_cur_wr_st_START (0)
#define SOC_VDEC_DBLK_ST_FLT_STATE_cur_wr_st_END (7)
#define SOC_VDEC_DBLK_ST_FLT_STATE_cur_rd_st_START (8)
#define SOC_VDEC_DBLK_ST_FLT_STATE_cur_rd_st_END (15)
#define SOC_VDEC_DBLK_ST_FLT_STATE_regs_full_START (16)
#define SOC_VDEC_DBLK_ST_FLT_STATE_regs_full_END (16)
#define SOC_VDEC_DBLK_ST_FLT_STATE_cur_mst_START (24)
#define SOC_VDEC_DBLK_ST_FLT_STATE_cur_mst_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt0 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT0_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT0_luma_histogram_cnt0_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT0_luma_histogram_cnt0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt1 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT1_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT1_luma_histogram_cnt1_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT1_luma_histogram_cnt1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt2 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT2_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT2_luma_histogram_cnt2_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT2_luma_histogram_cnt2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt3 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT3_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT3_luma_histogram_cnt3_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT3_luma_histogram_cnt3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt4 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT4_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT4_luma_histogram_cnt4_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT4_luma_histogram_cnt4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt5 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT5_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT5_luma_histogram_cnt5_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT5_luma_histogram_cnt5_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt6 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT6_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT6_luma_histogram_cnt6_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT6_luma_histogram_cnt6_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt7 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT7_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT7_luma_histogram_cnt7_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT7_luma_histogram_cnt7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt8 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT8_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT8_luma_histogram_cnt8_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT8_luma_histogram_cnt8_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt9 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT9_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT9_luma_histogram_cnt9_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT9_luma_histogram_cnt9_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt10 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT10_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT10_luma_histogram_cnt10_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT10_luma_histogram_cnt10_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt11 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT11_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT11_luma_histogram_cnt11_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT11_luma_histogram_cnt11_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt12 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT12_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT12_luma_histogram_cnt12_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT12_luma_histogram_cnt12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt13 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT13_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT13_luma_histogram_cnt13_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT13_luma_histogram_cnt13_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt14 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT14_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT14_luma_histogram_cnt14_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT14_luma_histogram_cnt14_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt15 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT15_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT15_luma_histogram_cnt15_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT15_luma_histogram_cnt15_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt16 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT16_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT16_luma_histogram_cnt16_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT16_luma_histogram_cnt16_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt17 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT17_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT17_luma_histogram_cnt17_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT17_luma_histogram_cnt17_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt18 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT18_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT18_luma_histogram_cnt18_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT18_luma_histogram_cnt18_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt19 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT19_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT19_luma_histogram_cnt19_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT19_luma_histogram_cnt19_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt20 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT20_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT20_luma_histogram_cnt20_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT20_luma_histogram_cnt20_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt21 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT21_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT21_luma_histogram_cnt21_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT21_luma_histogram_cnt21_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt22 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT22_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT22_luma_histogram_cnt22_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT22_luma_histogram_cnt22_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt23 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT23_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT23_luma_histogram_cnt23_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT23_luma_histogram_cnt23_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt24 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT24_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT24_luma_histogram_cnt24_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT24_luma_histogram_cnt24_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt25 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT25_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT25_luma_histogram_cnt25_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT25_luma_histogram_cnt25_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt26 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT26_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT26_luma_histogram_cnt26_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT26_luma_histogram_cnt26_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt27 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT27_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT27_luma_histogram_cnt27_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT27_luma_histogram_cnt27_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt28 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT28_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT28_luma_histogram_cnt28_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT28_luma_histogram_cnt28_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt29 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT29_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT29_luma_histogram_cnt29_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT29_luma_histogram_cnt29_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt30 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT30_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT30_luma_histogram_cnt30_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT30_luma_histogram_cnt30_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_histogram_cnt31 : 32;
    } reg;
} SOC_VDEC_LUMA_HISTOGRAM_CNT31_UNION;
#endif
#define SOC_VDEC_LUMA_HISTOGRAM_CNT31_luma_histogram_cnt31_START (0)
#define SOC_VDEC_LUMA_HISTOGRAM_CNT31_luma_histogram_cnt31_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_sum[31:0] : 32;
    } reg;
} SOC_VDEC_LUMA_SUM0_UNION;
#endif
#define SOC_VDEC_LUMA_SUM0_luma_sum [31:0]_START (0)
#define SOC_VDEC_LUMA_SUM0_luma_sum [31:0]_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_sum[35:32] : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_VDEC_LUMA_SUM1_UNION;
#endif
#define SOC_VDEC_LUMA_SUM1_luma_sum [35:32]_START (0)
#define SOC_VDEC_LUMA_SUM1_luma_sum [35:32]_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dblk_mem_info : 32;
    } reg;
} SOC_VDEC_DBLK_MEM_INFO_UNION;
#endif
#define SOC_VDEC_DBLK_MEM_INFO_dblk_mem_info_START (0)
#define SOC_VDEC_DBLK_MEM_INFO_dblk_mem_info_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ppfd_len : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VDEC_PPFD_LEN_UNION;
#endif
#define SOC_VDEC_PPFD_LEN_ppfd_len_START (0)
#define SOC_VDEC_PPFD_LEN_ppfd_len_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ppfd_staddr : 32;
    } reg;
} SOC_VDEC_PPFD_STADDR_UNION;
#endif
#define SOC_VDEC_PPFD_STADDR_ppfd_staddr_START (0)
#define SOC_VDEC_PPFD_STADDR_ppfd_staddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ppfd_endaddr : 32;
    } reg;
} SOC_VDEC_PPFD_ENDADDR_UNION;
#endif
#define SOC_VDEC_PPFD_ENDADDR_ppfd_endaddr_START (0)
#define SOC_VDEC_PPFD_ENDADDR_ppfd_endaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ppfd_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VDEC_PPFD_EN_UNION;
#endif
#define SOC_VDEC_PPFD_EN_ppfd_en_START (0)
#define SOC_VDEC_PPFD_EN_ppfd_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_mbyx : 24;
        unsigned int enc_curr_st : 3;
        unsigned int reserved : 1;
        unsigned int ppfd2sed_it_empty : 1;
        unsigned int ppfd2sed_mv_empty : 1;
        unsigned int ppfd2sed_it_full : 1;
        unsigned int ppfd2sed_mv_full : 1;
    } reg;
} SOC_VDEC_PPFD_ENC_ST0_UNION;
#endif
#define SOC_VDEC_PPFD_ENC_ST0_enc_mbyx_START (0)
#define SOC_VDEC_PPFD_ENC_ST0_enc_mbyx_END (23)
#define SOC_VDEC_PPFD_ENC_ST0_enc_curr_st_START (24)
#define SOC_VDEC_PPFD_ENC_ST0_enc_curr_st_END (26)
#define SOC_VDEC_PPFD_ENC_ST0_ppfd2sed_it_empty_START (28)
#define SOC_VDEC_PPFD_ENC_ST0_ppfd2sed_it_empty_END (28)
#define SOC_VDEC_PPFD_ENC_ST0_ppfd2sed_mv_empty_START (29)
#define SOC_VDEC_PPFD_ENC_ST0_ppfd2sed_mv_empty_END (29)
#define SOC_VDEC_PPFD_ENC_ST0_ppfd2sed_it_full_START (30)
#define SOC_VDEC_PPFD_ENC_ST0_ppfd2sed_it_full_END (30)
#define SOC_VDEC_PPFD_ENC_ST0_ppfd2sed_mv_full_START (31)
#define SOC_VDEC_PPFD_ENC_ST0_ppfd2sed_mv_full_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_res_curr_st : 6;
        unsigned int reserved_0 : 2;
        unsigned int enc_mvd_curr_st : 7;
        unsigned int reserved_1 : 1;
        unsigned int ppfo_empty : 1;
        unsigned int ppfo_full : 1;
        unsigned int reserved_2 : 14;
    } reg;
} SOC_VDEC_PPFD_ENC_ST1_UNION;
#endif
#define SOC_VDEC_PPFD_ENC_ST1_enc_res_curr_st_START (0)
#define SOC_VDEC_PPFD_ENC_ST1_enc_res_curr_st_END (5)
#define SOC_VDEC_PPFD_ENC_ST1_enc_mvd_curr_st_START (8)
#define SOC_VDEC_PPFD_ENC_ST1_enc_mvd_curr_st_END (14)
#define SOC_VDEC_PPFD_ENC_ST1_ppfo_empty_START (16)
#define SOC_VDEC_PPFD_ENC_ST1_ppfo_empty_END (16)
#define SOC_VDEC_PPFD_ENC_ST1_ppfo_full_START (17)
#define SOC_VDEC_PPFD_ENC_ST1_ppfo_full_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 17;
        unsigned int ppfd_full : 1;
        unsigned int reserved_1: 14;
    } reg;
} SOC_VDEC_PPFD_ST_UNION;
#endif
#define SOC_VDEC_PPFD_ST_ppfd_full_START (17)
#define SOC_VDEC_PPFD_ST_ppfd_full_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dec_mbx : 12;
        unsigned int dec_mby : 12;
        unsigned int ppfi_cnt : 7;
        unsigned int reserved : 1;
    } reg;
} SOC_VDEC_PPFD_DEC_ST0_UNION;
#endif
#define SOC_VDEC_PPFD_DEC_ST0_dec_mbx_START (0)
#define SOC_VDEC_PPFD_DEC_ST0_dec_mbx_END (11)
#define SOC_VDEC_PPFD_DEC_ST0_dec_mby_START (12)
#define SOC_VDEC_PPFD_DEC_ST0_dec_mby_END (23)
#define SOC_VDEC_PPFD_DEC_ST0_ppfi_cnt_START (24)
#define SOC_VDEC_PPFD_DEC_ST0_ppfi_cnt_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dec_res_curr_st : 6;
        unsigned int reserved_0 : 2;
        unsigned int dec_mvd_curr_st : 7;
        unsigned int reserved_1 : 1;
        unsigned int dec_curr_st : 3;
        unsigned int reserved_2 : 1;
        unsigned int slc_curr_st : 2;
        unsigned int reserved_3 : 10;
    } reg;
} SOC_VDEC_PPFD_DEC_ST1_UNION;
#endif
#define SOC_VDEC_PPFD_DEC_ST1_dec_res_curr_st_START (0)
#define SOC_VDEC_PPFD_DEC_ST1_dec_res_curr_st_END (5)
#define SOC_VDEC_PPFD_DEC_ST1_dec_mvd_curr_st_START (8)
#define SOC_VDEC_PPFD_DEC_ST1_dec_mvd_curr_st_END (14)
#define SOC_VDEC_PPFD_DEC_ST1_dec_curr_st_START (16)
#define SOC_VDEC_PPFD_DEC_ST1_dec_curr_st_END (18)
#define SOC_VDEC_PPFD_DEC_ST1_slc_curr_st_START (20)
#define SOC_VDEC_PPFD_DEC_ST1_slc_curr_st_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ystaddr : 32;
    } reg;
} SOC_VDEC_SAO_YSTADDR_UNION;
#endif
#define SOC_VDEC_SAO_YSTADDR_ystaddr_START (0)
#define SOC_VDEC_SAO_YSTADDR_ystaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao_top_addr : 32;
    } reg;
} SOC_VDEC_SAO_TOP_ADDR_UNION;
#endif
#define SOC_VDEC_SAO_TOP_ADDR_sao_top_addr_START (0)
#define SOC_VDEC_SAO_TOP_ADDR_sao_top_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao_left_addr : 32;
    } reg;
} SOC_VDEC_SAO_LEFT_ADDR_UNION;
#endif
#define SOC_VDEC_SAO_LEFT_ADDR_sao_left_addr_START (0)
#define SOC_VDEC_SAO_LEFT_ADDR_sao_left_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int uv_staddr : 32;
    } reg;
} SOC_VDEC_SAO_UVSTADDR_UNION;
#endif
#define SOC_VDEC_SAO_UVSTADDR_uv_staddr_START (0)
#define SOC_VDEC_SAO_UVSTADDR_uv_staddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ystride : 16;
        unsigned int ctb_size : 3;
        unsigned int reserved_0 : 1;
        unsigned int sao_enablk : 1;
        unsigned int pcm_loop_filter_disable_flag : 1;
        unsigned int loop_filter_across_tile_enable : 1;
        unsigned int reserved_1 : 9;
    } reg;
} SOC_VDEC_SAO_INFO_0_UNION;
#endif
#define SOC_VDEC_SAO_INFO_0_ystride_START (0)
#define SOC_VDEC_SAO_INFO_0_ystride_END (15)
#define SOC_VDEC_SAO_INFO_0_ctb_size_START (16)
#define SOC_VDEC_SAO_INFO_0_ctb_size_END (18)
#define SOC_VDEC_SAO_INFO_0_sao_enablk_START (20)
#define SOC_VDEC_SAO_INFO_0_sao_enablk_END (20)
#define SOC_VDEC_SAO_INFO_0_pcm_loop_filter_disable_flag_START (21)
#define SOC_VDEC_SAO_INFO_0_pcm_loop_filter_disable_flag_END (21)
#define SOC_VDEC_SAO_INFO_0_loop_filter_across_tile_enable_START (22)
#define SOC_VDEC_SAO_INFO_0_loop_filter_across_tile_enable_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pic_width_in_ctb : 9;
        unsigned int reserved_0 : 7;
        unsigned int pic_height_in_ctb : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_VDEC_SAO_INFO_1_UNION;
#endif
#define SOC_VDEC_SAO_INFO_1_pic_width_in_ctb_START (0)
#define SOC_VDEC_SAO_INFO_1_pic_width_in_ctb_END (8)
#define SOC_VDEC_SAO_INFO_1_pic_height_in_ctb_START (16)
#define SOC_VDEC_SAO_INFO_1_pic_height_in_ctb_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pic_width_in_sample : 14;
        unsigned int reserved_0 : 2;
        unsigned int pic_height_in_sample : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VDEC_SAO_INFO_2_UNION;
#endif
#define SOC_VDEC_SAO_INFO_2_pic_width_in_sample_START (0)
#define SOC_VDEC_SAO_INFO_2_pic_width_in_sample_END (13)
#define SOC_VDEC_SAO_INFO_2_pic_height_in_sample_START (16)
#define SOC_VDEC_SAO_INFO_2_pic_height_in_sample_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ld_cur_st : 3;
        unsigned int reserved_0 : 1;
        unsigned int dblk_empty : 1;
        unsigned int pmv_info_empty : 1;
        unsigned int yuv_en : 2;
        unsigned int cur_info_st : 3;
        unsigned int ld_pix_en : 1;
        unsigned int ld_reg_pcnt : 3;
        unsigned int reserved_1 : 1;
        unsigned int ld_reg_cnt : 3;
        unsigned int reserved_2 : 1;
        unsigned int bot_tile_edge : 1;
        unsigned int up_tile_edge : 1;
        unsigned int left_tile_edge : 1;
        unsigned int reserved_3 : 9;
    } reg;
} SOC_VDEC_SAO_INFO_3_UNION;
#endif
#define SOC_VDEC_SAO_INFO_3_ld_cur_st_START (0)
#define SOC_VDEC_SAO_INFO_3_ld_cur_st_END (2)
#define SOC_VDEC_SAO_INFO_3_dblk_empty_START (4)
#define SOC_VDEC_SAO_INFO_3_dblk_empty_END (4)
#define SOC_VDEC_SAO_INFO_3_pmv_info_empty_START (5)
#define SOC_VDEC_SAO_INFO_3_pmv_info_empty_END (5)
#define SOC_VDEC_SAO_INFO_3_yuv_en_START (6)
#define SOC_VDEC_SAO_INFO_3_yuv_en_END (7)
#define SOC_VDEC_SAO_INFO_3_cur_info_st_START (8)
#define SOC_VDEC_SAO_INFO_3_cur_info_st_END (10)
#define SOC_VDEC_SAO_INFO_3_ld_pix_en_START (11)
#define SOC_VDEC_SAO_INFO_3_ld_pix_en_END (11)
#define SOC_VDEC_SAO_INFO_3_ld_reg_pcnt_START (12)
#define SOC_VDEC_SAO_INFO_3_ld_reg_pcnt_END (14)
#define SOC_VDEC_SAO_INFO_3_ld_reg_cnt_START (16)
#define SOC_VDEC_SAO_INFO_3_ld_reg_cnt_END (18)
#define SOC_VDEC_SAO_INFO_3_bot_tile_edge_START (20)
#define SOC_VDEC_SAO_INFO_3_bot_tile_edge_END (20)
#define SOC_VDEC_SAO_INFO_3_up_tile_edge_START (21)
#define SOC_VDEC_SAO_INFO_3_up_tile_edge_END (21)
#define SOC_VDEC_SAO_INFO_3_left_tile_edge_START (22)
#define SOC_VDEC_SAO_INFO_3_left_tile_edge_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core2obuf_yuv_en : 2;
        unsigned int reserved_0 : 2;
        unsigned int core2obuf_cur_st : 4;
        unsigned int core2obuf_blk_num : 4;
        unsigned int core2obuf_line_cnt : 4;
        unsigned int core2obuf_col_cnt : 3;
        unsigned int reserved_1 : 13;
    } reg;
} SOC_VDEC_SAO_INFO_4_UNION;
#endif
#define SOC_VDEC_SAO_INFO_4_core2obuf_yuv_en_START (0)
#define SOC_VDEC_SAO_INFO_4_core2obuf_yuv_en_END (1)
#define SOC_VDEC_SAO_INFO_4_core2obuf_cur_st_START (4)
#define SOC_VDEC_SAO_INFO_4_core2obuf_cur_st_END (7)
#define SOC_VDEC_SAO_INFO_4_core2obuf_blk_num_START (8)
#define SOC_VDEC_SAO_INFO_4_core2obuf_blk_num_END (11)
#define SOC_VDEC_SAO_INFO_4_core2obuf_line_cnt_START (12)
#define SOC_VDEC_SAO_INFO_4_core2obuf_line_cnt_END (15)
#define SOC_VDEC_SAO_INFO_4_core2obuf_col_cnt_START (16)
#define SOC_VDEC_SAO_INFO_4_core2obuf_col_cnt_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ctb_x : 9;
        unsigned int reserved_0: 7;
        unsigned int ctb_y : 9;
        unsigned int reserved_1: 7;
    } reg;
} SOC_VDEC_SAO_INFO_5_UNION;
#endif
#define SOC_VDEC_SAO_INFO_5_ctb_x_START (0)
#define SOC_VDEC_SAO_INFO_5_ctb_x_END (8)
#define SOC_VDEC_SAO_INFO_5_ctb_y_START (16)
#define SOC_VDEC_SAO_INFO_5_ctb_y_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cal_ctb_x : 9;
        unsigned int reserved_0: 7;
        unsigned int cal_ctb_y : 9;
        unsigned int reserved_1: 7;
    } reg;
} SOC_VDEC_SAO_INFO_6_UNION;
#endif
#define SOC_VDEC_SAO_INFO_6_cal_ctb_x_START (0)
#define SOC_VDEC_SAO_INFO_6_cal_ctb_x_END (8)
#define SOC_VDEC_SAO_INFO_6_cal_ctb_y_START (16)
#define SOC_VDEC_SAO_INFO_6_cal_ctb_y_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core2obuf_ctb_x : 9;
        unsigned int reserved_0 : 7;
        unsigned int core2obuf_ctb_y : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_VDEC_SAO_INFO_7_UNION;
#endif
#define SOC_VDEC_SAO_INFO_7_core2obuf_ctb_x_START (0)
#define SOC_VDEC_SAO_INFO_7_core2obuf_ctb_x_END (8)
#define SOC_VDEC_SAO_INFO_7_core2obuf_ctb_y_START (16)
#define SOC_VDEC_SAO_INFO_7_core2obuf_ctb_y_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int obuf_pcnt : 2;
        unsigned int reserved_0 : 2;
        unsigned int obuf_cnt : 2;
        unsigned int reserved_1 : 2;
        unsigned int obuf_top_cnt : 2;
        unsigned int obuf_top_ful10 : 1;
        unsigned int obuf_top_ful11 : 1;
        unsigned int reserved_2 : 20;
    } reg;
} SOC_VDEC_SAO_INFO_8_UNION;
#endif
#define SOC_VDEC_SAO_INFO_8_obuf_pcnt_START (0)
#define SOC_VDEC_SAO_INFO_8_obuf_pcnt_END (1)
#define SOC_VDEC_SAO_INFO_8_obuf_cnt_START (4)
#define SOC_VDEC_SAO_INFO_8_obuf_cnt_END (5)
#define SOC_VDEC_SAO_INFO_8_obuf_top_cnt_START (8)
#define SOC_VDEC_SAO_INFO_8_obuf_top_cnt_END (9)
#define SOC_VDEC_SAO_INFO_8_obuf_top_ful10_START (10)
#define SOC_VDEC_SAO_INFO_8_obuf_top_ful10_END (10)
#define SOC_VDEC_SAO_INFO_8_obuf_top_ful11_START (11)
#define SOC_VDEC_SAO_INFO_8_obuf_top_ful11_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dblk2sao_wreq : 1;
        unsigned int sao2dblk_ack : 1;
        unsigned int dblk_full : 1;
        unsigned int dblk_empty : 1;
        unsigned int pmv2sao_wreq : 1;
        unsigned int sao2pmv_ack : 1;
        unsigned int pmv_info_full : 1;
        unsigned int pmv_pre_info_full : 1;
        unsigned int pmv_info_empty : 1;
        unsigned int pmv_pre_info_empty : 1;
        unsigned int reserved_0 : 2;
        unsigned int ldstr2ibuf_tileleft_70_we : 1;
        unsigned int ibuf2ldstr_tileleft70_wack : 1;
        unsigned int tileleft70_full : 1;
        unsigned int tileleft70_empty : 1;
        unsigned int reserved_1 : 16;
    } reg;
} SOC_VDEC_SAO_INFO_9_UNION;
#endif
#define SOC_VDEC_SAO_INFO_9_dblk2sao_wreq_START (0)
#define SOC_VDEC_SAO_INFO_9_dblk2sao_wreq_END (0)
#define SOC_VDEC_SAO_INFO_9_sao2dblk_ack_START (1)
#define SOC_VDEC_SAO_INFO_9_sao2dblk_ack_END (1)
#define SOC_VDEC_SAO_INFO_9_dblk_full_START (2)
#define SOC_VDEC_SAO_INFO_9_dblk_full_END (2)
#define SOC_VDEC_SAO_INFO_9_dblk_empty_START (3)
#define SOC_VDEC_SAO_INFO_9_dblk_empty_END (3)
#define SOC_VDEC_SAO_INFO_9_pmv2sao_wreq_START (4)
#define SOC_VDEC_SAO_INFO_9_pmv2sao_wreq_END (4)
#define SOC_VDEC_SAO_INFO_9_sao2pmv_ack_START (5)
#define SOC_VDEC_SAO_INFO_9_sao2pmv_ack_END (5)
#define SOC_VDEC_SAO_INFO_9_pmv_info_full_START (6)
#define SOC_VDEC_SAO_INFO_9_pmv_info_full_END (6)
#define SOC_VDEC_SAO_INFO_9_pmv_pre_info_full_START (7)
#define SOC_VDEC_SAO_INFO_9_pmv_pre_info_full_END (7)
#define SOC_VDEC_SAO_INFO_9_pmv_info_empty_START (8)
#define SOC_VDEC_SAO_INFO_9_pmv_info_empty_END (8)
#define SOC_VDEC_SAO_INFO_9_pmv_pre_info_empty_START (9)
#define SOC_VDEC_SAO_INFO_9_pmv_pre_info_empty_END (9)
#define SOC_VDEC_SAO_INFO_9_ldstr2ibuf_tileleft_70_we_START (12)
#define SOC_VDEC_SAO_INFO_9_ldstr2ibuf_tileleft_70_we_END (12)
#define SOC_VDEC_SAO_INFO_9_ibuf2ldstr_tileleft70_wack_START (13)
#define SOC_VDEC_SAO_INFO_9_ibuf2ldstr_tileleft70_wack_END (13)
#define SOC_VDEC_SAO_INFO_9_tileleft70_full_START (14)
#define SOC_VDEC_SAO_INFO_9_tileleft70_full_END (14)
#define SOC_VDEC_SAO_INFO_9_tileleft70_empty_START (15)
#define SOC_VDEC_SAO_INFO_9_tileleft70_empty_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2emar_awcoef0 : 32;
    } reg;
} SOC_VDEC_SAO_INFO_10_UNION;
#endif
#define SOC_VDEC_SAO_INFO_10_sao2emar_awcoef0_START (0)
#define SOC_VDEC_SAO_INFO_10_sao2emar_awcoef0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2emar_awcoef1 : 16;
        unsigned int sao2emar_awcoef2 : 16;
    } reg;
} SOC_VDEC_SAO_INFO_11_UNION;
#endif
#define SOC_VDEC_SAO_INFO_11_sao2emar_awcoef1_START (0)
#define SOC_VDEC_SAO_INFO_11_sao2emar_awcoef1_END (15)
#define SOC_VDEC_SAO_INFO_11_sao2emar_awcoef2_START (16)
#define SOC_VDEC_SAO_INFO_11_sao2emar_awcoef2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr_cur_mbx : 10;
        unsigned int reserved_0 : 6;
        unsigned int pix_line_num : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_VDEC_SAO_INFO_12_UNION;
#endif
#define SOC_VDEC_SAO_INFO_12_wr_cur_mbx_START (0)
#define SOC_VDEC_SAO_INFO_12_wr_cur_mbx_END (9)
#define SOC_VDEC_SAO_INFO_12_pix_line_num_START (16)
#define SOC_VDEC_SAO_INFO_12_pix_line_num_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int obuf2ldstr_mbx_sub1 : 10;
        unsigned int reserved_0 : 6;
        unsigned int emar_wr_cur_st : 5;
        unsigned int cmd_c_rd_flag : 1;
        unsigned int reserved_1 : 10;
    } reg;
} SOC_VDEC_SAO_INFO_13_UNION;
#endif
#define SOC_VDEC_SAO_INFO_13_obuf2ldstr_mbx_sub1_START (0)
#define SOC_VDEC_SAO_INFO_13_obuf2ldstr_mbx_sub1_END (9)
#define SOC_VDEC_SAO_INFO_13_emar_wr_cur_st_START (16)
#define SOC_VDEC_SAO_INFO_13_emar_wr_cur_st_END (20)
#define SOC_VDEC_SAO_INFO_13_cmd_c_rd_flag_START (21)
#define SOC_VDEC_SAO_INFO_13_cmd_c_rd_flag_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2emar_awvalid : 1;
        unsigned int emar2sao_awready : 1;
        unsigned int reserved_0 : 2;
        unsigned int sao2emar_awlen : 7;
        unsigned int reserved_1 : 1;
        unsigned int sao2emar_awprot : 3;
        unsigned int reserved_2 : 17;
    } reg;
} SOC_VDEC_SAO_INFO_14_UNION;
#endif
#define SOC_VDEC_SAO_INFO_14_sao2emar_awvalid_START (0)
#define SOC_VDEC_SAO_INFO_14_sao2emar_awvalid_END (0)
#define SOC_VDEC_SAO_INFO_14_emar2sao_awready_START (1)
#define SOC_VDEC_SAO_INFO_14_emar2sao_awready_END (1)
#define SOC_VDEC_SAO_INFO_14_sao2emar_awlen_START (4)
#define SOC_VDEC_SAO_INFO_14_sao2emar_awlen_END (10)
#define SOC_VDEC_SAO_INFO_14_sao2emar_awprot_START (12)
#define SOC_VDEC_SAO_INFO_14_sao2emar_awprot_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2emar_wvalid : 1;
        unsigned int emar2sao_wready : 1;
        unsigned int reserved : 14;
        unsigned int sao2emar_wstrob : 16;
    } reg;
} SOC_VDEC_SAO_INFO_15_UNION;
#endif
#define SOC_VDEC_SAO_INFO_15_sao2emar_wvalid_START (0)
#define SOC_VDEC_SAO_INFO_15_sao2emar_wvalid_END (0)
#define SOC_VDEC_SAO_INFO_15_emar2sao_wready_START (1)
#define SOC_VDEC_SAO_INFO_15_emar2sao_wready_END (1)
#define SOC_VDEC_SAO_INFO_15_sao2emar_wstrob_START (16)
#define SOC_VDEC_SAO_INFO_15_sao2emar_wstrob_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2emar_left_awcoef0 : 32;
    } reg;
} SOC_VDEC_SAO_INFO_16_UNION;
#endif
#define SOC_VDEC_SAO_INFO_16_sao2emar_left_awcoef0_START (0)
#define SOC_VDEC_SAO_INFO_16_sao2emar_left_awcoef0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int soa2emar_left_awcoef3 : 16;
        unsigned int ldstr_ctby : 10;
        unsigned int reserved : 6;
    } reg;
} SOC_VDEC_SAO_INFO_17_UNION;
#endif
#define SOC_VDEC_SAO_INFO_17_soa2emar_left_awcoef3_START (0)
#define SOC_VDEC_SAO_INFO_17_soa2emar_left_awcoef3_END (15)
#define SOC_VDEC_SAO_INFO_17_ldstr_ctby_START (16)
#define SOC_VDEC_SAO_INFO_17_ldstr_ctby_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2emar_left_awcoef4 : 32;
    } reg;
} SOC_VDEC_SAO_INFO_18_UNION;
#endif
#define SOC_VDEC_SAO_INFO_18_sao2emar_left_awcoef4_START (0)
#define SOC_VDEC_SAO_INFO_18_sao2emar_left_awcoef4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2emar_left_awvalid : 1;
        unsigned int emar2sao_left_awready : 1;
        unsigned int reserved_0 : 2;
        unsigned int sao2emar_left_awlen : 7;
        unsigned int reserved_1 : 1;
        unsigned int sao2emar_left_awprot : 3;
        unsigned int reserved_2 : 17;
    } reg;
} SOC_VDEC_SAO_INFO_19_UNION;
#endif
#define SOC_VDEC_SAO_INFO_19_sao2emar_left_awvalid_START (0)
#define SOC_VDEC_SAO_INFO_19_sao2emar_left_awvalid_END (0)
#define SOC_VDEC_SAO_INFO_19_emar2sao_left_awready_START (1)
#define SOC_VDEC_SAO_INFO_19_emar2sao_left_awready_END (1)
#define SOC_VDEC_SAO_INFO_19_sao2emar_left_awlen_START (4)
#define SOC_VDEC_SAO_INFO_19_sao2emar_left_awlen_END (10)
#define SOC_VDEC_SAO_INFO_19_sao2emar_left_awprot_START (12)
#define SOC_VDEC_SAO_INFO_19_sao2emar_left_awprot_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2emar_left_wvalid : 1;
        unsigned int emar2sao_left_wready : 1;
        unsigned int reserved_0 : 2;
        unsigned int sao2emar_left_wstrb : 4;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_VDEC_SAO_INFO_20_UNION;
#endif
#define SOC_VDEC_SAO_INFO_20_sao2emar_left_wvalid_START (0)
#define SOC_VDEC_SAO_INFO_20_sao2emar_left_wvalid_END (0)
#define SOC_VDEC_SAO_INFO_20_emar2sao_left_wready_START (1)
#define SOC_VDEC_SAO_INFO_20_emar2sao_left_wready_END (1)
#define SOC_VDEC_SAO_INFO_20_sao2emar_left_wstrb_START (4)
#define SOC_VDEC_SAO_INFO_20_sao2emar_left_wstrb_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2emar_left_arvalid : 1;
        unsigned int emar2sao_left_arready : 1;
        unsigned int reserved_0 : 2;
        unsigned int sao2emar_left_arprot : 3;
        unsigned int reserved_1 : 1;
        unsigned int sao2emar_left_arlen : 7;
        unsigned int reserved_2 : 17;
    } reg;
} SOC_VDEC_SAO_INFO_21_UNION;
#endif
#define SOC_VDEC_SAO_INFO_21_sao2emar_left_arvalid_START (0)
#define SOC_VDEC_SAO_INFO_21_sao2emar_left_arvalid_END (0)
#define SOC_VDEC_SAO_INFO_21_emar2sao_left_arready_START (1)
#define SOC_VDEC_SAO_INFO_21_emar2sao_left_arready_END (1)
#define SOC_VDEC_SAO_INFO_21_sao2emar_left_arprot_START (4)
#define SOC_VDEC_SAO_INFO_21_sao2emar_left_arprot_END (6)
#define SOC_VDEC_SAO_INFO_21_sao2emar_left_arlen_START (8)
#define SOC_VDEC_SAO_INFO_21_sao2emar_left_arlen_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2emar_left_arcoef0 : 32;
    } reg;
} SOC_VDEC_SAO_INFO_22_UNION;
#endif
#define SOC_VDEC_SAO_INFO_22_sao2emar_left_arcoef0_START (0)
#define SOC_VDEC_SAO_INFO_22_sao2emar_left_arcoef0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2emar_left_arcoef3 : 16;
        unsigned int pre_info_ctby : 10;
        unsigned int rd_left_rcv_grep : 2;
        unsigned int reserved : 4;
    } reg;
} SOC_VDEC_SAO_INFO_23_UNION;
#endif
#define SOC_VDEC_SAO_INFO_23_sao2emar_left_arcoef3_START (0)
#define SOC_VDEC_SAO_INFO_23_sao2emar_left_arcoef3_END (15)
#define SOC_VDEC_SAO_INFO_23_pre_info_ctby_START (16)
#define SOC_VDEC_SAO_INFO_23_pre_info_ctby_END (25)
#define SOC_VDEC_SAO_INFO_23_rd_left_rcv_grep_START (26)
#define SOC_VDEC_SAO_INFO_23_rd_left_rcv_grep_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2emar_left_arcoef4 : 32;
    } reg;
} SOC_VDEC_SAO_INFO_24_UNION;
#endif
#define SOC_VDEC_SAO_INFO_24_sao2emar_left_arcoef4_START (0)
#define SOC_VDEC_SAO_INFO_24_sao2emar_left_arcoef4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int emar2sao_left_rvaid : 1;
        unsigned int sao2emar_left_rready : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_VDEC_SAO_INFO_25_UNION;
#endif
#define SOC_VDEC_SAO_INFO_25_emar2sao_left_rvaid_START (0)
#define SOC_VDEC_SAO_INFO_25_emar2sao_left_rvaid_END (0)
#define SOC_VDEC_SAO_INFO_25_sao2emar_left_rready_START (1)
#define SOC_VDEC_SAO_INFO_25_sao2emar_left_rready_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2emar_top_awcoef0 : 32;
    } reg;
} SOC_VDEC_SAO_INFO_26_UNION;
#endif
#define SOC_VDEC_SAO_INFO_26_sao2emar_top_awcoef0_START (0)
#define SOC_VDEC_SAO_INFO_26_sao2emar_top_awcoef0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2emar_top_awvalid : 1;
        unsigned int emar2sao_top_awready : 1;
        unsigned int reserved_0 : 2;
        unsigned int sao2emar_top_awlen : 7;
        unsigned int reserved_1 : 1;
        unsigned int sao2emar_top_awprot : 3;
        unsigned int reserved_2 : 17;
    } reg;
} SOC_VDEC_SAO_INFO_27_UNION;
#endif
#define SOC_VDEC_SAO_INFO_27_sao2emar_top_awvalid_START (0)
#define SOC_VDEC_SAO_INFO_27_sao2emar_top_awvalid_END (0)
#define SOC_VDEC_SAO_INFO_27_emar2sao_top_awready_START (1)
#define SOC_VDEC_SAO_INFO_27_emar2sao_top_awready_END (1)
#define SOC_VDEC_SAO_INFO_27_sao2emar_top_awlen_START (4)
#define SOC_VDEC_SAO_INFO_27_sao2emar_top_awlen_END (10)
#define SOC_VDEC_SAO_INFO_27_sao2emar_top_awprot_START (12)
#define SOC_VDEC_SAO_INFO_27_sao2emar_top_awprot_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2emar_top_wvalid : 1;
        unsigned int emar2sao_top_wready : 1;
        unsigned int reserved_0 : 2;
        unsigned int sao2emar_top_wstrb : 4;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_VDEC_SAO_INFO_28_UNION;
#endif
#define SOC_VDEC_SAO_INFO_28_sao2emar_top_wvalid_START (0)
#define SOC_VDEC_SAO_INFO_28_sao2emar_top_wvalid_END (0)
#define SOC_VDEC_SAO_INFO_28_emar2sao_top_wready_START (1)
#define SOC_VDEC_SAO_INFO_28_emar2sao_top_wready_END (1)
#define SOC_VDEC_SAO_INFO_28_sao2emar_top_wstrb_START (4)
#define SOC_VDEC_SAO_INFO_28_sao2emar_top_wstrb_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2emar_top_arvalid : 1;
        unsigned int emar2sao_top_arready : 1;
        unsigned int reserved_0 : 2;
        unsigned int sao2emar_top_arprot : 3;
        unsigned int reserved_1 : 1;
        unsigned int sao2emar_top_arlen : 7;
        unsigned int reserved_2 : 17;
    } reg;
} SOC_VDEC_SAO_INFO_29_UNION;
#endif
#define SOC_VDEC_SAO_INFO_29_sao2emar_top_arvalid_START (0)
#define SOC_VDEC_SAO_INFO_29_sao2emar_top_arvalid_END (0)
#define SOC_VDEC_SAO_INFO_29_emar2sao_top_arready_START (1)
#define SOC_VDEC_SAO_INFO_29_emar2sao_top_arready_END (1)
#define SOC_VDEC_SAO_INFO_29_sao2emar_top_arprot_START (4)
#define SOC_VDEC_SAO_INFO_29_sao2emar_top_arprot_END (6)
#define SOC_VDEC_SAO_INFO_29_sao2emar_top_arlen_START (8)
#define SOC_VDEC_SAO_INFO_29_sao2emar_top_arlen_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2emar_top_arcoef0 : 32;
    } reg;
} SOC_VDEC_SAO_INFO_30_UNION;
#endif
#define SOC_VDEC_SAO_INFO_30_sao2emar_top_arcoef0_START (0)
#define SOC_VDEC_SAO_INFO_30_sao2emar_top_arcoef0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2emar_top_arcoef3 : 16;
        unsigned int rd_top_mbx : 10;
        unsigned int rd_top_syntax : 1;
        unsigned int rd_bot_cmd_multi_en : 1;
        unsigned int rd_bot_cmd_multi_cnt : 4;
    } reg;
} SOC_VDEC_SAO_INFO_31_UNION;
#endif
#define SOC_VDEC_SAO_INFO_31_sao2emar_top_arcoef3_START (0)
#define SOC_VDEC_SAO_INFO_31_sao2emar_top_arcoef3_END (15)
#define SOC_VDEC_SAO_INFO_31_rd_top_mbx_START (16)
#define SOC_VDEC_SAO_INFO_31_rd_top_mbx_END (25)
#define SOC_VDEC_SAO_INFO_31_rd_top_syntax_START (26)
#define SOC_VDEC_SAO_INFO_31_rd_top_syntax_END (26)
#define SOC_VDEC_SAO_INFO_31_rd_bot_cmd_multi_en_START (27)
#define SOC_VDEC_SAO_INFO_31_rd_bot_cmd_multi_en_END (27)
#define SOC_VDEC_SAO_INFO_31_rd_bot_cmd_multi_cnt_START (28)
#define SOC_VDEC_SAO_INFO_31_rd_bot_cmd_multi_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pre_info_ctbx_sub1 : 10;
        unsigned int rd_top_rcv_cnt : 5;
        unsigned int reserved_0 : 1;
        unsigned int emar_rd_cur_st : 3;
        unsigned int reserved_1 : 13;
    } reg;
} SOC_VDEC_SAO_INFO_32_UNION;
#endif
#define SOC_VDEC_SAO_INFO_32_pre_info_ctbx_sub1_START (0)
#define SOC_VDEC_SAO_INFO_32_pre_info_ctbx_sub1_END (9)
#define SOC_VDEC_SAO_INFO_32_rd_top_rcv_cnt_START (10)
#define SOC_VDEC_SAO_INFO_32_rd_top_rcv_cnt_END (14)
#define SOC_VDEC_SAO_INFO_32_emar_rd_cur_st_START (16)
#define SOC_VDEC_SAO_INFO_32_emar_rd_cur_st_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sao2emar_top_arcoef4 : 32;
    } reg;
} SOC_VDEC_SAO_INFO_33_UNION;
#endif
#define SOC_VDEC_SAO_INFO_33_sao2emar_top_arcoef4_START (0)
#define SOC_VDEC_SAO_INFO_33_sao2emar_top_arcoef4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int emar2sao_top_rvalid : 1;
        unsigned int sao2emar_top_rready : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_VDEC_SAO_INFO_34_UNION;
#endif
#define SOC_VDEC_SAO_INFO_34_emar2sao_top_rvalid_START (0)
#define SOC_VDEC_SAO_INFO_34_emar2sao_top_rvalid_END (0)
#define SOC_VDEC_SAO_INFO_34_sao2emar_top_rready_START (1)
#define SOC_VDEC_SAO_INFO_34_sao2emar_top_rready_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reg_luma_cal_out[31:0] : 32;
    } reg;
} SOC_VDEC_SAO_INFO_35_UNION;
#endif
#define SOC_VDEC_SAO_INFO_35_reg_luma_cal_out [31:0]_START (0)
#define SOC_VDEC_SAO_INFO_35_reg_luma_cal_out [31:0]_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reg_luma_cal_out[63:32] : 32;
    } reg;
} SOC_VDEC_SAO_INFO_36_UNION;
#endif
#define SOC_VDEC_SAO_INFO_36_reg_luma_cal_out [63:32]_START (0)
#define SOC_VDEC_SAO_INFO_36_reg_luma_cal_out [63:32]_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reg_chroma_cal_out[31:0] : 32;
    } reg;
} SOC_VDEC_SAO_INFO_37_UNION;
#endif
#define SOC_VDEC_SAO_INFO_37_reg_chroma_cal_out [31:0]_START (0)
#define SOC_VDEC_SAO_INFO_37_reg_chroma_cal_out [31:0]_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reg_chroma_cal_out[63:32] : 32;
    } reg;
} SOC_VDEC_SAO_INFO_38_UNION;
#endif
#define SOC_VDEC_SAO_INFO_38_reg_chroma_cal_out [63:32]_START (0)
#define SOC_VDEC_SAO_INFO_38_reg_chroma_cal_out [63:32]_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int src_luma_addr : 32;
    } reg;
} SOC_VDEC_SRC_LUMA_ADDR_UNION;
#endif
#define SOC_VDEC_SRC_LUMA_ADDR_src_luma_addr_START (0)
#define SOC_VDEC_SRC_LUMA_ADDR_src_luma_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int src_chroma_addr : 32;
    } reg;
} SOC_VDEC_SRC_CHROMA_ADDR_UNION;
#endif
#define SOC_VDEC_SRC_CHROMA_ADDR_src_chroma_addr_START (0)
#define SOC_VDEC_SRC_CHROMA_ADDR_src_chroma_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dst_luma_addr : 32;
    } reg;
} SOC_VDEC_DST_LUMA_ADDR_UNION;
#endif
#define SOC_VDEC_DST_LUMA_ADDR_dst_luma_addr_START (0)
#define SOC_VDEC_DST_LUMA_ADDR_dst_luma_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dst_chroma_addr : 32;
    } reg;
} SOC_VDEC_DST_CHROMA_ADDR_UNION;
#endif
#define SOC_VDEC_DST_CHROMA_ADDR_dst_chroma_addr_START (0)
#define SOC_VDEC_DST_CHROMA_ADDR_dst_chroma_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int data_stride : 32;
    } reg;
} SOC_VDEC_DATA_STRIDE_UNION;
#endif
#define SOC_VDEC_DATA_STRIDE_data_stride_START (0)
#define SOC_VDEC_DATA_STRIDE_data_stride_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int head_inf_offset : 32;
    } reg;
} SOC_VDEC_HEAD_INF_OFFSET_UNION;
#endif
#define SOC_VDEC_HEAD_INF_OFFSET_head_inf_offset_START (0)
#define SOC_VDEC_HEAD_INF_OFFSET_head_inf_offset_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pic_width_in_mb : 9;
        unsigned int reserved_0 : 7;
        unsigned int pic_height_in_mb : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_VDEC_PIC_IN_MB_UNION;
#endif
#define SOC_VDEC_PIC_IN_MB_pic_width_in_mb_START (0)
#define SOC_VDEC_PIC_IN_MB_pic_width_in_mb_END (8)
#define SOC_VDEC_PIC_IN_MB_pic_height_in_mb_START (16)
#define SOC_VDEC_PIC_IN_MB_pic_height_in_mb_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int total_grp_num_minus1 : 16;
        unsigned int compress_flag : 1;
        unsigned int reserved_0 : 3;
        unsigned int src_load_mode : 2;
        unsigned int dst_store_mode : 2;
        unsigned int reserved_1 : 8;
    } reg;
} SOC_VDEC_TOTAL_GRP_UNION;
#endif
#define SOC_VDEC_TOTAL_GRP_total_grp_num_minus1_START (0)
#define SOC_VDEC_TOTAL_GRP_total_grp_num_minus1_END (15)
#define SOC_VDEC_TOTAL_GRP_compress_flag_START (16)
#define SOC_VDEC_TOTAL_GRP_compress_flag_END (16)
#define SOC_VDEC_TOTAL_GRP_src_load_mode_START (20)
#define SOC_VDEC_TOTAL_GRP_src_load_mode_END (21)
#define SOC_VDEC_TOTAL_GRP_dst_store_mode_START (22)
#define SOC_VDEC_TOTAL_GRP_dst_store_mode_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int start_mbx : 9;
        unsigned int reserved_0: 7;
        unsigned int start_mby : 9;
        unsigned int reserved_1: 7;
    } reg;
} SOC_VDEC_START_MB_UNION;
#endif
#define SOC_VDEC_START_MB_start_mbx_START (0)
#define SOC_VDEC_START_MB_start_mbx_END (8)
#define SOC_VDEC_START_MB_start_mby_START (16)
#define SOC_VDEC_START_MB_start_mby_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int end_mbx : 9;
        unsigned int reserved_0: 7;
        unsigned int end_mby : 9;
        unsigned int reserved_1: 7;
    } reg;
} SOC_VDEC_END_MB_UNION;
#endif
#define SOC_VDEC_END_MB_end_mbx_START (0)
#define SOC_VDEC_END_MB_end_mbx_END (8)
#define SOC_VDEC_END_MB_end_mby_START (16)
#define SOC_VDEC_END_MB_end_mby_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int in_mbx : 9;
        unsigned int reserved_0: 7;
        unsigned int in_mby : 9;
        unsigned int reserved_1: 7;
    } reg;
} SOC_VDEC_IN_MB_UNION;
#endif
#define SOC_VDEC_IN_MB_in_mbx_START (0)
#define SOC_VDEC_IN_MB_in_mbx_END (8)
#define SOC_VDEC_IN_MB_in_mby_START (16)
#define SOC_VDEC_IN_MB_in_mby_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int in_mbx : 9;
        unsigned int reserved_0: 7;
        unsigned int in_mby : 9;
        unsigned int reserved_1: 7;
    } reg;
} SOC_VDEC_SEND_MB_UNION;
#endif
#define SOC_VDEC_SEND_MB_in_mbx_START (0)
#define SOC_VDEC_SEND_MB_in_mbx_END (8)
#define SOC_VDEC_SEND_MB_in_mby_START (16)
#define SOC_VDEC_SEND_MB_in_mby_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cur_st_dma : 4;
        unsigned int cur_send_st : 3;
        unsigned int reserved_0 : 1;
        unsigned int cur_emar_st : 2;
        unsigned int reserved_1 : 6;
        unsigned int dma_cmd_cnt : 16;
    } reg;
} SOC_VDEC_DMA_CMD_UNION;
#endif
#define SOC_VDEC_DMA_CMD_cur_st_dma_START (0)
#define SOC_VDEC_DMA_CMD_cur_st_dma_END (3)
#define SOC_VDEC_DMA_CMD_cur_send_st_START (4)
#define SOC_VDEC_DMA_CMD_cur_send_st_END (6)
#define SOC_VDEC_DMA_CMD_cur_emar_st_START (8)
#define SOC_VDEC_DMA_CMD_cur_emar_st_END (9)
#define SOC_VDEC_DMA_CMD_dma_cmd_cnt_START (16)
#define SOC_VDEC_DMA_CMD_dma_cmd_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 4;
        unsigned int head_info_cnt : 3;
        unsigned int reserved_1 : 5;
        unsigned int cmp_dat_cnt : 6;
        unsigned int reserved_2 : 2;
        unsigned int dma_in_cnt : 4;
        unsigned int reserved_3 : 8;
    } reg;
} SOC_VDEC_CNT0_UNION;
#endif
#define SOC_VDEC_CNT0_head_info_cnt_START (4)
#define SOC_VDEC_CNT0_head_info_cnt_END (6)
#define SOC_VDEC_CNT0_cmp_dat_cnt_START (12)
#define SOC_VDEC_CNT0_cmp_dat_cnt_END (17)
#define SOC_VDEC_CNT0_dma_in_cnt_START (20)
#define SOC_VDEC_CNT0_dma_in_cnt_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 12;
        unsigned int send_part_cnt : 6;
        unsigned int send_inmb_cnt : 2;
        unsigned int sdat_cnt : 4;
        unsigned int wemar_data_cnt : 8;
    } reg;
} SOC_VDEC_CNT1_UNION;
#endif
#define SOC_VDEC_CNT1_send_part_cnt_START (12)
#define SOC_VDEC_CNT1_send_part_cnt_END (17)
#define SOC_VDEC_CNT1_send_inmb_cnt_START (18)
#define SOC_VDEC_CNT1_send_inmb_cnt_END (19)
#define SOC_VDEC_CNT1_sdat_cnt_START (20)
#define SOC_VDEC_CNT1_sdat_cnt_END (23)
#define SOC_VDEC_CNT1_wemar_data_cnt_START (24)
#define SOC_VDEC_CNT1_wemar_data_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int is_avsplus : 1;
        unsigned int test_reserve0 : 31;
    } reg;
} SOC_VDEC_AVS_PLUS_UNION;
#endif
#define SOC_VDEC_AVS_PLUS_is_avsplus_START (0)
#define SOC_VDEC_AVS_PLUS_is_avsplus_END (0)
#define SOC_VDEC_AVS_PLUS_test_reserve0_START (1)
#define SOC_VDEC_AVS_PLUS_test_reserve0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acfg2arb_wosd : 4;
        unsigned int acfg2arb_rosd : 8;
        unsigned int axi_4k_bypass : 1;
        unsigned int acfg2arb_mid_en : 1;
        unsigned int axi_sep_typ : 2;
        unsigned int acfg2arb_ramtype : 2;
        unsigned int reserved : 14;
    } reg;
} SOC_VDEC_EMAR_ADDR_UNION;
#endif
#define SOC_VDEC_EMAR_ADDR_acfg2arb_wosd_START (0)
#define SOC_VDEC_EMAR_ADDR_acfg2arb_wosd_END (3)
#define SOC_VDEC_EMAR_ADDR_acfg2arb_rosd_START (4)
#define SOC_VDEC_EMAR_ADDR_acfg2arb_rosd_END (11)
#define SOC_VDEC_EMAR_ADDR_axi_4k_bypass_START (12)
#define SOC_VDEC_EMAR_ADDR_axi_4k_bypass_END (12)
#define SOC_VDEC_EMAR_ADDR_acfg2arb_mid_en_START (13)
#define SOC_VDEC_EMAR_ADDR_acfg2arb_mid_en_END (13)
#define SOC_VDEC_EMAR_ADDR_axi_sep_typ_START (14)
#define SOC_VDEC_EMAR_ADDR_axi_sep_typ_END (15)
#define SOC_VDEC_EMAR_ADDR_acfg2arb_ramtype_START (16)
#define SOC_VDEC_EMAR_ADDR_acfg2arb_ramtype_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rstself_or_no : 1;
        unsigned int debug_en : 1;
        unsigned int test_reserve1 : 30;
    } reg;
} SOC_VDEC_VDH_RST_EN_UNION;
#endif
#define SOC_VDEC_VDH_RST_EN_rstself_or_no_START (0)
#define SOC_VDEC_VDH_RST_EN_rstself_or_no_END (0)
#define SOC_VDEC_VDH_RST_EN_debug_en_START (1)
#define SOC_VDEC_VDH_RST_EN_debug_en_END (1)
#define SOC_VDEC_VDH_RST_EN_test_reserve1_START (2)
#define SOC_VDEC_VDH_RST_EN_test_reserve1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int module_clock_gating_en : 1;
        unsigned int memroy_clock_gating_en_tmp : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_VDEC_CK_GT_EN_UNION;
#endif
#define SOC_VDEC_CK_GT_EN_module_clock_gating_en_START (0)
#define SOC_VDEC_CK_GT_EN_module_clock_gating_en_END (0)
#define SOC_VDEC_CK_GT_EN_memroy_clock_gating_en_tmp_START (1)
#define SOC_VDEC_CK_GT_EN_memroy_clock_gating_en_tmp_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vdh_use_state : 32;
    } reg;
} SOC_VDEC_VDH_USE_STATE_UNION;
#endif
#define SOC_VDEC_VDH_USE_STATE_vdh_use_state_START (0)
#define SOC_VDEC_VDH_USE_STATE_vdh_use_state_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int over_time : 32;
    } reg;
} SOC_VDEC_OVER_TIME_UNION;
#endif
#define SOC_VDEC_OVER_TIME_over_time_START (0)
#define SOC_VDEC_OVER_TIME_over_time_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int over_4k_16m_info[31:0] : 32;
    } reg;
} SOC_VDEC_OVER_4K_CNT_UNION;
#endif
#define SOC_VDEC_OVER_4K_CNT_over_4k_16m_info [31:0]_START (0)
#define SOC_VDEC_OVER_4K_CNT_over_4k_16m_info [31:0]_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int over_4k_16m_info[63:32] : 32;
    } reg;
} SOC_VDEC_OVER_16M_CNT_UNION;
#endif
#define SOC_VDEC_OVER_16M_CNT_over_4k_16m_info [63:32]_START (0)
#define SOC_VDEC_OVER_16M_CNT_over_4k_16m_info [63:32]_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int all_r_mid_info : 32;
    } reg;
} SOC_VDEC_ALL_R_MID_INFO_UNION;
#endif
#define SOC_VDEC_ALL_R_MID_INFO_all_r_mid_info_START (0)
#define SOC_VDEC_ALL_R_MID_INFO_all_r_mid_info_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int all_w_mid_info : 32;
    } reg;
} SOC_VDEC_ALL_W_MID_INFO_UNION;
#endif
#define SOC_VDEC_ALL_W_MID_INFO_all_w_mid_info_START (0)
#define SOC_VDEC_ALL_W_MID_INFO_all_w_mid_info_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int src_state_info : 32;
    } reg;
} SOC_VDEC_SRC_STATE_INFO_UNION;
#endif
#define SOC_VDEC_SRC_STATE_INFO_src_state_info_START (0)
#define SOC_VDEC_SRC_STATE_INFO_src_state_info_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dsp_porg_req : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VDEC_DSP_PROG_ST_UNION;
#endif
#define SOC_VDEC_DSP_PROG_ST_dsp_porg_req_START (0)
#define SOC_VDEC_DSP_PROG_ST_dsp_porg_req_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dsp_porg_ovr : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VDEC_DSP_PROG_OVER_UNION;
#endif
#define SOC_VDEC_DSP_PROG_OVER_dsp_porg_ovr_START (0)
#define SOC_VDEC_DSP_PROG_OVER_dsp_porg_ovr_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dsp_porg_wlen : 13;
        unsigned int reserved : 19;
    } reg;
} SOC_VDEC_DSP_PROG_WLEN_UNION;
#endif
#define SOC_VDEC_DSP_PROG_WLEN_dsp_porg_wlen_START (0)
#define SOC_VDEC_DSP_PROG_WLEN_dsp_porg_wlen_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dsp_porg_staddr : 32;
    } reg;
} SOC_VDEC_DSP_PROG_STADDR_UNION;
#endif
#define SOC_VDEC_DSP_PROG_STADDR_dsp_porg_staddr_START (0)
#define SOC_VDEC_DSP_PROG_STADDR_dsp_porg_staddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int scd_top_start : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VDEC_SCD_START_UNION;
#endif
#define SOC_VDEC_SCD_START_scd_top_start_START (0)
#define SOC_VDEC_SCD_START_scd_top_start_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int list_base_addr : 32;
    } reg;
} SOC_VDEC_LIST_ADDRESS_UNION;
#endif
#define SOC_VDEC_LIST_ADDRESS_list_base_addr_START (0)
#define SOC_VDEC_LIST_ADDRESS_list_base_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int up_base_address : 32;
    } reg;
} SOC_VDEC_UP_ADDRESS_UNION;
#endif
#define SOC_VDEC_UP_ADDRESS_up_base_address_START (0)
#define SOC_VDEC_UP_ADDRESS_up_base_address_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int up_length : 32;
    } reg;
} SOC_VDEC_UP_LEN_UNION;
#endif
#define SOC_VDEC_UP_LEN_up_length_START (0)
#define SOC_VDEC_UP_LEN_up_length_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int buffer_first_addr : 32;
    } reg;
} SOC_VDEC_BUFFER_FIRST_UNION;
#endif
#define SOC_VDEC_BUFFER_FIRST_buffer_first_addr_START (0)
#define SOC_VDEC_BUFFER_FIRST_buffer_first_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int buffer_last_addr : 32;
    } reg;
} SOC_VDEC_BUFFER_LAST_UNION;
#endif
#define SOC_VDEC_BUFFER_LAST_buffer_last_addr_START (0)
#define SOC_VDEC_BUFFER_LAST_buffer_last_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int buffer_ini_addr : 32;
    } reg;
} SOC_VDEC_BUFFER_INI_UNION;
#endif
#define SOC_VDEC_BUFFER_INI_buffer_ini_addr_START (0)
#define SOC_VDEC_BUFFER_INI_buffer_ini_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int scd_norm_intr_mask : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VDEC_SCD_NORM_INT_MASK_UNION;
#endif
#define SOC_VDEC_SCD_NORM_INT_MASK_scd_norm_intr_mask_START (0)
#define SOC_VDEC_SCD_NORM_INT_MASK_scd_norm_intr_mask_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int scd_protocol : 4;
        unsigned int slice_check_flag : 1;
        unsigned int mpeg4_fpga_flag : 1;
        unsigned int pes_check_flag : 1;
        unsigned int scd_safe_mode : 1;
        unsigned int scd_lowdly_en : 1;
        unsigned int scd_mmu_en : 1;
        unsigned int reserved : 22;
    } reg;
} SOC_VDEC_SCD_PROTOCOL_UNION;
#endif
#define SOC_VDEC_SCD_PROTOCOL_scd_protocol_START (0)
#define SOC_VDEC_SCD_PROTOCOL_scd_protocol_END (3)
#define SOC_VDEC_SCD_PROTOCOL_slice_check_flag_START (4)
#define SOC_VDEC_SCD_PROTOCOL_slice_check_flag_END (4)
#define SOC_VDEC_SCD_PROTOCOL_mpeg4_fpga_flag_START (5)
#define SOC_VDEC_SCD_PROTOCOL_mpeg4_fpga_flag_END (5)
#define SOC_VDEC_SCD_PROTOCOL_pes_check_flag_START (6)
#define SOC_VDEC_SCD_PROTOCOL_pes_check_flag_END (6)
#define SOC_VDEC_SCD_PROTOCOL_scd_safe_mode_START (7)
#define SOC_VDEC_SCD_PROTOCOL_scd_safe_mode_END (7)
#define SOC_VDEC_SCD_PROTOCOL_scd_lowdly_en_START (8)
#define SOC_VDEC_SCD_PROTOCOL_scd_lowdly_en_END (8)
#define SOC_VDEC_SCD_PROTOCOL_scd_mmu_en_START (9)
#define SOC_VDEC_SCD_PROTOCOL_scd_mmu_en_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int scd_norm_intrs_flag : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VDEC_SCD_NORM_INI_CLR_UNION;
#endif
#define SOC_VDEC_SCD_NORM_INI_CLR_scd_norm_intrs_flag_START (0)
#define SOC_VDEC_SCD_NORM_INI_CLR_scd_norm_intrs_flag_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dsp_sps_addr : 32;
    } reg;
} SOC_VDEC_DSP_SPS_ADDR_UNION;
#endif
#define SOC_VDEC_DSP_SPS_ADDR_dsp_sps_addr_START (0)
#define SOC_VDEC_DSP_SPS_ADDR_dsp_sps_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dsp_pps_addr : 32;
    } reg;
} SOC_VDEC_DSP_PPS_ADDR_UNION;
#endif
#define SOC_VDEC_DSP_PPS_ADDR_dsp_pps_addr_START (0)
#define SOC_VDEC_DSP_PPS_ADDR_dsp_pps_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dsp_msg_addr : 32;
    } reg;
} SOC_VDEC_DSP_MSG_ADDR_UNION;
#endif
#define SOC_VDEC_DSP_MSG_ADDR_dsp_msg_addr_START (0)
#define SOC_VDEC_DSP_MSG_ADDR_dsp_msg_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dsp_top_addr : 32;
    } reg;
} SOC_VDEC_DSP_TOP_ADDR_UNION;
#endif
#define SOC_VDEC_DSP_TOP_ADDR_dsp_top_addr_START (0)
#define SOC_VDEC_DSP_TOP_ADDR_dsp_top_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dsp_camn_addr : 32;
    } reg;
} SOC_VDEC_DSP_CAMN_ADDR_UNION;
#endif
#define SOC_VDEC_DSP_CAMN_ADDR_dsp_camn_addr_START (0)
#define SOC_VDEC_DSP_CAMN_ADDR_dsp_camn_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tst_base_addr : 32;
    } reg;
} SOC_VDEC_TST_BASE_ADDR_UNION;
#endif
#define SOC_VDEC_TST_BASE_ADDR_tst_base_addr_START (0)
#define SOC_VDEC_TST_BASE_ADDR_tst_base_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int scd_norm_int_flag : 1;
        unsigned int scd_rst_busy : 1;
        unsigned int scd_safe_int_flag : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_VDEC_SCD_INT_FLAG_UNION;
#endif
#define SOC_VDEC_SCD_INT_FLAG_scd_norm_int_flag_START (0)
#define SOC_VDEC_SCD_INT_FLAG_scd_norm_int_flag_END (0)
#define SOC_VDEC_SCD_INT_FLAG_scd_rst_busy_START (1)
#define SOC_VDEC_SCD_INT_FLAG_scd_rst_busy_END (1)
#define SOC_VDEC_SCD_INT_FLAG_scd_safe_int_flag_START (2)
#define SOC_VDEC_SCD_INT_FLAG_scd_safe_int_flag_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int scd_num_out : 22;
        unsigned int short_header_num : 10;
    } reg;
} SOC_VDEC_SCD_NUMBER_UNION;
#endif
#define SOC_VDEC_SCD_NUMBER_scd_num_out_START (0)
#define SOC_VDEC_SCD_NUMBER_scd_num_out_END (21)
#define SOC_VDEC_SCD_NUMBER_short_header_num_START (22)
#define SOC_VDEC_SCD_NUMBER_short_header_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int roll_addr : 32;
    } reg;
} SOC_VDEC_RLL_ADDR_UNION;
#endif
#define SOC_VDEC_RLL_ADDR_roll_addr_START (0)
#define SOC_VDEC_RLL_ADDR_roll_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int scr_eaten[30:0] : 31;
        unsigned int reserved : 1;
    } reg;
} SOC_VDEC_SCR_RAT_UNION;
#endif
#define SOC_VDEC_SCR_RAT_scr_eaten [30:0]_START (0)
#define SOC_VDEC_SCR_RAT_scr_eaten [30:0]_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cur_sta_main : 7;
        unsigned int reserved_0 : 1;
        unsigned int cur_sta_det : 4;
        unsigned int reserved_1 : 4;
        unsigned int cur_sta_rdat : 4;
        unsigned int cur_sta_wdat : 4;
        unsigned int reserved_2 : 8;
    } reg;
} SOC_VDEC_STA_UNION;
#endif
#define SOC_VDEC_STA_cur_sta_main_START (0)
#define SOC_VDEC_STA_cur_sta_main_END (6)
#define SOC_VDEC_STA_cur_sta_det_START (8)
#define SOC_VDEC_STA_cur_sta_det_END (11)
#define SOC_VDEC_STA_cur_sta_rdat_START (16)
#define SOC_VDEC_STA_cur_sta_rdat_END (19)
#define SOC_VDEC_STA_cur_sta_wdat_START (20)
#define SOC_VDEC_STA_cur_sta_wdat_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sdwr_curr_state : 3;
        unsigned int reserved_0 : 1;
        unsigned int sdwr_cnt_burst : 4;
        unsigned int sdwr_num_burst : 5;
        unsigned int reserved_1 : 19;
    } reg;
} SOC_VDEC_SDWR_UNION;
#endif
#define SOC_VDEC_SDWR_sdwr_curr_state_START (0)
#define SOC_VDEC_SDWR_sdwr_curr_state_END (2)
#define SOC_VDEC_SDWR_sdwr_cnt_burst_START (4)
#define SOC_VDEC_SDWR_sdwr_cnt_burst_END (7)
#define SOC_VDEC_SDWR_sdwr_num_burst_START (8)
#define SOC_VDEC_SDWR_sdwr_num_burst_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int scd_run_cycle : 32;
    } reg;
} SOC_VDEC_RUN_CYCLE_UNION;
#endif
#define SOC_VDEC_RUN_CYCLE_scd_run_cycle_START (0)
#define SOC_VDEC_RUN_CYCLE_scd_run_cycle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_req_num : 32;
    } reg;
} SOC_VDEC_SCD_RD_REQ_UNION;
#endif
#define SOC_VDEC_SCD_RD_REQ_rd_req_num_START (0)
#define SOC_VDEC_SCD_RD_REQ_rd_req_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_dat_num : 32;
    } reg;
} SOC_VDEC_SCD_RD_DAT_UNION;
#endif
#define SOC_VDEC_SCD_RD_DAT_rd_dat_num_START (0)
#define SOC_VDEC_SCD_RD_DAT_rd_dat_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr_req_num : 32;
    } reg;
} SOC_VDEC_SCD_WR_REQ_UNION;
#endif
#define SOC_VDEC_SCD_WR_REQ_wr_req_num_START (0)
#define SOC_VDEC_SCD_WR_REQ_wr_req_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr_dat_num : 32;
    } reg;
} SOC_VDEC_SCD_WR_DAT_UNION;
#endif
#define SOC_VDEC_SCD_WR_DAT_wr_dat_num_START (0)
#define SOC_VDEC_SCD_WR_DAT_wr_dat_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cur_scd_st[2:0] : 3;
        unsigned int cur_scd_st : 29;
    } reg;
} SOC_VDEC_SCD_WORK_ST_UNION;
#endif
#define SOC_VDEC_SCD_WORK_ST_cur_scd_st [2:0]_START (0)
#define SOC_VDEC_SCD_WORK_ST_cur_scd_st [2:0]_END (2)
#define SOC_VDEC_SCD_WORK_ST_cur_scd_st_START (3)
#define SOC_VDEC_SCD_WORK_ST_cur_scd_st_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int scd_safe_intr_mask : 1;
        unsigned int scd_reserve : 31;
    } reg;
} SOC_VDEC_SCD_SAFE_INT_MASK_UNION;
#endif
#define SOC_VDEC_SCD_SAFE_INT_MASK_scd_safe_intr_mask_START (0)
#define SOC_VDEC_SCD_SAFE_INT_MASK_scd_safe_intr_mask_END (0)
#define SOC_VDEC_SCD_SAFE_INT_MASK_scd_reserve_START (1)
#define SOC_VDEC_SCD_SAFE_INT_MASK_scd_reserve_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int scd_safe_intrs_flag : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VDEC_SCD_SAFE_INI_CLR_UNION;
#endif
#define SOC_VDEC_SCD_SAFE_INI_CLR_scd_safe_intrs_flag_START (0)
#define SOC_VDEC_SCD_SAFE_INI_CLR_scd_safe_intrs_flag_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dec_start : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VDEC_BPD_START_UNION;
#endif
#define SOC_VDEC_BPD_START_dec_start_START (0)
#define SOC_VDEC_BPD_START_dec_start_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bit_offset : 8;
        unsigned int pic_mbwidth_mod3 : 2;
        unsigned int pic_mbheigt&#10;_mod3 : 2;
        unsigned int mvmode_en : 1;
        unsigned int overflag_en : 1;
        unsigned int pic_coding_type : 2;
        unsigned int pic_structure : 2;
        unsigned int profile : 2;
        unsigned int safe_flag : 1;
        unsigned int bpd_mmu_en : 1;
        unsigned int reserved : 10;
    } reg;
} SOC_VDEC_BPD_CFG0_UNION;
#endif
#define SOC_VDEC_BPD_CFG0_bit_offset_START (0)
#define SOC_VDEC_BPD_CFG0_bit_offset_END (7)
#define SOC_VDEC_BPD_CFG0_pic_mbwidth_mod3_START (8)
#define SOC_VDEC_BPD_CFG0_pic_mbwidth_mod3_END (9)
#define SOC_VDEC_BPD_CFG0_pic_mbheigt &#10;_mod3_START (10)
#define SOC_VDEC_BPD_CFG0_pic_mbheigt &#10;_mod3_END (11)
#define SOC_VDEC_BPD_CFG0_mvmode_en_START (12)
#define SOC_VDEC_BPD_CFG0_mvmode_en_END (12)
#define SOC_VDEC_BPD_CFG0_overflag_en_START (13)
#define SOC_VDEC_BPD_CFG0_overflag_en_END (13)
#define SOC_VDEC_BPD_CFG0_pic_coding_type_START (14)
#define SOC_VDEC_BPD_CFG0_pic_coding_type_END (15)
#define SOC_VDEC_BPD_CFG0_pic_structure_START (16)
#define SOC_VDEC_BPD_CFG0_pic_structure_END (17)
#define SOC_VDEC_BPD_CFG0_profile_START (18)
#define SOC_VDEC_BPD_CFG0_profile_END (19)
#define SOC_VDEC_BPD_CFG0_safe_flag_START (20)
#define SOC_VDEC_BPD_CFG0_safe_flag_END (20)
#define SOC_VDEC_BPD_CFG0_bpd_mmu_en_START (21)
#define SOC_VDEC_BPD_CFG0_bpd_mmu_en_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bs_staddr : 32;
    } reg;
} SOC_VDEC_BPD_CFG1_UNION;
#endif
#define SOC_VDEC_BPD_CFG1_bs_staddr_START (0)
#define SOC_VDEC_BPD_CFG1_bs_staddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pic_mbwidth_m1 : 16;
        unsigned int pic_mbheigt_m1 : 16;
    } reg;
} SOC_VDEC_BPD_CFG2_UNION;
#endif
#define SOC_VDEC_BPD_CFG2_pic_mbwidth_m1_START (0)
#define SOC_VDEC_BPD_CFG2_pic_mbwidth_m1_END (15)
#define SOC_VDEC_BPD_CFG2_pic_mbheigt_m1_START (16)
#define SOC_VDEC_BPD_CFG2_pic_mbheigt_m1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bp_stride : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_VDEC_BPD_CFG3_UNION;
#endif
#define SOC_VDEC_BPD_CFG3_bp_stride_START (0)
#define SOC_VDEC_BPD_CFG3_bp_stride_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bp0_staddr : 32;
    } reg;
} SOC_VDEC_BPD_CFG4_UNION;
#endif
#define SOC_VDEC_BPD_CFG4_bp0_staddr_START (0)
#define SOC_VDEC_BPD_CFG4_bp0_staddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bp1_staddr : 32;
    } reg;
} SOC_VDEC_BPD_CFG5_UNION;
#endif
#define SOC_VDEC_BPD_CFG5_bp1_staddr_START (0)
#define SOC_VDEC_BPD_CFG5_bp1_staddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bp2_staddr : 32;
    } reg;
} SOC_VDEC_BPD_CFG6_UNION;
#endif
#define SOC_VDEC_BPD_CFG6_bp2_staddr_START (0)
#define SOC_VDEC_BPD_CFG6_bp2_staddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bp3_staddr : 32;
    } reg;
} SOC_VDEC_BPD_CFG7_UNION;
#endif
#define SOC_VDEC_BPD_CFG7_bp3_staddr_START (0)
#define SOC_VDEC_BPD_CFG7_bp3_staddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bp4_staddr : 32;
    } reg;
} SOC_VDEC_BPD_CFG8_UNION;
#endif
#define SOC_VDEC_BPD_CFG8_bp4_staddr_START (0)
#define SOC_VDEC_BPD_CFG8_bp4_staddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bp5_staddr : 32;
    } reg;
} SOC_VDEC_BPD_CFG9_UNION;
#endif
#define SOC_VDEC_BPD_CFG9_bp5_staddr_START (0)
#define SOC_VDEC_BPD_CFG9_bp5_staddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bp6_staddr : 32;
    } reg;
} SOC_VDEC_BPD_CFG10_UNION;
#endif
#define SOC_VDEC_BPD_CFG10_bp6_staddr_START (0)
#define SOC_VDEC_BPD_CFG10_bp6_staddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int axi_id : 4;
        unsigned int axi_rd_outstanding : 4;
        unsigned int axi_wr_outstanding : 4;
        unsigned int bpd_axi_sep_bypass : 1;
        unsigned int bpd_axi_sep_typ : 2;
        unsigned int reserved_0 : 1;
        unsigned int mem_ck_gt_en : 1;
        unsigned int reserved_1 : 15;
    } reg;
} SOC_VDEC_BPD_CFG11_UNION;
#endif
#define SOC_VDEC_BPD_CFG11_axi_id_START (0)
#define SOC_VDEC_BPD_CFG11_axi_id_END (3)
#define SOC_VDEC_BPD_CFG11_axi_rd_outstanding_START (4)
#define SOC_VDEC_BPD_CFG11_axi_rd_outstanding_END (7)
#define SOC_VDEC_BPD_CFG11_axi_wr_outstanding_START (8)
#define SOC_VDEC_BPD_CFG11_axi_wr_outstanding_END (11)
#define SOC_VDEC_BPD_CFG11_bpd_axi_sep_bypass_START (12)
#define SOC_VDEC_BPD_CFG11_bpd_axi_sep_bypass_END (12)
#define SOC_VDEC_BPD_CFG11_bpd_axi_sep_typ_START (13)
#define SOC_VDEC_BPD_CFG11_bpd_axi_sep_typ_END (14)
#define SOC_VDEC_BPD_CFG11_mem_ck_gt_en_START (16)
#define SOC_VDEC_BPD_CFG11_mem_ck_gt_en_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int norm_intm_bpd_dec_over : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VDEC_BPD_NORM_INT_MASK_UNION;
#endif
#define SOC_VDEC_BPD_NORM_INT_MASK_norm_intm_bpd_dec_over_START (0)
#define SOC_VDEC_BPD_NORM_INT_MASK_norm_intm_bpd_dec_over_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int norm_intrs_bpd_dec_over : 1;
        unsigned int safe_intrs_bpd_dec_over : 1;
        unsigned int reserved_0 : 14;
        unsigned int bpd_rst_busy : 1;
        unsigned int reserved_1 : 15;
    } reg;
} SOC_VDEC_BPD_STATE_UNION;
#endif
#define SOC_VDEC_BPD_STATE_norm_intrs_bpd_dec_over_START (0)
#define SOC_VDEC_BPD_STATE_norm_intrs_bpd_dec_over_END (0)
#define SOC_VDEC_BPD_STATE_safe_intrs_bpd_dec_over_START (1)
#define SOC_VDEC_BPD_STATE_safe_intrs_bpd_dec_over_END (1)
#define SOC_VDEC_BPD_STATE_bpd_rst_busy_START (16)
#define SOC_VDEC_BPD_STATE_bpd_rst_busy_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int norm_intrms_bpd_dec_over : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VDEC_BPD_NORM_INT_STATE_UNION;
#endif
#define SOC_VDEC_BPD_NORM_INT_STATE_norm_intrms_bpd_dec_over_START (0)
#define SOC_VDEC_BPD_NORM_INT_STATE_norm_intrms_bpd_dec_over_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bpd_cur_state : 4;
        unsigned int dec_cur_state : 4;
        unsigned int reserved : 24;
    } reg;
} SOC_VDEC_BPD_CTRL_STATE_UNION;
#endif
#define SOC_VDEC_BPD_CTRL_STATE_bpd_cur_state_START (0)
#define SOC_VDEC_BPD_CTRL_STATE_bpd_cur_state_END (3)
#define SOC_VDEC_BPD_CTRL_STATE_dec_cur_state_START (4)
#define SOC_VDEC_BPD_CTRL_STATE_dec_cur_state_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cycle_per_pic : 32;
    } reg;
} SOC_VDEC_BPD_CYCLE_COUNT_UNION;
#endif
#define SOC_VDEC_BPD_CYCLE_COUNT_cycle_per_pic_START (0)
#define SOC_VDEC_BPD_CYCLE_COUNT_cycle_per_pic_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int eaten_lenth : 32;
    } reg;
} SOC_VDEC_BPD_OUT0_UNION;
#endif
#define SOC_VDEC_BPD_OUT0_eaten_lenth_START (0)
#define SOC_VDEC_BPD_OUT0_eaten_lenth_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mvtypembmode : 4;
        unsigned int skipmbmode : 4;
        unsigned int directmbmode : 4;
        unsigned int acpredmode : 4;
        unsigned int overflagsmode : 4;
        unsigned int fieldtxmode : 4;
        unsigned int forwardmbmode : 4;
        unsigned int condover : 2;
        unsigned int dec_error : 1;
        unsigned int reserved : 1;
    } reg;
} SOC_VDEC_BPD_OUT1_UNION;
#endif
#define SOC_VDEC_BPD_OUT1_mvtypembmode_START (0)
#define SOC_VDEC_BPD_OUT1_mvtypembmode_END (3)
#define SOC_VDEC_BPD_OUT1_skipmbmode_START (4)
#define SOC_VDEC_BPD_OUT1_skipmbmode_END (7)
#define SOC_VDEC_BPD_OUT1_directmbmode_START (8)
#define SOC_VDEC_BPD_OUT1_directmbmode_END (11)
#define SOC_VDEC_BPD_OUT1_acpredmode_START (12)
#define SOC_VDEC_BPD_OUT1_acpredmode_END (15)
#define SOC_VDEC_BPD_OUT1_overflagsmode_START (16)
#define SOC_VDEC_BPD_OUT1_overflagsmode_END (19)
#define SOC_VDEC_BPD_OUT1_fieldtxmode_START (20)
#define SOC_VDEC_BPD_OUT1_fieldtxmode_END (23)
#define SOC_VDEC_BPD_OUT1_forwardmbmode_START (24)
#define SOC_VDEC_BPD_OUT1_forwardmbmode_END (27)
#define SOC_VDEC_BPD_OUT1_condover_START (28)
#define SOC_VDEC_BPD_OUT1_condover_END (29)
#define SOC_VDEC_BPD_OUT1_dec_error_START (30)
#define SOC_VDEC_BPD_OUT1_dec_error_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int safe_intrms_bpd_dec_over : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VDEC_BPD_SAFE_INT_STATE_UNION;
#endif
#define SOC_VDEC_BPD_SAFE_INT_STATE_safe_intrms_bpd_dec_over_START (0)
#define SOC_VDEC_BPD_SAFE_INT_STATE_safe_intrms_bpd_dec_over_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int safe_intm_bpd_dec_over : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VDEC_BPD_SAFE_INT_MASK_UNION;
#endif
#define SOC_VDEC_BPD_SAFE_INT_MASK_safe_intm_bpd_dec_over_START (0)
#define SOC_VDEC_BPD_SAFE_INT_MASK_safe_intm_bpd_dec_over_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int glb_bypass : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VDEC_SMMU_MSTR_GLB_BYPASS_UNION;
#endif
#define SOC_VDEC_SMMU_MSTR_GLB_BYPASS_glb_bypass_START (0)
#define SOC_VDEC_SMMU_MSTR_GLB_BYPASS_glb_bypass_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int debug_mode : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VDEC_SMMU_MSTR_DEBUG_MODE_UNION;
#endif
#define SOC_VDEC_SMMU_MSTR_DEBUG_MODE_debug_mode_START (0)
#define SOC_VDEC_SMMU_MSTR_DEBUG_MODE_debug_mode_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mem_ctrl_s : 16;
        unsigned int mem_ctrl_d1w2r : 16;
    } reg;
} SOC_VDEC_SMMU_MSTR_MEM_CTRL_UNION;
#endif
#define SOC_VDEC_SMMU_MSTR_MEM_CTRL_mem_ctrl_s_START (0)
#define SOC_VDEC_SMMU_MSTR_MEM_CTRL_mem_ctrl_s_END (15)
#define SOC_VDEC_SMMU_MSTR_MEM_CTRL_mem_ctrl_d1w2r_START (16)
#define SOC_VDEC_SMMU_MSTR_MEM_CTRL_mem_ctrl_d1w2r_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int apb_clk_en : 2;
        unsigned int core_clk_en : 2;
        unsigned int reserved : 28;
    } reg;
} SOC_VDEC_SMMU_MSTR_CLK_EN_UNION;
#endif
#define SOC_VDEC_SMMU_MSTR_CLK_EN_apb_clk_en_START (0)
#define SOC_VDEC_SMMU_MSTR_CLK_EN_apb_clk_en_END (1)
#define SOC_VDEC_SMMU_MSTR_CLK_EN_core_clk_en_START (2)
#define SOC_VDEC_SMMU_MSTR_CLK_EN_core_clk_en_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr_cid_err : 1;
        unsigned int wr_ack_iid_err : 1;
        unsigned int wr_resp_iid_err : 1;
        unsigned int wdata_err : 1;
        unsigned int rd_cid_err : 1;
        unsigned int rd_ack_iid_err : 1;
        unsigned int rd_resp_iid_err : 1;
        unsigned int reserved : 25;
    } reg;
} SOC_VDEC_SMMU_MSTR_DBG_0_UNION;
#endif
#define SOC_VDEC_SMMU_MSTR_DBG_0_wr_cid_err_START (0)
#define SOC_VDEC_SMMU_MSTR_DBG_0_wr_cid_err_END (0)
#define SOC_VDEC_SMMU_MSTR_DBG_0_wr_ack_iid_err_START (1)
#define SOC_VDEC_SMMU_MSTR_DBG_0_wr_ack_iid_err_END (1)
#define SOC_VDEC_SMMU_MSTR_DBG_0_wr_resp_iid_err_START (2)
#define SOC_VDEC_SMMU_MSTR_DBG_0_wr_resp_iid_err_END (2)
#define SOC_VDEC_SMMU_MSTR_DBG_0_wdata_err_START (3)
#define SOC_VDEC_SMMU_MSTR_DBG_0_wdata_err_END (3)
#define SOC_VDEC_SMMU_MSTR_DBG_0_rd_cid_err_START (4)
#define SOC_VDEC_SMMU_MSTR_DBG_0_rd_cid_err_END (4)
#define SOC_VDEC_SMMU_MSTR_DBG_0_rd_ack_iid_err_START (5)
#define SOC_VDEC_SMMU_MSTR_DBG_0_rd_ack_iid_err_END (5)
#define SOC_VDEC_SMMU_MSTR_DBG_0_rd_resp_iid_err_START (6)
#define SOC_VDEC_SMMU_MSTR_DBG_0_rd_resp_iid_err_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_cid : 5;
        unsigned int reserved_0 : 3;
        unsigned int rd_ack_iid : 8;
        unsigned int rd_resp_iid : 8;
        unsigned int reserved_1 : 8;
    } reg;
} SOC_VDEC_SMMU_MSTR_DBG_1_UNION;
#endif
#define SOC_VDEC_SMMU_MSTR_DBG_1_rd_cid_START (0)
#define SOC_VDEC_SMMU_MSTR_DBG_1_rd_cid_END (4)
#define SOC_VDEC_SMMU_MSTR_DBG_1_rd_ack_iid_START (8)
#define SOC_VDEC_SMMU_MSTR_DBG_1_rd_ack_iid_END (15)
#define SOC_VDEC_SMMU_MSTR_DBG_1_rd_resp_iid_START (16)
#define SOC_VDEC_SMMU_MSTR_DBG_1_rd_resp_iid_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_addr : 32;
    } reg;
} SOC_VDEC_SMMU_MSTR_DBG_2_UNION;
#endif
#define SOC_VDEC_SMMU_MSTR_DBG_2_rd_addr_START (0)
#define SOC_VDEC_SMMU_MSTR_DBG_2_rd_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr_cid : 5;
        unsigned int reserved_0 : 3;
        unsigned int wr_ack_iid : 8;
        unsigned int wr_resp_iid : 8;
        unsigned int reserved_1 : 8;
    } reg;
} SOC_VDEC_SMMU_MSTR_DBG_3_UNION;
#endif
#define SOC_VDEC_SMMU_MSTR_DBG_3_wr_cid_START (0)
#define SOC_VDEC_SMMU_MSTR_DBG_3_wr_cid_END (4)
#define SOC_VDEC_SMMU_MSTR_DBG_3_wr_ack_iid_START (8)
#define SOC_VDEC_SMMU_MSTR_DBG_3_wr_ack_iid_END (15)
#define SOC_VDEC_SMMU_MSTR_DBG_3_wr_resp_iid_START (16)
#define SOC_VDEC_SMMU_MSTR_DBG_3_wr_resp_iid_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr_addr : 32;
    } reg;
} SOC_VDEC_SMMU_MSTR_DBG_4_UNION;
#endif
#define SOC_VDEC_SMMU_MSTR_DBG_4_wr_addr_START (0)
#define SOC_VDEC_SMMU_MSTR_DBG_4_wr_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int awid : 6;
        unsigned int reserved_0: 2;
        unsigned int awlen : 4;
        unsigned int reserved_1: 4;
        unsigned int wid : 6;
        unsigned int reserved_2: 2;
        unsigned int wdata_len : 4;
        unsigned int reserved_3: 4;
    } reg;
} SOC_VDEC_SMMU_MSTR_DBG_5_UNION;
#endif
#define SOC_VDEC_SMMU_MSTR_DBG_5_awid_START (0)
#define SOC_VDEC_SMMU_MSTR_DBG_5_awid_END (5)
#define SOC_VDEC_SMMU_MSTR_DBG_5_awlen_START (8)
#define SOC_VDEC_SMMU_MSTR_DBG_5_awlen_END (11)
#define SOC_VDEC_SMMU_MSTR_DBG_5_wid_START (16)
#define SOC_VDEC_SMMU_MSTR_DBG_5_wid_END (21)
#define SOC_VDEC_SMMU_MSTR_DBG_5_wdata_len_START (24)
#define SOC_VDEC_SMMU_MSTR_DBG_5_wdata_len_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int awaddr : 32;
    } reg;
} SOC_VDEC_SMMU_MSTR_DBG_6_UNION;
#endif
#define SOC_VDEC_SMMU_MSTR_DBG_6_awaddr_START (0)
#define SOC_VDEC_SMMU_MSTR_DBG_6_awaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbg_cfg_addr : 16;
        unsigned int dbg_cfg_cs : 1;
        unsigned int dbg_cfg_wr : 1;
        unsigned int reserved : 14;
    } reg;
} SOC_VDEC_SMMU_MSTR_DBG_PORT_IN_0_UNION;
#endif
#define SOC_VDEC_SMMU_MSTR_DBG_PORT_IN_0_dbg_cfg_addr_START (0)
#define SOC_VDEC_SMMU_MSTR_DBG_PORT_IN_0_dbg_cfg_addr_END (15)
#define SOC_VDEC_SMMU_MSTR_DBG_PORT_IN_0_dbg_cfg_cs_START (16)
#define SOC_VDEC_SMMU_MSTR_DBG_PORT_IN_0_dbg_cfg_cs_END (16)
#define SOC_VDEC_SMMU_MSTR_DBG_PORT_IN_0_dbg_cfg_wr_START (17)
#define SOC_VDEC_SMMU_MSTR_DBG_PORT_IN_0_dbg_cfg_wr_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbg_cfg_wdata : 32;
    } reg;
} SOC_VDEC_SMMU_MSTR_DBG_PORT_IN_1_UNION;
#endif
#define SOC_VDEC_SMMU_MSTR_DBG_PORT_IN_1_dbg_cfg_wdata_START (0)
#define SOC_VDEC_SMMU_MSTR_DBG_PORT_IN_1_dbg_cfg_wdata_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbg_cfg_rdata : 32;
    } reg;
} SOC_VDEC_SMMU_MSTR_DBG_PORT_OUT_UNION;
#endif
#define SOC_VDEC_SMMU_MSTR_DBG_PORT_OUT_dbg_cfg_rdata_START (0)
#define SOC_VDEC_SMMU_MSTR_DBG_PORT_OUT_dbg_cfg_rdata_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_cmd_total_cnt : 32;
    } reg;
} SOC_VDEC_RD_CMD_TOTAL_CNT_UNION;
#endif
#define SOC_VDEC_RD_CMD_TOTAL_CNT_rd_cmd_total_cnt_START (0)
#define SOC_VDEC_RD_CMD_TOTAL_CNT_rd_cmd_total_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_cmd_miss_cnt : 32;
    } reg;
} SOC_VDEC_RD_CMD_MISS_CNT_UNION;
#endif
#define SOC_VDEC_RD_CMD_MISS_CNT_rd_cmd_miss_cnt_START (0)
#define SOC_VDEC_RD_CMD_MISS_CNT_rd_cmd_miss_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_data_total_cnt : 32;
    } reg;
} SOC_VDEC_RD_DATA_TOTAL_CNT_UNION;
#endif
#define SOC_VDEC_RD_DATA_TOTAL_CNT_rd_data_total_cnt_START (0)
#define SOC_VDEC_RD_DATA_TOTAL_CNT_rd_data_total_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_cmd_case_cnt : 32;
    } reg;
} SOC_VDEC_RD_CMD_CASE_CNT_UNION;
#endif
#define SOC_VDEC_RD_CMD_CASE_CNT_rd_cmd_case_cnt_START (0)
#define SOC_VDEC_RD_CMD_CASE_CNT_rd_cmd_case_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_cmd_max_latency : 16;
        unsigned int rd_cmd_avg_latency : 16;
    } reg;
} SOC_VDEC_RD_CMD_TRANS_LATENCY_UNION;
#endif
#define SOC_VDEC_RD_CMD_TRANS_LATENCY_rd_cmd_max_latency_START (0)
#define SOC_VDEC_RD_CMD_TRANS_LATENCY_rd_cmd_max_latency_END (15)
#define SOC_VDEC_RD_CMD_TRANS_LATENCY_rd_cmd_avg_latency_START (16)
#define SOC_VDEC_RD_CMD_TRANS_LATENCY_rd_cmd_avg_latency_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr_cmd_total_cnt : 32;
    } reg;
} SOC_VDEC_WR_CMD_TOTAL_CNT_UNION;
#endif
#define SOC_VDEC_WR_CMD_TOTAL_CNT_wr_cmd_total_cnt_START (0)
#define SOC_VDEC_WR_CMD_TOTAL_CNT_wr_cmd_total_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr_cmd_miss_cnt : 32;
    } reg;
} SOC_VDEC_WR_CMD_MISS_CNT_UNION;
#endif
#define SOC_VDEC_WR_CMD_MISS_CNT_wr_cmd_miss_cnt_START (0)
#define SOC_VDEC_WR_CMD_MISS_CNT_wr_cmd_miss_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr_data_total_cnt : 32;
    } reg;
} SOC_VDEC_WR_DATA_TOTAL_CNT_UNION;
#endif
#define SOC_VDEC_WR_DATA_TOTAL_CNT_wr_data_total_cnt_START (0)
#define SOC_VDEC_WR_DATA_TOTAL_CNT_wr_data_total_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr_cmd_case_cnt : 32;
    } reg;
} SOC_VDEC_WR_CMD_CASE_CNT_UNION;
#endif
#define SOC_VDEC_WR_CMD_CASE_CNT_wr_cmd_case_cnt_START (0)
#define SOC_VDEC_WR_CMD_CASE_CNT_wr_cmd_case_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr_cmd_max_latency : 16;
        unsigned int wr_cmd_avg_latency : 16;
    } reg;
} SOC_VDEC_WR_CMD_TRANS_LATENCY_UNION;
#endif
#define SOC_VDEC_WR_CMD_TRANS_LATENCY_wr_cmd_max_latency_START (0)
#define SOC_VDEC_WR_CMD_TRANS_LATENCY_wr_cmd_max_latency_END (15)
#define SOC_VDEC_WR_CMD_TRANS_LATENCY_wr_cmd_avg_latency_START (16)
#define SOC_VDEC_WR_CMD_TRANS_LATENCY_wr_cmd_avg_latency_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vdh_video_standard_en : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VDEC_VDH_VIDEO_STANDARD_EN_UNION;
#endif
#define SOC_VDEC_VDH_VIDEO_STANDARD_EN_vdh_video_standard_en_START (0)
#define SOC_VDEC_VDH_VIDEO_STANDARD_EN_vdh_video_standard_en_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vdh_clken : 2;
        unsigned int vdh_dsp_clken : 2;
        unsigned int vdh_mmu_clken : 2;
        unsigned int vdh_bpd_clken : 2;
        unsigned int vdh_scd_clken : 2;
        unsigned int vdh_mfde_clken : 2;
        unsigned int reserved : 20;
    } reg;
} SOC_VDEC_VDH_CLKSEL_UNION;
#endif
#define SOC_VDEC_VDH_CLKSEL_vdh_clken_START (0)
#define SOC_VDEC_VDH_CLKSEL_vdh_clken_END (1)
#define SOC_VDEC_VDH_CLKSEL_vdh_dsp_clken_START (2)
#define SOC_VDEC_VDH_CLKSEL_vdh_dsp_clken_END (3)
#define SOC_VDEC_VDH_CLKSEL_vdh_mmu_clken_START (4)
#define SOC_VDEC_VDH_CLKSEL_vdh_mmu_clken_END (5)
#define SOC_VDEC_VDH_CLKSEL_vdh_bpd_clken_START (6)
#define SOC_VDEC_VDH_CLKSEL_vdh_bpd_clken_END (7)
#define SOC_VDEC_VDH_CLKSEL_vdh_scd_clken_START (8)
#define SOC_VDEC_VDH_CLKSEL_vdh_scd_clken_END (9)
#define SOC_VDEC_VDH_CLKSEL_vdh_mfde_clken_START (10)
#define SOC_VDEC_VDH_CLKSEL_vdh_mfde_clken_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vdh_apb_clken : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_VDEC_VDH_CRG_APB_CLKSEL_UNION;
#endif
#define SOC_VDEC_VDH_CRG_APB_CLKSEL_vdh_apb_clken_START (0)
#define SOC_VDEC_VDH_CRG_APB_CLKSEL_vdh_apb_clken_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vdh_all_srst_req : 1;
        unsigned int vdh_mfde_srst_req : 1;
        unsigned int vdh_scd_srst_req : 1;
        unsigned int vdh_bpd_srst_req : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_VDEC_VDH_SRST_REQ_UNION;
#endif
#define SOC_VDEC_VDH_SRST_REQ_vdh_all_srst_req_START (0)
#define SOC_VDEC_VDH_SRST_REQ_vdh_all_srst_req_END (0)
#define SOC_VDEC_VDH_SRST_REQ_vdh_mfde_srst_req_START (1)
#define SOC_VDEC_VDH_SRST_REQ_vdh_mfde_srst_req_END (1)
#define SOC_VDEC_VDH_SRST_REQ_vdh_scd_srst_req_START (2)
#define SOC_VDEC_VDH_SRST_REQ_vdh_scd_srst_req_END (2)
#define SOC_VDEC_VDH_SRST_REQ_vdh_bpd_srst_req_START (3)
#define SOC_VDEC_VDH_SRST_REQ_vdh_bpd_srst_req_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vdh_all_srst_ok : 1;
        unsigned int vdh_mfde_srst_ok : 1;
        unsigned int vdh_scd_srst_ok : 1;
        unsigned int vdh_bpd_srst_ok : 1;
        unsigned int vdh_idle : 1;
        unsigned int bpd_idle : 1;
        unsigned int scd_idle : 1;
        unsigned int mfde_idle : 1;
        unsigned int dsp_clk_locked : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_VDEC_VDH_SRST_ST_UNION;
#endif
#define SOC_VDEC_VDH_SRST_ST_vdh_all_srst_ok_START (0)
#define SOC_VDEC_VDH_SRST_ST_vdh_all_srst_ok_END (0)
#define SOC_VDEC_VDH_SRST_ST_vdh_mfde_srst_ok_START (1)
#define SOC_VDEC_VDH_SRST_ST_vdh_mfde_srst_ok_END (1)
#define SOC_VDEC_VDH_SRST_ST_vdh_scd_srst_ok_START (2)
#define SOC_VDEC_VDH_SRST_ST_vdh_scd_srst_ok_END (2)
#define SOC_VDEC_VDH_SRST_ST_vdh_bpd_srst_ok_START (3)
#define SOC_VDEC_VDH_SRST_ST_vdh_bpd_srst_ok_END (3)
#define SOC_VDEC_VDH_SRST_ST_vdh_idle_START (4)
#define SOC_VDEC_VDH_SRST_ST_vdh_idle_END (4)
#define SOC_VDEC_VDH_SRST_ST_bpd_idle_START (5)
#define SOC_VDEC_VDH_SRST_ST_bpd_idle_END (5)
#define SOC_VDEC_VDH_SRST_ST_scd_idle_START (6)
#define SOC_VDEC_VDH_SRST_ST_scd_idle_END (6)
#define SOC_VDEC_VDH_SRST_ST_mfde_idle_START (7)
#define SOC_VDEC_VDH_SRST_ST_mfde_idle_END (7)
#define SOC_VDEC_VDH_SRST_ST_dsp_clk_locked_START (8)
#define SOC_VDEC_VDH_SRST_ST_dsp_clk_locked_END (8)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
