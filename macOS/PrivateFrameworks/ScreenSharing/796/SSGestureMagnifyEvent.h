//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenSharing/SSGestureEvent.h>

@interface SSGestureMagnifyEvent : SSGestureEvent
{
    double _magnification;
}

+ (id)gestureMagnifyEventWithCoordinates:(struct SSPoint)arg1 subType:(long long)arg2 magnification:(double)arg3;
@property double magnification; // @synthesize magnification=_magnification;
- (id)initWithCoordinates:(struct SSPoint)arg1 subType:(long long)arg2 magnification:(double)arg3;

@end

