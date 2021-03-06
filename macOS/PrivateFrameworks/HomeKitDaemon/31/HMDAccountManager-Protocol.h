//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDAccount, HMDAccountHandle, HMDBackingStore, HMDBackingStoreModelObject, HMDBackingStoreTransactionActions, HMDDevice;

@protocol HMDAccountManager <NSObject>
@property(retain, nonatomic) HMDBackingStore *backingStore;
- (BOOL)shouldDevice:(HMDDevice *)arg1 processModel:(HMDBackingStoreModelObject *)arg2 actions:(HMDBackingStoreTransactionActions *)arg3;
- (BOOL)shouldAccount:(HMDAccount *)arg1 pushbackModel:(HMDBackingStoreModelObject *)arg2 actions:(HMDBackingStoreTransactionActions *)arg3;
- (BOOL)shouldSyncDevice:(HMDDevice *)arg1;
- (BOOL)shouldSyncAccount:(HMDAccount *)arg1;
- (BOOL)shouldCacheAccount:(HMDAccount *)arg1;

@optional
- (HMDAccountHandle *)primaryHandleForAccount:(HMDAccount *)arg1;
@end

