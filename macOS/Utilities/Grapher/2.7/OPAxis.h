//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPStatic.h"

#import "NVariableValue-Protocol.h"

@interface OPAxis : OPStatic <NVariableValue>
{
}

- (BOOL)isIndependantOf:(id)arg1;
- (void)setCurrentValue:(double)arg1;
- (double)currentValue;
- (double)maxValue;
- (double)minValue;
- (id)axis;
- (id)partialDerivativeWithRespectTo:(id)arg1;
- (id)evaluate;

@end

