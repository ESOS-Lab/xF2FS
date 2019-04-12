


#include <mdrv.h>
#include "diag_msgbsp.h"
#include "diag_debug.h"
#include "msp_diag_comm.h"
#include <mdrv_hds_cmd.h>
#include "diag_fs_proc.h"
#include "TafNvInterface.h"

#define    THIS_FILE_ID        MSP_FILE_ID_DIAG_MSGBSP_C
static VOS_UINT32 g_ulPrivilegeLevel = DIAG_LEVEL_NORMAL;
VOS_UINT32 g_DiagHdsCmdNumC = 0;
VOS_UINT32 g_DiagHdsCmdListC[DIAG_HDS_CMD_MAX] = {0};
VOS_UINT32 g_DiagHdsCmdNumA = 0;
VOS_UINT32 g_DiagHdsCmdListA[DIAG_HDS_CMD_MAX] = {0};

VOS_UINT32 g_aulNvAuthIdList[] =
{
    en_NV_Item_IMEI,
    en_NV_Item_USB_Enum_Status,
    en_NV_Item_CustomizeSimLockPlmnInfo,
    en_NV_Item_CardlockStatus,
    en_NV_Item_CustomizeSimLockMaxTimes,
    en_NV_Item_CustomizeService,
    en_NV_Item_PRODUCT_ID,
    en_NV_Item_PREVENT_TEST_IMSI_REG,
    en_NV_Item_AT_SHELL_OPEN_FLAG,
};

/*****************************************************************************
 Function Name   : NvRdProc
 Description     : �ú������ڴ����NvProcEntry�������Ķ�NV����
 Input           : pstReq ����������
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.y00228784      2012-11-22  Draft Enact
    2.c64416         2014-11-18  �����µ���ϼܹ�
    2.c00326366      2015-06-10  ��������NV�Ķ�ȡ����

*****************************************************************************/
VOS_UINT32 diag_NvRdProc(VOS_UINT8* pstReq)
{
    VOS_UINT32 ret = ERR_MSP_SUCCESS;
    DIAG_CMD_NV_QRY_REQ_STRU* pstNVQryReq = NULL;
    DIAG_CMD_NV_QRY_CNF_STRU* pstNVQryCnf = NULL;
    VOS_UINT32 ulNVLen = 0, i = 0;
    VOS_UINT32 ulTotalSize = 0, ulOffset = 0;
    VOS_UINT8 *pData;
    MSP_DIAG_CNF_INFO_STRU stDiagInfo = {0};
    DIAG_FRAME_INFO_STRU *pstDiagHead = NULL;

    pstDiagHead = (DIAG_FRAME_INFO_STRU*)(pstReq);

    stDiagInfo.ulMsgType = DIAG_MSG_TYPE_BSP;

    pstNVQryReq = (DIAG_CMD_NV_QRY_REQ_STRU*)(pstDiagHead->aucData + sizeof(MSP_DIAG_DATA_REQ_STRU));

    for(i = 0; i < pstNVQryReq->ulCount; i++)
    {
        /*��������ID��ȡNV���*/
        ret = NV_GetLength(pstNVQryReq->ulNVId[i], &ulNVLen);
        if(ERR_MSP_SUCCESS != ret)
        {
            diag_printf("[%s]:ulNVId=0x%x,ulNVLen=%d!\n",__FUNCTION__, pstNVQryReq->ulNVId[i], ulNVLen);
            return ERR_MSP_FAILURE;
        }

        ulTotalSize += ulNVLen + sizeof(VOS_UINT32) + sizeof(VOS_UINT32); /* NV���ݵĳ��ȼ���(NVID��len��ռ�����ֽ�) */
    }

    /* DIAG_CMD_NV_QRY_CNF_STRU��ʵ�ʳ��� */
    ulTotalSize += (sizeof(DIAG_CMD_NV_QRY_CNF_STRU) - sizeof(VOS_UINT32) - sizeof(VOS_UINT32));

    pstNVQryCnf = VOS_MemAlloc(MSP_PID_DIAG_APP_AGENT, DYNAMIC_MEM_PT, ulTotalSize );

    if(NULL  == pstNVQryCnf)
    {
        diag_printf("[%s]:malloc error!\n",__FUNCTION__);
        return ERR_MSP_MALLOC_FAILUE;
    }

    pstNVQryCnf->ulModemid = pstNVQryReq->ulModemid;
    pstNVQryCnf->ulCount   = pstNVQryReq->ulCount;

    pData = (VOS_UINT8*)(&pstNVQryCnf->ulNVId);
    ulOffset = 0;

    for(i = 0; i < pstNVQryReq->ulCount; i++)
    {
        /*��������ID��ȡNV���*/
        ret = NV_GetLength(pstNVQryReq->ulNVId[i], &ulNVLen);
        if(ERR_MSP_SUCCESS != ret)
        {
            diag_printf("[%s]:ulNVId=0x%x,ulNVLen=%d!\n",__FUNCTION__, pstNVQryReq->ulNVId[i], ulNVLen);
            goto DIAG_ERROR;
        }

        *(VOS_UINT32*)(pData + ulOffset) = pstNVQryReq->ulNVId[i]; /* [false alarm]:����Fortify */
        ulOffset += sizeof(VOS_UINT32);

        *(VOS_UINT32*)(pData + ulOffset) = ulNVLen; /* [false alarm]:����Fortify */
        ulOffset += sizeof(VOS_UINT32);

        ret = NV_ReadEx(pstNVQryReq->ulModemid, pstNVQryReq->ulNVId[i], (pData + ulOffset), ulNVLen);
        if(ret != ERR_MSP_SUCCESS)
        {
            diag_printf("[%s]:NV READ ERR 0x%x,ulNVId=0x%x\n",__FUNCTION__, ret, pstNVQryReq->ulNVId[i]);
            goto DIAG_ERROR;
        }

        ulOffset += ulNVLen;
    }

    DIAG_MSG_COMMON_PROC(stDiagInfo, (*pstNVQryCnf), pstDiagHead);

    pstNVQryCnf->ulRc    = ret;

    ret = DIAG_MsgReport(&stDiagInfo, pstNVQryCnf, ulTotalSize);

    VOS_MemFree(MSP_PID_DIAG_APP_AGENT, pstNVQryCnf);

    return ret;

DIAG_ERROR:
    DIAG_MSG_COMMON_PROC(stDiagInfo, (*pstNVQryCnf), pstDiagHead);

    pstNVQryCnf->ulRc    = ERR_MSP_FAILURE;
    pstNVQryCnf->ulCount = 0;

    ret = DIAG_MsgReport(&stDiagInfo, pstNVQryCnf, sizeof(DIAG_CMD_NV_QRY_CNF_STRU));

    VOS_MemFree(MSP_PID_DIAG_APP_AGENT, pstNVQryCnf);

    return ret;
}


/*****************************************************************************
 Function Name   : diag_GetNvListProc
 Description     : HIMS��ȡNV list����Ĵ���ӿ�
 Input           : pstReq ����������
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.c00326366      2012-11-22  Draft Enact

*****************************************************************************/
VOS_UINT32 diag_GetNvListProc(VOS_UINT8* pstReq)
{
    VOS_UINT32 ret, ulNvNum, ulTotalLen;
    DIAG_CMD_NV_LIST_CNF_STRU* pstNVCnf = NULL;
    DIAG_CMD_NV_LIST_CNF_STRU stNVCnf = {0};
    MSP_DIAG_CNF_INFO_STRU stDiagInfo = {0};
    DIAG_FRAME_INFO_STRU *pstDiagHead;

    pstDiagHead = (DIAG_FRAME_INFO_STRU*)(pstReq);

    stDiagInfo.ulMsgType = DIAG_MSG_TYPE_BSP;

    ulNvNum = NV_GetNVIdListNum();
    if (0 == ulNvNum)
    {
        diag_printf("[%s]: ulNvNum=%d!\n",__FUNCTION__, ulNvNum);
        goto DIAG_ERROR;
    }

    /*APP_HEAD + Result + NV nums + NV ID/LEN lists*/
    ulTotalLen = sizeof(DIAG_CMD_NV_LIST_CNF_STRU) + (ulNvNum*sizeof(NV_LIST_INFO_STRU));

    pstNVCnf = (DIAG_CMD_NV_LIST_CNF_STRU*)VOS_MemAlloc(MSP_PID_DIAG_APP_AGENT, DYNAMIC_MEM_PT, ulTotalLen);

    if (VOS_NULL_PTR == pstNVCnf)
    {
        diag_printf("[%s]:malloc error!\n",__FUNCTION__);
        goto DIAG_ERROR;
    }

    /*��ȡÿ��NV���ID�ͳ���*/
    ret = NV_GetNVIdList(pstNVCnf->astNvList);
    if (NV_OK != ret)
    {
        VOS_MemFree(MSP_PID_DIAG_APP_AGENT, pstNVCnf);
        goto DIAG_ERROR;
    }

    DIAG_MSG_COMMON_PROC(stDiagInfo, (*pstNVCnf), pstDiagHead);

    pstNVCnf->ulCount    = ulNvNum;
    pstNVCnf->ulRc       = ERR_MSP_SUCCESS;

    ret = DIAG_MsgReport(&stDiagInfo, pstNVCnf, ulTotalLen);

    VOS_MemFree(MSP_PID_DIAG_APP_AGENT, pstNVCnf);

    return ret;

DIAG_ERROR:

    DIAG_MSG_COMMON_PROC(stDiagInfo, stNVCnf, pstDiagHead);

    stNVCnf.ulCount      = 0;
    stNVCnf.ulRc         = ERR_MSP_FAILURE;

    ret = DIAG_MsgReport(&stDiagInfo, &stNVCnf, sizeof(stNVCnf));

    return ret;
}

/*****************************************************************************
 Function Name   : diag_NvAuthProc
 Description     : ��ʼ����Ȩȫ�ֱ���
 Input           : None
 Output          : None
 Return          : VOS_VOID

 History         :
    1.c00326366      2012-11-22  Draft Enact

*****************************************************************************/
VOS_VOID diag_InitAuthVariable(VOS_VOID)
{
    IMEI_STRU stIMEI;
    VOS_UINT8 aucDefaultIMEI[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    /*����IMEIΪĬ��ֵ������Ҫ��Ȩ*/
    if (NV_OK == NV_Read(en_NV_Item_IMEI, (VOS_VOID*)&stIMEI, sizeof(stIMEI)))
    {
        if (0 == VOS_MemCmp((VOS_CHAR*)aucDefaultIMEI, &stIMEI, sizeof(stIMEI)))
        {
            g_ulPrivilegeLevel = DIAG_LEVEL_ADVANCED;
        }
    }

    return;
}

/*****************************************************************************
 Function Name   : diag_NvAuthProc
 Description     : �жϴ�NV���Ƿ���Խ����޸�
 Input           : ulNvId
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.c00326366      2012-11-22  Draft Enact

*****************************************************************************/
VOS_UINT32 diag_IsAuthNv(VOS_UINT32 ulNvId)
{
    VOS_UINT32 i;

    for (i = 0; i < (sizeof(g_aulNvAuthIdList)/sizeof(VOS_UINT32)); i++)
    {
        if (ulNvId == g_aulNvAuthIdList[i])
        {
            if (DIAG_LEVEL_ADVANCED == g_ulPrivilegeLevel)
            {
                return VOS_YES;
            }
            return VOS_NO;
        }
    }

    return VOS_YES;
}

VOS_VOID diag_AuthNvCfg(MsgBlock* pMsgBlock)
{
    DIAG_BSP_NV_AUTH_STRU *pstMsg = (DIAG_BSP_NV_AUTH_STRU *)pMsgBlock;
    g_ulPrivilegeLevel = pstMsg->ulLevel;
}

/*****************************************************************************
 Function Name   : diag_NvWrProc
 Description     : �ú������ڴ����NvProcEntry��������дNV����
 Input           : pstReq ����������
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.y00228784      2012-11-22  Draft Enact
    2.c64416         2014-11-18  �����µ���ϼܹ�
    2.c00326366      2015-06-10  ��������NV��д��������д����ת��C�˴���
                     ת��C�˴����ԭ��: 1. ����NVд�ӿ�������������DIAG������ӳ�
                                        2. NV��Ȩ�Ĳ�����C�ˣ���Ȩ״̬��C�˼�¼

*****************************************************************************/
VOS_UINT32 diag_NvWrProc(VOS_UINT8* pstReq)
{
    VOS_UINT32 ret;
    MSP_DIAG_CNF_INFO_STRU stDiagInfo = {0};
    DIAG_CMD_NV_WR_REQ_STRU* pstNVWRReq = NULL;
    DIAG_FRAME_INFO_STRU *pstDiagHead = NULL;
    DIAG_CMD_NV_WR_CNF_STRU stNVWRCnf = {0};
    VOS_UINT32 i = 0;
    VOS_UINT32 ulOffset = 0;
    VOS_UINT32 ulNvid, ulLen;
    VOS_UINT8 *pData;

    pstDiagHead = (DIAG_FRAME_INFO_STRU*)(pstReq);

    pstNVWRReq = (DIAG_CMD_NV_WR_REQ_STRU*)(pstDiagHead->aucData + sizeof(MSP_DIAG_DATA_REQ_STRU));

    stDiagInfo.ulMsgType = DIAG_MSG_TYPE_BSP;

    pData = (VOS_UINT8*)(&pstNVWRReq->ulNVId);

    for(i = 0; i < pstNVWRReq->ulCount; i++)
    {
        ulNvid    = *(VOS_UINT32*)(pData + ulOffset);
        ulOffset += sizeof(VOS_UINT32);

        ulLen     = *(VOS_UINT32*)(pData + ulOffset);
        ulOffset += sizeof(VOS_UINT32);

        if (VOS_YES != diag_IsAuthNv(ulNvid))
        {
            goto DIAG_ERROR2;
        }

        printk(KERN_ERR "NV Write ulNVId=0x%x\n", ulNvid);

        /*д��NV��*/
        ret = NV_WriteEx(pstNVWRReq->ulModemid, ulNvid, (pData + ulOffset), ulLen);
        if(ret != ERR_MSP_SUCCESS)
        {
           printk(KERN_ERR "[%s]:NV Write ERR 0x%x,ulNVId=0x%x\n",__FUNCTION__, ret, ulNvid);
           goto DIAG_ERROR2;
        }
        /*��Nv��ˢд��flash��*/
        ret = mdrv_nv_flush();
        if(ret)
        {
            printk(KERN_ERR "[%s]:flush nv ERR 0x%x,ulNVId=0x%x\n",__FUNCTION__, ret, ulNvid);
            goto DIAG_ERROR2;
        }
        ulOffset += ulLen;
    }

    DIAG_MSG_COMMON_PROC(stDiagInfo, stNVWRCnf, pstDiagHead);

    stNVWRCnf.ulModemid  = pstNVWRReq->ulModemid;
    stNVWRCnf.ulRc       = ret;

    ret = DIAG_MsgReport(&stDiagInfo, &stNVWRCnf, sizeof(stNVWRCnf));

    return ret;

DIAG_ERROR2:

    DIAG_MSG_COMMON_PROC(stDiagInfo, stNVWRCnf, pstDiagHead);

    stNVWRCnf.ulModemid  = pstNVWRReq->ulModemid;
    stNVWRCnf.ulRc       = ERR_MSP_FAILURE;

    ret = DIAG_MsgReport(&stDiagInfo, &stNVWRCnf, sizeof(stNVWRCnf));

    return ret;
}

VOS_VOID diag_BspRecvCmdList(MsgBlock* pMsgBlock)
{
    DIAG_BSP_CMDLIST_STRU *pstMsg = (DIAG_BSP_CMDLIST_STRU *)pMsgBlock;

    g_DiagHdsCmdNumC = pstMsg->ulCmdNum;
    VOS_MemCpy(g_DiagHdsCmdListC, pstMsg->ulCmdList, g_DiagHdsCmdNumC*sizeof(VOS_UINT32));

    diag_printf("%s Rcv ccore cmd list, num: 0x%x\n",__FUNCTION__, g_DiagHdsCmdNumC);

    return;
}

VOS_VOID diag_BspCmdListInit(VOS_VOID)
{
    g_DiagHdsCmdNumA = DIAG_HDS_CMD_MAX;
    mdrv_hds_get_cmdlist(g_DiagHdsCmdListA, &g_DiagHdsCmdNumA);
}

VOS_BOOL diag_BspIsAcoreCmd(VOS_UINT32 ulCmdId)
{
    int i;

    if(!ulCmdId)
        return VOS_FALSE;

    for(i=0; i<g_DiagHdsCmdNumA; i++)
    {
        if(g_DiagHdsCmdListA[i] == ulCmdId)
        {
            return VOS_TRUE;
        }
    }

    return VOS_FALSE;
}


VOS_BOOL diag_BspIsCcoreCmd(VOS_UINT32 ulCmdId)
{
    int i;

    if(!ulCmdId)
        return VOS_FALSE;

    for(i=0; i<g_DiagHdsCmdNumC; i++)
    {
        if(g_DiagHdsCmdListC[i] == ulCmdId)
        {
            return VOS_TRUE;
        }
    }

    return VOS_FALSE;
}

VOS_UINT32 diag_BspMsgProc(DIAG_FRAME_INFO_STRU *pData)
{
    VOS_UINT32 ulRet = ERR_MSP_INVALID_PARAMETER ;
    MSP_DIAG_CNF_INFO_STRU stDiagInfo = {0};
    DIAG_BSP_COMM_CNF_STRU stCnf = {0};
    DIAG_FRAME_INFO_STRU *pstDiagHead = pData;
    DIAG_BSP_MSG_A_TRANS_C_STRU *pstInfo;
    VOS_UINT32 ulLen = 0;
    VOS_UINT32 acmd_flag = 0;
    VOS_UINT32 ccmd_flag = 0;

    if(DIAG_MSG_TYPE_BSP != pData->stID.pri4b)
    {
        diag_printf("%s Rcv Error Msg Id 0x%x\n",__FUNCTION__,pData->ulCmdId);
        return ulRet;
    }

    acmd_flag = diag_BspIsAcoreCmd(pData->ulCmdId);
    ccmd_flag = diag_BspIsCcoreCmd(pData->ulCmdId);

    if  ((VOS_TRUE == acmd_flag) && (VOS_FALSE == ccmd_flag))
    {
        ulRet = mdrv_hds_msg_proc((VOS_VOID *)pData);
        if(ulRet != 0)
        {
            diag_printf("acore msg_proc fail!\n",__FUNCTION__);
        }

        return ulRet;
    }
    else if ((VOS_FALSE == acmd_flag) && (VOS_TRUE == ccmd_flag))
    {
        /*֪ͨccore*/
        DIAG_MSG_BSP_ACORE_CFG_PROC(ulLen, pData, pstInfo, ulRet);
        return VOS_OK;
    }
    else if ((VOS_TRUE == acmd_flag) && (VOS_TRUE == ccmd_flag))
    {
        /*A�˴���ɹ���֪ͨccore��A�˴����ɹ�ֱ���򹤾߻ظ�*/
        ulRet = mdrv_hds_msg_proc((VOS_VOID*)pData);
        if(ulRet != 0)
        {
            diag_printf("comm_acore msg_proc fail!\n",__FUNCTION__);
            return ulRet;
        }

        DIAG_MSG_BSP_ACORE_CFG_PROC(ulLen, pData, pstInfo, ulRet);
        return VOS_OK;
    }
    else
    {
        //todo...
    }

    return ulRet;

DIAG_ERROR:

    stDiagInfo.ulMsgType = DIAG_MSG_TYPE_BSP;

    DIAG_MSG_COMMON_PROC(stDiagInfo, stCnf, pstDiagHead);

    stCnf.ulRet = ERR_MSP_FAILURE;

    ulRet = DIAG_MsgReport(&stDiagInfo, &stCnf, sizeof(stCnf));

    return ulRet;

}

/*****************************************************************************
 Function Name   : diag_BspMsgInit
 Description     : MSP dsp���ֳ�ʼ��
 Input           : None
 Output          : None
 Return          : None
 History         :

*****************************************************************************/
VOS_VOID diag_BspMsgInit(VOS_VOID)
{
    /*ע��message��Ϣ�ص�*/
    DIAG_MsgProcReg(DIAG_MSG_TYPE_BSP,diag_BspMsgProc);
    mdrv_hds_cnf_register((hds_cnf_func)DIAG_MsgReport);
    diag_nvInit();
    diag_fsInit();
    diag_BspCmdListInit();
}


VOS_VOID diag_nvInit(VOS_VOID)
{
    mdrv_hds_cmd_register(DIAG_CMD_NV_WR, (bsp_hds_func)diag_NvWrProc);
    mdrv_hds_cmd_register(DIAG_CMD_NV_RD, (bsp_hds_func)diag_NvRdProc);
    mdrv_hds_cmd_register(DIAG_CMD_GET_NV_LIST, (bsp_hds_func)diag_GetNvListProc);
    //mdrv_hds_cmd_register(DIAG_CMD_NV_AUTH, (bsp_hds_func)diag_NvAuthProc);
}





