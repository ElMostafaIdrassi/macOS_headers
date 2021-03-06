//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSAccessibilityGroup-Protocol.h"
#import "NSTextFinderBarContainer-Protocol.h"

@class NSLayoutConstraint, NSString;

@interface PadContainerView : NSView <NSAccessibilityGroup, NSTextFinderBarContainer>
{
    NSView *_findBarContainerView;
    NSView *_findBarView;
    BOOL _findBarVisible;
    NSView *_padWrapperView;
    NSView *_padContentView;
    NSLayoutConstraint *_padContentViewTopConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *padContentViewTopConstraint; // @synthesize padContentViewTopConstraint=_padContentViewTopConstraint;
@property(nonatomic) __weak NSView *padContentView; // @synthesize padContentView=_padContentView;
@property(nonatomic) __weak NSView *padWrapperView; // @synthesize padWrapperView=_padWrapperView;
- (void).cxx_destruct;
- (void)_layoutSubviews;
- (void)findBarViewDidChangeHeight;
@property(getter=isFindBarVisible) BOOL findBarVisible;
@property(retain) NSView *findBarView;
- (void)updateLayer;
- (void)appearanceDidChange:(id)arg1;
@property(readonly, nonatomic) NSView *findBarContainerView;
- (id)contentView;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (BOOL)wantsLayer;
- (void)_padContainerViewCommonInit;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

