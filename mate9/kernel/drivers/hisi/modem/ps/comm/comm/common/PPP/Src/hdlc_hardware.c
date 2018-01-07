


/******************************************************************************
   ͷ�ļ�����
******************************************************************************/
#include "product_config.h"
#include "TTFComm.h"
#include "soc_sctrl_interface.h"

#if ((VOS_RTOSCK == VOS_OS_VER) || (VOS_WIN32 == VOS_OS_VER))
#include "pppc_ctrl.h"
#endif

#include "mdrv.h"
#include "hdlc_hardware.h"

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif

/*****************************************************************************
   1 Э��ջ��ӡ��㷽ʽ�µ�.C�ļ��궨��
*****************************************************************************/
#define    THIS_FILE_ID        PS_FILE_ID_HDLC_HARDWARE_C


/******************************************************************************
   2 �ⲿ������������
******************************************************************************/
#if (VOS_OS_VER == VOS_WIN32)
extern VOS_UINT8   g_ucScCtrlRegAddr[0xFFC];
#endif


/*****************************************************************************
   3 ˽�ж���
*****************************************************************************/


/*****************************************************************************
   4 ȫ�ֱ�������
*****************************************************************************/
/* ���װ����ķ�����֡��Ϣ */
HDLC_DEF_UNCOMPLETED_INFO_STRU  g_stUncompletedInfo = {0};

/* ������װʹ�õ��ڴ� */
HDLC_DEF_BUFF_INFO_STRU        *g_pstHdlcDefBufInfo = VOS_NULL_PTR;

/* �����װʹ�õ��ڴ� */
HDLC_FRM_BUFF_INFO_STRU        *g_pstHdlcFrmBufInfo = VOS_NULL_PTR;

/* HDLC���������Ϣ */
HDLC_CONFIG_INFO_STRU           g_stHdlcConfigInfo  =
{
    0,
    0,
    0,
    0,
    0,
    HDLC_DEF_INTERRUPT_LIMIT_DEFAULT,
    HDLC_FRM_INTERRUPT_LIMIT_DEFAULT,
    VOS_NULL_PTR,
    0
};

/* ͳ����Ϣ */
PPP_HDLC_HARD_DATA_PROC_STAT_ST g_PppHdlcHardStat   = {0};

/* ������ԭʼ�ж�ʱ��RAW_INT��STATUSֵ */
HDLC_REG_SAVE_INFO_STRU         g_stHdlcRegSaveInfo;

/* ϵͳ����������ַ */
VOS_UINT_PTR                    g_ulHdlcScCtrlBaseAddr  = 0;

/******************************************************************************
   5 ����ʵ��
******************************************************************************/


/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_PeriphClkOpen
 ��������  : ��HDLCʱ��
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��6��13��
    ��    ��   : c00191211
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID PPP_HDLC_HARD_PeriphClkOpen(VOS_VOID)
{
    VOS_UINT32      ulValue = 0;

    ulValue |= (1 << HDLC_CRG_CLK_BITPOS);
    PPP_HDLC_WRITE_32REG(HDLC_CRG_CLKEN4_ADDR(g_ulHdlcScCtrlBaseAddr), ulValue);

    return;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_PeriphClkClose
 ��������  : �ر�HDLCʱ��
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��6��13��
    ��    ��   : c00191211
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID PPP_HDLC_HARD_PeriphClkClose(VOS_VOID)
{
    VOS_UINT32      ulValue = 0;

    ulValue |= (1 << HDLC_CRG_CLK_BITPOS);
    PPP_HDLC_WRITE_32REG(HDLC_CRG_CLKENDIS4_ADDR(g_ulHdlcScCtrlBaseAddr), ulValue);

    return;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_MntnSetConfig
 ��������  : ���ÿ�ά�ɲ�ȼ�
 �������  : ulConfig - ��ά�ɲ�ȼ�
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT32 PPP_HDLC_HARD_MntnSetConfig(VOS_UINT32 ulConfig)
{
    g_stHdlcConfigInfo.ulHdlcMntnTraceCfg = ulConfig;

    return g_stHdlcConfigInfo.ulHdlcMntnTraceCfg;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_MntnSetDefIntLimit
 ��������  : ���ý��װ�ж�ˮ��
 �������  : ulIntLimit - �ж�ˮ��
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT32 PPP_HDLC_HARD_MntnSetDefIntLimit(VOS_UINT32 ulIntLimit)
{
    g_stHdlcConfigInfo.ulHdlcDefIntLimit = ulIntLimit;

    return g_stHdlcConfigInfo.ulHdlcDefIntLimit;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_MntnSetFrmIntLimit
 ��������  : ���÷�װ�ж�ˮ��
 �������  : ulIntLimit - �ж�ˮ��
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT32 PPP_HDLC_HARD_MntnSetFrmIntLimit(VOS_UINT32 ulIntLimit)
{
    g_stHdlcConfigInfo.ulHdlcFrmIntLimit = ulIntLimit;

    return g_stHdlcConfigInfo.ulHdlcFrmIntLimit;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_MntnTraceMsg
 ��������  : ������������
 �������  : pstHead    - ��Ϣ�׵�ַ
             ulMsgname  - ��ϢID
             ulDataLen  - ��Ϣ����
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID PPP_HDLC_HARD_MntnTraceMsg
(
    HDLC_MNTN_TRACE_HEAD_STRU          *pstHead,
    HDLC_MNTN_EVENT_TYPE_ENUM_UINT32    ulMsgname,
    VOS_UINT32                          ulDataLen
)
{
    pstHead->ulReceiverCpuId = VOS_LOCAL_CPUID;
    pstHead->ulReceiverPid   = PS_PID_PPP_HDLC;
    pstHead->ulSenderCpuId   = VOS_LOCAL_CPUID;
    pstHead->ulSenderPid     = PS_PID_PPP_HDLC;
    pstHead->ulLength        = ulDataLen - VOS_MSG_HEAD_LENGTH;

    pstHead->ulMsgname       = ulMsgname;

    PPP_MNTN_TRACE_MSG(pstHead);

    return;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_MntnDefTraceRegConfig
 ��������  : ��ȡ���װ�Ĵ�����������
 �������  : ulEnable   -   ��װ���װʹ��ǰ����ʹ�ܺ�VOS_TRUE: ʹ�ܺ�,VOS_FALSE: ʹ��ǰ
             ulValue    -   ʹ�ܼĴ������õ�ֵ
             ulEnableInterrupt - �жϷ�ʽ������ѯ��ʽ������ʹ�ܺ�ȡ�Ĵ���ʱ��Ч
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��20��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID PPP_HDLC_HARD_MntnDefTraceRegConfig
(
    VOS_UINT32      ulEnable,
    VOS_UINT32      ulValue,
    VOS_UINT32      ulEnableInterrupt
)
{
    HDLC_MNTN_DEF_REG_CONFIG_STRU           stRegConfig;
    HDLC_MNTN_DEF_REG_CONFIG_STRU          *pstRegConfig = &stRegConfig;
    VOS_UINT32                              ulDataLen;

    if ((g_stHdlcConfigInfo.ulHdlcMntnTraceCfg & PPP_HDLC_MNTN_TRACE_REG) != 0)
    {
        ulDataLen    = sizeof(HDLC_MNTN_DEF_REG_CONFIG_STRU);

        /* ����ȫ���Ĵ������� */
        pstRegConfig->ulStateSwRst             = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_STATE_SW_RST_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulPriorTimeoutCtrl       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_PRIROR_TIMEOUT_CTRL_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulRdErrCurrAddr          = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_RD_ERR_CURR_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulWrErrCurrAddr          = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_WR_ERR_CURR_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulHdlcDefEn              = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_EN_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulHdlcDefRawInt          = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_RAW_INT_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulHdlcDefIntStatus       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_INT_STATUS_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulHdlcDefIntClr          = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_INT_CLR_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulHdlcDefCfg             = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_CFG_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulDefUncompletedLen      = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_UNCOMPLETED_LEN_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulDefUncompletedPro      = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_UNCOMPLETED_PRO_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulDefUncompletedAddr     = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_UNCOMPLETED_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulDefUncompleteStAgo     = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_UNCOMPLETED_ST_AGO_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulHdlcDefGoOn            = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_GO_ON_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulHdlcDefStatus          = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_STATUS_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulDefUncompletStNow      = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_UNCOMPLETED_ST_NOW_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulDefInLliAddr           = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_IN_LLI_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulDefInPktAddr           = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_IN_PKT_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulDefInPktLen            = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_IN_PKT_LEN_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulDefInPktLenMax         = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_IN_PKT_LEN_MAX_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulDefOutSpcAddr          = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_OUT_SPC_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulDefOutSpaceDep         = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_OUT_SPACE_DEP_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulDefRptAddr             = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_RPT_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulDefRptDep              = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_RPT_DEP_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulHdlcDefErrInfor0       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_ERR_INFO_0_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulHdlcDefErrInfor1       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_ERR_INFO_1_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulHdlcDefErrInfor2       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_ERR_INFO_2_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulHdlcDefErrInfor3       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_ERR_INFO_3_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulDefInfoFr1CntAgo       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_INFO_FRL_CNT_AGO_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulDefInfoFr1CntNow       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_INFO_FRL_CNT_NOW_ADDR(HDLC_IP_BASE_ADDR));

        /* ʹ��ǰ������ʹ�ܼĴ�����û�����ã���Ϊ����֮��HDLC�Ὺʼ��������ı������Ĵ�����ֵ */
        if( VOS_FALSE == ulEnable)
        {
            pstRegConfig->ulHdlcDefEn   = ulValue;
            PPP_HDLC_HARD_MntnTraceMsg((HDLC_MNTN_TRACE_HEAD_STRU *)pstRegConfig,
                                       ID_HDLC_MNTN_DEF_REG_BEFORE_EN, ulDataLen);
        }
        else
        {
            /* ʹ�ܺ󹴰�ʱ����������жϷ�ʽ����RawInt��Statusȡg_stHdlcRegSaveInfo�����ֵ */
            if( VOS_TRUE == ulEnableInterrupt )
            {
                pstRegConfig->ulHdlcDefRawInt   = g_stHdlcRegSaveInfo.ulHdlcDefRawInt;
                pstRegConfig->ulHdlcDefStatus   = g_stHdlcRegSaveInfo.ulHdlcDefStatus;
            }
            PPP_HDLC_HARD_MntnTraceMsg((HDLC_MNTN_TRACE_HEAD_STRU *)pstRegConfig,
                                       ID_HDLC_MNTN_DEF_REG_AFTER_EN, ulDataLen);
        }
    }

    return;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_DefCfgGoOnReg
 ��������  : ����HDLC��ͣ״̬������GO_ON�Ĵ�����Ӧ����λ
 �������  : ulDefStatus  -   ���װ״̬
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID PPP_HDLC_HARD_DefCfgGoOnReg
(
    VOS_UINT32          ulDefStatus
)
{
    /*
    hdlc_def_go_on  (0x84)
     31                  17  16  15    9   8  7   1  0
    |----------------------|----|-------|----|-----|----|
    |         Rsv          |Goon|  Rsv  |Goon| Rsv |Goon|
    Reserved             [31:17] 15'b0   h/s R/W  ����λ����ʱ����0��дʱ��Ӱ�졣
    def_rpt_ful_goon     [16]    1'b0    h/s WO   �ⲿ���װ��Ч֡��Ϣ�ϱ��ռ������ͣ���
    Reserved             [15:9]  7'b0    h/s R/W  ����λ����ʱ����0��дʱ��Ӱ�졣
    def_outspc_ful_goon  [8]     1'b0    h/s WO   �ⲿ���װ������ݴ洢�ռ������ͣ״̬���
    Reserved             [7:1]   7'b0    h/s R/W  ����λ����ʱ����0��дʱ��Ӱ�졣
    def_lcp_goon         [0]     1'b0    h/s WO   ���һ���Ϸ�LCP֡���µ�Ӳ����ͣ״̬����������װģ��δ������һ������װ�����ݣ�<=2KB(def_in_pkt_len_max)�������һ���Ϸ�LCP֡�������ͣ��֡���ȴ��������˼Ĵ���д"1"���ټ�������ʣ������ݡ�
    */

    /* GO_ONǰ����ϴν��װ��ԭʼ�ж� */
    PPP_HDLC_WRITE_32REG(SOC_ARM_HDLC_DEF_INT_CLR_ADDR(HDLC_IP_BASE_ADDR), 0xFFFFFFFFU);

    if (HDLC_DEF_STATUS_PAUSE_RPT_SPACE_FULL == ulDefStatus )
    {
        PPP_HDLC_WRITE_32REG(SOC_ARM_HDLC_DEF_GO_ON_ADDR(HDLC_IP_BASE_ADDR),
                        (VOS_UINT32)0x10000);
    }
    else if (HDLC_DEF_STATUS_PAUSE_OUTPUT_SPACE_FULL == ulDefStatus )
    {
        PPP_HDLC_WRITE_32REG(SOC_ARM_HDLC_DEF_GO_ON_ADDR(HDLC_IP_BASE_ADDR),
                        (VOS_UINT32)0x100);
    }
    else if (HDLC_DEF_STATUS_PAUSE_LCP == ulDefStatus )
    {
        PPP_HDLC_WRITE_32REG(SOC_ARM_HDLC_DEF_GO_ON_ADDR(HDLC_IP_BASE_ADDR),
                        (VOS_UINT32)0x1);
    }
    else
    {
        PPP_HDLC_ERROR_LOG1("PPP_HDLC_HARD_DefCfgGoOnReg, ERROR, Wrong ulDefStatus %d!\r\n", ulDefStatus);
    }

    return;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_MntnDefTraceUncompleteInfo
 ��������  : ��ȡ���װ����ķ�����֡��Ϣ
 �������  : pstUncompletedInfo -   ������֡��Ϣ
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID PPP_HDLC_HARD_MntnDefTraceUncompleteInfo
(
    HDLC_DEF_UNCOMPLETED_INFO_STRU     *pstUncompletedInfo
)
{
    HDLC_MNTN_DEF_UNCOMPLETED_INFO_STRU stMntnUncompletedInfo;


    VOS_MemCpy_s(&stMntnUncompletedInfo.stUncompletedInfo, sizeof(HDLC_DEF_UNCOMPLETED_INFO_STRU),
               pstUncompletedInfo, sizeof(HDLC_DEF_UNCOMPLETED_INFO_STRU));

    PPP_HDLC_HARD_MntnTraceMsg((HDLC_MNTN_TRACE_HEAD_STRU *)&stMntnUncompletedInfo,
                               ID_HDLC_MNTN_DEF_UNCOMPLETED_INFO,
                               sizeof(HDLC_MNTN_DEF_UNCOMPLETED_INFO_STRU));
    return;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_MntnShowFrmReg
 ��������  : ��ӡ��װ�Ĵ�����ǰ����
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��1��30��
    ��    ��   : c00191211
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID PPP_HDLC_HARD_MntnShowFrmReg(VOS_VOID)
{
    HDLC_MNTN_FRM_REG_CONFIG_STRU           stRegConfig;
    HDLC_MNTN_FRM_REG_CONFIG_STRU          *pstRegConfig = &stRegConfig;


    /* ����ȫ���Ĵ������� */
    pstRegConfig->ulStateSwRst          = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_STATE_SW_RST_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulPriorTimeoutCtrl    = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_PRIROR_TIMEOUT_CTRL_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulRdErrCurrAddr       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_RD_ERR_CURR_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulWrErrCurrAddr       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_WR_ERR_CURR_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulHdlcFrmEn           = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_EN_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulHdlcFrmRawInt       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_RAW_INT_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulHdlcFrmIntStatus    = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_INT_STATUS_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulHdlcFrmIntClr       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_INT_CLR_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulHdlcFrmCfg          = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_CFG_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulHdlcFrmAccm         = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_ACCM_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulHdlcFrmStatus       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_STATUS_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulFrmInLliAddr        = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_IN_LLI_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulFrmInSublliAddr     = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_IN_SUBLLI_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulFrmInPktLen         = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_IN_PKT_LEN_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulFrmInBlkAddr        = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_IN_BLK_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulFrmInBlkLen         = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_IN_BLK_LEN_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulFrmOutLliAddr       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_OUT_LLI_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulFrmOutSpaceAddr     = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_OUT_SPACE_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulFrmOutSpaceDep      = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_OUT_SPACE_DEP_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulFrmRptAddr          = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_RPT_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulFrmRptDep           = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_RPT_DEP_ADDR(HDLC_IP_BASE_ADDR));

    vos_printf("\n================HDLC Hardware ShowFrmReg Begin==========================\n");

    vos_printf("ulStateSwRst                    = 0x%x\n", pstRegConfig->ulStateSwRst);
    vos_printf("ulPriorTimeoutCtrl              = 0x%x\n", pstRegConfig->ulPriorTimeoutCtrl);
    vos_printf("ulRdErrCurrAddr                 = 0x%x\n", pstRegConfig->ulRdErrCurrAddr);
    vos_printf("ulWrErrCurrAddr                 = 0x%x\n", pstRegConfig->ulWrErrCurrAddr);
    vos_printf("ulHdlcFrmEn                     = 0x%x\n", pstRegConfig->ulHdlcFrmEn);
    vos_printf("ulHdlcFrmRawInt                 = 0x%x\n", pstRegConfig->ulHdlcFrmRawInt);
    vos_printf("ulHdlcFrmIntStatus              = 0x%x\n", pstRegConfig->ulHdlcFrmIntStatus);
    vos_printf("ulHdlcFrmIntClr                 = 0x%x\n", pstRegConfig->ulHdlcFrmIntClr);
    vos_printf("ulHdlcFrmCfg                    = 0x%x\n", pstRegConfig->ulHdlcFrmCfg);
    vos_printf("ulHdlcFrmAccm                   = 0x%x\n", pstRegConfig->ulHdlcFrmAccm);
    vos_printf("ulHdlcFrmStatus                 = 0x%x\n", pstRegConfig->ulHdlcFrmStatus);
    vos_printf("ulFrmInLliAddr                  = 0x%x\n", pstRegConfig->ulFrmInLliAddr);
    vos_printf("ulFrmInSublliAddr               = 0x%x\n", pstRegConfig->ulFrmInSublliAddr);
    vos_printf("ulFrmInPktLen                   = 0x%x\n", pstRegConfig->ulFrmInPktLen);
    vos_printf("ulFrmInBlkAddr                  = 0x%x\n", pstRegConfig->ulFrmInBlkAddr);
    vos_printf("ulFrmInBlkLen                   = 0x%x\n", pstRegConfig->ulFrmInBlkLen);
    vos_printf("ulFrmOutLliAddr                 = 0x%x\n", pstRegConfig->ulFrmOutLliAddr);
    vos_printf("ulFrmOutSpaceAddr               = 0x%x\n", pstRegConfig->ulFrmOutSpaceAddr);
    vos_printf("ulFrmOutSpaceDep                = 0x%x\n", pstRegConfig->ulFrmOutSpaceDep);
    vos_printf("ulFrmRptAddr                    = 0x%x\n", pstRegConfig->ulFrmRptAddr);
    vos_printf("ulFrmRptDep                     = 0x%x\n", pstRegConfig->ulFrmRptDep);

    vos_printf("\n================HDLC Hardware ShowFrmReg End==========================\n");

    return;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_MntnShowDefReg
 ��������  : ��ӡ���װ�Ĵ�����ǰ����
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2013��1��30��
    ��    ��   : c00191211
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID PPP_HDLC_HARD_MntnShowDefReg(VOS_VOID)
{
    HDLC_MNTN_DEF_REG_CONFIG_STRU           stRegConfig;
    HDLC_MNTN_DEF_REG_CONFIG_STRU          *pstRegConfig = &stRegConfig;


    /* ����ȫ���Ĵ������� */
    pstRegConfig->ulStateSwRst             = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_STATE_SW_RST_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulPriorTimeoutCtrl       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_PRIROR_TIMEOUT_CTRL_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulRdErrCurrAddr          = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_RD_ERR_CURR_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulWrErrCurrAddr          = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_WR_ERR_CURR_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulHdlcDefEn              = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_EN_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulHdlcDefRawInt          = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_RAW_INT_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulHdlcDefIntStatus       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_INT_STATUS_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulHdlcDefIntClr          = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_INT_CLR_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulHdlcDefCfg             = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_CFG_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulDefUncompletedLen      = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_UNCOMPLETED_LEN_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulDefUncompletedPro      = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_UNCOMPLETED_PRO_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulDefUncompletedAddr     = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_UNCOMPLETED_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulDefUncompleteStAgo     = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_UNCOMPLETED_ST_AGO_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulHdlcDefGoOn            = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_GO_ON_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulHdlcDefStatus          = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_STATUS_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulDefUncompletStNow      = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_UNCOMPLETED_ST_NOW_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulDefInLliAddr           = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_IN_LLI_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulDefInPktAddr           = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_IN_PKT_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulDefInPktLen            = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_IN_PKT_LEN_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulDefInPktLenMax         = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_IN_PKT_LEN_MAX_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulDefOutSpcAddr          = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_OUT_SPC_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulDefOutSpaceDep         = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_OUT_SPACE_DEP_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulDefRptAddr             = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_RPT_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulDefRptDep              = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_RPT_DEP_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulHdlcDefErrInfor0       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_ERR_INFO_0_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulHdlcDefErrInfor1       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_ERR_INFO_1_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulHdlcDefErrInfor2       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_ERR_INFO_2_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulHdlcDefErrInfor3       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_ERR_INFO_3_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulDefInfoFr1CntAgo       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_INFO_FRL_CNT_AGO_ADDR(HDLC_IP_BASE_ADDR));
    pstRegConfig->ulDefInfoFr1CntNow       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_INFO_FRL_CNT_NOW_ADDR(HDLC_IP_BASE_ADDR));

    vos_printf("\n================HDLC Hardware ShowDefReg Begin==========================\n");

    vos_printf("ulStateSwRst             = 0x%x\n", pstRegConfig->ulStateSwRst);
    vos_printf("ulPriorTimeoutCtrl       = 0x%x\n", pstRegConfig->ulPriorTimeoutCtrl);
    vos_printf("ulRdErrCurrAddr          = 0x%x\n", pstRegConfig->ulRdErrCurrAddr);
    vos_printf("ulWrErrCurrAddr          = 0x%x\n", pstRegConfig->ulWrErrCurrAddr);
    vos_printf("ulHdlcDefEn              = 0x%x\n", pstRegConfig->ulHdlcDefEn);
    vos_printf("ulHdlcDefRawInt          = 0x%x\n", pstRegConfig->ulHdlcDefRawInt);
    vos_printf("ulHdlcDefIntStatus       = 0x%x\n", pstRegConfig->ulHdlcDefIntStatus);
    vos_printf("ulHdlcDefIntClr          = 0x%x\n", pstRegConfig->ulHdlcDefIntClr);
    vos_printf("ulHdlcDefCfg             = 0x%x\n", pstRegConfig->ulHdlcDefCfg);
    vos_printf("ulDefUncompletedLen      = 0x%x\n", pstRegConfig->ulDefUncompletedLen);
    vos_printf("ulDefUncompletedPro      = 0x%x\n", pstRegConfig->ulDefUncompletedPro);
    vos_printf("ulDefUncompletedAddr     = 0x%x\n", pstRegConfig->ulDefUncompletedAddr);
    vos_printf("ulDefUncompleteStAgo     = 0x%x\n", pstRegConfig->ulDefUncompleteStAgo);
    vos_printf("ulHdlcDefGoOn            = 0x%x\n", pstRegConfig->ulHdlcDefGoOn);
    vos_printf("ulHdlcDefStatus          = 0x%x\n", pstRegConfig->ulHdlcDefStatus);
    vos_printf("ulDefUncompletStNow      = 0x%x\n", pstRegConfig->ulDefUncompletStNow);
    vos_printf("ulDefInLliAddr           = 0x%x\n", pstRegConfig->ulDefInLliAddr);
    vos_printf("ulDefInPktAddr           = 0x%x\n", pstRegConfig->ulDefInPktAddr);
    vos_printf("ulDefInPktLen            = 0x%x\n", pstRegConfig->ulDefInPktLen);
    vos_printf("ulDefInPktLenMax         = 0x%x\n", pstRegConfig->ulDefInPktLenMax);
    vos_printf("ulDefOutSpcAddr          = 0x%x\n", pstRegConfig->ulDefOutSpcAddr);
    vos_printf("ulDefOutSpaceDep         = 0x%x\n", pstRegConfig->ulDefOutSpaceDep);
    vos_printf("ulDefRptAddr             = 0x%x\n", pstRegConfig->ulDefRptAddr);
    vos_printf("ulDefRptDep              = 0x%x\n", pstRegConfig->ulDefRptDep);
    vos_printf("ulHdlcDefErrInfor0       = 0x%x\n", pstRegConfig->ulHdlcDefErrInfor0);
    vos_printf("ulHdlcDefErrInfor1       = 0x%x\n", pstRegConfig->ulHdlcDefErrInfor1);
    vos_printf("ulHdlcDefErrInfor2       = 0x%x\n", pstRegConfig->ulHdlcDefErrInfor2);
    vos_printf("ulHdlcDefErrInfor3       = 0x%x\n", pstRegConfig->ulHdlcDefErrInfor3);
    vos_printf("ulDefInfoFr1CntAgo       = 0x%x\n", pstRegConfig->ulDefInfoFr1CntAgo);
    vos_printf("ulDefInfoFr1CntNow       = 0x%x\n", pstRegConfig->ulDefInfoFr1CntNow);

    vos_printf("\n================HDLC Hardware ShowDefReg End==========================\n");

}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_FrmProcException
 ��������  : �쳣����
 �������  : ulStatus           -   �쳣״̬
             ulEnableInterrupt  - �жϷ�ʽ������ѯ��ʽ
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��20��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID PPP_HDLC_HARD_FrmProcException
(
    VOS_UINT32          ulStatus,
    VOS_UINT32          ulEnableInterrupt
)
{
    VOS_UINT32                          ulRawInt;


    if( VOS_TRUE == ulEnableInterrupt )
    {
        /* �������жϷ�������н��������жϲ������ʴ˴�ȡ������g_stHdlcRegSaveInfo�е�ԭʼ�жϼĴ���ֵ */
        ulRawInt                        =   g_stHdlcRegSaveInfo.ulHdlcFrmRawInt;
        g_PppHdlcHardStat.usFrmExpInfo |=   (1 << HDLC_INTERRUPT_IND_BITPOS);
    }
    else
    {
        ulRawInt  =   PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_RAW_INT_ADDR(HDLC_IP_BASE_ADDR));
    }

    PPP_HDLC_ERROR_LOG2("PPP_HDLC_HARD_FrmProcException, ERROR, Exception ocurr status 0x%x RAW_INT 0x%x\r\n", ulStatus, ulRawInt);
    PPP_HDLC_HARD_MntnShowFrmReg();
    PPP_HDLC_HARD_MntnShowDefReg();

    g_PppHdlcHardStat.usFrmExpInfo |=   (1 << HDLC_EXCEPTION_IND_BITPOS);

    /* ��λǰ��Delay 1s��֤��ά�ɲ�������� */
    VOS_TaskDelay(1000);

    /* ���HDLC�����쳣���򵥰��쳣���� */
    mdrv_om_system_error(HDLC_FRM_SYSTEM_ERROR_ID, __LINE__, (VOS_INT)ulStatus,
                         (VOS_CHAR *)&g_stHdlcRegSaveInfo,
                         sizeof(HDLC_REG_SAVE_INFO_STRU));
    (VOS_VOID)ulRawInt;

    return;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_MntnFrmTraceRegConfig
 ��������  : ��ȡ�Ĵ�����������
 �������  : ulEnable   -   ��װ���װʹ��ǰ����ʹ�ܺ�VOS_TRUE: ʹ�ܺ�,VOS_FALSE: ʹ��ǰ
             ulValue    -   ʹ�ܼĴ������õ�ֵ
             ulEnableInterrupt - �жϷ�ʽ������ѯ��ʽ������ʹ�ܺ�ȡ�Ĵ���ʱ��Ч
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��20��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID PPP_HDLC_HARD_MntnFrmTraceRegConfig
(
    VOS_UINT32      ulEnable,
    VOS_UINT32      ulValue,
    VOS_UINT32      ulEnableInterrupt
)
{
    HDLC_MNTN_FRM_REG_CONFIG_STRU           stRegConfig;
    HDLC_MNTN_FRM_REG_CONFIG_STRU          *pstRegConfig = &stRegConfig;
    VOS_UINT32                              ulDataLen;

    if ((g_stHdlcConfigInfo.ulHdlcMntnTraceCfg & PPP_HDLC_MNTN_TRACE_REG) != 0)
    {
        ulDataLen    = sizeof(HDLC_MNTN_FRM_REG_CONFIG_STRU);

        /* ����ȫ���Ĵ������� */
        pstRegConfig->ulStateSwRst          = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_STATE_SW_RST_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulPriorTimeoutCtrl    = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_PRIROR_TIMEOUT_CTRL_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulRdErrCurrAddr       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_RD_ERR_CURR_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulWrErrCurrAddr       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_WR_ERR_CURR_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulHdlcFrmEn           = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_EN_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulHdlcFrmRawInt       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_RAW_INT_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulHdlcFrmIntStatus    = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_INT_STATUS_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulHdlcFrmIntClr       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_INT_CLR_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulHdlcFrmCfg          = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_CFG_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulHdlcFrmAccm         = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_ACCM_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulHdlcFrmStatus       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_STATUS_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulFrmInLliAddr        = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_IN_LLI_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulFrmInSublliAddr     = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_IN_SUBLLI_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulFrmInPktLen         = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_IN_PKT_LEN_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulFrmInBlkAddr        = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_IN_BLK_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulFrmInBlkLen         = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_IN_BLK_LEN_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulFrmOutLliAddr       = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_OUT_LLI_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulFrmOutSpaceAddr     = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_OUT_SPACE_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulFrmOutSpaceDep      = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_OUT_SPACE_DEP_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulFrmRptAddr          = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_RPT_ADDR(HDLC_IP_BASE_ADDR));
        pstRegConfig->ulFrmRptDep           = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_RPT_DEP_ADDR(HDLC_IP_BASE_ADDR));

        /* ʹ��ǰ������ʹ�ܼĴ�����û�����ã���Ϊ����֮��HDLC�Ὺʼ��������ı������Ĵ�����ֵ */
        if( VOS_FALSE == ulEnable )
        {
            pstRegConfig->ulHdlcFrmEn    = ulValue;
            PPP_HDLC_HARD_MntnTraceMsg((HDLC_MNTN_TRACE_HEAD_STRU *)pstRegConfig,
                                       ID_HDLC_MNTN_FRM_REG_BEFORE_EN, ulDataLen);
        }
        else
        {
            /* ʹ�ܺ󹴰�ʱ����������жϷ�ʽ����RawInt��Statusȡg_stHdlcRegSaveInfo�����ֵ */
            if( VOS_TRUE == ulEnableInterrupt )
            {
                pstRegConfig->ulHdlcFrmRawInt   = g_stHdlcRegSaveInfo.ulHdlcFrmRawInt;
                pstRegConfig->ulHdlcFrmStatus   = g_stHdlcRegSaveInfo.ulHdlcFrmStatus;
            }
            PPP_HDLC_HARD_MntnTraceMsg((HDLC_MNTN_TRACE_HEAD_STRU *)pstRegConfig,
                                       ID_HDLC_MNTN_FRM_REG_AFTER_EN, ulDataLen);
        }
    }

    return;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_FrmCfgBufReg
 ��������  : ����ʹ�ܼĴ��������ϱ�ʹ��ǰ�Ĵ�����ά�ɲ�
 �������  : ulTotalLen --����װ���ݰ����ܳ���
 �������  :
 �� �� ֵ  : VOS_TRUE   - �����ж�ģʽ
             VOS_FALSE  - ������ѯģʽ
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��20��
    ��    ��   : c00191211
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT32 PPP_HDLC_HARD_FrmCfgEnReg(VOS_UINT32   ulTotalLen)
{
    /*
    1.hdlc_frm_en   (0x10)
      31   25 24  23 18 17  16  15  14  13  12  11  10   9   8  7    1  0
    |--------|---|-----|---|---|---|---|---|---|---|---|---|---|------|---|
    |   Rsv  |en | Rsv |en |en |en |en |en |en |en |en |en |en |  Rsv |en |

    Reserved            [31:25] 7'b0    h/s R/W  ����λ����ʱ����0��дʱ��Ӱ�졣
    frm_over_int_en     [24]    1'b0    h/s R/W  һ�������װ�����ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��;
    Reserved            [23:18] 6'b0    h/s R/W  ����λ����ʱ����0��дʱ��Ӱ�졣
    frm_rpt_dep_err_en  [17]    1'b0    h/s R/W  ��װ�ⲿ��ȷ֡�����ϱ��ռ䲻���ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��;
    frm_out_spc_err_en  [16]    1'b0    h/s R/W  ��װ�ⲿ����洢�ռ䲻���ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��
    frm_rpt_prm_err_en  [15]    1'b0    h/s R/W  ��װ�ϱ��ռ���ز��������ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��
    frm_out_prm_err_en  [14]    1'b0    h/s R/W  ��װ���������ز��������ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��
    frm_in_prm_err_en   [13]    1'b0    h/s R/W  ��װ����������ز��������ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��
    frm_cfg_err_en      [12]    1'b0    h/s R/W  ��װЭ�鼰��ѹ��ָʾ���ô����ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��
    frm_wr_timeout_en   [11]    1'b0    h/s R/W  ��װʱAXI����д����timeout�ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��
    frm_rd_timeout_en   [10]    1'b0    h/s R/W  ��װʱAXI���߶�����timeout�ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��
    frm_wr_err_en       [9]     1'b0    h/s R/W  ��װʱAXI����д���������ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��
    frm_rd_err_en       [8]     1'b0    h/s R/W  ��װʱAXI���߶����������ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��
    Reserved            [7:1]   7'b0    h/s R/W  ����λ����ʱ����0��дʱ��Ӱ�졣
    frm_en              [0]     1'b0    h/s R/W  һ�������װʹ�ܣ������frm_enд��1'b1������װ����;һ�������װ��ɺ���Ӳ���Զ���frm_en���㣻
                                                 ��װ���̳���ʱ��Ӳ��Ҳ���frm_en�Զ����㣬ʹ�ڲ�״̬������IDLE״̬��
                                                 дʱ����һ�������װʹ��;0����ʹ�ܷ�װ����;1��ʹ�ܷ�װ����;
                                                 ��ʱ����һ�������װ����״̬;0��û�ڽ��з�װ����;1�����ڽ��з�װ����
    */

    VOS_UINT32          ulEnableInterrupt;
    VOS_UINT32          ulValue;
    const VOS_UINT32    ulInterruptValue    = 0x0103FF01;   /* ʹ���жϷ�ʽʱ����ʹ�ܼĴ�����ֵ */
    const VOS_UINT32    ulPollValue         = 0x01;         /* ʹ����ѯ��ʽʱ����ʹ�ܼĴ�����ֵ */


    /* �жϴ���װ���ݵ��ܳ��ȣ�������������ʹ���жϷ�ʽ������ʹ����ѯ��ʽ */
    if( ulTotalLen > HDLC_FRM_INTERRUPT_LIMIT )
    {
        /* ���÷�װ���ʹ�ܼĴ���hdlc_frm_en��[31:0]λΪ0x0103FF01 */
        ulValue             = ulInterruptValue;
        ulEnableInterrupt   = VOS_TRUE;

        g_PppHdlcHardStat.ulFrmWaitIntCnt++;
    }
    else
    {
        /* ���÷�װ���ʹ�ܼĴ���hdlc_frm_en��[31:0]λΪ0x01 */
        ulValue             = ulPollValue;
        ulEnableInterrupt   = VOS_FALSE;

        g_PppHdlcHardStat.ulFrmWaitQueryCnt++;
    }

    /* ʹ��ǰ����ϴη�װ�����װ��ԭʼ�ж� */
    PPP_HDLC_WRITE_32REG(SOC_ARM_HDLC_DEF_INT_CLR_ADDR(HDLC_IP_BASE_ADDR), 0xFFFFFFFFU);
    PPP_HDLC_WRITE_32REG(SOC_ARM_HDLC_FRM_INT_CLR_ADDR(HDLC_IP_BASE_ADDR), 0xFFFFFFFFU);

    /* �ϱ��Ĵ�����ά�ɲ� */
    PPP_HDLC_HARD_MntnFrmTraceRegConfig(VOS_FALSE, ulValue, ulEnableInterrupt);

    /* ʹ��Ӳ��֮ǰ��ǿ��ARM˳��ִ�н���ǰ���ָ�� */
    TTF_FORCE_ARM_INSTUCTION();

    PPP_HDLC_WRITE_32REG(SOC_ARM_HDLC_FRM_EN_ADDR(HDLC_IP_BASE_ADDR), ulValue);

    return ulEnableInterrupt;
}


/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_DefProcException
 ��������  : �쳣����
 �������  : ulStatus           -   �쳣״̬
             ulEnableInterrupt  - �жϷ�ʽ������ѯ��ʽ
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID PPP_HDLC_HARD_DefProcException
(
    VOS_UINT32          ulStatus,
    VOS_UINT32          ulEnableInterrupt
)
{
    VOS_UINT32                          ulRawInt;


    if( VOS_TRUE == ulEnableInterrupt )
    {
        /* �������жϷ�������н��������жϲ������ʴ˴�ȡ������g_stHdlcRegSaveInfo�е�ԭʼ�жϼĴ���ֵ */
        ulRawInt                        =   g_stHdlcRegSaveInfo.ulHdlcDefRawInt;
        g_PppHdlcHardStat.usDefExpInfo |=   (1 << HDLC_INTERRUPT_IND_BITPOS);
    }
    else
    {
        ulRawInt  =   PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_RAW_INT_ADDR(HDLC_IP_BASE_ADDR));
    }

    PPP_HDLC_ERROR_LOG2("PPP_HDLC_HARD_DefProcException, ERROR, Exception ocurr status 0x%x RAW_INT 0x%x\r\n", ulStatus, ulRawInt);
    PPP_HDLC_HARD_MntnShowFrmReg();
    PPP_HDLC_HARD_MntnShowDefReg();

    g_PppHdlcHardStat.usDefExpInfo |=   (1 << HDLC_EXCEPTION_IND_BITPOS);

    /* ��λǰ��Delay 1s��֤��ά�ɲ�������� */
    VOS_TaskDelay(1000);

    /* ���HDLC�����쳣���򵥰��쳣���� */
    mdrv_om_system_error(HDLC_DEF_SYSTEM_ERROR_ID, __LINE__, (VOS_INT)ulStatus,
                         (VOS_CHAR *)&g_stHdlcRegSaveInfo,
                         sizeof(HDLC_REG_SAVE_INFO_STRU));
    (VOS_VOID)ulRawInt;

    return;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_CommWaitSem
 ��������  : �ȴ���װ���װ��ͣ�����
 �������  : ulHdlcMasterSem  -
 �������  :
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT32 PPP_HDLC_HARD_CommWaitSem
(
    VOS_UINT32          ulHdlcMasterSem,
    VOS_UINT32          ulSemTimeoutLen
)
{
    VOS_UINT32                          ulResult;

    /* �ȴ���װ����װ��� */
    ulResult = VOS_SmP(ulHdlcMasterSem, ulSemTimeoutLen);

    if (VOS_OK != ulResult)
    {
        PPP_HDLC_WARNING_LOG2("PPP_HDLC_HARD_CommWaitSem, WARNING, VOS_SmP ulHdlcMasterSem 0x%x failed! ErrorNo = 0x%x\r\n",
                      ulHdlcMasterSem, ulResult);

        g_PppHdlcHardStat.usDefExpInfo |=   (1 << HDLC_SEM_TIMEOUT_IND_BITPOS);
        g_PppHdlcHardStat.usFrmExpInfo |=   (1 << HDLC_SEM_TIMEOUT_IND_BITPOS);

        return VOS_ERR;
    }

    return VOS_OK;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_DefIsr
 ��������  : HDLC���װ�ж����֪ͨ�������
 �������  : ��
 �������  : ��
 �� �� ֵ  :
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT32 PPP_HDLC_HARD_DefIsr(unsigned int ulPara)
{
    g_stHdlcRegSaveInfo.ulHdlcDefRawInt = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_RAW_INT_ADDR(HDLC_IP_BASE_ADDR));
    g_stHdlcRegSaveInfo.ulHdlcDefStatus = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_STATUS_ADDR(HDLC_IP_BASE_ADDR));

    /* �յ�һ���жϺ����ԭʼ�ж� */
    PPP_HDLC_WRITE_32REG(SOC_ARM_HDLC_DEF_INT_CLR_ADDR(HDLC_IP_BASE_ADDR), 0xFFFFFFFFU);

    /* �ͷŷ�װ����ź��� */
    VOS_SmV(g_stHdlcConfigInfo.ulHdlcDefMasterSem);

    g_PppHdlcHardStat.ulDefIsrCnt++;


    /* drv�ṩ�Ľӿڲ����ķ���ֵ */
    return 1; /* IRQ_HANDLED; */
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_FrmIsr
 ��������  : HDLC��װ�ж����֪ͨ�������
 �������  : ��
 �������  : ��
 �� �� ֵ  :
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT32 PPP_HDLC_HARD_FrmIsr(unsigned int ulPara)
{
    g_stHdlcRegSaveInfo.ulHdlcFrmRawInt = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_RAW_INT_ADDR(HDLC_IP_BASE_ADDR));
    g_stHdlcRegSaveInfo.ulHdlcFrmStatus = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_STATUS_ADDR(HDLC_IP_BASE_ADDR));

    /* �յ�һ���жϺ����ԭʼ�ж� */
    PPP_HDLC_WRITE_32REG(SOC_ARM_HDLC_FRM_INT_CLR_ADDR(HDLC_IP_BASE_ADDR), 0xFFFFFFFFU);

    /* �ͷŷ�װ����ź��� */
    VOS_SmV(g_stHdlcConfigInfo.ulHdlcFrmMasterSem);

    g_PppHdlcHardStat.ulFrmIsrCnt++;

    /* drv�ṩ�Ľӿڲ����ķ���ֵ */
    return 1; /* IRQ_HANDLED; */
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_DefWaitStatusChange
 ��������  : ��ѯ״̬�Ĵ���
 �������  : ��
 �������  :
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT32 PPP_HDLC_HARD_DefWaitStatusChange(VOS_VOID)
{
    /*
    hdlc_def_status  (0x88)
      31 30   24 23   8 7 6  5   4   3   2  1  0
    |---|-------|------|---|---|---|---|---|----|
    |Rsv|  Type |  Num |Rsv|Idx|Ful|Ful|Now|Stat|
    Reserved             [31]    1'b0    h/s R/W  ����λ����ʱ����0��дʱ��Ӱ�졣
    def_err_type         [30:24] 7'b0    h/s RO   ��֡�ϱ�ʱ������֡���ͣ���Ӧ��bitλΪ1���������������ʹ���
                                                  bit 30����������6��ת���ַ�0x7D�����һ��Flag��
                                                  bit 29����������5����AC����ѹ��ʱ��Address��ֵ��0xFF��
                                                  bit 28����������4����AC����ѹ��ʱ��Control��ֵ��0x03��
                                                  bit 27����������3����P�������ʱ���յ��Ƿ���Protocol��ֵ��
                                                  bit 26����������2�����װ��֡�ֽ���С��4bites��
                                                  bit 25����������1�����װ��֡�ֽ�������1502bytes��PPP֡��Information�򲻳���1500Bytes������Э���򲻳���1502Bytes����
                                                  bit 24����������0�� CRCУ�����
    def_valid_num        [23:8]  16'b0   h/s RO   ��֡�ϱ�ʱ����Ч֡��Ŀ�������������һ�����ܵķ�����֡��
    Reserved             [7:6]   2'b0    h/s R/W  ����λ����ʱ����0��дʱ��Ӱ�졣
    def_error_index      [5]     1'b0    h/s RO   ���װ��������ָʾ
    def_rpt_ful          [4]     1'b0    h/s RO   ���װ�ⲿ��ȷ֡��Ϣ�ϱ��ռ������ָͣʾ
    def_out_spc_ful      [3]     1'b0    h/s RO   ���װ�ⲿ����洢�ռ������ָͣʾ
    def_uncompleted_now  [2]     1'b0    h/s RO   ����ָʾ��ǰ�����Ƿ��н��������֡��Ϊ��֧�ֶ��PPP/IP���Ŷ����ӵ����ã�0��û�У�1����
    def_all_pkt_pro_stat [1:0]   2'b0    h/s RO   һ������������״̬��00��δ���һ������������01��δ���һ�������������ѽ��LCP֡��Ӳ��������ͣ״̬��
                                                  10�����һ����������������֡�ϱ���11: ���һ����������������֡�ϱ���
    */
    VOS_UINT32              ulRsltWaitNum;           /* ��ֹӲ���쳣�ı������� */
    volatile VOS_UINT32     ulStatus;                /* ���װ״̬ */

   /* ��ѯhdlc_frm_status (0x28)�ĵ�[0]λ�͵�[1]λ���κ�һ��Ϊ1���߳�ʱ�򷵻� */

    ulRsltWaitNum = 0UL;

    while (ulRsltWaitNum < HDLC_DEF_MAX_WAIT_RESULT_NUM)
    {
        /* ��ѯ״̬�Ĵ���hdlc_def_status (0x88)��0-1��3-5λ���κ�һλ��Ϊ1��ʾ���װģ����ͣ��ֹͣ */
        ulStatus  =   PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_STATUS_ADDR(HDLC_IP_BASE_ADDR));

        if (HDLC_DEF_STATUS_DOING != (ulStatus & HDLC_DEF_STATUS_MASK))
        {
            break;
        }

        ulRsltWaitNum++;
    }

    if ( HDLC_DEF_MAX_WAIT_RESULT_NUM <= ulRsltWaitNum )
    {
        PPP_HDLC_WARNING_LOG2("PPP_HDLC_HARD_DefWaitStatusChange, WARNING, wait hdlc_def_status timeout %d status 0x%x!\r\n",
                      ulRsltWaitNum, ulStatus);

        g_PppHdlcHardStat.usDefExpInfo |=   (1 << HDLC_WAIT_STATUS_TIMEOUT_IND_BITPOS);

        return VOS_ERR;
    }

    g_PppHdlcHardStat.ulDefMaxQueryCnt = TTF_MAX(g_PppHdlcHardStat.ulDefMaxQueryCnt, ulRsltWaitNum);

    return VOS_OK;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_FrmWaitStatusChange
 ��������  : ��ѯ״̬�Ĵ���
 �������  : ��
 �������  :
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT32 PPP_HDLC_HARD_FrmWaitStatusChange(VOS_VOID)
{
    VOS_UINT32              ulFrmRsltWaitNum;           /* ��ֹӲ���쳣�ı������� */
    volatile VOS_UINT32     ulFrmStatus;                /* ��װ״̬ */


   /* ��ѯhdlc_frm_status (0x28)�ĵ�[0]λ�͵�[1]λ���κ�һ��Ϊ1���߳�ʱ�򷵻� */
    ulFrmRsltWaitNum = 0UL;

    while (ulFrmRsltWaitNum < HDLC_FRM_MAX_WAIT_RESULT_NUM)
    {
        /* ��ȡ hdlc_frm_status��[0][1]λ */
        ulFrmStatus  =   PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_STATUS_ADDR(HDLC_IP_BASE_ADDR));

        if (HDLC_FRM_ALL_PKT_DOING != (ulFrmStatus & HDLC_FRM_STATUS_MASK))
        {
            break;
        }

        ulFrmRsltWaitNum++;
    }

    if ( HDLC_FRM_MAX_WAIT_RESULT_NUM <= ulFrmRsltWaitNum )
    {
        PPP_HDLC_WARNING_LOG2("PPP_HDLC_HARD_FrmWaitStatusChange, WARNING, wait hdlc_frm_status timeout %d status 0x%x!\r\n",
                      ulFrmRsltWaitNum, ulFrmStatus);

        g_PppHdlcHardStat.usFrmExpInfo |=   (1 << HDLC_WAIT_STATUS_TIMEOUT_IND_BITPOS);

        return VOS_ERR;
    }

    g_PppHdlcHardStat.ulFrmMaxQueryCnt = TTF_MAX(g_PppHdlcHardStat.ulFrmMaxQueryCnt, ulFrmRsltWaitNum);

    return VOS_OK;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_FrmWaitResult
 ��������  : �ȴ���װ��ͣ�����
 �������  : ulEnableInterrupt  -   �ж��Ƿ�ʹ��
 �������  : ��
 �� �� ֵ  : ��װ״̬
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��20��
    ��    ��   : c00191211
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT32 PPP_HDLC_HARD_FrmWaitResult
(
    VOS_UINT32          ulEnableInterrupt
)
{
    VOS_UINT32              ulFrmStatus;        /* ��װ״̬ */
    VOS_UINT32              ulResult;


    if (VOS_TRUE == ulEnableInterrupt)
    {
        /* �ȴ��жϵõ���������״̬ */
        ulResult = PPP_HDLC_HARD_CommWaitSem(g_stHdlcConfigInfo.ulHdlcFrmMasterSem, HDLC_FRM_MASTER_INT_TIMER_LEN);

        /* �������жϷ�������н��������жϲ�������Statusָʾ�Ƿ�����bit��ԭʼ�жϼĴ���
           �������ʴ˴�ȡ������g_stHdlcRegSaveInfo�е�״ֵ̬ */
        ulFrmStatus = g_stHdlcRegSaveInfo.ulHdlcFrmStatus;
    }
    else
    {
        /* ��ѯ�õ��������� */
        ulResult = PPP_HDLC_HARD_FrmWaitStatusChange();

        /* ��ѯhdlc_frm_status (0x28)��ȡ��װ״̬�����䷵�� */
        ulFrmStatus  =  PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_STATUS_ADDR(HDLC_IP_BASE_ADDR));
    }

    /* �ϱ��Ĵ�����ά�ɲ� */
    PPP_HDLC_HARD_MntnFrmTraceRegConfig(VOS_TRUE, 0, ulEnableInterrupt);

    /* �Ȳ���˵��HDLC���ڹ��� */
    if (VOS_OK != ulResult)
    {
        return HDLC_FRM_ALL_PKT_DOING;
    }

    ulFrmStatus &=  HDLC_FRM_STATUS_MASK;

    return ulFrmStatus;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_DefWaitResult
 ��������  : �ȴ����װ��ͣ�����
 �������  : ulEnableInterrupt  -   �ж��Ƿ�ʹ��
 �������  : ���װ״̬
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT32 PPP_HDLC_HARD_DefWaitResult
(
    VOS_UINT32          ulEnableInterrupt
)
{
    VOS_UINT32                          ulStatus;                /* ���װ״̬ */
    VOS_UINT32                          ulResult;


    if (VOS_TRUE == ulEnableInterrupt)
    {
        /* �ȴ��жϵõ���ͣ�����״̬ */
        ulResult = PPP_HDLC_HARD_CommWaitSem(g_stHdlcConfigInfo.ulHdlcDefMasterSem, HDLC_DEF_MASTER_INT_TIMER_LEN);

        /* �������жϷ�������н��������жϲ�������Statusָʾ�Ƿ�����bit��ԭʼ
           �жϼĴ����������ʴ˴�ȡ������g_stHdlcRegSaveInfo�е�״ֵ̬ */
        ulStatus = g_stHdlcRegSaveInfo.ulHdlcDefStatus;

    }
    else
    {
        /* ��ѯ�õ���ͣ����� */
        ulResult = PPP_HDLC_HARD_DefWaitStatusChange();

        /* ��ѯhdlc_def_status (0x88)��ȡ���װ״̬�����䷵�� */
        ulStatus  =  PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_STATUS_ADDR(HDLC_IP_BASE_ADDR));
    }

    /* �ϱ��Ĵ�����ά�ɲ� */
    PPP_HDLC_HARD_MntnDefTraceRegConfig(VOS_TRUE, 0, ulEnableInterrupt);

    /* �Ȳ���˵��HDLC���ڹ��� */
    if (VOS_OK != ulResult)
    {
        return HDLC_DEF_STATUS_DOING;
    }

    ulStatus &=  HDLC_DEF_STATUS_MASK;

    return ulStatus;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_DefCfgEnReg
 ��������  : ���ݱ��ν��װ��������С������ʹ�úο���ʽ�ȴ�HDLC�Ľ��
 �������  : ulLinkTotalSize     -   ���ν��װ���������ڵ���������(��λ�ֽ�)
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT32 PPP_HDLC_HARD_DefCfgEnReg
(
    VOS_UINT32                      ulTotalLen
)
{
    /*
    hdlc_def_en   (0x60)
      31   25 24  23 19 18  17  16  15  14  13  12  11  10   9   8   7   1  0
    |--------|---|-----|---|---|---|---|---|---|---|---|---|---|---|------|---|
    |   Rsv  |en | Rsv |en |en |en |en |en |en |en |en |en |en |en |  Rsv |en |

    Reserved            [31:25] 7'b0    h/s R/W  ����λ����ʱ����0��дʱ��Ӱ�졣
    def_over_int_en     [24]    1'b0    h/s R/W  һ��������װ�����ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��;
    Reserved            [23:19] 5'b0    h/s R/W  ����λ����ʱ����0��дʱ��Ӱ�졣
    def_rpt_ful_en      [18]    1'b0    h/s R/W  ���װ�ⲿ��ȷ֡��Ϣ�ϱ��ռ������ͣ�ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��;
    def_out_spc_ful_en  [17]    1'b0    h/s R/W  ���װ�ⲿ����洢�ռ������ͣ�ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��
    def_lcp_int_en      [16]    1'b0    h/s R/W  ���װ�����ЧLCP֡��ͣ�ж��ϱ�ʹ��;0���жϽ�ֹ;1���ж�ʹ��
    def_rpt_prm_err_en  [15]    1'b0    h/s R/W  ���װ�ϱ��ռ���ز��������ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��
    def_out_prm_err_en  [14]    1'b0    h/s R/W  ���װ����ռ���ز��������ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��
    def_in_prm_err_en   [13]    1'b0    h/s R/W  ���װ����������ز��������ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��
    def_cfg_err_en      [12]    1'b0    h/s R/W  ���װЭ��ѹ��ָʾ���ô����ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��
    def_wr_timeout_en   [11]    1'b0    h/s R/W  ���װʱAXI����д����timeout�ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��
    def_rd_timeout _en  [10]    1'b0    h/s R/W  ���װʱAXI���߶�����timeout�ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��
    def_wr_err_en       [9]     1'b0    h/s R/W  ���װʱAXI����д���������ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��
    def_rd_err_en       [8]     1'b0    h/s R/W  ���װʱAXI���߶����������ж�ʹ��;0���жϽ�ֹ;1���ж�ʹ��
    Reserved            [7:1]   7'b0    h/s R/W  ����λ����ʱ����0��дʱ��Ӱ�졣
    def_en              [0]     1'b0    h/s R/W  һ������������װʹ�ܣ������def_enд��1'b1�������װ������һ������������װ��ɺ���Ӳ���Զ���def_en���㣻
                                                 ���װ���̳���ʱ��Ӳ��Ҳ���def_en�Զ����㣬ʹ�ڲ�״̬������IDLE״̬�����üĴ������ؽ��װ����״̬��
                                                 дʱ����һ������������װʹ�ܣ�0����ʹ�ܽ��װ����1��ʹ�ܽ��װ����
                                                 ��ʱ����һ������������װ����״̬��0��û�ڽ��н��װ����1�����ڽ��н��װ����
    */
    VOS_UINT32          ulEnableInterrupt;
    VOS_UINT32          ulValue;
    const VOS_UINT32    ulInterruptValue    = 0x0107FF01;   /* ʹ���жϷ�ʽʱ����ʹ�ܼĴ�����ֵ */
    const VOS_UINT32    ulPollValue         = 0x01;         /* ʹ����ѯ��ʽʱ����ʹ�ܼĴ�����ֵ */


    if( ulTotalLen > HDLC_DEF_INTERRUPT_LIMIT )
    {
        /* ���÷�װ���ʹ�ܼĴ���hdlc_def_en��[31:0]λΪ0x0107FF01 */
        ulValue             = ulInterruptValue;
        ulEnableInterrupt   = VOS_TRUE;

        g_PppHdlcHardStat.ulDefWaitIntCnt++;
    }
    else
    {
        /* ���÷�װ���ʹ�ܼĴ���hdlc_frm_en��[31:0]λΪ0x01 */
        ulValue             = ulPollValue;
        ulEnableInterrupt   = VOS_FALSE;

        g_PppHdlcHardStat.ulDefWaitQueryCnt++;
    }

    /* ʹ��ǰ����ϴη�װ�����װ��ԭʼ�ж� */
    PPP_HDLC_WRITE_32REG(SOC_ARM_HDLC_DEF_INT_CLR_ADDR(HDLC_IP_BASE_ADDR), 0xFFFFFFFFU);
    PPP_HDLC_WRITE_32REG(SOC_ARM_HDLC_FRM_INT_CLR_ADDR(HDLC_IP_BASE_ADDR), 0xFFFFFFFFU);

    /* �ϱ��Ĵ�����ά�ɲ� */
    PPP_HDLC_HARD_MntnDefTraceRegConfig(VOS_FALSE, ulValue, ulEnableInterrupt);

    /* ʹ��Ӳ��֮ǰ��ǿ��ARM˳��ִ�н���ǰ���ָ�� */
    TTF_FORCE_ARM_INSTUCTION();

    PPP_HDLC_WRITE_32REG(SOC_ARM_HDLC_DEF_EN_ADDR(HDLC_IP_BASE_ADDR), ulValue);

    return ulEnableInterrupt;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_CommCfgReg
 ��������  : ����ͨ�üĴ���
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID PPP_HDLC_HARD_CommCfgReg(VOS_VOID)
{
    /*
    prior_timeout_ctrl(0x04)
      31  24   23                16   15  9         8             7   2    1          0
    |--------|----------------------|-------|-------------------|-------|---------------|
    |   Rsv  | axireq_timeout_value |  Rsv  | axireq_timeout_en |  Rsv  |hdlc_prior_ctrl|

    Reserved             [31:24] 8'b0   h/s R/W  ����λ����ʱ����0��дʱ��Ӱ�졣
    axireq_timeout_value [23:16] 8'b0   h/s R/W  �������AXI���߶�д����ʱ���ж�ֵ
    Reserved             [15:9]  2'b0   h/s R/W  ����λ����ʱ����0��дʱ��Ӱ�졣
    axireq_timeout_en    [8]     1'b0   h/s R/W  �Ƿ�����Ӳ���ж�AXI���߶�д����ʱ����������ã�
                                                   0������
                                                   1����
    Reserved             [7:2]   1'b0   h/s R/W  ����λ����ʱ����0��дʱ��Ӱ�졣
    hdlc_prior_ctrl      [1:0]   1'b0   h/s R/W  HDLC��װ�����װ���ȼ����üĴ�����
                                                    00��һ���ڹ����У���һ��Ҳ��ʹ������£��Ƚ��Ѵ��ڹ����е��Ǹ������꣬
                                                        ��˭�ȱ�ʹ�����Ƚ�˭�����ꣻ
                                                    01�����з�װ���ȼ��ߣ�
                                                    10�����н��װ���ȼ��ߣ�
                                                    11����Ч��
                                                    (HDLC�ڲ����Ʊ���ͣ�ߵļ�����ʼ�����������װ����ͣ����װ���������������
                                                    ���װ�Ϳ�ʼ��������������װ����ͣ�����װ�������ݰ���������󣬷�װ�Ϳ�ʼ����������)
    */

    VOS_UINT32                          ulValue = 0x0;


    /* ʹ��AXI����ʱ�жϣ�debugʱʹ�ã�����HDLC���ó�ʱʱ����̣�����������ģʽ�²����� */
/*    SET_BIT_TO_DWORD(ulValue, 8); */

    /* ����AXI����ʱʱ������ֵ��SoC�ṩ�����ұ�֤��ƽ̨���� */
    ulValue |= (HDLC_AXI_REQ_TIMEOUT_VALUE << 16);

    PPP_HDLC_WRITE_32REG(SOC_ARM_HDLC_PRIROR_TIMEOUT_CTRL_ADDR(HDLC_IP_BASE_ADDR), ulValue);

    return;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_MntnShowConfigInfo
 ��������  : ��ӡ������Ϣ
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID PPP_HDLC_HARD_MntnShowConfigInfo(VOS_VOID)
{
    /* ���IP�����Ϣ */
    PPP_HDLC_WARNING_LOG3("HDLC Hardware Info: g_ulHDLCIPBaseAddr 0x%x g_slHdlcISRDef %d g_slHdlcISRFrm %d\r\n",
                  HDLC_IP_BASE_ADDR, g_stHdlcConfigInfo.slHdlcISRDef, g_stHdlcConfigInfo.slHdlcISRFrm);
    PPP_HDLC_WARNING_LOG2("HDLC Hardware Info: g_ulHdlcDefMasterSem 0x%x g_ulHdlcFrmMasterSem 0x%x\r\n",
                  g_stHdlcConfigInfo.ulHdlcDefMasterSem, g_stHdlcConfigInfo.ulHdlcFrmMasterSem);

    /* ����ڴ������Ϣ */
    PPP_HDLC_WARNING_LOG2("HDLC Memory Info: g_pstHdlcDefBufInfo 0x%x TTF_HDLC_MASTER_DEF_BUF_LEN %d\r\n",
                  g_pstHdlcDefBufInfo, TTF_HDLC_MASTER_DEF_BUF_LEN);
    PPP_HDLC_WARNING_LOG2("HDLC Memory Info: g_pstHdlcFrmBufInfo 0x%x TTF_HDLC_MASTER_FRM_BUF_LEN %d\r\n",
                  g_pstHdlcFrmBufInfo, TTF_HDLC_MASTER_FRM_BUF_LEN);

    return;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_MntnShowStatInfo
 ��������  : ��ӡͳ����Ϣ
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID PPP_HDLC_HARD_MntnShowStatInfo(VOS_VOID)
{
    vos_printf("\n================HDLC Hardware STAT INFO Begin==========================\n");

    vos_printf("���װ����IP���Ͱ�����            = %d\n", g_PppHdlcHardStat.ulDefIpDataProcCnt);
    vos_printf("���װ����PPP���Ͱ�����           = %d\n", g_PppHdlcHardStat.ulDefPppDataProcCnt);
    vos_printf("���װ���������֡����            = %d\n", g_PppHdlcHardStat.ulDefUncompleteCnt);
    vos_printf("���װ�ȴ��жϴ���                = %d\n", g_PppHdlcHardStat.ulDefWaitIntCnt);
    vos_printf("���װ��ѯ����                    = %d\n", g_PppHdlcHardStat.ulDefWaitQueryCnt);
    vos_printf("���װ�жϴ���                    = %d\n", g_PppHdlcHardStat.ulDefIsrCnt);
    vos_printf("���װLCP֡��ͣ����               = %d\n", g_PppHdlcHardStat.ulDefLcpPauseCnt);
    vos_printf("���װ�ռ�����ͣ����              = %d\n", g_PppHdlcHardStat.ulDefFullPauseCnt);
    vos_printf("���װ�����������ݰ�����          = %d\n", g_PppHdlcHardStat.ulDefInputDiscardCnt);

    vos_printf("��װ����IP���Ͱ�����              = %d\n", g_PppHdlcHardStat.ulFrmIpDataProcCnt);
    vos_printf("��װ����PPP���Ͱ�����             = %d\n", g_PppHdlcHardStat.ulFrmPppDataProcCnt);
    vos_printf("��װ�ȴ��жϴ���                  = %d\n", g_PppHdlcHardStat.ulFrmWaitIntCnt);
    vos_printf("��װ��ѯ����                      = %d\n", g_PppHdlcHardStat.ulFrmWaitQueryCnt);
    vos_printf("��װ�жϴ���                      = %d\n", g_PppHdlcHardStat.ulFrmIsrCnt);
    vos_printf("��װ����Ŀ�Ŀռ��ڴ�ʧ�ܴ���      = %d\n", g_PppHdlcHardStat.ulFrmAllocOutputMemFailCnt);
    vos_printf("��װ�����һ��Ŀ�Ŀռ��ڴ�ʧ�ܴ���= %d\n", g_PppHdlcHardStat.ulFrmAllocFirstMemFailCnt);
    vos_printf("��װ�����������������            = %d\n", g_PppHdlcHardStat.ulFrmOutputLinkFullCnt);
    vos_printf("��װ�����������ݰ�����            = %d\n", g_PppHdlcHardStat.ulFrmInputDiscardCnt);

    vos_printf("���װ�����������ڵ���          = %d\n", g_PppHdlcHardStat.ulDefMaxInputCntOnce);
    vos_printf("���װ������������ܳ���          = %d\n", g_PppHdlcHardStat.ulDefMaxInputSizeOnce);
    vos_printf("���װ�����Ч֡������          = %d\n", g_PppHdlcHardStat.ulDefMaxValidCntOnce);
    vos_printf("���װ��ѯ������                = %d\n", g_PppHdlcHardStat.ulDefMaxQueryCnt);

    vos_printf("��װ�����������ڵ���            = %d\n", g_PppHdlcHardStat.ulFrmMaxInputCntOnce);
    vos_printf("��װ������������ܳ���            = %d\n", g_PppHdlcHardStat.ulFrmMaxInputSizeOnce);
    vos_printf("��װ���ʹ�����ڵ����          = %d\n", g_PppHdlcHardStat.ulFrmMaxOutputCntOnce);
    vos_printf("��װ���ʹ�����ڵ��ܳ���        = %d\n", g_PppHdlcHardStat.ulFrmMaxOutputCntOnce);
    vos_printf("��װ��ѯ������                  = %d\n", g_PppHdlcHardStat.ulFrmMaxQueryCnt);

    vos_printf("���δ������ڵ���                = %d\n", g_PppHdlcHardStat.ulMaxCntOnce);
    vos_printf("�����ܽڵ���                      = %d\n", g_PppHdlcHardStat.ulHdlcHardProcCnt);
    vos_printf("continue����                      = %d\n", g_PppHdlcHardStat.ulContinueCnt);
    vos_printf("usDefExpInfo��ʶ                  = %d\n", g_PppHdlcHardStat.usDefExpInfo);
    vos_printf("usFrmExpInfo��ʶ                  = %d\n", g_PppHdlcHardStat.usFrmExpInfo);

    vos_printf("���HDLC BUG���������ݴ���        = %d\n", g_PppHdlcHardStat.ulForbidHdlcBugNoCpy);
    vos_printf("���HDLC BUG�������ݴ���          = %d\n", g_PppHdlcHardStat.ulForbidHdlcBugCpy);


    vos_printf("================HDLC Hardware STAT INFO End==========================\n");

    return;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_MntnTraceSingleData
 ��������  : ��ȡ��������
 �������  : usDataLen   -   �������ݳ���
             pucDataAddr -   �����׵�ַ
             ulEventType -   ��������
             ulNodeIndex -   ����������������±�
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID PPP_HDLC_HARD_MntnTraceSingleData
(
    VOS_UINT16                          usDataLen,
    VOS_UINT8                          *pucDataAddr,
    HDLC_MNTN_EVENT_TYPE_ENUM_UINT32    ulEventType,
    VOS_UINT32                          ulNodeIndex
)
{
    VOS_UINT32                          ulDataLen;
    HDLC_MNTN_NODE_DATA_STRU           *pstNodeData;
    VOS_UINT32                          ulAllocDataLen;


    ulAllocDataLen = TTF_MIN(usDataLen, HDLC_MNTN_ALLOC_MEM_MAX_SIZE);

    /* ��Ϣ���ȵ�����Ϣ�ṹ��С���������ݳ��� */
    ulDataLen   = ulAllocDataLen + sizeof(HDLC_MNTN_NODE_DATA_STRU);

    pstNodeData = (HDLC_MNTN_NODE_DATA_STRU *)PS_MEM_ALLOC(PS_PID_PPP_HDLC, ulDataLen);

    if (VOS_NULL_PTR == pstNodeData)
    {
        PPP_HDLC_NORMAL_LOG1("PPP_HDLC_HARD_MntnTraceSingleData, NORMAL, Alloc mem failed, ulEventType %d!\r\n",
                      ulEventType);
        return;
    }

    /* ���ڱ�ʶ����һ�����������еĵڼ���IP�� */
    pstNodeData->usNodeIndex = (VOS_UINT16)ulNodeIndex;
    pstNodeData->usLen       = usDataLen;

    PPP_MemSingleCopy((VOS_UINT8 *)(pstNodeData + 1), pucDataAddr, ulAllocDataLen);

    PPP_HDLC_HARD_MntnTraceMsg((HDLC_MNTN_TRACE_HEAD_STRU *)pstNodeData,
                               ulEventType, ulDataLen);

    PS_MEM_FREE(PS_PID_PPP_HDLC, pstNodeData);

    return;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_MntnTraceInputParaLink
 ��������  : ��ȡ���������������
 �������  : ulEventType        - ��������,
             ulLinkNodeCnt      - �������������,
             ulLinkTotalSize    - ���������ܳ���,
             pastLinkNodeBuf    - ������������׵�ַ
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID PPP_HDLC_HARD_MntnTraceInputParaLink
(
    HDLC_MNTN_EVENT_TYPE_ENUM_UINT32    ulEventType,
    VOS_UINT32                          ulLinkNodeCnt,
    VOS_UINT32                          ulLinkTotalSize,
    HDLC_PARA_LINK_NODE_STRU           *pastLinkNodeBuf
)
{
    HDLC_MNTN_INPUT_PARA_LINK_STRU      stInputPara;
    HDLC_MNTN_INPUT_PARA_LINK_STRU     *pstInputPara = &stInputPara;
    VOS_UINT32                          ulDataLen;


    ulDataLen = sizeof(HDLC_MNTN_INPUT_PARA_LINK_STRU);

    /* ��¼���ϱ������������нڵ����Ϣ*/
    pstInputPara->ulInputLinkNodeCnt   = ulLinkNodeCnt;
    pstInputPara->ulInputLinkTotalSize = ulLinkTotalSize;

    /* ��������ÿ���ڵ������ */
    VOS_MemCpy_s((VOS_UINT8 *)(&pstInputPara->astInputParaLinkNodeBuf[0]),
                ulLinkNodeCnt * sizeof(HDLC_PARA_LINK_NODE_STRU),
               (VOS_UINT8 *)(pastLinkNodeBuf),
               ulLinkNodeCnt * sizeof(HDLC_PARA_LINK_NODE_STRU));

    PPP_HDLC_HARD_MntnTraceMsg((HDLC_MNTN_TRACE_HEAD_STRU *)pstInputPara,
                               ulEventType, ulDataLen);

    return;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_DefIsEnabled
 ��������  : ��ѯ��ǰ���װģ���Ƿ�ʹ��
 �������  : ��
 �������  : ��
 �� �� ֵ  : VOS_TRUE  - ��ʹ��
             VOS_FALSE - δʹ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT32 PPP_HDLC_HARD_DefIsEnabled(VOS_VOID)
{
    VOS_UINT32                          ulValue;


    /* SoC���ڴ�����һ�����������ʱ���Զ���ʹ��λ���� */
    ulValue = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_DEF_EN_ADDR(HDLC_IP_BASE_ADDR));

    if (0x01 == (ulValue & 0x01))
    {
        return VOS_TRUE;
    }
    else
    {
        return VOS_FALSE;
    }
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_FrmIsEnabled
 ��������  : ��ѯ��ǰ��װģ���Ƿ�ʹ��
 �������  : ��
 �������  : ��
 �� �� ֵ  : VOS_TRUE  - ��ʹ��
             VOS_FALSE - δʹ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT32 PPP_HDLC_HARD_FrmIsEnabled(VOS_VOID)
{
    VOS_UINT32                          ulValue;


    /* SoC���ڴ�����һ�����������ʱ���Զ���ʹ��λ���� */
    ulValue = PPP_HDLC_READ_32REG(SOC_ARM_HDLC_FRM_EN_ADDR(HDLC_IP_BASE_ADDR));

    if (0x01 == (ulValue & 0x01))
    {
        return VOS_TRUE;
    }
    else
    {
        return VOS_FALSE;
    }
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_SetUp
 ��������  : ��ʼ����·PPP���ӣ�����շ�����֡��Ϣ
 �������  : usPppId - PPP ID
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID PPP_HDLC_HARD_SetUp(PPP_ID usPppId)
{
    HDLC_DEF_UNCOMPLETED_INFO_STRU      *pstUncompletedInfo;


    pstUncompletedInfo = HDLC_DEF_GET_UNCOMPLETED_INFO(usPppId);

    VOS_MemSet_s(pstUncompletedInfo, sizeof(HDLC_DEF_UNCOMPLETED_INFO_STRU),
                 0, sizeof(HDLC_DEF_UNCOMPLETED_INFO_STRU));

    return;
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_Disable
 ��������  : ��HDLC����ȥʹ��
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID PPP_HDLC_HARD_Disable(VOS_VOID)
{
    /* ���޲�������ΪHDLC�Ż���һ�������װ����װ���ʱ����Ӳ���Զ���frm_en��def_en���㣻
       ��װ����װ���̳���ʱ��Ӳ��Ҳ���Զ����㣬ʹ�ڲ�״̬������IDLE״̬��*/
}

/*****************************************************************************
 �� �� ��  : PPP_HDLC_HARD_Init
 ��������  : ��HDLC���г�ʼ��: HDLC���÷����쳣ʱ, ���쳣�ж��ϱ��Ŀ���
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��4��10��
    ��    ��   : l00164359
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT32 PPP_HDLC_HARD_Init(VOS_VOID)
{
    VOS_UINT_PTR                          ulBaseAddr;

    /* ��ȡHDLC����ַ */
    ulBaseAddr              = (VOS_UINT_PTR)mdrv_misc_get_ip_baseaddr(BSP_IP_TYPE_HDLC);

    HDLC_IP_BASE_ADDR       = (VOS_UINT_PTR)PPP_IO_ADDRESS(ulBaseAddr);

    if (VOS_NULL_PTR == HDLC_IP_BASE_ADDR)
    {
        PPP_HDLC_ERROR_LOG1("PPP_HDLC_HARD_Init HDLC base addr is null,0x%x\r\n",
                      ulBaseAddr);
        return VOS_ERR;
    }

#if (VOS_OS_VER == VOS_WIN32)
    g_ulHdlcScCtrlBaseAddr  = g_ucScCtrlRegAddr;
#else

#if ((SC_CTRL_MOD_P532 == SC_CTRL_MOD) || (SC_CTRL_MOD_6950_SFT == SC_CTRL_MOD) || (SC_CTRL_MOD_6932_SFT == SC_CTRL_MOD))
    ulBaseAddr              = (VOS_UINT_PTR)mdrv_misc_get_ip_baseaddr(BSP_IP_TYPE_SYSCTRL_PD);
#elif ((SC_CTRL_MOD_6250_SFT == SC_CTRL_MOD) || (SC_CTRL_MOD_3660_SFT == SC_CTRL_MOD))
    /* =========dallas/chicago��ʹ��: HDLC�Ĵ�������ַλ��======== */
    ulBaseAddr              = (VOS_UINT_PTR)mdrv_misc_get_ip_baseaddr(BSP_IP_TYPE_SYSCTRL_MDM);
#else
    ulBaseAddr              = (VOS_UINT_PTR)mdrv_misc_get_ip_baseaddr(BSP_IP_TYPE_SYSCTRL);
#endif

    g_ulHdlcScCtrlBaseAddr  = (VOS_UINT_PTR)PPP_IO_ADDRESS(ulBaseAddr);

#endif
    if (VOS_NULL_PTR == g_ulHdlcScCtrlBaseAddr)
    {
        PPP_HDLC_ERROR_LOG1("PPP_HDLC_HARD_Init HDLC SCCTRL base addr is null,0x%x\r\n",
                      ulBaseAddr);
        return VOS_ERR;
    }

    /* �ر�HDLCʱ�� */
    PPP_HDLC_HARD_PeriphClkClose();

    /*��ȡHDLC���װ�жϺ�*/
    g_stHdlcConfigInfo.slHdlcISRDef   = mdrv_int_get_num(BSP_INT_TYPE_HDLC_DEF);

    /*��ȡHDLC��װ�жϺ�*/
    g_stHdlcConfigInfo.slHdlcISRFrm   = mdrv_int_get_num(BSP_INT_TYPE_HDLC_FRM);

    /* ��ʼ���ڴ� */
    if (VOS_OK != PPP_HDLC_HARD_InitBuf())
    {
        return VOS_ERR;
    }

    if ( VOS_OK != VOS_SmBCreate("HdlcDefMasterSem", 0, VOS_SEMA4_FIFO, (VOS_SEM *)&g_stHdlcConfigInfo.ulHdlcDefMasterSem) )
    {
        PPP_HDLC_ERROR_LOG("PPP_HDLC_HARD_Init, ERROR, Create g_ulHdlcDefMasterSem failed!\r\n");
        return VOS_ERR;
    }

    if ( VOS_OK != VOS_SmBCreate("HdlcFrmMasterSem", 0, VOS_SEMA4_FIFO, (VOS_SEM *)&g_stHdlcConfigInfo.ulHdlcFrmMasterSem) )
    {
        PPP_HDLC_ERROR_LOG("PPP_HDLC_HARD_Init, ERROR, Create g_ulHdlcFrmMasterSem failed!\r\n");
        return VOS_ERR;
    }

    /* �жϹҽ� */
    if (VOS_OK != mdrv_int_connect(g_stHdlcConfigInfo.slHdlcISRDef, (VOIDFUNCPTR)PPP_HDLC_HARD_DefIsr, 0))
    {
        PPP_HDLC_ERROR_LOG1("PPP_HDLC_HARD_Init, ERROR, Connect slHdlcISRDef %d to PPP_HDLC_HARD_DefIsr failed!\r\n",
                      g_stHdlcConfigInfo.slHdlcISRDef);
        return VOS_ERR;
    }

    /* �ж�ʹ�� */
    if (VOS_OK != mdrv_int_enable(g_stHdlcConfigInfo.slHdlcISRDef))
    {
        PPP_HDLC_ERROR_LOG1("PPP_HDLC_HARD_Init, ERROR, Enable slHdlcISRDef %d failed!\r\n",
                      g_stHdlcConfigInfo.slHdlcISRDef);
        return VOS_ERR;
    }

    /* �жϹҽ� */
    if (VOS_OK != mdrv_int_connect(g_stHdlcConfigInfo.slHdlcISRFrm, (VOIDFUNCPTR)PPP_HDLC_HARD_FrmIsr, 0))
    {
        PPP_HDLC_ERROR_LOG1("PPP_HDLC_HARD_Init, ERROR, Connect slHdlcISRFrm %d to PPP_HDLC_HARD_FrmIsr failed!\r\n",
                      g_stHdlcConfigInfo.slHdlcISRFrm);
        return VOS_ERR;
    }

    if (VOS_OK != mdrv_int_enable(g_stHdlcConfigInfo.slHdlcISRFrm))
    {
        PPP_HDLC_ERROR_LOG1("PPP_HDLC_HARD_Init, ERROR, Enable slHdlcISRFrm %d failed!\r\n",
                      g_stHdlcConfigInfo.slHdlcISRFrm);
        return VOS_ERR;
    }

    return VOS_OK;
}    /* link_HDLCInit */



#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif


