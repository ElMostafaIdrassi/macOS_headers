//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PGIncompleteLocationResolver;

@interface PGLocationsFilterer : NSObject
{
    NSArray *_sortedMomentNodes;
    NSArray *_locationNodes;
    PGIncompleteLocationResolver *_incompleteLocationResolver;
    NSArray *_filteredLocationNodes;
    unsigned long long _filteringType;
}

@property(nonatomic) unsigned long long filteringType; // @synthesize filteringType=_filteringType;
@property(readonly) PGIncompleteLocationResolver *incompleteLocationResolver; // @synthesize incompleteLocationResolver=_incompleteLocationResolver;
@property(readonly) NSArray *locationNodes; // @synthesize locationNodes=_locationNodes;
@property(readonly) NSArray *sortedMomentNodes; // @synthesize sortedMomentNodes=_sortedMomentNodes;
- (void).cxx_destruct;
- (id)_filteredSignificantLocationNodes;
@property(readonly, nonatomic) NSArray *filteredLocationNodes; // @synthesize filteredLocationNodes=_filteredLocationNodes;
- (id)initWithSortedMomentNodes:(id)arg1 locationNodes:(id)arg2 incompleteLocationResolver:(id)arg3;

@end

