//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LTPProjectCategoryViewController, NSArray;

@protocol LTPProjectCategoryViewControllerDataSource <NSObject>
- (id)datasourceItemAtIndex:(int)arg1 inProjectSerie:(id)arg2 forProjectCategoryViewController:(LTPProjectCategoryViewController *)arg3;
- (int)numberOfItemsInProjectSerie:(id)arg1 forProjectCategoryViewController:(LTPProjectCategoryViewController *)arg2;
- (NSArray *)projectSeriesIDsForProjectCatViewController:(LTPProjectCategoryViewController *)arg1;
@end

