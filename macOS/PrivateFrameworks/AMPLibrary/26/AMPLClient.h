//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSXPCConnection;

@interface AMPLClient : NSObject
{
    BOOL _registered;
    BOOL _mediaDomainsOpened;
    BOOL _lostConnection;
    unsigned int _clientID;
    NSString *_clientName;
    unsigned long long _mediaDomains;
    unsigned long long _mediaDomainsPersistentID;
    unsigned long long _persistentMachineID;
    id <AMPLClientProtocol> _reconnectionDelegate;
    id <AMPLMediaAppClientEventsProtocol> _libraryEventsDelegate;
    NSXPCConnection *_connectionToService;
    unsigned long long _clientType;
}

@property(nonatomic) BOOL lostConnection; // @synthesize lostConnection=_lostConnection;
@property(nonatomic) unsigned long long clientType; // @synthesize clientType=_clientType;
@property(retain, nonatomic) NSXPCConnection *connectionToService; // @synthesize connectionToService=_connectionToService;
@property(nonatomic) __weak id <AMPLMediaAppClientEventsProtocol> libraryEventsDelegate; // @synthesize libraryEventsDelegate=_libraryEventsDelegate;
@property(nonatomic) __weak id <AMPLClientProtocol> reconnectionDelegate; // @synthesize reconnectionDelegate=_reconnectionDelegate;
@property(readonly, nonatomic) unsigned long long persistentMachineID; // @synthesize persistentMachineID=_persistentMachineID;
@property(readonly, nonatomic) unsigned long long mediaDomainsPersistentID; // @synthesize mediaDomainsPersistentID=_mediaDomainsPersistentID;
@property(nonatomic) BOOL mediaDomainsOpened; // @synthesize mediaDomainsOpened=_mediaDomainsOpened;
@property(readonly, nonatomic) unsigned int clientID; // @synthesize clientID=_clientID;
@property(readonly, nonatomic) BOOL registered; // @synthesize registered=_registered;
@property(readonly, nonatomic) unsigned long long mediaDomains; // @synthesize mediaDomains=_mediaDomains;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
- (void).cxx_destruct;
- (id)remoteRegisteredObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)closeMediaDomains:(CDUnknownBlockType)arg1;
- (BOOL)isRegistered:(id *)arg1;
- (id)ensureConnectedToService;
- (void)cleanupConnectionToService;
- (void)connect;
- (void)mediaDomainsOpened:(id)arg1;
- (void)setPersistentMachineID:(unsigned long long)arg1;
- (void)clientIDRegistered:(unsigned int)arg1;
- (void)onConnectionLost:(BOOL)arg1;
- (id)initWithType:(unsigned long long)arg1 andClientInfo:(id)arg2 withMediaDomains:(unsigned long long)arg3;
- (id)init;

@end

