/******************************************************************************

  Copyright(C)2008,Hisilicon Co. LTD.

******************************************************************************
File Name       : ChrEventIDComm.h
Description     : ChrEventIDComm.h header file,����ֱͨ�¼�ID�ڴ˶��塣
History         :
   1.q00312157      2016-5-25     Draft Enact

******************************************************************************/

#ifndef __ERRLOGCOMM_H__
#define __ERRLOGCOMM_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
1 Include Headfile
*****************************************************************************/
#include  "product_config.h"
#include  "vos.h"

#if (VOS_OS_VER != VOS_WIN32)
#pragma pack(1)
#else
#pragma pack(push, 1)
#endif

/*****************************************************************************
2 macro
*****************************************************************************/

/*DEFINE MODEM ALARMID BASE BEGIN*/
/* ֱͨ�¼�ö�ٷֶΣ�XML����1���ֽڣ���Ч��Χ 0~127����128���� */
#define COMM_EventID_ENUM_BASE                              (0)
/* ֱͨ�¼���Ϊ�����¼���ǹ����¼��������¼�ͳһ���Σ��ǹ����¼���������䡣 */
/* ֱͨ�����¼���0~63����64���� */
#define COMM_RELATION_EVENTID_ENUM_BASE                     (COMM_EventID_ENUM_BASE+0)
/* ֱͨ�ǹ����¼���64~127����64���� */
#define COMM_ABSOLUTE_EVENTID_ENUM_BASE                     (COMM_EventID_ENUM_BASE+64)
/* ֱͨ�ǹ����¼�������ֶ���ʼ����, ����TLPS:20(TLRRC:12, TL2:3, LNAS:5), GUC:24, PHY:20 */
#define COMM_TLRRC_EVENTID_ENUM_BASE                        (COMM_ABSOLUTE_EVENTID_ENUM_BASE+0)
#define COMM_TL2_EVENTID_ENUM_BASE                          (COMM_ABSOLUTE_EVENTID_ENUM_BASE+12)
#define COMM_LNAS_EVENTID_ENUM_BASE                         (COMM_ABSOLUTE_EVENTID_ENUM_BASE+15)
#define COMM_GUC_EVENTID_ENUM_BASE                          (COMM_ABSOLUTE_EVENTID_ENUM_BASE+20)
#define COMM_PHY_EVENTID_ENUM_BASE                          (COMM_ABSOLUTE_EVENTID_ENUM_BASE+44)


/* ����ģ���ֱͨ���¼�ö�ٷֶ� */
#define LNAS_SUBEVENTID_ENUM_BASE                           (11000)
#define GUNAS_SUBEVENTID_ENUM_BASE                          (12000)

#define LRRC_SUBEVENTID_ENUM_BASE                           (21000)
#define LL2_SUBEVENTID_ENUM_BASE                            (22000)
#define LPHY_SUBEVENTID_ENUM_BASE                           (23000)

#define TRRC_SUBEVENTID_ENUM_BASE                           (24000)
#define TL2_SUBEVENTID_ENUM_BASE                            (25000)
#define TPHY_SUBEVENTID_ENUM_BASE                           (26000)

#define WRRC_SUBEVENTID_ENUM_BASE                           (31000)
#define WL2_SUBEVENTID_ENUM_BASE                            (32000)
#define WPHY_SUBEVENTID_ENUM_BASE                           (33000)

#define GRRC_SUBEVENTID_ENUM_BASE                           (34000)
#define GL2_SUBEVENTID_ENUM_BASE                            (35000)
#define GPHY_SUBEVENTID_ENUM_BASE                           (36000)

#define CRRC_SUBEVENTID_ENUM_BASE                           (37000)
#define CL2_SUBEVENTID_ENUM_BASE                            (38000)
#define CPHY_SUBEVENTID_ENUM_BASE                           (39000)

/*DEFINE MODEM ALARMID BASE END*/

/*****************************************************************************
3 Massage Declare
*****************************************************************************/

/*****************************************************************************
 4 ENUM
*****************************************************************************/

/*******************************************************************************************************************
 --------------------------------------------------�¼�����------------------------------------------------------
*******************************************************************************************************************/

/*****************************************************************************
 ö����    : MODEM_COMM_ALARMID_ENUM_UINT8
 Э����  :
 ASN.1���� :
 ö��˵��  : �����¼��澯����ö�ٶ��壬��������:
            1�������¼��澯����ö�ٶ���
            2���ǹ����¼��澯����ö�����Ͷ���(�ǹ����¼�����������¼���
            ���¼��Ƕ���ǹ������¼��ļ���)

*****************************************************************************/
enum MODEM_COMM_EVENTID_ENUM
{
    /**************************************** ��������¼�EventID**********************************************/
    TDS_OOS_INFO_REPORT_FAULTID                        = COMM_RELATION_EVENTID_ENUM_BASE+0,



    /**************************************** ����ǹ����¼�EventID**********************************************/
    /* ����TLRRC�ǹ����¼�EventID */
    TRRC_STATISTIC_INFO_COLLECTION_EVENTID             = COMM_TLRRC_EVENTID_ENUM_BASE+0,
    LRRC_STATISTIC1_INFO_COLLECTION_EVENTID            = COMM_TLRRC_EVENTID_ENUM_BASE+1,
    LRRC_STATISTIC2_INFO_COLLECTION_EVENTID            = COMM_TLRRC_EVENTID_ENUM_BASE+2,
    LRRC_VOLTE_FAULT_AUTOAN_IND_EVENTID                = COMM_TLRRC_EVENTID_ENUM_BASE+3,
    LPS_VOLTE_STAT_IND_EVENTID                         = COMM_TLRRC_EVENTID_ENUM_BASE+4,

    /* ����TL�ǹ����¼�EventID */
    TMAC_STATISTIC_INFO_COLLECTION_EVENTID             = COMM_TL2_EVENTID_ENUM_BASE+0,
    LL2_STATISTIC_INFO_COLLECTION_EVENTID              = COMM_TL2_EVENTID_ENUM_BASE+1,

    /* ����LANS�ǹ����¼�EventID */
    LNAS_STATISTIC_INFO_COLLECTION_EVENTID             = COMM_LNAS_EVENTID_ENUM_BASE+0,

    /* ��������ǹ����¼�EventID�ڴ˶��� */



    COMM_ERRORLOG_EVENTID_TYPE_BUTT
};
typedef VOS_UINT8  MODEM_COMM_EVENTID_ENUM_UINT8;


/*******************************************************************************************************************
 --------------------------------------------------���¼�����------------------------------------------------------
*******************************************************************************************************************/

/*****************************************************************************
 ö����    : MODEM_TRRC_SUBEVENTID_ENUM_UINT16
 Э����  :
 ASN.1���� :
 ö��˵��  : TRRC�澯�������¼�ö�ٶ���
*****************************************************************************/
enum MODEM_TRRC_SUBEVENTID_ENUM
{
    TRRC_OUT_OF_SYNC_CELL_UPDATE_INFO_STRU_ALARMID     = TRRC_SUBEVENTID_ENUM_BASE+1,
    TRRC_OOS_INFO_STRU_ALARMID                         = TRRC_SUBEVENTID_ENUM_BASE+2,
    TRRC_APP_COLLECT_TDS_FREQ_REPORT_STRU_ALARMID      = TRRC_SUBEVENTID_ENUM_BASE+3,

    TRRC_CS_CALL_EST_CNF_INFO_STRU_ALARMID             = TRRC_SUBEVENTID_ENUM_BASE+4,
    TRRC_CS_CALL_CONN_REQ_INFO_STRU_ALARMID            = TRRC_SUBEVENTID_ENUM_BASE+5,
    TRRC_CS_CALL_AIRMSG_INFO_STRU_ALARMID              = TRRC_SUBEVENTID_ENUM_BASE+6,

    TRRC_ERRORLOG_ALARMID_BUTT
};
typedef VOS_UINT16  MODEM_TRRC_SUBEVENTID_ENUM_UINT16;

/*****************************************************************************
 ö����    : MODEM_TRRC_SUBEVENTID_ENUM_UINT16
 Э����  :
 ASN.1���� :
 ö��˵��  : TRRC�澯�������¼�ö�ٶ���
*****************************************************************************/
enum MODEM_LRRC_SUBEVENTID_ENUM
{
    LPS_OM_VOLTE_FAULT_AUTOAN_INFO_STRU_ALARMID     = LRRC_SUBEVENTID_ENUM_BASE+1,
    LPS_OM_VOLTE_GENERAL_STAT_INFO_STRU_ALARMID      = LRRC_SUBEVENTID_ENUM_BASE+2,

    LRRC_ERRORLOG_ALARMID_BUTT
};
typedef VOS_UINT16  MODEM_LRRC_SUBEVENTID_ENUM_UINT16;

/*****************************************************************************
 ö����    : MODEM_TLL2_SUBEVENTID_ENUM_UINT16
 Э����  :
 ASN.1���� :
 ö��˵��  : TLL2�澯�������¼�ö�ٶ���
*****************************************************************************/
enum MODEM_TLL2_SUBEVENTID_ENUM
{
    TLL2_OOS_INFO_STRU_ALARMID                        = TL2_SUBEVENTID_ENUM_BASE+1,
    LMAC_OM_PREAMBLE_SPEC_NOT_MATCH_INFO_STRU_ALARMID,         /*Preamble��ƥ��ֱͨCHR */

    TLL2_ERRORLOG_ALARMID_BUTT
};
typedef VOS_UINT16  MODEM_TLL2_SUBEVENTID_ENUM_UINT16;


/*****************************************************************************
 5 STRUCT
*****************************************************************************/

/*****************************************************************************
6 UNION
*****************************************************************************/

/*****************************************************************************
7 Extern Global Variable
*****************************************************************************/

/*****************************************************************************
8 Fuction Extern
*****************************************************************************/

/*****************************************************************************
9 OTHERS
*****************************************************************************/


#if (VOS_OS_VER != VOS_WIN32)
#pragma pack()
#else
#pragma pack(pop)
#endif

#ifdef __cplusplus
  #if __cplusplus
      }
  #endif
#endif

#endif /* end of ErrLogComm.h */
