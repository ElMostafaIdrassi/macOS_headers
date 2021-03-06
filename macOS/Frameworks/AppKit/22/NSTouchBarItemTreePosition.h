//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSTouchBarItemTreeNode<NSTouchBarItemTreeParentNode>;

@interface NSTouchBarItemTreePosition : NSObject <NSCopying>
{
    NSTouchBarItemTreeNode<NSTouchBarItemTreeParentNode> *_parentNode;
    long long _indexInParent;
}

+ (id)positionInParentNode:(id)arg1 atIndex:(long long)arg2;
@property(readonly, copy) NSTouchBarItemTreeNode<NSTouchBarItemTreeParentNode> *parentNode; // @synthesize parentNode=_parentNode;
@property(readonly) long long indexInParent; // @synthesize indexInParent=_indexInParent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

