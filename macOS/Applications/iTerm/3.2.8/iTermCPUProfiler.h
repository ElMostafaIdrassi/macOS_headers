//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface iTermCPUProfiler : NSObject
{
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_mainThreadID;
    NSObject<OS_dispatch_queue> *_profilerQueue;
    NSObject<OS_dispatch_source> *_profilerTimer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)startProfilingForDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

