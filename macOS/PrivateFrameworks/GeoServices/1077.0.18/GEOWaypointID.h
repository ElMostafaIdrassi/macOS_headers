//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOStructuredAddress, NSMutableArray, NSString;

@interface GEOWaypointID : PBCodable <NSCopying>
{
    unsigned long long _muid;
    unsigned long long _resultProviderId;
    GEOStructuredAddress *_addressHint;
    NSMutableArray *_formattedAddressLineHints;
    GEOLatLng *_locationHint;
    NSString *_placeNameHint;
    int _placeTypeHint;
    struct {
        unsigned int muid:1;
        unsigned int resultProviderId:1;
        unsigned int placeTypeHint:1;
    } _has;
}

@property(nonatomic) int placeTypeHint; // @synthesize placeTypeHint=_placeTypeHint;
@property(retain, nonatomic) NSMutableArray *formattedAddressLineHints; // @synthesize formattedAddressLineHints=_formattedAddressLineHints;
@property(retain, nonatomic) NSString *placeNameHint; // @synthesize placeNameHint=_placeNameHint;
@property(retain, nonatomic) GEOStructuredAddress *addressHint; // @synthesize addressHint=_addressHint;
@property(retain, nonatomic) GEOLatLng *locationHint; // @synthesize locationHint=_locationHint;
@property(nonatomic) unsigned long long resultProviderId; // @synthesize resultProviderId=_resultProviderId;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasPlaceTypeHint;
- (id)formattedAddressLineHintAtIndex:(unsigned long long)arg1;
- (unsigned long long)formattedAddressLineHintsCount;
- (void)addFormattedAddressLineHint:(id)arg1;
- (void)clearFormattedAddressLineHints;
@property(readonly, nonatomic) BOOL hasPlaceNameHint;
@property(readonly, nonatomic) BOOL hasAddressHint;
@property(readonly, nonatomic) BOOL hasLocationHint;
@property(nonatomic) BOOL hasResultProviderId;
@property(nonatomic) BOOL hasMuid;
- (void)dealloc;

@end

