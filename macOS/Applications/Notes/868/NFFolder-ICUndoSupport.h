//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Notes/NFFolder.h>

#import "ICFolderUndoSupport-Protocol.h"

@class NSArray, NSString;

@interface NFFolder (ICUndoSupport) <ICFolderUndoSupport>
- (void)undoablySetName:(id)arg1;
- (void)undoablySetParent:(id)arg1;
- (void)_undoablyUndeleteTo:(id)arg1 actionName:(id)arg2;
- (void)undoablyMoveToTrashWithActionName:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *subfoldersForCopying;
@property(readonly, copy, nonatomic) NSArray *notesForCopying;
@property(readonly, copy, nonatomic) NSString *titleForCopying;
@end

