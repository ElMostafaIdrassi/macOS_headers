//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MRProtocolClientConnection, MSVMultiCallback, NSData, NSError, NSString, PBCodable;

@interface MRProtocolMessage : NSObject
{
    NSData *_protobufData;
    BOOL _replied;
    MSVMultiCallback *_messageSentCallbacks;
    MSVMultiCallback *_messagePurgedCallbacks;
    BOOL _isReply;
    PBCodable *_underlyingCodableMessage;
    NSError *_error;
    NSString *_identifier;
    unsigned long long _timestamp;
    MRProtocolClientConnection *_clientConnection;
}

+ (id)protocolMessageWithProtobufData:(id)arg1;
+ (unsigned long long)currentProtocolVersion;
@property(nonatomic) BOOL isReply; // @synthesize isReply=_isReply;
@property(nonatomic) __weak MRProtocolClientConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) PBCodable *underlyingCodableMessage; // @synthesize underlyingCodableMessage=_underlyingCodableMessage;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *protobufData;
- (BOOL)replyWithMessage:(id)arg1;
- (BOOL)reply;
@property(readonly, nonatomic) BOOL shouldLog;
@property(readonly, nonatomic) unsigned long long priority;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) unsigned long long encryptionType;
@property(readonly, nonatomic) NSString *description;
- (void)dealloc;
@property(readonly, nonatomic) MSVMultiCallback *messagePurgedCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *messageSentCallbacks;
- (id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2;

@end

