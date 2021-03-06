//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface OBAnalyticsManager : NSObject
{
    BOOL _shouldStashMetrics;
    NSMutableArray *_stagedMetrics;
}

+ (id)sharedManager;
@property(retain) NSMutableArray *stagedMetrics; // @synthesize stagedMetrics=_stagedMetrics;
@property BOOL shouldStashMetrics; // @synthesize shouldStashMetrics=_shouldStashMetrics;
- (void).cxx_destruct;
- (void)logTapOnPrivacyLinkWithIdentifier:(id)arg1;
- (void)logPresentationOfPrivacyLinkWithIdentifier:(id)arg1;
- (void)logPresentationOfPrivacySplashWithIdentifier:(id)arg1;
- (void)logPresentationOfPrivacyUnifiedAbout;
- (void)commit;
- (void)postMetricID:(unsigned int)arg1 metric:(id)arg2;
- (void)stageMetricID:(unsigned int)arg1 metric:(id)arg2;
- (id)init;

@end

