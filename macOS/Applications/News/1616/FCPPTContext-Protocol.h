//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol FCPPTContext <NSObject>
@property(nonatomic, getter=isRunningPPT) BOOL runningPPT;
@property(nonatomic, getter=isPrefetchDisabled) BOOL prefetchDisabled;
@property(retain, nonatomic) NSString *forYouConfigRecordIDOverride;
@property(nonatomic) BOOL showOnlyTopStoriesAndTrendingInForYou;
@property(nonatomic) BOOL showOnlyTopStoriesInForYou;
@property(retain, nonatomic) NSString *forYouFeedIDOverride;
@property(retain, nonatomic) NSString *testName;
- (void)d_logState;
@end

