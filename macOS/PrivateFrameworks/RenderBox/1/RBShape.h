//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RBShape : NSObject
{
    struct RBShapeData _data;
    struct InlineHeap<256> _heap;
    BOOL _antialiased;
    BOOL _eoFill;
}

@property(nonatomic) BOOL EOFill; // @synthesize EOFill=_eoFill;
@property(nonatomic, getter=isAntialiased) BOOL antialiased; // @synthesize antialiased=_antialiased;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setStroke:(id)arg1;
- (void)setStrokedGlyph:(unsigned short)arg1 font:(struct CGFont *)arg2 transform:(struct CGAffineTransform)arg3 lineWidth:(double)arg4 lineCap:(int)arg5 lineJoin:(int)arg6 miterLimit:(double)arg7 dashPhase:(double)arg8 dashPattern:(const double *)arg9 dashCount:(long long)arg10;
- (void)setGlyphs:(const unsigned short *)arg1 positions:(const struct CGPoint *)arg2 count:(unsigned long long)arg3 font:(struct CGFont *)arg4 renderingStyle:(unsigned int)arg5;
- (void)setStrokedPath:(struct CGPath *)arg1 transform:(struct CGAffineTransform)arg2 lineWidth:(double)arg3 lineCap:(int)arg4 lineJoin:(int)arg5 miterLimit:(double)arg6;
- (void)setStrokedPath:(struct CGPath *)arg1 transform:(struct CGAffineTransform)arg2 lineWidth:(double)arg3 lineCap:(int)arg4 lineJoin:(int)arg5 miterLimit:(double)arg6 dashPhase:(double)arg7 dashPattern:(const double *)arg8 dashCount:(long long)arg9;
- (void)setPath:(struct CGPath *)arg1 transform:(struct CGAffineTransform)arg2;
- (void)setPath:(struct CGPath *)arg1;
- (void)setStrokedCircleAtPoint:(struct CGPoint)arg1 radius:(double)arg2 lineWidth:(double)arg3;
- (void)setCircleAtPoint:(struct CGPoint)arg1 radius:(double)arg2;
- (void)setEllipseInRect:(struct CGRect)arg1;
- (void)setStrokedRoundedRect:(struct CGRect)arg1 cornerRadii:(CDStruct_d2b197d1)arg2 cornerStyle:(int)arg3 lineWidth:(double)arg4;
- (void)setStrokedRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2 cornerStyle:(int)arg3 lineWidth:(double)arg4;
- (void)setRoundedRect:(struct CGRect)arg1 cornerRadii:(CDStruct_d2b197d1)arg2 cornerStyle:(int)arg3;
- (void)setRoundedRect:(struct CGRect)arg1 cornerSize:(struct CGSize)arg2 cornerStyle:(int)arg3;
- (void)setRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2 cornerStyle:(int)arg3;
- (void)setStrokedRect:(struct CGRect)arg1 lineWidth:(double)arg2;
- (void)setRect:(struct CGRect)arg1;
- (void)setEmpty;
- (void)setInfinite;
@property(readonly, nonatomic) struct RBShapeData *shapeData;
- (void)dealloc;
- (id)init;

@end

