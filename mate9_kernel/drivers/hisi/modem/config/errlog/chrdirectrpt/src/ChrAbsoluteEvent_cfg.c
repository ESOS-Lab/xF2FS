/******************************************************************************

  Copyright(C)2008,Hisilicon Co. LTD.

******************************************************************************
File Name       : ChrRelationEvent_cfg.c
Description     : �ǹ����¼������
History         :
   1.q00312157      2016-7-12     Draft Enact

******************************************************************************/

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include "ChrEventIDComm.h"

#ifdef __cplusplus
  #if __cplusplus
  extern "C"{
  #endif
#endif

/*lint -e767 */
//#define    THIS_FILE_ID        PS_FILE_ID_CHRABSOLUTEEVENT_CFG_C
/*lint +e767 */

/*****************************************************************************
  2 ȫ�ֱ�������
*****************************************************************************/

#if (FEATURE_ON == FEATURE_PTM)

/* TRRC �ǹ���ֱͨ�¼����弯�� */
int g_aulTRRCAbosulteEvent[][2]=
{
    {TRRC_STATISTIC_INFO_COLLECTION_EVENTID, TRRC_OUT_OF_SYNC_CELL_UPDATE_INFO_STRU_ALARMID},
    {TRRC_STATISTIC_INFO_COLLECTION_EVENTID, TRRC_APP_COLLECT_TDS_FREQ_REPORT_STRU_ALARMID },
    {TRRC_STATISTIC_INFO_COLLECTION_EVENTID, TRRC_CS_CALL_EST_CNF_INFO_STRU_ALARMID},
    {TRRC_STATISTIC_INFO_COLLECTION_EVENTID, TRRC_CS_CALL_CONN_REQ_INFO_STRU_ALARMID}, 
    {TRRC_STATISTIC_INFO_COLLECTION_EVENTID, TRRC_CS_CALL_AIRMSG_INFO_STRU_ALARMID},
};

/* TMAC �ǹ���ֱͨ�¼����弯�� */
int g_aulTMACbosulteEvent[][2]=
{

};

/* LRRC ͳ��1 �ǹ���ֱͨ�¼����弯�� */
int g_aulLRRCStatictic1Event[][2]=
{

};

/* LRRC ͳ��2 �ǹ���ֱͨ�¼����弯�� */
int g_aulLRRCStatictic2Event[][2]=
{

};

/* LL2 ͳ��1 �ǹ���ֱͨ�¼����弯�� */
int g_aulLL2StaticticEvent[][2]=
{
    {LL2_STATISTIC_INFO_COLLECTION_EVENTID, LMAC_OM_PREAMBLE_SPEC_NOT_MATCH_INFO_STRU_ALARMID},
};

/* Volte������¼� */
int g_aulLRRCVolteFaultAutoAnIndEvent[][2]=
{
    {LRRC_VOLTE_FAULT_AUTOAN_IND_EVENTID, LPS_OM_VOLTE_FAULT_AUTOAN_INFO_STRU_ALARMID},
};

int g_aulLRRCVolteStatIndEvent[][2]=
{
    {LPS_VOLTE_STAT_IND_EVENTID, LPS_OM_VOLTE_GENERAL_STAT_INFO_STRU_ALARMID},
};



/* LMAS ͳ�� �ǹ���ֱͨ�¼����弯�� */
int g_aulLNASStaticticEvent[][2]=
{

};


#endif

/*****************************************************************************
  3 ��������
*****************************************************************************/


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

