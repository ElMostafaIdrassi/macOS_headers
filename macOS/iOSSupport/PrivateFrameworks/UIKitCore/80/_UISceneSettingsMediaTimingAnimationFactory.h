//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIBasicAnimationFactory-Protocol.h>

@class CAMediaTimingFunction, NSString;

__attribute__((visibility("hidden")))
@interface _UISceneSettingsMediaTimingAnimationFactory : NSObject <_UIBasicAnimationFactory>
{
    CAMediaTimingFunction *__timingFunctionForAnimation;
}

@property(retain, nonatomic, getter=_timingFunctionForAnimation) CAMediaTimingFunction *_timingFunctionForAnimation; // @synthesize _timingFunctionForAnimation=__timingFunctionForAnimation;
- (void).cxx_destruct;
- (BOOL)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

