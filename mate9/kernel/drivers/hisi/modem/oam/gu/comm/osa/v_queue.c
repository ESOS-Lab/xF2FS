

/*****************************************************************************/
/*                                                                           */
/*                Copyright 1999 - 2003, Huawei Tech. Co., Ltd.              */
/*                           ALL RIGHTS RESERVED                             */
/*                                                                           */
/* FileName: v_queue.c                                                       */
/*                                                                           */
/* Author: Yang Xiangqian                                                    */
/*                                                                           */
/* Version: 1.0                                                              */
/*                                                                           */
/* Date: 2006-10                                                             */
/*                                                                           */
/* Description: implement queue                                              */
/*                                                                           */
/* Others:                                                                   */
/*                                                                           */
/* History:                                                                  */
/* 1. Date:                                                                  */
/*    Author:                                                                */
/*    Modification: Create this file                                         */
/*                                                                           */
/* 2. Date: 2006-10                                                          */
/*    Author: Xu Cheng                                                       */
/*    Modification: Standardize code                                         */
/*                                                                           */
/*****************************************************************************/

#include "vos_config.h"
#include "v_typdef.h"
#include "v_queue.h"
#include "v_msg.h"
#include "v_IO.h"
#include "v_task.h"
#include "v_sem.h"
#include "vos_Id.h"
#include "v_int.h"
#include "v_blkMem.h"

/* LINUX ��֧�� */




/*****************************************************************************
    Э��ջ��ӡ��㷽ʽ�µ�.C�ļ��궨��
*****************************************************************************/
#define    THIS_FILE_ID        PS_FILE_ID_V_QUEUE_C



/* the state of control block */
#define VOS_QUEUE_CTRL_BLK_IDLE               0
#define VOS_QUEUE_CTRL_BLK_BUSY               1

/* errno define */
#define VOS_QUEUE_CTRL_BLK_NULL               0xffffffff

#define VOS_MAX_PID_PRI                       VOS_PRIORITY_NUM


typedef struct
{
    VOS_UINT_PTR        *QStart;
    VOS_UINT_PTR        *QEnd;
    VOS_UINT_PTR        *QIn;
    VOS_UINT_PTR        *QOut;
    VOS_UINT32          QSize;
    VOS_UINT32          QEntries;
    VOS_UINT32          QUrgentSize;
    VOS_UINT8           aucRsv[4];
}VOS_Q_STRU;

typedef struct
{
    int                 Flag;/* control block's state */
    VOS_UINT32          Qid; /* queue ID */
    VOS_UINT32          Length;/* the MAX stored message number */
    VOS_UINT32          QueueOption;/* FIFO or priority */
    VOS_UINT32          MaxMsgSize;/* the MAX stored message size */
    VOS_UINT8           aucRsv[4];
    VOS_SEM             Sem_ID;/*pend this Sem to get queue */
    /* which should be del when only one FID exists */
    VOS_UINT32          QNum;/* number of Q */
    VOS_Q_STRU          Q[VOS_MAX_PID_PRI];
} VOS_QUEUE_CONTROL_BLOCK;

typedef struct
{
    VOS_UINT16 usSendPid;
    VOS_UINT16 usRcvPid;
    VOS_UINT32 ulMsgName;
}VOS_DUMP_QUEUE_CONTENT_STRU;

/* the number of queue's control block */
VOS_UINT32               vos_QueueCtrlBlcokNumber;

/* the Max usage of queue */
VOS_UINT32               Max_use_queue_number;

/* the start address of queue's control block */
VOS_QUEUE_CONTROL_BLOCK  *vos_QueueCtrlBlcok;

/* the definition of control info */
#define VOS_QUEUE_CTRL_BUF_SIZE (sizeof(VOS_QUEUE_CONTROL_BLOCK) * VOS_MAX_QUEUE_NUMBER )

VOS_CHAR g_acVosQueueCtrlBuf[VOS_QUEUE_CTRL_BUF_SIZE];

/* the definition of buf 1->RTC task */
#define VOS_QUEUE_BUF_SIZE       (VOS_FID_BUTT*(sizeof(VOS_UINT_PTR)*VOS_FID_QUEUE_LENGTH)) /* 30 is the number of FID */

VOS_CHAR g_acVosQueueBuf[VOS_QUEUE_BUF_SIZE];

/*the location of buf which should be allocated */
VOS_UINT32 g_ulVosQueueBufSuffix = 0;

/* ��������������queue���ٽ���Դ���� */
VOS_SPINLOCK             g_stVosQueueSpinLock;

/*****************************************************************************
 Function   : VOS_QueueCtrlBlkInit
 Description: Init queue's control block
 Input      : ulQueueCtrlBlcokNumber -- number of queue
 Return     : None
 Other      :
 *****************************************************************************/
VOS_VOID VOS_QueueCtrlBlkInit(VOS_VOID)
{
    VOS_UINT32  i;

    vos_QueueCtrlBlcok = (VOS_QUEUE_CONTROL_BLOCK*)g_acVosQueueCtrlBuf;

    Max_use_queue_number = 0;

    vos_QueueCtrlBlcokNumber = VOS_MAX_QUEUE_NUMBER;

    for(i=0; i<vos_QueueCtrlBlcokNumber; i++)
    {
        vos_QueueCtrlBlcok[i].Flag     = VOS_QUEUE_CTRL_BLK_IDLE;
        vos_QueueCtrlBlcok[i].Qid      = i;
    }

    VOS_SpinLockInit(&g_stVosQueueSpinLock);

    return;
}

/*****************************************************************************
 Function   : VOS_QueueCtrlBlkGet
 Description: allocte a queue control block
 Input      : void
            : void
 Return     : VOS_OK on success or errno on failure.
 Other      :
 *****************************************************************************/
VOS_UINT32 VOS_QueueCtrlBlkGet(VOS_VOID)
{
    VOS_UINT32      i;
    VOS_ULONG       ulLockLevel;

    /*intLockLevel = VOS_SplIMP();*/
    VOS_SpinLockIntLock(&g_stVosQueueSpinLock, ulLockLevel);

    for(i=0; i<vos_QueueCtrlBlcokNumber; i++)
    {
        if(vos_QueueCtrlBlcok[i].Flag == VOS_QUEUE_CTRL_BLK_IDLE)
        {
            vos_QueueCtrlBlcok[i].Flag = VOS_QUEUE_CTRL_BLK_BUSY;

            break;
        }
    }

    /*VOS_Splx(intLockLevel);*/
    VOS_SpinUnlockIntUnlock(&g_stVosQueueSpinLock, ulLockLevel);

    if( i < vos_QueueCtrlBlcokNumber)
    {
        /* record the max usage of queue */
        if ( i > Max_use_queue_number )
        {
            Max_use_queue_number = i;
        }


        return i;
    }
    else
    {
        LogPrint("# VOS_QueueCtrlBlkGet no Idle.\r\n");

        VOS_SetErrorNo(VOS_ERRNO_QUEUE_FULL);

        return( VOS_QUEUE_CTRL_BLK_NULL );
    }
}

/*****************************************************************************
 Function   : VOS_QueueCtrlBlkFree
 Description: free a queue control block
 Input      : Qid -- queue ID
 Return     : void
 Other      :
 *****************************************************************************/
VOS_UINT32 VOS_QueueCtrlBlkFree(VOS_UINT32 Qid)
{
    VOS_ULONG              ulLockLevel;

    if( Qid < vos_QueueCtrlBlcokNumber )
    {
        if(vos_QueueCtrlBlcok[Qid].Flag == VOS_QUEUE_CTRL_BLK_IDLE)
        {
            Print("# VOS_QueueCtrlBlkFree free Idle Queue.\r\n");
        }
        else
        {
            /*intLockLevel = VOS_SplIMP();*/
            VOS_SpinLockIntLock(&g_stVosQueueSpinLock, ulLockLevel);

            vos_QueueCtrlBlcok[Qid].Flag = VOS_QUEUE_CTRL_BLK_IDLE;

            /*VOS_Splx(intLockLevel);*/
            VOS_SpinUnlockIntUnlock(&g_stVosQueueSpinLock, ulLockLevel);
        }

        return VOS_OK;
    }
    else
    {
        Print("# VOS_QueueGetCtrlBlkInit Error.\r\n");

        return VOS_ERR;
    }
}

/*****************************************************************************
 Function   : VOS_FixedQueueCreate
 Description: Create queue
 Input      : pchName      -- Name(16 chars) of the queue
              ulLength     -- The length of the queue, 0 means default size
                              which definded by VOS_DEFAULT_QUEUE_SIZE
              pulQueueID   -- The address of the queue ID
              ulQueueMode  -- Queue block mode:
                              VOS_MSG_Q_FIFO or VOS_MSG_Q_PRIORITY
              ulMaxMsgSize -- The Max message size that the queue can contain.
                              Now must be 4
              ulQueueNum   -- The Max number of Queue size
 Output     : pulQueueID   -- The address of the queue ID
 Return     : VOS_OK on success or errno on failure
 Other      : The queue name can be same to others
 *****************************************************************************/
VOS_UINT32 VOS_FixedQueueCreate( VOS_UINT32 ulLength,
                            VOS_UINT32 *pulQueueID,
                            VOS_UINT32 ulQueueOption,
                            VOS_UINT32 ulMaxMsgSize,
                            VOS_UINT32 ulQueueNum)
{
    int             i;
    /*int             j;*/
    VOS_UINT32      iQid;
    VOS_UINT32      iQueueOption;
    VOS_UINT32      QueueLength;
    VOS_UINT32      AllocSize;

    if( ulLength == 0)
    {
        QueueLength = VOS_DEFAULT_QUEUE_SIZE;
        AllocSize = VOS_DEFAULT_QUEUE_SIZE*sizeof(VOS_UINT_PTR);
    }
    else
    {
        QueueLength = ulLength;
        AllocSize = ulLength*sizeof(VOS_UINT_PTR);
    }

    /* convert VOS's pri to Vxworks's */
    if( ulQueueOption == VOS_MSG_Q_FIFO )
    {
        iQueueOption = VOS_SEMA4_FIFO;
    }
    else if( ulQueueOption == VOS_MSG_Q_PRIORITY )
    {
        iQueueOption = VOS_SEMA4_PRIOR;
    }
    else
    {
        (VOS_VOID)VOS_SetErrorNo(VOS_ERRNO_QUEUE_CREATE_OPTINVALID);
        return( VOS_ERRNO_QUEUE_CREATE_OPTINVALID );
    }

    if( ulMaxMsgSize == 0 )
    {
        (VOS_VOID)VOS_SetErrorNo(VOS_ERRNO_QUEUE_CREATE_SIZEISZERO);
        return( VOS_ERRNO_QUEUE_CREATE_SIZEISZERO );
    }

    if( pulQueueID == NULL )
    {
        (VOS_VOID)VOS_SetErrorNo(VOS_ERRNO_QUEUE_CREATE_OUTPUTISNULL);
        return( VOS_ERRNO_QUEUE_CREATE_OUTPUTISNULL );
    }

    /* create queue */
    iQid = VOS_QueueCtrlBlkGet();
    if( iQid == VOS_QUEUE_CTRL_BLK_NULL )
    {
        (VOS_VOID)VOS_SetErrorNo(VOS_ERRNO_QUEUE_CREATE_NOFREECB);
        return( VOS_ERRNO_QUEUE_CREATE_NOFREECB );
    }

    /* which should be del when only one FID exists */
    /* for (i=0; i<VOS_MAX_PID_PRI; i++) */
    for (i=0; i<(VOS_INT)ulQueueNum; i++)
    {
        vos_QueueCtrlBlcok[iQid].Q[i].QStart\
            = (VOS_UINT_PTR *)VOS_StaticMemAlloc(g_acVosQueueBuf,\
                    sizeof(g_acVosQueueBuf), AllocSize, &g_ulVosQueueBufSuffix);

        if(VOS_NULL_PTR == vos_QueueCtrlBlcok[iQid].Q[i].QStart)
        {
            Print("# VOS_FixedQueueCreate alloc mem Error.\r\n");

            /*for (j=0;j<i;j++)
            {
                free(vos_QueueCtrlBlcok[iQid].Q[j].QStart);
            }*/
            (VOS_VOID)VOS_QueueCtrlBlkFree( iQid );
            return(VOS_ERR);
        }

        vos_QueueCtrlBlcok[iQid].Q[i].QEnd
            = (VOS_UINT_PTR *)((VOS_UINT_PTR)vos_QueueCtrlBlcok[iQid].Q[i].QStart + AllocSize);
        vos_QueueCtrlBlcok[iQid].Q[i].QIn = vos_QueueCtrlBlcok[iQid].Q[i].QStart;
        vos_QueueCtrlBlcok[iQid].Q[i].QOut = vos_QueueCtrlBlcok[iQid].Q[i].QStart;
        vos_QueueCtrlBlcok[iQid].Q[i].QSize = QueueLength;
        vos_QueueCtrlBlcok[iQid].Q[i].QEntries = 0;
        vos_QueueCtrlBlcok[iQid].Q[i].QUrgentSize = 0;
    }

    if( VOS_OK
        != VOS_SmCCreate("tmp", 0, iQueueOption, &vos_QueueCtrlBlcok[iQid].Sem_ID))
    {
        /* which should be del when only one FID exists */
        /* for ( i=0; i<VOS_MAX_PID_PRI; i++ ) */
        /*for ( i=0; i<(VOS_INT)ulQueueNum; i++ )
        {
            free( vos_QueueCtrlBlcok[iQid].Q[i].QStart );
        }*/
        (VOS_VOID)VOS_QueueCtrlBlkFree( iQid );
        (VOS_VOID)VOS_SetErrorNo(VOS_ERRNO_QUEUE_CREATE_OSALFAIL);
        return( VOS_ERRNO_QUEUE_CREATE_OSALFAIL );
    }
    else
    {
        *pulQueueID = iQid;

        vos_QueueCtrlBlcok[iQid].Length     = ulLength;
        vos_QueueCtrlBlcok[iQid].QueueOption= ulQueueOption;
        vos_QueueCtrlBlcok[iQid].MaxMsgSize = ulMaxMsgSize;
        /* which should be del when only one FID exists */
        vos_QueueCtrlBlcok[iQid].QNum = ulQueueNum;

        return( VOS_OK );
    }
}

/*****************************************************************************
 Function   : VOS_AddQueue
 Description: Write a message to a specific queue's list
 Input      : ulQueueID    -- Queue ID
              suffix       -- queue's suffix
              AddressValue -- the message's address
 Output     : None
 Return     : VOS_OK on success or errno on failure
 Other      : If the buffer size to write is larger than max message length,
              the writing would be failed.
 *****************************************************************************/
VOS_UINT32 VOS_AddQueue(VOS_UINT32 ulQueueID, int suffix,
                        VOS_UINT_PTR AddressValue, VOS_UINT32 Pri)
{
    VOS_ULONG           ulLockLevel;
    VOS_UINT32          ulUrgentSize;
    VOS_UINT32          ulIndex;
    VOS_UINT_PTR       *pulTmpAddr;
    VOS_UINT_PTR        ulTmpValue;

    /*intLockLevel = VOS_SplIMP();*/
    VOS_SpinLockIntLock(&g_stVosQueueSpinLock, ulLockLevel);

    if ( vos_QueueCtrlBlcok[ulQueueID].Q[suffix].QEntries
        >= vos_QueueCtrlBlcok[ulQueueID].Q[suffix].QSize )
    {
         /*VOS_Splx(intLockLevel);*/
         VOS_SpinUnlockIntUnlock(&g_stVosQueueSpinLock, ulLockLevel);

         return VOS_ERR;
    }

    if ( VOS_EMERGENT_PRIORITY_MSG == Pri )
    {
        ulUrgentSize = vos_QueueCtrlBlcok[ulQueueID].Q[suffix].QUrgentSize;

        if (0 < ulUrgentSize)
        {
            pulTmpAddr = vos_QueueCtrlBlcok[ulQueueID].Q[suffix].QOut;

            ulTmpValue = *pulTmpAddr;

            for (ulIndex = 1; ulIndex < ulUrgentSize; ulIndex++)
            {
                if (pulTmpAddr == vos_QueueCtrlBlcok[ulQueueID].Q[suffix].QEnd - 1)
                {
                    *pulTmpAddr = *(VOS_UINT_PTR*)(vos_QueueCtrlBlcok[ulQueueID].Q[suffix].QStart);
                    pulTmpAddr  = vos_QueueCtrlBlcok[ulQueueID].Q[suffix].QStart;
                    continue;
                }

                *pulTmpAddr = *(pulTmpAddr + 1);
                pulTmpAddr++;
            }

            *pulTmpAddr = AddressValue;
        }
        else
        {
            ulTmpValue = AddressValue;
        }

        if ( vos_QueueCtrlBlcok[ulQueueID].Q[suffix].QOut
            == vos_QueueCtrlBlcok[ulQueueID].Q[suffix].QStart )
        {
            vos_QueueCtrlBlcok[ulQueueID].Q[suffix].QOut
                = vos_QueueCtrlBlcok[ulQueueID].Q[suffix].QEnd - 1;
        }
        else
        {
            vos_QueueCtrlBlcok[ulQueueID].Q[suffix].QOut--;
        }

        *vos_QueueCtrlBlcok[ulQueueID].Q[suffix].QOut = ulTmpValue;
        vos_QueueCtrlBlcok[ulQueueID].Q[suffix].QEntries++;
        vos_QueueCtrlBlcok[ulQueueID].Q[suffix].QUrgentSize++;
    }
    else
    {

        *vos_QueueCtrlBlcok[ulQueueID].Q[suffix].QIn++ = AddressValue;
        vos_QueueCtrlBlcok[ulQueueID].Q[suffix].QEntries++;
        if (vos_QueueCtrlBlcok[ulQueueID].Q[suffix].QIn
            == vos_QueueCtrlBlcok[ulQueueID].Q[suffix].QEnd )
        {
            vos_QueueCtrlBlcok[ulQueueID].Q[suffix].QIn
                = vos_QueueCtrlBlcok[ulQueueID].Q[suffix].QStart;
        }
    }

    /*VOS_Splx(intLockLevel);*/
    VOS_SpinUnlockIntUnlock(&g_stVosQueueSpinLock, ulLockLevel);

    return VOS_OK;
}


/*****************************************************************************
 Function   : VOS_FixedQueueWrite
 Description: Write a message to a specific queue synchronuslly
 Input      : ulQueueID    -- Queue ID
              pBufferAddr  -- Message buffer
              ulBufferSize -- The size of Message buffer
              ulTimeOut    -- Time-out interval, in milliseconds.
                              0 means infinite
 Output     : None
 Return     : VOS_OK on success or errno on failure
 Other      : If the buffer size to write is larger than max message length,
              the writing would be failed.
 *****************************************************************************/
VOS_UINT32 VOS_FixedQueueWrite( VOS_UINT32 ulQueueID, VOS_VOID * pBufferAddr,
                           VOS_UINT32 ulBufferSize, VOS_UINT32 Pri,
                           VOS_UINT32 ulPid  )
{
    int                 suffix;
    VOS_UINT32          ulReturn;


    suffix = vos_PidRecords[ulPid-VOS_PID_DOPRAEND].priority;
    ulReturn = VOS_AddQueue(ulQueueID, suffix, (VOS_UINT_PTR)pBufferAddr, Pri);

    if (VOS_ERR == ulReturn )
    {
        LogPrint1("# Queue ID %d is full.\r\n",(int)ulQueueID);

        return VOS_ERR;
    }
    else
    {

        if ( VOS_OK != VOS_SmV( vos_QueueCtrlBlcok[ulQueueID].Sem_ID) )
        {
            LogPrint("# VOS_SmV error.\r\n");

            return VOS_ERR;
        }
        else
        {
            VOS_ExecuteAwakeFun((MsgBlock*)((VOS_UINT_PTR)pBufferAddr + VOS_MSG_BLK_HEAD_LEN));

        }
    }

    return VOS_OK;
}

/*****************************************************************************
 Function   : VOS_FixedQueueWriteDirect
 Description: Write a message to a specific queue synchronuslly
 Input      : ulQueueID    -- Queue ID
              pBufferAddr  -- Message buffer
 Output     : None
 Return     : VOS_OK on success or errno on failure
 Other      : If the buffer size to write is larger than max message length,
              the writing would be failed.Used by OSA only.
 *****************************************************************************/
VOS_UINT32 VOS_FixedQueueWriteDirect( VOS_UINT32 ulQueueID, VOS_VOID * pBufferAddr, VOS_UINT32 Pri)
{
    VOS_UINT32          ulReturn;

    /* only one queue */
    ulReturn = VOS_AddQueue(ulQueueID, 0, (VOS_UINT_PTR)pBufferAddr, Pri);

    if (VOS_ERR == ulReturn )
    {
        LogPrint1("# Queue ID %d is full.\r\n",(int)ulQueueID);

        return VOS_ERR;
    }

    if ( VOS_OK != VOS_SmV( vos_QueueCtrlBlcok[ulQueueID].Sem_ID) )
    {
        LogPrint("# VOS_SmV error.\r\n");

        return VOS_ERR;
    }

    return VOS_OK;
}


/*****************************************************************************
 Function   : VOS_FixedQueueRead
 Description: Reading message from a queue synchronouslly
 Input      : ulQueueID    -- Queue ID to read
              ulTimeOut    -- Time-out interval,  in milliseconds.
                              0 means infinite
              pBufferAddr  -- Buffer to retrieve msg
              ulBufferSize -- size of buffer
 Output     : None
 Return     : the length of the message readed from specific queue;
              VOS_NULL_LONG indicates reading failure.
 Other      : If the reading buffer size is less than message length, the msg
              would be truncated.
 *****************************************************************************/
VOS_UINT32 VOS_FixedQueueRead( VOS_UINT32 ulQueueID,
                          VOS_UINT32 ulTimeOutInMillSec,
                          VOS_UINT_PTR *pBufferAddr, VOS_UINT32 ulBufferSize )
{
    int                 i;
    VOS_ULONG           ulLockLevel;
    VOS_UINT_PTR        TempValue;

    if( VOS_OK != VOS_SmP( vos_QueueCtrlBlcok[ulQueueID].Sem_ID,
        ulTimeOutInMillSec ) )
    {
        Print("# msgQReceive error.\r\n");
        return VOS_ERR;
    }
    else
    {
        /*intLockLevel = VOS_SplIMP();*/
        VOS_SpinLockIntLock(&g_stVosQueueSpinLock, ulLockLevel);

        /* which should be del when only one FID exists */
        /* for ( i=VOS_MAX_PID_PRI - 1; i>=0; i-- ) */
        for ( i=(VOS_INT)(vos_QueueCtrlBlcok[ulQueueID].QNum - 1); i>=0; i-- )
        {
            if (vos_QueueCtrlBlcok[ulQueueID].Q[i].QEntries > 0 )
            {
                TempValue = *vos_QueueCtrlBlcok[ulQueueID].Q[i].QOut++;
                vos_QueueCtrlBlcok[ulQueueID].Q[i].QEntries--;
                if ( vos_QueueCtrlBlcok[ulQueueID].Q[i].QOut
                    == vos_QueueCtrlBlcok[ulQueueID].Q[i].QEnd )
                {
                    vos_QueueCtrlBlcok[ulQueueID].Q[i].QOut
                        = vos_QueueCtrlBlcok[ulQueueID].Q[i].QStart;
                }

                if (0 < vos_QueueCtrlBlcok[ulQueueID].Q[i].QUrgentSize)
                {
                    vos_QueueCtrlBlcok[ulQueueID].Q[i].QUrgentSize--;
                }

                /*VOS_Splx(intLockLevel);*/
                VOS_SpinUnlockIntUnlock(&g_stVosQueueSpinLock, ulLockLevel);

                *pBufferAddr = TempValue;
                return  VOS_OK;
            }
        }

        /*VOS_Splx(intLockLevel);*/
        VOS_SpinUnlockIntUnlock(&g_stVosQueueSpinLock, ulLockLevel);

        return  VOS_ERR;
    }
}

/*****************************************************************************
 �� �� ��  : VOS_FixedQueueReadMsg
 ��������  : ͨ��FID��ȡ��FID��Ϣ������������Ϣ��ַ
 �������  : VOS_UINT32 ulFidID
 �������  : ��
 �� �� ֵ  : VOS_VOID*
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��12��29��
    ��    ��   : s00207770
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID* VOS_FixedQueueReadMsg( VOS_UINT32 ulFidID )
{
    VOS_INT                             i;
    VOS_ULONG                           ulLockLevel;
    VOS_UINT_PTR                        TempValue;
    VOS_UINT32                          ulQueueID;

    VOS_SpinLockIntLock(&g_stVosQueueSpinLock, ulLockLevel);

    ulQueueID = VOS_GetQueueIDFromFid(ulFidID);

    for ( i=(VOS_INT)(vos_QueueCtrlBlcok[ulQueueID].QNum - 1); i>=0; i-- )
    {
        if (vos_QueueCtrlBlcok[ulQueueID].Q[i].QEntries > 0 )
        {
            TempValue = *vos_QueueCtrlBlcok[ulQueueID].Q[i].QOut;

            VOS_SpinUnlockIntUnlock(&g_stVosQueueSpinLock, ulLockLevel);

            TempValue += VOS_MSG_BLK_HEAD_LEN;

            return  (VOS_VOID *)TempValue;
        }
    }

    VOS_SpinUnlockIntUnlock(&g_stVosQueueSpinLock, ulLockLevel);

    return  VOS_NULL_PTR;

}

/*****************************************************************************
 Function   : VOS_GetSemIDFromQueue
 Description: get the Sem ID of a queue
 Input      : ulQueue      -- queue's ID

 Return     : the queue ID
 *****************************************************************************/
VOS_SEM VOS_GetSemIDFromQueue(VOS_UINT32 ulQueue)
{
    if ( ulQueue >= vos_QueueCtrlBlcokNumber )
    {
        LogPrint("VOS_GetSemIDFromQueue ulQueue is invaild.\r\n");

        return 0xffffffff;
    }

    return vos_QueueCtrlBlcok[ulQueue].Sem_ID;
}

/*****************************************************************************
 Function   : VOS_OutMsg
 Description: get a ready message from the message queue.
 Input      : ulTaskID --- Task ID to get its message
 Return     : message address and VOS_NULL_PTR on failure
 Other      : After getting the message, the status would be changed to ACTIVE
 *****************************************************************************/
VOS_VOID* VOS_OutMsg( VOS_UINT32 ulQueueID )
{
    int                 i;
    VOS_ULONG           ulLockLevel;
    VOS_UINT_PTR        TempValue;

    /*intLockLevel = VOS_SplIMP();*/
    VOS_SpinLockIntLock(&g_stVosQueueSpinLock, ulLockLevel);

    /* which should be del when only one FID exists */
    /* for ( i=VOS_MAX_PID_PRI - 1; i>=0; i-- ) */
    for ( i=(VOS_INT)(vos_QueueCtrlBlcok[ulQueueID].QNum - 1); i>=0; i-- )
    {
        if (vos_QueueCtrlBlcok[ulQueueID].Q[i].QEntries > 0 )
        {
            TempValue = *vos_QueueCtrlBlcok[ulQueueID].Q[i].QOut++;
            vos_QueueCtrlBlcok[ulQueueID].Q[i].QEntries--;
            if ( vos_QueueCtrlBlcok[ulQueueID].Q[i].QOut
                == vos_QueueCtrlBlcok[ulQueueID].Q[i].QEnd )
            {
                vos_QueueCtrlBlcok[ulQueueID].Q[i].QOut
                    = vos_QueueCtrlBlcok[ulQueueID].Q[i].QStart;
            }

            if (0 < vos_QueueCtrlBlcok[ulQueueID].Q[i].QUrgentSize)
            {
                vos_QueueCtrlBlcok[ulQueueID].Q[i].QUrgentSize--;
            }

            /*VOS_Splx(intLockLevel);*/
            VOS_SpinUnlockIntUnlock(&g_stVosQueueSpinLock, ulLockLevel);

            TempValue += VOS_MSG_BLK_HEAD_LEN;

            return  (VOS_VOID *)TempValue;
        }
    }

    /*VOS_Splx(intLockLevel);*/
    VOS_SpinUnlockIntUnlock(&g_stVosQueueSpinLock, ulLockLevel);

    return  VOS_NULL_PTR;
}

/*****************************************************************************
 Function   : VOS_GetMsg
 Description: get a ready message from the message queue of the task.
 Input      : ulTaskID --- Task ID to get its message
 Return     : Pointer of message on success and VOS_NULL_PTR on failure
 Other      : After getting the message, the status would be changed to ACTIVE
 *****************************************************************************/
VOS_VOID* VOS_GetMsg( VOS_UINT32 ulTaskID )
{
    VOS_UINT32          ulQueueID;

    ulQueueID = VOS_GetQueueIDFromTID(ulTaskID);

    return VOS_OutMsg(ulQueueID);
}

/*****************************************************************************
 Function   : VOS_GetQueueSizeFromFid
 Description: get the queue size of Fid.
 Input      : ulFid --- Fid Num
 Return     : The queue size of Fid.
 *****************************************************************************/
VOS_UINT32  VOS_GetQueueSizeFromFid(VOS_UINT32 ulFid)
{
    VOS_UINT32  ulQid;

    ulQid = VOS_GetQueueIDFromFid(ulFid);

    return vos_QueueCtrlBlcok[ulQid].Q[0].QEntries;
}

/*****************************************************************************
 Function   : VOS_show_queue_info
 Description: print usage info of queue
 Input      : void
 Return     : void
 Other      :
 *****************************************************************************/
VOS_VOID VOS_show_queue_info(VOS_VOID)
{
    (VOS_VOID)vos_printf("Max be used queue is %d.\r\n",Max_use_queue_number);
}

/*****************************************************************************
 Function   : VOS_QueuePrintFull
 Description: print queue info which is full
 Input      : void
 Return     : void
 Other      :
 *****************************************************************************/
VOS_VOID VOS_QueuePrintFull( VOS_UINT32 ulQueue, VOS_CHAR *pcBuf, VOS_UINT32 ulLen)
{
    VOS_UINT32   ulCount = 0;
    VOS_UINT32                  ulNumber;
    MSG_CB                      *pMsg;
    VOS_DUMP_QUEUE_CONTENT_STRU *pstDump;


    pMsg = (MSG_CB *)VOS_OutMsg(ulQueue);

    ulNumber = ulLen/sizeof(VOS_DUMP_QUEUE_CONTENT_STRU);
    pstDump = (VOS_DUMP_QUEUE_CONTENT_STRU *)pcBuf;

    while ( VOS_NULL_PTR != pMsg )
    {
        ulCount++;

        if ( (VOS_FID_QUEUE_LENGTH < ulCount) || (ulCount > ulNumber) )
        {
            LogPrint1("# VOS_QueuePrintFull ulCount %d.\r\n",(VOS_INT)ulCount);

            return;
        }

        pstDump->usSendPid = (VOS_UINT16)(pMsg->ulSenderPid);
        pstDump->usRcvPid = (VOS_UINT16)(pMsg->ulReceiverPid);
        pstDump->ulMsgName = *(VOS_UINT32 *)(pMsg->aucValue);

        pstDump++;

        pMsg = (MSG_CB *)VOS_OutMsg(ulQueue);
    }

    return;
}

/*****************************************************************************
 Function   : VOS_CheckTaskQueue
 Description: check queue's msg number
 Input      : ulPid ,ulEntries
 Return     : VOS_OK on success or errno on failure.
 Other      :
 *****************************************************************************/
VOS_UINT32 VOS_CheckTaskQueue(VOS_UINT32 ulPid,VOS_UINT32 ulEntries)
{

    int                 ulFid;
    VOS_UINT32          ulQid;
    int                 suffix;

    ulFid = vos_PidRecords[ulPid-VOS_PID_DOPRAEND].Fid;
    ulQid = vos_FidCtrlBlk[ulFid].Qid;
    suffix = vos_PidRecords[ulPid-VOS_PID_DOPRAEND].priority;
    if (vos_QueueCtrlBlcok[ulQid].Q[suffix].QEntries > ulEntries)
    {
        return VOS_ERR;
    }
    return VOS_OK;

}




