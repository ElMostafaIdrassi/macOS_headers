//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalAgentLinkContactsGeneral.h"

@interface CNAgentGeneralProxy : NSObject <CalAgentLinkContactsGeneral>
{
}

+ (void)initialize;
- (void)broadcastNotificationToOtherClients:(id)arg1 userInfo:(id)arg2;
- (void)updateClientSideCacheWithReply:(CDUnknownBlockType)arg1;
- (void)registerWithAgent;
- (void)broadcastToOtherClients:(id)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)broadcastToOtherClients:(id)arg1 withObject:(id)arg2;
- (void)broadcastToOtherClients:(id)arg1;

@end

