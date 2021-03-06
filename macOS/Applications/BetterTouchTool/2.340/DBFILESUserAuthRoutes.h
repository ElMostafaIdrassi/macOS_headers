//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DBFILESUserAuthRoutes : NSObject
{
    id <DBTransportClient> _client;
}

@property(readonly, nonatomic) id <DBTransportClient> client; // @synthesize client=_client;
- (void).cxx_destruct;
- (id)uploadSessionStartStream:(id)arg1 inputStream:(id)arg2;
- (id)uploadSessionStartStream:(id)arg1;
- (id)uploadSessionStartData:(id)arg1 inputData:(id)arg2;
- (id)uploadSessionStartData:(id)arg1;
- (id)uploadSessionStartUrl:(id)arg1 inputUrl:(id)arg2;
- (id)uploadSessionStartUrl:(id)arg1;
- (id)uploadSessionFinishBatchCheck:(id)arg1;
- (id)uploadSessionFinishBatch:(id)arg1;
- (id)uploadSessionFinishStream:(id)arg1 commit:(id)arg2 inputStream:(id)arg3;
- (id)uploadSessionFinishData:(id)arg1 commit:(id)arg2 inputData:(id)arg3;
- (id)uploadSessionFinishUrl:(id)arg1 commit:(id)arg2 inputUrl:(id)arg3;
- (id)uploadSessionAppendV2Stream:(id)arg1 close:(id)arg2 inputStream:(id)arg3;
- (id)uploadSessionAppendV2Stream:(id)arg1 inputStream:(id)arg2;
- (id)uploadSessionAppendV2Data:(id)arg1 close:(id)arg2 inputData:(id)arg3;
- (id)uploadSessionAppendV2Data:(id)arg1 inputData:(id)arg2;
- (id)uploadSessionAppendV2Url:(id)arg1 close:(id)arg2 inputUrl:(id)arg3;
- (id)uploadSessionAppendV2Url:(id)arg1 inputUrl:(id)arg2;
- (id)uploadSessionAppendStream:(id)arg1 offset:(id)arg2 inputStream:(id)arg3;
- (id)uploadSessionAppendData:(id)arg1 offset:(id)arg2 inputData:(id)arg3;
- (id)uploadSessionAppendUrl:(id)arg1 offset:(id)arg2 inputUrl:(id)arg3;
- (id)uploadStream:(id)arg1 mode:(id)arg2 autorename:(id)arg3 clientModified:(id)arg4 mute:(id)arg5 inputStream:(id)arg6;
- (id)uploadStream:(id)arg1 inputStream:(id)arg2;
- (id)uploadData:(id)arg1 mode:(id)arg2 autorename:(id)arg3 clientModified:(id)arg4 mute:(id)arg5 inputData:(id)arg6;
- (id)uploadData:(id)arg1 inputData:(id)arg2;
- (id)uploadUrl:(id)arg1 mode:(id)arg2 autorename:(id)arg3 clientModified:(id)arg4 mute:(id)arg5 inputUrl:(id)arg6;
- (id)uploadUrl:(id)arg1 inputUrl:(id)arg2;
- (id)search:(id)arg1 query:(id)arg2 start:(id)arg3 maxResults:(id)arg4 mode:(id)arg5;
- (id)search:(id)arg1 query:(id)arg2;
- (id)saveUrlCheckJobStatus:(id)arg1;
- (id)saveUrl:(id)arg1 url:(id)arg2;
- (id)restore:(id)arg1 rev:(id)arg2;
- (id)propertiesUpdate:(id)arg1 updatePropertyGroups:(id)arg2;
- (id)propertiesTemplateList;
- (id)propertiesTemplateGet:(id)arg1;
- (id)propertiesRemove:(id)arg1 propertyTemplateIds:(id)arg2;
- (id)propertiesOverwrite:(id)arg1 propertyGroups:(id)arg2;
- (id)propertiesAdd:(id)arg1 propertyGroups:(id)arg2;
- (id)permanentlyDelete:(id)arg1;
- (id)moveV2:(id)arg1 toPath:(id)arg2 allowSharedFolder:(id)arg3 autorename:(id)arg4 allowOwnershipTransfer:(id)arg5;
- (id)moveV2:(id)arg1 toPath:(id)arg2;
- (id)moveBatchCheck:(id)arg1;
- (id)moveBatch:(id)arg1 allowSharedFolder:(id)arg2 autorename:(id)arg3 allowOwnershipTransfer:(id)arg4;
- (id)moveBatch:(id)arg1;
- (id)move:(id)arg1 toPath:(id)arg2 allowSharedFolder:(id)arg3 autorename:(id)arg4 allowOwnershipTransfer:(id)arg5;
- (id)move:(id)arg1 toPath:(id)arg2;
- (id)listRevisions:(id)arg1 limit:(id)arg2;
- (id)listRevisions:(id)arg1;
- (id)listFolderLongpoll:(id)arg1 timeout:(id)arg2;
- (id)listFolderLongpoll:(id)arg1;
- (id)listFolderGetLatestCursor:(id)arg1 recursive:(id)arg2 includeMediaInfo:(id)arg3 includeDeleted:(id)arg4 includeHasExplicitSharedMembers:(id)arg5;
- (id)listFolderGetLatestCursor:(id)arg1;
- (id)listFolderContinue:(id)arg1;
- (id)listFolder:(id)arg1 recursive:(id)arg2 includeMediaInfo:(id)arg3 includeDeleted:(id)arg4 includeHasExplicitSharedMembers:(id)arg5;
- (id)listFolder:(id)arg1;
- (id)getThumbnailData:(id)arg1 format:(id)arg2 size:(id)arg3 byteOffsetStart:(id)arg4 byteOffsetEnd:(id)arg5;
- (id)getThumbnailData:(id)arg1 byteOffsetStart:(id)arg2 byteOffsetEnd:(id)arg3;
- (id)getThumbnailData:(id)arg1 format:(id)arg2 size:(id)arg3;
- (id)getThumbnailData:(id)arg1;
- (id)getThumbnailUrl:(id)arg1 format:(id)arg2 size:(id)arg3 overwrite:(BOOL)arg4 destination:(id)arg5 byteOffsetStart:(id)arg6 byteOffsetEnd:(id)arg7;
- (id)getThumbnailUrl:(id)arg1 overwrite:(BOOL)arg2 destination:(id)arg3 byteOffsetStart:(id)arg4 byteOffsetEnd:(id)arg5;
- (id)getThumbnailUrl:(id)arg1 format:(id)arg2 size:(id)arg3 overwrite:(BOOL)arg4 destination:(id)arg5;
- (id)getThumbnailUrl:(id)arg1 overwrite:(BOOL)arg2 destination:(id)arg3;
- (id)getTemporaryLink:(id)arg1;
- (id)getPreviewData:(id)arg1 rev:(id)arg2 byteOffsetStart:(id)arg3 byteOffsetEnd:(id)arg4;
- (id)getPreviewData:(id)arg1 byteOffsetStart:(id)arg2 byteOffsetEnd:(id)arg3;
- (id)getPreviewData:(id)arg1 rev:(id)arg2;
- (id)getPreviewData:(id)arg1;
- (id)getPreviewUrl:(id)arg1 rev:(id)arg2 overwrite:(BOOL)arg3 destination:(id)arg4 byteOffsetStart:(id)arg5 byteOffsetEnd:(id)arg6;
- (id)getPreviewUrl:(id)arg1 overwrite:(BOOL)arg2 destination:(id)arg3 byteOffsetStart:(id)arg4 byteOffsetEnd:(id)arg5;
- (id)getPreviewUrl:(id)arg1 rev:(id)arg2 overwrite:(BOOL)arg3 destination:(id)arg4;
- (id)getPreviewUrl:(id)arg1 overwrite:(BOOL)arg2 destination:(id)arg3;
- (id)getMetadata:(id)arg1 includeMediaInfo:(id)arg2 includeDeleted:(id)arg3 includeHasExplicitSharedMembers:(id)arg4;
- (id)getMetadata:(id)arg1;
- (id)downloadData:(id)arg1 rev:(id)arg2 byteOffsetStart:(id)arg3 byteOffsetEnd:(id)arg4;
- (id)downloadData:(id)arg1 byteOffsetStart:(id)arg2 byteOffsetEnd:(id)arg3;
- (id)downloadData:(id)arg1 rev:(id)arg2;
- (id)downloadData:(id)arg1;
- (id)downloadUrl:(id)arg1 rev:(id)arg2 overwrite:(BOOL)arg3 destination:(id)arg4 byteOffsetStart:(id)arg5 byteOffsetEnd:(id)arg6;
- (id)downloadUrl:(id)arg1 overwrite:(BOOL)arg2 destination:(id)arg3 byteOffsetStart:(id)arg4 byteOffsetEnd:(id)arg5;
- (id)downloadUrl:(id)arg1 rev:(id)arg2 overwrite:(BOOL)arg3 destination:(id)arg4;
- (id)downloadUrl:(id)arg1 overwrite:(BOOL)arg2 destination:(id)arg3;
- (id)deleteV2:(id)arg1;
- (id)deleteBatchCheck:(id)arg1;
- (id)deleteBatch:(id)arg1;
- (id)delete_:(id)arg1;
- (id)createFolderV2:(id)arg1 autorename:(id)arg2;
- (id)createFolderV2:(id)arg1;
- (id)createFolder:(id)arg1 autorename:(id)arg2;
- (id)createFolder:(id)arg1;
- (id)dCopyV2:(id)arg1 toPath:(id)arg2 allowSharedFolder:(id)arg3 autorename:(id)arg4 allowOwnershipTransfer:(id)arg5;
- (id)dCopyV2:(id)arg1 toPath:(id)arg2;
- (id)dCopyReferenceSave:(id)arg1 path:(id)arg2;
- (id)dCopyReferenceGet:(id)arg1;
- (id)dCopyBatchCheck:(id)arg1;
- (id)dCopyBatch:(id)arg1 allowSharedFolder:(id)arg2 autorename:(id)arg3 allowOwnershipTransfer:(id)arg4;
- (id)dCopyBatch:(id)arg1;
- (id)dCopy:(id)arg1 toPath:(id)arg2 allowSharedFolder:(id)arg3 autorename:(id)arg4 allowOwnershipTransfer:(id)arg5;
- (id)dCopy:(id)arg1 toPath:(id)arg2;
- (id)alphaUploadStream:(id)arg1 mode:(id)arg2 autorename:(id)arg3 clientModified:(id)arg4 mute:(id)arg5 propertyGroups:(id)arg6 inputStream:(id)arg7;
- (id)alphaUploadStream:(id)arg1 inputStream:(id)arg2;
- (id)alphaUploadData:(id)arg1 mode:(id)arg2 autorename:(id)arg3 clientModified:(id)arg4 mute:(id)arg5 propertyGroups:(id)arg6 inputData:(id)arg7;
- (id)alphaUploadData:(id)arg1 inputData:(id)arg2;
- (id)alphaUploadUrl:(id)arg1 mode:(id)arg2 autorename:(id)arg3 clientModified:(id)arg4 mute:(id)arg5 propertyGroups:(id)arg6 inputUrl:(id)arg7;
- (id)alphaUploadUrl:(id)arg1 inputUrl:(id)arg2;
- (id)alphaGetMetadata:(id)arg1 includeMediaInfo:(id)arg2 includeDeleted:(id)arg3 includeHasExplicitSharedMembers:(id)arg4 includePropertyTemplates:(id)arg5;
- (id)alphaGetMetadata:(id)arg1;
- (id)init:(id)arg1;
- (id)fileHandle:(id)arg1 fileUrl:(id)arg2;
- (void)executeProgressHandler:(id)arg1 amountUploaded:(long long)arg2;
- (void)batchFinishUponCompletion:(id)arg1;
- (unsigned long long)endBytesWithFileSize:(unsigned long long)arg1 startBytes:(unsigned long long)arg2;
- (void)queryJobStatus:(id)arg1 asyncJobId:(id)arg2 retryCount:(int)arg3;
- (void)appendFileChunk:(id)arg1 fileUrl:(id)arg2 fileSize:(unsigned long long)arg3 sessionId:(id)arg4 chunkUploadResponseQueue:(id)arg5 retryCount:(int)arg6 fileChunkInputStream:(id)arg7 cursor:(id)arg8 startBytes:(unsigned long long)arg9 shouldClose:(BOOL)arg10 blockingSemaphore:(id)arg11;
- (void)appendRemainingFileChunks:(id)arg1 fileUrl:(id)arg2 fileSize:(unsigned long long)arg3 sessionId:(id)arg4 blockingSemaphore:(id)arg5;
- (void)startUploadLargeFile:(id)arg1 fileUrl:(id)arg2 fileSize:(unsigned long long)arg3 blockingSemaphore:(id)arg4;
- (void)startUploadSmallFile:(id)arg1 fileUrl:(id)arg2 fileSize:(unsigned long long)arg3 blockingSemaphore:(id)arg4;
- (id)batchUploadFiles:(id)arg1 queue:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 responseBlock:(CDUnknownBlockType)arg4;

@end

