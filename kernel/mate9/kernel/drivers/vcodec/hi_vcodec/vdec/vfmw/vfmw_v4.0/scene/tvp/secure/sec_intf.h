
#ifndef __VFMW_SEC_INTF_H__
#define __VFMW_SEC_INTF_H__

#include "vfmw_ctrl.h"

// Interface of Seucre VFMW
SINT32 SEC_VDEC_Init(UINT32 * Args, UINT32 ArgsLen, UINT32 * Share, UINT32 shareLen);
SINT32 SEC_VDEC_Exit(UINT32 IsSecure);
SINT32 SEC_VDEC_Control(SINT32 ChanID, UINT32 eCmdID, UINT32 * Args, UINT32 ArgLen);
SINT32 SEC_VDEC_Suspend(VOID);
SINT32 SEC_VDEC_Resume(VOID);
SINT32 SEC_VDEC_RunProcess(UINT32 Args, UINT32 ArgLen);
#ifdef VCODEC_ENG_VERSION
SINT32 SEC_VDEC_ReadProc(UINT64 Page, SINT32 Count);
SINT32 SEC_VDEC_WriteProc(UINT32 Option, SINT32 Value);
#endif
SINT32 SEC_VDEC_GetChanImage(SINT32 ChanID, UINT32 * Image);
SINT32 SEC_VDEC_ReleaseChanImage(SINT32 ChanID, UINT64 Image);

#endif

