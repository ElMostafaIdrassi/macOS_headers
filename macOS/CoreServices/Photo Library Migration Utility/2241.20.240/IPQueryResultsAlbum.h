//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Album.h"

#import "RKQueryResultObserver-Protocol.h"

@class NSString, RKAlbum, RKMultiItemQuery, RKVersionsResult;
@protocol RKQuery;

@interface IPQueryResultsAlbum : Album <RKQueryResultObserver>
{
    RKVersionsResult *mVersionsResult;
    double mEpochLastActive;
    RKMultiItemQuery *mFilterValue;
    RKAlbum *mObservedAlbum;
    id <RKQuery> mObservedFilter;
    int mActivationCount;
    BOOL mUseRepresentedAlbumYearHeaderState;
}

+ (id)_nonActivatableAlbums;
@property BOOL useRepresentedAlbumYearHeaderState; // @synthesize useRepresentedAlbumYearHeaderState=mUseRepresentedAlbumYearHeaderState;
@property(retain) id <RKQuery> observedFilter; // @synthesize observedFilter=mObservedFilter;
@property(retain) RKAlbum *observedAlbum; // @synthesize observedAlbum=mObservedAlbum;
@property(retain) RKMultiItemQuery *filterValue; // @synthesize filterValue=mFilterValue;
@property(retain) RKVersionsResult *versionsResult; // @synthesize versionsResult=mVersionsResult;
- (void)_handleSortingChangedDBMessage:(struct IPPhotoInfo *)arg1;
- (BOOL)hasPhoto:(struct IPPhotoInfo *)arg1;
- (int)countState:(double)arg1;
- (void)scheduleRefiltering:(id)arg1;
- (void)observeNotifications:(id)arg1;
- (void)reobserveAllNotifications;
- (void)setKeepRollsTogether:(BOOL)arg1;
- (unsigned int)aeAlbumType;
- (BOOL)_willAddPhoto:(struct IPPhotoInfo *)arg1 unique:(BOOL)arg2;
- (void)_addPhotos:(struct IPPhotoList *)arg1;
- (void)_addPhoto:(struct IPPhotoInfo *)arg1;
- (BOOL)photosAreComputed;
- (BOOL)computesPhotosForDB:(id)arg1;
- (void)createdVersionsRefs:(id)arg1 forQueryResult:(id)arg2 withReason:(id)arg3;
- (void)didMoveVersions:(id)arg1 forQueryResult:(id)arg2 fromIndexes:(id)arg3 toIndexes:(id)arg4 withReason:(id)arg5;
- (void)willMoveVersions:(id)arg1 forQueryResult:(id)arg2 fromIndexes:(id)arg3 toIndexes:(id)arg4 withReason:(id)arg5;
- (void)didRemoveVersions:(id)arg1 forQueryResult:(id)arg2 atIndexes:(id)arg3 withReason:(id)arg4;
- (void)willRemoveVersions:(id)arg1 forQueryResult:(id)arg2 atIndexes:(id)arg3 withReason:(id)arg4;
- (void)didAddVersions:(id)arg1 forQueryResult:(id)arg2 atIndexes:(id)arg3 withReason:(id)arg4;
- (void)willAddVersions:(id)arg1 forQueryResult:(id)arg2 atIndexes:(id)arg3 withReason:(id)arg4;
- (void)notifyOfRegeneratedVersions:(id)arg1 forQueryResult:(id)arg2 withReason:(id)arg3;
- (BOOL)matchAllFilters;
- (id)_filterVisibleFacesPhotos:(id)arg1;
- (id)aeVisiblePhotos;
- (void)synchVersionsResult;
- (void)deactivate;
- (void)_forceDeactivate;
- (void)activate;
- (void)_forceActivate;
- (void)_rebuildVersionsResult;
- (void)observeAlbum:(id)arg1;
- (void)_didSetFilter:(id)arg1;
- (void)setFilters:(id)arg1 matchAll:(BOOL)arg2;
- (void)setFilter:(id)arg1;
- (void)_pushFilterToVersionsResult:(id)arg1;
- (id)filter;
- (void)setRepresentedAlbum:(id)arg1;
- (void)setYear:(int)arg1 month:(int)arg2 day:(int)arg3 open:(BOOL)arg4;
- (BOOL)isYearOpen:(int)arg1 month:(int)arg2 day:(int)arg3;
- (void)addToDB:(id)arg1;
- (void)dealloc;
- (id)makeCopyWithDB:(BOOL)arg1 staticCopy:(BOOL)arg2 newName:(id)arg3;
- (void)_setRKAlbum:(id)arg1;
- (id)initWithAlbum:(id)arg1 staticCopy:(BOOL)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

