//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, NSUUID;

@protocol ISStoreServiceProtocol <NSObject>
- (void)addData:(NSData *)arg1 withUUID:(NSUUID *)arg2 domain:(NSString *)arg3 completion:(void (^)(BOOL))arg4;
- (void)fetchCachePathForDomain:(NSString *)arg1 completion:(void (^)(NSString *, NSString *))arg2;
@end

