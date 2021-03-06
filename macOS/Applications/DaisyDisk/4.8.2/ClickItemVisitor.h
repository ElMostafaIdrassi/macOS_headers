//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ItemVisitorProtocol.h"

@class DirectoryItem;

@interface ClickItemVisitor : NSObject <ItemVisitorProtocol>
{
    BOOL _isUnclickable;
    DirectoryItem *_directoryToMoveTo;
    BOOL _isLevelUp;
    BOOL _isExpandable;
    DirectoryItem *_currentDirectory;
}

@property(readonly, nonatomic) DirectoryItem *directoryToMoveTo; // @synthesize directoryToMoveTo=_directoryToMoveTo;
@property(readonly, nonatomic) BOOL isExpandable; // @synthesize isExpandable=_isExpandable;
@property(readonly, nonatomic) BOOL isUnclickable; // @synthesize isUnclickable=_isUnclickable;
@property(readonly, nonatomic) BOOL isLevelUp; // @synthesize isLevelUp=_isLevelUp;
@property(retain, nonatomic) DirectoryItem *currentDirectory; // @synthesize currentDirectory=_currentDirectory;
- (void).cxx_destruct;
- (void)visitSpecialItem:(id)arg1;
- (void)visitDirectoryItem:(id)arg1;
- (void)visitSnapshotItem:(id)arg1;
- (void)visitFileItem:(id)arg1;
- (void)reset;

@end

