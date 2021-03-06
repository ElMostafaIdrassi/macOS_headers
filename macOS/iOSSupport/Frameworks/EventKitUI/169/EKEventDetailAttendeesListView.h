//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIActivityIndicatorView, UIColor, UIViewController;

__attribute__((visibility("hidden")))
@interface EKEventDetailAttendeesListView : UIView
{
    long long _statusCounts[4];
    long long _columnAItems;
    long long _columnBItems;
    int _firstColumnBType;
    double _maxHeight;
    double _actualHeight;
    NSMutableArray *_inviteeNames;
    BOOL _shouldEvenOutBlocks;
    NSArray *_finalizedNames;
    UIActivityIndicatorView *_spinnerView;
    BOOL _showingSpinner;
    BOOL _highlighted;
    BOOL _groupsNames;
    NSArray *_ungrouped;
    UIColor *_textColor;
    UIColor *_highlightedTextColor;
    UIViewController *_viewController;
    double _bottomSpacingForSpinner;
}

@property(readonly, nonatomic) long long columnBItems; // @synthesize columnBItems=_columnBItems;
@property(readonly, nonatomic) long long columnAItems; // @synthesize columnAItems=_columnAItems;
@property(nonatomic) double bottomSpacingForSpinner; // @synthesize bottomSpacingForSpinner=_bottomSpacingForSpinner;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) BOOL groupsNames; // @synthesize groupsNames=_groupsNames;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSArray *ungrouped; // @synthesize ungrouped=_ungrouped;
- (void).cxx_destruct;
- (void)_setShowingSpinner:(BOOL)arg1;
- (void)_layoutSpinner;
- (void)_createSpinnerViewIfNeeded;
- (void)showSpinner;
- (void)drawNames:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setup;
- (id)generateAttributedStringsFromDisplayParticipants:(id)arg1 glyph:(id)arg2 displayCount:(long long)arg3;
- (void)finalizeInviteNames;
- (double)_calculateHeightForSpinnerDisplayMode;
- (double)calculatedHeight;
- (void)recalculateHeight;
- (double)_calculateHeightForItemCounts:(long long [4])arg1;
- (double)maxColumnHeight;
- (double)maxHeight;
- (BOOL)_shouldAlwaysDrawSingleColumn;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (BOOL)_haveContentToDraw;
- (BOOL)_haveInviteesToDraw;
- (void)setInvitees:(id)arg1 forStatus:(int)arg2;
- (void)contentSizeCategoryChanged;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

