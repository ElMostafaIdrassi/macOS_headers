//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIColor;

__attribute__((visibility("hidden")))
@interface ISColor : NSObject
{
    struct CGColor *_cgColor;
}

+ (struct CGColorSpace *)deviceGreyColorSpace;
+ (struct CGColorSpace *)deviceRGBColorSpace;
+ (id)black;
@property(readonly) struct CGColor *cgColor; // @synthesize cgColor=_cgColor;
@property(readonly) CIColor *ciColor;
- (void)dealloc;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;

@end

