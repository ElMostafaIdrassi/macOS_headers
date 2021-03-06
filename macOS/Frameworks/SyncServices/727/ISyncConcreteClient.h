//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SyncServices/ISyncClient.h>

#import <SyncServices/NSKeyedUnarchiverDelegate-Protocol.h>

@class ISDClient, ISyncManager, ISyncSession, NSString;

@interface ISyncConcreteClient : ISyncClient <NSKeyedUnarchiverDelegate>
{
    ISDClient *_client;
    ISyncManager *_syncManager;
    ISyncSession *_syncSession;
    BOOL _isInvalid;
    BOOL _closureComputationIsDisabled;
}

- (void)_setSyncStatesAfterSyncSession:(id)arg1;
- (id)_syncStates;
- (BOOL)_compareAnchors:(id)arg1 forEntityNames:(id)arg2 entitiesToRefreshSync:(id *)arg3 entitiesToSlowSync:(id *)arg4;
- (void)_saveAnchors:(id)arg1;
- (id)_reduceAnchorMapping:(id)arg1;
- (BOOL)allowUnknownEntitiesAndUnresolvedReferences;
- (void)setFormatsRelationships:(BOOL)arg1;
- (void)setNeverFormatsRelationships:(BOOL)arg1;
- (BOOL)formatsRelationships;
- (BOOL)neverFormatsRelationships;
- (void)setUseLocalIdsForGUIDs:(BOOL)arg1;
- (BOOL)useLocalIdsForGUIDs;
- (void)setSyncAlertHandler:(id)arg1 selector:(SEL)arg2;
- (void)setSyncAlertToolBundleId:(id)arg1 bundleRelativePath:(id)arg2;
- (BOOL)shouldTrackRecordModificationTimes;
- (unsigned long long)trackRecordModificationTimes;
- (void)setTrackRecordModificationTimes:(BOOL)arg1;
- (void)setSyncsAfterClients:(BOOL)arg1;
- (BOOL)syncsAfterClients;
- (void)setSyncAlertToolPath:(id)arg1;
- (id)syncAlertToolPath;
- (void)setShouldSynchronize:(BOOL)arg1 withClientsOfType:(id)arg2;
- (BOOL)shouldSynchronizeWithClientsOfType:(id)arg1;
- (void)setFilters:(id)arg1;
- (id)_addRelatedEntitiesFilterIfNecessary:(id)arg1;
- (BOOL)_shouldReplaceOldFilters:(id)arg1 withFilters:(id)arg2 entityNamesToRefilter:(id *)arg3;
- (id)filters;
- (id)_filters:(BOOL)arg1;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (BOOL)shouldPushTruthOnNextSyncForEntityName:(id)arg1;
- (void)setShouldReplaceClientRecords:(BOOL)arg1 forEntityNames:(id)arg2;
- (BOOL)shouldReplaceClientRecordsForEntityName:(id)arg1;
- (void)setEnabled:(BOOL)arg1 forEntityNames:(id)arg2;
- (BOOL)isEnabledForEntityName:(id)arg1;
- (id)enabledEntityNames;
- (int)lastSyncStatusForEntityName:(id)arg1;
- (id)lastSyncDateForEntityName:(id)arg1;
- (unsigned int)lastSyncGeneration:(id)arg1;
- (id)lastSyncDate;
- (BOOL)canPullChangesForEntityName:(id)arg1;
- (BOOL)canPushChangesForEntityName:(id)arg1;
- (id)_syncStateForEntityName:(id)arg1;
- (id)supportedEntityNames;
- (BOOL)isClientFastSyncingAllEntitiesWithNames:(id)arg1;
- (BOOL)synchronizesAllEntities;
- (void)setImageBundleId:(id)arg1 bundleRelativePath:(id)arg2;
- (void)setImagePath:(id)arg1;
- (int)idNumber;
- (id)imagePath;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (id)clientType;
- (id)clientIdentifier;
- (id)descriptionFile;
- (BOOL)_closureComputationIsDisabled;
- (void)_setClosureComputationIsDisabled:(BOOL)arg1;
- (BOOL)isInvalid;
- (void)invalidate;
- (void)setSyncSession:(id)arg1;
- (id)syncSession;
- (void)setSyncManager:(id)arg1;
- (id)syncManager;
- (id)_client;
- (id)_logDirectoryPath;
- (id)_dataDirectoryPath;
@property(readonly, copy) NSString *description;
- (void)finalize;
- (void)dealloc;
- (id)initWithClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

