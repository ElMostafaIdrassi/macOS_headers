//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UIDynamicAnimator;

@interface UIDynamicBehavior : NSObject
{
    UIDynamicAnimator *_context;
    NSMutableArray *_items;
    NSMutableArray *_behaviors;
    NSMutableArray *_addedBehaviors;
    CDUnknownBlockType _action;
}

+ (BOOL)_isPrimitiveBehavior;
+ (void)initialize;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)description;
- (id)_itemsDescription;
- (void)_changedParameterForBody:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *childBehaviors;
- (void)removeChildBehavior:(id)arg1;
- (void)addChildBehavior:(id)arg1;
- (BOOL)allowsAnimatorToStop;
- (void)_dissociate;
- (void)_associate;
- (void)_reattachAutolayoutToItemIfNecessary:(id)arg1;
- (void)_detachAutolayoutFromItemIfNecessary:(id)arg1;
- (void)_updateAutolayoutEngagementForItemIfNecessary:(id)arg1 detach:(BOOL)arg2;
- (void)willMoveToAnimator:(id)arg1;
- (void)_reevaluate:(unsigned long long)arg1;
- (void)_step;
- (id)init;
- (id)items;
@property(readonly, nonatomic) UIDynamicAnimator *dynamicAnimator;
- (id)_context;
- (id)_items;
- (void)_removeItem:(id)arg1;
- (void)_addItem:(id)arg1;
- (void)_setItems:(id)arg1;
- (void)_setContext:(id)arg1;

@end

