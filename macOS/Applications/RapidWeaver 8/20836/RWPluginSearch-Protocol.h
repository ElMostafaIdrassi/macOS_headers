//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, RWSearchResult;

@protocol RWPluginSearch <NSObject>
- (void)cancelSearch;
- (void)navigateToSearchResult:(RWSearchResult *)arg1;
- (void)searchForString:(NSString *)arg1 foundResult:(void (^)(RWSearchResult *))arg2 completion:(void (^)(void))arg3;
@end

