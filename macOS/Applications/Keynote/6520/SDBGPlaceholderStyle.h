//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SDSStyle.h"

#import "SDDDrawableStyleParent.h"

@class NSString;

@interface SDBGPlaceholderStyle : SDSStyle <SDDDrawableStyleParent>
{
}

+ (Class)styleClass;
+ (const char *)idPrefix;
- (void)setVerticalAlignment:(int)arg1;
- (BOOL)isVerticalAlignmentSpecified;
- (BOOL)isVerticalAlignmentOverridden;
- (int)verticalAlignment;
- (void)removeGeometry;
- (BOOL)isGeometrySpecified;
- (id)overrideGeometry;
- (BOOL)isGeometryOverridden;
- (id)geometry;
- (void)setOpacity:(float)arg1;
- (BOOL)isOpacitySpecified;
- (BOOL)isOpacityOverridden;
- (float)opacity;
- (BOOL)isShadowSpecified;
- (id)overrideShadow;
- (BOOL)isShadowOverridden;
- (id)shadow;
- (id)overrideStrokeNull;
- (BOOL)isStrokeSpecified;
- (id)overrideStroke;
- (BOOL)isStrokeOverridden;
- (id)stroke;
- (BOOL)isLayoutStyleOverridden;
- (void)setLayoutStyle:(id)arg1;
- (id)layoutStyle;
- (id)overrideFillNull;
- (id)overrideFillImage;
- (id)overrideFillAngleGradient;
- (id)overrideFillColor;
- (BOOL)isFillOverridden;
- (id)fill;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

