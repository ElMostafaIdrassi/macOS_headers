//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString, STUsageBlock;

@interface STUsageCategory : NSManagedObject
{
}

+ (id)appDetailItemsForUsageCategories:(id)arg1;
+ (id)categoryDetailItemsForUsageCategories:(id)arg1;

// Remaining properties
@property(retain, nonatomic) STUsageBlock *block; // @dynamic block;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSSet *timedItems; // @dynamic timedItems;
@property(nonatomic) long long totalTimeInSeconds; // @dynamic totalTimeInSeconds;

@end

