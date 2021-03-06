//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface MCOSMTPSession : NSObject
{
    struct SMTPAsyncSession *_session;
    CDUnknownBlockType _connectionLogger;
    struct MCOSMTPCallbackBridge *_callbackBridge;
    CDUnknownBlockType _operationQueueRunningChangeBlock;
    BOOL _useHeloIPEnabled;
}

@property(nonatomic, getter=isUseHeloIPEnabled) BOOL useHeloIPEnabled; // @synthesize useHeloIPEnabled=_useHeloIPEnabled;
@property(readonly, nonatomic, getter=isOperationQueueRunning) BOOL operationQueueRunning;
- (void)_queueRunningChanged;
- (void)_logWithSender:(void *)arg1 connectionType:(long long)arg2 data:(id)arg3;
- (id)noopOperation;
- (id)checkAccountOperationWithFrom:(id)arg1;
- (id)sendOperationWithContentsOfFile:(id)arg1 from:(id)arg2 recipients:(id)arg3;
- (id)sendOperationWithData:(id)arg1 from:(id)arg2 recipients:(id)arg3;
- (id)sendOperationWithData:(id)arg1;
- (id)loginOperation;
- (void)cancelAllOperations;
@property(copy, nonatomic) CDUnknownBlockType operationQueueRunningChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType connectionLogger;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
- (BOOL)useHeloIPEnabled;
@property(nonatomic, getter=isCheckCertificateEnabled) BOOL checkCertificateEnabled;
@property(nonatomic) double timeout;
@property(nonatomic) long long connectionType;
@property(nonatomic) long long authType;
@property(copy, nonatomic) NSString *OAuth2Token;
@property(copy, nonatomic) NSString *password;
@property(copy, nonatomic) NSString *username;
@property(nonatomic) unsigned int port;
@property(copy, nonatomic) NSString *hostname;
- (void)dealloc;
- (id)init;
- (struct Object *)mco_mcObject;

@end

