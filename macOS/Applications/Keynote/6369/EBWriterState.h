//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EBState.h"

@class EDColorsCollection, TCColorPalettizer, TSUPointerKeyDictionary;

@interface EBWriterState : EBState
{
    struct XlBinaryWriter *mXlWriter;
    EDColorsCollection *mColors;
    TCColorPalettizer *mColorPalettizer;
    TSUPointerKeyDictionary *mESDObjectToCHDChartMap;
    TSUPointerKeyDictionary *mESDObjectToOADrawableMap;
    TSUPointerKeyDictionary *mCHDChartToESDDrawingContainer;
    unsigned long long mCurrentSheetIndex;
    double mDefaultColumnWidth;
    double mDefaultRowHeight;
}

- (void).cxx_destruct;
- (void)cacheESDDrawingContainer:(id)arg1 forCHDChart:(id)arg2;
- (id)esdDrawingContainerForCHDChart:(id)arg1;
- (void)cacheOADDrawable:(id)arg1 forESDObject:(id)arg2;
- (id)oadDrawableForESDObject:(id)arg1;
- (void)cacheCHDChart:(id)arg1 forESDObject:(id)arg2;
- (id)chdChartForESDObject:(id)arg1;
- (unsigned int)xlColorIndexFromNonSystemEDColorIndex:(unsigned long long)arg1;
- (void)setColorPalettizer:(id)arg1;
- (id)colorPalettizer;
- (void)setDefaultRowHeight:(double)arg1;
- (double)defaultRowHeight;
- (void)setDefaultColumnWidth:(double)arg1;
- (double)defaultColumnWidth;
- (void)setCurrentSheetIndex:(unsigned long long)arg1;
- (unsigned long long)currentSheetIndex;
- (struct XlFormulaProcessor *)xlFormulaProcessor;
- (void)setSheetNames:(ChVector_cc6fdd32 *)arg1;
- (void)setXlNameTable:(struct XlNameTable *)arg1;
- (void)setXlLinkTable:(struct XlLinkTable *)arg1;
- (void)setXlWriter:(struct XlBinaryWriter *)arg1;
- (struct XlBinaryWriter *)xlWriter;
- (id)initWithXlWriter:(struct XlBinaryWriter *)arg1 cancelDelegate:(id)arg2;

@end

