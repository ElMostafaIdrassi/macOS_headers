//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMapItemVenueBuilding-Protocol.h>

@protocol GEOVenueIdentifier, GEOVenueLabel;

@interface GEOMapItemVenueBuilding : NSObject <GEOMapItemVenueBuilding>
{
    id <GEOVenueIdentifier> _identifier;
    id <GEOVenueLabel> _label;
}

+ (id)buildingsForVenueID:(unsigned long long)arg1 fromVenueBuildings:(id)arg2;
@property(readonly, nonatomic) id <GEOVenueLabel> label; // @synthesize label=_label;
@property(readonly, nonatomic) id <GEOVenueIdentifier> identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithVenueID:(unsigned long long)arg1 building:(id)arg2;
- (id)initWithIdentifier:(id)arg1 label:(id)arg2;

@end

