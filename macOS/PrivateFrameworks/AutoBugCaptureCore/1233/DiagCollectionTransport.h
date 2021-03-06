//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DiagCollectionServiceImpl, NSXPCListener;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DiagCollectionTransport : NSObject
{
    NSXPCListener *listener;
    DiagCollectionServiceImpl *service;
    NSObject<OS_dispatch_queue> *transport_queue;
}

- (void).cxx_destruct;
- (void)shutdown;
- (void)setListeningPort:(const char *)arg1;
- (void)dealloc;
- (id)init;

@end

