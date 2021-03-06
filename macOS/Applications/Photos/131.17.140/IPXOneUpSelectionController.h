//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXMutableOneUpSelectionController-Protocol.h"
#import "PXAssetsDataSourceManagerObserver-Protocol.h"

@class NSHashTable, NSString, PXAssetReference, PXAssetsDataSource, PXAssetsDataSourceManager, PXSelectionSnapshot, PXUpdater;
@protocol PXDisplayAsset;

__attribute__((visibility("hidden")))
@interface IPXOneUpSelectionController : NSObject <IPXMutableOneUpSelectionController, PXAssetsDataSourceManagerObserver>
{
    PXUpdater *_updater;
    PXAssetsDataSourceManager *_dataSourceManager;
    PXAssetsDataSource *_dataSource;
    unsigned long long _numberOfSections;
    unsigned long long _currentSection;
    unsigned long long _currentAssetIndexInSection;
    BOOL _animate;
    NSHashTable *_observers;
    BOOL _isPerformingChanges;
    id _changesSender;
    PXSelectionSnapshot *_selectionSnapshot;
    PXAssetReference *_selectedAssetReference;
    unsigned long long _flatSelectedAssetIndex;
    struct PXSimpleIndexPath _selectedAssetIndexPath;
}

@property(nonatomic) unsigned long long flatSelectedAssetIndex; // @synthesize flatSelectedAssetIndex=_flatSelectedAssetIndex;
@property(nonatomic) struct PXSimpleIndexPath selectedAssetIndexPath; // @synthesize selectedAssetIndexPath=_selectedAssetIndexPath;
@property(retain, nonatomic) PXAssetReference *selectedAssetReference; // @synthesize selectedAssetReference=_selectedAssetReference;
@property(retain, nonatomic) PXSelectionSnapshot *selectionSnapshot; // @synthesize selectionSnapshot=_selectionSnapshot;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (struct PXSimpleIndexPath)selectedAssetIndexPathAfterApplyingChangesToDataSource:(id)arg1;
- (void)_updateDataSource;
- (void)_updateSelectedAsset;
- (BOOL)_updateSelectedAssetFromCurrentStateIfNeeded;
@property(readonly, nonatomic) NSObject<PXDisplayAsset> *selectedAsset;
- (struct PXSimpleIndexPath)nextIndexPathRelativeToCurrentSelectionInReverseDirection:(BOOL)arg1;
@property(readonly, nonatomic) struct PXSimpleIndexPath previousIndexPath;
@property(readonly, nonatomic) struct PXSimpleIndexPath nextIndexPath;
@property(readonly, nonatomic) BOOL canSelectPreviousAsset;
@property(readonly, nonatomic) BOOL canSelectNextAsset;
- (void)selectPreviousAsset;
- (void)selectNextAsset;
- (void)selectAssetAtSimpleIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)selectAssetAtIndexPath:(id)arg1;
- (void)_performChangesFromSender:(id)arg1 animate:(BOOL)arg2 withChangeBlock:(CDUnknownBlockType)arg3;
- (void)performChangesFromSender:(id)arg1 animate:(BOOL)arg2 withChangeBlock:(CDUnknownBlockType)arg3;
- (void)performChangesFromSender:(id)arg1 withChangeBlock:(CDUnknownBlockType)arg2;
- (void)removeChangeObserver:(id)arg1;
- (void)addChangeObserver:(id)arg1;
@property(readonly, nonatomic) unsigned long long identifier;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1 initialSelectionSnapshot:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

