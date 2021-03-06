//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFLBatchContext, NSMutableArray;

@interface NFLBatch : NSObject
{
    double _batchHeight;
    NFLBatchContext *_batchContext;
    NSMutableArray *_layoutInfos;
}

@property(retain, nonatomic) NSMutableArray *layoutInfos; // @synthesize layoutInfos=_layoutInfos;
@property(copy, nonatomic) NFLBatchContext *batchContext; // @synthesize batchContext=_batchContext;
@property(nonatomic) double batchHeight; // @synthesize batchHeight=_batchHeight;
- (void).cxx_destruct;
- (void)addLayoutInfos:(id)arg1;
- (void)addLayoutInfo:(id)arg1;
- (id)init;

@end

