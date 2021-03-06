//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

#import "IPHPhotoDBProtocol-Protocol.h"

@class IP_ILPhotoAlbum, IP_IPHDiffBag, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;
@protocol IPHPhotoObjectProtocol, NSObject><NSLocking;

@interface IP_IPHArchivedPhotoDB : NSObject <IPHPhotoDBProtocol>
{
    NSMutableDictionary *_properties;
    id <NSObject><NSLocking> _propertiesLock;
    NSMutableArray *_photos;
    NSArray *_orderedPublicationUIDCache;
    NSArray *_orderedPhotoUIDCache;
    NSDictionary *_photosByUIDCache;
    BOOL _cachesNeedUpdate;
    IP_IPHDiffBag *_diffBag;
    IP_ILPhotoAlbum *_photoAlbum;
    NSObject<IPHPhotoObjectProtocol> *_currentPhotoBeingUpdated;
    NSRecursiveLock *_photoListLock;
}

- (void)setCurrentPhotoBeingUpdated:(id)arg1;
- (id)currentPhotoBeingUpdated;
- (void)setIsLive:(BOOL)arg1;
- (BOOL)isLive;
- (id)updateDelegate;
- (id)albumContentsDelegate;
- (void)setPhotoAlbum:(id)arg1;
- (id)photoAlbum;
- (void)markDiffBagChangedToState:(int)arg1 forDistantPhotoObject:(id)arg2;
- (void)markDiffBagChangedToState:(int)arg1 forPhotoObject:(id)arg2;
- (void)resetDiffBag;
- (void)setDiffBag:(id)arg1;
- (id)diffBag;
- (void)save;
- (void)syncComplete;
- (void)endChangeSession;
- (void)beginChangeSession;
- (void)markDirty;
- (void)setIsDirty:(BOOL)arg1;
- (BOOL)isDirty;
- (void)bumpVersion;
- (id)version;
- (void)setVersion:(id)arg1;
- (void)setAllPhotos:(id)arg1;
- (void)removeAllPhotos;
- (void)replacePhototAtIndex:(unsigned long long)arg1 withPhoto:(id)arg2;
- (void)removePhotoAtIndex:(unsigned long long)arg1;
- (void)removePhoto:(id)arg1;
- (void)removePhotoWithPublicationUID:(id)arg1;
- (void)insertPhoto:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addPhoto:(id)arg1;
- (void)prepareToSync;
- (struct CGSize)sizeOfPhoto:(id)arg1;
- (id)refForMovie:(id)arg1 transcodingOptions:(id)arg2;
- (id)imageFilePathRefForPhoto:(id)arg1;
- (id)refForPhoto:(id)arg1 format:(unsigned int)arg2 quality:(int)arg3 maxDimensions:(unsigned long long)arg4;
- (id)ensureOriginalForPhoto:(id)arg1;
- (id)previousPhoto:(id)arg1 loop:(BOOL)arg2;
- (id)nextPhoto:(id)arg1 loop:(BOOL)arg2;
- (id)photoWithFilepath:(id)arg1;
- (id)photoAtIndex:(unsigned long long)arg1;
- (long long)indexOfPhoto:(id)arg1;
- (id)photoWithPublicationUID:(id)arg1;
- (id)photoWithUID:(id)arg1;
- (void)rebuildCachesIfNeeded;
- (id)allPhotosByUID;
- (id)orderedPublicationUIDs;
- (id)orderedPhotoUIDs;
- (id)allPhotos;
- (unsigned long long)photoCount;
- (id)photoShare;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)photoDBLocalProperties;
- (id)photoDBExportedProperties;
- (BOOL)migratePhotos:(id)arg1 toNewPhotoServerIdentifiers:(id)arg2 identifierNamespace:(id)arg3 initiator:(id)arg4;
- (BOOL)migrateToNewAlbumServerIdentifier:(id)arg1 identifierNamespace:(id)arg2 initiator:(id)arg3;
- (void)setPublishServerSetUID:(id)arg1;
- (void)setReadableName:(id)arg1;
- (id)readableName;
- (id)UID;
- (BOOL)allowAddition;
- (BOOL)allowDeletion;
- (BOOL)allowReorder;
- (id)informationDictionary;
- (void)setInformation:(id)arg1 forKey:(id)arg2;
- (id)informationForKey:(id)arg1;
- (id)checkForIncompleteQuickUpdateSyncPhotoProperties:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryToSave;
- (id)serializedPropertyListData;
- (id)initWithSerializedPropertyListData:(id)arg1;
- (id)imageLinkFromDescription:(id)arg1 feedBaseURLString:(id)arg2;
- (id)imageLinkFromXHTML:(id)arg1 feedBaseURLString:(id)arg2;
- (BOOL)readRSSFeedData:(id)arg1 downloadedAtURL:(id)arg2;
- (BOOL)readArray:(id)arg1 service:(id)arg2 downloadedAtURL:(id)arg3;
- (void)updatePhotosOrder:(BOOL)arg1;
- (void)updatePhotosOrder:(BOOL)arg1 toMatchOrder:(id)arg2;
- (BOOL)loadPhotos:(id)arg1 service:(id)arg2 downloadedAtURL:(id)arg3;
- (void)dealloc;
- (id)copy;
- (id)initWithPhotos:(id)arg1 properties:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

