//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBlurmapRefinementLinearMapping : CIFilter
{
    CIImage *inputImage;
    CIImage *inputSecondaryImage;
    NSNumber *inputScalingFactor;
}

@property(retain) NSNumber *inputScalingFactor; // @synthesize inputScalingFactor;
@property(retain) CIImage *inputSecondaryImage; // @synthesize inputSecondaryImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)kernel;
- (id)kernelNoSecondaryImage;

@end

