//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTouch.h"

@class NSTouchDevice;

@interface NSTouch (BTT)

// Remaining properties
@property(readonly) NSTouchDevice *device;
@property(readonly) struct CGSize deviceSize;
@property(readonly) struct CGPoint normalizedPosition;
@property(readonly) unsigned long long phase;
@property(readonly) struct CGPoint previousNormalizedPosition;
@property(readonly, getter=isResting) BOOL resting;
@end

