//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HFItem;

@interface HUItemTableViewScrollDestination : NSObject
{
    BOOL _animated;
    HFItem *_item;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isAnimated) BOOL animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) HFItem *item; // @synthesize item=_item;
- (id)initWithItem:(id)arg1 animated:(BOOL)arg2;

@end

