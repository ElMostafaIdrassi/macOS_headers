//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLSingleComponentLayout;

@interface NFLJupiterSubBatchLayout : NFLSubBatchLayout
{
    int _layoutType;
    NFLSingleComponentLayout *_largeSixComponent;
    NFLSingleComponentLayout *_leftThreeComponent;
    NFLSingleComponentLayout *_rightThreeComponent;
    NFLSingleComponentLayout *_topSixComponent;
    NFLSingleComponentLayout *_bottomSixComponent;
}

@property(nonatomic) int layoutType; // @synthesize layoutType=_layoutType;
@property(retain, nonatomic) NFLSingleComponentLayout *bottomSixComponent; // @synthesize bottomSixComponent=_bottomSixComponent;
@property(retain, nonatomic) NFLSingleComponentLayout *topSixComponent; // @synthesize topSixComponent=_topSixComponent;
@property(retain, nonatomic) NFLSingleComponentLayout *rightThreeComponent; // @synthesize rightThreeComponent=_rightThreeComponent;
@property(retain, nonatomic) NFLSingleComponentLayout *leftThreeComponent; // @synthesize leftThreeComponent=_leftThreeComponent;
@property(retain, nonatomic) NFLSingleComponentLayout *largeSixComponent; // @synthesize largeSixComponent=_largeSixComponent;
- (void).cxx_destruct;
- (id)singleComponentLayouts;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (unsigned long long)rowSpan;
- (id)tileInfosUsed;
- (double)rank;
- (BOOL)isValid;
- (id)initWithFeedSettings:(id)arg1 layoutType:(int)arg2;

@end

