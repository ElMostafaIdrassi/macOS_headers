//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer;

@interface Dock.ExposeEventController : NSObject
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: useBackgroundEvents
    // Error parsing type: , name: _connection
    // Error parsing type: , name: _captured
    // Error parsing type: , name: _invalidated
    // Error parsing type: , name: _eventMask
}

- (void).cxx_destruct;
- (id)init;
- (void)lostKeyFocus:(id)arg1;
- (BOOL)scrollWheel:(id)arg1;
- (BOOL)leftMouseUp:(id)arg1;
- (BOOL)leftMouseDown:(id)arg1;
- (BOOL)leftMouseDragged:(id)arg1;
- (BOOL)gesture:(id)arg1;
- (BOOL)keyUp:(id)arg1;
- (BOOL)keyDown:(id)arg1;
- (BOOL)mouseMoved:(id)arg1;
- (void)modalEventProcessed;
- (BOOL)handlesModalDragEvents;
@property(nonatomic, readonly) CALayer *modalEventLayer;
- (void)dealloc;

@end

