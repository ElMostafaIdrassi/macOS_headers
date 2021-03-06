//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _UIFocusEventRecognizer;

__attribute__((visibility("hidden")))
@interface _UIFocusEngineDelayedPressAction : NSObject
{
    _UIFocusEventRecognizer *_sender;
    long long _pressType;
    double _timestamp;
}

+ (void)sendDelayedPressWithType:(long long)arg1 timestamp:(double)arg2 sender:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) long long pressType; // @synthesize pressType=_pressType;
@property(readonly, nonatomic) __weak _UIFocusEventRecognizer *sender; // @synthesize sender=_sender;
- (void)_sendPressEvent;
- (id)_initWithPressType:(long long)arg1 timestamp:(double)arg2 sender:(id)arg3;

@end

