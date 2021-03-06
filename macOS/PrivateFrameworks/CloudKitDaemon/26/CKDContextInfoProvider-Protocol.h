//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKContainerID, CKDFlowControlManager, CKDOperation, CKDPCSManager, CKDServerConfiguration, CKDURLRequest, CKDZoneGatekeeper, NSString, NSURL;

@protocol CKDContextInfoProvider <NSObject>
@property(readonly, nonatomic) NSString *processName;
@property(readonly, nonatomic) NSString *applicationBundleIDForServer;
@property(readonly, nonatomic) NSString *applicationBundleIDForPush;
@property(readonly, nonatomic) NSString *apsEnvironmentString;
@property(readonly, nonatomic) BOOL hasSystemServiceEntitlement;
@property(readonly, nonatomic) BOOL canAuthWithCloudKit;
@property(readonly, nonatomic) BOOL canAccessProtectionData;
@property(readonly, nonatomic) BOOL bypassPCSEncryption;
@property(readonly, nonatomic) NSString *applicationPackageStagingDirectory;
@property(readonly, nonatomic) NSString *applicationFrameworkCachesDirectory;
@property(readonly, nonatomic) NSString *applicationVersion;
@property(readonly, nonatomic) NSString *regionCode;
@property(readonly, nonatomic) NSString *languageCode;
@property(readonly, nonatomic) NSString *deviceName;
@property(readonly, nonatomic) NSString *hardwareID;
@property(readonly, nonatomic) NSString *personaID;
@property(readonly, nonatomic) NSString *sourceApplicationBundleID;
@property(readonly, nonatomic) NSString *associatedApplicationBundleID;
@property(readonly, nonatomic) NSString *applicationBundleID;
@property(readonly, nonatomic) CKContainerID *containerID;
@property(readonly, copy) NSString *containerScopedUserID;
@property(readonly, nonatomic) CKDZoneGatekeeper *backgroundZoneGatekeeper;
@property(readonly, nonatomic) CKDZoneGatekeeper *foregroundZoneGatekeeper;
@property(readonly, nonatomic) CKDPCSManager *pcsManager;
@property(readonly, nonatomic) CKDFlowControlManager *flowControlManager;
@property(readonly, nonatomic) CKDServerConfiguration *config;
@property(readonly, nonatomic) long long contextType;
- (void)fetchServerEnvironmentForOperation:(CKDOperation *)arg1 withCompletionHandler:(void (^)(long long, NSError *))arg2;
- (void)fetchImportantUserIDsForOperation:(CKDOperation *)arg1 withCompletionHandler:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)fetchPrivateURLForServerType:(long long)arg1 operation:(CKDOperation *)arg2 completionHandler:(void (^)(NSURL *, NSError *))arg3;
- (void)fetchPublicURLForServerType:(long long)arg1 operation:(CKDOperation *)arg2 completionHandler:(void (^)(NSURL *, NSError *))arg3;
- (void)fetchConfigurationForOperation:(CKDOperation *)arg1 withCompletionHandler:(void (^)(CKDServerConfiguration *, NSError *))arg2;
- (NSString *)deviceIDForOperation:(CKDOperation *)arg1;
- (NSURL *)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
- (void)performRequest:(CKDURLRequest *)arg1;
@end

