//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSCache, NSString, UIColor, UILabel;
@protocol MTLabelStackViewDelegate;

@interface MTLabelStackView : UIView
{
    BOOL _heightWillChange;
    NSCache *_textSizeCache;
    BOOL _enabled;
    NSString *_titleTextStyle;
    NSString *_subtitleTextStyle;
    UIColor *_titleTextColor;
    UIColor *_subtitleTextColor;
    id <MTLabelStackViewDelegate> _delegate;
    double _subtitleMaxWidth;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

+ (unsigned long long)defaultSubtitleNumberOfLines;
+ (unsigned long long)defaultTitleNumberOfLines;
+ (id)defaultSubtitleFont;
+ (id)defaultTitleFont;
+ (id)defaultSubtitleTextStyle;
+ (id)defaultTitleTextStyle;
+ (double)distanceBetweenLabelFramesWithTitleFont:(id)arg1 subtitleFont:(id)arg2 multilineTitle:(BOOL)arg3;
+ (double)distanceBetweenLabelFrames;
+ (double)maxHeightForTitleNumberOfLines:(unsigned long long)arg1 subtitleNumberOfLines:(unsigned long long)arg2;
+ (double)maxHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) double subtitleMaxWidth; // @synthesize subtitleMaxWidth=_subtitleMaxWidth;
@property(nonatomic) __weak id <MTLabelStackViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long subtitleNumberOfLines;
@property(nonatomic) unsigned long long titleNumberOfLines;
@property(retain, nonatomic) UIColor *subtitleTextColor; // @synthesize subtitleTextColor=_subtitleTextColor;
@property(retain, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(retain, nonatomic) NSString *subtitleTextStyle; // @synthesize subtitleTextStyle=_subtitleTextStyle;
@property(retain, nonatomic) NSString *titleTextStyle; // @synthesize titleTextStyle=_titleTextStyle;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
- (void)_notifyDelegateIfHeightChanged;
- (void)_heightWillChange;
- (void)_updateSubtitleFont;
- (void)_updateTitleFont;
- (id)sizeCacheKeyForLabel:(id)arg1 width:(double)arg2;
- (double)subtitleHeightForWidth:(double)arg1;
- (double)titleHeightForWidth:(double)arg1;
- (double)distanceBetweenLabelFrames;
- (double)heightForWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateFonts;
- (id)initWithFrame:(struct CGRect)arg1;

@end

