//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSIndexSet, NSMutableArray, NSMutableIndexSet;

@interface CNAutocompleteQueryResponseUniqueResultFinder : NSObject
{
    NSMutableArray *_uniqueResults;
    NSMutableArray *_hashes;
    NSDictionary *_hashIndex;
    NSIndexSet *_firstIndexes;
    NSMutableIndexSet *_uniqueResultIndexes;
    CDUnknownBlockType _duplicateResultHandler;
}

+ (id)findUniqueResults:(id)arg1 duplicateResultHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)resolveDuplicatesWithinIndexes:(id)arg1;
- (void)removeDuplicateResults;
- (void)indexHashes;
- (void)generateHashes;
- (id)findUniqueResults;
- (id)initWithResults:(id)arg1 duplicateResultHandler:(CDUnknownBlockType)arg2;

@end

