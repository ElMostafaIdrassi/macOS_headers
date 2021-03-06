//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/MNTransitInstruction.h>

@class GEOComposedRouteStep, NSDictionary;

@interface MNTransitStepInstruction : MNTransitInstruction
{
    GEOComposedRouteStep *_step;
    struct NSDictionary *_overridenInstructionsMapping;
}

+ (id)instructionForStep:(id)arg1 overrides:(struct NSDictionary *)arg2 context:(long long)arg3;
+ (id)instructionForStep:(id)arg1 context:(long long)arg2;
@property(readonly, nonatomic) NSDictionary *overridenInstructionsMapping; // @synthesize overridenInstructionsMapping=_overridenInstructionsMapping;
@property(readonly, nonatomic) GEOComposedRouteStep *step; // @synthesize step=_step;
- (void).cxx_destruct;
- (id)instructionSet;
- (id)initWithStep:(id)arg1 overrides:(struct NSDictionary *)arg2 context:(long long)arg3;

@end

