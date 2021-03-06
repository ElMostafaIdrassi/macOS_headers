//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVBehaviorContext-Protocol.h>
#import <AVKit/AVBehaviorContextInternal-Protocol.h>
#import <AVKit/AVPlayerViewControllerBehaviorContext-Protocol.h>
#import <AVKit/AVScrubbing-Protocol.h>

@class AVHomeIPCameraBehavior, AVHomeIPCameraPlayerController, AVObservationController, AVPlayerController, AVPlayerViewController, AVZoomingBehavior, NSString, UIView;

@interface AVHomeIPCameraBehaviorContext : NSObject <AVPlayerViewControllerBehaviorContext, AVBehaviorContextInternal, AVBehaviorContext, AVScrubbing>
{
    BOOL _playbackControlsIncludeTransportControls;
    BOOL _playbackControlsIncludeDisplayModeControls;
    BOOL _playbackControlsIncludeVolumeControls;
    BOOL _zoomingEnabled;
    BOOL _microphoneEnabled;
    BOOL _livePreviewActive;
    BOOL _playbackControlsShowsLoadingIndicator;
    AVPlayerViewController *_playerViewController;
    AVHomeIPCameraBehavior *_behavior;
    UIView *_livePreviewContainerView;
    AVZoomingBehavior *_zoomingBehavior;
    AVHomeIPCameraPlayerController *_livePreviewPlayerController;
    AVPlayerController *_playerControllerToRestore;
    AVObservationController *_observationController;
    struct CGSize _livePreviewAspectRatio;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL playbackControlsShowsLoadingIndicator; // @synthesize playbackControlsShowsLoadingIndicator=_playbackControlsShowsLoadingIndicator;
@property(retain, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(retain, nonatomic) AVPlayerController *playerControllerToRestore; // @synthesize playerControllerToRestore=_playerControllerToRestore;
@property(nonatomic) __weak AVHomeIPCameraPlayerController *livePreviewPlayerController; // @synthesize livePreviewPlayerController=_livePreviewPlayerController;
@property(retain, nonatomic) AVZoomingBehavior *zoomingBehavior; // @synthesize zoomingBehavior=_zoomingBehavior;
@property(nonatomic) struct CGSize livePreviewAspectRatio; // @synthesize livePreviewAspectRatio=_livePreviewAspectRatio;
@property(nonatomic, getter=isLivePreviewActive) BOOL livePreviewActive; // @synthesize livePreviewActive=_livePreviewActive;
@property(readonly, nonatomic) UIView *livePreviewContainerView; // @synthesize livePreviewContainerView=_livePreviewContainerView;
@property(nonatomic, getter=isMicrophoneEnabled) BOOL microphoneEnabled; // @synthesize microphoneEnabled=_microphoneEnabled;
@property(nonatomic, getter=isZoomingEnabled) BOOL zoomingEnabled; // @synthesize zoomingEnabled=_zoomingEnabled;
@property(nonatomic) BOOL playbackControlsIncludeVolumeControls; // @synthesize playbackControlsIncludeVolumeControls=_playbackControlsIncludeVolumeControls;
@property(nonatomic) BOOL playbackControlsIncludeDisplayModeControls; // @synthesize playbackControlsIncludeDisplayModeControls=_playbackControlsIncludeDisplayModeControls;
@property(nonatomic) BOOL playbackControlsIncludeTransportControls; // @synthesize playbackControlsIncludeTransportControls=_playbackControlsIncludeTransportControls;
@property(nonatomic) __weak AVHomeIPCameraBehavior *behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) __weak AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
- (void)_updatePlaybackControlsControllerAndZoomingBehavior;
- (void)endScrubbing;
- (void)scrubToTime:(double)arg1 resolution:(double)arg2;
- (void)beginScrubbing;
- (void)didStopPictureInPicture;
- (void)willStartPictureInPictureWithViewController:(id)arg1;
- (void)viewDidLoad;
- (void)didRemoveBehavior:(id)arg1;
- (void)willRemoveBehavior:(id)arg1;
- (void)didAddBehavior:(id)arg1;
- (void)willAddBehavior:(id)arg1;
- (void)setBackgroundColor:(id)arg1 forContainerOfControlItem:(id)arg2;
- (void)dealloc;
- (id)initWithAVKitOwner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

