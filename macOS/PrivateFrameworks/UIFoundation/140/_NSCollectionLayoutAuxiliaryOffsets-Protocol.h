//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet, NSSet, NSString;

@protocol _NSCollectionLayoutAuxiliaryOffsets <NSObject>
@property(readonly, nonatomic) NSSet *elementKinds;
- (BOOL)containsIndex:(long long)arg1 forElementKind:(NSString *)arg2;
- (BOOL)overlapsOffsets:(id <_NSCollectionLayoutAuxiliaryOffsets>)arg1;
- (long long)offsetForElementKind:(NSString *)arg1;
- (NSIndexSet *)indexesForElementKind:(NSString *)arg1;
- (struct _NSRange)rangeForElementKind:(NSString *)arg1;
- (id)offsetsByRebasingOnOffsets:(id <_NSCollectionLayoutAuxiliaryOffsets>)arg1;
- (id)offsetsByApplyingOffsets:(id <_NSCollectionLayoutAuxiliaryOffsets>)arg1;
@end

