//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ODDFillColorList;

@interface ODDColorTransformStyleLabel : NSObject
{
    ODDFillColorList *mFillColors;
    ODDFillColorList *mLineColors;
    ODDFillColorList *mEffectColors;
    ODDFillColorList *mTextLineColors;
    ODDFillColorList *mTextFillColors;
    ODDFillColorList *mTextEffectColors;
}

- (void).cxx_destruct;
- (void)applyToShapeStyle:(id)arg1 index:(unsigned int)arg2 count:(unsigned int)arg3 state:(id)arg4;
- (void)setTextEffectColors:(id)arg1;
- (id)textEffectColors;
- (void)setTextFillColors:(id)arg1;
- (id)textFillColors;
- (void)setTextLineColors:(id)arg1;
- (id)textLineColors;
- (void)setEffectColors:(id)arg1;
- (id)effectColors;
- (void)setLineColors:(id)arg1;
- (id)lineColors;
- (void)setFillColors:(id)arg1;
- (id)fillColors;

@end

