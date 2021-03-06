//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface WFTimeTriggerLogic : NSObject
{
    NSDate *_currentSunriseTime;
    NSDate *_currentSunsetTime;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *currentSunsetTime; // @synthesize currentSunsetTime=_currentSunsetTime;
@property(retain, nonatomic) NSDate *currentSunriseTime; // @synthesize currentSunriseTime=_currentSunriseTime;
- (id)adjustedTime:(id)arg1 byOffset:(unsigned long long)arg2;
- (id)triggersFromTriggers:(id)arg1 thatShouldFireAtDate:(id)arg2;
- (id)nextFireDateForTrigger:(id)arg1;

@end

