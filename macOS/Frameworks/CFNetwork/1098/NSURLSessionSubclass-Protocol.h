//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CFNetwork/NSObject-Protocol.h>

@class AVURLAsset, NSArray, NSData, NSDictionary, NSMutableURLRequest, NSString, NSURL, NSURLSessionAVAggregateAssetDownloadTask, NSURLSessionAVAssetDownloadTask, NSURLSessionDataTask, NSURLSessionDownloadTask, NSURLSessionUploadTask, NSURLSessionWebSocketTask, __NSCFTaskForClass;

@protocol NSURLSessionSubclass <NSObject>
- (void)_onqueue_getTasksWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)_onqueue_resetStorageWithCompletionHandler:(void (^)(void))arg1;
- (void)_onqueue_completeInvalidation:(BOOL)arg1;
- (void)_onqueue_flushWithCompletionHandler:(void (^)(void))arg1;
- (NSURLSessionWebSocketTask *)webSocketTaskForURL:(NSURL *)arg1 protocols:(NSArray *)arg2;
- (NSURLSessionWebSocketTask *)webSocketTaskForRequest:(NSMutableURLRequest *)arg1;
- (NSURLSessionAVAggregateAssetDownloadTask *)AVAggregateAssetDownloadTaskForURLAsset:(AVURLAsset *)arg1 mediaSelections:(NSArray *)arg2 assetTitle:(NSString *)arg3 assetArtworkData:(NSData *)arg4 options:(NSDictionary *)arg5;
- (NSURLSessionAVAssetDownloadTask *)AVAssetDownloadTaskForURLAsset:(AVURLAsset *)arg1 assetTitle:(NSString *)arg2 assetArtworkData:(NSData *)arg3 options:(NSDictionary *)arg4;
- (NSURLSessionAVAssetDownloadTask *)AVAssetDownloadTaskForURLAsset:(AVURLAsset *)arg1 destinationURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (NSURLSessionAVAssetDownloadTask *)_AVAssetDownloadTaskForURL:(NSURL *)arg1 destinationURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (NSURLSessionDownloadTask *)_downloadTaskWithTaskForClass:(__NSCFTaskForClass *)arg1;
- (NSURLSessionUploadTask *)_uploadTaskWithTaskForClass:(__NSCFTaskForClass *)arg1;
- (NSURLSessionDataTask *)_dataTaskWithTaskForClass:(__NSCFTaskForClass *)arg1;
@end

