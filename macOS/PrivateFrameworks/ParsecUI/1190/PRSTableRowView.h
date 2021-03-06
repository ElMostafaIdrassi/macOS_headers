//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class NSLayoutConstraint, PRSLineView;
@protocol PRSTableRowDelegate;

@interface PRSTableRowView : NSTableRowView
{
    PRSLineView *_lineView;
    NSLayoutConstraint *_cellWidth;
    BOOL _gridlinedBelow;
    BOOL _disallowVibrancy;
    double _inset;
    double _additionalInset;
    id <PRSTableRowDelegate> _tableRowDelegate;
}

+ (void)updateViewMode:(BOOL)arg1;
@property(retain, nonatomic) id <PRSTableRowDelegate> tableRowDelegate; // @synthesize tableRowDelegate=_tableRowDelegate;
@property double additionalInset; // @synthesize additionalInset=_additionalInset;
@property double inset; // @synthesize inset=_inset;
@property BOOL disallowVibrancy; // @synthesize disallowVibrancy=_disallowVibrancy;
@property(nonatomic) BOOL gridlinedBelow; // @synthesize gridlinedBelow=_gridlinedBelow;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (void)updateConstraints;
- (void)layout;
- (BOOL)allowsVibrancy;

@end

