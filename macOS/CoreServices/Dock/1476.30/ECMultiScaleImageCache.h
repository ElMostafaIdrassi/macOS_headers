//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ECMultiScaleImageCache : NSObject
{
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)removeSharedImageWithName:(id)arg1 andScaleFactor:(float)arg2 removingOtherScaleFactors:(_Bool)arg3;
+ (id)sharedMultiScaleImageWithName:(id)arg1 andScaleFactor:(float)arg2 removingOtherScaleFactors:(_Bool)arg3;
+ (id)sharedImageWithName:(id)arg1 andScaleFactor:(float)arg2 removingOtherScaleFactors:(_Bool)arg3;
+ (id)sharedCache;
- (void).cxx_destruct;
- (void)removeImageWithName:(id)arg1 andScaleFactor:(float)arg2 removingOtherScaleFactors:(_Bool)arg3;
- (id)multiScaleImageWithName:(id)arg1 andScaleFactor:(float)arg2 removingOtherScaleFactors:(_Bool)arg3;
- (id)imageWithName:(id)arg1 andScaleFactor:(float)arg2 removingOtherScaleFactors:(_Bool)arg3;
- (id)init;

@end

