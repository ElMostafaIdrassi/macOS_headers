//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface LoupeView : NSView
{
    struct CGImage *imageDisplayed;
    int pixelSize;
}

@property(nonatomic) int pixelSize; // @synthesize pixelSize;
- (id)loupeFrameImage;
- (void)drawRect:(struct CGRect)arg1;
- (id)viewImageRepresentation;
- (id)getCenterPixelColor;
- (struct CGImage *)imageDisplayed;
- (void)setImageDisplayed:(struct CGImage *)arg1;

@end

