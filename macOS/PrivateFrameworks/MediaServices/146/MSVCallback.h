//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface MSVCallback : NSObject
{
    id _block;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)callbackWithQueue:(id)arg1 block:(id)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) id block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)invokeWithObject:(id)arg1;
- (void)invoke;

@end

