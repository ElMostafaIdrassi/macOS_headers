//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAKitPopUpButton.h"

@class NSDictionary;

@interface TransportDisplayModeButton : MAKitPopUpButton
{
    NSDictionary *_buttonImages;
}

+ (Class)cellClass;
@property(retain) NSDictionary *buttonImages; // @synthesize buttonImages=_buttonImages;
- (BOOL)acceptsFirstResponder;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

