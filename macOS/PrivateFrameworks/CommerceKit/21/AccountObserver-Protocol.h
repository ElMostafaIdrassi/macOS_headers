//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKStoreAccount, CKStoreClient;

@protocol AccountObserver <NSObject>
- (void)storeClient:(CKStoreClient *)arg1 changedPrimaryAccount:(CKStoreAccount *)arg2;
@end

