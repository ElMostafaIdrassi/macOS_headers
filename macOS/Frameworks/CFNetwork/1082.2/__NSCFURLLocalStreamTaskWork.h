//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface __NSCFURLLocalStreamTaskWork : NSObject
{
    const char *_static_description;
    double _timeout;
    double _timeoutTime;
    NSError *_recvdError;
    BOOL _hasBeenCalledBack;
    BOOL _timerStarted;
}

- (id)description;
- (const char *)_static_description;
- (id)initWithDescription:(const char *)arg1;

@end

