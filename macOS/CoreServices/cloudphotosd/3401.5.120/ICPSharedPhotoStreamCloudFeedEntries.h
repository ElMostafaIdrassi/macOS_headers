//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObjectContext, NSPersistentStoreCoordinator, NSURL;

@interface ICPSharedPhotoStreamCloudFeedEntries : NSObject
{
    NSURL *_dataStoreURL;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSArray *_assetEntriesCache;
}

+ (id)_entriesSortDescriptorsAscending:(BOOL)arg1;
@property(retain) NSArray *assetEntriesCache; // @synthesize assetEntriesCache=_assetEntriesCache;
@property(retain) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(readonly) NSURL *dataStoreURL; // @synthesize dataStoreURL=_dataStoreURL;
- (void).cxx_destruct;
- (id)_singleEntryOfType:(long long)arg1 forInvitationGUID:(id)arg2;
- (id)_invitationDeclinedEntryForInvitationGUID:(id)arg1;
- (id)_invitationAcceptedEntryForInvitationGUID:(id)arg1;
- (id)_singleEntryOfType:(long long)arg1 forAlbumGUID:(id)arg2;
- (id)_albumCreatedEntryForAlbumGUID:(id)arg1;
- (id)_subscriptionEntryForAlbumGUID:(id)arg1;
- (id)_invitationReceivedEntryForAlbumGUID:(id)arg1;
- (void)_getEarliestDate:(id *)arg1 latestDate:(id *)arg2 forRangeOfContiguousCommentsEntriesAroundDate:(id)arg3;
- (id)_firstEntryRelativeToDate:(id)arg1 ascending:(BOOL)arg2 includeSameDate:(BOOL)arg3;
- (id)_firstEntryOnOrAfterDate:(id)arg1;
- (id)_firstEntryAfterDate:(id)arg1;
- (id)_firstEntryOnOrBeforeDate:(id)arg1;
- (id)entriesWithType:(long long)arg1 sorted:(BOOL)arg2;
- (id)firstEntryWithType:(long long)arg1 albumGUID:(id)arg2;
- (id)recentAssetsEntriesWithLimit:(unsigned long long)arg1;
- (id)recentEntriesWithEarliestDate:(id)arg1 latestDate:(id)arg2 limit:(unsigned long long)arg3;
- (id)assetEntriesForEntries:(id)arg1;
- (void)updateAssetEntriesCache;
- (BOOL)reset:(id *)arg1;
- (BOOL)initialize:(id *)arg1;
- (id)initWithDataStorePath:(id)arg1;

@end

