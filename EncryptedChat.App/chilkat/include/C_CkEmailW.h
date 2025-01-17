// This is a generated source file for Chilkat version 9.5.0.99
#ifndef _C_CkEmailWH
#define _C_CkEmailWH
#include "chilkatDefs.h"

#include "ck_inttypes.h"
#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC HCkEmailW CkEmailW_Create(void);
CK_C_VISIBLE_PUBLIC void CkEmailW_Dispose(HCkEmailW handle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getBody(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putBody(HCkEmailW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_body(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getBounceAddress(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putBounceAddress(HCkEmailW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_bounceAddress(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getCharset(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putCharset(HCkEmailW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_charset(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getDebugLogFilePath(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putDebugLogFilePath(HCkEmailW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_debugLogFilePath(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_getDecrypted(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getEmailDate(HCkEmailW cHandle, SYSTEMTIME * retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putEmailDate(HCkEmailW cHandle, SYSTEMTIME *newVal);
CK_C_VISIBLE_PUBLIC void CkEmailW_getEmailDateStr(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putEmailDateStr(HCkEmailW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_emailDateStr(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getEncryptedBy(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_encryptedBy(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getFileDistList(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putFileDistList(HCkEmailW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_fileDistList(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getFrom(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putFrom(HCkEmailW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_from(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getFromAddress(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putFromAddress(HCkEmailW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_fromAddress(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getFromName(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putFromName(HCkEmailW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_fromName(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getHeader(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_header(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getLanguage(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_language(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getLastErrorHtml(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_lastErrorHtml(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getLastErrorText(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_lastErrorText(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getLastErrorXml(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_lastErrorXml(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_getLastMethodSuccess(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putLastMethodSuccess(HCkEmailW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkEmailW_getLocalDate(HCkEmailW cHandle, SYSTEMTIME * retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putLocalDate(HCkEmailW cHandle, SYSTEMTIME *newVal);
CK_C_VISIBLE_PUBLIC void CkEmailW_getLocalDateStr(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putLocalDateStr(HCkEmailW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_localDateStr(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getMailer(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putMailer(HCkEmailW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_mailer(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC int CkEmailW_getNumAlternatives(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC int CkEmailW_getNumAttachedMessages(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC int CkEmailW_getNumAttachments(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC int CkEmailW_getNumBcc(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC int CkEmailW_getNumCC(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC int CkEmailW_getNumDaysOld(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC int CkEmailW_getNumDigests(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC int CkEmailW_getNumHeaderFields(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC int CkEmailW_getNumRelatedItems(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC int CkEmailW_getNumReplacePatterns(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC int CkEmailW_getNumReports(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC int CkEmailW_getNumTo(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getOaepHash(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putOaepHash(HCkEmailW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_oaepHash(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getOaepMgfHash(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putOaepMgfHash(HCkEmailW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_oaepMgfHash(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_getOaepPadding(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putOaepPadding(HCkEmailW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_getOverwriteExisting(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putOverwriteExisting(HCkEmailW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkEmailW_getPkcs7CryptAlg(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putPkcs7CryptAlg(HCkEmailW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_pkcs7CryptAlg(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC int CkEmailW_getPkcs7KeyLength(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putPkcs7KeyLength(HCkEmailW cHandle, int newVal);
CK_C_VISIBLE_PUBLIC void CkEmailW_getPreferredCharset(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putPreferredCharset(HCkEmailW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_preferredCharset(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_getPrependHeaders(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putPrependHeaders(HCkEmailW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_getReceivedEncrypted(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_getReceivedSigned(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getReplyTo(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putReplyTo(HCkEmailW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_replyTo(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_getReturnReceipt(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putReturnReceipt(HCkEmailW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_getSendEncrypted(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putSendEncrypted(HCkEmailW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkEmailW_getSender(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putSender(HCkEmailW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_sender(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_getSendSigned(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putSendSigned(HCkEmailW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_getSignaturesValid(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getSignedBy(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_signedBy(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getSigningAlg(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putSigningAlg(HCkEmailW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_signingAlg(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getSigningHashAlg(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putSigningHashAlg(HCkEmailW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_signingHashAlg(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC int CkEmailW_getSize(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getSubject(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putSubject(HCkEmailW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_subject(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getUidl(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_uidl(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_getUncommonOptions(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putUncommonOptions(HCkEmailW cHandle, const wchar_t *newVal);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_uncommonOptions(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_getUnpackUseRelPaths(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putUnpackUseRelPaths(HCkEmailW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_getVerboseLogging(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void  CkEmailW_putVerboseLogging(HCkEmailW cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkEmailW_getVersion(HCkEmailW cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_version(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddAttachmentBd(HCkEmailW cHandle, const wchar_t *filename, HCkBinDataW binData, const wchar_t *contentType);
CK_C_VISIBLE_PUBLIC void CkEmailW_AddAttachmentHeader(HCkEmailW cHandle, int index, const wchar_t *fieldName, const wchar_t *fieldValue);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddBcc(HCkEmailW cHandle, const wchar_t *friendlyName, const wchar_t *emailAddress);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddCC(HCkEmailW cHandle, const wchar_t *friendlyName, const wchar_t *emailAddress);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddDataAttachment(HCkEmailW cHandle, const wchar_t *fileName, HCkByteData content);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddDataAttachment2(HCkEmailW cHandle, const wchar_t *fileName, HCkByteData content, const wchar_t *contentType);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddEncryptCert(HCkEmailW cHandle, HCkCertW cert);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddFileAttachment(HCkEmailW cHandle, const wchar_t *path, HCkString outStrContentType);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_addFileAttachment(HCkEmailW cHandle, const wchar_t *path);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddFileAttachment2(HCkEmailW cHandle, const wchar_t *path, const wchar_t *contentType);
CK_C_VISIBLE_PUBLIC void CkEmailW_AddHeaderField(HCkEmailW cHandle, const wchar_t *fieldName, const wchar_t *fieldValue);
CK_C_VISIBLE_PUBLIC void CkEmailW_AddHeaderField2(HCkEmailW cHandle, const wchar_t *fieldName, const wchar_t *fieldValue);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddHtmlAlternativeBody(HCkEmailW cHandle, const wchar_t *body);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddiCalendarAlternativeBody(HCkEmailW cHandle, const wchar_t *icalContent, const wchar_t *methodName);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddMultipleBcc(HCkEmailW cHandle, const wchar_t *commaSeparatedAddresses);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddMultipleCC(HCkEmailW cHandle, const wchar_t *commaSeparatedAddresses);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddMultipleTo(HCkEmailW cHandle, const wchar_t *commaSeparatedAddresses);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddPfxSourceData(HCkEmailW cHandle, HCkByteData pfxBytes, const wchar_t *pfxPassword);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddPfxSourceFile(HCkEmailW cHandle, const wchar_t *pfxFilePath, const wchar_t *pfxPassword);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddPlainTextAlternativeBody(HCkEmailW cHandle, const wchar_t *body);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddRelatedBd(HCkEmailW cHandle, const wchar_t *filename, HCkBinDataW binData, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_addRelatedBd(HCkEmailW cHandle, const wchar_t *filename, HCkBinDataW binData);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddRelatedBd2(HCkEmailW cHandle, HCkBinDataW binData, const wchar_t *fileNameInHtml);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddRelatedData(HCkEmailW cHandle, const wchar_t *fileName, HCkByteData inData, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_addRelatedData(HCkEmailW cHandle, const wchar_t *fileName, HCkByteData inData);
CK_C_VISIBLE_PUBLIC void CkEmailW_AddRelatedData2(HCkEmailW cHandle, HCkByteData inData, const wchar_t *fileNameInHtml);
#if !defined(CHILKAT_MONO)
CK_C_VISIBLE_PUBLIC void CkEmailW_AddRelatedData2P(HCkEmailW cHandle, const void * pBytes, unsigned long szBytes, const wchar_t *fileNameInHtml);
#endif
#if !defined(CHILKAT_MONO)
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddRelatedDataP(HCkEmailW cHandle, const wchar_t *nameInHtml, const void * pBytes, unsigned long szBytes, HCkString outStrContentId);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_addRelatedDataP(HCkEmailW cHandle, const wchar_t *nameInHtml, const void * pBytes, unsigned long szBytes);
#endif
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddRelatedFile(HCkEmailW cHandle, const wchar_t *path, HCkString outStrContentID);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_addRelatedFile(HCkEmailW cHandle, const wchar_t *path);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddRelatedFile2(HCkEmailW cHandle, const wchar_t *filenameOnDisk, const wchar_t *filenameInHtml);
CK_C_VISIBLE_PUBLIC void CkEmailW_AddRelatedHeader(HCkEmailW cHandle, int index, const wchar_t *fieldName, const wchar_t *fieldValue);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddRelatedString(HCkEmailW cHandle, const wchar_t *nameInHtml, const wchar_t *str, const wchar_t *charset, HCkString outCid);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_addRelatedString(HCkEmailW cHandle, const wchar_t *nameInHtml, const wchar_t *str, const wchar_t *charset);
CK_C_VISIBLE_PUBLIC void CkEmailW_AddRelatedString2(HCkEmailW cHandle, const wchar_t *fileNameInHtml, const wchar_t *content, const wchar_t *charset);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddStringAttachment(HCkEmailW cHandle, const wchar_t *path, const wchar_t *content);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddStringAttachment2(HCkEmailW cHandle, const wchar_t *path, const wchar_t *content, const wchar_t *charset);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AddTo(HCkEmailW cHandle, const wchar_t *friendlyName, const wchar_t *emailAddress);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AesDecrypt(HCkEmailW cHandle, const wchar_t *password);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AesEncrypt(HCkEmailW cHandle, const wchar_t *password);
CK_C_VISIBLE_PUBLIC void CkEmailW_AppendToBody(HCkEmailW cHandle, const wchar_t *str);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_ApplyFixups(HCkEmailW cHandle, const wchar_t *fixups);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AspUnpack(HCkEmailW cHandle, const wchar_t *prefix, const wchar_t *saveDir, const wchar_t *urlPath, BOOL cleanFiles);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AspUnpack2(HCkEmailW cHandle, const wchar_t *prefix, const wchar_t *saveDir, const wchar_t *urlPath, BOOL cleanFiles, HCkByteData outHtml);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AttachEmail(HCkEmailW cHandle, HCkEmailW email);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_AttachMessage(HCkEmailW cHandle, HCkByteData mimeBytes);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_BEncodeBytes(HCkEmailW cHandle, HCkByteData inData, const wchar_t *charset, HCkString outEncodedStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_bEncodeBytes(HCkEmailW cHandle, HCkByteData inData, const wchar_t *charset);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_BEncodeString(HCkEmailW cHandle, const wchar_t *str, const wchar_t *charset, HCkString outEncodedStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_bEncodeString(HCkEmailW cHandle, const wchar_t *str, const wchar_t *charset);
CK_C_VISIBLE_PUBLIC void CkEmailW_Clear(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_ClearBcc(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_ClearCC(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_ClearEncryptCerts(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_ClearTo(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC HCkEmailW CkEmailW_Clone(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_ComputeGlobalKey(HCkEmailW cHandle, const wchar_t *encoding, BOOL bFold, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_computeGlobalKey(HCkEmailW cHandle, const wchar_t *encoding, BOOL bFold);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_ComputeGlobalKey2(HCkEmailW cHandle, const wchar_t *encoding, BOOL bFold, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_computeGlobalKey2(HCkEmailW cHandle, const wchar_t *encoding, BOOL bFold);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_ConvertInlineImages(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC HCkEmailW CkEmailW_CreateDsn(HCkEmailW cHandle, const wchar_t *humanReadableMessage, const wchar_t *xmlStatusFields, BOOL bHeaderOnly);
CK_C_VISIBLE_PUBLIC HCkEmailW CkEmailW_CreateForward(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC HCkEmailW CkEmailW_CreateMdn(HCkEmailW cHandle, const wchar_t *humanReadableMessage, const wchar_t *xmlStatusFields, BOOL bHeaderOnly);
CK_C_VISIBLE_PUBLIC HCkEmailW CkEmailW_CreateReply(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_CreateTempMht(HCkEmailW cHandle, const wchar_t *inFilename, HCkString outPath);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_createTempMht(HCkEmailW cHandle, const wchar_t *inFilename);
CK_C_VISIBLE_PUBLIC void CkEmailW_DropAttachments(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_DropRelatedItem(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC void CkEmailW_DropRelatedItems(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_DropSingleAttachment(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC HCkCertW CkEmailW_FindIssuer(HCkEmailW cHandle, HCkCertW cert);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GenerateFilename(HCkEmailW cHandle, HCkString outStrFilename);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_generateFilename(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetAlternativeBody(HCkEmailW cHandle, int index, HCkString outStrBody);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getAlternativeBody(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetAlternativeBodyBd(HCkEmailW cHandle, int index, HCkBinDataW binData);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetAlternativeBodyByContentType(HCkEmailW cHandle, const wchar_t *contentType, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getAlternativeBodyByContentType(HCkEmailW cHandle, const wchar_t *contentType);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetAlternativeContentType(HCkEmailW cHandle, int index, HCkString outStrContentType);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getAlternativeContentType(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetAltHeaderField(HCkEmailW cHandle, int index, const wchar_t *fieldName, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getAltHeaderField(HCkEmailW cHandle, int index, const wchar_t *fieldName);
CK_C_VISIBLE_PUBLIC HCkEmailW CkEmailW_GetAttachedMessage(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetAttachedMessageAttr(HCkEmailW cHandle, int index, const wchar_t *fieldName, const wchar_t *attrName, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getAttachedMessageAttr(HCkEmailW cHandle, int index, const wchar_t *fieldName, const wchar_t *attrName);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetAttachedMessageFilename(HCkEmailW cHandle, int index, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getAttachedMessageFilename(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetAttachmentAttr(HCkEmailW cHandle, int index, const wchar_t *fieldName, const wchar_t *attrName, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getAttachmentAttr(HCkEmailW cHandle, int index, const wchar_t *fieldName, const wchar_t *attrName);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetAttachmentBd(HCkEmailW cHandle, int index, HCkBinDataW binData);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetAttachmentContentID(HCkEmailW cHandle, int index, HCkString outStrContentID);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getAttachmentContentID(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetAttachmentContentType(HCkEmailW cHandle, int index, HCkString outStrContentType);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getAttachmentContentType(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetAttachmentData(HCkEmailW cHandle, int index, HCkByteData outData);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetAttachmentFilename(HCkEmailW cHandle, int index, HCkString outStrFilename);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getAttachmentFilename(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetAttachmentHeader(HCkEmailW cHandle, int attachIndex, const wchar_t *fieldName, HCkString outFieldValue);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getAttachmentHeader(HCkEmailW cHandle, int attachIndex, const wchar_t *fieldName);
CK_C_VISIBLE_PUBLIC int CkEmailW_GetAttachmentSize(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetAttachmentString(HCkEmailW cHandle, int index, const wchar_t *charset, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getAttachmentString(HCkEmailW cHandle, int index, const wchar_t *charset);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetAttachmentStringCrLf(HCkEmailW cHandle, int index, const wchar_t *charset, HCkString outStrData);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getAttachmentStringCrLf(HCkEmailW cHandle, int index, const wchar_t *charset);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetBcc(HCkEmailW cHandle, int index, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getBcc(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetBccAddr(HCkEmailW cHandle, int index, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getBccAddr(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetBccName(HCkEmailW cHandle, int index, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getBccName(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetCC(HCkEmailW cHandle, int index, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getCC(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetCcAddr(HCkEmailW cHandle, int index, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getCcAddr(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetCcName(HCkEmailW cHandle, int index, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getCcName(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetDeliveryStatusInfo(HCkEmailW cHandle, const wchar_t *fieldName, HCkString outFieldValue);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getDeliveryStatusInfo(HCkEmailW cHandle, const wchar_t *fieldName);
CK_C_VISIBLE_PUBLIC HCkEmailW CkEmailW_GetDigest(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC HCkStringArrayW CkEmailW_GetDsnFinalRecipients(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC HCkDateTimeW CkEmailW_GetDt(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC HCkCertW CkEmailW_GetEncryptCert(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC HCkCertW CkEmailW_GetEncryptedByCert(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetFileContent(HCkEmailW cHandle, const wchar_t *path, HCkByteData outData);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetHeaderField(HCkEmailW cHandle, const wchar_t *fieldName, HCkString outStrFieldData);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getHeaderField(HCkEmailW cHandle, const wchar_t *fieldName);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetHeaderFieldName(HCkEmailW cHandle, int index, HCkString outStrFieldName);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getHeaderFieldName(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetHeaderFieldValue(HCkEmailW cHandle, int index, HCkString outStrFieldValue);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getHeaderFieldValue(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetHtmlBody(HCkEmailW cHandle, HCkString outStrBody);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getHtmlBody(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC unsigned long CkEmailW_GetImapUid(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC HCkStringArrayW CkEmailW_GetLinkedDomains(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetMbHeaderField(HCkEmailW cHandle, const wchar_t *fieldName, const wchar_t *charset, HCkByteData outBytes);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetMbHtmlBody(HCkEmailW cHandle, const wchar_t *charset, HCkByteData outData);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetMbPlainTextBody(HCkEmailW cHandle, const wchar_t *charset, HCkByteData outData);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetMime(HCkEmailW cHandle, HCkString outStrMime);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getMime(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetMimeBd(HCkEmailW cHandle, HCkBinDataW bindat);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetMimeBinary(HCkEmailW cHandle, HCkByteData outBytes);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetMimeSb(HCkEmailW cHandle, HCkStringBuilderW sb);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetNthBinaryPartOfType(HCkEmailW cHandle, int index, const wchar_t *contentType, BOOL inlineOnly, BOOL excludeAttachments, HCkByteData outBytes);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetNthBinaryPartOfTypeBd(HCkEmailW cHandle, int index, const wchar_t *contentType, BOOL inlineOnly, BOOL excludeAttachments, HCkBinDataW bd);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetNthContentType(HCkEmailW cHandle, int index, const wchar_t *contentType, BOOL inlineOnly, BOOL excludeAttachments, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getNthContentType(HCkEmailW cHandle, int index, const wchar_t *contentType, BOOL inlineOnly, BOOL excludeAttachments);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetNthTextPartOfType(HCkEmailW cHandle, int index, const wchar_t *contentType, BOOL inlineOnly, BOOL excludeAttachments, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getNthTextPartOfType(HCkEmailW cHandle, int index, const wchar_t *contentType, BOOL inlineOnly, BOOL excludeAttachments);
CK_C_VISIBLE_PUBLIC int CkEmailW_GetNumPartsOfType(HCkEmailW cHandle, const wchar_t *contentType, BOOL inlineOnly, BOOL excludeAttachments);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetPlainTextBody(HCkEmailW cHandle, HCkString outStrBody);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getPlainTextBody(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetRelatedAttr(HCkEmailW cHandle, int index, const wchar_t *fieldName, const wchar_t *attrName, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getRelatedAttr(HCkEmailW cHandle, int index, const wchar_t *fieldName, const wchar_t *attrName);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetRelatedContentID(HCkEmailW cHandle, int index, HCkString outStrContentID);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getRelatedContentID(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetRelatedContentLocation(HCkEmailW cHandle, int index, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getRelatedContentLocation(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetRelatedContentType(HCkEmailW cHandle, int index, HCkString outStrContentType);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getRelatedContentType(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetRelatedData(HCkEmailW cHandle, int index, HCkByteData outBuffer);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetRelatedFilename(HCkEmailW cHandle, int index, HCkString outStrFilename);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getRelatedFilename(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetRelatedString(HCkEmailW cHandle, int index, const wchar_t *charset, HCkString outStrData);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getRelatedString(HCkEmailW cHandle, int index, const wchar_t *charset);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetRelatedStringCrLf(HCkEmailW cHandle, int index, const wchar_t *charset, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getRelatedStringCrLf(HCkEmailW cHandle, int index, const wchar_t *charset);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetReplacePattern(HCkEmailW cHandle, int index, HCkString outStrPattern);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getReplacePattern(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetReplaceString(HCkEmailW cHandle, int index, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getReplaceString(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetReplaceString2(HCkEmailW cHandle, const wchar_t *pattern, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getReplaceString2(HCkEmailW cHandle, const wchar_t *pattern);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetReport(HCkEmailW cHandle, int index, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getReport(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC HCkCertW CkEmailW_GetSignedByCert(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC HCkCertChainW CkEmailW_GetSignedByCertChain(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC HCkCertW CkEmailW_GetSigningCert(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetTo(HCkEmailW cHandle, int index, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getTo(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetToAddr(HCkEmailW cHandle, int index, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getToAddr(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetToName(HCkEmailW cHandle, int index, HCkString outStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getToName(HCkEmailW cHandle, int index);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_GetXml(HCkEmailW cHandle, HCkString outStrXml);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_getXml(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_HasHeaderMatching(HCkEmailW cHandle, const wchar_t *fieldName, const wchar_t *valuePattern, BOOL caseSensitive);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_HasHtmlBody(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_HasPlainTextBody(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_IsMultipartReport(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_LoadEml(HCkEmailW cHandle, const wchar_t *mimePath);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_LoadTaskResult(HCkEmailW cHandle, HCkTaskW task);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_LoadXml(HCkEmailW cHandle, const wchar_t *xmlPath);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_LoadXmlString(HCkEmailW cHandle, const wchar_t *xmlStr);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_QEncodeBytes(HCkEmailW cHandle, HCkByteData inData, const wchar_t *charset, HCkString outEncodedStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_qEncodeBytes(HCkEmailW cHandle, HCkByteData inData, const wchar_t *charset);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_QEncodeString(HCkEmailW cHandle, const wchar_t *str, const wchar_t *charset, HCkString outEncodedStr);
CK_C_VISIBLE_PUBLIC const wchar_t *CkEmailW_qEncodeString(HCkEmailW cHandle, const wchar_t *str, const wchar_t *charset);
CK_C_VISIBLE_PUBLIC void CkEmailW_RemoveAttachedMessage(HCkEmailW cHandle, int idx);
CK_C_VISIBLE_PUBLIC void CkEmailW_RemoveAttachedMessages(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_RemoveAttachmentPaths(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_RemoveHeaderField(HCkEmailW cHandle, const wchar_t *fieldName);
CK_C_VISIBLE_PUBLIC void CkEmailW_RemoveHtmlAlternative(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC void CkEmailW_RemovePlainTextAlternative(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SaveAllAttachments(HCkEmailW cHandle, const wchar_t *dirPath);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SaveAttachedFile(HCkEmailW cHandle, int index, const wchar_t *dirPath);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SaveEml(HCkEmailW cHandle, const wchar_t *emlFilePath);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SaveLastError(HCkEmailW cHandle, const wchar_t *path);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SaveRelatedItem(HCkEmailW cHandle, int index, const wchar_t *dirPath);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SaveXml(HCkEmailW cHandle, const wchar_t *path);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SetAttachmentCharset(HCkEmailW cHandle, int index, const wchar_t *charset);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SetAttachmentDisposition(HCkEmailW cHandle, int index, const wchar_t *disposition);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SetAttachmentFilename(HCkEmailW cHandle, int index, const wchar_t *filename);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SetBinaryBody(HCkEmailW cHandle, HCkByteData byteData, const wchar_t *contentType, const wchar_t *disposition, const wchar_t *filename);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SetDecryptCert(HCkEmailW cHandle, HCkCertW cert);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SetDecryptCert2(HCkEmailW cHandle, HCkCertW cert, HCkPrivateKeyW key);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SetDt(HCkEmailW cHandle, HCkDateTimeW dt);
CK_C_VISIBLE_PUBLIC void CkEmailW_SetEdifactBody(HCkEmailW cHandle, const wchar_t *message, const wchar_t *name, const wchar_t *filename, const wchar_t *charset);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SetEncryptCert(HCkEmailW cHandle, HCkCertW cert);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SetFromMimeBd(HCkEmailW cHandle, HCkBinDataW bindat);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SetFromMimeBytes(HCkEmailW cHandle, HCkByteData mimeBytes);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SetFromMimeBytes2(HCkEmailW cHandle, HCkByteData mimeBytes, const wchar_t *charset);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SetFromMimeSb(HCkEmailW cHandle, HCkStringBuilderW sb);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SetFromMimeText(HCkEmailW cHandle, const wchar_t *mimeText);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SetFromXmlText(HCkEmailW cHandle, const wchar_t *xmlStr);
CK_C_VISIBLE_PUBLIC void CkEmailW_SetHtmlBody(HCkEmailW cHandle, const wchar_t *html);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SetMbHtmlBody(HCkEmailW cHandle, const wchar_t *charset, HCkByteData inData);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SetMbPlainTextBody(HCkEmailW cHandle, const wchar_t *charset, HCkByteData inData);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SetRelatedFilename(HCkEmailW cHandle, int index, const wchar_t *path);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SetReplacePattern(HCkEmailW cHandle, const wchar_t *pattern, const wchar_t *replaceString);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SetSigningCert(HCkEmailW cHandle, HCkCertW cert);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_SetSigningCert2(HCkEmailW cHandle, HCkCertW cert, HCkPrivateKeyW key);
CK_C_VISIBLE_PUBLIC void CkEmailW_SetTextBody(HCkEmailW cHandle, const wchar_t *bodyText, const wchar_t *contentType);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_UidlEquals(HCkEmailW cHandle, HCkEmailW e);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_UnpackHtml(HCkEmailW cHandle, const wchar_t *unpackDir, const wchar_t *htmlFilename, const wchar_t *partsSubdir);
CK_C_VISIBLE_PUBLIC void CkEmailW_UnSpamify(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_UnzipAttachments(HCkEmailW cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_UseCertVault(HCkEmailW cHandle, HCkXmlCertVaultW vault);
CK_C_VISIBLE_PUBLIC BOOL CkEmailW_ZipAttachments(HCkEmailW cHandle, const wchar_t *zipFilename);
#endif
