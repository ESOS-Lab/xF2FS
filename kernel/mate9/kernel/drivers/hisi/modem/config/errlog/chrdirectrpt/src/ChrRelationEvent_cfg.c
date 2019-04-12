/******************************************************************************

  Copyright(C)2008,Hisilicon Co. LTD.

******************************************************************************
File Name       : ChrRelationEvent_cfg.c
Description     : �����¼�������
History         :
   1.q00312157      2016-5-25     Draft Enact

******************************************************************************/

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include "ChrRelationEvent_cfg.h"

#ifdef __cplusplus
  #if __cplusplus
  extern "C"{
  #endif
#endif

/*lint -e767 */
//#define    THIS_FILE_ID        PS_FILE_ID_CHRRELATIONEVENT_CFG_C
/*lint +e767 */

/*****************************************************************************
  2 ȫ�ֱ�������
*****************************************************************************/

#if (FEATURE_ON == FEATURE_PTM)

/* TODO: python search flag satrt */
int g_aulModem0ErrRpt[][3]=
{
    RELATIONEVENT1,

};

#if (FEATURE_ON == FEATURE_MULTI_MODEM)
int g_aulModem1ErrRpt[][3]=
{
    RELATIONEVENT1,

};
#if(3 == MULTI_MODEM_NUMBER)
int g_aulModem2ErrRpt[][3]=
{
    RELATIONEVENT1,

};
#endif
#endif
/* TODO: python search flag end */

#endif

/*****************************************************************************
  3 ��������
*****************************************************************************/

/*****************************************************************************
 �� �� ��  : Modem_ErrLog_GetErrReptAddrAndSize
 ��������  : ��ȡErrlogȫ�ֱ�����ַ
 �������  : ulModemId ��modem/��modem��id

 �������  : pulErrLogAddr
             pulsize

 �� �� ֵ  : 0��success  ������fail
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��06��8��
    ��    ��   : q00312157
    �޸�����   : Modemֱͨ��Ŀ����
*****************************************************************************/
VOS_INT32 Modem_ErrLog_GetErrReptAddrAndSize(
    VOS_UINT32                           ulModemId,
    VOS_UINT_PTR                        *pulErrLogAddr,
    VOS_UINT32                          *pulsize
)
{
#if (FEATURE_ON == FEATURE_PTM)
    if (MODEM_ID_0 == ulModemId)
    {
        *pulErrLogAddr = (VOS_UINT_PTR)g_aulModem0ErrRpt;
        *pulsize = sizeof(g_aulModem0ErrRpt);
    }
#if ( FEATURE_ON == FEATURE_MULTI_MODEM )
    else if (MODEM_ID_1 == ulModemId)
    {
        *pulErrLogAddr = (VOS_UINT_PTR)g_aulModem1ErrRpt;
        *pulsize = sizeof(g_aulModem1ErrRpt);

    }
#if (3 == MULTI_MODEM_NUMBER)
    else if (MODEM_ID_2 == ulModemId)
    {
        *pulErrLogAddr = (VOS_UINT_PTR)g_aulModem2ErrRpt;
        *pulsize = sizeof(g_aulModem2ErrRpt);
    }
#endif
#endif
    else
    {
        return VOS_ERR;
    }

    return VOS_OK;

#else
    return VOS_ERR;

#endif

}

/*****************************************************************************
 �� �� ��  : Modem_ErrLog_GetPidAndAlarmId
 ��������  : ulFaultId������pid/alarm_id��ѯ�ӿ�
 �������  : ulModemId ��modem/��modem��id
             ulFaultId fault id

 �������  : paustAlarmArray fault id�������pid alarm_id���飬�ڴ�ռ���diag_om�ṩ����󳤶�2048��֧��һ��faultid����256��alarm_id��
             pulAlarmNum     fault id�������pid alarm_id�����Ա���������256��

 �� �� ֵ  : 0��success  ������fail
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��06��8��
    ��    ��   : q00312157
    �޸�����   : Modemֱͨ��Ŀ����
*****************************************************************************/
VOS_INT32 Modem_ErrLog_GetPidAndAlarmId(
    VOS_UINT32                          ulModemId,
    VOS_UINT32                          ulFaultId,
    ERRLOG_ALARM_STRU                  *paustAlarmArray,
    VOS_UINT32                         *pulAlarmNum
)
{
    VOS_UINT_PTR                        ulErrLogAddr = VOS_NULL;
    VOS_UINT32                          ulsize;
    VOS_UINT32                          ulCount = 0;
    VOS_UINT32                          i;
    VOS_UINT32                          (*pulErrLogArry)[3];

    if (VOS_NULL_PTR == paustAlarmArray)
    {
        return VOS_ERR;
    }

    if (VOS_OK != Modem_ErrLog_GetErrReptAddrAndSize(ulModemId, &ulErrLogAddr, &ulsize))
    {
        return VOS_ERR;
    }

    pulErrLogArry = (VOS_UINT32(*)[3])ulErrLogAddr;

    for (i=0; i < (ulsize / (3 * sizeof(VOS_UINT32))); i++)
    {
        if (ulFaultId == pulErrLogArry[i][0])
        {
            if (FAULT_ID_CONTAIN_ALARM_ID_MAX_NUM <= ulCount)
            {
                return VOS_ERR;
            }

            paustAlarmArray[ulCount].ulSndPID      = pulErrLogArry[i][1];
            paustAlarmArray[ulCount].usAlarmID     = (VOS_UINT16)pulErrLogArry[i][2];
            ulCount++;
        }
    }

    *pulAlarmNum = ulCount;

    return VOS_OK;
}

/*****************************************************************************
 �� �� ��  : Modem_ErrLog_IsContainPID
 ��������  : ���PID�Ƿ��Ѿ�����
 �������  : PID�����Ѽ���С

 �������  : �Ƿ����

 �� �� ֵ  : VOS_TRUE������  ������VOS_FALSE
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��06��8��
    ��    ��   : q00312157
    �޸�����   : Modemֱͨ��Ŀ����

*****************************************************************************/
VOS_BOOL Modem_ErrLog_IsContainPID(
    VOS_UINT32                         *PaulPidArray,
    VOS_UINT32                          ulPidArrayLen,
    VOS_UINT32                          ulDstPid
)
{
    VOS_UINT32                          i;

    for (i=0; i < ulPidArrayLen; i++)
    {
        if (ulDstPid == PaulPidArray[i])
        {
            return VOS_TRUE;
        }
    }

    return VOS_FALSE;
}

/*****************************************************************************
 �� �� ��  : Modem_ErrLog_GetErrlogPid
 ��������  : �ṩerrlog��ص�pid�б�����errlog���ؿ��Ƹ���pid������Ϣ
 �������  : ulModemId ��modem/��modem��id

 �������  : PaulPidArray   errlog�������pid���飬�ڴ�ռ���diag_om�ṩ����󳤶�1024��֧��256��pid��
             pulPidNum      errlog�������pid�����Ա���������256��

 �� �� ֵ  : 0��success  ������fail
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��06��8��
    ��    ��   : q00312157
    �޸�����   : Modemֱͨ��Ŀ����

*****************************************************************************/
VOS_INT32 Modem_ErrLog_GetErrlogPid(
    VOS_UINT32                          ulModemId,
    VOS_UINT32                         *PaulPidArray,
    VOS_UINT32                         *pulPidNum
)
{
    VOS_UINT_PTR                        ulErrLogAddr = VOS_NULL;
    VOS_UINT32                          ulsize;
    VOS_UINT32                          ulCount = 0;
    VOS_UINT32                          i;
    VOS_UINT32                          (*pulErrLogArry)[3];

    if (VOS_NULL_PTR == PaulPidArray)
    {
        return VOS_ERR;
    }

    if (VOS_OK != Modem_ErrLog_GetErrReptAddrAndSize(ulModemId, &ulErrLogAddr, &ulsize))
    {
        return VOS_ERR;
    }

    pulErrLogArry = (VOS_UINT32(*)[3])ulErrLogAddr;

    for (i=0; i < (ulsize / (3 * sizeof(VOS_UINT32))); i++)
    {
        if (0 == i)
        {
            PaulPidArray[0] = pulErrLogArry[i][1];
            ulCount++;
            continue;
        }

        if (VOS_TRUE != Modem_ErrLog_IsContainPID(PaulPidArray, ulCount, pulErrLogArry[i][1]))
        {
            if (ERR_LOG_PID_MAX_NUM <= ulCount)
            {
                return VOS_ERR;
            }

            PaulPidArray[ulCount] = pulErrLogArry[i][1];
            ulCount++;
        }
    }

    *pulPidNum = ulCount;

    return VOS_OK;
}


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

