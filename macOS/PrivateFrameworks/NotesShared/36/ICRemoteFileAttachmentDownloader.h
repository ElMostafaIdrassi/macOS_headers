//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSOperationQueue;

@interface ICRemoteFileAttachmentDownloader : NSObject
{
    NSMutableDictionary *_operationsByAttachmentIdentifier;
    NSOperationQueue *_operationQueue;
}

+ (id)allUndownloadedLegacyAttachmentsInContext:(id)arg1;
+ (BOOL)needsToDownloadRemoteFileAttachments;
+ (void)releaseSharedDownloaderIfPossible;
+ (void)initializeDownloaderAfterDelayIfNecessary;
+ (id)sharedDownloader;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSMutableDictionary *operationsByAttachmentIdentifier; // @synthesize operationsByAttachmentIdentifier=_operationsByAttachmentIdentifier;
- (void)reachabilityChanged:(id)arg1;
- (void)downloadRemoteFileForAttachmentObjectID:(id)arg1;
- (void)downloadRemoteFileForAttachment:(id)arg1;
- (void)downloadUndownloadedLegacyAttachments;
- (void)resumeDownloadsAfterDelay;
- (void)dealloc;
- (id)init;

@end

