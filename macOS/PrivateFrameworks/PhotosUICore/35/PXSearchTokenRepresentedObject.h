//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, PSIQueryToken;

@interface PXSearchTokenRepresentedObject : NSObject <NSSecureCoding>
{
    NSString *_title;
    PSIQueryToken *_queryToken;
    NSString *_priorityAssetUUID;
}

+ (id)new;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *priorityAssetUUID; // @synthesize priorityAssetUUID=_priorityAssetUUID;
@property(readonly, nonatomic) PSIQueryToken *queryToken; // @synthesize queryToken=_queryToken;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)dictionaryForArchiving;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTitle:(id)arg1 queryToken:(id)arg2 priorityAssetUUID:(id)arg3;
- (id)initWithTitle:(id)arg1 queryToken:(id)arg2;

@end

