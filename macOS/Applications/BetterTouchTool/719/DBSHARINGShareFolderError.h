//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DBSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class DBSHARINGSharePathError, NSString;

@interface DBSHARINGShareFolderError : NSObject <DBSerializable, NSCopying>
{
    DBSHARINGSharePathError *_badPath;
    long long _tag;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (BOOL)isEqualToShareFolderError:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)tagName;
- (BOOL)isNoPermission;
- (BOOL)isOther;
- (BOOL)isDisallowedSharedLinkPolicy;
- (BOOL)isTeamPolicyDisallowsMemberPolicy;
- (BOOL)isBadPath;
- (BOOL)isEmailUnverified;
@property(readonly, nonatomic) DBSHARINGSharePathError *badPath; // @synthesize badPath=_badPath;
- (id)initWithNoPermission;
- (id)initWithOther;
- (id)initWithDisallowedSharedLinkPolicy;
- (id)initWithTeamPolicyDisallowsMemberPolicy;
- (id)initWithBadPath:(id)arg1;
- (id)initWithEmailUnverified;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

