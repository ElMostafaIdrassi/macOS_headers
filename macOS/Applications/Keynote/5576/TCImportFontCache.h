//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TSUNoCopyDictionary;

@interface TCImportFontCache : NSObject
{
    TSUNoCopyDictionary *mFontCache;
    NSMutableDictionary *mFontNameCache;
}

+ (struct CGSize)stringSizeForText:(id)arg1 ctFontRef:(struct __CTFont *)arg2;
@property(readonly, nonatomic) NSMutableDictionary *fontNameCache; // @synthesize fontNameCache=mFontNameCache;
- (void).cxx_destruct;
- (void)validateFontInfoInPropertyMap:(id)arg1 baseStyle:(id)arg2;
- (void)addReplacementFontWarning:(id)arg1 fontName:(id)arg2;
- (struct CGSize)stringSizeForText:(id)arg1 fontName:(id)arg2 fontSize:(int)arg3;
- (struct CGSize)stringSizeForSpaceWithFontName:(id)arg1 fontSize:(int)arg2;
- (struct __CTFont *)fontRefForFontName:(id)arg1 size:(int)arg2;
- (struct __CTFont *)ctFontRefForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

