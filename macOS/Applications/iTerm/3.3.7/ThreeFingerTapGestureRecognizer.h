//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSView;

@interface ThreeFingerTapGestureRecognizer : NSObject
{
    int numTouches_;
    double firstTouchTime_;
    double threeTouchTime_;
    NSView *target_;
    SEL selector_;
    BOOL fired_;
}

- (void)disconnectTarget;
- (BOOL)mouseUp:(id)arg1;
- (BOOL)mouseDown:(id)arg1;
- (BOOL)rightMouseUp:(id)arg1;
- (BOOL)rightMouseDown:(id)arg1;
- (BOOL)getAndResetFired;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)cancel;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

