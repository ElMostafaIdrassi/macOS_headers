//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABUserInterfaceAction-Protocol.h"

@class ABCommandExecutor, ABPersonListController, NSString;
@protocol ABPersonMergingControllerDelegate, NSDraggingInfo;

@interface ABPersonListAcceptDropAction : NSObject <ABUserInterfaceAction>
{
    BOOL executionWasAuthorized;
    ABPersonListController *_personListController;
    id <NSDraggingInfo> _info;
    ABCommandExecutor *_commandExecutor;
    id <ABPersonMergingControllerDelegate> _mergeDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <ABPersonMergingControllerDelegate> mergeDelegate; // @synthesize mergeDelegate=_mergeDelegate;
@property(readonly, nonatomic) ABCommandExecutor *commandExecutor; // @synthesize commandExecutor=_commandExecutor;
@property(readonly, nonatomic) id <NSDraggingInfo> info; // @synthesize info=_info;
@property(readonly, nonatomic) ABPersonListController *personListController; // @synthesize personListController=_personListController;
@property(nonatomic) BOOL executionWasAuthorized; // @synthesize executionWasAuthorized;
- (void)performWithSender:(id)arg1;
- (BOOL)validateWithMenuItem:(id)arg1;
@property(readonly, nonatomic) BOOL requiresAuthorizationBeforeExecution;
- (id)initWithPersonListController:(id)arg1 info:(id)arg2 commandExecutor:(id)arg3 mergeDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

