//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface KHDBTriggerEntry : NSObject
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _shouldCoalesce;
    int _running;
}

- (void)fire;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1 onQueue:(id)arg2;

@end

