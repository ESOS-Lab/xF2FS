

#ifndef __ATCMDMISCPROC_H__
#define __ATCMDMISCPROC_H__

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "AtCtx.h"
#include "AtParse.h"
#include "AtMtaInterface.h"
#include "at_lte_common.h"

#include "mdrv.h"
#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define AT_SECURE_STATE_NOT_SET                     (0)                         /* Secure State״̬δ���� */
#define AT_SECURE_STATE_SECURE                      (1)                         /* ��ǰSecure StateΪSecure */
#define AT_SECURE_STATE_RMA                         (2)                         /* ��ǰSecure StateΪRMA */

#define AT_EFUSE_OK                                 (0)                         /* efuse���سɹ� */
#define AT_EFUSE_REPEAT                             (1)                         /* efuse�����ظ����� */

#define AT_DRV_KCE_LEN                              (16)                        /* 128Bits��KCE�������� */
#define AT_KCE_PARA_LEN                             (32)                        /* KCE�ӽ���keyֵASKii��ʽ���� */

#define AT_DRV_SOCID_LEN                            (32)                        /* 256Bits��SOCID�������� */

#define AT_MODEM_YTD_LEN                            (10)                        /* �ַ��������յ��ܳ��� */
#define AT_MODEM_TIME_LEN                           (8)                         /* �ַ���Сʱ�����ӡ�����ܳ��� */
#define AT_MODEM_YEAR_LEN                           (4)                         /* �ַ�����ݵĳ��� */
#define AT_MODEM_MONTH_LEN                          (2)                         /* �ַ����·ݵĳ��� */
#define AT_MODEM_DATE_LEN                           (2)                         /* �ַ������ڵĳ��� */
#define AT_MODEM_HOUR_LEN                           (2)                         /* �ַ���Сʱ�ĳ��� */
#define AT_MODEM_MIN_LEN                            (2)                         /* �ַ������ӵĳ��� */
#define AT_MODEM_SEC_LEN                            (2)                         /* �ַ�����ĳ��� */
#define AT_MODEM_ZONE_LEN                           (3)                         /* �ַ���ʱ���ĳ��� */
#define AT_GET_MODEM_TIME_BUFF_LEN                  (5)

#define AT_MODEM_YEAR_MAX                           (2050)                      /* �����������ֵ */
#define AT_MODEM_YEAR_MIN                           (1970)                      /* ����������Сֵ */
#define AT_MODEM_MONTH_MAX                          (12)                        /* �����������ֵ */
#define AT_MODEM_MONTH_MIN                          (1)                         /* ����������Сֵ */
#define AT_MODEM_DAY_MAX                            (31)                        /* �����������ֵ */
#define AT_MODEM_DAY_MIN                            (1)                         /* ����������Сֵ */

#define AT_MODEM_HOUR_MAX                           (23)                        /* ������Сʱ���ֵ */
#define AT_MODEM_HOUR_MIN                           (0)                         /* ������Сʱ��Сֵ */
#define AT_MODEM_MIN_MAX                            (59)                        /* �����÷������ֵ */
#define AT_MODEM_MIN_MIN                            (0)                         /* �����÷�����Сֵ */
#define AT_MODEM_SEC_MAX                            (59)                        /* �������������ֵ */
#define AT_MODEM_SEC_MIN                            (0)                         /* ������������Сֵ */

#define AT_MODEM_ZONE_MAX                           (12)                        /* ������ʱ�����ֵ */
#define AT_MODEM_ZONE_MIN                           (-12)                       /* ������ʱ����Сֵ */


/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/


/*****************************************************************************
  4 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  6 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  7 STRUCT����
*****************************************************************************/


/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/

VOS_UINT32 AT_SetActiveModem(VOS_UINT8 ucIndex);

#if(FEATURE_ON == FEATURE_LTE)
#if(FEATURE_ON == FEATURE_LTE_MBMS)
VOS_UINT32 AT_SetMBMSServiceOptPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_SetMBMSServiceStatePara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_SetMBMSPreferencePara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_QryMBMSSib16NetworkTimePara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_QryMBMSBssiSignalLevelPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_QryMBMSNetworkInfoPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_QryMBMSModemStatusPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_SetMBMSCMDPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_SetMBMSEVPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_SetMBMSInterestListPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_QryMBMSCmdPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_RcvMtaMBMSServiceOptSetCnf(
    VOS_VOID                           *pMsg
);
VOS_UINT32 AT_RcvMtaMBMSServiceStateSetCnf(
    VOS_VOID                           *pMsg
);
VOS_UINT32 AT_RcvMtaMBMSPreferenceSetCnf(
    VOS_VOID                           *pMsg
);
VOS_UINT32 AT_RcvMtaMBMSSib16NetworkTimeQryCnf(
    VOS_VOID                           *pMsg
);
VOS_UINT32 AT_RcvMtaMBMSBssiSignalLevelQryCnf(
    VOS_VOID                           *pMsg
);
VOS_UINT32 AT_RcvMtaMBMSNetworkInfoQryCnf(
    VOS_VOID                           *pMsg
);
VOS_UINT32 AT_RcvMtaMBMSModemStatusQryCnf(
    VOS_VOID                           *pMsg
);
VOS_UINT32 AT_RcvMtaMBMSEVSetCnf(
    VOS_VOID                           *pMsg
);
VOS_UINT32 AT_RcvMtaMBMSServiceEventInd(VOS_VOID *pstMsg);
VOS_UINT32 AT_RcvMtaMBMSInterestListSetCnf(
    VOS_VOID                           *pMsg
);
VOS_UINT32 AT_RcvMtaMBMSCmdQryCnf(
    VOS_VOID                           *pMsg
);
VOS_VOID AT_ReportMBMSCmdQryCnf(
    MTA_AT_MBMS_AVL_SERVICE_LIST_QRY_CNF_STRU      *pstLrrcCnf,
    VOS_UINT8                                       ucIndex
);
VOS_UINT32 At_TestMBMSCMDPara(VOS_UINT8 ucIndex);
#endif
VOS_UINT32 AT_RcvMtaLteLowPowerSetCnf(
    VOS_VOID                           *pMsg
);
VOS_UINT32 AT_SetLteLowPowerPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_CheckIsmCoexParaValue(VOS_INT32 ulVal, VOS_UINT32 ulParaNum);
VOS_UINT32 AT_SetIsmCoexPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_QryIsmCoexPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_RcvMtaIsmCoexSetCnf(
    VOS_VOID                           *pMsg
);
VOS_UINT32 AT_RcvL4AIsmCoexSetCnf(
    VOS_VOID                           *pMsg
);
VOS_UINT32 AT_RcvMtaIsmCoexQryCnf(
    VOS_VOID                           *pMsg
);
#endif

VOS_UINT32 AT_SetLogEnablePara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_QryLogEnable(VOS_UINT8 ucIndex);

VOS_UINT32 AT_SetActPdpStubPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 AT_SetNVCHKPara(VOS_UINT8 ucIndex);


VOS_UINT32 AT_RcvMtaAfcClkInfoCnf(
    VOS_VOID                           *pMsg
);

extern VOS_UINT32 AT_SetPdmCtrlPara(VOS_UINT8 ucIndex);

#if (FEATURE_ON == FEATURE_UE_MODE_CDMA)
extern VOS_UINT32 AT_SetEvdoSysEvent(VOS_UINT8 ucIndex);
extern VOS_UINT32 AT_SetDoSigMask(VOS_UINT8 ucIndex);

extern VOS_UINT32 AT_RcvMtaEvdoSysEventSetCnf(
    VOS_VOID                           *pMsg
);

extern VOS_UINT32 AT_RcvMtaEvdoSigMaskSetCnf(
    VOS_VOID                           *pMsg
);

extern VOS_UINT32 AT_RcvMtaEvdoRevARLinkInfoInd(
    VOS_VOID                           *pMsg
);

extern VOS_UINT32 AT_RcvMtaEvdoSigExEventInd(
    VOS_VOID                           *pMsg
);
#endif

VOS_UINT32 AT_SetFratIgnitionPara(VOS_UINT8 ucIndex);

extern VOS_UINT32 AT_SetModemTimePara(VOS_UINT8 ucIndex);

extern VOS_UINT32 AT_SetRxTestModePara(VOS_UINT8 ucIndex);

extern VOS_UINT32 AT_RcvMtaSetRxTestModeCnf(
    VOS_VOID                           *pMsg
);

#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of AtCmdMiscProc.h */
