//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EmailFoundation/NSObject-Protocol.h>

@class NSMutableArray, NSString;

@protocol EFQueueingStrategy <NSObject>
@property(readonly, nonatomic) NSString *descriptionType;
- (void)dequeueObject:(id)arg1 buffer:(NSMutableArray *)arg2;
- (void)enqueueObject:(id)arg1 buffer:(NSMutableArray *)arg2;
@end

