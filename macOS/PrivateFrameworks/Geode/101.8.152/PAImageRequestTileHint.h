//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PAImageRequestTileHint : NSObject
{
    struct PFIntSize_st _tileThreshold;
}

+ (id)noTileHint;
+ (id)defaultTileHint;
@property struct PFIntSize_st tileThreshold; // @synthesize tileThreshold=_tileThreshold;
- (id)description;
- (struct PFIntSize_st)tileSizeForImageSize:(struct PFIntSize_st)arg1;

@end

