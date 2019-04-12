

#ifndef __GUNASLOGFILTER_H__
#define __GUNASLOGFILTER_H__

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#include "vos.h"
#include "TafTypeDef.h"
#include "AtMnInterface.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define AT_PIH_FDN_ENABLE_REQ           (1)
#define AT_PIH_FDN_DISALBE_REQ          (2)

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/


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
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/
#if (OSA_CPU_CCPU == VOS_OSA_CPU)
VOS_UINT32 GUNAS_FilterImsaToTafMsg(
    PS_MSG_HEADER_STRU                 *pstMsg
);

VOS_UINT32 GUNAS_FilterWrrToGmmMmMsg(
    PS_MSG_HEADER_STRU                 *pstMsg
);

VOS_UINT32 GUNAS_FilterGasToMmMsg(
    PS_MSG_HEADER_STRU                 *pstMsg
);

VOS_UINT32 GUNAS_FilterTafToSsMsg(
    PS_MSG_HEADER_STRU                 *pstMsg
);

VOS_UINT32 GUNAS_FilterMmaToUsimMsg(
    PS_MSG_HEADER_STRU                 *pstMsg
);

VOS_UINT32 GUNAS_FilterTafToTafMsg(
    PS_MSG_HEADER_STRU                 *pstMsg
);

VOS_UINT32 GUNAS_FilterSsToMmMsg(
    PS_MSG_HEADER_STRU                 *pstMsg
);
#endif

#if (OSA_CPU_ACPU == VOS_OSA_CPU)
VOS_UINT32 GUNAS_FilterAtToAtMsg(
    PS_MSG_HEADER_STRU                 *pstMsg
);
#endif

VOS_UINT32 GUNAS_FilterAtToMmaMsg(
    PS_MSG_HEADER_STRU                 *pstMsg
);

VOS_UINT32 GUNAS_FilterAtToMtaMsg(
    PS_MSG_HEADER_STRU                 *pstMsg
);

VOS_UINT32 GUNAS_FilterAtToPihMsg(
    PS_MSG_HEADER_STRU                 *pstMsg
);

VOS_UINT32 GUNAS_FilterAtToTafMsg(
    PS_MSG_HEADER_STRU                 *pstMsg
);

VOS_UINT32 GUNAS_FilterTafToAtMsg(
    PS_MSG_HEADER_STRU                 *pstMsg
);

VOS_UINT32 GUNAS_FilterLayerMsg(
    const VOS_VOID                     *pstMsg
);

VOS_UINT32 GUNAS_OM_LayerMsgFilter(
    const VOS_VOID                     *pstMsg
);

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

#endif /* end of GuNasLogFilter.h */
