

/*****************************************************************************
  1 头文件包含
*****************************************************************************/
#include "AtCmdMiscProc.h"
#include "AtSndMsg.h"
#include "ATCmdProc.h"
#include "dms_core.h"
#include "AtDataProc.h"


/*****************************************************************************
    协议栈打印打点方式下的.C文件宏定义
*****************************************************************************/
#define    THIS_FILE_ID                 PS_FILE_ID_AT_CMD_MISC_PROC_C

/*****************************************************************************
  2 全局变量定义
*****************************************************************************/


/*****************************************************************************
  3 函数实现
*****************************************************************************/

/*****************************************************************************
 函 数 名  : AT_SetActiveModem
 功能描述  : 命令^ACTIVEMODEM设置处理函数
             命令格式:AT^ACTIVEMODEM=<enable>
 输入参数  : ucIndex - 用户索引
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年09月21日
    作    者   : l00198894
    修改内容   : DSDS单/双卡模式

*****************************************************************************/
VOS_UINT32 AT_SetActiveModem(VOS_UINT8 ucIndex)
{
    TAF_NV_DSDS_ACTIVE_MODEM_MODE_STRU  stMode;

    /* 参数个数检查 */
    if (gucAtParaIndex != 1)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    TAF_MEM_SET_S(&stMode, sizeof(stMode), 0x00, sizeof(stMode));
    stMode.enActiveModem = (TAF_NV_ACTIVE_MODEM_MODE_ENUM_UINT8)gastAtParaList[0].ulParaValue;

    /* 写NV, 返回AT_OK */
    if (NV_OK != NV_WriteEx(MODEM_ID_0, en_NV_Item_DSDS_Active_Modem_Mode, &stMode, sizeof(stMode)))
    {
        AT_ERR_LOG("AT_SetActiveModem(): en_NV_Item_DSDS_Active_Modem_Mode NV Write Fail!");
        return AT_ERROR;
    }

    return AT_OK;
}


/*****************************************************************************
 函 数 名  : AT_SetLteLowPowerPara
 功能描述  : ^LTELOWPOWER
 输入参数  : ucIndex - 端口索引
 输出参数  : 无
 返 回 值  : AT_XXX
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年5月22日
    作    者   : w00316404
    修改内容   : 新生成函数
*****************************************************************************/
VOS_UINT32 AT_SetLteLowPowerPara(VOS_UINT8 ucIndex)
{
    AT_MTA_LOW_POWER_CONSUMPTION_SET_REQ_STRU       stPowerConsumption;
    VOS_UINT32                                      ulRst;

    TAF_MEM_SET_S(&stPowerConsumption, sizeof(stPowerConsumption), 0x00, sizeof(AT_MTA_LOW_POWER_CONSUMPTION_SET_REQ_STRU));

    /* 参数检查 */
    if (AT_CMD_OPT_SET_PARA_CMD != g_stATParseCmd.ucCmdOptType)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 参数个数不正确 */
    if (1 != gucAtParaIndex)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 参数为空 */
    if(0 == gastAtParaList[0].usParaLen)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    switch(gastAtParaList[0].ulParaValue)
    {
        case 0:
            stPowerConsumption.enLteLowPowerFlg = AT_MTA_LTE_LOW_POWER_NORMAL;
            break;

        case 1:
            stPowerConsumption.enLteLowPowerFlg = AT_MTA_LTE_LOW_POWER_LOW;
            break;

        default:
            return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 发送跨核消息到C核, 设置低功耗 */
    ulRst = AT_FillAndSndAppReqMsg(gastAtClientTab[ucIndex].usClientId,
                                   gastAtClientTab[ucIndex].opId,
                                   ID_AT_MTA_LTE_LOW_POWER_SET_REQ,
                                   &stPowerConsumption,
                                   sizeof(stPowerConsumption),
                                   I0_UEPS_PID_MTA);

    if (TAF_SUCCESS != ulRst)
    {
        AT_WARN_LOG("AT_SetLteLowPowerPara: AT_FillAndSndAppReqMsg fail.");
        return AT_ERROR;
    }

    /* 设置AT模块实体的状态为等待异步返回 */
    gastAtClientTab[ucIndex].CmdCurrentOpt = AT_CMD_LTE_LOW_POWER_CONSUMPTION_SET;

    return AT_WAIT_ASYNC_RETURN;
}

/*****************************************************************************
 函 数 名  : AT_GetIsmCoexParaValue
 功能描述  : GetIsmCoexPara
 输入参数  : pucBegain,ppEnd
 输出参数  : 无
 返 回 值  : AT_XXX
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年5月22日
    作    者   : w00316404
    修改内容   : 新生成函数
*****************************************************************************/
VOS_INT32 AT_GetIsmCoexParaValue(VOS_UINT8 *pucBegain, VOS_UINT8 **ppEnd)
{
    VOS_UINT32 ulTotal      = 0;
    VOS_INT32  lRstTotal    = 0;
    VOS_UINT32 ulRst;
    VOS_UINT8 *pucEnd;
    VOS_UINT32 ulFlag       = 0;

    pucEnd = pucBegain;

    while((' ' != *pucEnd) && ('\0' != *pucEnd))
    {
        pucEnd++;
    }

    if('-' == *pucBegain)
    {
        ulFlag = 1;
        pucBegain++;
    }

    ulRst = atAuc2ul(pucBegain, (VOS_UINT16)(pucEnd - pucBegain), &ulTotal);

    if(AT_SUCCESS != ulRst)
    {
        lRstTotal = AT_COEX_INVALID;
    }
    else
    {
        *ppEnd      = (pucEnd + 1);
        lRstTotal   = (VOS_INT32)(ulFlag ? (0 - ulTotal):ulTotal);
    }

    return lRstTotal;
}

/*****************************************************************************
 函 数 名  : AT_CheckIsmCoexParaValue
 功能描述  : 检查^ISMCOEX参数的有效性
 输入参数  : usVal,ulParaNum
 输出参数  : 无
 返 回 值  : AT_XXX
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年5月22日
    作    者   : w00316404
    修改内容   : 新生成函数
*****************************************************************************/
VOS_UINT32 AT_CheckIsmCoexParaValue(VOS_INT32 ulVal, VOS_UINT32 ulParaNum)
{
    VOS_UINT32                          ulRst = AT_SUCCESS;

    switch(ulParaNum)
    {
        case AT_COEX_PARA_COEX_ENABLE:
            if((AT_COEX_PARA_COEX_ENABLE_MIN > ulVal)
            || (AT_COEX_PARA_COEX_ENABLE_MAX < ulVal))
            {
                ulRst = AT_FAILURE;
            }
            break;
        case AT_COEX_PARA_TX_BEGIN:
            if((AT_COEX_PARA_TX_BEGIN_MIN > ulVal)
            || (AT_COEX_PARA_TX_BEGIN_MAX < ulVal))
            {
                ulRst = AT_FAILURE;
            }
            break;
        case AT_COEX_PARA_TX_END:
            if((AT_COEX_PARA_TX_END_MIN > ulVal)
            || (AT_COEX_PARA_TX_END_MAX < ulVal))
            {
                ulRst = AT_FAILURE;
            }
            break;
        case AT_COEX_PARA_TX_POWER:
            if((AT_COEX_PARA_TX_POWER_MIN > ulVal)
            || (AT_COEX_PARA_TX_POWER_MAX < ulVal))
            {
                ulRst = AT_FAILURE;
            }
            break;
        case AT_COEX_PARA_RX_BEGIN:
            if((AT_COEX_PARA_RX_BEGIN_MIN > ulVal)
            || (AT_COEX_PARA_RX_BEGIN_MAX < ulVal))
            {
                ulRst = AT_FAILURE;
            }
            break;
        case AT_COEX_PARA_RX_END:
            if((AT_COEX_PARA_RX_END_MIN > ulVal)
            || (AT_COEX_PARA_RX_END_MAX < ulVal))
            {
                ulRst = AT_FAILURE;
            }
            break;
        default:
            ulRst = AT_FAILURE;
            break;

    }

    return ulRst;
}

/*****************************************************************************
 函 数 名  : AT_SetL4AIsmCoexParaValue
 功能描述  : 填充发往L4A的消息参数
 输入参数  : stIsmCoex
 输出参数  : pstReqToL4A
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年5月22日
    作    者   : w00316404
    修改内容   : 新生成函数
*****************************************************************************/
VOS_VOID AT_SetL4AIsmCoexParaValue(AT_MTA_LTE_WIFI_COEX_SET_REQ_STRU stIsmCoex, L4A_ISMCOEX_REQ_STRU *pstReqToL4A, VOS_UINT8 ucIndex)
{
    VOS_UINT32                          i;

    pstReqToL4A->stCtrl.ulClientId = gastAtClientTab[ucIndex].usClientId;;
    pstReqToL4A->stCtrl.ulOpId     = 0;
    pstReqToL4A->stCtrl.ulPid      = WUEPS_PID_AT;

    for(i = 0; i < AT_MTA_ISMCOEX_BANDWIDTH_NUM; i++)
    {
        pstReqToL4A->astCoex[i].ulFlag      = (VOS_UINT32)stIsmCoex.astCoexPara[i].enCfg;
        pstReqToL4A->astCoex[i].ulTXBegin   = (VOS_UINT32)stIsmCoex.astCoexPara[i].usTxBegin;
        pstReqToL4A->astCoex[i].ulTXEnd     = (VOS_UINT32)stIsmCoex.astCoexPara[i].usTxEnd;
        pstReqToL4A->astCoex[i].lTXPower    = (VOS_INT32)stIsmCoex.astCoexPara[i].sTxPower;
        pstReqToL4A->astCoex[i].ulRXBegin   = (VOS_UINT32)stIsmCoex.astCoexPara[i].usRxBegin;
        pstReqToL4A->astCoex[i].ulRXEnd     = (VOS_UINT32)stIsmCoex.astCoexPara[i].usRxEnd;
    }

    return;
}

/*****************************************************************************
 函 数 名  : AT_SetIsmCoexPara
 功能描述  : ^ISMCOEX
 输入参数  : ucIndex - 端口索引
 输出参数  : 无
 返 回 值  : AT_XXX
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年5月22日
    作    者   : w00316404
    修改内容   : 新生成函数
*****************************************************************************/
VOS_UINT32 AT_SetIsmCoexPara(VOS_UINT8 ucIndex)
{
    AT_MTA_LTE_WIFI_COEX_SET_REQ_STRU               stIsmCoex;
    L4A_ISMCOEX_REQ_STRU                            stReqToL4A = {0};
    VOS_UINT32                                      ulRst,ulRet;
    VOS_UINT32                                      i, j;
    VOS_INT32                                       ret;
    VOS_UINT16                                     *pusVal;                     /* 将要存储的值指针 */
    VOS_UINT8                                      *pucCur;                     /* 解析字符串时的当前指针 */
    VOS_UINT8                                      *pucPara;                    /* 参数字符串头指针 */

    TAF_MEM_SET_S(&stIsmCoex, sizeof(stIsmCoex), 0x00, sizeof(AT_MTA_LTE_WIFI_COEX_SET_REQ_STRU));

    /* 参数检查 */
    if (AT_CMD_OPT_SET_PARA_CMD != g_stATParseCmd.ucCmdOptType)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 参数个数 */
    if (AT_MTA_ISMCOEX_BANDWIDTH_NUM != gucAtParaIndex)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }


    for(i = 0; i < AT_MTA_ISMCOEX_BANDWIDTH_NUM; i++)
    {
        pucCur = gastAtParaList[i].aucPara;
        stIsmCoex.astCoexPara[i].enCoexBWType = (AT_MTA_COEX_BW_TYPE_ENUM_UINT16)i;
        pusVal = &(stIsmCoex.astCoexPara[i].enCfg);

        for(j = 0; j < sizeof(AT_MTA_COEX_PARA_STRU)/sizeof(VOS_UINT16) - 2; j++)
        {
            pucPara = pucCur;
            ret = AT_GetIsmCoexParaValue(pucPara, &pucCur);

            if(AT_COEX_INVALID == ret)
            {
                return AT_CME_INCORRECT_PARAMETERS;
            }

            if (AT_FAILURE == AT_CheckIsmCoexParaValue(ret, j))
            {
                return AT_CME_INCORRECT_PARAMETERS;
            }

           *pusVal = (VOS_UINT16)ret;
            pusVal++;
        }
    }

    stIsmCoex.usCoexParaNum     = AT_MTA_ISMCOEX_BANDWIDTH_NUM;
    stIsmCoex.usCoexParaSize    = sizeof(stIsmCoex.astCoexPara);

    AT_SetL4AIsmCoexParaValue(stIsmCoex, &stReqToL4A, ucIndex);

    /* 发送消息到L4A */
    ulRet = atSendDataMsg(MSP_L4_L4A_PID, ID_MSG_L4A_ISMCOEXSET_REQ, (VOS_VOID*)(&stReqToL4A), sizeof(stReqToL4A));

    /* 发送跨核消息到C核 */
    ulRst = AT_FillAndSndAppReqMsg(gastAtClientTab[ucIndex].usClientId,
                                   gastAtClientTab[ucIndex].opId,
                                   ID_AT_MTA_LTE_WIFI_COEX_SET_REQ,
                                   &stIsmCoex,
                                   sizeof(stIsmCoex),
                                   I0_UEPS_PID_MTA);
    if (TAF_SUCCESS != ulRet)
    {
        AT_WARN_LOG("AT_SetIsmCoexPara: atSendDataMsg fail.");
    }

    if (TAF_SUCCESS != ulRst)
    {
        AT_WARN_LOG("AT_SetIsmCoexPara: AT_FillAndSndAppReqMsg fail.");
        return AT_ERROR;
    }

    /* 设置AT模块实体的状态为等待异步返回 */
    gastAtClientTab[ucIndex].CmdCurrentOpt = AT_CMD_LTE_WIFI_COEX_SET;

    return AT_WAIT_ASYNC_RETURN;
}

/*****************************************************************************
 函 数 名  : AT_QryIsmCoexPara
 功能描述  : ^ISMCOEX查询命令处理函数,查询
 输入参数  : ucIndex - 用户索引
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年05月22日
    作    者   : w00316404
    修改内容   :新增查询函数
*****************************************************************************/
VOS_UINT32 AT_QryIsmCoexPara(VOS_UINT8 ucIndex)
{
    VOS_UINT32                                      ulRst;

    if(AT_CMD_OPT_READ_CMD != g_stATParseCmd.ucCmdOptType)
    {
        return AT_ERROR;
    }

    /* 发送跨核消息到C核, 查询ISMCOEX列表请求 */
    ulRst = AT_FillAndSndAppReqMsg(gastAtClientTab[ucIndex].usClientId,
                                   gastAtClientTab[ucIndex].opId,
                                   ID_AT_MTA_LTE_WIFI_COEX_QRY_REQ,
                                   VOS_NULL_PTR,
                                   0,
                                   I0_UEPS_PID_MTA);

    if (TAF_SUCCESS != ulRst)
    {
        AT_WARN_LOG("AT_QryIsmCoexPara: AT_FillAndSndAppReqMsg fail.");
        return AT_ERROR;
    }

    /* 设置AT模块实体的状态为等待异步返回 */
    gastAtClientTab[ucIndex].CmdCurrentOpt = AT_CMD_LTE_WIFI_COEX_QRY;

    return AT_WAIT_ASYNC_RETURN;
}

/*****************************************************************************
 函 数 名  : AT_RcvMtaLteLowPowerSetCnf
 功能描述  : 收到MTA设置低功耗的回复
 输入参数  : pMsg
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年5月22日
    作    者   : w00316404
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 AT_RcvMtaLteLowPowerSetCnf(
    VOS_VOID                           *pMsg
)
{
    AT_MTA_MSG_STRU                            *pRcvMsg         = VOS_NULL_PTR;
    MTA_AT_RESULT_CNF_STRU                     *pstMtaCnf       = VOS_NULL_PTR;
    VOS_UINT32                                  ulResult;
    VOS_UINT8                                   ucIndex;

    /* 初始化 */
    pRcvMsg             = (AT_MTA_MSG_STRU *)pMsg;
    pstMtaCnf           = (MTA_AT_RESULT_CNF_STRU *)pRcvMsg->aucContent;
    ulResult            = AT_OK;
    ucIndex             = 0;

    /* 通过clientid获取index */
    if (AT_FAILURE == At_ClientIdToUserId(pRcvMsg->stAppCtrl.usClientId, &ucIndex))
    {
        AT_WARN_LOG("AT_RcvMtaLteLowPowerSetCnf : WARNING:AT INDEX NOT FOUND!");
        return VOS_ERR;
    }

    if (AT_IS_BROADCAST_CLIENT_INDEX(ucIndex))
    {
        AT_WARN_LOG("AT_RcvMtaLteLowPowerSetCnf : AT_BROADCAST_INDEX.");
        return VOS_ERR;
    }

    /* 当前AT是否在等待该命令返回 */
    if (AT_CMD_LTE_LOW_POWER_CONSUMPTION_SET != gastAtClientTab[ucIndex].CmdCurrentOpt)
    {
        AT_WARN_LOG("AT_RcvMtaLteLowPowerSetCnf : Current Option is not AT_CMD_LTE_LOW_POWER_CONSUMPTION_SET.");
        return VOS_ERR;
    }

    /* 复位AT状态 */
    AT_STOP_TIMER_CMD_READY(ucIndex);

    gstAtSendData.usBufLen = 0;

    if (VOS_OK != pstMtaCnf->enResult)
    {
        ulResult = AT_ERROR;
    }

    /* 输出结果 */
    At_FormatResultData(ucIndex, ulResult);

    return VOS_OK;
}

/*****************************************************************************
 函 数 名  : AT_RcvMtaIsmCoexSetCnf
 功能描述  : 收到MTA设置命令 ^ISMCOEX的回复
 输入参数  : pMsg
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年5月22日
    作    者   : w00316404
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 AT_RcvMtaIsmCoexSetCnf(
    VOS_VOID                           *pMsg
)
{
    AT_MTA_MSG_STRU                            *pRcvMsg         = VOS_NULL_PTR;
    MTA_AT_RESULT_CNF_STRU                     *pstCnf          = VOS_NULL_PTR;
    VOS_UINT32                                  ulResult;
    VOS_UINT8                                   ucIndex;

    /* 初始化 */
    pRcvMsg             = (AT_MTA_MSG_STRU *)pMsg;
    pstCnf              = (MTA_AT_RESULT_CNF_STRU *)pRcvMsg->aucContent;
    ulResult            = AT_OK;
    ucIndex             = 0;

    /* 通过clientid获取index */
    if (AT_FAILURE == At_ClientIdToUserId(pRcvMsg->stAppCtrl.usClientId, &ucIndex))
    {
        AT_WARN_LOG("AT_RcvMtaIsmCoexSetCnf : WARNING:AT INDEX NOT FOUND!");
        return VOS_ERR;
    }

    if (AT_IS_BROADCAST_CLIENT_INDEX(ucIndex))
    {
        AT_WARN_LOG("AT_RcvMtaIsmCoexSetCnf : AT_BROADCAST_INDEX.");
        return VOS_ERR;
    }

    /* 当前AT是否在等待该命令返回 */
    if (AT_CMD_LTE_WIFI_COEX_SET != gastAtClientTab[ucIndex].CmdCurrentOpt)
    {
        AT_WARN_LOG("AT_RcvMtaIsmCoexSetCnf : Current Option is not AT_CMD_LTE_WIFI_COEX_SET.");
        return VOS_ERR;
    }

    /* 复位AT状态 */
    AT_STOP_TIMER_CMD_READY(ucIndex);

    gstAtSendData.usBufLen = 0;

    if (VOS_OK != pstCnf->enResult)
    {
        ulResult = AT_ERROR;
    }

    /* 输出结果 */
    At_FormatResultData(ucIndex, ulResult);

    return VOS_OK;
}

/*****************************************************************************
 函 数 名  : AT_RcvL4AIsmCoexSetCnf
 功能描述  : 收到L4A设置命令 ^ISMCOEX的回复
 输入参数  : pMsg
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年5月22日
    作    者   : w00316404
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 AT_RcvL4AIsmCoexSetCnf(
    VOS_VOID                           *pMsg
)
{
    return VOS_OK;
}


/*****************************************************************************
 函 数 名  : AT_RcvMtaIsmCoexQryCnf
 功能描述  : 收到MTA查询命令 ^ISMCOEX的回复
 输入参数  : pMsg
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年5月22日
    作    者   : w00316404
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 AT_RcvMtaIsmCoexQryCnf(
    VOS_VOID                           *pMsg
)
{
    AT_MTA_MSG_STRU                            *pRcvMsg         = VOS_NULL_PTR;
    MTA_AT_LTE_WIFI_COEX_QRY_CNF_STRU          *pstCnf          = VOS_NULL_PTR;
    VOS_UINT32                                  ulResult;
    VOS_UINT32                                  i;
    VOS_UINT8                                   ucIndex;

    /* 初始化 */
    pRcvMsg             = (AT_MTA_MSG_STRU *)pMsg;
    pstCnf              = (MTA_AT_LTE_WIFI_COEX_QRY_CNF_STRU *)pRcvMsg->aucContent;
    ulResult            = AT_OK;
    ucIndex             = 0;

    /* 通过clientid获取index */
    if (AT_FAILURE == At_ClientIdToUserId(pRcvMsg->stAppCtrl.usClientId, &ucIndex))
    {
        AT_WARN_LOG("AT_RcvMtaIsmCoexQryCnf : WARNING:AT INDEX NOT FOUND!");
        return VOS_ERR;
    }

    if (AT_IS_BROADCAST_CLIENT_INDEX(ucIndex))
    {
        AT_WARN_LOG("AT_RcvMtaIsmCoexQryCnf : AT_BROADCAST_INDEX.");
        return VOS_ERR;
    }

    /* 当前AT是否在等待该命令返回 */
    if (AT_CMD_LTE_WIFI_COEX_QRY != gastAtClientTab[ucIndex].CmdCurrentOpt)
    {
        AT_WARN_LOG("AT_RcvMtaIsmCoexQryCnf : Current Option is not AT_CMD_LTE_WIFI_COEX_QRY.");
        return VOS_ERR;
    }

    /* 复位AT状态 */
    AT_STOP_TIMER_CMD_READY(ucIndex);

    gstAtSendData.usBufLen = 0;

    gstAtSendData.usBufLen += (TAF_UINT16)At_sprintf(AT_CMD_MAX_LEN,
                                                    (TAF_CHAR *)pgucAtSndCodeAddr,
                                                    (TAF_CHAR *)pgucAtSndCodeAddr,
                                                    "%s:",
                                                    g_stParseContext[ucIndex].pstCmdElement->pszCmdName);

    for(i = 0; i < AT_MTA_ISMCOEX_BANDWIDTH_NUM; i++)
    {
        gstAtSendData.usBufLen += (TAF_UINT16)At_sprintf(AT_CMD_MAX_LEN,
                                                        (VOS_CHAR *)pgucAtSndCodeAddr,
                                                        (VOS_CHAR*)pgucAtSndCodeAddr + gstAtSendData.usBufLen,
                                                        " %d %d %d %d %d %d,",
                                                        pstCnf->astCoexPara[i].enCfg,
                                                        pstCnf->astCoexPara[i].usTxBegin,
                                                        pstCnf->astCoexPara[i].usTxEnd,
                                                        pstCnf->astCoexPara[i].sTxPower,
                                                        pstCnf->astCoexPara[i].usRxBegin,
                                                        pstCnf->astCoexPara[i].usRxEnd);
    }

    gstAtSendData.usBufLen--;

    /* 输出结果 */
    At_FormatResultData(ucIndex, ulResult);

    return VOS_OK;
}


/*****************************************************************************
 函 数 名  : AT_SetLogEnablePara
 功能描述  : ^LOGENABLE
 输入参数  : ucIndex - 端口索引
 输出参数  : 无
 返 回 值  : AT_XXX
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年10月21日
    作    者   : z00301431
    修改内容   : 新生成函数
*****************************************************************************/
VOS_UINT32 AT_SetLogEnablePara(VOS_UINT8 ucIndex)
{
    /* 参数检查 */
    if (AT_CMD_OPT_SET_PARA_CMD != g_stATParseCmd.ucCmdOptType)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 参数个数检查 */
    if (1 != gucAtParaIndex)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    if(0 == gastAtParaList[0].usParaLen)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* AT设置1表示允许抓取modemlog，设置0表示不允许抓取modemlog */
    if (1 == gastAtParaList[0].ulParaValue)
    {
        /* 设置为FALSE表示允许抓MODEM LOG */
        DMS_SET_PRINT_MODEM_LOG_TYPE(VOS_FALSE);
    }
    else
    {
        /* 设置为TRUE表示不允许抓MODEM LOG */
        DMS_SET_PRINT_MODEM_LOG_TYPE(VOS_TRUE);
    }

    return AT_OK;
}

/*****************************************************************************
 函 数 名  : AT_QryLogEnable
 功能描述  : ^LOGENABLE
 输入参数  : ucIndex - 端口索引
 输出参数  : 无
 返 回 值  : AT_XXX
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年10月21日
    作    者   : z00301431
    修改内容   : 新生成函数
*****************************************************************************/
VOS_UINT32 AT_QryLogEnable(VOS_UINT8 ucIndex)
{
    VOS_UINT16                          usLength;
    VOS_UINT32                          ulEnableFlag;

    /* 参数检查 */
    if (AT_CMD_OPT_READ_CMD != g_stATParseCmd.ucCmdOptType)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    usLength                            = 0;

    if (VOS_FALSE == DMS_GET_PRINT_MODEM_LOG_TYPE())
    {
        /* DMS当前允许抓MODEM LOG，返回enable为TRUE */
        ulEnableFlag = VOS_TRUE;
    }
    else
    {
        /* DMS当前不允许抓MODEM LOG，返回enable为FALSE */
        ulEnableFlag = VOS_FALSE;
    }

    usLength  = (VOS_UINT16)At_sprintf(AT_CMD_MAX_LEN,
                                       (VOS_CHAR*)pgucAtSndCodeAddr,
                                       (VOS_CHAR*)pgucAtSndCodeAddr,
                                       "%s: ",
                                       g_stParseContext[ucIndex].pstCmdElement->pszCmdName);

    usLength += (VOS_UINT16)At_sprintf(AT_CMD_MAX_LEN,
                                       (VOS_CHAR*)pgucAtSndCodeAddr,
                                       (VOS_CHAR*)pgucAtSndCodeAddr + usLength,
                                       "%d",
                                       ulEnableFlag);

    gstAtSendData.usBufLen = usLength;

    return AT_OK;
}


/*****************************************************************************
 函 数 名  : AT_SetActPdpStubPara
 功能描述  : ^ACTPDPSTUB
 输入参数  : ucIndex - 端口索引
 输出参数  : 无
 返 回 值  : AT_XXX
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年11月04日
    作    者   : z00301431
    修改内容   : 新生成函数
*****************************************************************************/
VOS_UINT32 AT_SetActPdpStubPara(VOS_UINT8 ucIndex)
{
    VOS_UINT8                           ucFlag;

    /* 参数检查 */
    if (AT_CMD_OPT_SET_PARA_CMD != g_stATParseCmd.ucCmdOptType)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 参数个数检查 */
    if (2 != gucAtParaIndex)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    if((0 == gastAtParaList[0].usParaLen)
    || (0 == gastAtParaList[1].usParaLen))
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 获取设置的标志 */
    ucFlag = (VOS_UINT8)gastAtParaList[1].ulParaValue;

    /* 根据MODEM ID调用不同的桩函数 */
    if (0 == gastAtParaList[0].ulParaValue)
    {
        AT_SetPcuiPsCallFlag(ucFlag, AT_CLIENT_TAB_APP_INDEX);
    }
    else if (1 == gastAtParaList[0].ulParaValue)
    {
        AT_SetCtrlPsCallFlag(ucFlag, AT_CLIENT_TAB_APP_INDEX);
    }
    else if (2 == gastAtParaList[0].ulParaValue)
    {
    
   AT_SetPcui2PsCallFlag(ucFlag, AT_CLIENT_TAB_APP_INDEX);
    }
    else
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    return AT_OK;
}

/*****************************************************************************
 函 数 名  : AT_SetNVCHKPara
 功能描述  : AT_CMD_NVCHK
 输入参数  : ucIndex --- 端口索引
 输出参数  : 无
 返 回 值  : AT_XXX  --- ATC返回码
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年10月19日
    作    者   : x00316382
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 AT_SetNVCHKPara(VOS_UINT8 ucIndex)
{
    VOS_UINT8           ucLoopIndex;

    /* 参数检查 */
    if ( AT_CMD_OPT_SET_PARA_CMD != g_stATParseCmd.ucCmdOptType )
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 参数过多 */
    if ( 1 != gucAtParaIndex )
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 未带参数判断 */
    if(0 == gastAtParaList[0].usParaLen)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 如果是全部检查，则循环检查全部CRC */
    if ( 0 == gastAtParaList[0].ulParaValue)
    {
        for( ucLoopIndex = 0; ucLoopIndex < 3; ucLoopIndex++ )
        {
            if ( 0 != mdrv_nv_check_factorynv( ucLoopIndex ) )
            {
                return AT_ERROR;
            }
        }

        return AT_OK;
    }

    /* 如果返回0，为正常，非0为异常 */
    if ( 0 == mdrv_nv_check_factorynv( gastAtParaList[0].ulParaValue - 1 ))
    {
        return AT_OK;
    }
    else
    {
        return AT_ERROR;
    }

}



/*****************************************************************************
 函 数 名  : AT_RcvMtaAfcClkInfo
 功能描述  : 处理来自mta模块AFC_INFO消息
 输入参数  : VOS_VOID *pMsg
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年12月24日
    作    者   : C00299064
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 AT_RcvMtaAfcClkInfoCnf(
    VOS_VOID                           *pMsg
)
{
    VOS_UINT8                                   ucIndex;
    AT_MTA_MSG_STRU                            *pstMtaMsg    = VOS_NULL_PTR;
    MTA_AT_QRY_AFC_CLK_FREQ_XOCOEF_CNF_STRU    *pstAfcCnf    = VOS_NULL_PTR;
    VOS_UINT32                                  ulRet;

    pstMtaMsg = (AT_MTA_MSG_STRU*)pMsg;

    pstAfcCnf = (MTA_AT_QRY_AFC_CLK_FREQ_XOCOEF_CNF_STRU*)pstMtaMsg->aucContent;

    /* 初始化消息变量 */
    ucIndex             = 0;
    ulRet               = AT_OK;

     /* 通过clientid获取index */
    if (AT_FAILURE == At_ClientIdToUserId(pstMtaMsg->stAppCtrl.usClientId, &ucIndex))
    {
        AT_WARN_LOG("AT_RcvMtaAfcClkInfoCnf : WARNING:AT INDEX NOT FOUND!");
        return VOS_ERR;
    }

    if (AT_IS_BROADCAST_CLIENT_INDEX(ucIndex))
    {
        AT_WARN_LOG("AT_RcvMtaAfcClkInfoCnf : AT_BROADCAST_INDEX.");
        return VOS_ERR;
    }

    /* 当前AT是否在等待该命令返回 */
    if (AT_CMD_AFCCLKINFO_QRY != gastAtClientTab[ucIndex].CmdCurrentOpt)
    {
        AT_WARN_LOG("AT_RcvMtaAfcClkInfoCnf : Current Option is not AT_CMD_AFCCLKINFO_QRY.");
        return VOS_ERR;
    }

    /* 复位AT状态 */
    AT_STOP_TIMER_CMD_READY(ucIndex);

    gstAtSendData.usBufLen = 0;

    if (MTA_AT_RESULT_NO_ERROR != pstAfcCnf->enResult)
    {
        ulRet = AT_ERROR;
    }
    else
    {
        gstAtSendData.usBufLen = (TAF_UINT16)At_sprintf(AT_CMD_MAX_LEN,
                                                    (VOS_CHAR *)pgucAtSndCodeAddr,
                                                    (VOS_CHAR*)pgucAtSndCodeAddr,
                                                    "%s: %u,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u",
                                                    g_stParseContext[ucIndex].pstCmdElement->pszCmdName,
                                                    pstAfcCnf->enStatus,
                                                    pstAfcCnf->lDeviation,
                                                    pstAfcCnf->sCoeffStartTemp,
                                                    pstAfcCnf->sCoeffEndTemp,
                                                    pstAfcCnf->aulCoeffMantissa[0],
                                                    pstAfcCnf->aulCoeffMantissa[1],
                                                    pstAfcCnf->aulCoeffMantissa[2],
                                                    pstAfcCnf->aulCoeffMantissa[3],
                                                    pstAfcCnf->ausCoeffExponent[0],
                                                    pstAfcCnf->ausCoeffExponent[1],
                                                    pstAfcCnf->ausCoeffExponent[2],
                                                    pstAfcCnf->ausCoeffExponent[3]);
    }

    /* 输出结果 */
    At_FormatResultData(ucIndex, ulRet);

    return VOS_OK;

}



/*****************************************************************************
 函 数 名  : AT_SetSecureStatePara
 功能描述  : 命令AT^SECURESTATE设置Secure State
 输入参数  : ucIndex    -- AT通道索引
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年12月24日
    作    者   : h00360002
    修改内容   : 新增函数
*****************************************************************************/
VOS_UINT32 AT_SetSecureStatePara(VOS_UINT8 ucIndex)
{
    VOS_INT                                 iRst;

    /* 参数检查 */
    if (AT_CMD_OPT_SET_PARA_CMD != g_stATParseCmd.ucCmdOptType)
    {
       return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 参数合法性检查 */
    if ( (1 != gucAtParaIndex)
      || (0 == gastAtParaList[0].usParaLen) )
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 调用底软提供的接口实现设置操作 */
    iRst = mdrv_efuse_ioctl(MDRV_EFUSE_IOCTL_CMD_SET_SECURESTATE,
                            (VOS_INT)gastAtParaList[0].ulParaValue,
                            VOS_NULL_PTR,
                            0);

    /* 根据底软接口返回的结果返回设置结果 */
    /* 底软返回1时表明重复设置,返回0时设置成功,其他情况设置失败 */
    if (AT_EFUSE_REPEAT == iRst)
    {
        return AT_ERROR;
    }
    else if (AT_EFUSE_OK == iRst)
    {
        return AT_OK;
    }
    else
    {
        AT_WARN_LOG("AT_SetSecureStatePara : Set Secure state req failed.");
    }

    return AT_CME_UNKNOWN;
}

/*****************************************************************************
 函 数 名  : AT_SetKcePara
 功能描述  : 命令AT^KCE设置128bit的key值用于image加密
 输入参数  : ucIndex    -- AT通道索引
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年12月25日
    作    者   : h00360002
    修改内容   : 新增函数
*****************************************************************************/
VOS_UINT32 AT_SetKcePara(VOS_UINT8 ucIndex)
{
    VOS_UINT32                              ulResult;
    VOS_INT                                 iRst;

    /* 参数检查 */
    if (AT_CMD_OPT_SET_PARA_CMD != g_stATParseCmd.ucCmdOptType)
    {
       return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 参数合法性检查 */
    if ( (1 != gucAtParaIndex)
      || (AT_KCE_PARA_LEN != gastAtParaList[0].usParaLen) )
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* Ascii转字节流 */
    ulResult = At_AsciiNum2HexString(gastAtParaList[0].aucPara, &gastAtParaList[0].usParaLen);

    if ( (AT_SUCCESS != ulResult)
      || (AT_DRV_KCE_LEN != gastAtParaList[0].usParaLen) )
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 调用底软提供的接口实现设置操作 */
    iRst = mdrv_efuse_ioctl(MDRV_EFUSE_IOCTL_CMD_SET_KCE,
                            0,
                            gastAtParaList[0].aucPara,
                            (VOS_INT)gastAtParaList[0].usParaLen);

    /* 根据底软接口返回的结果返回设置结果 */
    /* 底软返回1时表明重复设置,返回0时设置成功,其他情况设置失败 */
    if (AT_EFUSE_REPEAT == iRst)
    {
        return AT_ERROR;
    }
    else if (AT_EFUSE_OK == iRst)
    {
        return AT_OK;
    }
    else
    {
        AT_WARN_LOG("AT_SetSecureStatePara : Set KCE req failed.");
    }

    return AT_CME_UNKNOWN;
}

/*****************************************************************************
 函 数 名  : At_QrySecureStatePara
 功能描述  : 命令AT^SECURESTATE查询Secure State
 输入参数  : ucIndex    -- AT通道索引
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年12月24日
    作    者   : h00360002
    修改内容   : 新增函数
*****************************************************************************/
VOS_UINT32 AT_QrySecureStatePara(VOS_UINT8 ucIndex)
{
    VOS_INT                             iResult;
    VOS_UINT16                          usLength;

    /* 参数检查 */
    if (AT_CMD_OPT_READ_CMD != g_stATParseCmd.ucCmdOptType)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    usLength = 0;

    /* 调用底软提供的借口查询 */
    iResult = mdrv_efuse_ioctl(MDRV_EFUSE_IOCTL_CMD_GET_SECURESTATE,
                               0,
                               VOS_NULL_PTR,
                               0);

    /* 处理异常查询结果 */
    /* 查询失败 */
    if (AT_SECURE_STATE_NOT_SET > iResult)
    {
        return AT_ERROR;
    }

    /* 查询结果异常 */
    if (AT_SECURE_STATE_RMA < iResult)
    {
        return AT_CME_UNKNOWN;
    }

    /* 打印结果 */
    usLength = (VOS_UINT16)At_sprintf(AT_CMD_MAX_LEN,
                                     (VOS_CHAR *)pgucAtSndCodeAddr,
                                     (VOS_CHAR *)pgucAtSndCodeAddr,
                                     "%s: %d",
                                     g_stParseContext[ucIndex].pstCmdElement->pszCmdName,
                                     iResult);

    gstAtSendData.usBufLen = usLength;
    return AT_OK;
}

/*****************************************************************************
 函 数 名  : AT_QrySocidPara
 功能描述  : 命令AT^SOCID查询SOCID
 输入参数  : ucIndex    -- AT通道索引
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年12月29日
    作    者   : h00360002
    修改内容   : 新增函数
*****************************************************************************/
VOS_UINT32 AT_QrySocidPara(VOS_UINT8 ucIndex)
{
    VOS_INT                                 iResult;
    VOS_UINT16                              usLength;
    VOS_UINT8                               aucSocid[AT_DRV_SOCID_LEN];
    VOS_UINT32                              i;

    /* 局部变量初始化 */
    TAF_MEM_SET_S(aucSocid, sizeof(aucSocid), 0x00, AT_DRV_SOCID_LEN);
    usLength = 0;

    /* 参数检查 */
    if (AT_CMD_OPT_READ_CMD != g_stATParseCmd.ucCmdOptType)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }



    /* 调用底软提供的借口查询 */

    iResult = mdrv_efuse_ioctl(MDRV_EFUSE_IOCTL_CMD_GET_SOCID,
                               0,
                               aucSocid,
                               AT_DRV_SOCID_LEN);

    /* 处理异常查询结果 */
    if (AT_EFUSE_OK != iResult)
    {
        return AT_ERROR;
    }

    /* 输出结果 */
    usLength = (VOS_UINT16)At_sprintf(AT_CMD_MAX_LEN,
                                     (VOS_CHAR *)pgucAtSndCodeAddr,
                                     (VOS_CHAR *)pgucAtSndCodeAddr,
                                     "%s: ",
                                     g_stParseContext[ucIndex].pstCmdElement->pszCmdName);

    /* 用16进制输出码流 */
    for (i = 0; i < AT_DRV_SOCID_LEN; i++)
    {
        usLength += (VOS_UINT16)At_sprintf(AT_CMD_MAX_LEN,
                                          (VOS_CHAR *)pgucAtSndCodeAddr,
                                          (VOS_CHAR *)pgucAtSndCodeAddr + usLength,
                                          "%02X",
                                          aucSocid[i]);
    }

    gstAtSendData.usBufLen = usLength;
    return AT_OK;
}


/*****************************************************************************
 函 数 名  : AT_SetPdmCtrlPara
 功能描述  : AT_CMD_PDMCTRL
 输入参数  : ucIndex --- 端口索引
 输出参数  : 无
 返 回 值  : AT_XXX  --- ATC返回码
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年10月19日
    作    者   : x00316382
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 AT_SetPdmCtrlPara(VOS_UINT8 ucIndex)
{
    AT_HPA_PDM_CTRL_REQ_STRU                *pstMsg;

    /* 参数检查 */
    if (AT_CMD_OPT_SET_PARA_CMD != g_stATParseCmd.ucCmdOptType)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 参数过多 */
    if ( 4 != gucAtParaIndex)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    if ( (0 == gastAtParaList[0].usParaLen)
      || (0 == gastAtParaList[1].usParaLen)
      || (0 == gastAtParaList[2].usParaLen)
      || (0 == gastAtParaList[3].usParaLen) )
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    if (AT_TMODE_FTM != g_stAtDevCmdCtrl.ucCurrentTMode)
    {
        return AT_DEVICE_MODE_ERROR;
    }

    pstMsg   = (AT_HPA_PDM_CTRL_REQ_STRU *)AT_ALLOC_MSG_WITH_HDR( sizeof(AT_HPA_PDM_CTRL_REQ_STRU) );

    if (VOS_NULL_PTR == pstMsg)
    {
        AT_WARN_LOG("AT_SetPdmCtrlPara: alloc msg fail!");
        return AT_ERROR;
    }

    /* 填写消息头 */
    AT_CFG_MSG_HDR( pstMsg, DSP_PID_WPHY, ID_AT_HPA_PDM_CTRL_REQ );

    pstMsg->usMsgID                             = ID_AT_HPA_PDM_CTRL_REQ;
    pstMsg->usRsv                               = 0;
    pstMsg->usPdmRegValue                       = ( VOS_UINT16 )gastAtParaList[0].ulParaValue;
    pstMsg->usPaVbias                           = ( VOS_UINT16 )gastAtParaList[1].ulParaValue;
    pstMsg->usPaVbias2                          = ( VOS_UINT16 )gastAtParaList[2].ulParaValue;
    pstMsg->usPaVbias3                          = ( VOS_UINT16 )gastAtParaList[3].ulParaValue;

    if (VOS_OK != PS_SEND_MSG(WUEPS_PID_AT, pstMsg))
    {
        AT_WARN_LOG("AT_SetPdmCtrlPara: Send msg fail!");
        return AT_ERROR;
    }

    gastAtClientTab[ucIndex].CmdCurrentOpt      = AT_CMD_PDM_CTRL;                /*设置当前操作模式 */
    g_stAtDevCmdCtrl.ucIndex                    = ucIndex;

    return AT_WAIT_ASYNC_RETURN;                                                /* 等待异步事件返回 */
}

/*****************************************************************************
 函 数 名  : AT_SetCtzuPara
 功能描述  : +CTZU
 输入参数  : ucIndex - 端口索引
 输出参数  : 无
 返 回 值  : AT_XXX  - ATC返回码
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2016年1月8日
    作    者   : z00301431
    修改内容   : 新生成函数
*****************************************************************************/
VOS_UINT32 AT_SetCtzuPara(VOS_UINT8 ucIndex)
{
    /* 参数检查 */
    if (AT_CMD_OPT_SET_PARA_CMD != g_stATParseCmd.ucCmdOptType)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 参数个数检查 */
    if (1 != gucAtParaIndex)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    if(0 == gastAtParaList[0].usParaLen)
    {
        g_ulCtzuFlag = 0;
    }
    else
    {
        g_ulCtzuFlag = gastAtParaList[0].ulParaValue;
    }

    return AT_OK;
}

/*****************************************************************************
 函 数 名  : AT_QryCtzuPara
 功能描述  : 查询CTZU
 输入参数  : 无
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2016年1月8日
    作    者   : z00301431
    修改内容   : 新生成函数
*****************************************************************************/
VOS_UINT32 AT_QryCtzuPara(VOS_UINT8 ucIndex)
{
    VOS_UINT16                           usLength;

    /* 参数检查 */
    if (AT_CMD_OPT_READ_CMD != g_stATParseCmd.ucCmdOptType)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    usLength = (VOS_UINT16)At_sprintf(AT_CMD_MAX_LEN,
                                     (VOS_CHAR *)pgucAtSndCodeAddr,
                                     (VOS_CHAR *)pgucAtSndCodeAddr,
                                     "%s: %d",
                                     g_stParseContext[ucIndex].pstCmdElement->pszCmdName,
                                     g_ulCtzuFlag);

    gstAtSendData.usBufLen = usLength;

    return AT_OK;
}

/*****************************************************************************
 函 数 名  : AT_SetEvdoSysEvent
 功能描述  : 设置EVOD SYS EVENT,命令格式^DOSYSEVENT=<>
 输入参数  : ucIndex - 用户索引
 输出参数  : 无
 返 回 值  : AT_OK - 成功
             AT_DEVICE_OTHER_ERROR或 AT_DATA_UNLOCK_ERROR - 失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年12月30日
    作    者   : z00316370
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 AT_SetEvdoSysEvent(VOS_UINT8 ucIndex)
{
    AT_MTA_EVDO_SYS_EVENT_SET_REQ_STRU  stSysEvent;
    VOS_UINT32                          ulRslt;

    TAF_MEM_SET_S(&stSysEvent, sizeof(stSysEvent), 0x00, sizeof(AT_MTA_EVDO_SYS_EVENT_SET_REQ_STRU));

    /* 命令状态检查 */
    if (AT_CMD_OPT_SET_PARA_CMD != g_stATParseCmd.ucCmdOptType)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 参数个数不为1或者字符串长度大于10, 4294967295 = 0xffffffff*/
    if ((1 != gucAtParaIndex)
     || (10 < gastAtParaList[0].usParaLen))
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    stSysEvent.ulDoSysEvent = gastAtParaList[0].ulParaValue;

    ulRslt = AT_FillAndSndAppReqMsg(gastAtClientTab[ucIndex].usClientId,
                                    gastAtClientTab[ucIndex].opId,
                                    ID_AT_MTA_EVDO_SYS_EVENT_SET_REQ,
                                    &stSysEvent,
                                    sizeof(stSysEvent),
                                    I0_UEPS_PID_MTA);

    if (TAF_SUCCESS == ulRslt)
    {
        gastAtClientTab[ucIndex].CmdCurrentOpt = AT_CMD_EVDO_SYS_EVENT_SET;

        /* 返回命令处理挂起状态 */
        return AT_WAIT_ASYNC_RETURN;
    }
    else
    {
        AT_WARN_LOG("AT_SetEvdoSysEvent: AT_FillAndSndAppReqMsg fail.");
        return AT_ERROR;
    }

}

/*****************************************************************************
 函 数 名  : AT_SetDoSigMask
 功能描述  : 设置EVOD SIG MASK,命令格式^DOSIGMASK=<>
 输入参数  : ucIndex - 用户索引
 输出参数  : 无
 返 回 值  : AT_OK - 成功
             AT_DEVICE_OTHER_ERROR或 AT_DATA_UNLOCK_ERROR - 失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年12月30日
    作    者   : z00316370
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 AT_SetDoSigMask(VOS_UINT8 ucIndex)
{
    AT_MTA_EVDO_SIG_MASK_SET_REQ_STRU   stSigMask;
    VOS_UINT32                          ulRslt;

    TAF_MEM_SET_S(&stSigMask, sizeof(stSigMask), 0x00, sizeof(AT_MTA_EVDO_SIG_MASK_SET_REQ_STRU));

    /* 命令状态检查 */
    if (AT_CMD_OPT_SET_PARA_CMD != g_stATParseCmd.ucCmdOptType)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 参数个数不为1或者字符串长度大于10, 4294967295 = 0xffffffff*/
    if ((1 != gucAtParaIndex)
     || (10 < gastAtParaList[0].usParaLen))
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    stSigMask.ulDoSigMask = gastAtParaList[0].ulParaValue;

    ulRslt = AT_FillAndSndAppReqMsg(gastAtClientTab[ucIndex].usClientId,
                                    gastAtClientTab[ucIndex].opId,
                                    ID_AT_MTA_EVDO_SIG_MASK_SET_REQ,
                                    &stSigMask,
                                    sizeof(stSigMask),
                                    I0_UEPS_PID_MTA);

    if (TAF_SUCCESS == ulRslt)
    {
        gastAtClientTab[ucIndex].CmdCurrentOpt = AT_CMD_EVDO_SIG_MASK_SET;

        /* 返回命令处理挂起状态 */
        return AT_WAIT_ASYNC_RETURN;
    }
    else
    {
        AT_WARN_LOG("AT_SetDoSigMask: AT_FillAndSndAppReqMsg fail.");
        return AT_ERROR;
    }

}

/*****************************************************************************
 函 数 名  : AT_RcvMtaEvdoSysEventSetCnf
 功能描述  : 收到MTA设置SYS EVENT的回复
 输入参数  : pMsg
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年12月30日
    作    者   : Z00316370
    修改内容   : 新生成函数
*****************************************************************************/
VOS_UINT32 AT_RcvMtaEvdoSysEventSetCnf(
    VOS_VOID                           *pMsg
)
{
    AT_MTA_MSG_STRU                            *pRcvMsg         = VOS_NULL_PTR;
    MTA_AT_RESULT_CNF_STRU                     *pstCnf          = VOS_NULL_PTR;
    VOS_UINT32                                  ulResult;
    VOS_UINT8                                   ucIndex;

    /* 初始化 */
    pRcvMsg             = (AT_MTA_MSG_STRU *)pMsg;
    pstCnf              = (MTA_AT_RESULT_CNF_STRU *)pRcvMsg->aucContent;
    ulResult            = AT_OK;
    ucIndex             = 0;

    /* 通过clientid获取index */
    if (AT_FAILURE == At_ClientIdToUserId(pRcvMsg->stAppCtrl.usClientId, &ucIndex))
    {
        AT_WARN_LOG("AT_RcvMtaEvdoSysEventSetCnf : WARNING:AT INDEX NOT FOUND!");
        return VOS_ERR;
    }

    if (AT_IS_BROADCAST_CLIENT_INDEX(ucIndex))
    {
        AT_WARN_LOG("AT_RcvMtaEvdoSysEventSetCnf : AT_BROADCAST_INDEX.");
        return VOS_ERR;
    }

    /* 当前AT是否在等待该命令返回 */
    if (AT_CMD_EVDO_SYS_EVENT_SET != gastAtClientTab[ucIndex].CmdCurrentOpt)
    {
        AT_WARN_LOG("AT_RcvMtaEvdoSysEventSetCnf : Current Option is not AT_CMD_LTE_WIFI_COEX_QRY.");
        return VOS_ERR;
    }

    /* 复位AT状态 */
    AT_STOP_TIMER_CMD_READY(ucIndex);

    /* 格式化AT^MEID命令返回 */
    gstAtSendData.usBufLen = 0;

    if (pstCnf->enResult != MTA_AT_RESULT_NO_ERROR)
    {
        ulResult = AT_ERROR;
    }
    else
    {
        ulResult = AT_OK;
    }

    At_FormatResultData(ucIndex, ulResult);

    return VOS_OK;
}

/*****************************************************************************
 函 数 名  : AT_RcvMtaEvdoSigMaskSetCnf
 功能描述  : 收到MTA设置SIG MASK的回复
 输入参数  : pMsg
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年12月30日
    作    者   : Z00316370
    修改内容   : 新生成函数
*****************************************************************************/
VOS_UINT32 AT_RcvMtaEvdoSigMaskSetCnf(
    VOS_VOID                           *pMsg
)
{
    AT_MTA_MSG_STRU                            *pRcvMsg         = VOS_NULL_PTR;
    MTA_AT_RESULT_CNF_STRU                     *pstCnf          = VOS_NULL_PTR;
    VOS_UINT32                                  ulResult;
    VOS_UINT8                                   ucIndex;

    /* 初始化 */
    pRcvMsg             = (AT_MTA_MSG_STRU *)pMsg;
    pstCnf              = (MTA_AT_RESULT_CNF_STRU *)pRcvMsg->aucContent;
    ulResult            = AT_OK;
    ucIndex             = 0;

    /* 通过clientid获取index */
    if (AT_FAILURE == At_ClientIdToUserId(pRcvMsg->stAppCtrl.usClientId, &ucIndex))
    {
        AT_WARN_LOG("AT_RcvMtaEvdoSigMaskSetCnf : WARNING:AT INDEX NOT FOUND!");
        return VOS_ERR;
    }

    if (AT_IS_BROADCAST_CLIENT_INDEX(ucIndex))
    {
        AT_WARN_LOG("AT_RcvMtaEvdoSigMaskSetCnf : AT_BROADCAST_INDEX.");
        return VOS_ERR;
    }

    /* 当前AT是否在等待该命令返回 */
    if (AT_CMD_EVDO_SIG_MASK_SET != gastAtClientTab[ucIndex].CmdCurrentOpt)
    {
        AT_WARN_LOG("AT_RcvMtaEvdoSigMaskSetCnf : Current Option is not AT_CMD_LTE_WIFI_COEX_QRY.");
        return VOS_ERR;
    }

    /* 复位AT状态 */
    AT_STOP_TIMER_CMD_READY(ucIndex);

    /* 格式化AT^MEID命令返回 */
    gstAtSendData.usBufLen = 0;

    if (pstCnf->enResult != MTA_AT_RESULT_NO_ERROR)
    {
        ulResult = AT_ERROR;
    }
    else
    {
        ulResult = AT_OK;
    }

    At_FormatResultData(ucIndex, ulResult);

    return VOS_OK;

}

/*****************************************************************************
 函 数 名  : AT_RcvMtaEvdoRevARLinkInfoInd
 功能描述  : AT模块收到MTA主动上报的RevA Rlink信息
 输入参数  : pstMsg -- 消息内容
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2016年01月03日
    作    者   : z00316370
    修改内容   : 新增
*****************************************************************************/
VOS_UINT32 AT_RcvMtaEvdoRevARLinkInfoInd(
    VOS_VOID                           *pMsg
)
{
    VOS_UINT8                                               ucIndex;
    AT_MTA_MSG_STRU                                        *pstMtaMsg       = VOS_NULL_PTR;
    MTA_AT_EVDO_REVA_RLINK_INFO_IND_STRU                   *pstRlinkInfo    = VOS_NULL_PTR;
    VOS_UINT8                                              *pucData;
    VOS_UINT32                                              ulDataLen;
    VOS_UINT32                                              ulRslt;

    /* 初始化消息变量 */
    ucIndex             = 0;
    pstMtaMsg           = (AT_MTA_MSG_STRU*)pMsg;
    pstRlinkInfo        = (MTA_AT_EVDO_REVA_RLINK_INFO_IND_STRU*)pstMtaMsg->aucContent;

    /* 通过ClientId获取ucIndex */
    if ( AT_FAILURE == At_ClientIdToUserId(pstMtaMsg->stAppCtrl.usClientId, &ucIndex) )
    {
        AT_WARN_LOG("AT_RcvMtaEvdoRevARLinkInfoInd: WARNING:AT INDEX NOT FOUND!");
        return VOS_ERR;
    }

    ulDataLen               = pstRlinkInfo->ulParaLen * sizeof(VOS_UINT8) * 2 + 3;
    pucData                 = (VOS_UINT8 *)PS_MEM_ALLOC(WUEPS_PID_AT, ulDataLen);

    if (VOS_NULL_PTR == pucData)
    {
        AT_WARN_LOG("AT_RcvMtaEvdoRevARLinkInfoInd(): mem alloc Fail!");
        return VOS_ERR;
    }

    TAF_MEM_SET_S(pucData, ulDataLen, 0x00, ulDataLen);
    pucData[ulDataLen - 1]  = '\0';

    ulRslt = AT_HexToAsciiString(pstRlinkInfo->aucContent, &pucData[1], (TAF_UINT16)pstRlinkInfo->ulParaLen);

    pucData[0]              = '"';
    pucData[ulDataLen - 2]  = '"';

    if (ulRslt != AT_OK)
    {
        AT_WARN_LOG("AT_RcvMtaEvdoRevARLinkInfoInd: WARNING: Hex to Ascii trans fail!");

        PS_MEM_FREE(WUEPS_PID_AT, pucData);

        return VOS_ERR;
    }

    gstAtSendData.usBufLen = 0;
    gstAtSendData.usBufLen = (VOS_UINT16)At_sprintf(AT_CMD_MAX_LEN,
                                                    (VOS_CHAR *)pgucAtSndCodeAddr,
                                                    (VOS_CHAR *)pgucAtSndCodeAddr,
                                                    "%s^DOREVARLINK: %d,%s%s",
                                                    gaucAtCrLf,
                                                    pstRlinkInfo->ulParaLen * 2,
                                                    pucData,
                                                    gaucAtCrLf);

    At_SendResultData(ucIndex, pgucAtSndCodeAddr, gstAtSendData.usBufLen);

    PS_MEM_FREE(WUEPS_PID_AT, pucData);

    return VOS_OK;
}

/*****************************************************************************
 函 数 名  : AT_RcvMtaEvdoSigExEventInd
 功能描述  : AT模块收到MTA主动上报的Sig Ex Event信息
 输入参数  : pstMsg -- 消息内容
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2016年01月03日
    作    者   : z00316370
    修改内容   : 新增
*****************************************************************************/
VOS_UINT32 AT_RcvMtaEvdoSigExEventInd(
    VOS_VOID                           *pMsg
)
{
    VOS_UINT8                           ucIndex;
    AT_MTA_MSG_STRU                    *pstMtaMsg       = VOS_NULL_PTR;
    MTA_AT_EVDO_SIG_EXEVENT_IND_STRU   *pstSigExEvent   = VOS_NULL_PTR;
    VOS_UINT8                          *pucData;
    VOS_UINT32                          ulDataLen;
    VOS_UINT32                          ulRslt;

    /* 初始化消息变量 */
    ucIndex             = 0;
    pstMtaMsg           = (AT_MTA_MSG_STRU*)pMsg;
    pstSigExEvent       = (MTA_AT_EVDO_SIG_EXEVENT_IND_STRU*)pstMtaMsg->aucContent;

    /* 通过ClientId获取ucIndex */
    if ( AT_FAILURE == At_ClientIdToUserId(pstMtaMsg->stAppCtrl.usClientId, &ucIndex) )
    {
        AT_WARN_LOG("AT_RcvMtaEvdoSigExEventInd: WARNING:AT INDEX NOT FOUND!");
        return VOS_ERR;
    }

    ulDataLen               = pstSigExEvent->ulParaLen * sizeof(VOS_UINT8) * 2 + 3;
    pucData                 = (VOS_UINT8 *)PS_MEM_ALLOC(WUEPS_PID_AT, ulDataLen);

    if (VOS_NULL_PTR == pucData)
    {
        AT_WARN_LOG("AT_RcvMtaEvdoSigExEventInd(): mem alloc Fail!");
        return VOS_ERR;
    }

    TAF_MEM_SET_S(pucData, ulDataLen, 0x00, ulDataLen);
    pucData[ulDataLen - 1]  = '\0';

    ulRslt = AT_HexToAsciiString(pstSigExEvent->aucContent, &pucData[1], (TAF_UINT16)pstSigExEvent->ulParaLen);

    pucData[0]              = '"';
    pucData[ulDataLen - 2]  = '"';

    if (ulRslt != AT_OK)
    {
        AT_WARN_LOG("AT_RcvMtaEvdoSigExEventInd: WARNING: Hex to Ascii trans fail!");

        PS_MEM_FREE(WUEPS_PID_AT, pucData);

        return VOS_ERR;
    }

    gstAtSendData.usBufLen = 0;
    gstAtSendData.usBufLen = (VOS_UINT16)At_sprintf(AT_CMD_MAX_LEN,
                                                    (VOS_CHAR *)pgucAtSndCodeAddr,
                                                    (VOS_CHAR *)pgucAtSndCodeAddr,
                                                    "%s^DOSIGEXEVENT: %d,%s%s",
                                                    gaucAtCrLf,
                                                    pstSigExEvent->ulParaLen * 2,
                                                    pucData,
                                                    gaucAtCrLf);

    PS_MEM_FREE(WUEPS_PID_AT, pucData);

    At_SendResultData(ucIndex, pgucAtSndCodeAddr, gstAtSendData.usBufLen);

    return VOS_OK;
}



/*****************************************************************************
 函 数 名  : AT_SetFratIgnitionPara
 功能描述  : ^FratIgnition设置命令处理函数
 输入参数  : VOS_UINT8 ucIndex
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2016年4月21日
    作    者   : c00318887
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 AT_SetFratIgnitionPara(VOS_UINT8 ucIndex)
{
    VOS_UINT32                          ulRst;
    AT_MTA_FRAT_IGNITION_ENUM_UNIT8     enFratIgnitionSta;

    /* 参数检查 */
    if ( AT_CMD_OPT_SET_PARA_CMD != g_stATParseCmd.ucCmdOptType )
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 参数数目检查 */
    if (gucAtParaIndex != 1)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* ucFratIgnitionSta 取值错误 */
    if ((gastAtParaList[0].ulParaValue >= AT_MTA_FRAT_IGNITION_STATT_BUTT)
     || (0 == gastAtParaList[0].usParaLen))
    {
        AT_WARN_LOG1("AT_SetFratIgnitionPara: para err", gastAtParaList[0].ulParaValue);
        return AT_CME_INCORRECT_PARAMETERS;
    }

    enFratIgnitionSta = (AT_MTA_FRAT_IGNITION_ENUM_UNIT8)gastAtParaList[0].ulParaValue;

    /* 发送消息 ID_AT_MTA_FRAT_IGNITION_SET_REQ 给MTA处理，该消息带参数(VOS_UINT8)gastAtParaList[0].ulParaValue */
    ulRst = AT_FillAndSndAppReqMsg(gastAtClientTab[ucIndex].usClientId,
                                   0,
                                   ID_AT_MTA_FRAT_IGNITION_SET_REQ,
                                   (VOS_VOID *)&enFratIgnitionSta,
                                   sizeof(enFratIgnitionSta),
                                   I0_UEPS_PID_MTA);

    if (TAF_SUCCESS == ulRst)
    {
        gastAtClientTab[ucIndex].CmdCurrentOpt = AT_CMD_FRATIGNITION_SET;
        return AT_WAIT_ASYNC_RETURN;
    }
    else
    {
        AT_WARN_LOG("AT_SetFratIgnitionPara: send ReqMsg fail");
        return AT_ERROR;
    }
}

/*****************************************************************************
 函 数 名  : AT_TimeParaYTDCheck
 功能描述  : ^SETTIME设置命令输入参数的检查函数
 输入参数  : AT_MTA_MODEM_TIME_STRU *pstAtMtaModemTime
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2016年6月12日
    作    者   : LWX331495
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 AT_TimeParaYTDCheck(AT_MTA_MODEM_TIME_STRU *pstAtMtaModemTime)
{
    VOS_UINT8                           aucBuffer[AT_GET_MODEM_TIME_BUFF_LEN];

    /* 参数个数或者VER长度不正确 */
    if (AT_MODEM_YTD_LEN != gastAtParaList[0].usParaLen)
    {
       AT_ERR_LOG("AT_TimeParaYTDCheck: length of YTD parameter is error.");
       return VOS_ERR;
    }

    /* 按照格式 YYYY/MM/DD 解析年月日，并判断格式、范围 */
    if ((gastAtParaList[0].aucPara[4] != '/')
     || (gastAtParaList[0].aucPara[7] != '/'))
    {
        AT_ERR_LOG("AT_TimeParaYTDCheck: The date formats parameter is error.");
        return VOS_ERR;
    }

    TAF_MEM_SET_S(aucBuffer, (VOS_SIZE_T)sizeof(aucBuffer), 0x00, (VOS_SIZE_T)sizeof(aucBuffer));
    TAF_MEM_CPY_S(aucBuffer, (VOS_SIZE_T)sizeof(aucBuffer), gastAtParaList[0].aucPara, AT_MODEM_YEAR_LEN);
    pstAtMtaModemTime->lYear = (VOS_INT32)AT_AtoI(aucBuffer);

    if ((pstAtMtaModemTime->lYear > AT_MODEM_YEAR_MAX)
     || (pstAtMtaModemTime->lYear < AT_MODEM_YEAR_MIN))
    {
        AT_ERR_LOG("AT_TimeParaYTDCheck: The parameter of year is out of range");
        return VOS_ERR;
    }

    TAF_MEM_SET_S(aucBuffer, (VOS_SIZE_T)sizeof(aucBuffer), 0x00, (VOS_SIZE_T)sizeof(aucBuffer));
    TAF_MEM_CPY_S(aucBuffer, (VOS_SIZE_T)sizeof(aucBuffer), &gastAtParaList[0].aucPara[5], AT_MODEM_MONTH_LEN);
    pstAtMtaModemTime->lMonth = (VOS_INT32)AT_AtoI(aucBuffer);

    if ((pstAtMtaModemTime->lMonth > AT_MODEM_MONTH_MAX)
     || (pstAtMtaModemTime->lMonth < AT_MODEM_MONTH_MIN))
    {
        AT_ERR_LOG("AT_TimeParaYTDCheck: The parameter of month is out of range");
        return VOS_ERR;
    }

    TAF_MEM_SET_S(aucBuffer, (VOS_SIZE_T)sizeof(aucBuffer), 0x00, (VOS_SIZE_T)sizeof(aucBuffer));
    TAF_MEM_CPY_S(aucBuffer, (VOS_SIZE_T)sizeof(aucBuffer), &gastAtParaList[0].aucPara[8], AT_MODEM_DATE_LEN);
    pstAtMtaModemTime->lDay = (VOS_INT32)AT_AtoI(aucBuffer);

    if ((pstAtMtaModemTime->lDay > AT_MODEM_DAY_MAX)
     || (pstAtMtaModemTime->lDay < AT_MODEM_DAY_MIN))
    {
        AT_ERR_LOG("AT_TimeParaYTDCheck: The parameter of day is out of range");
        return VOS_ERR;
    }

    return VOS_OK;
}

/*****************************************************************************
 函 数 名  : AT_TimeParaTimeCheck
 功能描述  : ^SETTIME设置命令输入参数的检查函数
 输入参数  : AT_MTA_MODEM_TIME_STRU *pstAtMtaModemTime
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2016年6月12日
    作    者   : LWX331495
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 AT_TimeParaTimeCheck(AT_MTA_MODEM_TIME_STRU *pstAtMtaModemTime)
{
    VOS_UINT8                           aucBuffer[AT_GET_MODEM_TIME_BUFF_LEN];

    if (AT_MODEM_TIME_LEN != gastAtParaList[1].usParaLen)
    {
       AT_ERR_LOG("AT_TimeParaTimeCheck: length of time parameter is error.");
       return VOS_ERR;
    }

    /* 按照格式 HH:MM:SS 解析时间，并判断格式、范围 */
    if ((gastAtParaList[1].aucPara[2] != ':')
     || (gastAtParaList[1].aucPara[5] != ':'))
    {
        AT_ERR_LOG("AT_TimeParaTimeCheck: The time formats parameter is error.");
        return VOS_ERR;
    }

    TAF_MEM_SET_S(aucBuffer, (VOS_SIZE_T)sizeof(aucBuffer), 0x00, (VOS_SIZE_T)sizeof(aucBuffer));
    TAF_MEM_CPY_S(aucBuffer, (VOS_SIZE_T)sizeof(aucBuffer), gastAtParaList[1].aucPara, AT_MODEM_HOUR_LEN);
    pstAtMtaModemTime->lHour = (VOS_INT32)AT_AtoI(aucBuffer);

    if ((pstAtMtaModemTime->lHour > AT_MODEM_HOUR_MAX)
     || (pstAtMtaModemTime->lHour < AT_MODEM_HOUR_MIN))
    {
        AT_ERR_LOG("AT_TimeParaTimeCheck: The parameter of hour is out of range");
        return VOS_ERR;
    }

    TAF_MEM_SET_S(aucBuffer, (VOS_SIZE_T)sizeof(aucBuffer), 0x00, (VOS_SIZE_T)sizeof(aucBuffer));
    TAF_MEM_CPY_S(aucBuffer, (VOS_SIZE_T)sizeof(aucBuffer), &gastAtParaList[1].aucPara[3], AT_MODEM_MIN_LEN);
    pstAtMtaModemTime->lMin = (VOS_INT32)AT_AtoI(aucBuffer);

    if ((pstAtMtaModemTime->lMin > AT_MODEM_MIN_MAX)
     || (pstAtMtaModemTime->lMin < AT_MODEM_MIN_MIN))
    {
        AT_ERR_LOG("AT_TimeParaTimeCheck: The parameter of min is out of range");
        return VOS_ERR;
    }

    TAF_MEM_SET_S(aucBuffer, (VOS_SIZE_T)sizeof(aucBuffer), 0x00, (VOS_SIZE_T)sizeof(aucBuffer));
    TAF_MEM_CPY_S(aucBuffer, (VOS_SIZE_T)sizeof(aucBuffer), &gastAtParaList[1].aucPara[6], AT_MODEM_SEC_LEN);
    pstAtMtaModemTime->lSec = (VOS_INT32)AT_AtoI(aucBuffer);

    if ((pstAtMtaModemTime->lSec > AT_MODEM_SEC_MAX)
     || (pstAtMtaModemTime->lSec < AT_MODEM_SEC_MIN))
    {
        AT_ERR_LOG("AT_TimeParaTimeCheck: The parameter of second is out of range");
        return VOS_ERR;
    }

    return VOS_OK;
}

/*****************************************************************************
 函 数 名  : AT_TimeParaZoneCheck
 功能描述  : ^SETTIME设置命令输入参数的检查函数
 输入参数  : AT_MTA_MODEM_TIME_STRU *pstAtMtaModemTime
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2016年6月12日
    作    者   : LWX331495
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 AT_TimeParaZoneCheck(AT_MTA_MODEM_TIME_STRU *pstAtMtaModemTime)
{
    VOS_UINT8                           aucBuffer[AT_GET_MODEM_TIME_BUFF_LEN];

    if (0 == gastAtParaList[2].usParaLen)
    {
        AT_ERR_LOG("AT_TimeParaZoneCheck: length of zone parameter is zero.");
        return VOS_ERR;
    }

    TAF_MEM_SET_S(aucBuffer, (VOS_SIZE_T)sizeof(aucBuffer), 0x00, (VOS_SIZE_T)sizeof(aucBuffer));
    TAF_MEM_CPY_S(aucBuffer, (VOS_SIZE_T)sizeof(aucBuffer), gastAtParaList[2].aucPara, gastAtParaList[2].usParaLen);

    /* 时区范围是[-12, 12] */
    if (VOS_ERR == AT_AtoInt(aucBuffer, &pstAtMtaModemTime->lZone))
    {
        return VOS_ERR;
    }

    if ((pstAtMtaModemTime->lZone > AT_MODEM_ZONE_MAX)
    ||  (pstAtMtaModemTime->lZone < AT_MODEM_ZONE_MIN))
    {
        AT_ERR_LOG("AT_TimeParaZoneCheck: The parameter of zone is out of range.");
        return VOS_ERR;
    }

    return VOS_OK;
}

/*****************************************************************************
 函 数 名  : AT_SetModemTimePara
 功能描述  : ^SETTIME设置命令处理函数
 输入参数  : VOS_UINT8 ucIndex
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2016年6月12日
    作    者   : LWX331495
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 AT_SetModemTimePara(VOS_UINT8 ucIndex)
{
    AT_MTA_MODEM_TIME_STRU              stAtMtaModemTime;
    VOS_UINT32                          ulRst;

    /* 参数检查 */
    if ( AT_CMD_OPT_SET_PARA_CMD != g_stATParseCmd.ucCmdOptType )
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 参数数目检查 */
    if (gucAtParaIndex != 3)
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 参数格式检查 */
    TAF_MEM_SET_S(&stAtMtaModemTime, (VOS_SIZE_T)sizeof(stAtMtaModemTime), 0x00, (VOS_SIZE_T)sizeof(stAtMtaModemTime));

    /* 检查年月日 */
    if (VOS_ERR == AT_TimeParaYTDCheck(&stAtMtaModemTime))
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 检查时间*/
    if (VOS_ERR == AT_TimeParaTimeCheck(&stAtMtaModemTime))
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 检查时区 */
    if (VOS_ERR == AT_TimeParaZoneCheck(&stAtMtaModemTime))
    {
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 发送消息 ID_AT_MTA_MODEM_TIME_SET_REQ 给MTA处理，该消息带参数 stAtMtaModemTime */
    ulRst = AT_FillAndSndAppReqMsg(gastAtClientTab[ucIndex].usClientId,
                                   0,
                                   ID_AT_MTA_MODEM_TIME_SET_REQ,
                                   (VOS_VOID *)&stAtMtaModemTime,
                                   (VOS_SIZE_T)sizeof(stAtMtaModemTime),
                                   I0_UEPS_PID_MTA);

    if (TAF_SUCCESS == ulRst)
    {
        gastAtClientTab[ucIndex].CmdCurrentOpt = AT_CMD_MODEM_TIME_SET;
        return AT_WAIT_ASYNC_RETURN;
    }
    else
    {
        AT_WARN_LOG("AT_SetModemTimePara: send ReqMsg fail");
        return AT_ERROR;
    }
}

/*****************************************************************************
 函 数 名  : AT_SetRxTestModePara
 功能描述  : ^RXTESTMODE
 输入参数  : ucIndex - 端口索引
 输出参数  : 无
 返 回 值  : AT_XXX
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2016年07月07日
    作    者   : l00373346
    修改内容   : 新生成函数
*****************************************************************************/
VOS_UINT32 AT_SetRxTestModePara(VOS_UINT8 ucIndex)
{
    AT_MTA_SET_RXTESTMODE_REQ_STRU      stRxTestModeCfg;
    VOS_UINT32                          ulRst;

    TAF_MEM_SET_S(&stRxTestModeCfg, (VOS_SIZE_T)sizeof(stRxTestModeCfg), 0x00, (VOS_SIZE_T)sizeof(AT_MTA_SET_RXTESTMODE_REQ_STRU));

    /* 参数检查 */
    if ( AT_CMD_OPT_SET_PARA_CMD != g_stATParseCmd.ucCmdOptType )
    {
        AT_WARN_LOG("AT_SetRxTestModePara : Current Option is not AT_CMD_OPT_SET_PARA_CMD.");
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 参数个数不正确 */
    if ( 1 != gucAtParaIndex )
    {
        AT_WARN_LOG("AT_SetRxTestModePara : The number of input parameters is error.");
        return AT_CME_INCORRECT_PARAMETERS;
    }

    /* 参数为空 */
    if( 0 == gastAtParaList[0].usParaLen )
    {
        AT_WARN_LOG("AT_SetRxTestModePara : The number of input parameters is zero.");
        return AT_CME_INCORRECT_PARAMETERS;
    }

    stRxTestModeCfg.enCfg  = (VOS_UINT8)gastAtParaList[0].ulParaValue;

    /* 发送跨核消息到C核, 设置侦听测试模式 */
    ulRst = AT_FillAndSndAppReqMsg(gastAtClientTab[ucIndex].usClientId,
                                   gastAtClientTab[ucIndex].opId,
                                   ID_AT_MTA_RX_TEST_MODE_SET_REQ,
                                   &stRxTestModeCfg,
                                   (VOS_SIZE_T)sizeof(stRxTestModeCfg),
                                   I0_UEPS_PID_MTA);

    if (TAF_SUCCESS != ulRst)
    {
        AT_WARN_LOG("AT_SetRxTestModePara: AT_FillAndSndAppReqMsg fail.");
        return AT_ERROR;
    }

    /* 设置AT模块实体的状态为等待异步返回 */
    gastAtClientTab[ucIndex].CmdCurrentOpt = AT_CMD_RXTESTMODE_SET;

    return AT_WAIT_ASYNC_RETURN;
}

/*****************************************************************************
 函 数 名  : AT_RcvMtaSetRxTestModeCnf
 功能描述  : AT模块收到MTA回复的设置侦听测试模式消息的处理函数
 输入参数  : VOS_VOID *pMsg - 收到MTA的CNF消息
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2016年07月07日
    作    者   : l00373346
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 AT_RcvMtaSetRxTestModeCnf(VOS_VOID *pMsg)
{
    AT_MTA_MSG_STRU                    *pstRcvMsg;
    MTA_AT_SET_RXTESTMODE_CNF_STRU     *pstSetCnf;
    VOS_UINT8                           ucIndex;
    VOS_UINT32                          ulResult;

    /* 初始化 */
    pstRcvMsg    = (AT_MTA_MSG_STRU *)pMsg;
    pstSetCnf    = (MTA_AT_SET_RXTESTMODE_CNF_STRU *)pstRcvMsg->aucContent;
    ucIndex      = 0;
    ulResult     = AT_ERROR;

    /* 通过clientid获取index */
    if (AT_FAILURE == At_ClientIdToUserId(pstRcvMsg->stAppCtrl.usClientId, &ucIndex))
    {
        AT_WARN_LOG("AT_RcvMtaSetRxTestModeCnf : WARNING:AT INDEX NOT FOUND!");
        return VOS_ERR;
    }

    if (AT_IS_BROADCAST_CLIENT_INDEX(ucIndex))
    {
        AT_WARN_LOG("AT_RcvMtaSetRxTestModeCnf : AT_BROADCAST_INDEX.");
        return VOS_ERR;
    }

    /* 当前AT是否在等待该命令返回 */
    if (AT_CMD_RXTESTMODE_SET != gastAtClientTab[ucIndex].CmdCurrentOpt)
    {
        AT_WARN_LOG("AT_RcvMtaSetRxTestModeCnf : Current Option is not AT_CMD_RXTESTMODE_SET.");
        return VOS_ERR;
    }

    /* 复位AT状态 */
    AT_STOP_TIMER_CMD_READY(ucIndex);

    /* 格式化命令返回 */
    gstAtSendData.usBufLen = 0;

    if (MTA_AT_RESULT_NO_ERROR == pstSetCnf->enResult)
    {
        ulResult = AT_OK;
    }

    At_FormatResultData(ucIndex, ulResult);
    return VOS_OK;
}


