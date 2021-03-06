//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResolvedItem : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_extractedTerm;
    int _resolvedItemType;
    unsigned int _resultIndex;
    struct {
        unsigned int has_resolvedItemType:1;
        unsigned int has_resultIndex:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasResultIndex;
@property(nonatomic) unsigned int resultIndex;
- (int)StringAsResolvedItemType:(id)arg1;
- (id)resolvedItemTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasResolvedItemType;
@property(nonatomic) int resolvedItemType;
@property(retain, nonatomic) NSString *extractedTerm;
@property(readonly, nonatomic) BOOL hasExtractedTerm;

@end

