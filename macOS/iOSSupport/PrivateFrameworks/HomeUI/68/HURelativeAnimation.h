//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HUAnimationApplier;

@interface HURelativeAnimation : NSObject
{
    HUAnimationApplier *_applier;
    double _relativeStart;
    double _relativeDuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double relativeDuration; // @synthesize relativeDuration=_relativeDuration;
@property(readonly, nonatomic) double relativeStart; // @synthesize relativeStart=_relativeStart;
@property(readonly, nonatomic) HUAnimationApplier *applier; // @synthesize applier=_applier;
- (id)initWithAnimationApplier:(id)arg1 relativeStart:(double)arg2 relativeDuration:(double)arg3;

@end

