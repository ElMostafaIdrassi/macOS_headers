//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SlicedLayer;

@protocol SlicedLayerDelegate <NSObject>
- (void)slicedLayer:(SlicedLayer *)arg1 wantsDrawRightInBounds:(struct CGRect)arg2;
- (void)slicedLayer:(SlicedLayer *)arg1 wantsDrawMiddleInBounds:(struct CGRect)arg2;
- (void)slicedLayer:(SlicedLayer *)arg1 wantsDrawLeftInBounds:(struct CGRect)arg2;
- (void)slicedLayer:(SlicedLayer *)arg1 wantsDrawFixedInBounds:(struct CGRect)arg2;
@end

