//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UITargetedPreview, UIVisualEffectView, _UIPlatterContentWrapperView, _UIPlatterSoftShadowView;

__attribute__((visibility("hidden")))
@interface _UIPreviewPlatterView : UIView
{
    BOOL _expanded;
    BOOL _hideCollapsedShadow;
    BOOL _alwaysCompact;
    BOOL _preventPreviewRasterization;
    BOOL _frozen;
    UITargetedPreview *_collapsedPreview;
    UITargetedPreview *_expandedPreview;
    UIView *_contentView;
    _UIPlatterSoftShadowView *_collapsedShadowView;
    UIVisualEffectView *_expandedShadowView;
    _UIPlatterContentWrapperView *_collapsedContentWrapperView;
    _UIPlatterContentWrapperView *_expandedContentWrapperView;
    double _collapsedCornerRadius;
    unsigned long long _collapsedCornerMask;
}

@property(nonatomic, getter=isFrozen) BOOL frozen; // @synthesize frozen=_frozen;
@property(nonatomic) unsigned long long collapsedCornerMask; // @synthesize collapsedCornerMask=_collapsedCornerMask;
@property(nonatomic) double collapsedCornerRadius; // @synthesize collapsedCornerRadius=_collapsedCornerRadius;
@property(retain, nonatomic) _UIPlatterContentWrapperView *expandedContentWrapperView; // @synthesize expandedContentWrapperView=_expandedContentWrapperView;
@property(retain, nonatomic) _UIPlatterContentWrapperView *collapsedContentWrapperView; // @synthesize collapsedContentWrapperView=_collapsedContentWrapperView;
@property(retain, nonatomic) UIVisualEffectView *expandedShadowView; // @synthesize expandedShadowView=_expandedShadowView;
@property(retain, nonatomic) _UIPlatterSoftShadowView *collapsedShadowView; // @synthesize collapsedShadowView=_collapsedShadowView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) BOOL preventPreviewRasterization; // @synthesize preventPreviewRasterization=_preventPreviewRasterization;
@property(nonatomic) BOOL alwaysCompact; // @synthesize alwaysCompact=_alwaysCompact;
@property(nonatomic) BOOL hideCollapsedShadow; // @synthesize hideCollapsedShadow=_hideCollapsedShadow;
@property(nonatomic) BOOL expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) UITargetedPreview *expandedPreview; // @synthesize expandedPreview=_expandedPreview;
@property(retain, nonatomic) UITargetedPreview *collapsedPreview; // @synthesize collapsedPreview=_collapsedPreview;
- (void).cxx_destruct;
- (void)updateContentSize;
- (BOOL)_previewIsLikelyOpaque:(id)arg1;
- (void)_updateCollapsedShadow;
- (void)didTearOffForDrag;
- (void)freezeExpandedPreview;
- (void)layoutSubviews;
@property(nonatomic) BOOL allowsUserInteractionInExpandedPreview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

