//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSControl.h>

#import <AppKit/NSTouchBarColorPickerSliderMinimizationDelegate-Protocol.h>
#import <AppKit/NSTouchBarColorPickerView-Protocol.h>

@class NSArray, NSColor, NSString, NSTouchBarColorPickerSlider;

__attribute__((visibility("hidden")))
@interface NSTouchBarColorPickerSliders : NSControl <NSTouchBarColorPickerSliderMinimizationDelegate, NSTouchBarColorPickerView>
{
    NSArray *_componentSliders;
    NSTouchBarColorPickerSlider *_alphaSlider;
    unsigned long long _unminimizedComponents;
    NSArray *_allowedColorSpaces;
    NSColor *_currentColor;
    id _autounbinder;
    BOOL _allowsAlpha;
}

+ (id)thumbnailWithSize:(struct CGSize)arg1 inView:(id)arg2;
+ (id)keyPathsForValuesInvalidatingConstraints;
+ (BOOL)requiresConstraintBasedLayout;
+ (id)colorSpaceNormalizedColor:(id)arg1 withinAllowedColorSpaces:(id)arg2;
+ (id)_fallbackColorSpaceWithAllowedColorSpaces:(id)arg1;
+ (unsigned long long)colorComponentsMask:(unsigned long long)arg1 byRemovingComponent:(long long)arg2;
+ (unsigned long long)colorComponentsMask:(unsigned long long)arg1 byAddingComponent:(long long)arg2;
+ (void)orderedColorComponentsEnumerator:(CDUnknownBlockType)arg1;
+ (void)enumerateColorComponentsInMask:(unsigned long long)arg1 enumerator:(CDUnknownBlockType)arg2;
+ (long long)numberOfColorComponents;
+ (id)defaultColorSpace;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)accessibilityIdentifierForComponent:(long long)arg1;
+ (id)artworkProviderKeyForComponent:(long long)arg1;
+ (id)colorValueKeyForComponent:(long long)arg1;
+ (long long)preferredColorSwatchType;
+ (id)keyPathsForValuesAffectingColorSpaceColor;
+ (BOOL)accessibilityIsSingleCelled;
@property unsigned long long _unminimizedComponents; // @synthesize _unminimizedComponents;
@property(copy) NSColor *currentColor; // @synthesize currentColor=_currentColor;
@property BOOL allowsAlpha; // @synthesize allowsAlpha=_allowsAlpha;
- (id)declaredLayoutConstraints;
- (void)_sliderDidEndTracking;
- (void)_sliderWillBeginTracking;
- (void)colorPickerSliderCompletedInteraction:(id)arg1;
- (BOOL)colorPickerSliderWantsToBeUnminimized:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_selectComponentValueFrom:(id)arg1;
- (long long)_componentForSlider:(id)arg1;
- (id)sliderForComponent:(long long)arg1;
- (id)colorWithValue:(double)arg1 forComponent:(long long)arg2 baseColor:(id)arg3;
@property(copy) NSArray *allowedColorSpaces;
@property(readonly, copy) NSColor *colorSpaceColor;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_autounbinder;
- (oneway void)release;
- (BOOL)isAccessibilityElement;

// Remaining properties
@property SEL action;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property __weak id target;

@end

