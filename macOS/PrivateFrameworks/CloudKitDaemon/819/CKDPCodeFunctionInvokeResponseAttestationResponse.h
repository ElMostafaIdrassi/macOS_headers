//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPCodeFunctionInvokeResponseAttestationResponse : PBCodable <NSCopying>
{
    NSMutableArray *_attestations;
}

+ (Class)attestationsType;
@property(retain, nonatomic) NSMutableArray *attestations; // @synthesize attestations=_attestations;
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
- (id)attestationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)attestationsCount;
- (void)addAttestations:(id)arg1;
- (void)clearAttestations;

@end

