//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Automator/AMRunnerController-Protocol.h>
#import <Automator/NSXPCConnectionDelegate-Protocol.h>

@class AMRemoteRunnerXPCDelegate, AMWorkflow, AMWorkflowCompletionResults, NSString, NSXPCConnection;
@protocol AMRemoteRunnerXPCProtocol, AMRunnerControllerDelegate, OS_dispatch_queue;

@interface AMRemoteRunnerController : NSObject <NSXPCConnectionDelegate, AMRunnerController>
{
    NSXPCConnection *_xpcConnection;
    AMRemoteRunnerXPCDelegate *_remoteRunnerXPCDelegate;
    id _propertyList;
    BOOL _shouldDisplayProgressInMenuBar;
    AMWorkflow *_workflow;
    id <AMRunnerControllerDelegate> _delegate;
    BOOL _workflowRunInProgress;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _completionHandler;
    BOOL _workflowDelegateHasFinished;
    AMWorkflowCompletionResults *_workflowCompletionResults;
}

+ (BOOL)currentProcessIsSandboxed;
+ (id)wrappedError:(id)arg1 forRunningWorkflow:(id)arg2;
+ (id)resumedXPCConnectionWithRemoteRunnerXPCDelegate:(id)arg1 queue:(id)arg2;
+ (id)remoteRunnerControllerWithURL:(id)arg1 error:(id *)arg2;
+ (id)remoteRunnerControllerWithPropertyList:(id)arg1 url:(id)arg2 error:(id *)arg3;
+ (id)remoteRunnerControllerWithWorkflow:(id)arg1 error:(id *)arg2;
@property(retain) AMWorkflowCompletionResults *workflowCompletionResults; // @synthesize workflowCompletionResults=_workflowCompletionResults;
@property BOOL workflowDelegateHasFinished; // @synthesize workflowDelegateHasFinished=_workflowDelegateHasFinished;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain) AMRemoteRunnerXPCDelegate *remoteRunnerXPCDelegate; // @synthesize remoteRunnerXPCDelegate=_remoteRunnerXPCDelegate;
@property BOOL workflowRunInProgress; // @synthesize workflowRunInProgress=_workflowRunInProgress;
@property(nonatomic) __weak id <AMRunnerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) AMWorkflow *workflow; // @synthesize workflow=_workflow;
@property(nonatomic) BOOL shouldDisplayProgressInMenuBar; // @synthesize shouldDisplayProgressInMenuBar=_shouldDisplayProgressInMenuBar;
@property(copy) id propertyList; // @synthesize propertyList=_propertyList;
- (void).cxx_destruct;
- (void)remoteRunnerXPCDelegateHasReceivedFinished;
- (void)_completeWorkflowIfAppropriate;
- (void)_completeWorkflowWithOuput:(id)arg1 error:(id)arg2;
- (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
@property(readonly, getter=isLoading) BOOL loading;
@property(readonly, getter=isStopping) BOOL stopping;
@property(readonly, getter=isPaused) BOOL paused;
@property(readonly, getter=isRunning) BOOL running;
@property(readonly, getter=isIdle) BOOL idle;
- (void)pause;
- (void)stopWithError:(id)arg1;
- (void)resume;
- (void)step;
- (void)runWithInput:(id)arg1 steppingInitially:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) id <AMRemoteRunnerXPCProtocol> remoteRunnerProxy;
- (id)initWithWorkflow:(id)arg1 propertyList:(id)arg2;
- (id)initWithWorkflow:(id)arg1;
- (id)initWithPropertyList:(id)arg1 url:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

