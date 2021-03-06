//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/EDPETMessageTypeIntrospectable-Protocol.h>
#import <EmailDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface EDPETInteractionEvent : PBCodable <EDPETMessageTypeIntrospectable, NSCopying>
{
    long long _accountId;
    long long _conversationId;
    long long _deviceId;
    long long _mailboxId;
    long long _messageId;
    unsigned long long _timestamp;
    long long _userId;
    NSMutableArray *_eventDataFeatures;
    NSMutableArray *_eventDatas;
    int _eventName;
    int _mailboxType;
    unsigned int _sequenceNumber;
    int _timezoneOffset;
    unsigned int _version;
    struct {
        unsigned int accountId:1;
        unsigned int conversationId:1;
        unsigned int deviceId:1;
        unsigned int mailboxId:1;
        unsigned int messageId:1;
        unsigned int timestamp:1;
        unsigned int userId:1;
        unsigned int eventName:1;
        unsigned int mailboxType:1;
        unsigned int sequenceNumber:1;
        unsigned int timezoneOffset:1;
        unsigned int version:1;
    } _has;
}

+ (Class)eventDataFeaturesType;
+ (Class)eventDataType;
@property(retain, nonatomic) NSMutableArray *eventDataFeatures; // @synthesize eventDataFeatures=_eventDataFeatures;
@property(retain, nonatomic) NSMutableArray *eventDatas; // @synthesize eventDatas=_eventDatas;
@property(nonatomic) long long messageId; // @synthesize messageId=_messageId;
@property(nonatomic) long long conversationId; // @synthesize conversationId=_conversationId;
@property(nonatomic) long long mailboxId; // @synthesize mailboxId=_mailboxId;
@property(nonatomic) long long accountId; // @synthesize accountId=_accountId;
@property(nonatomic) long long deviceId; // @synthesize deviceId=_deviceId;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) int timezoneOffset; // @synthesize timezoneOffset=_timezoneOffset;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)eventDataFeaturesAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventDataFeaturesCount;
- (void)addEventDataFeatures:(id)arg1;
- (void)clearEventDataFeatures;
- (id)eventDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventDatasCount;
- (void)addEventData:(id)arg1;
- (void)clearEventDatas;
@property(nonatomic) BOOL hasMessageId;
@property(nonatomic) BOOL hasConversationId;
- (int)StringAsMailboxType:(id)arg1;
- (id)mailboxTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasMailboxType;
@property(nonatomic) int mailboxType; // @synthesize mailboxType=_mailboxType;
@property(nonatomic) BOOL hasMailboxId;
@property(nonatomic) BOOL hasAccountId;
@property(nonatomic) BOOL hasDeviceId;
@property(nonatomic) BOOL hasUserId;
- (int)StringAsEventName:(id)arg1;
- (id)eventNameAsString:(int)arg1;
@property(nonatomic) BOOL hasEventName;
@property(nonatomic) int eventName; // @synthesize eventName=_eventName;
@property(nonatomic) BOOL hasVersion;
@property(nonatomic) BOOL hasTimezoneOffset;
@property(nonatomic) BOOL hasSequenceNumber;
@property(nonatomic) BOOL hasTimestamp;
- (int)messageType;
- (void)addEventDataInt64:(long long)arg1 forKey:(id)arg2;
- (void)addEventDataString:(id)arg1 forKey:(id)arg2;
- (void)addEventDataDouble:(double)arg1 forKey:(id)arg2;
- (void)addEventDataFeatureString:(id)arg1 forKey:(id)arg2;
- (void)addEventDataFeatureDouble:(double)arg1 forKey:(id)arg2;

@end

