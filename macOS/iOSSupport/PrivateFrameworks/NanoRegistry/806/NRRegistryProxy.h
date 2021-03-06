//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoRegistry/NRXPCProxy.h>

#import <NanoRegistry/NRXPCRegistryDelegate-Protocol.h>

@interface NRRegistryProxy : NRXPCProxy <NRXPCRegistryDelegate>
{
}

+ (BOOL)requireAnEntitlement;
+ (id)entitlements;
+ (id)clientRemoteObjectInterface;
+ (id)serverExportedInterface;
+ (id)machServiceName;
- (void)logCaller:(SEL)arg1 args:(id)arg2;
- (void)xpcSetMigrationConsented:(BOOL)arg1 forDeviceID:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)xpcApplyDiff:(id)arg1 withSecureProperties:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)xpcGetChangeHistoryWithBlock:(CDUnknownBlockType)arg1;
- (void)xpcClientInfo:(CDUnknownBlockType)arg1;
- (void)xpcDeviceIDAtSwitchIndex:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)xpcSwitchIndex:(CDUnknownBlockType)arg1;
- (void)xpcRetrieveSecureProperties:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)xpcGetDiffSinceTokenValue:(unsigned long long)arg1 getSecureProperties:(BOOL)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)xpcGetDeviceCollectionWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)_hasInternalEntitlement;
- (BOOL)loudHasEntitlement:(id)arg1;
- (id)registryDelegate;

@end

