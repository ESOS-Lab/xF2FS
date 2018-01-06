

/******************************************************************************

                  ��Ȩ���� (C), 2001-2012, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : ScCommCtx.c
  �� �� ��   : ����
  ��    ��   : d00212987
  ��������   : 2015��08��10��
  ����޸�   :
  ��������   : SC CONTEXT�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2015��08��10��
    ��    ��   : d00212987
    �޸�����   : �����ļ�

******************************************************************************/

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include "ScCommCtx.h"


#define THIS_FILE_ID PS_FILE_ID_SC_CONTEXT_C

/*****************************************************************************
  2 ȫ�ֱ�������
*****************************************************************************/

/*****************************************************************************
 ȫ�ֱ�����    : g_stScCtx
 ȫ�ֱ���˵��  : SC����������
 1.��    ��   : 2012��04��19��
   ��    ��   : w00184875
   �޸�����   : �½�

  2.��    ��   : 2016��05��07��
    ��    ��   : d00212987
    �޸�����   : ���������㷨������Ŀ�޸�
*****************************************************************************/
static SC_CONTEXT_STRU                  g_stScCtx = {
    /* SC_COMM_GLOBAL_VAR */
    {
        {
            "/modem_secure/SC/Pers/CKFile.bin",
            "/modem_secure/SC/Pers/DKFile.bin",
            "/modem_secure/SC/Pers/AKFile.bin",
            "/modem_secure/SC/Pers/PIFile.bin",
            "/modem_secure/SC/Pers/ImeiFile_I0.bin",
            "/modem_secure/SC/Pers/ImeiFile_I1.bin",
            "/modem_secure/SC/Pers/ImeiFile_I2.bin",
        },
        {
            "/modem_secure/SC/Pers/CKSign.hash",
            "/modem_secure/SC/Pers/DKSign.hash",
            "/modem_secure/SC/Pers/AKSign.hash",
            "/modem_secure/SC/Pers/PISign.hash",
            "/modem_secure/SC/Pers/ImeiFile_I0.hash",
            "/modem_secure/SC/Pers/ImeiFile_I1.hash",
            "/modem_secure/SC/Pers/ImeiFile_I2.hash",
        }
    },
    /* SC_FAC_GLOBAL_VAR */
    {
        SC_AUTH_STATUS_UNDO,
        "",
        VOS_FALSE,
        ""
    },
    /* SC_APSEC_GLOBAL_VAR */
    {
        0,
        {0, 0},
        0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        SC_SECURITY_FILE_STATE_IDEL,
        {
            {0,VOS_NULL_PTR},{0,VOS_NULL_PTR},{0,VOS_NULL_PTR},{0,VOS_NULL_PTR},{0,VOS_NULL_PTR},
            {0,VOS_NULL_PTR},{0,VOS_NULL_PTR},{0,VOS_NULL_PTR},{0,VOS_NULL_PTR},{0,VOS_NULL_PTR}
        },
        "/modem_secure/SC/Apsec/SecureDataA.bin",
        "/modem_secure/SC/Apsec/SecureDataC.bin"
    }
};

/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/

/*****************************************************************************
 �� �� ��  : SC_CTX_GetScCtxAddr
 ��������  : ��ȡ��ǰSC��CTX
 �������  : ��
 �������  : ��
 �� �� ֵ  : ���ص�ǰSC��CTX��ַ
 ���ú���  :
 ��������  :

 �޸���ʷ      :
 1.��    ��   : 2012��04��20��
   ��    ��   : w00184875
   �޸�����   : �����ɺ���

*****************************************************************************/
SC_CONTEXT_STRU* SC_CTX_GetScCtxAddr(VOS_VOID)
{
    return &(g_stScCtx);
}

/*****************************************************************************
 �� �� ��  : SC_CTX_GetCommGlobalVarAddr
 ��������  : ��ȡSC����������ȫ�ֱ�����ַ
 �������  : ��
 �������  : ��
 �� �� ֵ  : SC����������ȫ�ֱ���������ָ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��04��19��
    ��    ��   : w00184875
    �޸�����   : �����ɺ���
*****************************************************************************/
SC_COMM_GLOBAL_STRU*  SC_CTX_GetCommGlobalVarAddr( VOS_VOID )
{
    return &g_stScCtx.stScCommGlobalVar;
}


