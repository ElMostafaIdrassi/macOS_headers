//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MKMapItem, MacRAPTokenTableViewCell, NSArray, NSString, RAPCancellableTableViewCell, RAPStoreHour, UIView;

@protocol RAPCorrectionQuestionUpdateDelegate <NSObject>
@property(readonly, nonatomic) UIView *photoPickerSourceView;
- (void)deleteTokenCell:(MacRAPTokenTableViewCell *)arg1;
- (void)deleteCell:(RAPCancellableTableViewCell *)arg1;
- (void)didUpdateClosureInformationOfKind:(long long)arg1 isEnabled:(BOOL)arg2;
- (void)addContainmentInformationOfKind:(long long)arg1 withMapItem:(MKMapItem *)arg2;
- (void)addHours:(RAPStoreHour *)arg1;
- (void)replaceCategories:(NSArray *)arg1;
- (void)didUpdateAddress:(NSString *)arg1;
- (void)didUpdateCoordinate:(struct CLLocationCoordinate2D)arg1;
@end

