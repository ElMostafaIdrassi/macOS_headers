//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject.h"

@interface DropSourceDelegate : NSObject
{
    BOOL dragFinished;
    int resultCode;
    struct wxDropSource *impl;
}

- (void)draggedImage:(id)arg1 endedAt:(struct _NSPoint)arg2 operation:(unsigned int)arg3;
- (void)draggedImage:(id)arg1 movedTo:(struct _NSPoint)arg2;
- (unsigned int)code;
- (BOOL)finished;
- (void)setImplementation:(struct wxDropSource *)arg1;
- (id)init;

@end

