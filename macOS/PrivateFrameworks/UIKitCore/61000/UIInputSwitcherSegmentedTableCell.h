//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIInputSwitcherTableCell.h>

@class UIInputSwitcherSegmentControl;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherSegmentedTableCell : UIInputSwitcherTableCell
{
    UIInputSwitcherSegmentControl *_segmentControl;
}

+ (struct CGSize)preferredSizeWithSegmentCount:(unsigned long long)arg1;
@property(readonly, nonatomic) UIInputSwitcherSegmentControl *segmentControl; // @synthesize segmentControl=_segmentControl;
- (void).cxx_destruct;
- (void)setUsesDarkTheme:(BOOL)arg1;
- (void)layoutSubviews;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

