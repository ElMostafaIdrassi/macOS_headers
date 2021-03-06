//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CallHistory/NSCopying-Protocol.h>

@interface AWDCallHistoryDatabaseInfo : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _fetchLimit;
    unsigned int _schema;
    unsigned int _size;
    struct {
        unsigned int timestamp:1;
        unsigned int fetchLimit:1;
        unsigned int schema:1;
        unsigned int size:1;
    } _has;
}

@property(nonatomic) unsigned int schema; // @synthesize schema=_schema;
@property(nonatomic) unsigned int fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(nonatomic) unsigned int size; // @synthesize size=_size;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSchema;
@property(nonatomic) BOOL hasFetchLimit;
@property(nonatomic) BOOL hasSize;
@property(nonatomic) BOOL hasTimestamp;

@end

