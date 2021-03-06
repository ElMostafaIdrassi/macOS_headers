//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCopying-Protocol.h>
#import <AppKit/NSObject-Protocol.h>

@class NSAttributedString, NSColor, NSDictionary, NSImage, NSStringDrawingContext;

@protocol NSContentStyle <NSObject, NSCopying>
@property(readonly) NSColor *equivalentForegroundColorForTemplateImage;
@property(readonly) int outputBlendModeForTemplateContent;
- (struct CGImage *)stylizedImageForImage:(struct CGImage *)arg1 isTemplate:(BOOL)arg2 backingTransform:(struct CGAffineTransform)arg3;
- (void)drawStylizedImage:(NSImage *)arg1 inAlignmentRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 flip:(BOOL)arg5 hints:(NSDictionary *)arg6;
- (void)configureStringDrawingContext:(NSStringDrawingContext *)arg1 forEffectsAppropriateForAttributes:(NSDictionary *)arg2;
- (NSAttributedString *)stylizedAttributedStringForAttributedString:(NSAttributedString *)arg1;
- (NSDictionary *)stylizedStringAttributesForAttributes:(NSDictionary *)arg1;
@end

