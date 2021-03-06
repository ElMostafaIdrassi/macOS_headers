//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ICMSearchQueryController, ICSearchResult, NSArray, NSString;

@protocol ICMSearchQuerying <NSObject>
- (ICSearchResult *)searchResultAtRow:(long long)arg1;
- (void)clearSearchResults;
- (void)reloadSearchResults;
- (void)updateSearchResults;
- (void)cancelSearch;
- (void)searchForSearchStringIfNecessary:(NSString *)arg1 suggestions:(NSArray *)arg2;
- (ICMSearchQueryController *)searchQueryController;
- (unsigned long long)batchSize;
@end

