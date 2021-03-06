//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UIPercentDrivenInteractiveTransition;
@protocol UIViewControllerContextTransitioning;

@interface PUViewControllerTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    double _duration;
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
    BOOL _interactive;
    BOOL _startedInteractively;
    double _interactiveProgress;
    double _visibleInteractiveProgress;
}

+ (id)interactionControllerForAnimationController:(id)arg1;
@property(nonatomic) BOOL startedInteractively; // @synthesize startedInteractively=_startedInteractively;
@property(nonatomic) double visibleInteractiveProgress; // @synthesize visibleInteractiveProgress=_visibleInteractiveProgress;
@property(nonatomic, setter=_setInteractiveProgress:) double interactiveProgress; // @synthesize interactiveProgress=_interactiveProgress;
@property(nonatomic, getter=isInteractive, setter=_setInteractive:) BOOL interactive; // @synthesize interactive=_interactive;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)animationEnded:(BOOL)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)completeTransition:(BOOL)arg1;
- (void)didCompleteTransitionAnimation;
- (struct CGRect)finalToViewFrame;
- (struct CGRect)finalFromViewFrame;
- (struct CGRect)initialToViewFrame;
- (struct CGRect)initialFromViewFrame;
- (id)containerView;
- (id)toViewController;
- (id)fromViewController;
- (void)setTransitionContext:(id)arg1;
- (id)transitionContext;
- (id)interactiveTransition;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransitionProgress:(double)arg1 visibleTransitionProgress:(double)arg2;
- (void)updateInteractiveTransitionProgress:(double)arg1;
- (void)imageModulationIntensityDidChange;
@property(readonly, nonatomic) double imageModulationIntensity;
- (id)_newInteractiveTransition;
- (id)initWithDuration:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

