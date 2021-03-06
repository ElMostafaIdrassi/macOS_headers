//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class HomeScreenImageView, NSTextField, PCBadgeTextField;

__attribute__((visibility("hidden")))
@interface HomeScreenItemView : NSView
{
    HomeScreenImageView *iImageView;
    PCBadgeTextField *iBadgeTextField;
    NSTextField *iTitleTextField;
}

@property(readonly) HomeScreenImageView *imageView; // @synthesize imageView=iImageView;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2 representedObject:(id)arg3;
- (void)awakeFromNib;

@end

