//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSSet, NSUUID, TUConversation, TUConversationMember;

@protocol TUConversationManagerDataSource <NSObject>
@property(nonatomic) __weak id <TUConversationMediaControllerDataSourceDelegate> mediaDelegate;
@property(nonatomic) __weak id <TUConversationManagerDataSourceDelegate> delegate;
@property(readonly, copy, nonatomic) NSDictionary *conversationsByGroupUUID;
- (void)invalidate;
- (void)registerWithCompletionHandler:(void (^)(void))arg1;
- (void)updateConversationWithUUID:(NSUUID *)arg1 participantPresentationContexts:(NSArray *)arg2;
- (void)setDownlinkMuted:(BOOL)arg1 forRemoteParticipantsInConversation:(TUConversation *)arg2;
- (void)buzzMember:(TUConversationMember *)arg1 conversation:(TUConversation *)arg2;
- (void)addRemoteMembers:(NSSet *)arg1 toConversation:(TUConversation *)arg2;
@end

