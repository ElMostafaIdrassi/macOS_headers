//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCountedSet, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, PLPhotoLibrary;

@interface PLDupeManager : NSObject
{
    NSMutableArray *_normalAssetsObjectIDsToAnalyze;
    NSMutableDictionary *_cloudAssetsToAnalyze;
    NSMutableArray *_assetsWithUpdatedVisibility;
    BOOL _doneWithCloudAssets;
    BOOL _isRebuilding;
    NSMutableSet *_normalInserts;
    NSMutableSet *_cloudInserts;
    PLPhotoLibrary *_photoLibrary;
    NSCountedSet *_pauseReasons;
    NSSet *_softPauseReasons;
    double _rebuildStartTime;
}

+ (BOOL)_computeHashForAsset:(id)arg1;
+ (id)hashForData:(id)arg1;
+ (id)hashForFileAtPath:(id)arg1 utiType:(id)arg2;
+ (id)hashForAsset:(id)arg1;
+ (void)_setPlaceHolderHashOnAsset:(id)arg1;
+ (id)placeholderHash;
+ (id)_hashForFileAtPath:(id)arg1 utiType:(id)arg2;
+ (BOOL)resetDupesAnalysisForOfflineStore:(id)arg1 pathManager:(id)arg2;
+ (BOOL)_resetDupesAnalysisInManagedObjectContext:(id)arg1 pathManager:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (void)resumeAnalysisWithReason:(id)arg1;
- (void)pauseAnalysisWithReason:(id)arg1;
- (void)_resetSoftPauseReasons;
- (void)persistPublicGlobalUUIDsForAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)launchDupeAnalysisIfNeeded;
- (void)analyzeDupesWithNormalInserts:(id)arg1 cloudInserts:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_analyzeDupes;
- (void)_continueAnalysis;
- (short)_analyzeDupesForCloudInsertsForManagedObjectContext:(id)arg1;
- (BOOL)_analyzeDupeForCloudAssetsAndHashes:(id)arg1 andPublicGlobalUUIDs:(id)arg2 forManagedObjectContext:(id)arg3;
- (short)_analyzeDupesForNormalInsertsForManagedObjectContext:(id)arg1;
- (void)resetDupesAnalysis;
- (void)_analyzeDupesForRebuild;
- (void)_continueAnalysisForRebuildOrPause;
- (void)_continueAnalysisForRebuild;
- (void)_performAnalysisTransaction:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (short)_adjustCloudAssetVisibilityStateForManagedObjectContext:(id)arg1;
- (short)_computeAssetHashesForManagedObjectContext:(id)arg1;
- (short)_analyzeNormalAssetsForManagedObjectContext:(id)arg1;
- (void)_analyzeDupeForNormalAsset:(id)arg1;
- (void)_removeCloudAssetFromAnalysis:(id)arg1;
- (id)_duplicateCloudAssetForHash:(id)arg1 orPublicGlobalUUID:(id)arg2;
- (BOOL)_prepareCloudAssetsToAnalyzeForManagedObjectContext:(id)arg1;
- (void)_updateVisibilityState:(short)arg1 forAsset:(id)arg2;
- (void)_noteAssetVisibilityDidChange:(id)arg1;
- (short)_computeCloudAssetHashesForManagedObjectContext:(id)arg1;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;

@end

