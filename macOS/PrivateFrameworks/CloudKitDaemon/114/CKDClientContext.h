//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKDAccountAccessInfoProvider.h"
#import "CKDContainerScopedUserIDProvider.h"
#import "CKDContextInfoProvider.h"

@class CKAccountOverrideInfo, CKContainerID, CKDAccount, CKDAppContainerIntersectionMetadata, CKDAppContainerTuple, CKDApplicationMetadata, CKDCachePurger, CKDFlowControlManager, CKDKeyValueDiskCache, CKDMMCS, CKDPCSCache, CKDPCSManager, CKDPublicIdentityLookupService, CKDServerConfiguration, CKDZoneGatekeeper, NSHashTable, NSMutableDictionary, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface CKDClientContext : NSObject <CKDContextInfoProvider, CKDAccountAccessInfoProvider, CKDContainerScopedUserIDProvider>
{
    BOOL _isForClouddInternalUse;
    BOOL _hasDataContainer;
    BOOL _captureResponseHTTPHeaders;
    BOOL _useZoneWidePCS;
    BOOL _returnPCSMetadata;
    BOOL _bypassPCSEncryption;
    BOOL _forceEnableReadOnlyManatee;
    BOOL _isSiloedContext;
    BOOL _sandboxed;
    BOOL _finishedAppProxySetup;
    BOOL _finishedProxySetup;
    BOOL _wasInitializedWithProxy;
    unsigned int _clientSDKVersion;
    CKDServerConfiguration *_config;
    NSURL *_publicCloudDBURL;
    NSURL *_publicShareServiceURL;
    NSURL *_publicDeviceServiceURL;
    NSURL *_publicCodeServiceURL;
    NSURL *_publicMetricsServiceURL;
    NSURL *_publicDatabaseRPCServiceURL;
    NSString *_containerScopedUserID;
    NSString *_orgAdminUserID;
    NSHashTable *_proxies;
    long long _cachedEnvironment;
    CKContainerID *_containerID;
    NSString *_applicationBundleID;
    NSString *_sourceApplicationBundleID;
    NSString *_personaID;
    NSString *_applicationVersion;
    NSURL *_applicationIcon;
    NSString *_applicationDisplayName;
    NSString *_applicationContainerPath;
    NSString *_applicationContainerCloudKitDirectory;
    NSString *_applicationCachesDirectory;
    NSString *_applicationTemporaryDirectory;
    NSString *_applicationMMCSDirectory;
    NSString *_applicationAssetDbDirectory;
    NSString *_applicationFileStagingDirectory;
    NSString *_applicationFileDownloadDirectory;
    NSString *_applicationRecordCacheDirectory;
    NSString *_applicationFrameworkCachesDirectory;
    NSString *_applicationPackageStagingDirectory;
    CKDAppContainerTuple *_appContainerTuple;
    NSString *_hardwareID;
    long long _contextType;
    CKDAccount *_account;
    CKAccountOverrideInfo *_accountInfoOverride;
    CKDMMCS *_MMCS;
    CKDPCSCache *_pcsCache;
    CKDZoneGatekeeper *_foregroundZoneGatekeeper;
    CKDZoneGatekeeper *_backgroundZoneGatekeeper;
    NSMutableDictionary *_fakeErrorsByClassName;
    NSMutableDictionary *_fakeResponseOperationLifetimeByClassName;
    NSMutableDictionary *_fakeResponseOperationResultByClassNameByItemID;
    NSObject<OS_dispatch_queue> *_setupQueue;
    NSString *_contextID;
    CKDCachePurger *_cachePurger;
    NSMutableDictionary *_fileWatchersByPath;
    NSString *_containerEncryptionServiceName;
    NSString *_entitlementSpecifiedPCSServiceName;
    CKDKeyValueDiskCache *_publicIdentitiesDiskCache;
    CKDPublicIdentityLookupService *_foregroundPublicIdentityLookupService;
    CKDPublicIdentityLookupService *_backgroundPublicIdentityLookupService;
    CKDAppContainerIntersectionMetadata *_appContainerIntersectionMetadata;
    CKDApplicationMetadata *_applicationMetadata;
    CKDFlowControlManager *_flowControlManager;
    CKDPCSManager *_pcsManager;
    unsigned long long _mmcsEncryptionSupport;
    NSObject<OS_dispatch_group> *_proxyPreparationGroup;
}

+ (id)contextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;
+ (id)applicationCachesPathForBundleID:(id)arg1 usingHomeCachesDirectory:(BOOL)arg2;
+ (id)applicationCachesPathForBundleID:(id)arg1;
+ (id)sharedContextForInternalUseWithAppContainerTuple:(id)arg1 unitTestingAccountInfoProvider:(id)arg2;
+ (id)sharedContextForInternalUseWithAppContainerAccountTuple:(id)arg1;
+ (id)sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;
+ (id)_sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 forInternalUse:(BOOL)arg4 addToSharedContexts:(BOOL)arg5;
+ (id)_sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 forInternalUse:(BOOL)arg4;
+ (id)sharedContexts;
+ (id)applicationContainerPathForBundleID:(id)arg1 bundleURL:(id *)arg2 contextType:(long long *)arg3;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *proxyPreparationGroup; // @synthesize proxyPreparationGroup=_proxyPreparationGroup;
@property(readonly, nonatomic) unsigned long long mmcsEncryptionSupport; // @synthesize mmcsEncryptionSupport=_mmcsEncryptionSupport;
@property(retain, nonatomic) CKDPCSManager *pcsManager; // @synthesize pcsManager=_pcsManager;
@property(retain, nonatomic) CKDFlowControlManager *flowControlManager; // @synthesize flowControlManager=_flowControlManager;
@property(retain, nonatomic) CKDApplicationMetadata *applicationMetadata; // @synthesize applicationMetadata=_applicationMetadata;
@property(retain, nonatomic) CKDAppContainerIntersectionMetadata *appContainerIntersectionMetadata; // @synthesize appContainerIntersectionMetadata=_appContainerIntersectionMetadata;
@property(retain, nonatomic) CKDPublicIdentityLookupService *backgroundPublicIdentityLookupService; // @synthesize backgroundPublicIdentityLookupService=_backgroundPublicIdentityLookupService;
@property(retain, nonatomic) CKDPublicIdentityLookupService *foregroundPublicIdentityLookupService; // @synthesize foregroundPublicIdentityLookupService=_foregroundPublicIdentityLookupService;
@property(retain, nonatomic) CKDKeyValueDiskCache *publicIdentitiesDiskCache; // @synthesize publicIdentitiesDiskCache=_publicIdentitiesDiskCache;
@property(retain, nonatomic) NSString *entitlementSpecifiedPCSServiceName; // @synthesize entitlementSpecifiedPCSServiceName=_entitlementSpecifiedPCSServiceName;
@property(retain, nonatomic) NSString *containerEncryptionServiceName; // @synthesize containerEncryptionServiceName=_containerEncryptionServiceName;
@property(nonatomic) BOOL wasInitializedWithProxy; // @synthesize wasInitializedWithProxy=_wasInitializedWithProxy;
@property(retain, nonatomic) NSMutableDictionary *fileWatchersByPath; // @synthesize fileWatchersByPath=_fileWatchersByPath;
@property(retain, nonatomic) CKDCachePurger *cachePurger; // @synthesize cachePurger=_cachePurger;
@property(readonly, nonatomic) NSString *contextID; // @synthesize contextID=_contextID;
@property(nonatomic) BOOL finishedProxySetup; // @synthesize finishedProxySetup=_finishedProxySetup;
@property(nonatomic) BOOL finishedAppProxySetup; // @synthesize finishedAppProxySetup=_finishedAppProxySetup;
@property(nonatomic, getter=isSandboxed) BOOL sandboxed; // @synthesize sandboxed=_sandboxed;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *setupQueue; // @synthesize setupQueue=_setupQueue;
@property(retain, nonatomic) NSMutableDictionary *fakeResponseOperationResultByClassNameByItemID; // @synthesize fakeResponseOperationResultByClassNameByItemID=_fakeResponseOperationResultByClassNameByItemID;
@property(retain, nonatomic) NSMutableDictionary *fakeResponseOperationLifetimeByClassName; // @synthesize fakeResponseOperationLifetimeByClassName=_fakeResponseOperationLifetimeByClassName;
@property(retain, nonatomic) NSMutableDictionary *fakeErrorsByClassName; // @synthesize fakeErrorsByClassName=_fakeErrorsByClassName;
@property(retain, nonatomic) CKDZoneGatekeeper *backgroundZoneGatekeeper; // @synthesize backgroundZoneGatekeeper=_backgroundZoneGatekeeper;
@property(retain, nonatomic) CKDZoneGatekeeper *foregroundZoneGatekeeper; // @synthesize foregroundZoneGatekeeper=_foregroundZoneGatekeeper;
@property(readonly, nonatomic) CKDPCSCache *pcsCache; // @synthesize pcsCache=_pcsCache;
@property(retain) CKDMMCS *MMCS; // @synthesize MMCS=_MMCS;
@property(readonly, nonatomic) BOOL isSiloedContext; // @synthesize isSiloedContext=_isSiloedContext;
@property(nonatomic) unsigned int clientSDKVersion; // @synthesize clientSDKVersion=_clientSDKVersion;
@property(readonly, nonatomic) BOOL forceEnableReadOnlyManatee; // @synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee;
@property(readonly, nonatomic) BOOL bypassPCSEncryption; // @synthesize bypassPCSEncryption=_bypassPCSEncryption;
@property(nonatomic) BOOL returnPCSMetadata; // @synthesize returnPCSMetadata=_returnPCSMetadata;
@property(readonly, nonatomic) BOOL useZoneWidePCS; // @synthesize useZoneWidePCS=_useZoneWidePCS;
@property(nonatomic) BOOL captureResponseHTTPHeaders; // @synthesize captureResponseHTTPHeaders=_captureResponseHTTPHeaders;
@property(nonatomic) BOOL hasDataContainer; // @synthesize hasDataContainer=_hasDataContainer;
@property(readonly, nonatomic) CKAccountOverrideInfo *accountInfoOverride; // @synthesize accountInfoOverride=_accountInfoOverride;
@property(retain) CKDAccount *account; // @synthesize account=_account;
@property(nonatomic) long long contextType; // @synthesize contextType=_contextType;
@property(readonly, nonatomic) NSString *hardwareID; // @synthesize hardwareID=_hardwareID;
@property(readonly, nonatomic) CKDAppContainerTuple *appContainerTuple; // @synthesize appContainerTuple=_appContainerTuple;
@property(retain, nonatomic) NSString *applicationPackageStagingDirectory; // @synthesize applicationPackageStagingDirectory=_applicationPackageStagingDirectory;
@property(retain, nonatomic) NSString *applicationFrameworkCachesDirectory; // @synthesize applicationFrameworkCachesDirectory=_applicationFrameworkCachesDirectory;
@property(retain, nonatomic) NSString *applicationRecordCacheDirectory; // @synthesize applicationRecordCacheDirectory=_applicationRecordCacheDirectory;
@property(retain, nonatomic) NSString *applicationFileDownloadDirectory; // @synthesize applicationFileDownloadDirectory=_applicationFileDownloadDirectory;
@property(retain, nonatomic) NSString *applicationFileStagingDirectory; // @synthesize applicationFileStagingDirectory=_applicationFileStagingDirectory;
@property(retain, nonatomic) NSString *applicationAssetDbDirectory; // @synthesize applicationAssetDbDirectory=_applicationAssetDbDirectory;
@property(retain, nonatomic) NSString *applicationMMCSDirectory; // @synthesize applicationMMCSDirectory=_applicationMMCSDirectory;
@property(readonly, nonatomic) NSString *applicationTemporaryDirectory; // @synthesize applicationTemporaryDirectory=_applicationTemporaryDirectory;
@property(retain, nonatomic) NSString *applicationCachesDirectory; // @synthesize applicationCachesDirectory=_applicationCachesDirectory;
@property(retain, nonatomic) NSString *applicationContainerCloudKitDirectory; // @synthesize applicationContainerCloudKitDirectory=_applicationContainerCloudKitDirectory;
@property(retain, nonatomic) NSString *applicationContainerPath; // @synthesize applicationContainerPath=_applicationContainerPath;
@property(readonly, nonatomic) NSString *applicationDisplayName; // @synthesize applicationDisplayName=_applicationDisplayName;
@property(readonly, nonatomic) NSURL *applicationIcon; // @synthesize applicationIcon=_applicationIcon;
@property(retain, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(readonly, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;
@property(readonly, nonatomic) NSString *sourceApplicationBundleID; // @synthesize sourceApplicationBundleID=_sourceApplicationBundleID;
@property(retain, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property(readonly, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property long long cachedEnvironment; // @synthesize cachedEnvironment=_cachedEnvironment;
@property(retain, nonatomic) NSHashTable *proxies; // @synthesize proxies=_proxies;
@property(nonatomic) BOOL isForClouddInternalUse; // @synthesize isForClouddInternalUse=_isForClouddInternalUse;
@property(copy) NSString *orgAdminUserID; // @synthesize orgAdminUserID=_orgAdminUserID;
@property(copy) NSString *containerScopedUserID; // @synthesize containerScopedUserID=_containerScopedUserID;
@property(copy) NSURL *publicDatabaseRPCServiceURL; // @synthesize publicDatabaseRPCServiceURL=_publicDatabaseRPCServiceURL;
@property(copy) NSURL *publicMetricsServiceURL; // @synthesize publicMetricsServiceURL=_publicMetricsServiceURL;
@property(copy) NSURL *publicCodeServiceURL; // @synthesize publicCodeServiceURL=_publicCodeServiceURL;
@property(copy) NSURL *publicDeviceServiceURL; // @synthesize publicDeviceServiceURL=_publicDeviceServiceURL;
@property(copy) NSURL *publicShareServiceURL; // @synthesize publicShareServiceURL=_publicShareServiceURL;
@property(copy) NSURL *publicCloudDBURL; // @synthesize publicCloudDBURL=_publicCloudDBURL;
@property(retain, nonatomic) CKDServerConfiguration *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (unsigned long long)aggregatedOutstandingOperationCount;
- (void)clearAuthTokensForRecordWithID:(id)arg1 databaseScope:(long long)arg2;
- (void)clearPILSCacheForLookupInfos:(id)arg1;
- (void)clearContextFromMetadataCache;
- (void)clearRecordCacheWithDatabaseScope:(long long)arg1;
- (void)clearRecordCache;
- (void)showAssetCacheWithDatabaseScope:(long long)arg1;
- (void)clearAssetCacheWithDatabaseScope:(long long)arg1;
- (void)showAssetCache;
- (void)clearAssetCache;
- (unsigned long long)countAssetCacheItemsWithDatabaseScope:(long long)arg1;
- (unsigned long long)countAssetCacheItems;
- (void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 withLifetime:(int)arg4;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2;
@property(nonatomic) BOOL hasExplicitCodeOperationURLEntitlement;
@property(nonatomic) BOOL hasAllowUnverifiedAccountEntitlement;
@property(nonatomic) BOOL hasNonLegacyShareURLEntitlement;
@property(readonly, nonatomic) NSString *applicationBundleIDForServer;
@property(readonly, nonatomic) NSString *applicationBundleIDForPush;
@property(retain, nonatomic) NSString *clientPrefixEntitlement;
@property(retain, nonatomic) NSString *associatedApplicationBundleID;
@property(readonly, nonatomic) NSString *encryptionServiceName;
@property(nonatomic) BOOL hasDisplaysSystemAcceptPromptEntitlement;
@property(nonatomic) BOOL hasParticipantPIIEntitlement;
@property(nonatomic) BOOL hasOutOfProcessUIEntitlement;
@property(nonatomic) BOOL hasTCCAuthorization;
@property(nonatomic) BOOL hasLightweightPCSEntitlement;
@property(nonatomic) BOOL hasAllowAccessDuringBuddyEntitlement;
@property(nonatomic) BOOL canSetDeviceIdentifier;
@property(nonatomic) BOOL canAccessZoneProtectionData;
@property(nonatomic) BOOL canAccessProtectionData;
@property(nonatomic) BOOL hasAllowCustomAccountsEntitlement;
@property(nonatomic) BOOL hasAllowSetEnvironmentEntitlement;
@property(nonatomic) BOOL hasMasqueradingEntitlement;
@property(nonatomic, setter=setHasSystemServiceEntitlement:) BOOL hasSystemServiceEntitlement;
@property(retain, nonatomic, setter=setAPSEnvironmentString:) NSString *apsEnvironmentString;
@property(nonatomic) BOOL allowsPowerNapScheduling;
- (BOOL)shouldUsePCSEncryption;
@property(readonly, nonatomic) NSString *processName;
@property(readonly, nonatomic) NSString *regionCode;
@property(readonly, nonatomic) NSString *languageCode;
@property(readonly, nonatomic) NSString *deviceName;
- (void)fetchPrivateURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)deviceIDForOperation:(id)arg1;
- (void)fetchServerEnvironmentForOperation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchImportantUserIDsForOperation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchPublicURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchContainerInfoForOperation:(id)arg1 requireUserIDs:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchConfigurationForOperation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
- (id)_urlBySettingCustomBaseURL:(id)arg1 onURL:(id)arg2;
- (void)finishSetupWithClientProxy:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startSetupWithClientProxy:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeClientProxy:(id)arg1;
- (void)addClientProxy:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;
- (double)publicIdentitiesExpirationTimeout;
- (void)showUserNotification:(void *)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)performRequest:(id)arg1;
- (void)tearDownAssetTransfers;
- (BOOL)setupAssetTransfersWithClientProxy:(id)arg1 error:(id *)arg2;
- (BOOL)setupMMCSWrapperWithError:(id *)arg1;
- (id)assetDirectoryContext;
- (id)createAppContainerTuple;
- (id)_issueSandboxExtensionForPath:(id)arg1 withAuditToken:(CDStruct_6ad76789)arg2 error:(id *)arg3;
- (BOOL)_setupDirectoriesWithClientProxy:(id)arg1 sandboxExtensions:(id *)arg2 error:(id *)arg3;
- (void)_determineHardwareInfo;
- (void)_loadApplicationContainerPathAndType;
@property(readonly, nonatomic) BOOL allowsCellularAccess;
@property(readonly, nonatomic) BOOL canAuthWithCloudKit;
- (BOOL)hasAccountAccessAndTCCAuth;
@property(readonly, nonatomic) BOOL canAccessAccount;
- (BOOL)_anyAssociatedProxyHasTCCAuthorization;
- (BOOL)_cloudKitEnabledForCurrentClient;
- (id)_dataclassNameForContainerIdentifier:(id)arg1;
- (void)_reloadAccount:(BOOL)arg1;
- (void)_cancelAllLongLivedOperations;
- (void)dealloc;
- (void)dropMMCS;
- (void)_clearCaches;
- (id)initWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

