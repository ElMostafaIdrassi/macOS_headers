//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLinearAxis2D.h"

@interface GAbscissa2D : GLinearAxis2D
{
}

+ (id)defaultAttributes;
- (long long)axisType;
- (unsigned long long)acceptedPositionMask;
- (BOOL)drawAlternateTick:(struct CGPoint *)arg1;
- (void)borderTick:(struct CGPoint *)arg1 forBorder:(long long)arg2;
- (id)defaultInternalName;
- (BOOL)canMakeImage;
- (void)axisCoord:(double *)arg1 forValue:(double)arg2 offset:(double)arg3;
- (void)setScaleRange:(struct _GRange)arg1;

@end

