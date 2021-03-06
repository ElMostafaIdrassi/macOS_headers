//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction, TUAnimationFloatFunction;

@interface TUAnimationAffineTransformFunction : NSObject
{
    CAMediaTimingFunction *_timingFunction;
    double _speed;
    TUAnimationFloatFunction *_aFunction;
    TUAnimationFloatFunction *_bFunction;
    TUAnimationFloatFunction *_cFunction;
    TUAnimationFloatFunction *_dFunction;
    TUAnimationFloatFunction *_txFunction;
    TUAnimationFloatFunction *_tyFunction;
    struct CGAffineTransform _startValue;
    struct CGAffineTransform _endValue;
}

@property(retain, nonatomic) TUAnimationFloatFunction *tyFunction; // @synthesize tyFunction=_tyFunction;
@property(retain, nonatomic) TUAnimationFloatFunction *txFunction; // @synthesize txFunction=_txFunction;
@property(retain, nonatomic) TUAnimationFloatFunction *dFunction; // @synthesize dFunction=_dFunction;
@property(retain, nonatomic) TUAnimationFloatFunction *cFunction; // @synthesize cFunction=_cFunction;
@property(retain, nonatomic) TUAnimationFloatFunction *bFunction; // @synthesize bFunction=_bFunction;
@property(retain, nonatomic) TUAnimationFloatFunction *aFunction; // @synthesize aFunction=_aFunction;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) struct CGAffineTransform endValue; // @synthesize endValue=_endValue;
@property(nonatomic) struct CGAffineTransform startValue; // @synthesize startValue=_startValue;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
- (void).cxx_destruct;
- (void)_reloadFunctions;
- (struct CGAffineTransform)solveForTime:(double)arg1;
- (id)initWithTimingFunction:(id)arg1 startTransform:(struct CGAffineTransform)arg2 endTransform:(struct CGAffineTransform)arg3 speed:(double)arg4;

@end

