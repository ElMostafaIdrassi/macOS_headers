//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MKInfoCardThemeListener.h"

@class NSString;

@interface _MKUIViewController : NSViewController <MKInfoCardThemeListener>
{
    unsigned long long _countOfAppearanceTransitionInvocations;
    long long _appearanceAnimation;
    long long _parentTransitioning;
}

- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)isMovingToParentViewController;
- (BOOL)isMovingFromParentViewController;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (Class)classForRootView;
- (void)loadView;
- (void)removeFromParentViewController;
- (void)addChildViewController:(id)arg1;
- (void)endAppearanceTransition;
- (void)beginAppearanceTransition:(BOOL)arg1 animated:(BOOL)arg2;
- (void)beginAppearanceTransition:(BOOL)arg1;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (BOOL)_isAnimating;
- (void)infoCardThemeChanged;
@property(readonly, nonatomic) id <MKInfoCardTheme> mk_theme;
@property(nonatomic) double contentAlpha;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

