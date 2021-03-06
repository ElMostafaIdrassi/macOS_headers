//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSSPAutoEncodable-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSFastEnumeration-Protocol.h"

@class NSDictionary;

@interface TSCHParagraphStylePropertyMutationMap : NSObject <GSSPAutoEncodable, NSCopying, NSFastEnumeration>
{
    NSDictionary *mDictionary;
}

+ (id)paragraphStylePropertyMutationMapWithDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=mDictionary;
- (void).cxx_destruct;
- (BOOL)hasAnyMutations;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)populateGSSPCmdMutatePropertiesParagraphStylePropertyMutationMap:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

