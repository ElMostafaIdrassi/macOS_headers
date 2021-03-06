//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUTimedAnimationGroup.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface PULayerAnimationGroup : PUTimedAnimationGroup
{
    BOOL _areTrackedAnimationsPaused;
    CALayer *_referenceLayer;
}

@property(readonly, nonatomic) CALayer *referenceLayer; // @synthesize referenceLayer=_referenceLayer;
- (void).cxx_destruct;
- (void)updateAnimations;
- (double)currentTime;
- (id)initWithReferenceLayer:(id)arg1;
- (id)init;

@end

