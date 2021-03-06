//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _TVRCMediaRemoteDeviceQuery : NSObject
{
    void *_televisionController;
    id <_TVRCMediaRemoteDeviceQueryDelegate> _delegate;
}

@property(nonatomic) __weak id <_TVRCMediaRemoteDeviceQueryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)_shouldUseMediaRemoteForConnection:(void *)arg1;
- (void)_removedTelevision:(void *)arg1;
- (void)_discoveredTelevision:(void *)arg1;
- (void)stop;
- (void)start;

@end

