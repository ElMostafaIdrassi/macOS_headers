//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "BSInvalidatable.h"

@class BSAtomicSignal, NSObject<OS_dispatch_queue>, NSString;

@interface BSSimpleAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>
{
    NSString *_identifier;
    NSString *_reason;
    BSAtomicSignal *_invalidated;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _invalidationBlock;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) BOOL valid; // @dynamic valid;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2 invalidationBlock:(CDUnknownBlockType)arg3;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2 queue:(id)arg3 invalidationBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

