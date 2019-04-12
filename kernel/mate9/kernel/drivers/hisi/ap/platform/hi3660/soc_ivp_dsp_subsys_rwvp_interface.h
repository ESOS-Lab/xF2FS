#ifndef __SOC_IVP_DSP_SUBSYS_RWVP_INTERFACE_H__
#define __SOC_IVP_DSP_SUBSYS_RWVP_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_ADDR(base) ((base) + (0x0000))
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_RAW_ST_ADDR(base) ((base) + (0x0004))
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_MSK_ADDR(base) ((base) + (0x0008))
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_SET_ADDR(base) ((base) + (0x000C))
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ0_VEC_ADDR(base) ((base) + (0x0010))
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ1_VEC_ADDR(base) ((base) + (0x0014))
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ2_VEC_ADDR(base) ((base) + (0x0018))
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ3_VEC_ADDR(base) ((base) + (0x001C))
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_ADDR(base) ((base) + (0x0020))
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_RAW_ST_ADDR(base) ((base) + (0x0024))
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_MSK_ADDR(base) ((base) + (0x0028))
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_SET_ADDR(base) ((base) + (0x002C))
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_ADDR(base) ((base) + (0x0030))
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_ADDR(base) ((base) + (0x0034))
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_BP_MODE_ADDR(base) ((base) + (0x0038))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_ADDR(base,i) ((base) + (0x0040+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_ENABLE_ADDR(base,i) ((base) + (0x0044+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_SET_ADDR(base,i) ((base) + (0x0048+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_EN_ADDR(base,i) ((base) + (0x004C+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_FRAME_GO_EN_ADDR(base,i) ((base) + (0x0050+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_REC_EN_ADDR(base,i) ((base) + (0x0054+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_AXI_WR_OUTS_MAX_ADDR(base,i) ((base) + (0x0058+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_FRAME_SIZE_ADDR(base,i) ((base) + (0x005C+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_LINE_SIZE_ADDR(base,i) ((base) + (0x0060+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_PIXEL_FORMAT_ADDR(base,i) ((base) + (0x0064+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_FRAME_GO_ADDR(base,i) ((base) + (0x0068+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RST_START_ADDR(base,i) ((base) + (0x006C+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RST_READY_ADDR(base,i) ((base) + (0x0070+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RST_ADDR(base,i) ((base) + (0x0074+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_DTCM_BUF0_BEGIN_ADDR(base,i) ((base) + (0x0078+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_DTCM_BUF0_END_ADDR(base,i) ((base) + (0x007C+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_DTCM_BUF1_BEGIN_ADDR(base,i) ((base) + (0x0080+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_DTCM_BUF1_END_ADDR(base,i) ((base) + (0x0084+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_MLINE_ADDR(base,i) ((base) + (0x0088+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RD_PTR_ADDR(base,i) ((base) + (0x008C+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_AXI_ADDRP_ADDR(base,i) ((base) + (0x0090+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_PIXEL_CNT_ADDR(base,i) ((base) + (0x0094+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_LINE_CNT_ADDR(base,i) ((base) + (0x0098+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_FRAME_SIZE_ERR_INFO_ADDR(base,i) ((base) + (0x009C+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_LINE_SIZE_ERR_INFO_ADDR(base,i) ((base) + (0x00A0+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_AXI_ERR_INFO_ADDR(base,i) ((base) + (0x00A4+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_BUF_STATE_ADDR(base,i) ((base) + (0x00A8+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_VP_STATE_ADDR(base,i) ((base) + (0x00AC+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_WR_PTR_ADDR(base,i) ((base) + (0x00B0+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RD_PTR_CFG_ERR_INFO_ADDR(base,i) ((base) + (0x00B4+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_ADDR(base,i) ((base) + (0x00100+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_ENABLE_ADDR(base,i) ((base) + (0x00104+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_SET_ADDR(base,i) ((base) + (0x00108+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_EN_ADDR(base,i) ((base) + (0x0010C+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_FRAME_GO_EN_ADDR(base,i) ((base) + (0x00110+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_REC_EN_ADDR(base,i) ((base) + (0x00114+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_AXI_RD_OUTS_MAX_ADDR(base,i) ((base) + (0x00118+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_FRAME_SIZE_ADDR(base,i) ((base) + (0x0011C+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_LINE_SIZE_ADDR(base,i) ((base) + (0x00120+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_PIXEL_FORMAT_ADDR(base,i) ((base) + (0x00124+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_FRAME_GO_ADDR(base,i) ((base) + (0x00128+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_RST_START_ADDR(base,i) ((base) + (0x0012C+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_RST_READY_ADDR(base,i) ((base) + (0x00130+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_RST_ADDR(base,i) ((base) + (0x00134+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_DTCM_BUF0_BEGIN_ADDR(base,i) ((base) + (0x00138+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_DTCM_BUF0_END_ADDR(base,i) ((base) + (0x0013C+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_DTCM_BUF1_BEGIN_ADDR(base,i) ((base) + (0x00140+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_DTCM_BUF1_END_ADDR(base,i) ((base) + (0x00144+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_WR_PTR_ADDR(base,i) ((base) + (0x00148+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_AXI_ADDRP_ADDR(base,i) ((base) + (0x0014C+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_PIXEL_CNT_ADDR(base,i) ((base) + (0x00150+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_LINE_CNT_ADDR(base,i) ((base) + (0x00154+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_AXI_ERR_INFO_ADDR(base,i) ((base) + (0x00160+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_BUF_STATE_ADDR(base,i) ((base) + (0x00164+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_VP_STATE_ADDR(base,i) ((base) + (0x00168+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_RD_PTR_ADDR(base,i) ((base) + (0x016C+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_WR_PTR_CFG_ERR_INFO_ADDR(base,i) ((base) + (0x0170+0x200*(i)))
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_RSV_OUT_ADDR(base) ((base) + (0x800))
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_RSV_IN_ADDR(base) ((base) + (0x804))
#define SOC_IVP_DSP_SUBSYS_RWVP_VP_DATA_OUT_0_ADDR(base) ((base) + (0x808))
#define SOC_IVP_DSP_SUBSYS_RWVP_VP_DATA_OUT_1_ADDR(base) ((base) + (0x80C))
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_MSK_ADDR(base) ((base) + (0x810))
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_SET_ADDR(base) ((base) + (0x814))
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_ADDR(base) ((base) + (0x900))
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_ADDR(base) ((base) + (0x904))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ivp_to_isp_irq : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_ivp_to_isp_irq_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_ivp_to_isp_irq_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ivp_to_isp_irq0_raw_st : 1;
        unsigned int ivp_to_isp_irq1_raw_st : 1;
        unsigned int ivp_to_isp_irq2_raw_st : 1;
        unsigned int ivp_to_isp_irq3_raw_st : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_RAW_ST_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_RAW_ST_ivp_to_isp_irq0_raw_st_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_RAW_ST_ivp_to_isp_irq0_raw_st_END (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_RAW_ST_ivp_to_isp_irq1_raw_st_START (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_RAW_ST_ivp_to_isp_irq1_raw_st_END (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_RAW_ST_ivp_to_isp_irq2_raw_st_START (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_RAW_ST_ivp_to_isp_irq2_raw_st_END (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_RAW_ST_ivp_to_isp_irq3_raw_st_START (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_RAW_ST_ivp_to_isp_irq3_raw_st_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ivp_to_isp_irq0_msk : 1;
        unsigned int ivp_to_isp_irq1_msk : 1;
        unsigned int ivp_to_isp_irq2_msk : 1;
        unsigned int ivp_to_isp_irq3_msk : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_MSK_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_MSK_ivp_to_isp_irq0_msk_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_MSK_ivp_to_isp_irq0_msk_END (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_MSK_ivp_to_isp_irq1_msk_START (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_MSK_ivp_to_isp_irq1_msk_END (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_MSK_ivp_to_isp_irq2_msk_START (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_MSK_ivp_to_isp_irq2_msk_END (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_MSK_ivp_to_isp_irq3_msk_START (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_MSK_ivp_to_isp_irq3_msk_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ivp_to_isp_irq0_set : 1;
        unsigned int ivp_to_isp_irq1_set : 1;
        unsigned int ivp_to_isp_irq2_set : 1;
        unsigned int ivp_to_isp_irq3_set : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_SET_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_SET_ivp_to_isp_irq0_set_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_SET_ivp_to_isp_irq0_set_END (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_SET_ivp_to_isp_irq1_set_START (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_SET_ivp_to_isp_irq1_set_END (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_SET_ivp_to_isp_irq2_set_START (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_SET_ivp_to_isp_irq2_set_END (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_SET_ivp_to_isp_irq3_set_START (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ_SET_ivp_to_isp_irq3_set_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ivp_to_isp_irq0_vec : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ0_VEC_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ0_VEC_ivp_to_isp_irq0_vec_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ0_VEC_ivp_to_isp_irq0_vec_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ivp_to_isp_irq1_vec : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ1_VEC_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ1_VEC_ivp_to_isp_irq1_vec_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ1_VEC_ivp_to_isp_irq1_vec_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ivp_to_isp_irq2_vec : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ2_VEC_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ2_VEC_ivp_to_isp_irq2_vec_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ2_VEC_ivp_to_isp_irq2_vec_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ivp_to_isp_irq3_vec : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ3_VEC_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ3_VEC_ivp_to_isp_irq3_vec_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_IRQ3_VEC_ivp_to_isp_irq3_vec_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int isp_to_ivp_fcm_irq0 : 1;
        unsigned int isp_to_ivp_fcm_irq1 : 1;
        unsigned int isp_to_ivp_fcm_irq2 : 1;
        unsigned int isp_to_ivp_fcm_irq3 : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_isp_to_ivp_fcm_irq0_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_isp_to_ivp_fcm_irq0_END (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_isp_to_ivp_fcm_irq1_START (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_isp_to_ivp_fcm_irq1_END (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_isp_to_ivp_fcm_irq2_START (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_isp_to_ivp_fcm_irq2_END (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_isp_to_ivp_fcm_irq3_START (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_isp_to_ivp_fcm_irq3_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int isp_to_ivp_fcm_irq0_raw_st : 1;
        unsigned int isp_to_ivp_fcm_irq1_raw_st : 1;
        unsigned int isp_to_ivp_fcm_irq2_raw_st : 1;
        unsigned int isp_to_ivp_fcm_irq3_raw_st : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_RAW_ST_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_RAW_ST_isp_to_ivp_fcm_irq0_raw_st_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_RAW_ST_isp_to_ivp_fcm_irq0_raw_st_END (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_RAW_ST_isp_to_ivp_fcm_irq1_raw_st_START (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_RAW_ST_isp_to_ivp_fcm_irq1_raw_st_END (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_RAW_ST_isp_to_ivp_fcm_irq2_raw_st_START (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_RAW_ST_isp_to_ivp_fcm_irq2_raw_st_END (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_RAW_ST_isp_to_ivp_fcm_irq3_raw_st_START (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_RAW_ST_isp_to_ivp_fcm_irq3_raw_st_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int isp_to_ivp_fcm_irq0_msk : 1;
        unsigned int isp_to_ivp_fcm_irq1_msk : 1;
        unsigned int isp_to_ivp_fcm_irq2_msk : 1;
        unsigned int isp_to_ivp_fcm_irq3_msk : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_MSK_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_MSK_isp_to_ivp_fcm_irq0_msk_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_MSK_isp_to_ivp_fcm_irq0_msk_END (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_MSK_isp_to_ivp_fcm_irq1_msk_START (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_MSK_isp_to_ivp_fcm_irq1_msk_END (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_MSK_isp_to_ivp_fcm_irq2_msk_START (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_MSK_isp_to_ivp_fcm_irq2_msk_END (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_MSK_isp_to_ivp_fcm_irq3_msk_START (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_MSK_isp_to_ivp_fcm_irq3_msk_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int isp_to_ivp_fcm_irq0_set : 1;
        unsigned int isp_to_ivp_fcm_irq1_set : 1;
        unsigned int isp_to_ivp_fcm_irq2_set : 1;
        unsigned int isp_to_ivp_fcm_irq3_set : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_SET_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_SET_isp_to_ivp_fcm_irq0_set_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_SET_isp_to_ivp_fcm_irq0_set_END (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_SET_isp_to_ivp_fcm_irq1_set_START (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_SET_isp_to_ivp_fcm_irq1_set_END (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_SET_isp_to_ivp_fcm_irq2_set_START (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_SET_isp_to_ivp_fcm_irq2_set_END (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_SET_isp_to_ivp_fcm_irq3_set_START (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_FCM_IRQ_SET_isp_to_ivp_fcm_irq3_set_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int isp_to_ivp_irq0 : 1;
        unsigned int isp_to_ivp_irq1 : 1;
        unsigned int isp_to_ivp_irq2 : 1;
        unsigned int isp_to_ivp_irq3 : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_isp_to_ivp_irq0_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_isp_to_ivp_irq0_END (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_isp_to_ivp_irq1_START (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_isp_to_ivp_irq1_END (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_isp_to_ivp_irq2_START (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_isp_to_ivp_irq2_END (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_isp_to_ivp_irq3_START (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_isp_to_ivp_irq3_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp0_buf0_end : 1;
        unsigned int rdvp0_buf1_end : 1;
        unsigned int rdvp0_buf_full : 1;
        unsigned int rdvp0_mline_end : 1;
        unsigned int wrvp0_buf0_end : 1;
        unsigned int wrvp0_buf1_end : 1;
        unsigned int wrvp0_buf_emp : 1;
        unsigned int rwvp0_other : 1;
        unsigned int rdvp1_buf0_end : 1;
        unsigned int rdvp1_buf1_end : 1;
        unsigned int rdvp1_buf_full : 1;
        unsigned int rdvp1_mline_end : 1;
        unsigned int wrvp1_buf0_end : 1;
        unsigned int wrvp1_buf1_end : 1;
        unsigned int wrvp1_buf_emp : 1;
        unsigned int rwvp1_other : 1;
        unsigned int reserved : 16;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_rdvp0_buf0_end_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_rdvp0_buf0_end_END (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_rdvp0_buf1_end_START (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_rdvp0_buf1_end_END (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_rdvp0_buf_full_START (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_rdvp0_buf_full_END (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_rdvp0_mline_end_START (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_rdvp0_mline_end_END (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_wrvp0_buf0_end_START (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_wrvp0_buf0_end_END (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_wrvp0_buf1_end_START (5)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_wrvp0_buf1_end_END (5)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_wrvp0_buf_emp_START (6)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_wrvp0_buf_emp_END (6)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_rwvp0_other_START (7)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_rwvp0_other_END (7)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_rdvp1_buf0_end_START (8)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_rdvp1_buf0_end_END (8)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_rdvp1_buf1_end_START (9)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_rdvp1_buf1_end_END (9)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_rdvp1_buf_full_START (10)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_rdvp1_buf_full_END (10)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_rdvp1_mline_end_START (11)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_rdvp1_mline_end_END (11)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_wrvp1_buf0_end_START (12)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_wrvp1_buf0_end_END (12)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_wrvp1_buf1_end_START (13)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_wrvp1_buf1_end_END (13)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_wrvp1_buf_emp_START (14)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_wrvp1_buf_emp_END (14)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_rwvp1_other_START (15)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_INT_rwvp1_other_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rwvp_bp_mode : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RWVP_BP_MODE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_BP_MODE_rwvp_bp_mode_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RWVP_BP_MODE_rwvp_bp_mode_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intp_rdvp_drop : 1;
        unsigned int intp_rdvp_buf0_end : 1;
        unsigned int intp_rdvp_buf1_end : 1;
        unsigned int intp_rdvp_buf_full : 1;
        unsigned int intp_rdvp_mline_end : 1;
        unsigned int intp_rdvp_eof : 1;
        unsigned int intp_rdvp_sof : 1;
        unsigned int intp_rdvp_frame_err : 1;
        unsigned int intp_rdvp_axi_err : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_intp_rdvp_drop_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_intp_rdvp_drop_END (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_intp_rdvp_buf0_end_START (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_intp_rdvp_buf0_end_END (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_intp_rdvp_buf1_end_START (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_intp_rdvp_buf1_end_END (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_intp_rdvp_buf_full_START (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_intp_rdvp_buf_full_END (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_intp_rdvp_mline_end_START (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_intp_rdvp_mline_end_END (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_intp_rdvp_eof_START (5)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_intp_rdvp_eof_END (5)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_intp_rdvp_sof_START (6)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_intp_rdvp_sof_END (6)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_intp_rdvp_frame_err_START (7)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_intp_rdvp_frame_err_END (7)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_intp_rdvp_axi_err_START (8)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_intp_rdvp_axi_err_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intp_rdvp_drop_en : 1;
        unsigned int intp_rdvp_buf0_end_en : 1;
        unsigned int intp_rdvp_buf1_end_en : 1;
        unsigned int intp_rdvp_buf_full_en : 1;
        unsigned int intp_rdvp_mline_end_en : 1;
        unsigned int intp_rdvp_eof_en : 1;
        unsigned int intp_rdvp_sof_en : 1;
        unsigned int intp_rdvp_frame_err_en : 1;
        unsigned int intp_rdvp_axi_err_en : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_ENABLE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_ENABLE_intp_rdvp_drop_en_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_ENABLE_intp_rdvp_drop_en_END (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_ENABLE_intp_rdvp_buf0_end_en_START (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_ENABLE_intp_rdvp_buf0_end_en_END (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_ENABLE_intp_rdvp_buf1_end_en_START (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_ENABLE_intp_rdvp_buf1_end_en_END (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_ENABLE_intp_rdvp_buf_full_en_START (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_ENABLE_intp_rdvp_buf_full_en_END (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_ENABLE_intp_rdvp_mline_end_en_START (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_ENABLE_intp_rdvp_mline_end_en_END (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_ENABLE_intp_rdvp_eof_en_START (5)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_ENABLE_intp_rdvp_eof_en_END (5)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_ENABLE_intp_rdvp_sof_en_START (6)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_ENABLE_intp_rdvp_sof_en_END (6)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_ENABLE_intp_rdvp_frame_err_en_START (7)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_ENABLE_intp_rdvp_frame_err_en_END (7)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_ENABLE_intp_rdvp_axi_err_en_START (8)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_ENABLE_intp_rdvp_axi_err_en_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intp_rdvp_drop_set : 1;
        unsigned int intp_rdvp_buf0_end_set : 1;
        unsigned int intp_rdvp_buf1_end_set : 1;
        unsigned int intp_rdvp_buf_full_set : 1;
        unsigned int intp_rdvp_mline_end_set : 1;
        unsigned int intp_rdvp_eof_set : 1;
        unsigned int intp_rdvp_sof_set : 1;
        unsigned int intp_rdvp_frame_err_set : 1;
        unsigned int intp_rdvp_axi_err_set : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_SET_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_SET_intp_rdvp_drop_set_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_SET_intp_rdvp_drop_set_END (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_SET_intp_rdvp_buf0_end_set_START (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_SET_intp_rdvp_buf0_end_set_END (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_SET_intp_rdvp_buf1_end_set_START (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_SET_intp_rdvp_buf1_end_set_END (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_SET_intp_rdvp_buf_full_set_START (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_SET_intp_rdvp_buf_full_set_END (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_SET_intp_rdvp_mline_end_set_START (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_SET_intp_rdvp_mline_end_set_END (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_SET_intp_rdvp_eof_set_START (5)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_SET_intp_rdvp_eof_set_END (5)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_SET_intp_rdvp_sof_set_START (6)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_SET_intp_rdvp_sof_set_END (6)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_SET_intp_rdvp_frame_err_set_START (7)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_SET_intp_rdvp_frame_err_set_END (7)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_SET_intp_rdvp_axi_err_set_START (8)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_INT_SET_intp_rdvp_axi_err_set_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_EN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_EN_rdvp_en_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_EN_rdvp_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_frame_go_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_FRAME_GO_EN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_FRAME_GO_EN_rdvp_frame_go_en_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_FRAME_GO_EN_rdvp_frame_go_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_rec_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_REC_EN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_REC_EN_rdvp_rec_en_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_REC_EN_rdvp_rec_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_axi_wr_outs_max : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_AXI_WR_OUTS_MAX_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_AXI_WR_OUTS_MAX_rdvp_axi_wr_outs_max_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_AXI_WR_OUTS_MAX_rdvp_axi_wr_outs_max_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_frame_size : 13;
        unsigned int reserved : 19;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_FRAME_SIZE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_FRAME_SIZE_rdvp_frame_size_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_FRAME_SIZE_rdvp_frame_size_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_line_size : 13;
        unsigned int reserved : 19;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_LINE_SIZE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_LINE_SIZE_rdvp_line_size_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_LINE_SIZE_rdvp_line_size_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_pixel_format : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_PIXEL_FORMAT_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_PIXEL_FORMAT_rdvp_pixel_format_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_PIXEL_FORMAT_rdvp_pixel_format_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_frame_go : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_FRAME_GO_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_FRAME_GO_rdvp_frame_go_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_FRAME_GO_rdvp_frame_go_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_rst_start : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RST_START_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RST_START_rdvp_rst_start_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RST_START_rdvp_rst_start_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_rst_ready : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RST_READY_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RST_READY_rdvp_rst_ready_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RST_READY_rdvp_rst_ready_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_rst : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RST_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RST_rdvp_rst_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RST_rdvp_rst_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 4;
        unsigned int rdvp_dtcm_buf0_begin : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_DTCM_BUF0_BEGIN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_DTCM_BUF0_BEGIN_rdvp_dtcm_buf0_begin_START (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_DTCM_BUF0_BEGIN_rdvp_dtcm_buf0_begin_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 4;
        unsigned int rdvp_dtcm_buf0_end : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_DTCM_BUF0_END_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_DTCM_BUF0_END_rdvp_dtcm_buf0_end_START (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_DTCM_BUF0_END_rdvp_dtcm_buf0_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 4;
        unsigned int rdvp_dtcm_buf1_begin : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_DTCM_BUF1_BEGIN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_DTCM_BUF1_BEGIN_rdvp_dtcm_buf1_begin_START (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_DTCM_BUF1_BEGIN_rdvp_dtcm_buf1_begin_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 4;
        unsigned int rdvp_dtcm_buf1_end : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_DTCM_BUF1_END_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_DTCM_BUF1_END_rdvp_dtcm_buf1_end_START (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_DTCM_BUF1_END_rdvp_dtcm_buf1_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_mline : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_MLINE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_MLINE_rdvp_mline_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_MLINE_rdvp_mline_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_rd_ptr : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RD_PTR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RD_PTR_rdvp_rd_ptr_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RD_PTR_rdvp_rd_ptr_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 4;
        unsigned int rdvp_axi_addrp : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_AXI_ADDRP_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_AXI_ADDRP_rdvp_axi_addrp_START (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_AXI_ADDRP_rdvp_axi_addrp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_pixel_cnt : 14;
        unsigned int reserved : 18;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_PIXEL_CNT_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_PIXEL_CNT_rdvp_pixel_cnt_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_PIXEL_CNT_rdvp_pixel_cnt_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_line_cnt : 14;
        unsigned int reserved : 18;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_LINE_CNT_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_LINE_CNT_rdvp_line_cnt_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_LINE_CNT_rdvp_line_cnt_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_frame_size_err_info : 14;
        unsigned int reserved : 18;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_FRAME_SIZE_ERR_INFO_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_FRAME_SIZE_ERR_INFO_rdvp_frame_size_err_info_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_FRAME_SIZE_ERR_INFO_rdvp_frame_size_err_info_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_line_size_err_info : 14;
        unsigned int reserved : 18;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_LINE_SIZE_ERR_INFO_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_LINE_SIZE_ERR_INFO_rdvp_line_size_err_info_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_LINE_SIZE_ERR_INFO_rdvp_line_size_err_info_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_axi_err_info : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_AXI_ERR_INFO_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_AXI_ERR_INFO_rdvp_axi_err_info_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_AXI_ERR_INFO_rdvp_axi_err_info_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_buf_state : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_BUF_STATE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_BUF_STATE_rdvp_buf_state_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_BUF_STATE_rdvp_buf_state_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_vp_state : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_VP_STATE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_VP_STATE_rdvp_vp_state_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_VP_STATE_rdvp_vp_state_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_wr_ptr : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_WR_PTR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_WR_PTR_rdvp_wr_ptr_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_WR_PTR_rdvp_wr_ptr_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdvp_err_rd_ptr : 29;
        unsigned int rdvp_rd_ptr_cfg_err : 1;
        unsigned int reserved : 2;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RD_PTR_CFG_ERR_INFO_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RD_PTR_CFG_ERR_INFO_rdvp_err_rd_ptr_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RD_PTR_CFG_ERR_INFO_rdvp_err_rd_ptr_END (28)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RD_PTR_CFG_ERR_INFO_rdvp_rd_ptr_cfg_err_START (29)
#define SOC_IVP_DSP_SUBSYS_RWVP_RDVP_RD_PTR_CFG_ERR_INFO_rdvp_rd_ptr_cfg_err_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intp_wrvp_buf0_end : 1;
        unsigned int intp_wrvp_buf1_end : 1;
        unsigned int intp_wrvp_buf_empt : 1;
        unsigned int intp_wrvp_eof : 1;
        unsigned int intp_wrvp_sof : 1;
        unsigned int intp_wrvp_axi_err : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_intp_wrvp_buf0_end_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_intp_wrvp_buf0_end_END (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_intp_wrvp_buf1_end_START (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_intp_wrvp_buf1_end_END (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_intp_wrvp_buf_empt_START (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_intp_wrvp_buf_empt_END (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_intp_wrvp_eof_START (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_intp_wrvp_eof_END (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_intp_wrvp_sof_START (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_intp_wrvp_sof_END (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_intp_wrvp_axi_err_START (5)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_intp_wrvp_axi_err_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intp_wrvp_buf0_end_en : 1;
        unsigned int intp_wrvp_buf1_end_en : 1;
        unsigned int intp_wrvp_buf_empt_en : 1;
        unsigned int intp_wrvp_eof_en : 1;
        unsigned int intp_wrvp_sof_en : 1;
        unsigned int intp_wrvp_axi_err_en : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_ENABLE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_ENABLE_intp_wrvp_buf0_end_en_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_ENABLE_intp_wrvp_buf0_end_en_END (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_ENABLE_intp_wrvp_buf1_end_en_START (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_ENABLE_intp_wrvp_buf1_end_en_END (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_ENABLE_intp_wrvp_buf_empt_en_START (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_ENABLE_intp_wrvp_buf_empt_en_END (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_ENABLE_intp_wrvp_eof_en_START (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_ENABLE_intp_wrvp_eof_en_END (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_ENABLE_intp_wrvp_sof_en_START (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_ENABLE_intp_wrvp_sof_en_END (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_ENABLE_intp_wrvp_axi_err_en_START (5)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_ENABLE_intp_wrvp_axi_err_en_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intp_wrvp_buf0_end_set : 1;
        unsigned int intp_wrvp_buf1_end_set : 1;
        unsigned int intp_wrvp_buf_empt_set : 1;
        unsigned int intp_wrvp_eof_set : 1;
        unsigned int intp_wrvp_sof_set : 1;
        unsigned int intp_wrvp_axi_err_set : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_SET_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_SET_intp_wrvp_buf0_end_set_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_SET_intp_wrvp_buf0_end_set_END (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_SET_intp_wrvp_buf1_end_set_START (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_SET_intp_wrvp_buf1_end_set_END (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_SET_intp_wrvp_buf_empt_set_START (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_SET_intp_wrvp_buf_empt_set_END (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_SET_intp_wrvp_eof_set_START (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_SET_intp_wrvp_eof_set_END (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_SET_intp_wrvp_sof_set_START (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_SET_intp_wrvp_sof_set_END (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_SET_intp_wrvp_axi_err_set_START (5)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_INT_SET_intp_wrvp_axi_err_set_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wrvp_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_EN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_EN_wrvp_en_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_EN_wrvp_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wrvp_frame_go_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_FRAME_GO_EN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_FRAME_GO_EN_wrvp_frame_go_en_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_FRAME_GO_EN_wrvp_frame_go_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wrvp_rec_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_REC_EN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_REC_EN_wrvp_rec_en_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_REC_EN_wrvp_rec_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wrvp_axi_rd_outs_max : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_AXI_RD_OUTS_MAX_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_AXI_RD_OUTS_MAX_wrvp_axi_rd_outs_max_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_AXI_RD_OUTS_MAX_wrvp_axi_rd_outs_max_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wrvp_frame_size : 13;
        unsigned int reserved : 19;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_FRAME_SIZE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_FRAME_SIZE_wrvp_frame_size_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_FRAME_SIZE_wrvp_frame_size_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wrvp_line_size : 13;
        unsigned int reserved : 19;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_LINE_SIZE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_LINE_SIZE_wrvp_line_size_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_LINE_SIZE_wrvp_line_size_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wrvp_pixel_format : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_PIXEL_FORMAT_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_PIXEL_FORMAT_wrvp_pixel_format_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_PIXEL_FORMAT_wrvp_pixel_format_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wrvp_frame_go : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_FRAME_GO_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_FRAME_GO_wrvp_frame_go_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_FRAME_GO_wrvp_frame_go_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wrvp_rst_start : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_RST_START_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_RST_START_wrvp_rst_start_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_RST_START_wrvp_rst_start_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wrvp_rst_ready : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_RST_READY_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_RST_READY_wrvp_rst_ready_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_RST_READY_wrvp_rst_ready_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wrvp_rst : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_RST_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_RST_wrvp_rst_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_RST_wrvp_rst_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 4;
        unsigned int wrvp_dtcm_buf0_begin : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_DTCM_BUF0_BEGIN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_DTCM_BUF0_BEGIN_wrvp_dtcm_buf0_begin_START (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_DTCM_BUF0_BEGIN_wrvp_dtcm_buf0_begin_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 4;
        unsigned int wrvp_dtcm_buf0_end : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_DTCM_BUF0_END_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_DTCM_BUF0_END_wrvp_dtcm_buf0_end_START (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_DTCM_BUF0_END_wrvp_dtcm_buf0_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 4;
        unsigned int wrvp_dtcm_buf1_begin : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_DTCM_BUF1_BEGIN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_DTCM_BUF1_BEGIN_wrvp_dtcm_buf1_begin_START (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_DTCM_BUF1_BEGIN_wrvp_dtcm_buf1_begin_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 4;
        unsigned int wrvp_dtcm_buf1_end : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_DTCM_BUF1_END_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_DTCM_BUF1_END_wrvp_dtcm_buf1_end_START (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_DTCM_BUF1_END_wrvp_dtcm_buf1_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wrvp_wr_ptr : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_WR_PTR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_WR_PTR_wrvp_wr_ptr_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_WR_PTR_wrvp_wr_ptr_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 4;
        unsigned int wrvp_axi_addrp : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_AXI_ADDRP_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_AXI_ADDRP_wrvp_axi_addrp_START (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_AXI_ADDRP_wrvp_axi_addrp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wrvp_pixel_cnt : 14;
        unsigned int reserved : 18;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_PIXEL_CNT_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_PIXEL_CNT_wrvp_pixel_cnt_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_PIXEL_CNT_wrvp_pixel_cnt_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wrvp_line_cnt : 14;
        unsigned int reserved : 18;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_LINE_CNT_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_LINE_CNT_wrvp_line_cnt_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_LINE_CNT_wrvp_line_cnt_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wrvp_axi_err_info : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_AXI_ERR_INFO_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_AXI_ERR_INFO_wrvp_axi_err_info_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_AXI_ERR_INFO_wrvp_axi_err_info_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wrvp_buf_state : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_BUF_STATE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_BUF_STATE_wrvp_buf_state_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_BUF_STATE_wrvp_buf_state_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wrvp_vp_state : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_VP_STATE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_VP_STATE_wrvp_vp_state_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_VP_STATE_wrvp_vp_state_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wrvp_rd_ptr : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_RD_PTR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_RD_PTR_wrvp_rd_ptr_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_RD_PTR_wrvp_rd_ptr_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wrvp_err_wr_ptr : 29;
        unsigned int wrvp_wr_ptr_cfg_err : 1;
        unsigned int reserved : 2;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_WRVP_WR_PTR_CFG_ERR_INFO_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_WR_PTR_CFG_ERR_INFO_wrvp_err_wr_ptr_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_WR_PTR_CFG_ERR_INFO_wrvp_err_wr_ptr_END (28)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_WR_PTR_CFG_ERR_INFO_wrvp_wr_ptr_cfg_err_START (29)
#define SOC_IVP_DSP_SUBSYS_RWVP_WRVP_WR_PTR_CFG_ERR_INFO_wrvp_wr_ptr_cfg_err_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ivp_to_isp_rsv_out : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_RSV_OUT_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_RSV_OUT_ivp_to_isp_rsv_out_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_TO_ISP_RSV_OUT_ivp_to_isp_rsv_out_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int isp_to_ivp_rsv_in : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_RSV_IN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_RSV_IN_isp_to_ivp_rsv_in_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_RSV_IN_isp_to_ivp_rsv_in_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vp_data_out_0 : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_VP_DATA_OUT_0_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_VP_DATA_OUT_0_vp_data_out_0_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_VP_DATA_OUT_0_vp_data_out_0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vp_data_out_1 : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_VP_DATA_OUT_1_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_VP_DATA_OUT_1_vp_data_out_1_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_VP_DATA_OUT_1_vp_data_out_1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int isp_to_ivp_irq0_msk : 1;
        unsigned int isp_to_ivp_irq1_msk : 1;
        unsigned int isp_to_ivp_irq2_msk : 1;
        unsigned int isp_to_ivp_irq3_msk : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_MSK_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_MSK_isp_to_ivp_irq0_msk_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_MSK_isp_to_ivp_irq0_msk_END (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_MSK_isp_to_ivp_irq1_msk_START (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_MSK_isp_to_ivp_irq1_msk_END (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_MSK_isp_to_ivp_irq2_msk_START (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_MSK_isp_to_ivp_irq2_msk_END (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_MSK_isp_to_ivp_irq3_msk_START (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_MSK_isp_to_ivp_irq3_msk_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int isp_to_ivp_irq0_set : 1;
        unsigned int isp_to_ivp_irq1_set : 1;
        unsigned int isp_to_ivp_irq2_set : 1;
        unsigned int isp_to_ivp_irq3_set : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_SET_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_SET_isp_to_ivp_irq0_set_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_SET_isp_to_ivp_irq0_set_END (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_SET_isp_to_ivp_irq1_set_START (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_SET_isp_to_ivp_irq1_set_END (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_SET_isp_to_ivp_irq2_set_START (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_SET_isp_to_ivp_irq2_set_END (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_SET_isp_to_ivp_irq3_set_START (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_ISP_TO_IVP_IRQ_SET_isp_to_ivp_irq3_set_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int isp_ivp_valid_0 : 1;
        unsigned int ivp_isp_accept_0 : 1;
        unsigned int ivp_isp_valid_0 : 1;
        unsigned int isp_ivp_accept_0 : 1;
        unsigned int isp_ivp_valid_1 : 1;
        unsigned int ivp_isp_accept_1 : 1;
        unsigned int ivp_isp_valid_1 : 1;
        unsigned int isp_ivp_accept_1 : 1;
        unsigned int arvalid_m3 : 1;
        unsigned int arready_m3 : 1;
        unsigned int rvalid_m3 : 1;
        unsigned int rready_m3 : 1;
        unsigned int awvalid_m3 : 1;
        unsigned int awready_m3 : 1;
        unsigned int wvalid_m3 : 1;
        unsigned int wready_m3 : 1;
        unsigned int bvalid_m3 : 1;
        unsigned int bready_m3 : 1;
        unsigned int arvalid_m5 : 1;
        unsigned int arready_m5 : 1;
        unsigned int rvalid_m5 : 1;
        unsigned int rready_m5 : 1;
        unsigned int awvalid_m5 : 1;
        unsigned int awready_m5 : 1;
        unsigned int wvalid_m5 : 1;
        unsigned int wready_m5 : 1;
        unsigned int bvalid_m5 : 1;
        unsigned int bready_m5 : 1;
        unsigned int arvalid_m1 : 1;
        unsigned int arready_m1 : 1;
        unsigned int rvalid_m1 : 1;
        unsigned int rready_m1 : 1;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_isp_ivp_valid_0_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_isp_ivp_valid_0_END (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_ivp_isp_accept_0_START (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_ivp_isp_accept_0_END (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_ivp_isp_valid_0_START (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_ivp_isp_valid_0_END (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_isp_ivp_accept_0_START (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_isp_ivp_accept_0_END (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_isp_ivp_valid_1_START (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_isp_ivp_valid_1_END (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_ivp_isp_accept_1_START (5)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_ivp_isp_accept_1_END (5)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_ivp_isp_valid_1_START (6)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_ivp_isp_valid_1_END (6)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_isp_ivp_accept_1_START (7)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_isp_ivp_accept_1_END (7)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_arvalid_m3_START (8)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_arvalid_m3_END (8)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_arready_m3_START (9)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_arready_m3_END (9)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_rvalid_m3_START (10)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_rvalid_m3_END (10)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_rready_m3_START (11)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_rready_m3_END (11)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_awvalid_m3_START (12)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_awvalid_m3_END (12)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_awready_m3_START (13)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_awready_m3_END (13)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_wvalid_m3_START (14)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_wvalid_m3_END (14)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_wready_m3_START (15)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_wready_m3_END (15)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_bvalid_m3_START (16)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_bvalid_m3_END (16)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_bready_m3_START (17)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_bready_m3_END (17)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_arvalid_m5_START (18)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_arvalid_m5_END (18)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_arready_m5_START (19)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_arready_m5_END (19)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_rvalid_m5_START (20)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_rvalid_m5_END (20)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_rready_m5_START (21)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_rready_m5_END (21)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_awvalid_m5_START (22)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_awvalid_m5_END (22)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_awready_m5_START (23)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_awready_m5_END (23)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_wvalid_m5_START (24)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_wvalid_m5_END (24)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_wready_m5_START (25)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_wready_m5_END (25)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_bvalid_m5_START (26)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_bvalid_m5_END (26)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_bready_m5_START (27)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_bready_m5_END (27)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_arvalid_m1_START (28)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_arvalid_m1_END (28)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_arready_m1_START (29)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_arready_m1_END (29)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_rvalid_m1_START (30)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_rvalid_m1_END (30)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_rready_m1_START (31)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_0_rready_m1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int awvalid_m1 : 1;
        unsigned int awready_m1 : 1;
        unsigned int wvalid_m1 : 1;
        unsigned int wready_m1 : 1;
        unsigned int bvalid_m1 : 1;
        unsigned int bready_m1 : 1;
        unsigned int arvalid_m2 : 1;
        unsigned int arready_m2 : 1;
        unsigned int rvalid_m2 : 1;
        unsigned int rready_m2 : 1;
        unsigned int awvalid_m2 : 1;
        unsigned int awready_m2 : 1;
        unsigned int wvalid_m2 : 1;
        unsigned int wready_m2 : 1;
        unsigned int bvalid_m2 : 1;
        unsigned int bready_m2 : 1;
        unsigned int arvalid_m4 : 1;
        unsigned int arready_m4 : 1;
        unsigned int rvalid_m4 : 1;
        unsigned int rready_m4 : 1;
        unsigned int awvalid_m4 : 1;
        unsigned int awready_m4 : 1;
        unsigned int wvalid_m4 : 1;
        unsigned int wready_m4 : 1;
        unsigned int bvalid_m4 : 1;
        unsigned int bready_m4 : 1;
        unsigned int dw_axi_m1_st : 1;
        unsigned int dw_axi_m2_st : 1;
        unsigned int dw_axi_m3_st : 1;
        unsigned int dw_axi_m4_st : 1;
        unsigned int dw_axi_m5_st : 1;
        unsigned int reserved : 1;
    } reg;
} SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_awvalid_m1_START (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_awvalid_m1_END (0)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_awready_m1_START (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_awready_m1_END (1)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_wvalid_m1_START (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_wvalid_m1_END (2)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_wready_m1_START (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_wready_m1_END (3)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_bvalid_m1_START (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_bvalid_m1_END (4)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_bready_m1_START (5)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_bready_m1_END (5)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_arvalid_m2_START (6)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_arvalid_m2_END (6)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_arready_m2_START (7)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_arready_m2_END (7)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_rvalid_m2_START (8)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_rvalid_m2_END (8)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_rready_m2_START (9)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_rready_m2_END (9)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_awvalid_m2_START (10)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_awvalid_m2_END (10)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_awready_m2_START (11)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_awready_m2_END (11)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_wvalid_m2_START (12)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_wvalid_m2_END (12)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_wready_m2_START (13)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_wready_m2_END (13)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_bvalid_m2_START (14)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_bvalid_m2_END (14)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_bready_m2_START (15)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_bready_m2_END (15)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_arvalid_m4_START (16)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_arvalid_m4_END (16)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_arready_m4_START (17)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_arready_m4_END (17)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_rvalid_m4_START (18)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_rvalid_m4_END (18)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_rready_m4_START (19)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_rready_m4_END (19)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_awvalid_m4_START (20)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_awvalid_m4_END (20)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_awready_m4_START (21)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_awready_m4_END (21)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_wvalid_m4_START (22)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_wvalid_m4_END (22)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_wready_m4_START (23)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_wready_m4_END (23)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_bvalid_m4_START (24)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_bvalid_m4_END (24)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_bready_m4_START (25)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_bready_m4_END (25)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_dw_axi_m1_st_START (26)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_dw_axi_m1_st_END (26)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_dw_axi_m2_st_START (27)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_dw_axi_m2_st_END (27)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_dw_axi_m3_st_START (28)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_dw_axi_m3_st_END (28)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_dw_axi_m4_st_START (29)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_dw_axi_m4_st_END (29)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_dw_axi_m5_st_START (30)
#define SOC_IVP_DSP_SUBSYS_RWVP_IVP_DEBUG_1_dw_axi_m5_st_END (30)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
