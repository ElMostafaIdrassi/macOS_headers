//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSUICodeEvaluationController, NSMutableSet;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CSUIController : NSObject
{
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_dispatch_queue> *_activeHandlerQueue;
    NSMutableSet *_activeHandlers;
    BOOL _terminateWhenZeroActiveHandlers;
    CSUICodeEvaluationController *evaluationController;
}

- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)systemLocaleDidChange:(id)arg1;
- (void)logIncomingCommand:(long long)arg1 fromProcessIdentifier:(int)arg2 toBeHandledByClass:(Class)arg3;
- (BOOL)scheduleHandlerForMessageType:(int)arg1 connection:(id)arg2 object:(id)arg3;
- (int)messageTypeFromXPCObject:(id)arg1;
- (void)handleIncomingXPCMessage:(id)arg1 clientConnection:(id)arg2;
- (void)handleIncomingXPCConnection:(id)arg1;
- (void)invalidateXPC;
- (void)initializeXPC;
- (void)windowWillDisappear:(id)arg1;
- (void)windowWillAppear:(id)arg1;
- (void)beginListeningForWindowChanges;

@end

