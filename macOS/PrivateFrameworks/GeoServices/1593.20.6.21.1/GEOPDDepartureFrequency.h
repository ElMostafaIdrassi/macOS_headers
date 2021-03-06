//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitDepartureFrequency-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSDate, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDepartureFrequency : PBCodable <GEOTransitDepartureFrequency, NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _displayDepartureFrequency;
    unsigned int _earliestDepartureTime;
    unsigned int _latestDepartureTime;
    unsigned int _maxDepartureFrequency;
    unsigned int _minDepartureFrequency;
    BOOL _isEstimated;
    struct {
        unsigned int has_displayDepartureFrequency:1;
        unsigned int has_earliestDepartureTime:1;
        unsigned int has_latestDepartureTime:1;
        unsigned int has_maxDepartureFrequency:1;
        unsigned int has_minDepartureFrequency:1;
        unsigned int has_isEstimated:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL hasDisplayDepartureFrequency;
@property(nonatomic) unsigned int displayDepartureFrequency;
@property(nonatomic) BOOL hasIsEstimated;
@property(nonatomic) BOOL isEstimated;
@property(nonatomic) BOOL hasLatestDepartureTime;
@property(nonatomic) unsigned int latestDepartureTime;
@property(nonatomic) BOOL hasEarliestDepartureTime;
@property(nonatomic) unsigned int earliestDepartureTime;
@property(nonatomic) BOOL hasMaxDepartureFrequency;
@property(nonatomic) unsigned int maxDepartureFrequency;
@property(nonatomic) BOOL hasMinDepartureFrequency;
@property(nonatomic) unsigned int minDepartureFrequency;
@property(readonly, nonatomic) double frequencyForSorting;
- (BOOL)isValidAtDate:(id)arg1;
@property(readonly, nonatomic) long long frequencyType;
@property(readonly, nonatomic) long long maxFrequency;
@property(readonly, nonatomic) long long minFrequency;
@property(readonly, nonatomic) long long displayFrequency;
@property(readonly, nonatomic) BOOL isEstimate;
@property(readonly, nonatomic) NSDate *lastTimeInFrequency;
@property(readonly, nonatomic) NSDate *firstTimeInFrequency;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

