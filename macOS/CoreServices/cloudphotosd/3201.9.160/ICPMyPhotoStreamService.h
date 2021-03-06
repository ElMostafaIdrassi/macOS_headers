//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICPAgentServiceBase.h"

#import "ICPMyPhotoStreamService-Protocol.h"
#import "MSDeleterDelegate-Protocol.h"
#import "MSDeleterPlugin-Protocol.h"
#import "MSMediaStreamDaemonDelegate-Protocol.h"
#import "MSPublisherDelegate-Protocol.h"
#import "MSPublisherPlugin-Protocol.h"
#import "MSSubscriberDelegate-Protocol.h"
#import "MSSubscriberPlugin-Protocol.h"

@class CPSMediaStreamDaemon, NSManagedObjectContext, NSString, NSTimer, NSURL, PFCoalescer, PFDispatchQueue;

@interface ICPMyPhotoStreamService : ICPAgentServiceBase <MSMediaStreamDaemonDelegate, MSSubscriberDelegate, MSSubscriberPlugin, MSPublisherDelegate, MSPublisherPlugin, MSDeleterDelegate, MSDeleterPlugin, ICPMyPhotoStreamService>
{
    CPSMediaStreamDaemon *_mediaStreamDaemon;
    PFDispatchQueue *_assetPreparationQueue;
    NSManagedObjectContext *_managedObjectContext;
    id _systemLibraryChangeObserver;
    NSURL *_currentSystemLibraryURL;
    NSString *_currentlyImportingMasterAssetHash;
    PFCoalescer *_alreadyImportedCheckCoalescer;
    PFCoalescer *_postImportCoalescer;
    NSTimer *_serverBackoffDateExpirationTimer;
}

+ (id)publisherPluginForPersonID:(id)arg1;
+ (id)deleterPluginForPersonID:(id)arg1;
+ (id)personIDsForPollingTriggeredByPushNotification;
+ (id)subscriberPluginForPersonID:(id)arg1;
@property(retain) NSTimer *serverBackoffDateExpirationTimer; // @synthesize serverBackoffDateExpirationTimer=_serverBackoffDateExpirationTimer;
@property(retain) PFCoalescer *postImportCoalescer; // @synthesize postImportCoalescer=_postImportCoalescer;
@property(retain) PFCoalescer *alreadyImportedCheckCoalescer; // @synthesize alreadyImportedCheckCoalescer=_alreadyImportedCheckCoalescer;
@property(retain) NSString *currentlyImportingMasterAssetHash; // @synthesize currentlyImportingMasterAssetHash=_currentlyImportingMasterAssetHash;
@property(retain) NSURL *currentSystemLibraryURL; // @synthesize currentSystemLibraryURL=_currentSystemLibraryURL;
@property(retain) id systemLibraryChangeObserver; // @synthesize systemLibraryChangeObserver=_systemLibraryChangeObserver;
@property(readonly) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain) PFDispatchQueue *assetPreparationQueue; // @synthesize assetPreparationQueue=_assetPreparationQueue;
@property(retain) CPSMediaStreamDaemon *mediaStreamDaemon; // @synthesize mediaStreamDaemon=_mediaStreamDaemon;
- (void).cxx_destruct;
- (long long)classicStreamDerivativeSizeMaximumPixelCount;
- (id)classicStreamDerivativeSizeSpecificationString;
- (void)clearQuotaExceededInformation;
- (void)postImportActivitesForVersionUuids:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteTemporaryUploadFilesForAssetCollections:(id)arg1;
- (void)publisher:(id)arg1 didFinishPublishingAssetCollections:(id)arg2;
- (void)publisher:(id)arg1 didRequestCloseFileDescriptor:(int)arg2 forAsset:(id)arg3;
- (int)publisher:(id)arg1 didRequestOpenFileDescriptorForAsset:(id)arg2;
- (void)publisher:(id)arg1 didEncounterError:(id)arg2 publishingAssetCollections:(id)arg3;
- (id)derivedAssetForMasterAsset:(id)arg1;
- (void)publisher:(id)arg1 didRequestSubmissionOfAssetCollections:(id)arg2;
- (void)publisherWillDeassignPluginAsDelegateOfPublisher:(id)arg1;
- (void)publisherWillAssignPluginAsDelegateOfPublisher:(id)arg1;
- (void)deleteAssetDirectoriesForMasterAssetHashes:(id)arg1;
- (void)subscriber:(id)arg1 didReceiveDeleteForAssetCollections:(id)arg2 streamID:(id)arg3;
- (void)deleter:(id)arg1 didFinishDeletingAssetCollection:(id)arg2 error:(id)arg3;
- (void)subscriber:(id)arg1 didFailToRetriveSubscriptionUpdateWithError:(id)arg2;
- (id)thumbnailIngestAssetForMasterAssetHash:(id)arg1 outIngestMetadata:(id *)arg2;
- (void)importMasterAssetWithHash:(id)arg1 intoLibraryAtURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)importMasterAssetWithHash:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)executeAssetBatchUpdateForProperties:(id)arg1 predicate:(id)arg2;
- (void)executeModelWriteAccess:(CDUnknownBlockType)arg1;
- (void)setItemState:(long long)arg1 forAssetWithIdentifier:(id)arg2;
- (void)resetStateForFailedImportAssets;
- (void)cleanupExpiredAssets;
- (void)cleanupImportedAssets;
- (void)importDownloadedAssets;
- (void)processDownloadRequests:(id)arg1;
- (void)markAlreadyImportedAssetsInDownloadRequests:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processPendingAssets;
- (void)subscriber:(id)arg1 didFinishRetrievingAsset:(id)arg2 error:(id)arg3;
- (id)executeAssetModelFetchWithPredicate:(id)arg1;
- (id)assetObjectForMasterAssetHash:(id)arg1;
- (id)existingOrNewAssetObjectForMasterAssetHash:(id)arg1;
- (id)checkedAssetFileURLForMasterAssetHash:(id)arg1;
- (id)assetUploadTempDirectoryURLForAssetCollectionIdentifier:(id)arg1;
- (id)checkedAssetUploadTempDirectoryURLForAssetCollectionIdentifier:(id)arg1;
- (id)checkedAssetDirectoryURLForMasterAssetHash:(id)arg1;
- (void)subscriber:(id)arg1 didRequestAssetRetrievalForAssetCollections:(id)arg2 streamID:(id)arg3;
- (void)closeDatabase;
- (id)setupDatabase;
- (void)daemonIdleTimerDidFire;
- (void)mediaStreamDaemonDidUnidle:(id)arg1;
- (void)mediaStreamDaemonDidIdle:(id)arg1;
- (void)deleteMediaItemsWithIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setFingerprintForTranscodedAssetWithUUID:(id)arg1 itemData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)itemInfoForConvertedIncompatibleFormatItemInfo:(id)arg1;
- (id)mediaItemsByConvertingIncompatibleFormatAssetsInUploadItems:(id)arg1;
- (void)postMediaItems:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)myPhotoStreamLibraryPathURL:(CDUnknownBlockType)arg1;
- (void)handlePushNotification;
- (BOOL)saveManagedObjectContext;
- (id)adminDataObjectForPersonID:(id)arg1 createWhenMissing:(BOOL)arg2;
- (void)retryOutstandingActivities;
- (void)myPhotoStreamBackoffDidExpire:(id)arg1;
- (void)updateServerBackoffDateExpirationTimerFireDate:(id)arg1;
- (void)myPhotoStreamQuotaNotification:(id)arg1;
- (void)serverSideConfigurationDidChange:(id)arg1;
- (id)serverSideConfiguration;
- (void)stopListeningForSystemLibraryChanges;
- (void)querySystemLibraryURLAndUuidWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned char)wellKnownClientIdentifier;
- (void)checkInitialSystemLibraryStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestServiceShutdown;
- (void)startListeningForSystemLibraryChanges;
- (void)stopListeningForQuotaMessages;
- (void)startListeningForQuotaMessages;
- (void)stopListeningForServerSideConfigurationChanges;
- (void)startListeningForServerSideConfigurationChanges;
- (void)disablePushNotifications;
- (void)enablePushNotifications;
- (id)workDirectoryURLsForPersistentStore;
- (id)serviceOwnedWorkDirectoryItemURLs;
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopForReset:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startMediaStreamDaemonWithPersonId:(id)arg1;
- (void)startServiceWithPersonId:(id)arg1;
- (void)applyServiceStateConfiguration;
- (id)serviceIdentifier;
- (id)clientProtocolForConnection:(id)arg1;
- (id)serviceProtocolForConnection:(id)arg1;
- (void)shutdownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didExceedPublishQuotaForPersonID:(id)arg1 retryDate:(id)arg2;
- (void)setupPostImportCoalescer;
- (void)setupAlreadyImportedCheckCoalescer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

