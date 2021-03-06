//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FolderAlbum.h"

@class NSString;

@interface PublishServiceCollection : FolderAlbum
{
    NSString *_serviceKey;
    NSString *_username;
    NSString *_displayName;
}

+ (struct IPAlbumList *)albumsForService:(id)arg1 withUsername:(id)arg2 inDB:(id)arg3;
+ (id)albumsForServiceKey:(id)arg1 withUsername:(id)arg2;
+ (void)determinePublishedSectionNameForDB:(id)arg1;
+ (void)removePublishedAlbum:(id)arg1 fromParent:(id)arg2;
+ (void)sortAndRebuildAlbums:(id)arg1;
+ (BOOL)addPublishedAlbum:(id)arg1 toDB:(id)arg2 select:(BOOL)arg3;
- (void)eject;
- (BOOL)isEjectable;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (void)setUsername:(id)arg1;
- (id)username;
- (id)name;
- (void)setServiceKey:(id)arg1;
- (id)serviceKey;
- (void)setParentAlbum:(id)arg1;
- (void)setSubgroup:(id)arg1;
- (BOOL)isInGroup:(unsigned long long)arg1 andSubgroup:(id)arg2;
- (id)subgroup;
- (void)loadSqAlbum:(id)arg1 fromDB:(id)arg2;
- (void)setRKAlbum:(id)arg1;
- (void)_readFromPhotocastURL;
- (void)addToDB:(id)arg1;
- (void)dealloc;
- (id)initWithServiceKey:(id)arg1 andUsername:(id)arg2;
- (id)init;

@end

