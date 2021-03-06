//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSObject.h"

@class TSKCOOperationTransformer, TSKSelection, TSKSelectionPath, TSPObject<TSKSelectionTransformer>;

@protocol TSKSelectionTransformer <NSObject, NSCopying>
@property(readonly, nonatomic, getter=isShadowedByTransform) BOOL shadowedByTransform;
@property(readonly, nonatomic) TSKSelection *transformedSelection;
- (TSPObject<TSKSelectionTransformer> *)nextSelectionTransformerForSelection:(TSKSelection *)arg1;
- (void)transformWithOperationTransformer:(TSKCOOperationTransformer *)arg1;

@optional
- (TSKSelectionPath *)validatedSelectionPathForSelectionPath:(TSKSelectionPath *)arg1;
- (BOOL)preventsNextSelectionFromTransformer:(id <TSKSelectionTransformer>)arg1;
- (TSKSelection *)makeImplicitNextSelection;
@end

