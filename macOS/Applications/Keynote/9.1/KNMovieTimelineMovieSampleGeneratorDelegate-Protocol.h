//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, KNMovieTimelineMovieSampleGenerator, NSObject<NSCopying>;

@protocol KNMovieTimelineMovieSampleGeneratorDelegate <NSObject>
- (float)movieTimelineMovieSampleGenerator:(KNMovieTimelineMovieSampleGenerator *)arg1 audioVolumeForMovieIdentifier:(NSObject<NSCopying> *)arg2;
- (AVAsset *)movieTimelineMovieSampleGenerator:(KNMovieTimelineMovieSampleGenerator *)arg1 assetForMovieIdentifier:(NSObject<NSCopying> *)arg2;
@end

