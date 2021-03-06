//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class DBSHARINGSharedFileMembers, NSNumber, NSString;

@interface DBSHARINGListFileMembersCountResult : NSObject <DBSerializable, NSCopying>
{
    DBSHARINGSharedFileMembers *_members;
    NSNumber *_memberCount;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *memberCount; // @synthesize memberCount=_memberCount;
@property(readonly, nonatomic) DBSHARINGSharedFileMembers *members; // @synthesize members=_members;
- (void).cxx_destruct;
- (BOOL)isEqualToListFileMembersCountResult:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithMembers:(id)arg1 memberCount:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

