//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC8Podcasts24FeedManagerConfiguration : NSObject
{
    // Error parsing type: , name: timeoutIntervalForResource
    // Error parsing type: , name: workQueueConcurrent
    // Error parsing type: , name: useBackgroundFetchForFeedDownloads
    // Error parsing type: , name: keepsFeedFileInTempDirAfterDownload
    // Error parsing type: , name: supportsBatchInsertion
    // Error parsing type: , name: usesCleanEpisodeTitles
}

+ (id)watchConfiguration;
+ (id)homepodConfiguration;
+ (id)defaultConfiguration;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTimeoutIntervalForResource:(double)arg1 workQueueConcurrent:(BOOL)arg2 useBackgroundFetchForFeedDownloads:(BOOL)arg3 keepsFeedFileInTempDirAfterDownload:(BOOL)arg4 supportsBatchInsertion:(BOOL)arg5 usesCleanEpisodeTitles:(BOOL)arg6;
@property(nonatomic, readonly) BOOL usesCleanEpisodeTitles; // @synthesize usesCleanEpisodeTitles;
@property(nonatomic, readonly) BOOL supportsBatchInsertion; // @synthesize supportsBatchInsertion;
@property(nonatomic, readonly) BOOL keepsFeedFileInTempDirAfterDownload; // @synthesize keepsFeedFileInTempDirAfterDownload;
@property(nonatomic, readonly) BOOL useBackgroundFetchForFeedDownloads; // @synthesize useBackgroundFetchForFeedDownloads;
@property(nonatomic, readonly) BOOL workQueueConcurrent; // @synthesize workQueueConcurrent;
@property(nonatomic, readonly) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource;

@end

