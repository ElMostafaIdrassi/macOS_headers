//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSImage.h>

__attribute__((visibility("hidden")))
@interface PlaceholderImage : NSImage
{
}

+ (id)foldingImageWithColor:(id)arg1 size:(struct CGSize)arg2 highlighted:(BOOL)arg3;
+ (id)placeholderColorForBackgroundColor:(id)arg1;
+ (id)placeholderImageForString:(id)arg1 font:(id)arg2 color:(id)arg3 highlighted:(BOOL)arg4;
+ (id)placeholderImageForString:(id)arg1 font:(id)arg2 color:(id)arg3;
+ (id)purpleColor;
+ (id)blueColor;
+ (void)flushImageCache;

@end

