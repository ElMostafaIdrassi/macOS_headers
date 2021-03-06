//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSQuickWebsiteSearchProviderDelegate.h"

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, WBSCoalescedAsynchronousWriter;

@interface WBSQuickWebsiteSearchController : NSObject <WBSQuickWebsiteSearchProviderDelegate>
{
    NSURL *_searchDescriptionsURL;
    BOOL _hasBegunLoadingFromDisk;
    NSObject<OS_dispatch_queue> *_quickWebsiteSearchProvidersBySourcePageURLStringAccessQueue;
    NSMutableDictionary *_quickWebsiteSearchProvidersByHost;
    NSMutableDictionary *_openSearchDescriptionsByDescriptionDocumentURLString;
    NSMutableDictionary *_hostSetsByOpenSearchDescriptionDocumentURLString;
    WBSCoalescedAsynchronousWriter *_writer;
    BOOL _quickWebsiteSearchProvidersLoadedFromDisk;
}

+ (id)sharedController;
- (void).cxx_destruct;
@property BOOL quickWebsiteSearchProvidersLoadedFromDisk; // @synthesize quickWebsiteSearchProvidersLoadedFromDisk=_quickWebsiteSearchProvidersLoadedFromDisk;
- (void)_resetCachedDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_didCollectOpenSearchDescription:(id)arg1;
- (void)_didFinishLoadingFromDisk;
- (void)_loadFromDisk;
- (id)_dictionaryRepresentation;
- (void)_saveToDiskSoon;
- (void)_pruneUnusedQuickWebsiteSearchProviders;
- (BOOL)_shouldRemoveQuickWebsiteSearchProvider:(id)arg1;
- (void)_removeHost:(id)arg1 fromOpenSearchDescriptionWithDocumentURL:(id)arg2;
- (void)_addHost:(id)arg1 toOpenSearchDescriptionWithDocumentURL:(id)arg2;
- (BOOL)_quickWebsiteSearchProviderHasSearchURLTemplateStringOnAccessQueue:(id)arg1;
- (id)quickWebsiteSearchProvider:(id)arg1 openSearchDescriptionForOpenSearchDescriptionURLString:(id)arg2;
- (void)removeProviderWithHost:(id)arg1;
- (void)removeProvidersWithHosts:(id)arg1;
- (id)openSearchDescriptionForOpenSearchDescriptionURLString:(id)arg1;
- (id)providerForSourcePageURLString:(id)arg1;
- (void)setOpenSearchDescriptionURLString:(id)arg1 forSourcePageURLString:(id)arg2;
- (void)setSearchURLTemplateFromForm:(id)arg1 forSourcePageURLString:(id)arg2;
- (void)didPerformSearchWithProvider:(id)arg1;
- (id)providersMatchingQueryString:(id)arg1;
@property(readonly, nonatomic) NSArray *quickWebsiteSearchHosts;
- (void)_sendNotification:(id)arg1 forQuickWebsiteSearchProvider:(id)arg2;
- (void)removeProvidersAddedAfterDate:(id)arg1 beforeDate:(id)arg2;
- (void)clear;
- (void)savePendingChangesBeforeTermination;
- (void)noteProvidersAreStale;
- (void)beginLoadingFromDiskIfNeeded;
- (id)_initWithSearchDescriptionsURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

