//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SFCard, SFImage, SFMoreResults;

@protocol SFResourceLoader <NSObject>

@optional
- (BOOL)loadMoreResults:(SFMoreResults *)arg1 withCompletionHandler:(void (^)(NSArray *, NSError *))arg2;
- (BOOL)loadCard:(SFCard *)arg1 withCompletionHandler:(void (^)(SFCard *, NSError *))arg2;
- (BOOL)loadImage:(SFImage *)arg1 withCompletionHandler:(void (^)(SFImage *, NSError *))arg2;
@end

