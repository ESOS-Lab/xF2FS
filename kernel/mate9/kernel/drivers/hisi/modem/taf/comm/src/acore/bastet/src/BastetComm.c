/* bastet_comm.c
 *
 * Bastet Hisilicon modem communication mudule.
 *
 * Copyright (C) 2014 Huawei Device Co.,Ltd.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include "v_typdef.h"
#include "VosPidDef.h"
#include "PsCommonDef.h"
#include "mdrv.h"
#include "TafTypeDef.h"
#include "BastetInit.h"
#include "BastetInterface.h"
#include "BastetRnicInterface.h"


#define THIS_FILE_ID                    PS_FILE_ID_BST_COMM_C
#define BST_MAX_WRITE_PAYLOAD           (2048)

struct bst_modem_rab_id {
    uint16_t modem_id;
    uint16_t rab_id;
};
struct aspen_cdn_info {
        unsigned int seq;
        unsigned short port;
        unsigned short type;
};
extern void aspen_crosslayer_recovery(struct aspen_cdn_info *info, int length);
extern int aspen_tcp_cdn;

extern char cur_netdev_name[IFNAMSIZ];
extern void ind_hisi_com(void *info, u32 len);

int bastet_comm_write(u8 *msg, u32 len, u32 type)
{
    BST_ACOM_MSG_STRU *pMsg = NULL;
    VOS_UINT32 ulLength = 0;

    if (NULL == msg)
    {
        return -1;
    }

    ulLength        = sizeof(BST_ACOM_MSG_STRU) + BST_MAX_WRITE_PAYLOAD - 4;
    pMsg            = (BST_ACOM_MSG_STRU *)PS_ALLOC_MSG_WITH_HEADER_LEN(ACPU_PID_BASTET_COMM, ulLength);
    if (NULL == pMsg)
    {
        printk(KERN_ERR "PS_ALLOC_MSG_WITH_HEADER_LEN failed\n");
        return -1;
    }

    pMsg->ulReceiverPid = UEPS_PID_BASTET;
    TAF_MEM_CPY_S((VOS_VOID*)pMsg->aucValue, BST_MAX_WRITE_PAYLOAD, msg, (VOS_UINT32)len);

    pMsg->ulLen     = len;
    pMsg->enMsgType = type;
    if (PS_SEND_MSG(ACPU_PID_BASTET_COMM, pMsg) != 0)
    {
        printk(KERN_ERR "PS_SEND_MSG failed\n");
        return -1;
    }

    return 0;
}

static void bastet_aspen_pkt_drop_proc(BST_ASPEN_PKT_DROP_STRU *pstAspenMsg)
{
    unsigned int i = 0;

    if (NULL == pstAspenMsg)
    {
        printk(KERN_ERR "pstAspenMsg is empty.\n");
        return;
    }

    for (i = 0; i < pstAspenMsg->ulPktNum; i++)
    {
        printk(KERN_DEBUG "[%s]: drop packet(%u): %u(SrcPort), %u(Seq)\n", __func__,
                           pstAspenMsg->stPkt[i].usDropType,
                           pstAspenMsg->stPkt[i].usSrcPort,
                           pstAspenMsg->stPkt[i].ulTcpSeq);
    }

    if (pstAspenMsg->ulPktNum && aspen_tcp_cdn)
    {
        printk(KERN_DEBUG "Entry aspen_crosslayer_recovery\n");
        aspen_crosslayer_recovery((struct aspen_cdn_info *)pstAspenMsg->stPkt, (int)pstAspenMsg->ulPktNum);
    }
}

void bastet_comm_recv(MsgBlock *pMsg)
{
    u32                 len;
    BST_ACOM_MSG_STRU  *pTmpMsg;
    BST_ASPEN_PKT_DROP_STRU *pstAspenMsg;
    u32                *pulAspenInfoType;

    /*lint -e826*/
    pTmpMsg             = (BST_ACOM_MSG_STRU *)pMsg;
    /*lint +e826*/
    pulAspenInfoType    = (u32 *)pTmpMsg->aucValue;
    if ( NULL == pMsg )
    {
        printk(KERN_ERR "MsgBlock is empty\n");
        return;
    }

    len                 = pTmpMsg->ulLen;
    if ( len > BST_MAX_WRITE_PAYLOAD )
    {
        len             = BST_MAX_WRITE_PAYLOAD;
    }

    if ( pTmpMsg->enMsgType == BST_ACORE_CORE_MSG_TYPE_ASPEN )
    {
        if (*pulAspenInfoType == BST_ASPEN_INFO_PKT_DROP )
        {
            /*lint -e826*/
            pstAspenMsg = (BST_ASPEN_PKT_DROP_STRU *)pTmpMsg->aucValue;
            /*lint +e826*/
            if (len < ( sizeof(*pstAspenMsg) - sizeof(pstAspenMsg->stPkt) ) )
            {
                printk(KERN_ERR "MsgBlock size is too small\n");
            }
            else if (len == (sizeof(BST_ASPEN_PKT_DROP_STRU) - (BST_ASPEN_PKT_DROP_SIZE - pstAspenMsg->ulPktNum)*sizeof(BST_ASPEN_TCP_INFO_STRU)))
            {
                /*lint -e826*/
                bastet_aspen_pkt_drop_proc((BST_ASPEN_PKT_DROP_STRU *)pTmpMsg->aucValue);
                /*lint +e826*/
            }
            else
            {
                printk(KERN_ERR "MsgBlock size is wrong(%d)\n", len);
            }
        }
        else
        {
            printk(KERN_ERR "MsgBlock info type is wrong(%d)\n", *pulAspenInfoType);
        }
    }
    else if ( pTmpMsg->enMsgType == BST_ACORE_CORE_MSG_TYPE_DSPP )
    {
        ind_hisi_com( pTmpMsg->aucValue, len );
    }
    else
    {
        printk(KERN_ERR "MsgBlock Type is wrong(%d)\n", pTmpMsg->enMsgType);
    }
}

/*
 * Get modem id and rab id.
 */
int get_modem_rab_id(struct bst_modem_rab_id *info)
{
    struct net_device *dev;
    BST_RNIC_MODEM_INFO_STRU stModemInfo;
    VOS_INT rslt;

    if (NULL == info) {
        return -EINVAL;
    }

    dev = dev_get_by_name(&init_net, cur_netdev_name);
    if (NULL == dev) {
        return -ENOENT;
    }

    rslt = RNIC_BST_GetModemInfo(dev,&stModemInfo);
    if (VOS_OK != rslt)
    {
        printk(KERN_ERR "get modem rab id fail\n");
        return -EPERM;
    }

    if (BST_RNIC_PDP_STATE_ACTIVE != stModemInfo.enIPv4State) {
        printk(KERN_ERR "Ipv4 pdp reg status inactive\n");
        return -EPERM;
    }

    info->modem_id = stModemInfo.usModemId;
    /* Bastet only running in IPv4 mode,
     * so, get IPv4 Pdp info */
    info->rab_id = stModemInfo.ucRabId;

    return 0;
}

void bastet_comm_init(void)
{
    BASTET_CommRegRecvCallBack((RECV_MSG_PROC)bastet_comm_recv);
}


