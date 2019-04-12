

/******************************************************************************

                  ��Ȩ���� (C), 2001-2012, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : ScCtx.h
  �� �� ��   : ����
  ��    ��   : w00184875
  ��������   : 2012��04��19��
  ����޸�   :
  ��������   : ScCtx.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2012��04��19��
    ��    ��   : w00184875
    �޸�����   : �����ļ�

******************************************************************************/

#ifndef __SCCOMMCTX_H__
#define __SCCOMMCTX_H__

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "vos.h"
#include "omprivate.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define   SC_FILE_EXIST_MAGIC       (0x37ab65cd)                                /* SC�����ļ����ڱ�� */

#define   SC_FILE_PACKET_MAGIC      (0xdeacb589)                                /* SC���������ڱ�� */

#define   SC_RAND_DATA_LEN          (4)                                         /* ��������ֽ��� */

#define   SC_SEC_AT_KEY_LEN         (16)                                        /* ��ȫAT key�ĳ��� */

#define   SC_SECURITY_ITEM_NUM      (16)                                        /* ��ȫ�洢����� */

#define   SC_FILE_PATH_LEN          (128)                                       /* SC����ļ�·������ */

#define   SC_HASH_LEN               (32)                                        /* HASH���������� */

#define   SC_LOG_MAX_LEN            (512)

#define   SC_LOG_FILE_MAX_SIZE      (SC_LOG_MAX_LEN * 100 * 2)                  /* the max size of log file. */

#define   SC_FILE_SEEK_END          (2)

#define   SC_FILE_SEEK_SET          (0)

#define   SC_FILE_EXIST_OK          (0)

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/
/*****************************************************************************
 ö����    : SC_SECRET_FILE_TYPE_ENUM
 �ṹ˵��  : ָ����ȫ�ļ�������

  1.��    ��   : 2012��04��07��
    ��    ��   : w00184875
    �޸�����   : AP-Modem����������Ŀ����ö��

*****************************************************************************/
enum SC_SECRET_FILE_TYPE_ENUM
{
    SC_SECRET_FILE_TYPE_CK              = 0x00,             /* CK-FILE */
    SC_SECRET_FILE_TYPE_DK              = 0x01,             /* DK-FILE */
    SC_SECRET_FILE_TYPE_AK              = 0x02,             /* AK-FILE */
    SC_SECRET_FILE_TYPE_PI              = 0x03,             /* PI-FILE */
#if  ( FEATURE_MULTI_MODEM == FEATURE_ON )
#if (3 == MULTI_MODEM_NUMBER)
    SC_SECRET_FILE_TYPE_IMEI_I0         = 0x04,             /* IMEI-FILE ��0 */
    SC_SECRET_FILE_TYPE_IMEI_I1         = 0x05,             /* IMEI-FILE ��1 */
    SC_SECRET_FILE_TYPE_IMEI_I2         = 0x06,             /* IMEI-FILE ��2 */
#else
    SC_SECRET_FILE_TYPE_IMEI_I0         = 0x04,             /* IMEI-FILE ��0 */
    SC_SECRET_FILE_TYPE_IMEI_I1         = 0x05,             /* IMEI-FILE ��1 */
#endif
#else
    SC_SECRET_FILE_TYPE_IMEI_I0         = 0x04,             /* IMEI-FILE ��0 */
#endif

    SC_SECRET_FILE_TYPE_BUTT
};
typedef VOS_UINT8 SC_SECRET_FILE_TYPE_ENUM_UINT8;

/*****************************************************************************
 ö����    : SC_AUTH_STATUS_ENUM
 ö��˵��  : ָ����Ȩ״̬

  1.��    ��   : 2012��04��07��
    ��    ��   : w00184875
    �޸�����   : AP-Modem����������Ŀ����ö��
*****************************************************************************/
enum SC_AUTH_STATUS_ENUM
{
    SC_AUTH_STATUS_UNDO          = 0x00,             /* δ���м�Ȩ */
    SC_AUTH_STATUS_DONE          = 0x01,             /* �Ѿ���Ȩ */
    SC_AUTH_STATUS_BUTT
};
typedef VOS_UINT8 SC_AUTH_STATUS_ENUM_UINT8;

/*****************************************************************************
 ö����    : SC_APSEC_FILE_STATE_INIT_ENUM
 ö��˵��  : ��ȫ�洢�ļ���ʼ��״̬

  1.��    ��   : 2012��8��27��
    ��    ��   : h59254
    �޸�����   : V7R1C50 ISDB��ȫ�洢��Ŀ����
*****************************************************************************/
enum SC_APSEC_FILE_STATE_INIT_ENUM
{
    SC_SECURITY_FILE_STATE_INIT         =   0x5A5A5A5A,     /* ��ȫ�洢�ļ���ʼ����� */
    SC_SECURITY_FILE_STATE_IDEL         =   0x5A5A55AA,     /* ��ȫ�洢�ļ���ʼ��δ��� */
    SC_SECURITY_FILE_STATE_BUTT,
};
typedef VOS_UINT32 SC_APSEC_FILE_STATE_INIT_ENUM_UINT32;

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
 �ṹ��    : SC_COMM_GLOBAL_STRU
 �ṹ˵��  : SC COMMģ������ʱȫ�ֱ���
 1.��    ��   : 2012��04��19��
   ��    ��   : w00184875
   �޸�����   : �½�

*****************************************************************************/
typedef struct
{
    VOS_CHAR                           *acSecretFileName[SC_SECRET_FILE_TYPE_BUTT];
    VOS_CHAR                           *acSignFileName[SC_SECRET_FILE_TYPE_BUTT];
}SC_COMM_GLOBAL_STRU;

/*****************************************************************************
 �ṹ��    : SC_BACKUP_EACH_FILE_INFO_STRU
 �ṹ˵��  : SCÿ�������ļ�����ϸ
 1.��    ��   : 2014��07��29��
   ��    ��   : d00212987
   �޸�����   : �½�
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulFileMagicMUM;
    VOS_UINT32                          ulFileLen;
    VOS_UINT32                          ulFileOffset;
    VOS_CHAR                            acFilePath[SC_FILE_PATH_LEN];
}SC_BACKUP_EACH_FILE_INFO_STRU;

/*****************************************************************************
 �ṹ��    : SC_BACKUP_FILE_INFO_STRU
 �ṹ˵��  : SC�����ļ�ƴ�ӳ�һ�飬ͳһˢ��FLASH
 1.��    ��   : 2014��06��10��
   ��    ��   : d00212987
   �޸�����   : �½�
*****************************************************************************/
typedef struct
{
    VOS_UINT32                         ulBackMagicMUM;
    VOS_UINT32                         ulTotaleSize;
    SC_BACKUP_EACH_FILE_INFO_STRU      astSCEachFileInfo[SC_SECRET_FILE_TYPE_BUTT*2];
    VOS_CHAR                           aucFileData[4];
}SC_BACKUP_FILE_INFO_STRU;

/*****************************************************************************
�ṹ��    : SC_FAC_GLOBAL_STRU
�ṹ˵��  : �漰���������̵�ȫ�ֱ���

  1.��    ��   : 2012��04��16��
    ��    ��   : w00184875
    �޸�����   : ��ʼ����
*****************************************************************************/
typedef struct
{
    SC_AUTH_STATUS_ENUM_UINT8               enScFacAuthStatus;
    VOS_UINT8                               aucScFacRandData[SC_RAND_DATA_LEN];
    /* ������߼�Ȩ��־ VOS_FALSE: δ������߼�Ȩ; VOS_TRUE: �ѷ�����߼�Ȩ */
    VOS_UINT8                               ucIdentifyStartFlg;
    VOS_UINT8                               aucReserved[2];         /* �����ֽڣ��������ֽڶ��� */
}SC_FAC_GLOBAL_STRU;

/*****************************************************************************
 �ṹ��    : SC_APSEC_ITEM_STRU
 ö��˵��  : ��ȫ�洢�����ڴ��б����ȫ�ֱ���

  1.��    ��   : 2012��8��27��
    ��    ��   : h59254
    �޸�����   : V7R1C50 ISDB��ȫ�洢��Ŀ����
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulItemLen;
    VOS_CHAR                           *pucContent;
    VOS_UINT8                           aucHash[SC_HASH_LEN];
}SC_APSEC_ITEM_STRU;

/*****************************************************************************
 �ṹ��    : SC_APSEC_GLOBAL_STRU
 ö��˵��  : ��ȫ�洢�����ڴ��б����ȫ�ֱ���

  1.��    ��   : 2012��8��27��
    ��    ��   : h59254
    �޸�����   : V7R1C50 ISDB��ȫ�洢��Ŀ����
*****************************************************************************/
typedef struct
{
    VOS_UINT8                                               ucSeqID;
    VOS_UINT8                                               aucReserved[2];
    VOS_UINT8                                               ucSecATkeyFlg;
    VOS_UINT8                                               aucSecATkey[SC_SEC_AT_KEY_LEN];
    SC_APSEC_FILE_STATE_INIT_ENUM_UINT32                    ulInitState;
    SC_APSEC_ITEM_STRU                                      astApSecItem[SC_SECURITY_ITEM_NUM];
    VOS_CHAR                                               *pApSecFileA;
    VOS_CHAR                                               *pApSecFileC;
}SC_APSEC_GLOBAL_STRU;

/*****************************************************************************
 �ṹ��    : SC_CONTEXT_STRU
 �ṹ˵��  : SC ģ������������
 1.��    ��   : 2012��04��19��
   ��    ��   : w00184875
   �޸�����   : �½�

*****************************************************************************/
typedef struct
{
    SC_COMM_GLOBAL_STRU                 stScCommGlobalVar;
    SC_FAC_GLOBAL_STRU                  stScFacGlobalVar;
    SC_APSEC_GLOBAL_STRU                stScApSecGlobalVar;
}SC_CONTEXT_STRU;

/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/

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
extern SC_COMM_GLOBAL_STRU*  SC_CTX_GetCommGlobalVarAddr( VOS_VOID );

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
extern SC_CONTEXT_STRU* SC_CTX_GetScCtxAddr(VOS_VOID);

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

#endif
