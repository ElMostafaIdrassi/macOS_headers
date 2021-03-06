//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface WBSParsecSearchResultCache : NSObject
{
    NSMutableDictionary *_resultSetCache;
    NSMutableDictionary *_resultSetsByPrefix;
    unsigned long long _cachedQueriesLimit;
}

- (void).cxx_destruct;
- (BOOL)_resultSet:(id)arg1 isMatchForQuery:(id)arg2;
- (BOOL)_shouldCacheResultSetForQueryMatching:(id)arg1;
@property(readonly, nonatomic) NSArray *allCachedQueries;
- (id)resultSetWithQuery:(id)arg1;
- (id)bestResultSetForQuery:(id)arg1;
- (void)cacheResultSet:(id)arg1;
- (void)cacheResultSetsFromSearchResponse:(id)arg1;
- (id)initWithCachedQueriesLimit:(unsigned long long)arg1;

@end

