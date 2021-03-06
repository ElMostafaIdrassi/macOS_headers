//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <LinkPresentation/LPHTMLComponent.h>

#import <LinkPresentation/DOMEventListener-Protocol.h>

@class DOMDocument, DOMElement, DOMHTMLIFrameElement, DOMHTMLVideoElement, LPCSSResolver, LPVideo, NSString, WebScriptObject;

__attribute__((visibility("hidden")))
@interface LPHTMLVideoComponent : LPHTMLComponent <DOMEventListener>
{
    LPVideo *_video;
    DOMElement *_playButton;
    DOMElement *_muteButton;
    DOMElement *_muteButtonContainer;
    DOMElement *_videoPosterFrame;
    DOMElement *_videoOverlay;
    DOMHTMLVideoElement *_videoElement;
    DOMHTMLIFrameElement *_youTubeContainerElement;
    BOOL _isVisible;
    BOOL _wasPlayingWhenHidden;
    WebScriptObject *_isVisibleFunction;
    LPCSSResolver *_CSSResolver;
    DOMDocument *_document;
}

+ (id)additionalGlobalOutOfLineStyleDeclarations;
+ (id)styleSet;
+ (id)ruleDictionaryForStyle:(id)arg1;
- (void).cxx_destruct;
- (void)handleEvent:(id)arg1;
- (void)updateVisibility;
- (BOOL)isVisible;
- (void)togglePlaying;
- (BOOL)shouldAutoPlay;
@property(nonatomic, getter=isMuted) BOOL muted;
- (void)pause;
- (void)play;
- (BOOL)isPlaying;
- (id)youTubeParametersForVideoURL:(id)arg1;
- (id)resolvedVideoElement;
- (void)buildComponentWithPosterFrame:(id)arg1 posterFrameStyle:(id)arg2;
- (id)createVideoElement;
- (id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 themePath:(id)arg5 generator:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

