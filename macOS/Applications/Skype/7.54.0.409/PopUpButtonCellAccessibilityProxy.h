//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPopUpButtonCell.h>

@protocol PopUpButtonCellAccessibilityProxyDelegate;

@interface PopUpButtonCellAccessibilityProxy : NSPopUpButtonCell
{
    id <PopUpButtonCellAccessibilityProxyDelegate> _delegate;
}

@property(nonatomic) __weak id <PopUpButtonCellAccessibilityProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;

@end

