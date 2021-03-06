//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MiroClip_Shim.h"
#import "NSObject.h"

@class AVAsset, NSArray, PHAsset;

@protocol MiroClip <MiroClip_Shim, NSObject>
@property(nonatomic) BOOL audioEnabled;
@property(readonly, nonatomic) BOOL isSlomo;
@property(readonly, nonatomic) struct CGSize naturalSizeWithTransform;
@property(readonly, nonatomic) PHAsset *asset;
@property(readonly, nonatomic) NSArray *multiUpContainedClips;
@property(readonly, nonatomic) int rawSourceDuration;
@property(readonly, nonatomic) float sourceDuration;
@property(readonly, nonatomic) float sourceStartTime;
@property(nonatomic) int maxDuration;
@property(nonatomic) int duration;
@property(nonatomic) int startTime;
- (void)loadAVPlayerItemWithCompletionHander:(void (^)(AVPlayerItem *, NSError *))arg1 progressHandler:(void (^)(double))arg2 networkAccessAllowed:(BOOL)arg3;
- (AVAsset *)loadAVAsset;
@end

