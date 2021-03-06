//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, AVWeakReference, NSDictionary, NSMutableData, NSMutableURLRequest, NSURLRequest, NSURLResponse;

@interface AVAssetResourceLoadingRequestInternal : NSObject
{
    AVWeakReference *weakReference;
    AVWeakReference *weakReferenceToResourceLoader;
    NSDictionary *requestDictionary;
    NSMutableURLRequest *URLRequest;
    NSURLResponse *response;
    NSURLRequest *redirect;
    struct dispatch_queue_s *dataCachingQueue;
    NSMutableData *cachedData;
    NSDictionary *cachedContentInformation;
    AVAssetResourceLoadingContentInformationRequest *contentInformationRequest;
    AVAssetResourceLoadingDataRequest *dataRequest;
    int finished;
    int cancelled;
    int sentContentInfo;
    struct OpaqueFigPlaybackItem *figPlaybackItem;
    struct OpaqueFigAssetImageGenerator *figImageGenerator;
    CDUnknownBlockType streamingKeyRequestCompletionHandler;
}

@end

