//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <iCloudDrive/ICDBRQueryItem.h>

#import <iCloudDrive/NSCopying-Protocol.h>
#import <iCloudDrive/NSSecureCoding-Protocol.h>

@class NSSet, NSString;

@interface ICDBRContainerQueryItem : ICDBRQueryItem <NSSecureCoding, NSCopying>
{
    NSString *_containerID;
    NSSet *_containerClientIDs;
    NSString *_localizedName;
    BOOL _isPristine;
    BOOL _isDatascope;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)subclassDescription;
- (unsigned long long)capabilities;
- (id)containerDisplayName;
- (id)typeIdentifier;
- (id)parentItemIdentifier;
- (BOOL)fp_isContainerPristine;
- (BOOL)fp_isContainer;
- (id)fp_cloudContainerClientBundleIdentifiers;
- (id)fp_cloudContainerIdentifier;
- (id)displayName;
- (id)filename;
- (id)itemIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithQueryItem:(id)arg1 container:(id)arg2 zoneRowID:(id)arg3 ubiquityTokenSalt:(id)arg4 isDataScope:(BOOL)arg5;

@end

