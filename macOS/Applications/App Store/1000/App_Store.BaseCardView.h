//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "App_Store.BackgroundView.h"

@class _TtC9App_Store19ArticleCardTextView;

@interface App_Store.BaseCardView : App_Store.BackgroundView
{
    // Error parsing type: , name: textView
    // Error parsing type: , name: layoutMargins
}

+ (long long)descriptionNumberOfLines;
+ (long long)titleNumberOfLines;
+ (long long)headingNumberOfLines;
- (CDUnknownBlockType).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityTitleUIElement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void)prepareForReuse;
- (void)layout;
- (struct CGRect)frameForBackgroundViewOfSize:(struct CGSize)arg1;
- (struct CGRect)textViewBoundingRectWithRelativeTo:(struct CGRect)arg1;
@property(nonatomic, readonly) struct CGRect jet_layoutFrame;
@property(nonatomic) struct NSEdgeInsets layoutMargins; // @synthesize layoutMargins;
@property(nonatomic, readonly) _TtC9App_Store19ArticleCardTextView *textView; // @synthesize textView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

