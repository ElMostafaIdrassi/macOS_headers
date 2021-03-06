//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer, NSColor;

@interface _WKThumbnailView : NSView
{
    struct RetainPtr<WKView> _wkView;
    RetainPtr_1dbdd1e2 _wkWebView;
    struct WebPageProxy *_webPageProxy;
    BOOL _originalMayStartMediaWhenInWindow;
    BOOL _originalSourceViewIsInWindow;
    BOOL _snapshotWasDeferred;
    double _lastSnapshotScale;
    struct CGSize _lastSnapshotMaximumSize;
    struct RetainPtr<NSColor> _overrideBackgroundColor;
    BOOL _waitingForSnapshot;
    BOOL _exclusivelyUsesSnapshot;
    BOOL _shouldKeepSnapshotWhenRemovedFromSuperview;
    double _scale;
    struct CGSize _snapshotSize;
    struct CGSize _maximumSnapshotSize;
}

@property(nonatomic) struct CGSize maximumSnapshotSize; // @synthesize maximumSnapshotSize=_maximumSnapshotSize;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) BOOL shouldKeepSnapshotWhenRemovedFromSuperview; // @synthesize shouldKeepSnapshotWhenRemovedFromSuperview=_shouldKeepSnapshotWhenRemovedFromSuperview;
@property(nonatomic) BOOL exclusivelyUsesSnapshot; // @synthesize exclusivelyUsesSnapshot=_exclusivelyUsesSnapshot;
@property(nonatomic, setter=_setWaitingForSnapshot:) BOOL _waitingForSnapshot; // @synthesize _waitingForSnapshot;
@property(readonly, nonatomic) struct CGSize snapshotSize; // @synthesize snapshotSize=_snapshotSize;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic, setter=_setThumbnailLayer:) CALayer *_thumbnailLayer;
@property(nonatomic) BOOL usesSnapshot;
- (void)viewDidMoveToWindow;
- (void)_didTakeSnapshot:(struct CGImage *)arg1;
- (void)_requestSnapshotIfNeeded;
- (void)_viewWasParented;
- (void)_viewWasUnparented;
@property(retain, nonatomic) NSColor *overrideBackgroundColor;
- (void)requestSnapshot;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect)arg1 fromWKWebView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 fromWKView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

