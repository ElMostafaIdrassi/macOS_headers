//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RTITextOperations;

@protocol RTIInputSystemSessionResponseProtocol <NSObject>

@optional
- (oneway void)performTextOperations:(RTITextOperations *)arg1 resultHandler:(void (^)(unsigned long long))arg2;
- (oneway void)performTextOperations:(RTITextOperations *)arg1;
@end

