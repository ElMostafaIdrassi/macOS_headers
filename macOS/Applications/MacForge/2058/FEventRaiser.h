//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface FEventRaiser : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)raiseCallbacks:(id)arg1 queue:(id)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)raiseCallbacks:(id)arg1;
- (void)raiseCallback:(CDUnknownBlockType)arg1;
- (void)raiseEvents:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end

