//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCItem-Protocol.h>
#import <CloudDocsDaemon/BRCSyncThrottleItemProtocol-Protocol.h>

@class BRCAccountSession, BRCAliasItem, BRCAppLibrary, BRCClientZone, BRCDirectoryItem, BRCDocumentItem, BRCFSRootItem, BRCFinderBookmarkItem, BRCItemID, BRCLocalStatInfo, BRCPQLConnection, BRCServerZone, BRCSharedDocumentItem, BRCSymlinkItem, CKRecord, CKRecordID, NSError, NSMutableSet, NSNumber, NSString;

@interface BRCLocalItem : NSObject <BRCSyncThrottleItemProtocol, BRCItem>
{
    BRCAccountSession *_session;
    BRCServerZone *_serverZone;
    BRCClientZone *_clientZone;
    BRCPQLConnection *_db;
    BRCAppLibrary *_appLibrary;
    BRCItemID *_itemID;
    NSNumber *_ownerKey;
    BRCLocalStatInfo *_st;
    unsigned int _syncUpState;
    BRCLocalItem *_orig;
    unsigned long long _localDiffs;
    NSNumber *_inFlightDiffs;
    NSNumber *_minimumSupportedOSRowID;
    unsigned long long _dbRowID;
    unsigned long long _notifsRank;
    unsigned long long _sharingOptions;
    NSNumber *_knownByServer;
    NSNumber *_isInDocumentScope;
    NSNumber *_parentFileID;
    id _serverPathMatchID;
    BOOL _resolvedPath;
    BOOL _forceDelete;
    BOOL _forceDeletedAlready;
    BOOL _forceNotif;
    NSString *_path;
}

+ (BOOL)supportsSecureCoding;
+ (id)newItemWithPath:(id)arg1 parentID:(id)arg2;
+ (id)bookmarkDataWithItemResolutionString:(id)arg1 serverZone:(id)arg2;
+ (id)_bookmarkDataWithItemResolutionString:(id)arg1 serverZone:(id)arg2 salted:(BOOL)arg3;
@property(retain, nonatomic) BRCAppLibrary *appLibrary; // @synthesize appLibrary=_appLibrary;
@property(nonatomic) unsigned long long sharingOptions; // @synthesize sharingOptions=_sharingOptions;
@property(readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) BRCClientZone *clientZone; // @synthesize clientZone=_clientZone;
@property(readonly, nonatomic) BRCServerZone *serverZone; // @synthesize serverZone=_serverZone;
@property(readonly, nonatomic) unsigned long long notifsRank; // @synthesize notifsRank=_notifsRank;
@property(readonly, nonatomic) NSNumber *inFlightDiffs; // @synthesize inFlightDiffs=_inFlightDiffs;
@property(readonly, nonatomic) unsigned long long localDiffs; // @synthesize localDiffs=_localDiffs;
@property(readonly, nonatomic) BRCLocalItem *orig; // @synthesize orig=_orig;
@property(readonly, nonatomic) unsigned int syncUpState; // @synthesize syncUpState=_syncUpState;
@property(readonly, nonatomic) BRCLocalStatInfo *st; // @synthesize st=_st;
@property(readonly, nonatomic) NSNumber *ownerKey; // @synthesize ownerKey=_ownerKey;
@property(readonly, nonatomic) BRCItemID *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) unsigned long long dbRowID; // @synthesize dbRowID=_dbRowID;
- (void).cxx_destruct;
- (BOOL)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
@property(readonly, nonatomic) BOOL isRejected;
@property(readonly, nonatomic) BOOL isIdleOrRejected;
@property(readonly, nonatomic) BOOL isReadAndUploaded;
@property(readonly, nonatomic) BOOL needsSyncUp;
@property(readonly, nonatomic) BOOL needsUpload;
@property(readonly, nonatomic) BOOL needsReading;
- (void)markBounceFailed;
- (void)markBounceFinished;
- (void)beginBounceAndSaveToDBWithName:(id)arg1;
- (void)beginBounceWithName:(id)arg1;
- (void)markMetadataLive;
- (void)markLiveFromStageWithAppLibrary:(id)arg1;
- (void)updateStructuralCKInfoFromServerItem:(id)arg1;
- (void)updateItemMetadataFromServerItem:(id)arg1;
- (void)updateStatMetadataFromServerItem:(id)arg1;
- (void)clearFromStage;
- (void)markStagedWithFileID:(unsigned long long)arg1 generationID:(unsigned int)arg2 documentID:(unsigned int)arg3;
- (void)markStagedWithFileID:(unsigned long long)arg1 generationID:(unsigned int)arg2;
- (void)markRenamedUsingServerItem:(id)arg1 toRelpath:(id)arg2;
- (void)markRemovedFromFilesystemForServerEdit:(BOOL)arg1;
- (void)moveAsideLocally;
- (void)markNeedsDeleteWhenAlreadyDeadInServerTruth;
- (void)markNeedsDeleteForRescheduleOfItem:(id)arg1;
- (void)markDead;
- (void)markReserved;
- (void)markLostWithoutBackoff;
- (void)markLostClearGenerationID:(BOOL)arg1 backoffMode:(unsigned char)arg2;
- (void)markLostWhenReplacedByItem:(id)arg1;
- (void)markFound;
- (void)_markLostWhenReplacedByItem:(id)arg1 backoffMode:(unsigned char)arg2;
- (void)handleUnknownItemError;
- (void)markItemForgottenByServer;
- (void)markLatestRequestAcknowledged;
- (void)markLatestSyncRequestRejected;
- (void)markLatestSyncRequestFailed;
- (void)prepareForSyncUp;
- (void)markNeedsUploadOrSyncingUp;
- (void)_markNeedsSyncingUp;
- (void)markForceNeedsSyncUp;
- (BOOL)changedAtRelativePath:(id)arg1 scanPackage:(BOOL)arg2;
- (BOOL)_contentXattrsHaveChangedAtRelativeAPath:(id)arg1;
- (BOOL)updateLocationAndMetaFromFSAtPath:(id)arg1 parentID:(id)arg2;
- (BOOL)updateFromFSAtPath:(id)arg1 parentID:(id)arg2;
- (void)_updateAppLibraryFromFSAtPath:(id)arg1;
- (BOOL)_checkZoneUpdateFromFSAtPath:(id)arg1 parentID:(id)arg2;
- (void)updateFromFSAtPath:(id)arg1;
- (BOOL)updateXattrInfoFromPath:(id)arg1 error:(id *)arg2;
- (void)learnItemID:(id)arg1 ownerKey:(id)arg2 path:(id)arg3 markLost:(BOOL)arg4;
- (unsigned long long)diffAgainstOriginalItem;
- (unsigned long long)diffAgainstLocalItem:(id)arg1;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (BOOL)saveToDBForServerEdit:(BOOL)arg1 keepAliases:(BOOL)arg2;
- (BOOL)saveToDB;
@property(readonly, nonatomic) unsigned int uploadStatus;
@property(readonly, nonatomic) NSError *syncUpError;
- (void)markForceNotify;
- (void)triggerNotificationIfNeeded;
- (void)_sendNotificationIfNeededWithDiffs:(unsigned long long)arg1 regather:(BOOL)arg2;
@property(readonly, nonatomic) NSMutableSet *setOfAppLibraryIDsWithReverseAliases;
- (id)fetchParentFileIDs;
- (id)_setOfParentIDs;
- (void)_ascendItemHierarchyWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)_isInterestingUpdateForNotifsWithDiffs:(unsigned long long)arg1;
- (BOOL)_isInterestingUpdateForNotifs;
- (BOOL)_deleteFromDB:(id)arg1 keepAliases:(BOOL)arg2;
- (BOOL)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (BOOL)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (void)_updateAppLibraryPristineStates;
- (id)parentItemOnFS;
- (id)parentItemInZone;
- (id)_parentItem;
- (BOOL)validateLoggingToFile:(struct __sFILE *)arg1;
- (id)initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id *)arg4;
- (id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id *)arg4;
- (id)initFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithRelativePath:(id)arg1 parentID:(id)arg2;
- (id)_initWithLocalItem:(id)arg1;
- (id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;
@property(readonly, nonatomic) NSString *digestDescription;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (void)markNeedsOSUpgradeToSyncUpWithName:(id)arg1;
- (id)osNameNeededToSyncUp;
@property(readonly, nonatomic) BOOL needsOSUpgradeToSyncUp;
- (void)inheritOSUpgradeNeededFromItem:(id)arg1;
@property(readonly, nonatomic) BOOL physicalNameNeedsRename;
@property(readonly, nonatomic) BOOL hasShareIDAndIsOwnedByMe;
@property(readonly, nonatomic) BOOL isSharedByMe;
@property(readonly, nonatomic) BOOL isShareAcceptationFault;
@property(readonly, nonatomic) BOOL isFinderBookmark;
@property(readonly, nonatomic) BOOL isSymLink;
@property(readonly, nonatomic) BOOL isFSRoot;
@property(readonly, nonatomic) BOOL isZoneRoot;
@property(readonly, nonatomic) BOOL isFault;
@property(readonly, nonatomic) BOOL isDocument;
@property(readonly, nonatomic) BOOL isPackage;
@property(readonly, nonatomic) BOOL isDirectory;
@property(readonly, nonatomic) BOOL isBRAlias;
@property(readonly, nonatomic) BOOL isReserved;
@property(readonly, nonatomic) BOOL isOnDisk;
@property(readonly, nonatomic) BOOL isLost;
@property(readonly, nonatomic) BOOL isAlmostDead;
@property(readonly, nonatomic) BOOL isDead;
@property(readonly, nonatomic) BOOL isLive;
@property(readonly, nonatomic) BRCItemID *serverPathMatchItemID;
@property(readonly, nonatomic) BOOL isDeadOrMissingInServerTruth;
@property(readonly, nonatomic) BOOL isKnownByServerOrInFlight;
@property(readonly, nonatomic) BOOL isKnownByServer;
- (void)_refreshAppLibraryFromParent;
@property(readonly, nonatomic) NSNumber *fileID;
@property(readonly, nonatomic) NSNumber *parentFileID;
@property(readonly, nonatomic) BOOL isInTrashScope;
@property(readonly, nonatomic) BOOL isInDataScope;
@property(readonly, nonatomic) BOOL isInDocumentOrTrashScope;
@property(readonly, nonatomic) BOOL isInDocumentScope;
- (BOOL)checkIsInDocumentsScopeWithParent:(id)arg1;
@property(readonly, nonatomic) BOOL isFromInitialScan;
@property(readonly, nonatomic) BOOL needsInsert;
@property(readonly, nonatomic) NSString *appLibraryID;
@property(readonly, nonatomic) NSString *extension;
@property(readonly, nonatomic) NSString *logicalName;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) BRCFinderBookmarkItem *asFinderBookmark;
@property(readonly, nonatomic) BRCSymlinkItem *asSymlink;
@property(readonly, nonatomic) BRCFSRootItem *asFSRoot;
@property(readonly, nonatomic) BRCSharedDocumentItem *asSharedDocument;
@property(readonly, nonatomic) BRCDocumentItem *asDocument;
@property(readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property(readonly, nonatomic) BRCAliasItem *asBRAlias;
@property(readonly, nonatomic) CKRecordID *structureRecordID;
- (void)_serializeStructuralPluginHints:(id)arg1;
- (id)structureRecordBeingDeadInServerTruth:(BOOL)arg1 stageID:(id)arg2 pcsChained:(BOOL)arg3;
@property(readonly, nonatomic) CKRecord *baseStructureRecord;
- (float)fakeSync;
- (void)prepareAppLibraryRootSyncUpWithOperation:(id)arg1;
- (float)prepareEditSyncUpWithOperation:(id)arg1 defaults:(id)arg2;
- (float)prepareDeletionSyncUpWithOperation:(id)arg1 defaults:(id)arg2;
@property(readonly, nonatomic) NSString *bookmarkData;
- (id)itemResolutionString;
- (void)fixupStagedItemAtStartup;
- (void)applyMetadataOnFileID:(unsigned long long)arg1 liveFD:(unsigned long long)arg2;
- (BOOL)learnStagedInfoFromDownloadStageID:(id)arg1 error:(id *)arg2;

@end

