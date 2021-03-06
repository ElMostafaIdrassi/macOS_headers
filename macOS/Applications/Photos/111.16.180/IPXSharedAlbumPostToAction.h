//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXSharedAlbumAction.h"

@class NSObject, NSString, PLCloudSharedAlbum;
@protocol IPXFastEnumeration, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface IPXSharedAlbumPostToAction : IPXSharedAlbumAction
{
    NSObject<OS_dispatch_queue> *_assetProcessingQueue;
    NSObject<OS_dispatch_queue> *_videoProcessingQueue;
    id <IPXFastEnumeration> _assets;
    PLCloudSharedAlbum *_sharedAlbum;
    NSString *_batchComment;
    long long _processingStage;
}

+ (unsigned long long)countOfAssets:(id)arg1 photoCount:(unsigned long long *)arg2 videoCount:(unsigned long long *)arg3 itemCount:(unsigned long long *)arg4;
@property(nonatomic) long long processingStage; // @synthesize processingStage=_processingStage;
@property(readonly, nonatomic) NSString *batchComment; // @synthesize batchComment=_batchComment;
@property(readonly, nonatomic) PLCloudSharedAlbum *sharedAlbum; // @synthesize sharedAlbum=_sharedAlbum;
@property(readonly, nonatomic) id <IPXFastEnumeration> assets; // @synthesize assets=_assets;
- (void).cxx_destruct;
- (id)progressProcessingString;
- (id)progressPrepareString;
- (unsigned long long)workUnits;
- (BOOL)wantsProgress;
- (BOOL)interruptSupported;
- (void)performAction:(CDUnknownBlockType)arg1;
- (id)initWithAssets:(id)arg1 sharedAlbum:(id)arg2 batchComment:(id)arg3;
- (void)_processVideoIfNecessary:(id)arg1 url:(id)arg2 processedVideosPathInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_downloadAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_validateAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_reconnectAssetsIfNecessary:(id)arg1 hostWindow:(id)arg2 finishedBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *videoProcessingQueue; // @synthesize videoProcessingQueue=_videoProcessingQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *assetProcessingQueue; // @synthesize assetProcessingQueue=_assetProcessingQueue;

@end

