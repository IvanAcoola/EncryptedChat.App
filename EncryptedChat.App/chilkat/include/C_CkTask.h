// This is a generated source file for Chilkat version 9.5.0.99
#ifndef _C_CkTask_H
#define _C_CkTask_H
#include "chilkatDefs.h"
#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkTask_setAbortCheck(HCkTask cHandle, BOOL (*fnAbortCheck)(void));
CK_C_VISIBLE_PUBLIC void CkTask_setPercentDone(HCkTask cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_C_VISIBLE_PUBLIC void CkTask_setProgressInfo(HCkTask cHandle, void (*fnProgressInfo)(const char *name, const char *value));
CK_C_VISIBLE_PUBLIC void CkTask_setTaskCompleted(HCkTask cHandle, void (*fnTaskCompleted)(HCkTask hTask));

CK_C_VISIBLE_PUBLIC void CkTask_setAbortCheck2(HCkTask cHandle, BOOL (*fnAbortCheck2)(void *pContext));
CK_C_VISIBLE_PUBLIC void CkTask_setPercentDone2(HCkTask cHandle, BOOL (*fnPercentDone2)(int pctDone, void *pContext));
CK_C_VISIBLE_PUBLIC void CkTask_setProgressInfo2(HCkTask cHandle, void (*fnProgressInfo2)(const char *name, const char *value, void *pContext));
CK_C_VISIBLE_PUBLIC void CkTask_setTaskCompleted2(HCkTask cHandle, void (*fnTaskCompleted2)(HCkTask hTask, void *pContext));

// setExternalProgress is for C callback functions defined in the external programming language (such as Go)
CK_C_VISIBLE_PUBLIC void CkTask_setExternalProgress(HCkTask cHandle, BOOL on);
CK_C_VISIBLE_PUBLIC void CkTask_setCallbackContext(HCkTask cHandle, void *pContext);

CK_C_VISIBLE_PUBLIC HCkTask CkTask_Create(void);
CK_C_VISIBLE_PUBLIC void CkTask_Dispose(HCkTask handle);
CK_C_VISIBLE_PUBLIC void CkTask_getDebugLogFilePath(HCkTask cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkTask_putDebugLogFilePath(HCkTask cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkTask_debugLogFilePath(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkTask_getFinished(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC int CkTask_getHeartbeatMs(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC void CkTask_putHeartbeatMs(HCkTask cHandle, int newVal);
CK_C_VISIBLE_PUBLIC BOOL CkTask_getInert(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkTask_getKeepProgressLog(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC void CkTask_putKeepProgressLog(HCkTask cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkTask_getLastErrorHtml(HCkTask cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkTask_lastErrorHtml(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC void CkTask_getLastErrorText(HCkTask cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkTask_lastErrorText(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC void CkTask_getLastErrorXml(HCkTask cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkTask_lastErrorXml(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkTask_getLastMethodSuccess(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC void CkTask_putLastMethodSuccess(HCkTask cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkTask_getLive(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC int CkTask_getPercentDone(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC int CkTask_getProgressLogSize(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC void CkTask_getResultErrorText(HCkTask cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkTask_resultErrorText(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC void CkTask_getResultType(HCkTask cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkTask_resultType(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC void CkTask_getStatus(HCkTask cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkTask_status(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC int CkTask_getStatusInt(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC int CkTask_getTaskId(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkTask_getTaskSuccess(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC void CkTask_getUserData(HCkTask cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkTask_putUserData(HCkTask cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkTask_userData(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkTask_getUtf8(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC void CkTask_putUtf8(HCkTask cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkTask_getVerboseLogging(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC void CkTask_putVerboseLogging(HCkTask cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkTask_getVersion(HCkTask cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkTask_version(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkTask_Cancel(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC void CkTask_ClearProgressLog(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkTask_CopyResultBytes(HCkTask cHandle, HCkByteData outBytes);
CK_C_VISIBLE_PUBLIC BOOL CkTask_GetResultBool(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkTask_GetResultBytes(HCkTask cHandle, HCkByteData outBytes);
CK_C_VISIBLE_PUBLIC int CkTask_GetResultInt(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkTask_GetResultString(HCkTask cHandle, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkTask_getResultString(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkTask_ProgressInfoName(HCkTask cHandle, int index, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkTask_progressInfoName(HCkTask cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkTask_ProgressInfoValue(HCkTask cHandle, int index, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkTask_progressInfoValue(HCkTask cHandle, int index);
CK_C_VISIBLE_PUBLIC void CkTask_RemoveProgressInfo(HCkTask cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkTask_Run(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkTask_RunSynchronously(HCkTask cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkTask_SaveLastError(HCkTask cHandle, const char *path);
CK_C_VISIBLE_PUBLIC void CkTask_SleepMs(HCkTask cHandle, int numMs);
CK_C_VISIBLE_PUBLIC BOOL CkTask_Wait(HCkTask cHandle, int maxWaitMs);
#endif
