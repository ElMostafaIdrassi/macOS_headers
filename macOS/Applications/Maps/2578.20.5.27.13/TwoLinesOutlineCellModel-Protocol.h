//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsUIDiffableDataSourceViewModel-Protocol.h"

@class SidebarOutlineCellBackgroundModel;
@protocol TwoLinesContentViewModel, TwoLinesOutlineCellAccessoryModel;

@protocol TwoLinesOutlineCellModel <MapsUIDiffableDataSourceViewModel>
@property(readonly, nonatomic) SidebarOutlineCellBackgroundModel *backgroundModel;
@property(readonly, nonatomic) id <TwoLinesOutlineCellAccessoryModel> accessoryModel;
@property(readonly, nonatomic) id <TwoLinesContentViewModel> contentModel;
@end

