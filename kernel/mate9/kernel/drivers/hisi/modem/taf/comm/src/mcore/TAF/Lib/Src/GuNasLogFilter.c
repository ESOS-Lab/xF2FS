

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include "GuNasLogFilter.h"
#include "MnMsgApi.h"

#include "Taf_Tafm_Remote.h"
#include "AtMtaInterface.h"
#include "MnMsgTs.h"


#include "AtInternalMsg.h"
#include "AtParse.h"
#include "AtCtx.h"


#define    THIS_FILE_ID        PS_FILE_ID_GU_NAS_LOG_FILTER_C

#define    AT_CMD_LEN_7             (7)
#define    AT_CMD_LEN_8             (8)
#define    AT_CMD_LEN_13            (13)
#define    AT_SMS_MODE              (1)

/*****************************************************************************
  2 ȫ�ֱ�������
*****************************************************************************/
typedef VOS_UINT32 (*pGuNasMsgFilterProcFunc)(
    PS_MSG_HEADER_STRU                 *pstMsg
);


/*******************************************************************************
 �ṹ��    : GUNAS_MSG_FILTER_PROC_TBL_FUNC
 �ṹ˵��  : ������Ϣ�������ṹ��
 1.��    ��   : 2015��09��25��
   ��    ��   : h00313353
   �޸�����   : �½�
*******************************************************************************/
typedef struct
{
    VOS_UINT32                                  ulSenderPid;
    VOS_UINT32                                  ulReceiverPid;
    pGuNasMsgFilterProcFunc                     pFuncFilterProc;
} GUNAS_MSG_FILTER_PROC_TBL_FUNC;

GUNAS_MSG_FILTER_PROC_TBL_FUNC              g_astGuNasMsgFilterProcFuncTbl[] =
{
    {WUEPS_PID_AT,          WUEPS_PID_AT,       GUNAS_FilterAtToAtMsg},

    {WUEPS_PID_TAF,         WUEPS_PID_AT,       GUNAS_FilterTafToAtMsg},
    {WUEPS_PID_AT,          WUEPS_PID_TAF,      GUNAS_FilterAtToTafMsg},

    {WUEPS_PID_AT,          WUEPS_PID_MMA,      GUNAS_FilterAtToMmaMsg},
    {WUEPS_PID_AT,          UEPS_PID_MTA,       GUNAS_FilterAtToMtaMsg},
    {WUEPS_PID_AT,          MAPS_PIH_PID,       GUNAS_FilterAtToPihMsg},

};

VOS_CHAR*                                       g_apcATFileterTable[]=
{
        /* USIM��� */
        "AT+CPIN"           ,
        "\r\n+CPIN:"        ,
        "AT+CLCK"           ,
        "\r\n+CLCK:"        ,
        "AT+CPWD"           ,
        "\r\n+CPWD:"        ,
        "AT^CPIN"           ,
        "\r\n^CPIN:"        ,
        "AT^CPIN2"          ,
        "\r\n^CPIN2:"       ,
        "AT+CPBW"           ,
        "\r\n+CPBW:"        ,
        "AT+CRSM"           ,
        "\r\n+CRSM:"        ,
        "AT+CSIM"           ,
        "\r\n+CSIM:"        ,
        "AT+CCHO"           ,
        "\r\n+CCHO:"        ,
        "AT+CCHC"           ,
        "AT+CNUM"           ,
        "\r\n+CNUM:"        ,
        "AT+CGLA"           ,
        "\r\n+CGLA:"        ,
        "AT+CRLA"           ,
        "\r\n+CRLA:"        ,
        "AT+CIMI"           ,
        "\r\n+CIMI:"        ,
        "AT^CSIN"           ,
        "\r\n^CSIN:"        ,
        "AT^CSTR"           ,
        "\r\n^CSTR:"        ,
        "AT^CSEN"           ,
        "\r\n^CSEN:"        ,
        "\r\n^CCIN:"        ,
        "AT^CISA"           ,
        "\r\n^CISA:"        ,
        "AT^CARDATR"        ,
        "\r\n^CARDATR:"     ,
        "AT^UICCAUTH"       ,
        "\r\n^UICCAUTH:"    ,
        "AT^URSM"           ,
        "\r\n^URSM:"        ,
        "AT^ICCID"          ,
        "\r\n^ICCID:"       ,

        /* ������� */
        "AT+CMGS"           ,
        "AT+CMGW"           ,
        "AT+CMGC"           ,
        "\r\n+CMT:"         ,
        "\r\n+CMGR:"        ,
        "\r\n^RSTRIGGER:"   ,
        "\r\n+CMGS:"        ,
        "\r\n+CDS:"         ,

        /* SIM LOCK��� */
        "AT^SIMLOCKUNLOCK"  ,
        "AT^CMLCK"          ,
};


/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/


/*****************************************************************************
 �� �� ��  : GUNAS_ATCmdFilter
 ��������  : ����At��At��USIM�����Ϣ����
 �������  : pucATData     -- ��Ϣ�е�����
             usLen         -- ���ݳ���
 �������  : NONE
 �� �� ֵ  : VOS_TRUE :��ʾ�����Ϣ�����˵��ˣ�����Ҫ�ϱ���OM
             VOS_FALSE:��ʾ�����Ϣ��Ҫ�ϱ�OM
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��01��31��
    ��    ��   : f00179208
    �޸�����   : �����ɺ���
*****************************************************************************/

VOS_UINT32 GUNAS_ATCmdFilter(
    VOS_UINT8                          *pucATData,
    VOS_UINT16                          usLen
)
{
    VOS_UINT32                          i;
    VOS_UINT8                          *pucTempData = VOS_NULL_PTR;

    pucTempData = (VOS_UINT8 *)PS_MEM_ALLOC(WUEPS_PID_AT, usLen);
    if (VOS_NULL_PTR == pucTempData)
    {
        return VOS_FALSE;
    }

    TAF_MEM_CPY_S(pucTempData, usLen, pucATData, usLen);

    (VOS_VOID)At_UpString(pucTempData, usLen);

    for (i = 0; i < (sizeof(g_apcATFileterTable)/sizeof(g_apcATFileterTable[0])); i++)
    {
        if (VOS_OK == PS_MEM_CMP((VOS_UINT8 *)g_apcATFileterTable[i], pucTempData, VOS_StrLen(g_apcATFileterTable[i])))
        {
            PS_MEM_FREE(WUEPS_PID_AT, pucTempData);
            return VOS_TRUE;
        }
    }

    PS_MEM_FREE(WUEPS_PID_AT, pucTempData);
    return VOS_FALSE;
}

/*****************************************************************************
 �� �� ��  : GUNAS_FilterAtToAtMsg
 ��������  : ����At��At�����Ϣ�ĺ���
 �������  : pstMsg     -- ��Ϣָ��
 �������  : NONE
 �� �� ֵ  : VOS_TRUE :��ʾ�����Ϣ�����˵��ˣ�����Ҫ�ϱ���OM
             VOS_FALSE:��ʾ�����Ϣ��Ҫ�ϱ�OM
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2015��09��17��
    ��    ��   : h00313353
    �޸�����   : �����ɺ���
*****************************************************************************/
VOS_UINT32 GUNAS_FilterAtToAtMsg(
    PS_MSG_HEADER_STRU                 *pstMsg
)
{
    VOS_UINT8                          *pucTmpAdr = VOS_NULL_PTR;
    AT_MSG_STRU                        *pstAtMsg  = VOS_NULL_PTR;
    VOS_UINT16                          usLen;

    usLen  = 0;
    pstAtMsg = (AT_MSG_STRU *)pstMsg;

    switch (pstAtMsg->enMsgId)
    {
        case ID_AT_MNTN_INPUT_MSC:
        case ID_AT_MNTN_OUTPUT_MSC:
        case ID_AT_MNTN_START_FLOW_CTRL:
        case ID_AT_MNTN_STOP_FLOW_CTRL:
        case ID_AT_MNTN_REG_FC_POINT:
        case ID_AT_MNTN_DEREG_FC_POINT:
        case ID_AT_MNTN_PC_REPLAY_MSG:
        case ID_AT_MNTN_PC_REPLAY_CLIENT_TAB:
        case ID_AT_MNTN_RPT_PORT:
        case ID_AT_COMM_CCPU_RESET_START:
        case ID_AT_COMM_CCPU_RESET_END:
        case ID_AT_COMM_HIFI_RESET_START:
        case ID_AT_COMM_HIFI_RESET_END:
        case ID_AT_NCM_CONN_STATUS_CMD:
        case ID_AT_WATER_LOW_CMD:
        case ID_AT_SWITCH_CMD_MODE:
            return VOS_FALSE;

        default:
        {
            if (AT_SMS_MODE == g_stParseContext[pstAtMsg->ucIndex].ucMode)
            {
                /* ����ģʽֱ�ӽ��й��� */
                MN_NORM_LOG1("GUNAS_FilterAtToAtMsg: TRUE,SMS MODE, ulMsgName ", pstAtMsg->enMsgId);
                return VOS_TRUE;
            }

            pucTmpAdr                   = (VOS_UINT8 *)((VOS_UINT8 *)pstAtMsg
                                                        + sizeof(AT_MSG_STRU)
                                                        - sizeof(pstAtMsg->aucValue));

            usLen                       = pstAtMsg->usLen;

            if (VOS_TRUE == GUNAS_ATCmdFilter(pucTmpAdr, usLen))
            {
                MN_NORM_LOG1("GUNAS_FilterAtToAtMsg: TRUE ulMsgName ", pstAtMsg->enMsgId);
                return VOS_TRUE;
            }

            return VOS_FALSE;
        }
    }
}

/*****************************************************************************
 �� �� ��  : GUNAS_FilterAtToMmaMsg
 ��������  : ����At��Mma�����Ϣ�ĺ���
 �������  : pstMsg -- ��Ϣ����
 �������  : NONE
 �� �� ֵ  : VOS_TRUE :��ʾ�����Ϣ�����˵��ˣ�����Ҫ�ϱ���OM
             VOS_FALSE:��ʾ�����Ϣ��Ҫ�ϱ�OM
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��07��02��
    ��    ��   : f00179208
    �޸�����   : �����ɺ���
*****************************************************************************/
VOS_UINT32 GUNAS_FilterAtToMmaMsg(
    PS_MSG_HEADER_STRU                 *pstMsg
)
{
    switch (pstMsg->ulMsgName)
    {
        /* ����ҵ����ص���Ϣ */
        case TAF_MSG_MMA_OP_PIN_REQ:
        case TAF_MSG_MMA_SET_PIN:
        case TAF_MSG_MMA_ME_PERSONAL_REQ:
            MN_NORM_LOG1("GUNAS_FilterAtToMmaMsg: TRUE ulMsgName ", pstMsg->ulMsgName);
            return VOS_TRUE;

        default:
            return VOS_FALSE;
    }
}

/*****************************************************************************
 �� �� ��  : GUNAS_FilterAtToMtaMsg
 ��������  : ����At��Mta�����Ϣ�ĺ���
 �������  : pstMsg -- ��Ϣ����
 �������  : NONE
 �� �� ֵ  : VOS_TRUE :��ʾ�����Ϣ�����˵��ˣ�����Ҫ�ϱ���OM
             VOS_FALSE:��ʾ�����Ϣ��Ҫ�ϱ�OM
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��07��02��
    ��    ��   : f00179208
    �޸�����   : �����ɺ���
*****************************************************************************/
VOS_UINT32 GUNAS_FilterAtToMtaMsg(
    PS_MSG_HEADER_STRU                 *pstMsg
)
{
    switch (pstMsg->ulMsgName)
    {
        /* ����ҵ����ص���Ϣ */
        case ID_AT_MTA_SIMLOCKUNLOCK_SET_REQ:
            MN_NORM_LOG1("GUNAS_FilterAtToMtaMsg: TRUE ulMsgName ", pstMsg->ulMsgName);
            return VOS_TRUE;

        default:
            return VOS_FALSE;
    }
}

/*****************************************************************************
 �� �� ��  : GUNAS_FilterAtToPihMsg
 ��������  : ����At��Pih�����Ϣ�ĺ���
 �������  : pstMsg -- ��Ϣ����
 �������  : NONE
 �� �� ֵ  : VOS_TRUE :��ʾ�����Ϣ�����˵��ˣ�����Ҫ�ϱ���OM
             VOS_FALSE:��ʾ�����Ϣ��Ҫ�ϱ�OM
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��07��02��
    ��    ��   : f00179208
    �޸�����   : �����ɺ���
*****************************************************************************/
VOS_UINT32 GUNAS_FilterAtToPihMsg(
    PS_MSG_HEADER_STRU                 *pstMsg
)
{
    switch (pstMsg->ulMsgName)
    {
        /* ����ҵ����ص���Ϣ */
        /* SI_PIH_FDN_ENABLE_REQ */
        case AT_PIH_FDN_ENABLE_REQ:
        /* SI_PIH_FDN_DISALBE_REQ */
        case AT_PIH_FDN_DISALBE_REQ:
            MN_NORM_LOG1("GUNAS_FilterAtToPihMsg: TRUE ulMsgName ", pstMsg->ulMsgName);
            return VOS_TRUE;

        default:
            return VOS_FALSE;
    }
}

/*****************************************************************************
 �� �� ��  : GUNAS_FilterAtToTafMsg
 ��������  : ����At��Taf�����Ϣ�ĺ���
 �������  : pstMsg -- ��Ϣ����
 �������  : NONE
 �� �� ֵ  : VOS_TRUE :��ʾ�����Ϣ�����˵��ˣ�����Ҫ�ϱ���OM
             VOS_FALSE:��ʾ�����Ϣ��Ҫ�ϱ�OM
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2015��09��17��
    ��    ��   : h00313353
    �޸�����   : �����ɺ���
*****************************************************************************/
VOS_UINT32 GUNAS_FilterAtToTafMsg(
    PS_MSG_HEADER_STRU                 *pstMsg
)
{
    switch (pstMsg->ulMsgName)
    {
        /* ������ص���Ϣ */
        case MN_MSG_MSGTYPE_SEND_RPDATA_DIRECT:
        case MN_MSG_MSGTYPE_SEND_RPDATA_FROMMEM:
        case MN_MSG_MSGTYPE_WRITE:
        case MN_MSG_MSGTYPE_READ:
        case MN_MSG_MSGTYPE_LIST:
            MN_NORM_LOG1("GUNAS_FilterAtToTafMsg: TRUE ulMsgName ", pstMsg->ulMsgName);
            return VOS_TRUE;

        /* ����ҵ����ص���Ϣ */
        case TAF_MSG_ACTIVATESS_MSG:
        case TAF_MSG_DEACTIVATESS_MSG:
        case TAF_MSG_REGPWD_MSG:
            MN_NORM_LOG1("GUNAS_FilterAtToTafMsg: TRUE ulMsgName ", pstMsg->ulMsgName);
            return VOS_TRUE;

        default:
            return VOS_FALSE;
    }
}

/*****************************************************************************
 �� �� ��  : GUNAS_FilterTafToAtMsg
 ��������  : ����Taf��At�����Ϣ�ĺ���
 �������  : pstMsg     -- ��Ϣָ��
 �������  : NONE
 �� �� ֵ  : VOS_TRUE :��ʾ�����Ϣ�����˵��ˣ�����Ҫ�ϱ���OM
             VOS_FALSE:��ʾ�����Ϣ��Ҫ�ϱ�OM
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2015��09��17��
    ��    ��   : h00313353
    �޸�����   : �����ɺ���
*****************************************************************************/
VOS_UINT32 GUNAS_FilterTafToAtMsg(
    PS_MSG_HEADER_STRU                 *pstMsg
)
{
    MN_AT_IND_EVT_STRU                 *pstAtEvent = VOS_NULL_PTR;
    VOS_UINT32                          ulEventType;

    ulEventType = 0;
    pstAtEvent  = (MN_AT_IND_EVT_STRU *)pstMsg;

    if (MN_CALLBACK_MSG   != pstMsg->ulMsgName)
    {
        return VOS_FALSE;
    }

    TAF_MEM_CPY_S(&ulEventType, (VOS_UINT32)sizeof(ulEventType), pstAtEvent->aucContent, (VOS_UINT32)sizeof(VOS_UINT32));

    switch ((MN_MSG_EVENT_ENUM_U32)ulEventType)
    {
        case MN_MSG_EVT_SUBMIT_RPT:
        case MN_MSG_EVT_MSG_SENT:
        case MN_MSG_EVT_DELIVER:
        case MN_MSG_EVT_READ:
        case MN_MSG_EVT_LIST:
        case MN_MSG_EVT_WRITE:
            MN_NORM_LOG1("GUNAS_FilterTafToAtMsg: TRUE ulEventType ", ulEventType);
            return VOS_TRUE;

        default:
            return VOS_FALSE;
    }
}

/*****************************************************************************
 �� �� ��  : GUNAS_FilterLayerMsg
 ��������  : ���˶��Ų����Ϣ�ĺ���
 �������  : pstMsg     -- ��Ϣָ��
 �������  : NONE
 �� �� ֵ  : VOS_TRUE :��ʾ�����Ϣ�����˵��ˣ�����Ҫ�ϱ���OM
             VOS_FALSE:��ʾ�����Ϣ��Ҫ�ϱ�OM
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2015��09��17��
    ��    ��   : h00313353
    �޸�����   : �����ɺ���
*****************************************************************************/
VOS_UINT32 GUNAS_FilterLayerMsg(
    const VOS_VOID                     *pstMsg
)
{
    PS_MSG_HEADER_STRU                 *pstTempMsg = VOS_NULL_PTR;
    pGuNasMsgFilterProcFunc             pfunFilter;
    VOS_UINT32                          i;

    pstTempMsg      = (PS_MSG_HEADER_STRU *)pstMsg;
    pfunFilter      = VOS_NULL_PTR;

    if (VOS_FALSE == AT_GetPrivacyFilterEnableFlg())
    {
        return VOS_FALSE;
    }


    for (i = 0; i < (sizeof(g_astGuNasMsgFilterProcFuncTbl)/sizeof(GUNAS_MSG_FILTER_PROC_TBL_FUNC)); i++)
    {
        if ((pstTempMsg->ulSenderPid    == g_astGuNasMsgFilterProcFuncTbl[i].ulSenderPid)
         && (pstTempMsg->ulReceiverPid  == g_astGuNasMsgFilterProcFuncTbl[i].ulReceiverPid))
        {
            pfunFilter = g_astGuNasMsgFilterProcFuncTbl[i].pFuncFilterProc;
            break;
        }
    }

    if (VOS_NULL_PTR != pfunFilter)
    {
        return pfunFilter(pstTempMsg);
    }

    return VOS_FALSE;
}

/*****************************************************************************
 �� �� ��  : GUNAS_OM_LayerMsgFilter
 ��������  : GUNAS���ڹ��˲����Ϣ�ĺ���
 �������  : pstMsg     -- ��Ϣָ��
 �������  : NONE
 �� �� ֵ  : VOS_TRUE :��ʾ�����Ϣ�����˵��ˣ�����Ҫ�ϱ���OM
             VOS_FALSE:��ʾ�����Ϣ��Ҫ�ϱ�OM
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2015��09��17��
    ��    ��   : h00313353
    �޸�����   : �����ɺ���
*****************************************************************************/
VOS_UINT32 GUNAS_OM_LayerMsgFilter(
    const VOS_VOID                     *pstMsg
)
{
    if (VOS_TRUE == GUNAS_FilterLayerMsg(pstMsg))
    {
        return VOS_TRUE;
    }

    return VOS_FALSE;
}

