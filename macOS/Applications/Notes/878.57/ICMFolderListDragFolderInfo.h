//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICMFolderListDragNoteInfo.h"

@class ICMFolderTreeNode;

@interface ICMFolderListDragFolderInfo : ICMFolderListDragNoteInfo
{
    ICMFolderTreeNode *_sourceNode;
}

@property(retain, nonatomic) ICMFolderTreeNode *sourceNode; // @synthesize sourceNode=_sourceNode;
- (void).cxx_destruct;
- (void)updateUndoManager;
- (void)saveContextsIfNecessary;
@property(readonly, nonatomic) BOOL sourceAndDestinationAreFromSameAccount;
- (id)initWithDestinationNode:(id)arg1 sourceNode:(id)arg2 copyOperation:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

