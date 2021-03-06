//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOVenueFilterItem.h"

@interface GEOVenueFilterItem : NSObject <GEOVenueFilterItem>
{
    id <GEOVenueIdentifier> _filterID;
    id <GEOVenueLabel> _label;
    BOOL _describesParentVenue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL describesParentVenue; // @synthesize describesParentVenue=_describesParentVenue;
@property(readonly, nonatomic) id <GEOVenueLabel> label; // @synthesize label=_label;
@property(readonly, nonatomic) id <GEOVenueIdentifier> filterID; // @synthesize filterID=_filterID;
- (id)initWithFilterElementInfo:(id)arg1;
- (id)initWithLabel:(id)arg1 filterID:(id)arg2;
- (id)init;

@end

