//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PGHighlightItemList;

@protocol PGHighlightItemListModelWriter <NSObject>
- (void)setVisibilityState:(unsigned short)arg1 forHighlightItem:(id <PGHighlightItem>)arg2;
- (id)consumeHighlightItemList:(PGHighlightItemList *)arg1;
@end

