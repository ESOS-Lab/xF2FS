#ifndef __SOC_ISP_ISPSS_CTRL_INTERFACE_H__
#define __SOC_ISP_ISPSS_CTRL_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_ISP_ISPSS_CTRL_IP_ID_ADDR(base) ((base) + (0x0000))
#define SOC_ISP_ISPSS_CTRL_VERSION_ID_ADDR(base) ((base) + (0x0004))
#define SOC_ISP_ISPSS_CTRL_REVISION_ID_ADDR(base) ((base) + (0x0008))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_ADDR(base) ((base) + (0x0010))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_ADDR(base) ((base) + (0x0014))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_ADDR(base) ((base) + (0x0018))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_ADDR(base) ((base) + (0x001C))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_ADDR(base) ((base) + (0x0020))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_ADDR(base) ((base) + (0x0024))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_ADDR(base) ((base) + (0x0028))
#define SOC_ISP_ISPSS_CTRL_EXTERNAL_ISP_RES_CTRL_ADDR(base) ((base) + (0x003C))
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_ADDR(base) ((base) + (0x0040))
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_ADDR(base) ((base) + (0x0044))
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_ADDR(base) ((base) + (0x0048))
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_ADDR(base) ((base) + (0x004C))
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_ADDR(base) ((base) + (0x0050))
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_ADDR(base) ((base) + (0x0054))
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_ADDR(base) ((base) + (0x0060))
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P1_ADDR(base) ((base) + (0x0064))
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P2_ADDR(base) ((base) + (0x0068))
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P1_ADDR(base) ((base) + (0x006C))
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P2_ADDR(base) ((base) + (0x0070))
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_ADDR(base) ((base) + (0x0074))
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_ADDR(base) ((base) + (0x0078))
#define SOC_ISP_ISPSS_CTRL_SMMU_CLK_CTRL_ADDR(base) ((base) + (0x008C))
#define SOC_ISP_ISPSS_CTRL_CONTROL_ADDR(base) ((base) + (0x0090))
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_ADDR(base) ((base) + (0x0094))
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_ADDR(base) ((base) + (0x0098))
#define SOC_ISP_ISPSS_CTRL_CVDR_RD_CTRL_ADDR(base) ((base) + (0x0100))
#define SOC_ISP_ISPSS_CTRL_CVDR_WR_CTRL_ADDR(base) ((base) + (0x0104))
#define SOC_ISP_ISPSS_CTRL_LST_LOW_ADDR(base) ((base) + (0x0120))
#define SOC_ISP_ISPSS_CTRL_LST_HIGH_ADDR(base) ((base) + (0x0124))
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P1_ADDR(base) ((base) + (0x0130))
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P2_ADDR(base) ((base) + (0x0134))
#define SOC_ISP_ISPSS_CTRL_IOTAP3_MAP_FE_P1_ADDR(base) ((base) + (0x0138))
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_FE_P2_ADDR(base) ((base) + (0x013C))
#define SOC_ISP_ISPSS_CTRL_CROP_H_3_P1_ADDR(base) ((base) + (0x0140))
#define SOC_ISP_ISPSS_CTRL_CROP_V_3_P1_ADDR(base) ((base) + (0x0144))
#define SOC_ISP_ISPSS_CTRL_CROP_H_3_P2_ADDR(base) ((base) + (0x0148))
#define SOC_ISP_ISPSS_CTRL_CROP_V_3_P2_ADDR(base) ((base) + (0x014C))
#define SOC_ISP_ISPSS_CTRL_GPO_ADDR(base) ((base) + (0x0160))
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_1_ADDR(base) ((base) + (0x0164))
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_2_ADDR(base) ((base) + (0x0168))
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_1_1_ADDR(base) ((base) + (0x0170))
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_1_2_ADDR(base) ((base) + (0x0174))
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_2_1_ADDR(base) ((base) + (0x0178))
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_2_2_ADDR(base) ((base) + (0x017C))
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_3_1_ADDR(base) ((base) + (0x0180))
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_3_2_ADDR(base) ((base) + (0x0184))
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_4_1_ADDR(base) ((base) + (0x0188))
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_4_2_ADDR(base) ((base) + (0x018C))
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_5_1_ADDR(base) ((base) + (0x0190))
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_5_2_ADDR(base) ((base) + (0x0194))
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_6_1_ADDR(base) ((base) + (0x0198))
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_6_2_ADDR(base) ((base) + (0x019C))
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_7_1_ADDR(base) ((base) + (0x01A0))
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_7_2_ADDR(base) ((base) + (0x01A4))
#define SOC_ISP_ISPSS_CTRL_PRE_DIV_ADDR(base) ((base) + (0x01B0))
#define SOC_ISP_ISPSS_CTRL_CROP_H_4_P1_ADDR(base) ((base) + (0x01B4))
#define SOC_ISP_ISPSS_CTRL_CROP_V_4_P1_ADDR(base) ((base) + (0x01B8))
#define SOC_ISP_ISPSS_CTRL_CROP_H_4_P2_ADDR(base) ((base) + (0x01BC))
#define SOC_ISP_ISPSS_CTRL_CROP_V_4_P2_ADDR(base) ((base) + (0x01C0))
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_1_ADDR(base) ((base) + (0x01D0))
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_2_ADDR(base) ((base) + (0x01D4))
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_ADDR(base) ((base) + (0x01D8))
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_ADDR(base) ((base) + (0x01E0))
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_ADDR(base) ((base) + (0x01E4))
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_ADDR(base) ((base) + (0x01E8))
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_ADDR(base) ((base) + (0x01EC))
#define SOC_ISP_ISPSS_CTRL_PTREG_2_1_ADDR(base) ((base) + (0x0200))
#define SOC_ISP_ISPSS_CTRL_PTREG_2_2_ADDR(base) ((base) + (0x0204))
#define SOC_ISP_ISPSS_CTRL_DSP_ISP_CTRL_P1_ADDR(base) ((base) + (0x0220))
#define SOC_ISP_ISPSS_CTRL_DSP_ISP_CTRL_P2_ADDR(base) ((base) + (0x0224))
#define SOC_ISP_ISPSS_CTRL_LST_LOW_CAM_1_SAMPLED_ADDR(base) ((base) + (0x0228))
#define SOC_ISP_ISPSS_CTRL_LST_HIGH_CAM_1_SAMPLED_ADDR(base) ((base) + (0x022C))
#define SOC_ISP_ISPSS_CTRL_LST_LOW_CAM_2_SAMPLED_ADDR(base) ((base) + (0x0230))
#define SOC_ISP_ISPSS_CTRL_LST_HIGH_CAM_2_SAMPLED_ADDR(base) ((base) + (0x0234))
#define SOC_ISP_ISPSS_CTRL_LST_LOW_CAM_3_SAMPLED_ADDR(base) ((base) + (0x0238))
#define SOC_ISP_ISPSS_CTRL_LST_HIGH_CAM_3_SAMPLED_ADDR(base) ((base) + (0x023C))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_ADDR(base) ((base) + (0x0240))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_SET_ADDR(base) ((base) + (0x0244))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_SET_ADDR(base) ((base) + (0x0248))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_SET_ADDR(base) ((base) + (0x024C))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_SET_ADDR(base) ((base) + (0x00250))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_ADDR(base) ((base) + (0x0254))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_ADDR(base) ((base) + (0x0258))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_ADDR(base) ((base) + (0x0270))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_CLEAR_ADDR(base) ((base) + (0x0274))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_CLEAR_ADDR(base) ((base) + (0x0278))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_CLEAR_ADDR(base) ((base) + (0x027C))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_CLEAR_ADDR(base) ((base) + (0x00280))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_ADDR(base) ((base) + (0x0284))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_ADDR(base) ((base) + (0x0288))
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_ADDR(base) ((base) + (0x02A0))
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_SET_ADDR(base) ((base) + (0x02A4))
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_ADDR(base) ((base) + (0x02A8))
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_SET_ADDR(base) ((base) + (0x02AC))
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_ADDR(base) ((base) + (0x02B0))
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_SET_ADDR(base) ((base) + (0x02B4))
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_ADDR(base) ((base) + (0x02D0))
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_CLEAR_ADDR(base) ((base) + (0x02D4))
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_ADDR(base) ((base) + (0x02D8))
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_CLEAR_ADDR(base) ((base) + (0x02DC))
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_ADDR(base) ((base) + (0x02E0))
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_CLEAR_ADDR(base) ((base) + (0x02E4))
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_SET_ADDR(base) ((base) + (0x00300))
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_SET_ADDR(base) ((base) + (0x0304))
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_CLEAR_ADDR(base) ((base) + (0x00310))
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_CLEAR_ADDR(base) ((base) + (0x0314))
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_1_SET_ADDR(base) ((base) + (0x0320))
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_2_SET_ADDR(base) ((base) + (0x0324))
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_SET_ADDR(base) ((base) + (0x0328))
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_1_CLEAR_ADDR(base) ((base) + (0x0340))
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_2_CLEAR_ADDR(base) ((base) + (0x0344))
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_CLEAR_ADDR(base) ((base) + (0x0348))
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_ADDR(base) ((base) + (0x0350))
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_OK_ADDR(base) ((base) + (0x0354))
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_JPEG_ADDR(base) ((base) + (0x0358))
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_OK_JPEG_ADDR(base) ((base) + (0x035C))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_HARDEN_ADDR(base) ((base) + (0x0364))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_HARDEN_SET_ADDR(base) ((base) + (0x0368))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_HARDEN_CLEAR_ADDR(base) ((base) + (0x036C))
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_P2_ADDR(base) ((base) + (0x0370))
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_HARDEN_ADDR(base) ((base) + (0x0374))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_DSP_ADDR(base) ((base) + (0x0380))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_DSP_SET_ADDR(base) ((base) + (0x0384))
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_DSP_CLEAR_ADDR(base) ((base) + (0x0388))
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_DSP_ADDR(base) ((base) + (0x038C))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_id : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_IP_ID_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_IP_ID_ip_id_START (0)
#define SOC_ISP_ISPSS_CTRL_IP_ID_ip_id_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_version : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_VERSION_ID_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_VERSION_ID_ip_version_START (0)
#define SOC_ISP_ISPSS_CTRL_VERSION_ID_ip_version_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ip_revision : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_REVISION_ID_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_REVISION_ID_ip_revision_START (0)
#define SOC_ISP_ISPSS_CTRL_REVISION_ID_ip_revision_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_prescaler : 1;
        unsigned int cgr_scaler_1_1 : 1;
        unsigned int cgr_fd : 1;
        unsigned int cgr_jpgenc : 1;
        unsigned int reserved_0 : 1;
        unsigned int cgr_cvdr_rt : 1;
        unsigned int cgr_stream_router : 1;
        unsigned int cgr_csi2if_a : 1;
        unsigned int cgr_csi2if_b : 1;
        unsigned int cgr_csi2if_c : 1;
        unsigned int cgr_i2c_2 : 1;
        unsigned int cgr_i2c_1 : 1;
        unsigned int cgr_i2c_3 : 1;
        unsigned int cgr_debug : 1;
        unsigned int cgr_cmdlst : 1;
        unsigned int cgr_fbdyuv_1 : 1;
        unsigned int cgr_warp : 1;
        unsigned int cgr_dmap_drbr : 1;
        unsigned int cgr_cvdr_srt : 1;
        unsigned int cgr_dmap_dgen : 1;
        unsigned int cgr_dmap_dopt : 1;
        unsigned int reserved_1 : 1;
        unsigned int cgr_top_wo_ispss_ctrl : 1;
        unsigned int reserved_2 : 9;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_prescaler_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_prescaler_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_scaler_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_scaler_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_fd_START (2)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_fd_END (2)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_jpgenc_START (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_jpgenc_END (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_cvdr_rt_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_cvdr_rt_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_stream_router_START (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_stream_router_END (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_csi2if_a_START (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_csi2if_a_END (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_csi2if_b_START (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_csi2if_b_END (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_csi2if_c_START (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_csi2if_c_END (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_i2c_2_START (10)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_i2c_2_END (10)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_i2c_1_START (11)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_i2c_1_END (11)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_i2c_3_START (12)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_i2c_3_END (12)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_debug_START (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_debug_END (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_cmdlst_START (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_cmdlst_END (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_fbdyuv_1_START (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_fbdyuv_1_END (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_warp_START (16)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_warp_END (16)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_dmap_drbr_START (17)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_dmap_drbr_END (17)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_cvdr_srt_START (18)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_cvdr_srt_END (18)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_dmap_dgen_START (19)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_dmap_dgen_END (19)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_dmap_dopt_START (20)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_dmap_dopt_END (20)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_top_wo_ispss_ctrl_START (22)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_cgr_top_wo_ispss_ctrl_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_fbcraw_1_1 : 1;
        unsigned int cgr_fbdraw_1_1 : 1;
        unsigned int cgr_fbcyuv_1_1 : 1;
        unsigned int cgr_fbdyuv_1_1 : 1;
        unsigned int cgr_arsr_1_1 : 1;
        unsigned int cgr_arsr_2_1 : 1;
        unsigned int cgr_fbcraw_2_1 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_cgr_fbcraw_1_1_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_cgr_fbcraw_1_1_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_cgr_fbdraw_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_cgr_fbdraw_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_cgr_fbcyuv_1_1_START (2)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_cgr_fbcyuv_1_1_END (2)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_cgr_fbdyuv_1_1_START (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_cgr_fbdyuv_1_1_END (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_cgr_arsr_1_1_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_cgr_arsr_1_1_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_cgr_arsr_2_1_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_cgr_arsr_2_1_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_cgr_fbcraw_2_1_START (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_cgr_fbcraw_2_1_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_fbcraw_1_2 : 1;
        unsigned int cgr_fbdraw_1_2 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int cgr_arsr_1_2 : 1;
        unsigned int reserved_2 : 1;
        unsigned int cgr_fbcraw_2_2 : 1;
        unsigned int reserved_3 : 25;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_cgr_fbcraw_1_2_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_cgr_fbcraw_1_2_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_cgr_fbdraw_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_cgr_fbdraw_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_cgr_arsr_1_2_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_cgr_arsr_1_2_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_cgr_fbcraw_2_2_START (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_cgr_fbcraw_2_2_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_blc_1_1 : 1;
        unsigned int cgr_dgamma_1_1 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int cgr_stat3a_1_1 : 1;
        unsigned int cgr_statdis_1_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int cgr_bas_1_1 : 1;
        unsigned int cgr_pdaf_1_1 : 1;
        unsigned int cgr_autocls_1_1 : 1;
        unsigned int cgr_bas_3_1 : 1;
        unsigned int reserved_3 : 21;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_cgr_blc_1_1_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_cgr_blc_1_1_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_cgr_dgamma_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_cgr_dgamma_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_cgr_stat3a_1_1_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_cgr_stat3a_1_1_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_cgr_statdis_1_1_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_cgr_statdis_1_1_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_cgr_bas_1_1_START (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_cgr_bas_1_1_END (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_cgr_pdaf_1_1_START (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_cgr_pdaf_1_1_END (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_cgr_autocls_1_1_START (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_cgr_autocls_1_1_END (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_cgr_bas_3_1_START (10)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_cgr_bas_3_1_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_blc_1_2 : 1;
        unsigned int cgr_dgamma_1_2 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int cgr_stat3a_1_2 : 1;
        unsigned int cgr_statdis_1_2 : 1;
        unsigned int reserved_2 : 1;
        unsigned int cgr_bas_1_2 : 1;
        unsigned int cgr_pdaf_1_2 : 1;
        unsigned int cgr_autocls_1_2 : 1;
        unsigned int reserved_3 : 22;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_cgr_blc_1_2_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_cgr_blc_1_2_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_cgr_dgamma_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_cgr_dgamma_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_cgr_stat3a_1_2_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_cgr_stat3a_1_2_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_cgr_statdis_1_2_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_cgr_statdis_1_2_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_cgr_bas_1_2_START (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_cgr_bas_1_2_END (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_cgr_pdaf_1_2_START (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_cgr_pdaf_1_2_END (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_cgr_autocls_1_2_START (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_cgr_autocls_1_2_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_awbgain_1_1 : 1;
        unsigned int cgr_gcd_1_1 : 1;
        unsigned int reserved_0 : 1;
        unsigned int cgr_cc_1_1 : 1;
        unsigned int cgr_drc_1_1 : 1;
        unsigned int cgr_gamma_1_1 : 1;
        unsigned int cgr_rgb2yuv_1_1 : 1;
        unsigned int cgr_uvdec_1_1 : 1;
        unsigned int cgr_ce_1_1 : 1;
        unsigned int cgr_yuvnf_1_1 : 1;
        unsigned int reserved_1 : 1;
        unsigned int cgr_tnr_1_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int cgr_lsc_1_1 : 1;
        unsigned int cgr_dpcc_1_1 : 1;
        unsigned int cgr_rawnf_1_1 : 1;
        unsigned int cgr_3dlut_1_1 : 1;
        unsigned int reserved_3 : 15;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_awbgain_1_1_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_awbgain_1_1_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_gcd_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_gcd_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_cc_1_1_START (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_cc_1_1_END (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_drc_1_1_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_drc_1_1_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_gamma_1_1_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_gamma_1_1_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_rgb2yuv_1_1_START (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_rgb2yuv_1_1_END (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_uvdec_1_1_START (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_uvdec_1_1_END (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_ce_1_1_START (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_ce_1_1_END (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_yuvnf_1_1_START (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_yuvnf_1_1_END (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_tnr_1_1_START (11)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_tnr_1_1_END (11)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_lsc_1_1_START (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_lsc_1_1_END (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_dpcc_1_1_START (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_dpcc_1_1_END (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_rawnf_1_1_START (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_rawnf_1_1_END (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_3dlut_1_1_START (16)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_cgr_3dlut_1_1_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_awbgain_1_2 : 1;
        unsigned int cgr_gcd_1_2 : 1;
        unsigned int reserved_0 : 1;
        unsigned int cgr_cc_1_2 : 1;
        unsigned int cgr_drc_1_2 : 1;
        unsigned int cgr_gamma_1_2 : 1;
        unsigned int cgr_rgb2yuv_1_2 : 1;
        unsigned int cgr_uvdec_1_2 : 1;
        unsigned int cgr_ce_1_2 : 1;
        unsigned int cgr_yuvnf_1_2 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int cgr_lsc_1_2 : 1;
        unsigned int cgr_dpcc_1_2 : 1;
        unsigned int cgr_rawnf_1_2 : 1;
        unsigned int cgr_3dlut_1_2 : 1;
        unsigned int reserved_4 : 15;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_awbgain_1_2_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_awbgain_1_2_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_gcd_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_gcd_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_cc_1_2_START (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_cc_1_2_END (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_drc_1_2_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_drc_1_2_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_gamma_1_2_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_gamma_1_2_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_rgb2yuv_1_2_START (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_rgb2yuv_1_2_END (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_uvdec_1_2_START (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_uvdec_1_2_END (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_ce_1_2_START (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_ce_1_2_END (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_yuvnf_1_2_START (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_yuvnf_1_2_END (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_lsc_1_2_START (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_lsc_1_2_END (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_dpcc_1_2_START (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_dpcc_1_2_END (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_rawnf_1_2_START (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_rawnf_1_2_END (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_3dlut_1_2_START (16)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_cgr_3dlut_1_2_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 1;
        unsigned int reserved_1: 31;
    } reg;
} SOC_ISP_ISPSS_CTRL_EXTERNAL_ISP_RES_CTRL_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int light_sleep_fe_1_wo_bas : 1;
        unsigned int light_sleep_bas_1_1 : 1;
        unsigned int light_sleep_be_1_wo_tnr : 1;
        unsigned int light_sleep_tnr_1_1 : 1;
        unsigned int light_sleep_arsr_1_1 : 1;
        unsigned int light_sleep_arsr_2_1 : 1;
        unsigned int light_sleep_cvdr_rt : 1;
        unsigned int reserved_0 : 1;
        unsigned int light_sleep_stream_router : 1;
        unsigned int light_sleep_prescaler : 1;
        unsigned int light_sleep_scaler_1_1 : 1;
        unsigned int light_sleep_jpgenc : 1;
        unsigned int light_sleep_fd : 1;
        unsigned int light_sleep_debug : 1;
        unsigned int light_sleep_fbcdraw_1_1 : 1;
        unsigned int light_sleep_fbcdyuv_1_1 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int light_sleep_fbcraw_2_1 : 1;
        unsigned int light_sleep_cvdr_srt : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int light_sleep_warp : 1;
        unsigned int light_sleep_dmap_drbr : 1;
        unsigned int light_sleep_dmap_dgen : 1;
        unsigned int light_sleep_dmap_dopt : 1;
        unsigned int light_sleep_yuvnf_1_1 : 1;
        unsigned int light_sleep_3dlut_1_1 : 1;
        unsigned int light_sleep_bas_3_1 : 1;
        unsigned int reserved_6 : 2;
    } reg;
} SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_fe_1_wo_bas_START (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_fe_1_wo_bas_END (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_bas_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_bas_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_be_1_wo_tnr_START (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_be_1_wo_tnr_END (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_tnr_1_1_START (3)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_tnr_1_1_END (3)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_arsr_1_1_START (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_arsr_1_1_END (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_arsr_2_1_START (5)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_arsr_2_1_END (5)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_cvdr_rt_START (6)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_cvdr_rt_END (6)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_stream_router_START (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_stream_router_END (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_prescaler_START (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_prescaler_END (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_scaler_1_1_START (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_scaler_1_1_END (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_jpgenc_START (11)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_jpgenc_END (11)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_fd_START (12)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_fd_END (12)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_debug_START (13)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_debug_END (13)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_fbcdraw_1_1_START (14)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_fbcdraw_1_1_END (14)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_fbcdyuv_1_1_START (15)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_fbcdyuv_1_1_END (15)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_fbcraw_2_1_START (19)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_fbcraw_2_1_END (19)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_cvdr_srt_START (20)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_cvdr_srt_END (20)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_warp_START (23)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_warp_END (23)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_dmap_drbr_START (24)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_dmap_drbr_END (24)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_dmap_dgen_START (25)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_dmap_dgen_END (25)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_dmap_dopt_START (26)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_dmap_dopt_END (26)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_yuvnf_1_1_START (27)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_yuvnf_1_1_END (27)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_3dlut_1_1_START (28)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_3dlut_1_1_END (28)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_bas_3_1_START (29)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_light_sleep_bas_3_1_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int light_sleep_fe_2_wo_bas : 1;
        unsigned int light_sleep_bas_1_2 : 1;
        unsigned int light_sleep_be_2_wo_tnr : 1;
        unsigned int reserved_0 : 1;
        unsigned int light_sleep_arsr_1_2 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int light_sleep_fbcdraw_1_2 : 1;
        unsigned int light_sleep_fbcraw_2_2 : 1;
        unsigned int light_sleep_yuvnf_1_2 : 1;
        unsigned int light_sleep_3dlut_1_2 : 1;
        unsigned int reserved_3 : 21;
    } reg;
} SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_light_sleep_fe_2_wo_bas_START (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_light_sleep_fe_2_wo_bas_END (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_light_sleep_bas_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_light_sleep_bas_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_light_sleep_be_2_wo_tnr_START (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_light_sleep_be_2_wo_tnr_END (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_light_sleep_arsr_1_2_START (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_light_sleep_arsr_1_2_END (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_light_sleep_fbcdraw_1_2_START (7)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_light_sleep_fbcdraw_1_2_END (7)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_light_sleep_fbcraw_2_2_START (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_light_sleep_fbcraw_2_2_END (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_light_sleep_yuvnf_1_2_START (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_light_sleep_yuvnf_1_2_END (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_light_sleep_3dlut_1_2_START (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_light_sleep_3dlut_1_2_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int deep_sleep_fe_1_wo_bas : 1;
        unsigned int deep_sleep_bas_1_1 : 1;
        unsigned int deep_sleep_be_1_wo_tnr : 1;
        unsigned int deep_sleep_tnr_1_1 : 1;
        unsigned int deep_sleep_arsr_1_1 : 1;
        unsigned int deep_sleep_arsr_2_1 : 1;
        unsigned int deep_sleep_cvdr_rt : 1;
        unsigned int reserved_0 : 1;
        unsigned int deep_sleep_stream_router : 1;
        unsigned int deep_sleep_prescaler : 1;
        unsigned int deep_sleep_scaler_1_1 : 1;
        unsigned int deep_sleep_jpgenc : 1;
        unsigned int deep_sleep_fd : 1;
        unsigned int deep_sleep_debug : 1;
        unsigned int deep_sleep_fbcdraw_1_1 : 1;
        unsigned int deep_sleep_fbcdyuv_1_1 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int deep_sleep_fbcraw_2_1 : 1;
        unsigned int deep_sleep_cvdr_srt : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int deep_sleep_warp : 1;
        unsigned int deep_sleep_dmap_drbr : 1;
        unsigned int deep_sleep_dmap_dgen : 1;
        unsigned int deep_sleep_dmap_dopt : 1;
        unsigned int deep_sleep_yuvnf_1_1 : 1;
        unsigned int deep_sleep_3dlut_1_1 : 1;
        unsigned int deep_sleep_bas_3_1 : 1;
        unsigned int reserved_6 : 2;
    } reg;
} SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_fe_1_wo_bas_START (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_fe_1_wo_bas_END (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_bas_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_bas_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_be_1_wo_tnr_START (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_be_1_wo_tnr_END (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_tnr_1_1_START (3)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_tnr_1_1_END (3)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_arsr_1_1_START (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_arsr_1_1_END (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_arsr_2_1_START (5)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_arsr_2_1_END (5)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_cvdr_rt_START (6)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_cvdr_rt_END (6)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_stream_router_START (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_stream_router_END (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_prescaler_START (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_prescaler_END (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_scaler_1_1_START (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_scaler_1_1_END (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_jpgenc_START (11)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_jpgenc_END (11)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_fd_START (12)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_fd_END (12)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_debug_START (13)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_debug_END (13)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_fbcdraw_1_1_START (14)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_fbcdraw_1_1_END (14)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_fbcdyuv_1_1_START (15)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_fbcdyuv_1_1_END (15)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_fbcraw_2_1_START (19)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_fbcraw_2_1_END (19)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_cvdr_srt_START (20)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_cvdr_srt_END (20)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_warp_START (23)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_warp_END (23)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_dmap_drbr_START (24)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_dmap_drbr_END (24)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_dmap_dgen_START (25)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_dmap_dgen_END (25)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_dmap_dopt_START (26)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_dmap_dopt_END (26)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_yuvnf_1_1_START (27)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_yuvnf_1_1_END (27)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_3dlut_1_1_START (28)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_3dlut_1_1_END (28)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_bas_3_1_START (29)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_deep_sleep_bas_3_1_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int deep_sleep_fe_2_wo_bas : 1;
        unsigned int deep_sleep_bas_1_2 : 1;
        unsigned int deep_sleep_be_2_wo_tnr : 1;
        unsigned int reserved_0 : 1;
        unsigned int deep_sleep_arsr_1_2 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int deep_sleep_fbcdraw_1_2 : 1;
        unsigned int deep_sleep_fbcraw_2_2 : 1;
        unsigned int deep_sleep_yuvnf_1_2 : 1;
        unsigned int deep_sleep_3dlut_1_2 : 1;
        unsigned int reserved_3 : 21;
    } reg;
} SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_deep_sleep_fe_2_wo_bas_START (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_deep_sleep_fe_2_wo_bas_END (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_deep_sleep_bas_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_deep_sleep_bas_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_deep_sleep_be_2_wo_tnr_START (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_deep_sleep_be_2_wo_tnr_END (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_deep_sleep_arsr_1_2_START (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_deep_sleep_arsr_1_2_END (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_deep_sleep_fbcdraw_1_2_START (7)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_deep_sleep_fbcdraw_1_2_END (7)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_deep_sleep_fbcraw_2_2_START (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_deep_sleep_fbcraw_2_2_END (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_deep_sleep_yuvnf_1_2_START (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_deep_sleep_yuvnf_1_2_END (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_deep_sleep_3dlut_1_2_START (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_deep_sleep_3dlut_1_2_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int power_down_fe_1_wo_bas : 1;
        unsigned int power_down_bas_1_1 : 1;
        unsigned int power_down_be_1_wo_tnr : 1;
        unsigned int power_down_tnr_1_1 : 1;
        unsigned int power_down_arsr_1_1 : 1;
        unsigned int power_down_arsr_2_1 : 1;
        unsigned int power_down_cvdr_rt : 1;
        unsigned int reserved_0 : 1;
        unsigned int power_down_stream_router : 1;
        unsigned int power_down_prescaler : 1;
        unsigned int power_down_scaler_1_1 : 1;
        unsigned int power_down_jpgenc : 1;
        unsigned int power_down_fd : 1;
        unsigned int power_down_debug : 1;
        unsigned int power_down_fbcdraw_1_1 : 1;
        unsigned int power_down_fbcdyuv_1_1 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int power_down_fbcraw_2_1 : 1;
        unsigned int power_down_cvdr_srt : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int power_down_warp : 1;
        unsigned int power_down_dmap_drbr : 1;
        unsigned int power_down_dmap_dgen : 1;
        unsigned int power_down_dmap_dopt : 1;
        unsigned int power_down_yuvnf_1_1 : 1;
        unsigned int power_down_3dlut_1_1 : 1;
        unsigned int power_down_bas_3_1 : 1;
        unsigned int reserved_6 : 2;
    } reg;
} SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_fe_1_wo_bas_START (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_fe_1_wo_bas_END (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_bas_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_bas_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_be_1_wo_tnr_START (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_be_1_wo_tnr_END (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_tnr_1_1_START (3)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_tnr_1_1_END (3)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_arsr_1_1_START (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_arsr_1_1_END (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_arsr_2_1_START (5)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_arsr_2_1_END (5)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_cvdr_rt_START (6)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_cvdr_rt_END (6)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_stream_router_START (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_stream_router_END (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_prescaler_START (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_prescaler_END (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_scaler_1_1_START (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_scaler_1_1_END (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_jpgenc_START (11)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_jpgenc_END (11)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_fd_START (12)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_fd_END (12)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_debug_START (13)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_debug_END (13)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_fbcdraw_1_1_START (14)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_fbcdraw_1_1_END (14)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_fbcdyuv_1_1_START (15)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_fbcdyuv_1_1_END (15)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_fbcraw_2_1_START (19)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_fbcraw_2_1_END (19)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_cvdr_srt_START (20)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_cvdr_srt_END (20)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_warp_START (23)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_warp_END (23)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_dmap_drbr_START (24)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_dmap_drbr_END (24)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_dmap_dgen_START (25)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_dmap_dgen_END (25)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_dmap_dopt_START (26)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_dmap_dopt_END (26)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_yuvnf_1_1_START (27)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_yuvnf_1_1_END (27)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_3dlut_1_1_START (28)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_3dlut_1_1_END (28)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_bas_3_1_START (29)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_power_down_bas_3_1_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int power_down_fe_2_wo_bas : 1;
        unsigned int power_down_bas_1_2 : 1;
        unsigned int power_down_be_2_wo_tnr : 1;
        unsigned int reserved_0 : 1;
        unsigned int power_down_arsr_1_2 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int power_down_fbcdraw_1_2 : 1;
        unsigned int power_down_fbcraw_2_2 : 1;
        unsigned int power_down_yuvnf_1_2 : 1;
        unsigned int power_down_3dlut_1_2 : 1;
        unsigned int reserved_3 : 21;
    } reg;
} SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_power_down_fe_2_wo_bas_START (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_power_down_fe_2_wo_bas_END (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_power_down_bas_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_power_down_bas_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_power_down_be_2_wo_tnr_START (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_power_down_be_2_wo_tnr_END (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_power_down_arsr_1_2_START (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_power_down_arsr_1_2_END (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_power_down_fbcdraw_1_2_START (7)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_power_down_fbcdraw_1_2_END (7)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_power_down_fbcraw_2_2_START (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_power_down_fbcraw_2_2_END (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_power_down_yuvnf_1_2_START (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_power_down_yuvnf_1_2_END (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_power_down_3dlut_1_2_START (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_power_down_3dlut_1_2_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rst_prescaler : 1;
        unsigned int rst_scaler_1_1 : 1;
        unsigned int rst_fd : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int rst_cvdr_rt : 1;
        unsigned int rst_stream_router : 1;
        unsigned int rst_csi2if_a : 1;
        unsigned int rst_csi2if_b : 1;
        unsigned int rst_csi2if_c : 1;
        unsigned int rst_i2c_2 : 1;
        unsigned int rst_i2c_1 : 1;
        unsigned int rst_i2c_3 : 1;
        unsigned int rst_ispfe_1 : 1;
        unsigned int rst_ispfe_2 : 1;
        unsigned int rst_ispbe_1 : 1;
        unsigned int rst_ispbe_2 : 1;
        unsigned int rst_cmdlst : 1;
        unsigned int rst_fbdyuv_1 : 1;
        unsigned int rst_warp : 1;
        unsigned int rst_dmap : 1;
        unsigned int rst_cvdr_srt : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 9;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_prescaler_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_prescaler_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_scaler_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_scaler_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_fd_START (2)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_fd_END (2)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_cvdr_rt_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_cvdr_rt_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_stream_router_START (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_stream_router_END (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_csi2if_a_START (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_csi2if_a_END (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_csi2if_b_START (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_csi2if_b_END (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_csi2if_c_START (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_csi2if_c_END (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_i2c_2_START (10)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_i2c_2_END (10)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_i2c_1_START (11)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_i2c_1_END (11)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_i2c_3_START (12)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_i2c_3_END (12)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_ispfe_1_START (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_ispfe_1_END (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_ispfe_2_START (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_ispfe_2_END (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_ispbe_1_START (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_ispbe_1_END (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_ispbe_2_START (16)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_ispbe_2_END (16)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_cmdlst_START (17)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_cmdlst_END (17)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_fbdyuv_1_START (18)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_fbdyuv_1_END (18)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_warp_START (19)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_warp_END (19)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_dmap_START (20)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_dmap_END (20)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_cvdr_srt_START (21)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_rst_cvdr_srt_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rst_fbdraw_1_1 : 1;
        unsigned int rst_fbcraw_1_1 : 1;
        unsigned int rst_fbdyuv_1_1 : 1;
        unsigned int rst_fbcyuv_1_1 : 1;
        unsigned int rst_arsr_1_1 : 1;
        unsigned int rst_arsr_2_1 : 1;
        unsigned int rst_fbcraw_2_1 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P1_rst_fbdraw_1_1_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P1_rst_fbdraw_1_1_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P1_rst_fbcraw_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P1_rst_fbcraw_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P1_rst_fbdyuv_1_1_START (2)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P1_rst_fbdyuv_1_1_END (2)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P1_rst_fbcyuv_1_1_START (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P1_rst_fbcyuv_1_1_END (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P1_rst_arsr_1_1_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P1_rst_arsr_1_1_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P1_rst_arsr_2_1_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P1_rst_arsr_2_1_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P1_rst_fbcraw_2_1_START (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P1_rst_fbcraw_2_1_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rst_fbdraw_1_2 : 1;
        unsigned int rst_fbcraw_1_2 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int rst_arsr_1_2 : 1;
        unsigned int reserved_2 : 1;
        unsigned int rst_fbcraw_2_2 : 1;
        unsigned int reserved_3 : 25;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P2_rst_fbdraw_1_2_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P2_rst_fbdraw_1_2_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P2_rst_fbcraw_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P2_rst_fbcraw_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P2_rst_arsr_1_2_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P2_rst_arsr_1_2_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P2_rst_fbcraw_2_2_START (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_TOP_P2_rst_fbcraw_2_2_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rst_blc_1_1 : 1;
        unsigned int rst_dgamma_1_1 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int rst_stat3a_1_1 : 1;
        unsigned int rst_statdis_1_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int rst_bas_1_1 : 1;
        unsigned int rst_pdaf_1_1 : 1;
        unsigned int rst_autocls_1_1 : 1;
        unsigned int rst_bas_3_1 : 1;
        unsigned int reserved_3 : 21;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P1_rst_blc_1_1_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P1_rst_blc_1_1_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P1_rst_dgamma_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P1_rst_dgamma_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P1_rst_stat3a_1_1_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P1_rst_stat3a_1_1_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P1_rst_statdis_1_1_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P1_rst_statdis_1_1_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P1_rst_bas_1_1_START (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P1_rst_bas_1_1_END (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P1_rst_pdaf_1_1_START (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P1_rst_pdaf_1_1_END (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P1_rst_autocls_1_1_START (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P1_rst_autocls_1_1_END (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P1_rst_bas_3_1_START (10)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P1_rst_bas_3_1_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rst_blc_1_2 : 1;
        unsigned int rst_dgamma_1_2 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int rst_stat3a_1_2 : 1;
        unsigned int rst_statdis_1_2 : 1;
        unsigned int reserved_2 : 1;
        unsigned int rst_bas_1_2 : 1;
        unsigned int rst_pdaf_1_2 : 1;
        unsigned int rst_autocls_1_2 : 1;
        unsigned int reserved_3 : 22;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P2_rst_blc_1_2_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P2_rst_blc_1_2_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P2_rst_dgamma_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P2_rst_dgamma_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P2_rst_stat3a_1_2_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P2_rst_stat3a_1_2_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P2_rst_statdis_1_2_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P2_rst_statdis_1_2_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P2_rst_bas_1_2_START (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P2_rst_bas_1_2_END (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P2_rst_pdaf_1_2_START (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P2_rst_pdaf_1_2_END (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P2_rst_autocls_1_2_START (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_FE_P2_rst_autocls_1_2_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rst_awbgain_1_1 : 1;
        unsigned int rst_gcd_1_1 : 1;
        unsigned int reserved_0 : 1;
        unsigned int rst_cc_1_1 : 1;
        unsigned int rst_drc_1_1 : 1;
        unsigned int rst_gamma_1_1 : 1;
        unsigned int rst_rgb2yuv_1_1 : 1;
        unsigned int rst_uvdec1_1 : 1;
        unsigned int rst_ce_1_1 : 1;
        unsigned int rst_yuvnf_1_1 : 1;
        unsigned int reserved_1 : 1;
        unsigned int rst_tnr_1_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int rst_lsc_1_1 : 1;
        unsigned int rst_dpcc_1_1 : 1;
        unsigned int rst_rawnf_1_1 : 1;
        unsigned int rst_3dlut_1_1 : 1;
        unsigned int reserved_3 : 15;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_awbgain_1_1_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_awbgain_1_1_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_gcd_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_gcd_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_cc_1_1_START (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_cc_1_1_END (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_drc_1_1_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_drc_1_1_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_gamma_1_1_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_gamma_1_1_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_rgb2yuv_1_1_START (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_rgb2yuv_1_1_END (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_uvdec1_1_START (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_uvdec1_1_END (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_ce_1_1_START (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_ce_1_1_END (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_yuvnf_1_1_START (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_yuvnf_1_1_END (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_tnr_1_1_START (11)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_tnr_1_1_END (11)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_lsc_1_1_START (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_lsc_1_1_END (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_dpcc_1_1_START (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_dpcc_1_1_END (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_rawnf_1_1_START (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_rawnf_1_1_END (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_3dlut_1_1_START (16)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P1_rst_3dlut_1_1_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rst_awbgain_1_2 : 1;
        unsigned int rst_gcd_1_2 : 1;
        unsigned int reserved_0 : 1;
        unsigned int rst_cc_1_2 : 1;
        unsigned int rst_drc_1_2 : 1;
        unsigned int rst_gamma_1_2 : 1;
        unsigned int rst_rgb2yuv_1_2 : 1;
        unsigned int rst_uvdec1_2 : 1;
        unsigned int rst_ce_1_2 : 1;
        unsigned int rst_yuvnf_1_2 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int rst_lsc_1_2 : 1;
        unsigned int rst_dpcc_1_2 : 1;
        unsigned int rst_rawnf_1_2 : 1;
        unsigned int rst_3dlut_1_2 : 1;
        unsigned int reserved_4 : 15;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_awbgain_1_2_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_awbgain_1_2_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_gcd_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_gcd_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_cc_1_2_START (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_cc_1_2_END (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_drc_1_2_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_drc_1_2_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_gamma_1_2_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_gamma_1_2_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_rgb2yuv_1_2_START (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_rgb2yuv_1_2_END (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_uvdec1_2_START (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_uvdec1_2_END (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_ce_1_2_START (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_ce_1_2_END (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_yuvnf_1_2_START (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_yuvnf_1_2_END (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_lsc_1_2_START (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_lsc_1_2_END (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_dpcc_1_2_START (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_dpcc_1_2_END (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_rawnf_1_2_START (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_rawnf_1_2_END (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_3dlut_1_2_START (16)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_BE_P2_rst_3dlut_1_2_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int force_clk_on_smmu : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 30;
    } reg;
} SOC_ISP_ISPSS_CTRL_SMMU_CLK_CTRL_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_SMMU_CLK_CTRL_force_clk_on_smmu_START (0)
#define SOC_ISP_ISPSS_CTRL_SMMU_CLK_CTRL_force_clk_on_smmu_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 2;
        unsigned int fd_image_size : 2;
        unsigned int flash_mode : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 3;
        unsigned int disable_axi_data_packing : 1;
        unsigned int spare : 2;
        unsigned int reserved_3 : 20;
    } reg;
} SOC_ISP_ISPSS_CTRL_CONTROL_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_CONTROL_fd_image_size_START (2)
#define SOC_ISP_ISPSS_CTRL_CONTROL_fd_image_size_END (3)
#define SOC_ISP_ISPSS_CTRL_CONTROL_flash_mode_START (4)
#define SOC_ISP_ISPSS_CTRL_CONTROL_flash_mode_END (4)
#define SOC_ISP_ISPSS_CTRL_CONTROL_disable_axi_data_packing_START (9)
#define SOC_ISP_ISPSS_CTRL_CONTROL_disable_axi_data_packing_END (9)
#define SOC_ISP_ISPSS_CTRL_CONTROL_spare_START (10)
#define SOC_ISP_ISPSS_CTRL_CONTROL_spare_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int isp_be_arsr_1_1 : 1;
        unsigned int isp_be_arsr_2_1 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 2;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int isp_be_scaler_1_1 : 1;
        unsigned int isp_be_yuvnf_1_1 : 1;
        unsigned int isp_warp_arsr_1_1 : 1;
        unsigned int isp_warp_arsr_2_1 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
        unsigned int reserved_13 : 1;
        unsigned int spare : 2;
        unsigned int vps_yuv420_1 : 1;
        unsigned int reserved_14 : 8;
    } reg;
} SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_isp_be_arsr_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_isp_be_arsr_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_isp_be_arsr_2_1_START (2)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_isp_be_arsr_2_1_END (2)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_isp_be_scaler_1_1_START (11)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_isp_be_scaler_1_1_END (11)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_isp_be_yuvnf_1_1_START (12)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_isp_be_yuvnf_1_1_END (12)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_isp_warp_arsr_1_1_START (13)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_isp_warp_arsr_1_1_END (13)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_isp_warp_arsr_2_1_START (14)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_isp_warp_arsr_2_1_END (14)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_spare_START (21)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_spare_END (22)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_vps_yuv420_1_START (23)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_vps_yuv420_1_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int isp_be_arsr_1_2 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 2;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 5;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 3;
        unsigned int spare : 2;
        unsigned int vps_yuv420_2 : 1;
        unsigned int reserved_13 : 8;
    } reg;
} SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_isp_be_arsr_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_isp_be_arsr_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_spare_START (21)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_spare_END (22)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_vps_yuv420_2_START (23)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_vps_yuv420_2_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 1;
        unsigned int reserved_1: 1;
        unsigned int reserved_2: 1;
        unsigned int reserved_3: 1;
        unsigned int reserved_4: 1;
        unsigned int reserved_5: 1;
        unsigned int reserved_6: 1;
        unsigned int reserved_7: 1;
        unsigned int reserved_8: 1;
        unsigned int reserved_9: 1;
        unsigned int reserved_10: 22;
    } reg;
} SOC_ISP_ISPSS_CTRL_CVDR_RD_CTRL_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 1;
        unsigned int reserved_1: 1;
        unsigned int reserved_2: 1;
        unsigned int reserved_3: 1;
        unsigned int reserved_4: 2;
        unsigned int reserved_5: 1;
        unsigned int reserved_6: 1;
        unsigned int reserved_7: 1;
        unsigned int reserved_8: 1;
        unsigned int reserved_9: 1;
        unsigned int reserved_10: 1;
        unsigned int reserved_11: 1;
        unsigned int reserved_12: 1;
        unsigned int reserved_13: 1;
        unsigned int reserved_14: 1;
        unsigned int reserved_15: 1;
        unsigned int reserved_16: 1;
        unsigned int reserved_17: 1;
        unsigned int reserved_18: 1;
        unsigned int reserved_19: 1;
        unsigned int reserved_20: 1;
        unsigned int reserved_21: 1;
        unsigned int reserved_22: 1;
        unsigned int reserved_23: 1;
        unsigned int reserved_24: 1;
        unsigned int reserved_25: 1;
        unsigned int reserved_26: 1;
        unsigned int reserved_27: 1;
        unsigned int reserved_28: 3;
    } reg;
} SOC_ISP_ISPSS_CTRL_CVDR_WR_CTRL_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lst_low : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_LST_LOW_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_LST_LOW_lst_low_START (0)
#define SOC_ISP_ISPSS_CTRL_LST_LOW_lst_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lst_high : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_LST_HIGH_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_LST_HIGH_lst_high_START (0)
#define SOC_ISP_ISPSS_CTRL_LST_HIGH_lst_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pos_out_sel_1 : 4;
        unsigned int reserved_0 : 4;
        unsigned int pos_in_sel_1 : 4;
        unsigned int dsp_pos_in_sel_1 : 4;
        unsigned int pos_out_sel_2 : 4;
        unsigned int reserved_1 : 4;
        unsigned int pos_in_sel_2 : 4;
        unsigned int reserved_2 : 4;
    } reg;
} SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P1_pos_out_sel_1_START (0)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P1_pos_out_sel_1_END (3)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P1_pos_in_sel_1_START (8)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P1_pos_in_sel_1_END (11)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P1_dsp_pos_in_sel_1_START (12)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P1_dsp_pos_in_sel_1_END (15)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P1_pos_out_sel_2_START (16)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P1_pos_out_sel_2_END (19)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P1_pos_in_sel_2_START (24)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P1_pos_in_sel_2_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pos_out_sel_1 : 4;
        unsigned int reserved_0 : 4;
        unsigned int pos_in_sel_1 : 4;
        unsigned int dsp_pos_in_sel_1 : 4;
        unsigned int pos_out_sel_2 : 4;
        unsigned int reserved_1 : 4;
        unsigned int pos_in_sel_2 : 4;
        unsigned int reserved_2 : 4;
    } reg;
} SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P2_pos_out_sel_1_START (0)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P2_pos_out_sel_1_END (3)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P2_pos_in_sel_1_START (8)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P2_pos_in_sel_1_END (11)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P2_dsp_pos_in_sel_1_START (12)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P2_dsp_pos_in_sel_1_END (15)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P2_pos_out_sel_2_START (16)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P2_pos_out_sel_2_END (19)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P2_pos_in_sel_2_START (24)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_P2_pos_in_sel_2_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pos_out_sel_3 : 4;
        unsigned int reserved_0 : 4;
        unsigned int pos_in_sel_3 : 4;
        unsigned int dsp_pos_in_sel_3 : 4;
        unsigned int reserved_1 : 16;
    } reg;
} SOC_ISP_ISPSS_CTRL_IOTAP3_MAP_FE_P1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_IOTAP3_MAP_FE_P1_pos_out_sel_3_START (0)
#define SOC_ISP_ISPSS_CTRL_IOTAP3_MAP_FE_P1_pos_out_sel_3_END (3)
#define SOC_ISP_ISPSS_CTRL_IOTAP3_MAP_FE_P1_pos_in_sel_3_START (8)
#define SOC_ISP_ISPSS_CTRL_IOTAP3_MAP_FE_P1_pos_in_sel_3_END (11)
#define SOC_ISP_ISPSS_CTRL_IOTAP3_MAP_FE_P1_dsp_pos_in_sel_3_START (12)
#define SOC_ISP_ISPSS_CTRL_IOTAP3_MAP_FE_P1_dsp_pos_in_sel_3_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pos_out_sel_3 : 4;
        unsigned int reserved_0 : 4;
        unsigned int pos_in_sel_3 : 4;
        unsigned int dsp_pos_in_sel_3 : 4;
        unsigned int reserved_1 : 16;
    } reg;
} SOC_ISP_ISPSS_CTRL_IOTAP_MAP_FE_P2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_FE_P2_pos_out_sel_3_START (0)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_FE_P2_pos_out_sel_3_END (3)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_FE_P2_pos_in_sel_3_START (8)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_FE_P2_pos_in_sel_3_END (11)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_FE_P2_dsp_pos_in_sel_3_START (12)
#define SOC_ISP_ISPSS_CTRL_IOTAP_MAP_FE_P2_dsp_pos_in_sel_3_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 13;
        unsigned int reserved_1: 3;
        unsigned int reserved_2: 13;
        unsigned int reserved_3: 3;
    } reg;
} SOC_ISP_ISPSS_CTRL_CROP_H_3_P1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 13;
        unsigned int reserved_1: 3;
        unsigned int reserved_2: 13;
        unsigned int reserved_3: 3;
    } reg;
} SOC_ISP_ISPSS_CTRL_CROP_V_3_P1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 13;
        unsigned int reserved_1: 3;
        unsigned int reserved_2: 13;
        unsigned int reserved_3: 3;
    } reg;
} SOC_ISP_ISPSS_CTRL_CROP_H_3_P2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 13;
        unsigned int reserved_1: 3;
        unsigned int reserved_2: 13;
        unsigned int reserved_3: 3;
    } reg;
} SOC_ISP_ISPSS_CTRL_CROP_V_3_P2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gpo0 : 1;
        unsigned int gpo1 : 1;
        unsigned int gpo2 : 1;
        unsigned int gpo3 : 1;
        unsigned int gpo4 : 1;
        unsigned int gpo5 : 1;
        unsigned int gpo6 : 1;
        unsigned int gpo7 : 1;
        unsigned int gpo8 : 1;
        unsigned int gpo9 : 1;
        unsigned int gpo10 : 1;
        unsigned int gpo11 : 1;
        unsigned int gpo12 : 1;
        unsigned int reserved : 19;
    } reg;
} SOC_ISP_ISPSS_CTRL_GPO_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_GPO_gpo0_START (0)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo0_END (0)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo1_START (1)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo1_END (1)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo2_START (2)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo2_END (2)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo3_START (3)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo3_END (3)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo4_START (4)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo4_END (4)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo5_START (5)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo5_END (5)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo6_START (6)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo6_END (6)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo7_START (7)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo7_END (7)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo8_START (8)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo8_END (8)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo9_START (9)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo9_END (9)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo10_START (10)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo10_END (10)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo11_START (11)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo11_END (11)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo12_START (12)
#define SOC_ISP_ISPSS_CTRL_GPO_gpo12_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gpo2_sel : 2;
        unsigned int gpo3_sel : 2;
        unsigned int gpo4_sel : 2;
        unsigned int gpo5_sel : 2;
        unsigned int reserved_0: 2;
        unsigned int gpo10_sel : 2;
        unsigned int gpo11_sel : 2;
        unsigned int gpo12_sel : 2;
        unsigned int reserved_1: 16;
    } reg;
} SOC_ISP_ISPSS_CTRL_GPO_CTRL_1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_1_gpo2_sel_START (0)
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_1_gpo2_sel_END (1)
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_1_gpo3_sel_START (2)
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_1_gpo3_sel_END (3)
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_1_gpo4_sel_START (4)
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_1_gpo4_sel_END (5)
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_1_gpo5_sel_START (6)
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_1_gpo5_sel_END (7)
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_1_gpo10_sel_START (10)
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_1_gpo10_sel_END (11)
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_1_gpo11_sel_START (12)
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_1_gpo11_sel_END (13)
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_1_gpo12_sel_START (14)
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_1_gpo12_sel_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mode_repeat : 7;
        unsigned int reserved_0 : 1;
        unsigned int pwm_mode : 7;
        unsigned int reserved_1 : 1;
        unsigned int start : 7;
        unsigned int reserved_2 : 9;
    } reg;
} SOC_ISP_ISPSS_CTRL_GPO_CTRL_2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_2_mode_repeat_START (0)
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_2_mode_repeat_END (6)
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_2_pwm_mode_START (8)
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_2_pwm_mode_END (14)
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_2_start_START (16)
#define SOC_ISP_ISPSS_CTRL_GPO_CTRL_2_start_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_gpo5_seq_pat_1 : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_1_1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_1_1_pwm_gpo5_seq_pat_1_START (0)
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_1_1_pwm_gpo5_seq_pat_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_gpo5_seq_pat_2 : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_1_2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_1_2_pwm_gpo5_seq_pat_2_START (0)
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_1_2_pwm_gpo5_seq_pat_2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_gpo4_seq_pat_1 : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_2_1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_2_1_pwm_gpo4_seq_pat_1_START (0)
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_2_1_pwm_gpo4_seq_pat_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_gpo4_seq_pat_2 : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_2_2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_2_2_pwm_gpo4_seq_pat_2_START (0)
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_2_2_pwm_gpo4_seq_pat_2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_gpo2_seq_pat_1 : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_3_1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_3_1_pwm_gpo2_seq_pat_1_START (0)
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_3_1_pwm_gpo2_seq_pat_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_gpo2_seq_pat_2 : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_3_2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_3_2_pwm_gpo2_seq_pat_2_START (0)
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_3_2_pwm_gpo2_seq_pat_2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_gpo3_seq_pat_1 : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_4_1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_4_1_pwm_gpo3_seq_pat_1_START (0)
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_4_1_pwm_gpo3_seq_pat_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_gpo3_seq_pat_2 : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_4_2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_4_2_pwm_gpo3_seq_pat_2_START (0)
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_4_2_pwm_gpo3_seq_pat_2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_gpo6_seq_pat_1 : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_5_1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_5_1_pwm_gpo6_seq_pat_1_START (0)
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_5_1_pwm_gpo6_seq_pat_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_gpo6_seq_pat_2 : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_5_2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_5_2_pwm_gpo6_seq_pat_2_START (0)
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_5_2_pwm_gpo6_seq_pat_2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_gpo11_seq_pat_1 : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_6_1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_6_1_pwm_gpo11_seq_pat_1_START (0)
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_6_1_pwm_gpo11_seq_pat_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_gpo11_seq_pat_2 : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_6_2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_6_2_pwm_gpo11_seq_pat_2_START (0)
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_6_2_pwm_gpo11_seq_pat_2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_gpo12_seq_pat_1 : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_7_1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_7_1_pwm_gpo12_seq_pat_1_START (0)
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_7_1_pwm_gpo12_seq_pat_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwm_gpo12_seq_pat_2 : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_7_2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_7_2_pwm_gpo12_seq_pat_2_START (0)
#define SOC_ISP_ISPSS_CTRL_PATTERN_CTRL_7_2_pwm_gpo12_seq_pat_2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int prediv : 27;
        unsigned int reserved : 5;
    } reg;
} SOC_ISP_ISPSS_CTRL_PRE_DIV_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PRE_DIV_prediv_START (0)
#define SOC_ISP_ISPSS_CTRL_PRE_DIV_prediv_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ihleft : 13;
        unsigned int reserved_0: 3;
        unsigned int ihright : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_ISP_ISPSS_CTRL_CROP_H_4_P1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_CROP_H_4_P1_ihleft_START (0)
#define SOC_ISP_ISPSS_CTRL_CROP_H_4_P1_ihleft_END (12)
#define SOC_ISP_ISPSS_CTRL_CROP_H_4_P1_ihright_START (16)
#define SOC_ISP_ISPSS_CTRL_CROP_H_4_P1_ihright_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ivtop : 13;
        unsigned int reserved_0: 3;
        unsigned int ivbottom : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_ISP_ISPSS_CTRL_CROP_V_4_P1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_CROP_V_4_P1_ivtop_START (0)
#define SOC_ISP_ISPSS_CTRL_CROP_V_4_P1_ivtop_END (12)
#define SOC_ISP_ISPSS_CTRL_CROP_V_4_P1_ivbottom_START (16)
#define SOC_ISP_ISPSS_CTRL_CROP_V_4_P1_ivbottom_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ihleft : 13;
        unsigned int reserved_0: 3;
        unsigned int ihright : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_ISP_ISPSS_CTRL_CROP_H_4_P2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_CROP_H_4_P2_ihleft_START (0)
#define SOC_ISP_ISPSS_CTRL_CROP_H_4_P2_ihleft_END (12)
#define SOC_ISP_ISPSS_CTRL_CROP_H_4_P2_ihright_START (16)
#define SOC_ISP_ISPSS_CTRL_CROP_H_4_P2_ihright_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ivtop : 13;
        unsigned int reserved_0: 3;
        unsigned int ivbottom : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_ISP_ISPSS_CTRL_CROP_V_4_P2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_CROP_V_4_P2_ivtop_START (0)
#define SOC_ISP_ISPSS_CTRL_CROP_V_4_P2_ivtop_END (12)
#define SOC_ISP_ISPSS_CTRL_CROP_V_4_P2_ivbottom_START (16)
#define SOC_ISP_ISPSS_CTRL_CROP_V_4_P2_ivbottom_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 2;
        unsigned int reserved_1 : 2;
        unsigned int ctrl_vpbg_6_1 : 2;
        unsigned int reserved_2 : 2;
        unsigned int ctrl_vpbg_8_1 : 2;
        unsigned int reserved_3 : 2;
        unsigned int reserved_4 : 2;
        unsigned int reserved_5 : 2;
        unsigned int reserved_6 : 2;
        unsigned int reserved_7 : 2;
        unsigned int reserved_8 : 2;
        unsigned int reserved_9 : 2;
        unsigned int reserved_10 : 2;
        unsigned int reserved_11 : 2;
        unsigned int reserved_12 : 2;
        unsigned int reserved_13 : 2;
    } reg;
} SOC_ISP_ISPSS_CTRL_VPBG_CTRL_1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_1_ctrl_vpbg_6_1_START (4)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_1_ctrl_vpbg_6_1_END (5)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_1_ctrl_vpbg_8_1_START (8)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_1_ctrl_vpbg_8_1_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 2;
        unsigned int reserved_1: 2;
        unsigned int reserved_2: 2;
        unsigned int reserved_3: 10;
        unsigned int reserved_4: 2;
        unsigned int reserved_5: 2;
        unsigned int reserved_6: 2;
        unsigned int reserved_7: 2;
        unsigned int reserved_8: 2;
        unsigned int reserved_9: 2;
        unsigned int reserved_10: 2;
        unsigned int reserved_11: 2;
    } reg;
} SOC_ISP_ISPSS_CTRL_VPBG_CTRL_2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ctrl_vpbg_37_1 : 3;
        unsigned int ctrl_vpbg_37_2 : 3;
        unsigned int reserved_0 : 2;
        unsigned int reserved_1 : 3;
        unsigned int reserved_2 : 1;
        unsigned int ctrl_vpbg_9_1 : 2;
        unsigned int reserved_3 : 18;
    } reg;
} SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_ctrl_vpbg_37_1_START (0)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_ctrl_vpbg_37_1_END (2)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_ctrl_vpbg_37_2_START (3)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_ctrl_vpbg_37_2_END (5)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_ctrl_vpbg_9_1_START (12)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_ctrl_vpbg_9_1_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rxactivehs_0 : 1;
        unsigned int rxactivehs_1 : 1;
        unsigned int rxactivehs_2 : 1;
        unsigned int rxactivehs_3 : 1;
        unsigned int rxlpdtesc_0 : 1;
        unsigned int rxlpdtesc_1 : 1;
        unsigned int rxlpdtesc_2 : 1;
        unsigned int rxlpdtesc_3 : 1;
        unsigned int ulpsactivenot_0 : 1;
        unsigned int ulpsactivenot_1 : 1;
        unsigned int ulpsactivenot_2 : 1;
        unsigned int ulpsactivenot_3 : 1;
        unsigned int errsyncesc_0 : 1;
        unsigned int errsyncesc_1 : 1;
        unsigned int errsyncesc_2 : 1;
        unsigned int errsyncesc_3 : 1;
        unsigned int ulpsactivenotclk : 1;
        unsigned int reserved : 15;
    } reg;
} SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_rxactivehs_0_START (0)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_rxactivehs_0_END (0)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_rxactivehs_1_START (1)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_rxactivehs_1_END (1)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_rxactivehs_2_START (2)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_rxactivehs_2_END (2)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_rxactivehs_3_START (3)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_rxactivehs_3_END (3)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_rxlpdtesc_0_START (4)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_rxlpdtesc_0_END (4)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_rxlpdtesc_1_START (5)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_rxlpdtesc_1_END (5)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_rxlpdtesc_2_START (6)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_rxlpdtesc_2_END (6)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_rxlpdtesc_3_START (7)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_rxlpdtesc_3_END (7)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_ulpsactivenot_0_START (8)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_ulpsactivenot_0_END (8)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_ulpsactivenot_1_START (9)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_ulpsactivenot_1_END (9)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_ulpsactivenot_2_START (10)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_ulpsactivenot_2_END (10)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_ulpsactivenot_3_START (11)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_ulpsactivenot_3_END (11)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_errsyncesc_0_START (12)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_errsyncesc_0_END (12)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_errsyncesc_1_START (13)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_errsyncesc_1_END (13)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_errsyncesc_2_START (14)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_errsyncesc_2_END (14)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_errsyncesc_3_START (15)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_errsyncesc_3_END (15)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_ulpsactivenotclk_START (16)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_A_DBG_ulpsactivenotclk_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rxactivehs_0 : 1;
        unsigned int rxactivehs_1 : 1;
        unsigned int rxactivehs_2 : 1;
        unsigned int rxactivehs_3 : 1;
        unsigned int rxlpdtesc_0 : 1;
        unsigned int rxlpdtesc_1 : 1;
        unsigned int rxlpdtesc_2 : 1;
        unsigned int rxlpdtesc_3 : 1;
        unsigned int ulpsactivenot_0 : 1;
        unsigned int ulpsactivenot_1 : 1;
        unsigned int ulpsactivenot_2 : 1;
        unsigned int ulpsactivenot_3 : 1;
        unsigned int errsyncesc_0 : 1;
        unsigned int errsyncesc_1 : 1;
        unsigned int errsyncesc_2 : 1;
        unsigned int errsyncesc_3 : 1;
        unsigned int ulpsactivenotclk : 1;
        unsigned int reserved : 15;
    } reg;
} SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_rxactivehs_0_START (0)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_rxactivehs_0_END (0)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_rxactivehs_1_START (1)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_rxactivehs_1_END (1)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_rxactivehs_2_START (2)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_rxactivehs_2_END (2)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_rxactivehs_3_START (3)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_rxactivehs_3_END (3)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_rxlpdtesc_0_START (4)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_rxlpdtesc_0_END (4)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_rxlpdtesc_1_START (5)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_rxlpdtesc_1_END (5)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_rxlpdtesc_2_START (6)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_rxlpdtesc_2_END (6)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_rxlpdtesc_3_START (7)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_rxlpdtesc_3_END (7)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_ulpsactivenot_0_START (8)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_ulpsactivenot_0_END (8)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_ulpsactivenot_1_START (9)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_ulpsactivenot_1_END (9)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_ulpsactivenot_2_START (10)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_ulpsactivenot_2_END (10)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_ulpsactivenot_3_START (11)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_ulpsactivenot_3_END (11)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_errsyncesc_0_START (12)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_errsyncesc_0_END (12)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_errsyncesc_1_START (13)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_errsyncesc_1_END (13)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_errsyncesc_2_START (14)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_errsyncesc_2_END (14)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_errsyncesc_3_START (15)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_errsyncesc_3_END (15)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_ulpsactivenotclk_START (16)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_B_DBG_ulpsactivenotclk_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rxactivehs_0 : 1;
        unsigned int rxactivehs_1 : 1;
        unsigned int rxactivehs_2 : 1;
        unsigned int rxactivehs_3 : 1;
        unsigned int rxlpdtesc_0 : 1;
        unsigned int rxlpdtesc_1 : 1;
        unsigned int rxlpdtesc_2 : 1;
        unsigned int rxlpdtesc_3 : 1;
        unsigned int ulpsactivenot_0 : 1;
        unsigned int ulpsactivenot_1 : 1;
        unsigned int ulpsactivenot_2 : 1;
        unsigned int ulpsactivenot_3 : 1;
        unsigned int errsyncesc_0 : 1;
        unsigned int errsyncesc_1 : 1;
        unsigned int errsyncesc_2 : 1;
        unsigned int errsyncesc_3 : 1;
        unsigned int ulpsactivenotclk : 1;
        unsigned int reserved : 15;
    } reg;
} SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_rxactivehs_0_START (0)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_rxactivehs_0_END (0)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_rxactivehs_1_START (1)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_rxactivehs_1_END (1)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_rxactivehs_2_START (2)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_rxactivehs_2_END (2)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_rxactivehs_3_START (3)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_rxactivehs_3_END (3)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_rxlpdtesc_0_START (4)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_rxlpdtesc_0_END (4)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_rxlpdtesc_1_START (5)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_rxlpdtesc_1_END (5)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_rxlpdtesc_2_START (6)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_rxlpdtesc_2_END (6)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_rxlpdtesc_3_START (7)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_rxlpdtesc_3_END (7)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_ulpsactivenot_0_START (8)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_ulpsactivenot_0_END (8)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_ulpsactivenot_1_START (9)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_ulpsactivenot_1_END (9)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_ulpsactivenot_2_START (10)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_ulpsactivenot_2_END (10)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_ulpsactivenot_3_START (11)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_ulpsactivenot_3_END (11)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_errsyncesc_0_START (12)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_errsyncesc_0_END (12)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_errsyncesc_1_START (13)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_errsyncesc_1_END (13)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_errsyncesc_2_START (14)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_errsyncesc_2_END (14)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_errsyncesc_3_START (15)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_errsyncesc_3_END (15)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_ulpsactivenotclk_START (16)
#define SOC_ISP_ISPSS_CTRL_PHY_CSI_C_DBG_ulpsactivenotclk_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rom_trb : 2;
        unsigned int rom_ptsel : 2;
        unsigned int rom_rtsel : 2;
        unsigned int reserved_0 : 3;
        unsigned int reserved_1 : 2;
        unsigned int reserved_2 : 2;
        unsigned int tpsbram_kp : 3;
        unsigned int tpsbram_wtsel : 2;
        unsigned int tpsbram_rtsel : 2;
        unsigned int spmbram_wtsel : 2;
        unsigned int spmbram_rtsel : 2;
        unsigned int spsbram_wtsel : 2;
        unsigned int spsbram_rtsel : 2;
        unsigned int rom_tm : 1;
        unsigned int reserved_3 : 3;
    } reg;
} SOC_ISP_ISPSS_CTRL_MEM_CTRL_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_rom_trb_START (0)
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_rom_trb_END (1)
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_rom_ptsel_START (2)
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_rom_ptsel_END (3)
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_rom_rtsel_START (4)
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_rom_rtsel_END (5)
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_tpsbram_kp_START (13)
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_tpsbram_kp_END (15)
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_tpsbram_wtsel_START (16)
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_tpsbram_wtsel_END (17)
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_tpsbram_rtsel_START (18)
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_tpsbram_rtsel_END (19)
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_spmbram_wtsel_START (20)
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_spmbram_wtsel_END (21)
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_spmbram_rtsel_START (22)
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_spmbram_rtsel_END (23)
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_spsbram_wtsel_START (24)
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_spsbram_wtsel_END (25)
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_spsbram_rtsel_START (26)
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_spsbram_rtsel_END (27)
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_rom_tm_START (28)
#define SOC_ISP_ISPSS_CTRL_MEM_CTRL_rom_tm_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ratio : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_ISP_ISPSS_CTRL_PTREG_2_1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PTREG_2_1_ratio_START (0)
#define SOC_ISP_ISPSS_CTRL_PTREG_2_1_ratio_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ratio : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_ISP_ISPSS_CTRL_PTREG_2_2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PTREG_2_2_ratio_START (0)
#define SOC_ISP_ISPSS_CTRL_PTREG_2_2_ratio_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int online_select : 1;
        unsigned int reserved_0 : 7;
        unsigned int fcm_channel_src_select : 2;
        unsigned int reserved_1 : 22;
    } reg;
} SOC_ISP_ISPSS_CTRL_DSP_ISP_CTRL_P1_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_DSP_ISP_CTRL_P1_online_select_START (0)
#define SOC_ISP_ISPSS_CTRL_DSP_ISP_CTRL_P1_online_select_END (0)
#define SOC_ISP_ISPSS_CTRL_DSP_ISP_CTRL_P1_fcm_channel_src_select_START (8)
#define SOC_ISP_ISPSS_CTRL_DSP_ISP_CTRL_P1_fcm_channel_src_select_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int online_select : 1;
        unsigned int reserved_0 : 7;
        unsigned int fcm_channel_src_select : 2;
        unsigned int reserved_1 : 22;
    } reg;
} SOC_ISP_ISPSS_CTRL_DSP_ISP_CTRL_P2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_DSP_ISP_CTRL_P2_online_select_START (0)
#define SOC_ISP_ISPSS_CTRL_DSP_ISP_CTRL_P2_online_select_END (0)
#define SOC_ISP_ISPSS_CTRL_DSP_ISP_CTRL_P2_fcm_channel_src_select_START (8)
#define SOC_ISP_ISPSS_CTRL_DSP_ISP_CTRL_P2_fcm_channel_src_select_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lst_low_cam_1_sampled : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_LST_LOW_CAM_1_SAMPLED_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_LST_LOW_CAM_1_SAMPLED_lst_low_cam_1_sampled_START (0)
#define SOC_ISP_ISPSS_CTRL_LST_LOW_CAM_1_SAMPLED_lst_low_cam_1_sampled_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lst_high_cam_1_sampled : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_LST_HIGH_CAM_1_SAMPLED_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_LST_HIGH_CAM_1_SAMPLED_lst_high_cam_1_sampled_START (0)
#define SOC_ISP_ISPSS_CTRL_LST_HIGH_CAM_1_SAMPLED_lst_high_cam_1_sampled_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lst_low_cam_2_sampled : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_LST_LOW_CAM_2_SAMPLED_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_LST_LOW_CAM_2_SAMPLED_lst_low_cam_2_sampled_START (0)
#define SOC_ISP_ISPSS_CTRL_LST_LOW_CAM_2_SAMPLED_lst_low_cam_2_sampled_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lst_high_cam_2_sampled : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_LST_HIGH_CAM_2_SAMPLED_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_LST_HIGH_CAM_2_SAMPLED_lst_high_cam_2_sampled_START (0)
#define SOC_ISP_ISPSS_CTRL_LST_HIGH_CAM_2_SAMPLED_lst_high_cam_2_sampled_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lst_low_cam_3_sampled : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_LST_LOW_CAM_3_SAMPLED_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_LST_LOW_CAM_3_SAMPLED_lst_low_cam_3_sampled_START (0)
#define SOC_ISP_ISPSS_CTRL_LST_LOW_CAM_3_SAMPLED_lst_low_cam_3_sampled_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lst_high_cam_3_sampled : 32;
    } reg;
} SOC_ISP_ISPSS_CTRL_LST_HIGH_CAM_3_SAMPLED_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_LST_HIGH_CAM_3_SAMPLED_lst_high_cam_3_sampled_START (0)
#define SOC_ISP_ISPSS_CTRL_LST_HIGH_CAM_3_SAMPLED_lst_high_cam_3_sampled_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_prescaler : 1;
        unsigned int cgr_scaler_1_1 : 1;
        unsigned int cgr_fd : 1;
        unsigned int cgr_jpgenc : 1;
        unsigned int reserved_0 : 1;
        unsigned int cgr_cvdr_rt : 1;
        unsigned int cgr_stream_router : 1;
        unsigned int cgr_csi2if_a : 1;
        unsigned int cgr_csi2if_b : 1;
        unsigned int cgr_csi2if_c : 1;
        unsigned int cgr_i2c_2 : 1;
        unsigned int cgr_i2c_1 : 1;
        unsigned int cgr_i2c_3 : 1;
        unsigned int cgr_debug : 1;
        unsigned int cgr_cmdlst : 1;
        unsigned int cgr_fbdyuv_1 : 1;
        unsigned int cgr_warp : 1;
        unsigned int cgr_dmap_drbr : 1;
        unsigned int cgr_cvdr_srt : 1;
        unsigned int cgr_dmap_dgen : 1;
        unsigned int cgr_dmap_dopt : 1;
        unsigned int reserved_1 : 1;
        unsigned int cgr_top_wo_ispss_ctrl : 1;
        unsigned int reserved_2 : 9;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_prescaler_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_prescaler_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_scaler_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_scaler_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_fd_START (2)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_fd_END (2)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_jpgenc_START (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_jpgenc_END (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_cvdr_rt_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_cvdr_rt_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_stream_router_START (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_stream_router_END (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_csi2if_a_START (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_csi2if_a_END (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_csi2if_b_START (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_csi2if_b_END (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_csi2if_c_START (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_csi2if_c_END (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_i2c_2_START (10)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_i2c_2_END (10)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_i2c_1_START (11)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_i2c_1_END (11)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_i2c_3_START (12)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_i2c_3_END (12)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_debug_START (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_debug_END (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_cmdlst_START (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_cmdlst_END (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_fbdyuv_1_START (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_fbdyuv_1_END (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_warp_START (16)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_warp_END (16)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_dmap_drbr_START (17)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_dmap_drbr_END (17)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_cvdr_srt_START (18)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_cvdr_srt_END (18)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_dmap_dgen_START (19)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_dmap_dgen_END (19)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_dmap_dopt_START (20)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_dmap_dopt_END (20)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_top_wo_ispss_ctrl_START (22)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_SET_cgr_top_wo_ispss_ctrl_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_fbcraw_1_1 : 1;
        unsigned int cgr_fbdraw_1_1 : 1;
        unsigned int cgr_fbcyuv_1_1 : 1;
        unsigned int cgr_fbdyuv_1_1 : 1;
        unsigned int cgr_arsr_1_1 : 1;
        unsigned int cgr_arsr_2_1 : 1;
        unsigned int cgr_fbcraw_2_1 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_SET_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_SET_cgr_fbcraw_1_1_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_SET_cgr_fbcraw_1_1_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_SET_cgr_fbdraw_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_SET_cgr_fbdraw_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_SET_cgr_fbcyuv_1_1_START (2)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_SET_cgr_fbcyuv_1_1_END (2)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_SET_cgr_fbdyuv_1_1_START (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_SET_cgr_fbdyuv_1_1_END (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_SET_cgr_arsr_1_1_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_SET_cgr_arsr_1_1_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_SET_cgr_arsr_2_1_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_SET_cgr_arsr_2_1_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_SET_cgr_fbcraw_2_1_START (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_SET_cgr_fbcraw_2_1_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_fbcraw_1_2 : 1;
        unsigned int cgr_fbdraw_1_2 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int cgr_arsr_1_2 : 1;
        unsigned int reserved_2 : 1;
        unsigned int cgr_fbcraw_2_2 : 1;
        unsigned int reserved_3 : 25;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_SET_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_SET_cgr_fbcraw_1_2_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_SET_cgr_fbcraw_1_2_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_SET_cgr_fbdraw_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_SET_cgr_fbdraw_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_SET_cgr_arsr_1_2_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_SET_cgr_arsr_1_2_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_SET_cgr_fbcraw_2_2_START (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_SET_cgr_fbcraw_2_2_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_blc_1_1 : 1;
        unsigned int cgr_dgamma_1_1 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int cgr_stat3a_1_1 : 1;
        unsigned int cgr_statdis_1_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int cgr_bas_1_1 : 1;
        unsigned int cgr_pdaf_1_1 : 1;
        unsigned int cgr_autocls_1_1 : 1;
        unsigned int cgr_bas_3_1 : 1;
        unsigned int reserved_3 : 21;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_SET_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_SET_cgr_blc_1_1_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_SET_cgr_blc_1_1_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_SET_cgr_dgamma_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_SET_cgr_dgamma_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_SET_cgr_stat3a_1_1_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_SET_cgr_stat3a_1_1_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_SET_cgr_statdis_1_1_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_SET_cgr_statdis_1_1_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_SET_cgr_bas_1_1_START (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_SET_cgr_bas_1_1_END (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_SET_cgr_pdaf_1_1_START (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_SET_cgr_pdaf_1_1_END (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_SET_cgr_autocls_1_1_START (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_SET_cgr_autocls_1_1_END (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_SET_cgr_bas_3_1_START (10)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_SET_cgr_bas_3_1_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_blc_1_2 : 1;
        unsigned int cgr_dgamma_1_2 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int cgr_stat3a_1_2 : 1;
        unsigned int cgr_statdis_1_2 : 1;
        unsigned int reserved_2 : 1;
        unsigned int cgr_bas_1_2 : 1;
        unsigned int cgr_pdaf_1_2 : 1;
        unsigned int cgr_autocls_1_2 : 1;
        unsigned int reserved_3 : 22;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_SET_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_SET_cgr_blc_1_2_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_SET_cgr_blc_1_2_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_SET_cgr_dgamma_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_SET_cgr_dgamma_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_SET_cgr_stat3a_1_2_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_SET_cgr_stat3a_1_2_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_SET_cgr_statdis_1_2_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_SET_cgr_statdis_1_2_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_SET_cgr_bas_1_2_START (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_SET_cgr_bas_1_2_END (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_SET_cgr_pdaf_1_2_START (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_SET_cgr_pdaf_1_2_END (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_SET_cgr_autocls_1_2_START (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_SET_cgr_autocls_1_2_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_awbgain_1_1 : 1;
        unsigned int cgr_gcd_1_1 : 1;
        unsigned int reserved_0 : 1;
        unsigned int cgr_cc_1_1 : 1;
        unsigned int cgr_drc_1_1 : 1;
        unsigned int cgr_gamma_1_1 : 1;
        unsigned int cgr_rgb2yuv_1_1 : 1;
        unsigned int cgr_uvdec_1_1 : 1;
        unsigned int cgr_ce_1_1 : 1;
        unsigned int cgr_yuvnf_1_1 : 1;
        unsigned int reserved_1 : 1;
        unsigned int cgr_tnr_1_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int cgr_lsc_1_1 : 1;
        unsigned int cgr_dpcc_1_1 : 1;
        unsigned int cgr_rawnf_1_1 : 1;
        unsigned int cgr_3dlut_1_1 : 1;
        unsigned int reserved_3 : 15;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_awbgain_1_1_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_awbgain_1_1_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_gcd_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_gcd_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_cc_1_1_START (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_cc_1_1_END (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_drc_1_1_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_drc_1_1_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_gamma_1_1_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_gamma_1_1_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_rgb2yuv_1_1_START (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_rgb2yuv_1_1_END (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_uvdec_1_1_START (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_uvdec_1_1_END (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_ce_1_1_START (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_ce_1_1_END (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_yuvnf_1_1_START (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_yuvnf_1_1_END (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_tnr_1_1_START (11)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_tnr_1_1_END (11)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_lsc_1_1_START (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_lsc_1_1_END (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_dpcc_1_1_START (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_dpcc_1_1_END (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_rawnf_1_1_START (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_rawnf_1_1_END (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_3dlut_1_1_START (16)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_SET_cgr_3dlut_1_1_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_awbgain_1_2 : 1;
        unsigned int cgr_gcd_1_2 : 1;
        unsigned int reserved_0 : 1;
        unsigned int cgr_cc_1_2 : 1;
        unsigned int cgr_drc_1_2 : 1;
        unsigned int cgr_gamma_1_2 : 1;
        unsigned int cgr_rgb2yuv_1_2 : 1;
        unsigned int cgr_uvdec_1_2 : 1;
        unsigned int cgr_ce_1_2 : 1;
        unsigned int cgr_yuvnf_1_2 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int cgr_lsc_1_2 : 1;
        unsigned int cgr_dpcc_1_2 : 1;
        unsigned int cgr_rawnf_1_2 : 1;
        unsigned int cgr_3dlut_1_2 : 1;
        unsigned int reserved_4 : 15;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_awbgain_1_2_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_awbgain_1_2_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_gcd_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_gcd_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_cc_1_2_START (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_cc_1_2_END (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_drc_1_2_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_drc_1_2_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_gamma_1_2_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_gamma_1_2_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_rgb2yuv_1_2_START (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_rgb2yuv_1_2_END (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_uvdec_1_2_START (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_uvdec_1_2_END (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_ce_1_2_START (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_ce_1_2_END (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_yuvnf_1_2_START (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_yuvnf_1_2_END (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_lsc_1_2_START (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_lsc_1_2_END (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_dpcc_1_2_START (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_dpcc_1_2_END (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_rawnf_1_2_START (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_rawnf_1_2_END (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_3dlut_1_2_START (16)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_SET_cgr_3dlut_1_2_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_prescaler : 1;
        unsigned int cgr_scaler_1_1 : 1;
        unsigned int cgr_fd : 1;
        unsigned int cgr_jpgenc : 1;
        unsigned int reserved_0 : 1;
        unsigned int cgr_cvdr_rt : 1;
        unsigned int cgr_stream_router : 1;
        unsigned int cgr_csi2if_a : 1;
        unsigned int cgr_csi2if_b : 1;
        unsigned int cgr_csi2if_c : 1;
        unsigned int cgr_i2c_2 : 1;
        unsigned int cgr_i2c_1 : 1;
        unsigned int cgr_i2c_3 : 1;
        unsigned int cgr_debug : 1;
        unsigned int cgr_cmdlst : 1;
        unsigned int cgr_fbdyuv_1 : 1;
        unsigned int cgr_warp : 1;
        unsigned int cgr_dmap_drbr : 1;
        unsigned int cgr_cvdr_srt : 1;
        unsigned int cgr_dmap_dgen : 1;
        unsigned int cgr_dmap_dopt : 1;
        unsigned int reserved_1 : 1;
        unsigned int cgr_top_wo_ispss_ctrl : 1;
        unsigned int reserved_2 : 9;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_prescaler_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_prescaler_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_scaler_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_scaler_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_fd_START (2)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_fd_END (2)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_jpgenc_START (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_jpgenc_END (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_cvdr_rt_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_cvdr_rt_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_stream_router_START (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_stream_router_END (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_csi2if_a_START (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_csi2if_a_END (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_csi2if_b_START (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_csi2if_b_END (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_csi2if_c_START (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_csi2if_c_END (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_i2c_2_START (10)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_i2c_2_END (10)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_i2c_1_START (11)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_i2c_1_END (11)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_i2c_3_START (12)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_i2c_3_END (12)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_debug_START (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_debug_END (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_cmdlst_START (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_cmdlst_END (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_fbdyuv_1_START (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_fbdyuv_1_END (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_warp_START (16)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_warp_END (16)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_dmap_drbr_START (17)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_dmap_drbr_END (17)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_cvdr_srt_START (18)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_cvdr_srt_END (18)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_dmap_dgen_START (19)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_dmap_dgen_END (19)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_dmap_dopt_START (20)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_dmap_dopt_END (20)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_top_wo_ispss_ctrl_START (22)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_CLEAR_cgr_top_wo_ispss_ctrl_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_fbcraw_1_1 : 1;
        unsigned int cgr_fbdraw_1_1 : 1;
        unsigned int cgr_fbcyuv_1_1 : 1;
        unsigned int cgr_fbdyuv_1_1 : 1;
        unsigned int cgr_arsr_1_1 : 1;
        unsigned int cgr_arsr_2_1 : 1;
        unsigned int cgr_fbcraw_2_1 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_CLEAR_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_CLEAR_cgr_fbcraw_1_1_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_CLEAR_cgr_fbcraw_1_1_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_CLEAR_cgr_fbdraw_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_CLEAR_cgr_fbdraw_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_CLEAR_cgr_fbcyuv_1_1_START (2)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_CLEAR_cgr_fbcyuv_1_1_END (2)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_CLEAR_cgr_fbdyuv_1_1_START (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_CLEAR_cgr_fbdyuv_1_1_END (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_CLEAR_cgr_arsr_1_1_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_CLEAR_cgr_arsr_1_1_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_CLEAR_cgr_arsr_2_1_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_CLEAR_cgr_arsr_2_1_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_CLEAR_cgr_fbcraw_2_1_START (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P1_CLEAR_cgr_fbcraw_2_1_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_fbcraw_1_2 : 1;
        unsigned int cgr_fbdraw_1_2 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int cgr_arsr_1_2 : 1;
        unsigned int reserved_2 : 1;
        unsigned int cgr_fbcraw_2_2 : 1;
        unsigned int reserved_3 : 25;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_CLEAR_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_CLEAR_cgr_fbcraw_1_2_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_CLEAR_cgr_fbcraw_1_2_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_CLEAR_cgr_fbdraw_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_CLEAR_cgr_fbdraw_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_CLEAR_cgr_arsr_1_2_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_CLEAR_cgr_arsr_1_2_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_CLEAR_cgr_fbcraw_2_2_START (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_TOP_P2_CLEAR_cgr_fbcraw_2_2_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_blc_1_1 : 1;
        unsigned int cgr_dgamma_1_1 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int cgr_stat3a_1_1 : 1;
        unsigned int cgr_statdis_1_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int cgr_bas_1_1 : 1;
        unsigned int cgr_pdaf_1_1 : 1;
        unsigned int cgr_autocls_1_1 : 1;
        unsigned int cgr_bas_3_1 : 1;
        unsigned int reserved_3 : 21;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_CLEAR_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_CLEAR_cgr_blc_1_1_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_CLEAR_cgr_blc_1_1_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_CLEAR_cgr_dgamma_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_CLEAR_cgr_dgamma_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_CLEAR_cgr_stat3a_1_1_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_CLEAR_cgr_stat3a_1_1_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_CLEAR_cgr_statdis_1_1_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_CLEAR_cgr_statdis_1_1_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_CLEAR_cgr_bas_1_1_START (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_CLEAR_cgr_bas_1_1_END (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_CLEAR_cgr_pdaf_1_1_START (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_CLEAR_cgr_pdaf_1_1_END (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_CLEAR_cgr_autocls_1_1_START (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_CLEAR_cgr_autocls_1_1_END (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_CLEAR_cgr_bas_3_1_START (10)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P1_CLEAR_cgr_bas_3_1_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_blc_1_2 : 1;
        unsigned int cgr_dgamma_1_2 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int cgr_stat3a_1_2 : 1;
        unsigned int cgr_statdis_1_2 : 1;
        unsigned int reserved_2 : 1;
        unsigned int cgr_bas_1_2 : 1;
        unsigned int cgr_pdaf_1_2 : 1;
        unsigned int cgr_autocls_1_2 : 1;
        unsigned int reserved_3 : 22;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_CLEAR_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_CLEAR_cgr_blc_1_2_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_CLEAR_cgr_blc_1_2_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_CLEAR_cgr_dgamma_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_CLEAR_cgr_dgamma_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_CLEAR_cgr_stat3a_1_2_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_CLEAR_cgr_stat3a_1_2_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_CLEAR_cgr_statdis_1_2_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_CLEAR_cgr_statdis_1_2_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_CLEAR_cgr_bas_1_2_START (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_CLEAR_cgr_bas_1_2_END (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_CLEAR_cgr_pdaf_1_2_START (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_CLEAR_cgr_pdaf_1_2_END (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_CLEAR_cgr_autocls_1_2_START (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_FE_P2_CLEAR_cgr_autocls_1_2_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_awbgain_1_1 : 1;
        unsigned int cgr_gcd_1_1 : 1;
        unsigned int reserved_0 : 1;
        unsigned int cgr_cc_1_1 : 1;
        unsigned int cgr_drc_1_1 : 1;
        unsigned int cgr_gamma_1_1 : 1;
        unsigned int cgr_rgb2yuv_1_1 : 1;
        unsigned int cgr_uvdec_1_1 : 1;
        unsigned int cgr_ce_1_1 : 1;
        unsigned int cgr_yuvnf_1_1 : 1;
        unsigned int reserved_1 : 1;
        unsigned int cgr_tnr_1_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int cgr_lsc_1_1 : 1;
        unsigned int cgr_dpcc_1_1 : 1;
        unsigned int cgr_rawnf_1_1 : 1;
        unsigned int cgr_3dlut_1_1 : 1;
        unsigned int reserved_3 : 15;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_awbgain_1_1_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_awbgain_1_1_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_gcd_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_gcd_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_cc_1_1_START (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_cc_1_1_END (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_drc_1_1_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_drc_1_1_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_gamma_1_1_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_gamma_1_1_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_rgb2yuv_1_1_START (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_rgb2yuv_1_1_END (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_uvdec_1_1_START (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_uvdec_1_1_END (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_ce_1_1_START (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_ce_1_1_END (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_yuvnf_1_1_START (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_yuvnf_1_1_END (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_tnr_1_1_START (11)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_tnr_1_1_END (11)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_lsc_1_1_START (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_lsc_1_1_END (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_dpcc_1_1_START (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_dpcc_1_1_END (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_rawnf_1_1_START (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_rawnf_1_1_END (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_3dlut_1_1_START (16)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P1_CLEAR_cgr_3dlut_1_1_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_awbgain_1_2 : 1;
        unsigned int cgr_gcd_1_2 : 1;
        unsigned int reserved_0 : 1;
        unsigned int cgr_cc_1_2 : 1;
        unsigned int cgr_drc_1_2 : 1;
        unsigned int cgr_gamma_1_2 : 1;
        unsigned int cgr_rgb2yuv_1_2 : 1;
        unsigned int cgr_uvdec_1_2 : 1;
        unsigned int cgr_ce_1_2 : 1;
        unsigned int cgr_yuvnf_1_2 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int cgr_lsc_1_2 : 1;
        unsigned int cgr_dpcc_1_2 : 1;
        unsigned int cgr_rawnf_1_2 : 1;
        unsigned int cgr_3dlut_1_2 : 1;
        unsigned int reserved_4 : 15;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_awbgain_1_2_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_awbgain_1_2_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_gcd_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_gcd_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_cc_1_2_START (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_cc_1_2_END (3)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_drc_1_2_START (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_drc_1_2_END (4)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_gamma_1_2_START (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_gamma_1_2_END (5)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_rgb2yuv_1_2_START (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_rgb2yuv_1_2_END (6)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_uvdec_1_2_START (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_uvdec_1_2_END (7)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_ce_1_2_START (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_ce_1_2_END (8)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_yuvnf_1_2_START (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_yuvnf_1_2_END (9)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_lsc_1_2_START (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_lsc_1_2_END (13)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_dpcc_1_2_START (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_dpcc_1_2_END (14)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_rawnf_1_2_START (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_rawnf_1_2_END (15)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_3dlut_1_2_START (16)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_BE_P2_CLEAR_cgr_3dlut_1_2_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int light_sleep_fe_1_wo_bas : 1;
        unsigned int light_sleep_bas_1_1 : 1;
        unsigned int light_sleep_be_1_wo_tnr : 1;
        unsigned int light_sleep_tnr_1_1 : 1;
        unsigned int light_sleep_arsr_1_1 : 1;
        unsigned int light_sleep_arsr_2_1 : 1;
        unsigned int light_sleep_cvdr_rt : 1;
        unsigned int reserved_0 : 1;
        unsigned int light_sleep_stream_router : 1;
        unsigned int light_sleep_prescaler : 1;
        unsigned int light_sleep_scaler_1_1 : 1;
        unsigned int light_sleep_jpgenc : 1;
        unsigned int light_sleep_fd : 1;
        unsigned int light_sleep_debug : 1;
        unsigned int light_sleep_fbcdraw_1_1 : 1;
        unsigned int light_sleep_fbcdyuv_1_1 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int light_sleep_fbcraw_2_1 : 1;
        unsigned int light_sleep_cvdr_srt : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int light_sleep_warp : 1;
        unsigned int light_sleep_dmap_drbr : 1;
        unsigned int light_sleep_dmap_dgen : 1;
        unsigned int light_sleep_dmap_dopt : 1;
        unsigned int light_sleep_yuvnf_1_1 : 1;
        unsigned int light_sleep_3dlut_1_1 : 1;
        unsigned int light_sleep_bas_3_1 : 1;
        unsigned int reserved_6 : 2;
    } reg;
} SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_fe_1_wo_bas_START (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_fe_1_wo_bas_END (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_bas_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_bas_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_be_1_wo_tnr_START (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_be_1_wo_tnr_END (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_tnr_1_1_START (3)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_tnr_1_1_END (3)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_arsr_1_1_START (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_arsr_1_1_END (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_arsr_2_1_START (5)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_arsr_2_1_END (5)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_cvdr_rt_START (6)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_cvdr_rt_END (6)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_stream_router_START (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_stream_router_END (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_prescaler_START (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_prescaler_END (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_scaler_1_1_START (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_scaler_1_1_END (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_jpgenc_START (11)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_jpgenc_END (11)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_fd_START (12)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_fd_END (12)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_debug_START (13)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_debug_END (13)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_fbcdraw_1_1_START (14)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_fbcdraw_1_1_END (14)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_fbcdyuv_1_1_START (15)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_fbcdyuv_1_1_END (15)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_fbcraw_2_1_START (19)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_fbcraw_2_1_END (19)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_cvdr_srt_START (20)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_cvdr_srt_END (20)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_warp_START (23)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_warp_END (23)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_dmap_drbr_START (24)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_dmap_drbr_END (24)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_dmap_dgen_START (25)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_dmap_dgen_END (25)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_dmap_dopt_START (26)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_dmap_dopt_END (26)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_yuvnf_1_1_START (27)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_yuvnf_1_1_END (27)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_3dlut_1_1_START (28)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_3dlut_1_1_END (28)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_bas_3_1_START (29)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_SET_light_sleep_bas_3_1_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int light_sleep_fe_2_wo_bas : 1;
        unsigned int light_sleep_bas_1_2 : 1;
        unsigned int light_sleep_be_2_wo_tnr : 1;
        unsigned int reserved_0 : 1;
        unsigned int light_sleep_arsr_1_2 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int light_sleep_fbcdraw_1_2 : 1;
        unsigned int light_sleep_fbcraw_2_2 : 1;
        unsigned int light_sleep_yuvnf_1_2 : 1;
        unsigned int light_sleep_3dlut_1_2 : 1;
        unsigned int reserved_3 : 21;
    } reg;
} SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_SET_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_SET_light_sleep_fe_2_wo_bas_START (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_SET_light_sleep_fe_2_wo_bas_END (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_SET_light_sleep_bas_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_SET_light_sleep_bas_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_SET_light_sleep_be_2_wo_tnr_START (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_SET_light_sleep_be_2_wo_tnr_END (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_SET_light_sleep_arsr_1_2_START (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_SET_light_sleep_arsr_1_2_END (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_SET_light_sleep_fbcdraw_1_2_START (7)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_SET_light_sleep_fbcdraw_1_2_END (7)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_SET_light_sleep_fbcraw_2_2_START (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_SET_light_sleep_fbcraw_2_2_END (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_SET_light_sleep_yuvnf_1_2_START (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_SET_light_sleep_yuvnf_1_2_END (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_SET_light_sleep_3dlut_1_2_START (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_SET_light_sleep_3dlut_1_2_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int deep_sleep_fe_1_wo_bas : 1;
        unsigned int deep_sleep_bas_1_1 : 1;
        unsigned int deep_sleep_be_1_wo_tnr : 1;
        unsigned int deep_sleep_tnr_1_1 : 1;
        unsigned int deep_sleep_arsr_1_1 : 1;
        unsigned int deep_sleep_arsr_2_1 : 1;
        unsigned int deep_sleep_cvdr_rt : 1;
        unsigned int reserved_0 : 1;
        unsigned int deep_sleep_stream_router : 1;
        unsigned int deep_sleep_prescaler : 1;
        unsigned int deep_sleep_scaler_1_1 : 1;
        unsigned int deep_sleep_jpgenc : 1;
        unsigned int deep_sleep_fd : 1;
        unsigned int deep_sleep_debug : 1;
        unsigned int deep_sleep_fbcdraw_1_1 : 1;
        unsigned int deep_sleep_fbcdyuv_1_1 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int deep_sleep_fbcraw_2_1 : 1;
        unsigned int deep_sleep_cvdr_srt : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int deep_sleep_warp : 1;
        unsigned int deep_sleep_dmap_drbr : 1;
        unsigned int deep_sleep_dmap_dgen : 1;
        unsigned int deep_sleep_dmap_dopt : 1;
        unsigned int deep_sleep_yuvnf_1_1 : 1;
        unsigned int deep_sleep_3dlut_1_1 : 1;
        unsigned int deep_sleep_bas_3_1 : 1;
        unsigned int reserved_6 : 2;
    } reg;
} SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_fe_1_wo_bas_START (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_fe_1_wo_bas_END (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_bas_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_bas_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_be_1_wo_tnr_START (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_be_1_wo_tnr_END (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_tnr_1_1_START (3)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_tnr_1_1_END (3)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_arsr_1_1_START (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_arsr_1_1_END (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_arsr_2_1_START (5)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_arsr_2_1_END (5)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_cvdr_rt_START (6)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_cvdr_rt_END (6)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_stream_router_START (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_stream_router_END (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_prescaler_START (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_prescaler_END (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_scaler_1_1_START (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_scaler_1_1_END (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_jpgenc_START (11)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_jpgenc_END (11)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_fd_START (12)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_fd_END (12)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_debug_START (13)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_debug_END (13)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_fbcdraw_1_1_START (14)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_fbcdraw_1_1_END (14)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_fbcdyuv_1_1_START (15)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_fbcdyuv_1_1_END (15)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_fbcraw_2_1_START (19)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_fbcraw_2_1_END (19)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_cvdr_srt_START (20)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_cvdr_srt_END (20)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_warp_START (23)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_warp_END (23)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_dmap_drbr_START (24)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_dmap_drbr_END (24)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_dmap_dgen_START (25)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_dmap_dgen_END (25)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_dmap_dopt_START (26)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_dmap_dopt_END (26)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_yuvnf_1_1_START (27)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_yuvnf_1_1_END (27)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_3dlut_1_1_START (28)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_3dlut_1_1_END (28)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_bas_3_1_START (29)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_SET_deep_sleep_bas_3_1_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int deep_sleep_fe_2_wo_bas : 1;
        unsigned int deep_sleep_bas_1_2 : 1;
        unsigned int deep_sleep_be_2_wo_tnr : 1;
        unsigned int reserved_0 : 1;
        unsigned int deep_sleep_arsr_1_2 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int deep_sleep_fbcdraw_1_2 : 1;
        unsigned int deep_sleep_fbcraw_2_2 : 1;
        unsigned int deep_sleep_yuvnf_1_2 : 1;
        unsigned int deep_sleep_3dlut_1_2 : 1;
        unsigned int reserved_3 : 21;
    } reg;
} SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_SET_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_SET_deep_sleep_fe_2_wo_bas_START (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_SET_deep_sleep_fe_2_wo_bas_END (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_SET_deep_sleep_bas_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_SET_deep_sleep_bas_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_SET_deep_sleep_be_2_wo_tnr_START (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_SET_deep_sleep_be_2_wo_tnr_END (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_SET_deep_sleep_arsr_1_2_START (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_SET_deep_sleep_arsr_1_2_END (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_SET_deep_sleep_fbcdraw_1_2_START (7)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_SET_deep_sleep_fbcdraw_1_2_END (7)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_SET_deep_sleep_fbcraw_2_2_START (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_SET_deep_sleep_fbcraw_2_2_END (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_SET_deep_sleep_yuvnf_1_2_START (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_SET_deep_sleep_yuvnf_1_2_END (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_SET_deep_sleep_3dlut_1_2_START (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_SET_deep_sleep_3dlut_1_2_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int power_down_fe_1_wo_bas : 1;
        unsigned int power_down_bas_1_1 : 1;
        unsigned int power_down_be_1_wo_tnr : 1;
        unsigned int power_down_tnr_1_1 : 1;
        unsigned int power_down_arsr_1_1 : 1;
        unsigned int power_down_arsr_2_1 : 1;
        unsigned int power_down_cvdr_rt : 1;
        unsigned int reserved_0 : 1;
        unsigned int power_down_stream_router : 1;
        unsigned int power_down_prescaler : 1;
        unsigned int power_down_scaler_1_1 : 1;
        unsigned int power_down_jpgenc : 1;
        unsigned int power_down_fd : 1;
        unsigned int power_down_debug : 1;
        unsigned int power_down_fbcdraw_1_1 : 1;
        unsigned int power_down_fbcdyuv_1_1 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int power_down_fbcraw_2_1 : 1;
        unsigned int power_down_cvdr_srt : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int power_down_warp : 1;
        unsigned int power_down_dmap_drbr : 1;
        unsigned int power_down_dmap_dgen : 1;
        unsigned int power_down_dmap_dopt : 1;
        unsigned int power_down_yuvnf_1_1 : 1;
        unsigned int power_down_3dlut_1_1 : 1;
        unsigned int power_down_bas_3_1 : 1;
        unsigned int reserved_6 : 2;
    } reg;
} SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_fe_1_wo_bas_START (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_fe_1_wo_bas_END (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_bas_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_bas_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_be_1_wo_tnr_START (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_be_1_wo_tnr_END (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_tnr_1_1_START (3)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_tnr_1_1_END (3)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_arsr_1_1_START (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_arsr_1_1_END (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_arsr_2_1_START (5)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_arsr_2_1_END (5)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_cvdr_rt_START (6)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_cvdr_rt_END (6)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_stream_router_START (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_stream_router_END (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_prescaler_START (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_prescaler_END (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_scaler_1_1_START (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_scaler_1_1_END (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_jpgenc_START (11)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_jpgenc_END (11)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_fd_START (12)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_fd_END (12)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_debug_START (13)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_debug_END (13)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_fbcdraw_1_1_START (14)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_fbcdraw_1_1_END (14)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_fbcdyuv_1_1_START (15)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_fbcdyuv_1_1_END (15)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_fbcraw_2_1_START (19)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_fbcraw_2_1_END (19)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_cvdr_srt_START (20)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_cvdr_srt_END (20)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_warp_START (23)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_warp_END (23)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_dmap_drbr_START (24)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_dmap_drbr_END (24)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_dmap_dgen_START (25)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_dmap_dgen_END (25)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_dmap_dopt_START (26)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_dmap_dopt_END (26)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_yuvnf_1_1_START (27)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_yuvnf_1_1_END (27)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_3dlut_1_1_START (28)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_3dlut_1_1_END (28)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_bas_3_1_START (29)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_SET_power_down_bas_3_1_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int power_down_fe_2_wo_bas : 1;
        unsigned int power_down_bas_1_2 : 1;
        unsigned int power_down_be_2_wo_tnr : 1;
        unsigned int reserved_0 : 1;
        unsigned int power_down_arsr_1_2 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int power_down_fbcdraw_1_2 : 1;
        unsigned int power_down_fbcraw_2_2 : 1;
        unsigned int power_down_yuvnf_1_2 : 1;
        unsigned int power_down_3dlut_1_2 : 1;
        unsigned int reserved_3 : 21;
    } reg;
} SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_SET_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_SET_power_down_fe_2_wo_bas_START (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_SET_power_down_fe_2_wo_bas_END (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_SET_power_down_bas_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_SET_power_down_bas_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_SET_power_down_be_2_wo_tnr_START (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_SET_power_down_be_2_wo_tnr_END (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_SET_power_down_arsr_1_2_START (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_SET_power_down_arsr_1_2_END (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_SET_power_down_fbcdraw_1_2_START (7)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_SET_power_down_fbcdraw_1_2_END (7)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_SET_power_down_fbcraw_2_2_START (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_SET_power_down_fbcraw_2_2_END (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_SET_power_down_yuvnf_1_2_START (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_SET_power_down_yuvnf_1_2_END (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_SET_power_down_3dlut_1_2_START (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_SET_power_down_3dlut_1_2_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int light_sleep_fe_1_wo_bas : 1;
        unsigned int light_sleep_bas_1_1 : 1;
        unsigned int light_sleep_be_1_wo_tnr : 1;
        unsigned int light_sleep_tnr_1_1 : 1;
        unsigned int light_sleep_arsr_1_1 : 1;
        unsigned int light_sleep_arsr_2_1 : 1;
        unsigned int light_sleep_cvdr_rt : 1;
        unsigned int reserved_0 : 1;
        unsigned int light_sleep_stream_router : 1;
        unsigned int light_sleep_prescaler : 1;
        unsigned int light_sleep_scaler_1_1 : 1;
        unsigned int light_sleep_jpgenc : 1;
        unsigned int light_sleep_fd : 1;
        unsigned int light_sleep_debug : 1;
        unsigned int light_sleep_fbcdraw_1_1 : 1;
        unsigned int light_sleep_fbcdyuv_1_1 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int light_sleep_fbcraw_2_1 : 1;
        unsigned int light_sleep_cvdr_srt : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int light_sleep_warp : 1;
        unsigned int light_sleep_dmap_drbr : 1;
        unsigned int light_sleep_dmap_dgen : 1;
        unsigned int light_sleep_dmap_dopt : 1;
        unsigned int light_sleep_yuvnf_1_1 : 1;
        unsigned int light_sleep_3dlut_1_1 : 1;
        unsigned int light_sleep_bas_3_1 : 1;
        unsigned int reserved_6 : 2;
    } reg;
} SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_fe_1_wo_bas_START (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_fe_1_wo_bas_END (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_bas_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_bas_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_be_1_wo_tnr_START (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_be_1_wo_tnr_END (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_tnr_1_1_START (3)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_tnr_1_1_END (3)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_arsr_1_1_START (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_arsr_1_1_END (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_arsr_2_1_START (5)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_arsr_2_1_END (5)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_cvdr_rt_START (6)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_cvdr_rt_END (6)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_stream_router_START (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_stream_router_END (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_prescaler_START (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_prescaler_END (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_scaler_1_1_START (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_scaler_1_1_END (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_jpgenc_START (11)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_jpgenc_END (11)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_fd_START (12)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_fd_END (12)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_debug_START (13)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_debug_END (13)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_fbcdraw_1_1_START (14)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_fbcdraw_1_1_END (14)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_fbcdyuv_1_1_START (15)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_fbcdyuv_1_1_END (15)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_fbcraw_2_1_START (19)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_fbcraw_2_1_END (19)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_cvdr_srt_START (20)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_cvdr_srt_END (20)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_warp_START (23)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_warp_END (23)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_dmap_drbr_START (24)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_dmap_drbr_END (24)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_dmap_dgen_START (25)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_dmap_dgen_END (25)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_dmap_dopt_START (26)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_dmap_dopt_END (26)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_yuvnf_1_1_START (27)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_yuvnf_1_1_END (27)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_3dlut_1_1_START (28)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_3dlut_1_1_END (28)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_bas_3_1_START (29)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P1_CLEAR_light_sleep_bas_3_1_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int light_sleep_fe_2_wo_bas : 1;
        unsigned int light_sleep_bas_1_2 : 1;
        unsigned int light_sleep_be_2_wo_tnr : 1;
        unsigned int reserved_0 : 1;
        unsigned int light_sleep_arsr_1_2 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int light_sleep_fbcdraw_1_2 : 1;
        unsigned int light_sleep_fbcraw_2_2 : 1;
        unsigned int light_sleep_yuvnf_1_2 : 1;
        unsigned int light_sleep_3dlut_1_2 : 1;
        unsigned int reserved_3 : 21;
    } reg;
} SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_CLEAR_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_CLEAR_light_sleep_fe_2_wo_bas_START (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_CLEAR_light_sleep_fe_2_wo_bas_END (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_CLEAR_light_sleep_bas_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_CLEAR_light_sleep_bas_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_CLEAR_light_sleep_be_2_wo_tnr_START (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_CLEAR_light_sleep_be_2_wo_tnr_END (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_CLEAR_light_sleep_arsr_1_2_START (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_CLEAR_light_sleep_arsr_1_2_END (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_CLEAR_light_sleep_fbcdraw_1_2_START (7)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_CLEAR_light_sleep_fbcdraw_1_2_END (7)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_CLEAR_light_sleep_fbcraw_2_2_START (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_CLEAR_light_sleep_fbcraw_2_2_END (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_CLEAR_light_sleep_yuvnf_1_2_START (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_CLEAR_light_sleep_yuvnf_1_2_END (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_CLEAR_light_sleep_3dlut_1_2_START (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR_CLK_P2_CLEAR_light_sleep_3dlut_1_2_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int deep_sleep_fe_1_wo_bas : 1;
        unsigned int deep_sleep_bas_1_1 : 1;
        unsigned int deep_sleep_be_1_wo_tnr : 1;
        unsigned int deep_sleep_tnr_1_1 : 1;
        unsigned int deep_sleep_arsr_1_1 : 1;
        unsigned int deep_sleep_arsr_2_1 : 1;
        unsigned int deep_sleep_cvdr_rt : 1;
        unsigned int reserved_0 : 1;
        unsigned int deep_sleep_stream_router : 1;
        unsigned int deep_sleep_prescaler : 1;
        unsigned int deep_sleep_scaler_1_1 : 1;
        unsigned int deep_sleep_jpgenc : 1;
        unsigned int deep_sleep_fd : 1;
        unsigned int deep_sleep_debug : 1;
        unsigned int deep_sleep_fbcdraw_1_1 : 1;
        unsigned int deep_sleep_fbcdyuv_1_1 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int deep_sleep_fbcraw_2_1 : 1;
        unsigned int deep_sleep_cvdr_srt : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int deep_sleep_warp : 1;
        unsigned int deep_sleep_dmap_drbr : 1;
        unsigned int deep_sleep_dmap_dgen : 1;
        unsigned int deep_sleep_dmap_dopt : 1;
        unsigned int deep_sleep_yuvnf_1_1 : 1;
        unsigned int deep_sleep_3dlut_1_1 : 1;
        unsigned int deep_sleep_bas_3_1 : 1;
        unsigned int reserved_6 : 2;
    } reg;
} SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_fe_1_wo_bas_START (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_fe_1_wo_bas_END (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_bas_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_bas_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_be_1_wo_tnr_START (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_be_1_wo_tnr_END (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_tnr_1_1_START (3)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_tnr_1_1_END (3)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_arsr_1_1_START (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_arsr_1_1_END (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_arsr_2_1_START (5)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_arsr_2_1_END (5)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_cvdr_rt_START (6)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_cvdr_rt_END (6)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_stream_router_START (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_stream_router_END (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_prescaler_START (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_prescaler_END (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_scaler_1_1_START (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_scaler_1_1_END (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_jpgenc_START (11)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_jpgenc_END (11)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_fd_START (12)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_fd_END (12)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_debug_START (13)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_debug_END (13)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_fbcdraw_1_1_START (14)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_fbcdraw_1_1_END (14)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_fbcdyuv_1_1_START (15)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_fbcdyuv_1_1_END (15)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_fbcraw_2_1_START (19)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_fbcraw_2_1_END (19)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_cvdr_srt_START (20)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_cvdr_srt_END (20)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_warp_START (23)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_warp_END (23)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_dmap_drbr_START (24)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_dmap_drbr_END (24)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_dmap_dgen_START (25)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_dmap_dgen_END (25)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_dmap_dopt_START (26)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_dmap_dopt_END (26)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_yuvnf_1_1_START (27)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_yuvnf_1_1_END (27)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_3dlut_1_1_START (28)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_3dlut_1_1_END (28)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_bas_3_1_START (29)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P1_CLEAR_deep_sleep_bas_3_1_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int deep_sleep_fe_2_wo_bas : 1;
        unsigned int deep_sleep_bas_1_2 : 1;
        unsigned int deep_sleep_be_2_wo_tnr : 1;
        unsigned int reserved_0 : 1;
        unsigned int deep_sleep_arsr_1_2 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int deep_sleep_fbcdraw_1_2 : 1;
        unsigned int deep_sleep_fbcraw_2_2 : 1;
        unsigned int deep_sleep_yuvnf_1_2 : 1;
        unsigned int deep_sleep_3dlut_1_2 : 1;
        unsigned int reserved_3 : 21;
    } reg;
} SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_CLEAR_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_CLEAR_deep_sleep_fe_2_wo_bas_START (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_CLEAR_deep_sleep_fe_2_wo_bas_END (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_CLEAR_deep_sleep_bas_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_CLEAR_deep_sleep_bas_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_CLEAR_deep_sleep_be_2_wo_tnr_START (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_CLEAR_deep_sleep_be_2_wo_tnr_END (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_CLEAR_deep_sleep_arsr_1_2_START (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_CLEAR_deep_sleep_arsr_1_2_END (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_CLEAR_deep_sleep_fbcdraw_1_2_START (7)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_CLEAR_deep_sleep_fbcdraw_1_2_END (7)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_CLEAR_deep_sleep_fbcraw_2_2_START (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_CLEAR_deep_sleep_fbcraw_2_2_END (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_CLEAR_deep_sleep_yuvnf_1_2_START (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_CLEAR_deep_sleep_yuvnf_1_2_END (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_CLEAR_deep_sleep_3dlut_1_2_START (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR2_CLK_P2_CLEAR_deep_sleep_3dlut_1_2_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int power_down_fe_1_wo_bas : 1;
        unsigned int power_down_bas_1_1 : 1;
        unsigned int power_down_be_1_wo_tnr : 1;
        unsigned int power_down_tnr_1_1 : 1;
        unsigned int power_down_arsr_1_1 : 1;
        unsigned int power_down_arsr_2_1 : 1;
        unsigned int power_down_cvdr_rt : 1;
        unsigned int reserved_0 : 1;
        unsigned int power_down_stream_router : 1;
        unsigned int power_down_prescaler : 1;
        unsigned int power_down_scaler_1_1 : 1;
        unsigned int power_down_jpgenc : 1;
        unsigned int power_down_fd : 1;
        unsigned int power_down_debug : 1;
        unsigned int power_down_fbcdraw_1_1 : 1;
        unsigned int power_down_fbcdyuv_1_1 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int power_down_fbcraw_2_1 : 1;
        unsigned int power_down_cvdr_srt : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int power_down_warp : 1;
        unsigned int power_down_dmap_drbr : 1;
        unsigned int power_down_dmap_dgen : 1;
        unsigned int power_down_dmap_dopt : 1;
        unsigned int power_down_yuvnf_1_1 : 1;
        unsigned int power_down_3dlut_1_1 : 1;
        unsigned int power_down_bas_3_1 : 1;
        unsigned int reserved_6 : 2;
    } reg;
} SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_fe_1_wo_bas_START (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_fe_1_wo_bas_END (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_bas_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_bas_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_be_1_wo_tnr_START (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_be_1_wo_tnr_END (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_tnr_1_1_START (3)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_tnr_1_1_END (3)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_arsr_1_1_START (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_arsr_1_1_END (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_arsr_2_1_START (5)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_arsr_2_1_END (5)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_cvdr_rt_START (6)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_cvdr_rt_END (6)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_stream_router_START (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_stream_router_END (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_prescaler_START (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_prescaler_END (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_scaler_1_1_START (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_scaler_1_1_END (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_jpgenc_START (11)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_jpgenc_END (11)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_fd_START (12)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_fd_END (12)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_debug_START (13)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_debug_END (13)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_fbcdraw_1_1_START (14)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_fbcdraw_1_1_END (14)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_fbcdyuv_1_1_START (15)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_fbcdyuv_1_1_END (15)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_fbcraw_2_1_START (19)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_fbcraw_2_1_END (19)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_cvdr_srt_START (20)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_cvdr_srt_END (20)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_warp_START (23)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_warp_END (23)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_dmap_drbr_START (24)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_dmap_drbr_END (24)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_dmap_dgen_START (25)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_dmap_dgen_END (25)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_dmap_dopt_START (26)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_dmap_dopt_END (26)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_yuvnf_1_1_START (27)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_yuvnf_1_1_END (27)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_3dlut_1_1_START (28)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_3dlut_1_1_END (28)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_bas_3_1_START (29)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P1_CLEAR_power_down_bas_3_1_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int power_down_fe_2_wo_bas : 1;
        unsigned int power_down_bas_1_2 : 1;
        unsigned int power_down_be_2_wo_tnr : 1;
        unsigned int reserved_0 : 1;
        unsigned int power_down_arsr_1_2 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int power_down_fbcdraw_1_2 : 1;
        unsigned int power_down_fbcraw_2_2 : 1;
        unsigned int power_down_yuvnf_1_2 : 1;
        unsigned int power_down_3dlut_1_2 : 1;
        unsigned int reserved_3 : 21;
    } reg;
} SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_CLEAR_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_CLEAR_power_down_fe_2_wo_bas_START (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_CLEAR_power_down_fe_2_wo_bas_END (0)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_CLEAR_power_down_bas_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_CLEAR_power_down_bas_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_CLEAR_power_down_be_2_wo_tnr_START (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_CLEAR_power_down_be_2_wo_tnr_END (2)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_CLEAR_power_down_arsr_1_2_START (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_CLEAR_power_down_arsr_1_2_END (4)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_CLEAR_power_down_fbcdraw_1_2_START (7)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_CLEAR_power_down_fbcdraw_1_2_END (7)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_CLEAR_power_down_fbcraw_2_2_START (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_CLEAR_power_down_fbcraw_2_2_END (8)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_CLEAR_power_down_yuvnf_1_2_START (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_CLEAR_power_down_yuvnf_1_2_END (9)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_CLEAR_power_down_3dlut_1_2_START (10)
#define SOC_ISP_ISPSS_CTRL_MEM_PWR3_CLK_P2_CLEAR_power_down_3dlut_1_2_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int isp_be_arsr_1_1 : 1;
        unsigned int isp_be_arsr_2_1 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 2;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int isp_be_scaler_1_1 : 1;
        unsigned int isp_be_yuvnf_1_1 : 1;
        unsigned int isp_warp_arsr_1_1 : 1;
        unsigned int isp_warp_arsr_2_1 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
        unsigned int reserved_13 : 1;
        unsigned int spare : 2;
        unsigned int vps_yuv420_1 : 1;
        unsigned int reserved_14 : 8;
    } reg;
} SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_SET_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_SET_isp_be_arsr_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_SET_isp_be_arsr_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_SET_isp_be_arsr_2_1_START (2)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_SET_isp_be_arsr_2_1_END (2)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_SET_isp_be_scaler_1_1_START (11)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_SET_isp_be_scaler_1_1_END (11)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_SET_isp_be_yuvnf_1_1_START (12)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_SET_isp_be_yuvnf_1_1_END (12)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_SET_isp_warp_arsr_1_1_START (13)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_SET_isp_warp_arsr_1_1_END (13)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_SET_isp_warp_arsr_2_1_START (14)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_SET_isp_warp_arsr_2_1_END (14)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_SET_spare_START (21)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_SET_spare_END (22)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_SET_vps_yuv420_1_START (23)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_SET_vps_yuv420_1_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int isp_be_arsr_1_2 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 2;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 5;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 3;
        unsigned int spare : 2;
        unsigned int vps_yuv420_2 : 1;
        unsigned int reserved_13 : 8;
    } reg;
} SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_SET_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_SET_isp_be_arsr_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_SET_isp_be_arsr_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_SET_spare_START (21)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_SET_spare_END (22)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_SET_vps_yuv420_2_START (23)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_SET_vps_yuv420_2_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int isp_be_arsr_1_1 : 1;
        unsigned int isp_be_arsr_2_1 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 2;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int isp_be_scaler_1_1 : 1;
        unsigned int isp_be_yuvnf_1_1 : 1;
        unsigned int isp_warp_arsr_1_1 : 1;
        unsigned int isp_warp_arsr_2_1 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 1;
        unsigned int reserved_13 : 1;
        unsigned int spare : 2;
        unsigned int vps_yuv420_1 : 1;
        unsigned int reserved_14 : 8;
    } reg;
} SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_CLEAR_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_CLEAR_isp_be_arsr_1_1_START (1)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_CLEAR_isp_be_arsr_1_1_END (1)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_CLEAR_isp_be_arsr_2_1_START (2)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_CLEAR_isp_be_arsr_2_1_END (2)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_CLEAR_isp_be_scaler_1_1_START (11)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_CLEAR_isp_be_scaler_1_1_END (11)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_CLEAR_isp_be_yuvnf_1_1_START (12)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_CLEAR_isp_be_yuvnf_1_1_END (12)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_CLEAR_isp_warp_arsr_1_1_START (13)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_CLEAR_isp_warp_arsr_1_1_END (13)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_CLEAR_isp_warp_arsr_2_1_START (14)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_CLEAR_isp_warp_arsr_2_1_END (14)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_CLEAR_spare_START (21)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_CLEAR_spare_END (22)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_CLEAR_vps_yuv420_1_START (23)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P1_CLEAR_vps_yuv420_1_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int isp_be_arsr_1_2 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 2;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 5;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 3;
        unsigned int spare : 2;
        unsigned int vps_yuv420_2 : 1;
        unsigned int reserved_13 : 8;
    } reg;
} SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_CLEAR_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_CLEAR_isp_be_arsr_1_2_START (1)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_CLEAR_isp_be_arsr_1_2_END (1)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_CLEAR_spare_START (21)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_CLEAR_spare_END (22)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_CLEAR_vps_yuv420_2_START (23)
#define SOC_ISP_ISPSS_CTRL_CONTROL_0_P2_CLEAR_vps_yuv420_2_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 2;
        unsigned int reserved_1 : 2;
        unsigned int ctrl_vpbg_6_1 : 2;
        unsigned int reserved_2 : 2;
        unsigned int ctrl_vpbg_8_1 : 2;
        unsigned int reserved_3 : 2;
        unsigned int reserved_4 : 2;
        unsigned int reserved_5 : 2;
        unsigned int reserved_6 : 2;
        unsigned int reserved_7 : 2;
        unsigned int reserved_8 : 2;
        unsigned int reserved_9 : 2;
        unsigned int reserved_10 : 2;
        unsigned int reserved_11 : 2;
        unsigned int reserved_12 : 2;
        unsigned int reserved_13 : 2;
    } reg;
} SOC_ISP_ISPSS_CTRL_VPBG_CTRL_1_SET_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_1_SET_ctrl_vpbg_6_1_START (4)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_1_SET_ctrl_vpbg_6_1_END (5)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_1_SET_ctrl_vpbg_8_1_START (8)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_1_SET_ctrl_vpbg_8_1_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 2;
        unsigned int reserved_1: 2;
        unsigned int reserved_2: 2;
        unsigned int reserved_3: 10;
        unsigned int reserved_4: 2;
        unsigned int reserved_5: 2;
        unsigned int reserved_6: 2;
        unsigned int reserved_7: 2;
        unsigned int reserved_8: 2;
        unsigned int reserved_9: 2;
        unsigned int reserved_10: 2;
        unsigned int reserved_11: 2;
    } reg;
} SOC_ISP_ISPSS_CTRL_VPBG_CTRL_2_SET_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ctrl_vpbg_37_1 : 3;
        unsigned int ctrl_vpbg_37_2 : 3;
        unsigned int reserved_0 : 2;
        unsigned int reserved_1 : 3;
        unsigned int reserved_2 : 1;
        unsigned int ctrl_vpbg_9_1 : 2;
        unsigned int reserved_3 : 18;
    } reg;
} SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_SET_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_SET_ctrl_vpbg_37_1_START (0)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_SET_ctrl_vpbg_37_1_END (2)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_SET_ctrl_vpbg_37_2_START (3)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_SET_ctrl_vpbg_37_2_END (5)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_SET_ctrl_vpbg_9_1_START (12)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_SET_ctrl_vpbg_9_1_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 2;
        unsigned int reserved_1 : 2;
        unsigned int ctrl_vpbg_6_1 : 2;
        unsigned int reserved_2 : 2;
        unsigned int ctrl_vpbg_8_1 : 2;
        unsigned int reserved_3 : 2;
        unsigned int reserved_4 : 2;
        unsigned int reserved_5 : 2;
        unsigned int reserved_6 : 2;
        unsigned int reserved_7 : 2;
        unsigned int reserved_8 : 2;
        unsigned int reserved_9 : 2;
        unsigned int reserved_10 : 2;
        unsigned int reserved_11 : 2;
        unsigned int reserved_12 : 2;
        unsigned int reserved_13 : 2;
    } reg;
} SOC_ISP_ISPSS_CTRL_VPBG_CTRL_1_CLEAR_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_1_CLEAR_ctrl_vpbg_6_1_START (4)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_1_CLEAR_ctrl_vpbg_6_1_END (5)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_1_CLEAR_ctrl_vpbg_8_1_START (8)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_1_CLEAR_ctrl_vpbg_8_1_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 2;
        unsigned int reserved_1: 2;
        unsigned int reserved_2: 2;
        unsigned int reserved_3: 10;
        unsigned int reserved_4: 2;
        unsigned int reserved_5: 2;
        unsigned int reserved_6: 2;
        unsigned int reserved_7: 2;
        unsigned int reserved_8: 2;
        unsigned int reserved_9: 2;
        unsigned int reserved_10: 2;
        unsigned int reserved_11: 2;
    } reg;
} SOC_ISP_ISPSS_CTRL_VPBG_CTRL_2_CLEAR_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ctrl_vpbg_37_1 : 3;
        unsigned int ctrl_vpbg_37_2 : 3;
        unsigned int reserved_0 : 2;
        unsigned int reserved_1 : 3;
        unsigned int reserved_2 : 1;
        unsigned int ctrl_vpbg_9_1 : 2;
        unsigned int reserved_3 : 18;
    } reg;
} SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_CLEAR_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_CLEAR_ctrl_vpbg_37_1_START (0)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_CLEAR_ctrl_vpbg_37_1_END (2)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_CLEAR_ctrl_vpbg_37_2_START (3)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_CLEAR_ctrl_vpbg_37_2_END (5)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_CLEAR_ctrl_vpbg_9_1_START (12)
#define SOC_ISP_ISPSS_CTRL_VPBG_CTRL_3_CLEAR_ctrl_vpbg_9_1_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int stop_cvdr_srt : 1;
        unsigned int reserved_0 : 1;
        unsigned int stop_fbdraw_1_1 : 1;
        unsigned int stop_fbdraw_1_2 : 1;
        unsigned int stop_dmap : 1;
        unsigned int stop_warp : 1;
        unsigned int reserved_1 : 26;
    } reg;
} SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_stop_cvdr_srt_START (0)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_stop_cvdr_srt_END (0)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_stop_fbdraw_1_1_START (2)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_stop_fbdraw_1_1_END (2)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_stop_fbdraw_1_2_START (3)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_stop_fbdraw_1_2_END (3)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_stop_dmap_START (4)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_stop_dmap_END (4)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_stop_warp_START (5)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_stop_warp_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int stop_ok_cvdr_srt : 1;
        unsigned int stop_ok_cvdr_rt : 1;
        unsigned int stop_ok_fbdraw_1_1 : 1;
        unsigned int stop_ok_fbdraw_1_2 : 1;
        unsigned int stop_ok_dmap : 1;
        unsigned int stop_ok_warp : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_OK_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_OK_stop_ok_cvdr_srt_START (0)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_OK_stop_ok_cvdr_srt_END (0)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_OK_stop_ok_cvdr_rt_START (1)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_OK_stop_ok_cvdr_rt_END (1)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_OK_stop_ok_fbdraw_1_1_START (2)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_OK_stop_ok_fbdraw_1_1_END (2)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_OK_stop_ok_fbdraw_1_2_START (3)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_OK_stop_ok_fbdraw_1_2_END (3)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_OK_stop_ok_dmap_START (4)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_OK_stop_ok_dmap_END (4)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_OK_stop_ok_warp_START (5)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_OK_stop_ok_warp_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int stop_jpeg : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_JPEG_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_JPEG_stop_jpeg_START (0)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_JPEG_stop_jpeg_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int stop_ok_jpeg : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_OK_JPEG_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_OK_JPEG_stop_ok_jpeg_START (0)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_OK_JPEG_stop_ok_jpeg_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_srt : 1;
        unsigned int cgr_bpe : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_HARDEN_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_HARDEN_cgr_srt_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_HARDEN_cgr_srt_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_HARDEN_cgr_bpe_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_HARDEN_cgr_bpe_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_srt : 1;
        unsigned int cgr_bpe : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_HARDEN_SET_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_HARDEN_SET_cgr_srt_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_HARDEN_SET_cgr_srt_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_HARDEN_SET_cgr_bpe_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_HARDEN_SET_cgr_bpe_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_srt : 1;
        unsigned int cgr_bpe : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_HARDEN_CLEAR_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_HARDEN_CLEAR_cgr_srt_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_HARDEN_CLEAR_cgr_srt_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_HARDEN_CLEAR_cgr_bpe_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_HARDEN_CLEAR_cgr_bpe_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int stop_cvdr_rt : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_P2_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_P2_stop_cvdr_rt_START (0)
#define SOC_ISP_ISPSS_CTRL_PREFETCH_BUS_STOP_P2_stop_cvdr_rt_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rst_srt : 1;
        unsigned int rst_bpe : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_RESET_HARDEN_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_HARDEN_rst_srt_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_HARDEN_rst_srt_END (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_HARDEN_rst_bpe_START (1)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_HARDEN_rst_bpe_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_dsp : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_DSP_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_DSP_cgr_dsp_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_DSP_cgr_dsp_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_dsp : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_DSP_SET_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_DSP_SET_cgr_dsp_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_DSP_SET_cgr_dsp_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cgr_dsp : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_CGR_DSP_CLEAR_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_DSP_CLEAR_cgr_dsp_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_CGR_DSP_CLEAR_cgr_dsp_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rst_dsp : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_ISP_ISPSS_CTRL_MODULE_RESET_DSP_UNION;
#endif
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_DSP_rst_dsp_START (0)
#define SOC_ISP_ISPSS_CTRL_MODULE_RESET_DSP_rst_dsp_END (0)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
