//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosGraph/PGCurationTrait.h>

@class NSSet;

@interface PGCurationSetTrait : PGCurationTrait
{
    NSSet *_items;
    NSSet *_negativeItems;
}

@property(readonly, nonatomic) NSSet *negativeItems; // @synthesize negativeItems=_negativeItems;
@property(readonly, nonatomic) NSSet *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isActive;
- (id)initWithItems:(id)arg1 negativeItems:(id)arg2;
- (id)initWithItems:(id)arg1;

@end

