//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import "PXGadgetDelegate.h"
#import "PXGadgetProviderDelegate.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_os_log>, NSString, PXGadgetDataSource, PXGadgetNavigationHelper;

@interface PXGadgetDataSourceManager : PXSectionedDataSourceManager <PXGadgetProviderDelegate, PXGadgetDelegate>
{
    BOOL _hasLoadedPriorities;
    BOOL _loadingInitialGadgets;
    BOOL _needsToLoadAllProviders;
    id <PXGadgetDelegate> _nextGadgetResponder;
    NSArray *_cachedProviders;
    NSObject<OS_dispatch_queue> *_lookupQueue;
    NSMutableArray *_lookupQueue_loadedProviders;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL needsToLoadAllProviders; // @synthesize needsToLoadAllProviders=_needsToLoadAllProviders;
@property(nonatomic) BOOL loadingInitialGadgets; // @synthesize loadingInitialGadgets=_loadingInitialGadgets;
@property(nonatomic) BOOL hasLoadedPriorities; // @synthesize hasLoadedPriorities=_hasLoadedPriorities;
@property(retain, nonatomic) NSMutableArray *lookupQueue_loadedProviders; // @synthesize lookupQueue_loadedProviders=_lookupQueue_loadedProviders;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lookupQueue; // @synthesize lookupQueue=_lookupQueue;
@property(copy, nonatomic) NSArray *cachedProviders; // @synthesize cachedProviders=_cachedProviders;
@property(nonatomic) __weak id <PXGadgetDelegate> nextGadgetResponder; // @synthesize nextGadgetResponder=_nextGadgetResponder;
@property(readonly, nonatomic) NSObject<OS_os_log> *gadgetDataSourceManagerLog;
- (id)gadgetViewControllerHostingGadget:(id)arg1;
- (void)gadget:(id)arg1 animateChanges:(CDUnknownBlockType)arg2;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
@property(readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property(readonly, nonatomic) id <PXGadgetTransition> gadgetTransition;
- (void)dismissAlert:(id)arg1;
- (void)presentAlert:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dismissGadgetViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentGadgetViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)gadget:(id)arg1 transitionToViewController:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)invalidateGadgets;
- (id)_sortedGadgets;
- (id)_dataSourceSnapshot;
- (void)_updateDataSource;
- (void)_loadDataFromProviders:(id)arg1 withGadgetMinimum:(unsigned long long)arg2;
- (void)_loadPriorityForProviders:(id)arg1;
- (id)allGadgets;
- (void)loadRemainingGadgetsIfNeededWithGenerateGadgetFinishedBlock:(CDUnknownBlockType)arg1;
- (void)loadRemainingGadgetsIfNeeded;
- (void)beginLoadingInitialGadgets:(unsigned long long)arg1;
- (id)noContentGadget;
- (id)filteredUndisplayedGadgets:(id)arg1;
- (void)didLoadDataForPriorities;
@property(readonly, nonatomic) CDUnknownBlockType gadgetProviderSortComparator;
@property(readonly, nonatomic) CDUnknownBlockType gadgetSortComparator;
@property(readonly, nonatomic) NSArray *gadgetProviders;
- (void)removeCachedProviders;
- (id)createInitialDataSource;
- (id)initWithQueueName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) PXGadgetDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

