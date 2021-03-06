//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ENGroupContextObserverMiddleware.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface ENGroupContextNotifyingObserver : NSObject <ENGroupContextObserverMiddleware>
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _onGroupCache;
    CDUnknownBlockType _onGroupCreate;
    CDUnknownBlockType _onGroupUpdate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onGroupUpdate; // @synthesize onGroupUpdate=_onGroupUpdate;
@property(copy, nonatomic) CDUnknownBlockType onGroupCreate; // @synthesize onGroupCreate=_onGroupCreate;
@property(copy, nonatomic) CDUnknownBlockType onGroupCache; // @synthesize onGroupCache=_onGroupCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)groupContext:(id)arg1 didUpdateGroup:(id)arg2 withNewGroup:(id)arg3;
- (void)groupContext:(id)arg1 didCacheGroup:(id)arg2;
- (void)groupContext:(id)arg1 didCreateGroup:(id)arg2;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

