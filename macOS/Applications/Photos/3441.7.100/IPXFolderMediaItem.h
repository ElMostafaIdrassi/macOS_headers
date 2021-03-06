//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXDatabaseContainerMediaItem.h"

@protocol IPXAlbumsBrowserContentChangedDelegate;

@interface IPXFolderMediaItem : IPXDatabaseContainerMediaItem
{
    id <IPXAlbumsBrowserContentChangedDelegate> _delegate;
}

@property __weak id <IPXAlbumsBrowserContentChangedDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)canBeTrashed;
- (BOOL)canReceiveContainerDrop;
- (BOOL)canReorderContents;
- (BOOL)canEditName;
- (id)name;
- (id)thumbnailImageOperationForResolution:(unsigned long long)arg1 size:(struct CGSize)arg2 mode:(unsigned long long)arg3 reason:(unsigned long long)arg4 placeholder:(BOOL)arg5 colorSpace:(id)arg6 withCompletionHandler:(CDUnknownBlockType)arg7;
- (id)synchronouslyRenderedThumbnailForResolution:(unsigned long long)arg1;
- (void)invalidateCachedThumbnail;
- (void)_reloadProperties;
- (void)updateWithDatabaseContainerObject:(id)arg1;
- (void)updateWithFolder:(id)arg1;
- (id)folder;
- (id)initWithFolder:(id)arg1;

@end

