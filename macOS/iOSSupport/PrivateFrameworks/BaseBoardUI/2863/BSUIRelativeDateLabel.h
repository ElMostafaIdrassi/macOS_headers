//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoardUI/BSUIDefaultDateLabel.h>

#import <BaseBoardUI/BSRelativeDateTimerDelegate-Protocol.h>

@class BSRelativeDateTimer, NSString;

@interface BSUIRelativeDateLabel : BSUIDefaultDateLabel <BSRelativeDateTimerDelegate>
{
    BSRelativeDateTimer *_relativeDateTimer;
    unsigned long long _value;
    unsigned long long _resolution;
    long long _comparedToNow;
}

- (void).cxx_destruct;
- (void)timerFiredWithValue:(unsigned long long)arg1 forResolution:(unsigned long long)arg2 comparedToNow:(long long)arg3;
- (id)constructLabelString;
- (void)prepareForReuse;
- (void)dealloc;
- (void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

