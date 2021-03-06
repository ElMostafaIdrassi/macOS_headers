//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CAShapeLayer.h"

@interface AKBoxLayer : CAShapeLayer
{
    double _borderWidthScale;
    double _boxCornerRadius;
    double _nominalBorderWidth;
}

@property double nominalBorderWidth; // @synthesize nominalBorderWidth=_nominalBorderWidth;
@property double boxCornerRadius; // @synthesize boxCornerRadius=_boxCornerRadius;
- (void)_updateBoxPath;
@property(nonatomic) double borderWidthScale;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithBorderWidth:(double)arg1 cornerRadius:(double)arg2;

@end

