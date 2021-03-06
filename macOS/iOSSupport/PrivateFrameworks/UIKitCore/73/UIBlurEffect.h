//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIVisualEffect.h>

@class UIColor, _UIBlurEffectImpl;

@interface UIBlurEffect : UIVisualEffect
{
    _UIBlurEffectImpl *_impl;
}

+ (BOOL)supportsSecureCoding;
+ (id)_effectWithInfiniteRadiusScale:(double)arg1;
+ (id)_effectWithInfiniteRadius;
+ (id)_effectForLightMaterial:(id)arg1 darkMaterial:(id)arg2 bundle:(id)arg3;
+ (id)_effectWithBlurRadius:(double)arg1 scale:(double)arg2;
+ (id)effectWithBlurRadius:(double)arg1;
+ (id)_effectWithStyle:(long long)arg1 tintColor:(id)arg2 invertAutomaticStyle:(BOOL)arg3;
+ (id)_effectWithStyle:(long long)arg1 invertAutomaticStyle:(BOOL)arg2;
+ (id)_effectWithTintColor:(id)arg1;
+ (id)effectWithStyle:(long long)arg1;
+ (id)_coreUIImplementationForStyle:(long long)arg1;
- (void).cxx_destruct;
- (BOOL)_indicatesMacSidebarBackground;
- (id)effectSettings;
- (id)description;
- (BOOL)_isAutomaticStyle;
- (BOOL)_isATVStyle;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)_expectedUsage;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
@property(readonly, nonatomic) BOOL _canProvideCoreMaterialVibrancyEffect;
@property(readonly, nonatomic) BOOL _canProvideVibrancyEffect;
@property(readonly, nonatomic) BOOL _invertAutomaticStyle;
@property(readonly, nonatomic) UIColor *_tintColor;
@property(readonly, nonatomic) long long _style;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithImplementation:(id)arg1;
- (id)init;

@end

