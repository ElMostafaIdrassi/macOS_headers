//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ItemVisitorProtocol.h"

@class NSString;

@interface IsRestrictedItemVisitor : NSObject <ItemVisitorProtocol>
{
    NSString *_itemPath;
    BOOL _isFullyRestricted;
    BOOL _isPartiallyRestricted;
    BOOL _isMissing;
}

@property(readonly, nonatomic) BOOL isMissing; // @synthesize isMissing=_isMissing;
@property(readonly, nonatomic) BOOL isPartiallyRestricted; // @synthesize isPartiallyRestricted=_isPartiallyRestricted;
@property(readonly, nonatomic) BOOL isFullyRestricted; // @synthesize isFullyRestricted=_isFullyRestricted;
- (void).cxx_destruct;
- (void)visitSnapshotItem:(id)arg1;
- (void)visitSpecialItem:(id)arg1;
- (void)visitDirectoryItem:(id)arg1;
- (void)visitFileItem:(id)arg1;
- (void)visitItem:(id)arg1;
@property(readonly, nonatomic) BOOL isRestricted;
- (id)fullPathForItem:(id)arg1;
- (void)setItemPath:(id)arg1;

@end

