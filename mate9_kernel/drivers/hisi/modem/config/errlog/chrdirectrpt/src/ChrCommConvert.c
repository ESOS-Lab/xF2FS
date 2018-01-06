/******************************************************************************

  Copyright(C)2008,Hisilicon Co. LTD.

******************************************************************************
File Name       : ChrCommConvert.c
Description     : ����CHRֱͨ�¼��ṹ��ת�������ļ�
History         :
   1.q00312157      2016-5-25     Draft Enact

******************************************************************************/

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include  "ChrCommConvert.h"

/*
#define    THIS_FILE_ID            PS_FILE_ID_CHRCOMMCONVERT_C
*/

/*****************************************************************************
  2 ȫ�ֱ�������
*****************************************************************************/
/* ֱͨ�½ӿڶ��壬�����¼���XML�ṹ�ı�ʱ������� */
VOS_UINT8  aucProductName[20] = {"COMMON#101"};
VOS_UINT8  ucLogVersion       = 7;


/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/

/*****************************************************************************
 �� �� ��  : Modem_ErrLog_FillModemHeader
 ��������  : ���ֱͨ�¼��ӿ�MODEM_ERR_LOG_HEADER_STRU
 �������  : pstmodemHeader      ֱͨ�¼��ӿ�ModemHeader
             usSubEventID        ���¼��¼�ID������Ӧ�ķǹ������¼��¼�ID�������¼�Ĭ����0
             ucSubEventCause     ���¼�ԭ��ֵ��APĿǰδʹ�ã�Ĭ��Ϊ0
             enModemHidsLog      ���¼��Ƿ�ץȡ����HiDS��־��Ĭ�ϲ�ץȡ�������¼���Ҫ��λ�����

 �������  :

 �� �� ֵ  :
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��07��15��
    ��    ��   : q00312157
    �޸�����   : Modemֱͨ��Ŀ����
*****************************************************************************/
VOS_VOID Modem_ErrLog_FillModemHeader(MODEM_ERR_LOG_HEADER_STRU *pstmodemHeader, VOS_UINT16 usSubEventID,
                                              VOS_UINT8 ucSubEventCause, VOS_BOOL enModemHidsLog)
{

    if (VOS_NULL_PTR == pstmodemHeader)
    {
        return;
    }
    memcpy_s(pstmodemHeader->aucProductName, 20, aucProductName, 20);

    pstmodemHeader->usSubEventID    = usSubEventID;
    pstmodemHeader->enModemHidsLog  = enModemHidsLog;
    pstmodemHeader->ucLogVersion    = ucLogVersion;
    pstmodemHeader->ucSubEventCause = ucSubEventCause;
}


/*****************************************************************************
 �� �� ��  : Modem_ErrLog_ConvertStruct
 ��������  : �ѽṹ��ת��Ϊ�ֽ���
 �������  : pBuffer        �ֽ���������
             ulBufferSize     �ֽ�����������С
             pStruct        �ṹ��ָ��
             ulStructSize    �ṹ�����ݳ���
             pStructDesc    �ṹ��������Ϣ

 �������  : pBufferLen        �ֽ�������

 �� �� ֵ  : VOS_OK��success  ������fail
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��06��15��
    ��    ��   : l00353313
    �޸�����   : Modemֱͨ��Ŀ����
*****************************************************************************/
VOS_INT32 Modem_ErrLog_ConvertStruct(VOS_UINT8 *pBuffer, VOS_UINT32 ulBufferSize,
    VOS_UINT32 *pBufferLen, const VOS_UINT8 *pStruct, VOS_UINT32 ulStructSize,
    const STRUCT_DESC *pStructDesc);

/*****************************************************************************
 �� �� ��  : GetStructDescByEventID
 ��������  : ��ȡ�¼��ṹ��������Ϣ
 �������  : usEventID        �¼�ID

 �������  :

 �� �� ֵ  : const STRUCT_DESC *��success  VOS_NULL_PTR��fail
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��06��15��
    ��    ��   : l00353313
    �޸�����   : Modemֱͨ��Ŀ����
*****************************************************************************/
const STRUCT_DESC * GetStructDescByEventID(VOS_UINT16 usEventID)
{
    VOS_UINT32 i = 0;
    const STRUCT_DESC *pStructDesc = VOS_NULL_PTR;
    for (i = 0; i < g_FaultStructDescCount; ++i)
    {
        pStructDesc = (const STRUCT_DESC *) g_FaultStructDesc[i];
        if (VOS_NULL_PTR != pStructDesc && usEventID == pStructDesc->EventID)
        {
            return pStructDesc;
        }
    }

    return VOS_NULL_PTR;
}

/*****************************************************************************
 �� �� ��  : GetStructDescByStructID
 ��������  : ��ȡ�ṹ��������Ϣ�������¼����ӽṹ��
 �������  : usStructID        �¼����ṹ��ID

 �������  :

 �� �� ֵ  : const STRUCT_DESC *��success  VOS_NULL_PTR��fail
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��06��15��
    ��    ��   : l00353313
    �޸�����   : Modemֱͨ��Ŀ����
*****************************************************************************/
const STRUCT_DESC * GetStructDescByStructID(VOS_UINT16 usStructID)
{
    VOS_UINT32 i = 0;
    const STRUCT_DESC *pStructDesc = VOS_NULL_PTR;
    for (i = 0; i < g_FaultStructDescCount; ++i)
    {
        pStructDesc = (const STRUCT_DESC *) g_FaultStructDesc[i];
        if (VOS_NULL_PTR != pStructDesc && usStructID == pStructDesc->StructID)
        {
            return pStructDesc;
        }
    }

    return VOS_NULL_PTR;
}

/*****************************************************************************
 �� �� ��  : GetStructDescByAbsoluteEventID
 ��������  : ��ȡ�¼��ṹ��������Ϣ
 �������  : usEventID        �¼�ID

 �������  :

 �� �� ֵ  : const STRUCT_DESC *��success  VOS_NULL_PTR��fail
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��06��15��
    ��    ��   : l00353313
    �޸�����   : Modemֱͨ��Ŀ����
*****************************************************************************/
const STRUCT_DESC * GetStructDescByAbsoluteEventID(VOS_UINT16 usEventID)
{
    VOS_UINT32 i = 0;
    VOS_UINT32 j = 0;
    const STRUCT_DESC *pStructDesc = VOS_NULL_PTR;
    const FIELD_DESC *pField = VOS_NULL_PTR;
    const STRUCT_DESC *pSubStructDesc = VOS_NULL_PTR;
    for (i = 0; i < g_EventStructDescCount; ++i)
    {
        pStructDesc = (const STRUCT_DESC *) g_EventStructDesc[i];
        if (VOS_NULL_PTR != pStructDesc)
        {
            for (j = 0; j < pStructDesc->FieldCount; ++j)
            {
                pField = &pStructDesc->Fields[j];
                if (FIELD_TYPE_CLASS == pField->FieldType)
                {
                    pSubStructDesc = GetStructDescByStructID(pField->FieldLength);
                    if (VOS_NULL_PTR != pSubStructDesc && usEventID == pSubStructDesc->EventID)
                    {
                        return pStructDesc;
                    }
                }
            }
        }
    }

    return VOS_NULL_PTR;
}

/*****************************************************************************
 �� �� ��  : CopyValue
 ��������  : ���ֶ�ֵת��Ϊ�ֽ�������Ҫ���иߵ��ֽ�ת��
 �������  : pDst        �ֽ���������
             pSrc        �ֶ�ֵָ��
             ulLen       �ֶγ���

 �������  :

 �� �� ֵ  :
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��06��15��
    ��    ��   : l00353313
    �޸�����   : Modemֱͨ��Ŀ����
*****************************************************************************/
void CopyValue(VOS_UINT8 *pDst, const VOS_UINT8 *pSrc, VOS_UINT32 ulLen)
{
    VOS_UINT32 i = 0;

    if (VOS_NULL_PTR != pDst && VOS_NULL_PTR != pSrc)
    {
        for (i = 0; i < ulLen; ++i)
        {
            pDst[i] = pSrc[ulLen - i - 1];
        }
    }
}

/*****************************************************************************
 �� �� ��  : Modem_ErrLog_ConvertStructByDesc
 ��������  : �ѽṹ��ת��Ϊ�ֽ���
 �������  : pBuffer        �ֽ���������
             ulBufferSize     �ֽ�����������С
             pStruct        �ṹ��ָ��
             ulStructSize    �ṹ�����ݳ���
             pSubStructDesc        �ṹ��������Ϣ

 �������  : pBufferLen        �ֽ�������

 �� �� ֵ  : VOS_OK��success  ������fail
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��06��15��
    ��    ��   : l00353313
    �޸�����   : Modemֱͨ��Ŀ����
*****************************************************************************/
VOS_INT32 Modem_ErrLog_ConvertStructByDesc(VOS_UINT8 *pBuffer, VOS_UINT32 ulBufferSize,
                                         VOS_UINT32 *pBufferLen, const VOS_UINT8 *pStruct, VOS_UINT32 ulStructSize,
                                         const STRUCT_DESC *pSubStructDesc)
{
    VOS_INT32 ret = VOS_ERR;

    if (VOS_NULL_PTR == pSubStructDesc || 2 + ulStructSize > ulBufferSize)
    {
        return VOS_ERR;
    }

    CopyValue(pBuffer, (VOS_UINT8 *) &pSubStructDesc->StructID, 2);
    pBuffer += 2;
    ulBufferSize -= 2;

    ret = Modem_ErrLog_ConvertStruct(pBuffer, ulBufferSize, pBufferLen, pStruct, ulStructSize, pSubStructDesc);
    if (VOS_OK != ret || ulBufferSize < *pBufferLen)
    {
        return VOS_ERR;
    }

    *pBufferLen = *pBufferLen + 2;

    return VOS_OK;
}

/*****************************************************************************
 �� �� ��  : Modem_ErrLog_ConvertStructByID
 ��������  : �ѽṹ��ת��Ϊ�ֽ���
 �������  : pBuffer        �ֽ���������
             ulBufferSize     �ֽ�����������С
             pStruct        �ṹ��ָ��
             ulStructSize    �ṹ�����ݳ���
             usStructID        �ṹ��ID

 �������  : pBufferLen        �ֽ�������

 �� �� ֵ  : VOS_OK��success  ������fail
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��06��15��
    ��    ��   : l00353313
    �޸�����   : Modemֱͨ��Ŀ����
*****************************************************************************/
VOS_INT32 Modem_ErrLog_ConvertStructByID(VOS_UINT8 *pBuffer, VOS_UINT32 ulBufferSize,
    VOS_UINT32 *pBufferLen, const VOS_UINT8 *pStruct, VOS_UINT32 ulStructSize,
    VOS_UINT16 usStructID)
{
    const STRUCT_DESC *pSubStructDesc = GetStructDescByStructID(usStructID);

    return Modem_ErrLog_ConvertStructByDesc(pBuffer, ulBufferSize, pBufferLen, pStruct, ulStructSize, pSubStructDesc);
}

/*****************************************************************************
 �� �� ��  : ConvertField_ClassArray
 ��������  : �ѽṹ����ӽṹ���ֶ�ת��Ϊ�ֽ���
 �������  : p        �ֽ���������
             ulSize     �ֽ�����������С
             pStructLen    �ֶε��ֽڴ�С
             pStruct        �ṹ��ָ��
             ulStructSize    �ṹ�����ݳ���
             pField    �ṹ���ֶ�������Ϣ

 �������  : pLen        �ֽ�������

 �� �� ֵ  : VOS_OK��success  ������fail
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��06��15��
    ��    ��   : l00353313
    �޸�����   : Modemֱͨ��Ŀ����
*****************************************************************************/
VOS_INT32 ConvertField_Class(VOS_UINT8 *p, VOS_UINT32 ulSize, VOS_UINT32 *pLen, VOS_UINT32 *pStructLen,
                             const VOS_UINT8 *pStruct, VOS_UINT32 ulStructSize, const FIELD_DESC *pField)
{
    VOS_INT32 ret = VOS_ERR;
    const STRUCT_DESC *pSubStructDesc = VOS_NULL_PTR;

    if (VOS_NULL_PTR == p || VOS_NULL_PTR == pLen || VOS_NULL_PTR == pStructLen || VOS_NULL_PTR == pStruct || VOS_NULL_PTR == pField)
    {
        return VOS_ERR;
    }

    *pLen = 0;
    *pStructLen = 0;

    pSubStructDesc = GetStructDescByStructID(pField->FieldLength);

    if (VOS_NULL_PTR == pSubStructDesc)
    {
        return VOS_ERR;
    }

    ret = Modem_ErrLog_ConvertStructByDesc(p, ulSize, pLen, pStruct, ulStructSize, pSubStructDesc);
    if (VOS_OK != ret || ulSize < *pLen)
    {
        return VOS_ERR;
    }

    *pStructLen = pSubStructDesc->StructSize;
    return VOS_OK;
}

/*****************************************************************************
 �� �� ��  : ConvertField_ClassArray
 ��������  : �ѽṹ����ӽṹ�������ֶ�ת��Ϊ�ֽ���
 �������  : p        �ֽ���������
             ulSize     �ֽ�����������С
             pStructLen    �ֶε��ֽڴ�С
             pStruct        �ṹ��ָ��
             ulStructSize    �ṹ�����ݳ���
             pField    �ṹ���ֶ�������Ϣ

 �������  : pLen        �ֽ�������

 �� �� ֵ  : VOS_OK��success  ������fail
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��06��15��
    ��    ��   : l00353313
    �޸�����   : Modemֱͨ��Ŀ����
*****************************************************************************/
VOS_INT32 ConvertField_ClassArray(VOS_UINT8 *p, VOS_UINT32 ulSize, VOS_UINT32 *pLen, VOS_UINT32 *pStructLen,
                             const VOS_UINT8 *pStruct, VOS_UINT32 ulStructSize, const FIELD_DESC *pField)
{
    VOS_INT32 ret = VOS_ERR;
    const STRUCT_DESC *pSubStructDesc = VOS_NULL_PTR;
    VOS_UINT16 usArraySize = 0;
    VOS_UINT32 j = 0;
    VOS_UINT32 ulLen = 0;

    if (VOS_NULL_PTR == p || VOS_NULL_PTR == pLen || VOS_NULL_PTR == pStructLen || VOS_NULL_PTR == pStruct || VOS_NULL_PTR == pField || 2 + ulStructSize > ulSize)
    {
        return VOS_ERR;
    }

    *pLen = 0;
    *pStructLen = 0;

    /* �����FieldType��24λΪ����Ԫ�ظ��� */
    usArraySize = pField->FieldType >> 8;

    CopyValue(p, (VOS_UINT8 *) &usArraySize, 2);
    p += 2;
    *pLen = *pLen + 2;

    pSubStructDesc = GetStructDescByStructID(pField->FieldLength);

    if (VOS_NULL_PTR == pSubStructDesc)
    {
        return VOS_ERR;
    }

    for (j = 0; j < usArraySize; ++j)
    {
        ret = Modem_ErrLog_ConvertStructByDesc(p, ulSize, &ulLen, pStruct, ulStructSize, pSubStructDesc);
        if (VOS_OK != ret || ulSize < ulLen)
        {
            return VOS_ERR;
        }

        p += ulLen;
        ulSize -= ulLen;
        pStruct += pSubStructDesc->StructSize;
        ulStructSize -= pSubStructDesc->StructSize;
        *pLen += ulLen;
    }

    *pStructLen = usArraySize * pSubStructDesc->StructSize;
    return VOS_OK;
}

/*****************************************************************************
 �� �� ��  : ConvertField_Array
 ��������  : �ѽṹ����ַ������ֽ������ֶ�ת��Ϊ�ֽ���
 �������  : p        �ֽ���������
             ulSize     �ֽ�����������С
             pStructLen    �ֶε��ֽڴ�С
             pStruct        �ṹ��ָ��
             ulStructSize    �ṹ�����ݳ���
             pField    �ṹ���ֶ�������Ϣ

 �������  : pLen        �ֽ�������

 �� �� ֵ  : VOS_OK��success  ������fail
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��06��15��
    ��    ��   : l00353313
    �޸�����   : Modemֱͨ��Ŀ����
*****************************************************************************/
VOS_INT32 ConvertField_Array(VOS_UINT8 *p, VOS_UINT32 ulSize, VOS_UINT32 *pLen, VOS_UINT32 *pStructLen,
                             const VOS_UINT8 *pStruct, VOS_UINT32 ulStructSize, const FIELD_DESC *pField)
{
    if (VOS_NULL_PTR == p || VOS_NULL_PTR == pLen || VOS_NULL_PTR == pStruct || VOS_NULL_PTR == pField)
    {
        return VOS_ERR;
    }

    *pLen = 0;
    *pStructLen = 0;

    /* �����ֶ����ͽ���ת�� */
    switch (pField->FieldType & FIELD_TYPE_MASK)
    {
    case FIELD_TYPE_VARCHAR:
    case FIELD_TYPE_ARRAY:
        {
            if (pField->FieldLength > ulSize || pField->FieldLength > ulStructSize)
            {
                return VOS_ERR;
            }

            *pLen = pField->FieldLength;
            memcpy_s(p, ulSize, pStruct, *pLen);

            *pStructLen = pField->FieldLength;
            break;
        }
    default:
        {
            return VOS_ERR;
        }
    }
    return VOS_OK;
}

/*****************************************************************************
 �� �� ��  : ConvertField_Value
 ��������  : �ѽṹ������Ρ�ö�١�ö�������ֶ�ת��Ϊ�ֽ���
 �������  : p        �ֽ���������
             ulSize     �ֽ�����������С
             pStructLen    �ֶε��ֽڴ�С
             pStruct        �ṹ��ָ��
             ulStructSize    �ṹ�����ݳ���
             pField    �ṹ���ֶ�������Ϣ

 �������  : pLen        �ֽ�������

 �� �� ֵ  : VOS_OK��success  ������fail
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��06��15��
    ��    ��   : l00353313
    �޸�����   : Modemֱͨ��Ŀ����
*****************************************************************************/
VOS_INT32 ConvertField_Value(VOS_UINT8 *p, VOS_UINT32 ulSize, VOS_UINT32 *pLen, VOS_UINT32 *pStructLen,
                             const VOS_UINT8 *pStruct, VOS_UINT32 ulStructSize, const FIELD_DESC *pField)
{
    VOS_UINT16 usArraySize = 0;
    VOS_UINT32 ulDataLen = 0;
    VOS_UINT32 i = 0;

    if (VOS_NULL_PTR == p || VOS_NULL_PTR == pLen || VOS_NULL_PTR == pStruct || VOS_NULL_PTR == pField)
    {
        return VOS_ERR;
    }

    *pLen = 0;
    *pStructLen = 0;

    /* �����ֶ����ͽ���ת�� */
    switch (pField->FieldType & FIELD_TYPE_MASK)
    {
        /* ö������ */
    case FIELD_TYPE_ENUMARRAY:
        {
            /* �����FieldType��24λΪ����Ԫ�ظ��� */
            usArraySize = pField->FieldType >> 8;

            /* ö�������FieldLengthΪö�ٵ��ֽڳ��� */
            ulDataLen = (VOS_UINT32) pField->FieldLength * usArraySize;
            if (ulDataLen + 2 > ulSize || ulDataLen > ulStructSize)
            {
                return VOS_ERR;
            }

            CopyValue(p, (VOS_UINT8 *) &usArraySize, 2);
            p += 2;
            *pLen = *pLen + 2;

            for (i = 0; i < usArraySize; ++i)
            {
                CopyValue(p + i * pField->FieldLength, pStruct + i * pField->FieldLength, pField->FieldLength);
            }

            *pLen = *pLen + ulDataLen;

            *pStructLen = ulDataLen;
            break;
        }
        /* �з������Ρ��޷������Ρ��ַ������ֽ����顢ö�� */
    case FIELD_TYPE_INT:
    case FIELD_TYPE_UINT:
    case FIELD_TYPE_ENUM:
        {
            if (pField->FieldLength > ulSize || pField->FieldLength > ulStructSize)
            {
                return VOS_ERR;
            }

            *pLen = pField->FieldLength;
            CopyValue(p, pStruct, *pLen);

            *pStructLen = pField->FieldLength;
            break;
        }
    default:
        {
            return VOS_ERR;
        }
    }
    return VOS_OK;
}

/*****************************************************************************
 �� �� ��  : Modem_ErrLog_ConvertStruct
 ��������  : �ѽṹ��ת��Ϊ�ֽ���
 �������  : pBuffer        �ֽ���������
             ulBufferSize     �ֽ�����������С
             pStruct        �ṹ��ָ��
             ulStructSize    �ṹ�����ݳ���
             pStructDesc    �ṹ��������Ϣ

 �������  : pBufferLen        �ֽ�������

 �� �� ֵ  : VOS_OK��success  ������fail
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��06��15��
    ��    ��   : l00353313
    �޸�����   : Modemֱͨ��Ŀ����
*****************************************************************************/
VOS_INT32 Modem_ErrLog_ConvertStruct(VOS_UINT8 *pBuffer, VOS_UINT32 ulBufferSize,
    VOS_UINT32 *pBufferLen, const VOS_UINT8 *pStruct, VOS_UINT32 ulStructSize,
    const STRUCT_DESC *pStructDesc)
{
    VOS_UINT32 i = 0;
    const FIELD_DESC *pField = VOS_NULL_PTR;
    VOS_INT32 ret = VOS_OK;
    /* д�뻺��������ʱָ�� */
    VOS_UINT8 *p = pBuffer;
    /* ������ʣ��ռ� */
    VOS_UINT32 ulSize = ulBufferSize;
    /* ���������� */
    VOS_UINT32 ulLen = 0;
    /* �ӽṹ��Ĵ�С */
    VOS_UINT32 ulStructLen = 0;

    if (VOS_NULL_PTR == pBuffer || VOS_NULL_PTR == pStruct || NULL == pBufferLen || VOS_NULL_PTR == pStructDesc || ulBufferSize < ulStructSize)
    {
        return VOS_ERR;
    }

    /* bParamInvalid�Ѿ������˿�ָ���жϣ������PCLINT�������� */
    /*lint -save -e613*/
    /* ��ʼ�����ص��ֽ������� */
    *pBufferLen = 0;

    for (i = 0; i < pStructDesc->FieldCount; ++i)
    {
        pField = &pStructDesc->Fields[i];

        /* �����ֶ����ͽ���ת�� */
        switch (pField->FieldType & FIELD_TYPE_MASK)
        {
        /* �ӽṹ�� */
        case FIELD_TYPE_CLASS:
            {
                ret = ConvertField_Class(p, ulSize, &ulLen, &ulStructLen, pStruct, ulStructSize, pField);
                break;
            }
        /* �ӽṹ������ */
        case FIELD_TYPE_CLASSARRAY:
            {
                ret = ConvertField_ClassArray(p, ulSize, &ulLen, &ulStructLen, pStruct, ulStructSize, pField);
                break;
            }
        /* ö������ */
        case FIELD_TYPE_ENUMARRAY:
        /* �з������Ρ��޷������Ρ��ַ������ֽ����顢ö�� */
        case FIELD_TYPE_INT:
        case FIELD_TYPE_UINT:
        case FIELD_TYPE_ENUM:
            {
                ret = ConvertField_Value(p, ulSize, &ulLen, &ulStructLen, pStruct, ulStructSize, pField);
                break;
            }
        case FIELD_TYPE_VARCHAR:
        case FIELD_TYPE_ARRAY:
            {
                ret = ConvertField_Array(p, ulSize, &ulLen, &ulStructLen, pStruct, ulStructSize, pField);
                break;
            }
        /* ����ʱ�䣬��֧��  */
        case FIELD_TYPE_DATETIME:
        default:
            {
                return VOS_ERR;
            }
        }

        if (VOS_OK != ret)
        {
            return ret;
        }

        p += ulLen;
        ulSize -= ulLen;
        pStruct += ulStructLen;
        ulStructSize -= ulStructLen;
    }

    *pBufferLen = (VOS_UINT32) (p - pBuffer);
    /*lint -restore*/
    return VOS_OK;
}

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
VOS_INT32 Modem_ErrLog_ConvertEvent(VOS_UINT16 usEventID, VOS_UINT8 *pBuffer, VOS_UINT32 ulBufferSize,
    VOS_UINT32 *pBufferLen, const VOS_UINT8 *pStruct, VOS_UINT32 ulStructSize)
{
    const STRUCT_DESC *pStructDesc = GetStructDescByEventID(usEventID);

    if (VOS_NULL_PTR == pBuffer || VOS_NULL_PTR == pStruct || NULL == pBufferLen || ulBufferSize < ulStructSize + 2 || VOS_NULL_PTR == pStructDesc)
    {
        return VOS_ERR;
    }

    /* ���¼�����ӽṹ��ID, �¼�����ID */
    CopyValue(pBuffer, (VOS_UINT8 *) &pStructDesc->StructID, 2);
    pBuffer += 2;
    ulBufferSize -= 2;

    *pBufferLen = 0;
    if (VOS_OK == Modem_ErrLog_ConvertStruct(pBuffer, ulBufferSize, pBufferLen, pStruct, ulStructSize, pStructDesc))
    {
        *pBufferLen = *pBufferLen + 2;
        return VOS_OK;
    }
    else
    {
        return VOS_ERR;
    }
}

/*****************************************************************************
 �� �� ��  : CalcStructSize
 ��������  : ��ȡ�ӽṹ���ֽ�������
 �������  : pStructDesc       �ṹ��������Ϣ

 �������  :

 �� �� ֵ  : 0��ʧ��  �������ֽ�������
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2016��06��15��
    ��    ��   : l00353313
    �޸�����   : Modemֱͨ��Ŀ����
*****************************************************************************/
VOS_INT32 CalcStructSize(const STRUCT_DESC *pStructDesc)
{
    VOS_UINT32 i = 0;
    const FIELD_DESC *pField = VOS_NULL_PTR;
    VOS_INT32 lRet = 0;
    VOS_INT32 lSize = 0;
    const STRUCT_DESC *pSubStructDesc = VOS_NULL_PTR;
    VOS_UINT16 usArraySize = 0;

    if (VOS_NULL_PTR == pStructDesc)
    {
        return 0;
    }

    for (i = 0; i < pStructDesc->FieldCount; ++i)
    {
        pField = &pStructDesc->Fields[i];

        /* �����ֶ����ͽ���ת�� */
        switch (pField->FieldType & FIELD_TYPE_MASK)
        {
        /* �ӽṹ�� */
        case FIELD_TYPE_CLASS:
            {
                pSubStructDesc = GetStructDescByStructID(pField->FieldLength);
                lRet = CalcStructSize(pSubStructDesc);
                if (0 != lRet)
                {
                    lRet += 2;
                }
                break;
            }
        /* �ӽṹ������ */
        case FIELD_TYPE_CLASSARRAY:
            {
                pSubStructDesc = GetStructDescByStructID(pField->FieldLength);
                usArraySize = pField->FieldType >> 8;
                lRet = CalcStructSize(pSubStructDesc);
                if (0 != lRet)
                {
                    lRet = 2 + (lRet + 2) * usArraySize;
                }
                break;
            }
        /* ö������ */
        case FIELD_TYPE_ENUMARRAY:
        /* �з������Ρ��޷������Ρ��ַ������ֽ����顢ö�� */
            {
                lRet = 2 + pField->FieldLength * (pField->FieldType >> 8);
                break;
            }
        case FIELD_TYPE_INT:
        case FIELD_TYPE_UINT:
        case FIELD_TYPE_ENUM:
        case FIELD_TYPE_VARCHAR:
        case FIELD_TYPE_ARRAY:
            {
                lRet = pField->FieldLength;
                break;
            }
        /* ����ʱ�䣬��֧��  */
        case FIELD_TYPE_DATETIME:
        default:
            {
                return 0;
            }
        }

        if (0 == lRet)
        {
            return 0;
        }

        lSize += lRet;
    }

    return lSize;
}

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
VOS_INT32 Modem_ErrLog_CalcEventSize(VOS_UINT16 usEventID)
{
    VOS_INT32 lSize = 2;
    const STRUCT_DESC *pStructDesc = GetStructDescByEventID(usEventID);
    VOS_INT32 lRet = 0;

    if (NULL == pStructDesc)
    {
        return 0;
    }

    lRet = CalcStructSize(pStructDesc);

    if (0 >= lRet)
    {
        return 0;
    }

    lSize += lRet;

    return lSize;
}

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
VOS_INT32 Modem_ErrLog_ConvertAbsoluteEvent(VOS_UINT16 usEventID, VOS_UINT8 *pBuffer, VOS_UINT32 ulBufferSize,
    VOS_UINT32 *pBufferLen, const VOS_UINT8 *pStruct, VOS_UINT32 ulStructSize)
{
    VOS_UINT32 j = 0;
    const FIELD_DESC *pField = VOS_NULL_PTR;
    const STRUCT_DESC *pSubStructDesc = VOS_NULL_PTR;
    const STRUCT_DESC *pStructDesc = GetStructDescByAbsoluteEventID(usEventID);
    VOS_UINT32 len = 0;

    if (VOS_NULL_PTR == pBuffer || VOS_NULL_PTR == pStruct || NULL == pBufferLen || ulBufferSize < ulStructSize + 2 || VOS_NULL_PTR == pStructDesc)
    {
        return VOS_ERR;
    }

    *pBufferLen = 0;
    for (j = 0; j < pStructDesc->FieldCount; ++j)
    {
        pField = &pStructDesc->Fields[j];
        if (FIELD_TYPE_CLASS != pField->FieldType)
        {
            return VOS_ERR;
        }

        pSubStructDesc = GetStructDescByStructID(pField->FieldLength);
        if (VOS_NULL_PTR == pSubStructDesc)
        {
            return VOS_ERR;
        }

        if (usEventID == pSubStructDesc->EventID)
        {
            CopyValue(pBuffer, (VOS_UINT8 *) &pSubStructDesc->StructID, 2);
            pBuffer += 2;
            ulBufferSize -= 2;
            len += 2;
            if (VOS_OK != Modem_ErrLog_ConvertStruct(pBuffer, ulBufferSize, pBufferLen, pStruct, ulStructSize, pSubStructDesc))
            {
                return VOS_ERR;
            }
            pBuffer += *pBufferLen;
            ulBufferSize -= *pBufferLen;
        }
        else
        {
            *((VOS_UINT16 *) pBuffer) = 0xFFFFu;
            pBuffer += 2;
            ulBufferSize -= 2;
            len += 2;
        }
    }
    *pBufferLen = *pBufferLen + len;
    return VOS_OK;
}

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
VOS_INT32 Modem_ErrLog_CalcAbsoluteEventSize(VOS_UINT16 usEventID)
{
    VOS_UINT32 j = 0;
    const FIELD_DESC *pField = VOS_NULL_PTR;
    const STRUCT_DESC *pSubStructDesc = VOS_NULL_PTR;
    const STRUCT_DESC *pStructDesc = GetStructDescByAbsoluteEventID(usEventID);
    VOS_INT32 lSize = 0;
    VOS_INT32 lRet = 0;

    if (VOS_NULL_PTR == pStructDesc)
    {
        return 0;
    }

    for (j = 0; j < pStructDesc->FieldCount; ++j)
    {
        pField = &pStructDesc->Fields[j];
        if (FIELD_TYPE_CLASS != pField->FieldType)
        {
            return 0;
        }

        pSubStructDesc = GetStructDescByStructID(pField->FieldLength);
        if (VOS_NULL_PTR == pSubStructDesc)
        {
            return 0;
        }

        if (usEventID == pSubStructDesc->EventID)
        {
            lRet = CalcStructSize(pSubStructDesc);

            if (0 >= lRet)
            {
                return 0;
            }

            lSize += 2 + lRet;
        }
        else
        {
            lSize += 2;
        }
    }
    return lSize;
}




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif


