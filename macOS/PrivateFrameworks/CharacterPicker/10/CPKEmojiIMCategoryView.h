//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class EMIMDFRCategoryButton, NSButton, NSImageView, NSLayoutConstraint, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPKEmojiIMCategoryView : NSView
{
    BOOL _isExpanded;
    BOOL _animating;
    BOOL _clickedPickerButton;
    BOOL _touchCanceled;
    BOOL _buttonHighlighted;
    BOOL _inPressAndHold;
    BOOL _inPulledOut;
    BOOL _startingSearchMode;
    BOOL _inSearchMode;
    double _pulloutLimitWidth;
    long long _categoryCount;
    NSButton *_closeButton;
    EMIMDFRCategoryButton *_categoryButtonCell;
    NSImageView *_expandArrowImage;
    NSMutableArray *_expandedImageCells;
    EMIMDFRCategoryButton *_pickerButtonCell;
    double _expandedViewWidthForTap;
    double _expandedViewWidthForPress;
    double _expandedCategoryButtonWidth;
    id _firstTouchID;
    long long _highlightedCategoryIndex;
    NSLayoutConstraint *_categoryViewWidthConstraint;
    NSLayoutConstraint *_categoryButtonWidthConstraint;
    NSLayoutConstraint *_categoryButtonLeadingConstraint;
    NSLayoutConstraint *_categoryButtonTrailingConstraint;
    NSLayoutConstraint *_firstCategoryCellLeadingConstraint;
}

@property NSLayoutConstraint *firstCategoryCellLeadingConstraint; // @synthesize firstCategoryCellLeadingConstraint=_firstCategoryCellLeadingConstraint;
@property NSLayoutConstraint *categoryButtonTrailingConstraint; // @synthesize categoryButtonTrailingConstraint=_categoryButtonTrailingConstraint;
@property NSLayoutConstraint *categoryButtonLeadingConstraint; // @synthesize categoryButtonLeadingConstraint=_categoryButtonLeadingConstraint;
@property NSLayoutConstraint *categoryButtonWidthConstraint; // @synthesize categoryButtonWidthConstraint=_categoryButtonWidthConstraint;
@property NSLayoutConstraint *categoryViewWidthConstraint; // @synthesize categoryViewWidthConstraint=_categoryViewWidthConstraint;
@property(nonatomic) BOOL inSearchMode; // @synthesize inSearchMode=_inSearchMode;
@property BOOL startingSearchMode; // @synthesize startingSearchMode=_startingSearchMode;
@property BOOL inPulledOut; // @synthesize inPulledOut=_inPulledOut;
@property BOOL inPressAndHold; // @synthesize inPressAndHold=_inPressAndHold;
@property BOOL buttonHighlighted; // @synthesize buttonHighlighted=_buttonHighlighted;
@property long long highlightedCategoryIndex; // @synthesize highlightedCategoryIndex=_highlightedCategoryIndex;
@property BOOL touchCanceled; // @synthesize touchCanceled=_touchCanceled;
@property BOOL clickedPickerButton; // @synthesize clickedPickerButton=_clickedPickerButton;
@property(retain) id firstTouchID; // @synthesize firstTouchID=_firstTouchID;
@property double expandedCategoryButtonWidth; // @synthesize expandedCategoryButtonWidth=_expandedCategoryButtonWidth;
@property double expandedViewWidthForPress; // @synthesize expandedViewWidthForPress=_expandedViewWidthForPress;
@property double expandedViewWidthForTap; // @synthesize expandedViewWidthForTap=_expandedViewWidthForTap;
@property EMIMDFRCategoryButton *pickerButtonCell; // @synthesize pickerButtonCell=_pickerButtonCell;
@property(retain) NSMutableArray *expandedImageCells; // @synthesize expandedImageCells=_expandedImageCells;
@property NSImageView *expandArrowImage; // @synthesize expandArrowImage=_expandArrowImage;
@property EMIMDFRCategoryButton *categoryButtonCell; // @synthesize categoryButtonCell=_categoryButtonCell;
@property NSButton *closeButton; // @synthesize closeButton=_closeButton;
@property BOOL animating; // @synthesize animating=_animating;
@property BOOL isExpanded; // @synthesize isExpanded=_isExpanded;
@property long long categoryCount; // @synthesize categoryCount=_categoryCount;
@property(readonly) double pulloutLimitWidth; // @synthesize pulloutLimitWidth=_pulloutLimitWidth;
- (void)drawRect:(struct CGRect)arg1;
- (void)_characterPickerButtonClicked;
- (void)_didClickedCloseButton:(id)arg1;
- (void)_collapseByScroll:(BOOL)arg1 withAnimation:(BOOL)arg2;
- (void)_expandByPressAndHold:(BOOL)arg1 withAnimation:(BOOL)arg2;
- (void)_highlightSegementCellAtIndex:(long long)arg1 needScroll:(BOOL)arg2;
- (void)_setStateOfButtonCell:(id)arg1 highlighted:(BOOL)arg2;
- (void)_handlePressed;
- (void)_trackCellsWithTouch:(id)arg1;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)setStateInfo:(id)arg1;
- (id)getStateInfo;
- (void)reset;
- (void)scrollViewChangedToCategory:(long long)arg1;
- (void)pullOutBy:(double)arg1 start:(BOOL)arg2 finished:(BOOL)arg3;
- (void)collapseByScroll:(BOOL)arg1;
- (void)expand;
- (void)dealloc;
- (id)_buttonBoxWithImage:(id)arg1;
- (id)init;

@end

