/******************************************************************************

  Copyright(C)2008,Hisilicon Co. LTD.

******************************************************************************
File Name       : ChrcommConvert.h
Description     : �ṹ��������Ϣͷ�ļ�
History         :
   1.l00353313     2016-6-16     Draft Enact

******************************************************************************/

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#include  "product_config.h"
#include  "vos.h"
#include  "omerrorlog.h"

#if (VOS_OS_VER != VOS_WIN32)
#pragma pack(1)
#else
#pragma pack(push, 1)
#endif


/* xml���������� */
enum FIELD_TYPE_ENUM
{
    FIELD_TYPE_INT = 1,     /* �з������Σ�����char, short, int, long */
    FIELD_TYPE_UINT,    /* �޷������Σ�����unsigned char, unsigned short, unsinged int, unsigned long */
    FIELD_TYPE_VARCHAR, /* �ַ�����char[] */
    FIELD_TYPE_ENUM,    /* ö�� */
    FIELD_TYPE_ARRAY,   /* �ֽ����� byte[] */
    FIELD_TYPE_DATETIME,    /* ����ʱ�� */
    FIELD_TYPE_CLASS,       /* �ṹ�� */
    FIELD_TYPE_CLASSARRAY,  /* �ṹ������ */
    FIELD_TYPE_ENUMARRAY,   /* ö������ */
    FIELD_TYPE_MASK = 0xFF,
};

/* �ֶ����� */
typedef struct
{
    VOS_UINT16          FieldType;
    VOS_UINT16          FieldLength;
} FIELD_DESC;

/* �ṹ��������Ϣ�ṹ�� */
typedef struct
{
    VOS_UINT16          EventID;
    VOS_UINT16          StructID;
    VOS_UINT16          StructSize;
    VOS_UINT16          FieldCount;
    FIELD_DESC          Fields[1];
} STRUCT_DESC;

/* �ṹ��������Ϣ */
extern const VOS_VOID * const g_FaultStructDesc[];
/* �ṹ����� */
extern const VOS_UINT32 g_FaultStructDescCount;

extern const VOS_VOID * const g_EventStructDesc[];
extern const VOS_UINT32 g_EventStructDescCount;

/* ֱͨ�½ӿڶ��壬�����¼���XML�ṹ�ı�ʱ������� */
extern   VOS_UINT8  aucProductName[20];
extern   VOS_UINT8  ucLogVersion;

/*****************************************************************************
 �� �� ��  : Modem_ErrLog_FillModemHeader
 ��������  : ���ֱͨ�¼��ӿ�MODEM_ERR_LOG_HEADER_STRU
 �������  : pstmodemHeader      ֱͨ�¼��ӿ�ModemHeader
             usSubEventID        ���¼��¼�ID
             ucSubEventCause     ���¼�ԭ��ֵ
             enModemHidsLog      ���¼��Ƿ�ץȡ����HiDS��־

 �������  :

 �� �� ֵ  :
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��07��15��
    ��    ��   : q00312157
    �޸�����   : Modemֱͨ��Ŀ����
*****************************************************************************/
extern VOS_VOID Modem_ErrLog_FillModemHeader(MODEM_ERR_LOG_HEADER_STRU *pstmodemHeader, VOS_UINT16 usSubEventID,
                                              VOS_UINT8 ucSubEventCause, VOS_BOOL enModemHidsLog);


/*****************************************************************************
 �� �� ��  : Modem_ErrLog_ConvertEvent
 ��������  : �ѹ����¼��е����¼��ṹ��ת��Ϊ�ֽ�����
             ����ǰ��ʹ��Modem_ErrLog_CalcEventSize����ת������ֽ������ȣ�������ǰ���仺����
             ת������ֽ�����Ҫ������¼����������¼�һ����֮�󣬲ſ���Ϊ��AP�Ĳ���
 �������  : usEventID     ���¼�ID��ALARMID��
             pBuffer       �ֽ���������
             ulBufferSize  �ֽ�����������С
             pStruct       ���¼��ṹ��ָ��
             ulStructSize  �ṹ�����ݳ���

 �������  : pBufferLen    �ֽ�������

 �� �� ֵ  : VOS_OK��success  ������fail
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��06��15��
    ��    ��   : l00353313
    �޸�����   : Modemֱͨ��Ŀ����
*****************************************************************************/
extern VOS_INT32 Modem_ErrLog_ConvertEvent(VOS_UINT16 usEventID, VOS_UINT8 *pBuffer, VOS_UINT32 ulBufferSize,
    VOS_UINT32 *pBufferLen, const VOS_UINT8 *pStruct, VOS_UINT32 ulStructSize);

/*****************************************************************************
 �� �� ��  : Modem_ErrLog_CalcEventSize
 ��������  : ��ȡ�����¼������¼��ֽ������ȡ�
             �����ڵ����ֽ���ת������Modem_ErrLog_ConvertEvent֮ǰ��ǰ��������Ļ�����
 �������  : usEventID     ���¼�ID��ALARMID��

 �������  :

 �� �� ֵ  : 0��ʧ��  �������ֽ�������
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��06��15��
    ��    ��   : l00353313
    �޸�����   : Modemֱͨ��Ŀ����
*****************************************************************************/
extern VOS_INT32 Modem_ErrLog_CalcEventSize(VOS_UINT16 usEventID);

/*****************************************************************************
 �� �� ��  : Modem_ErrLog_ConvertAbsoluteEvent
 ��������  : �ѷǹ����¼��е����¼��ṹ��ת��Ϊ�ֽ�����
             ����ǰ��ʹ��Modem_ErrLog_CalcAbsoluteEventSize����ת������ֽ������ȣ�������ǰ���仺����
             ת������ֽ�����ֱ����Ϊ��AP�Ĳ���
 �������  : usEventID     ���¼�ID��ALARMID��
             pBuffer       �ֽ���������
             ulBufferSize  �ֽ�����������С
             pStruct       ���¼��ṹ��ָ��
             ulStructSize  �ṹ�����ݳ���

 �������  : pBufferLen    �ֽ�������

 �� �� ֵ  : VOS_OK��success  ������fail
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��06��15��
    ��    ��   : l00353313
    �޸�����   : Modemֱͨ��Ŀ����
*****************************************************************************/
extern VOS_INT32 Modem_ErrLog_ConvertAbsoluteEvent(VOS_UINT16 usEventID, VOS_UINT8 *pBuffer, VOS_UINT32 ulBufferSize,
    VOS_UINT32 *pBufferLen, const VOS_UINT8 *pStruct, VOS_UINT32 ulStructSize);

/*****************************************************************************
 �� �� ��  : Modem_ErrLog_CalcAbsoluteEventSize
 ��������  : ��ȡ�ǹ����¼��ֽ�������
             �����ڵ����ֽ���ת������Modem_ErrLog_ConvertEvent֮ǰ��ǰ��������Ļ�����
 �������  : usEventID     ���¼�ID��ALARMID��

 �������  :

 �� �� ֵ  : 0��ʧ��  �������ֽ�������
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��06��15��
    ��    ��   : l00353313
    �޸�����   : Modemֱͨ��Ŀ����
*****************************************************************************/
extern VOS_INT32 Modem_ErrLog_CalcAbsoluteEventSize(VOS_UINT16 usEventID);

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

