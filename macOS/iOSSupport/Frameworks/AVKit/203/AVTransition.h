//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPresentationContext, NSMutableArray, UIViewPropertyAnimator;
@protocol AVTransitionDelegate, UIViewControllerContextTransitioningEx;

__attribute__((visibility("hidden")))
@interface AVTransition : NSObject
{
    AVPresentationContext *_presentationContext;
    id <AVTransitionDelegate> _delegate;
    id <UIViewControllerContextTransitioningEx> _transitionContext;
    UIViewPropertyAnimator *_transitionAnimator;
    UIViewPropertyAnimator *_clientAnimator;
    NSMutableArray *_allAnimators;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *allAnimators; // @synthesize allAnimators=_allAnimators;
@property(readonly, nonatomic) UIViewPropertyAnimator *clientAnimator; // @synthesize clientAnimator=_clientAnimator;
@property(readonly, nonatomic) UIViewPropertyAnimator *transitionAnimator; // @synthesize transitionAnimator=_transitionAnimator;
@property(readonly, nonatomic) __weak id <UIViewControllerContextTransitioningEx> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) __weak id <AVTransitionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVPresentationContext *presentationContext; // @synthesize presentationContext=_presentationContext;
- (struct CGRect)_sourceViewFrameInContainerView;
- (void)_updateCornerAppearanceAttributesOfView:(id)arg1 toSourceView:(id)arg2 similarity:(double)arg3;
- (struct CGAffineTransform)_transformForScale:(double)arg1 translation:(struct CGPoint)arg2 rotation:(double)arg3 locationInWindow:(struct CGPoint)arg4 sourceRectInContainerView:(struct CGRect)arg5;
- (struct CGRect)_finalFrameForPresentedView;
- (struct CGRect)_initialFrameForPresentedView;
- (void)_startOrContinueAnimatorsReversed:(BOOL)arg1;
- (void)_dismissalTransitionDidEnd:(BOOL)arg1;
- (void)_presentationTransitionDidEnd:(BOOL)arg1;
- (void)completeTransition:(BOOL)arg1;
- (void)addRunAlongsideAnimationsIfNeeded;
- (void)_animateAlongsideInteractiveDismissalTransitionAnimationForCancelling;
- (void)_animateAlongsideInteractivePresentationTransitionAnimationForCancelling;
- (void)cancelInteractiveTransition;
- (void)_freezeDismissingViewForFinishing;
- (void)_animateFinishInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateWithPercentComplete:(double)arg1 scale:(double)arg2 translation:(struct CGPoint)arg3 rotation:(double)arg4;
- (void)pauseInteractiveTransition;
- (void)_dismissalTransitionWillBegin;
- (void)_presentationTransitionWillBegin;
- (void)startInteractiveTransition;
@property(readonly, nonatomic) double transitionAnimatorProgress;
- (double)duration;
- (void)dealloc;
- (id)initWithTransitionContext:(id)arg1;

@end

