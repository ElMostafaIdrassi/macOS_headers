//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CALayer, _TtC5Pages20TPCanvasPageAnimator;

@protocol _TtP5Pages28TPCanvasPageAnimatorDelegate_ <NSObject>
- (struct CGPoint)canvasPageAnimator:(_TtC5Pages20TPCanvasPageAnimator *)arg1 pointInRootForLayerPoint:(struct CGPoint)arg2;
- (struct CGPoint)canvasPageAnimator:(_TtC5Pages20TPCanvasPageAnimator *)arg1 layerPointForPointInRoot:(struct CGPoint)arg2;
- (struct CGPoint)canvasPageAnimator:(_TtC5Pages20TPCanvasPageAnimator *)arg1 pointInRootForUnscaledPoint:(struct CGPoint)arg2;
- (CALayer *)canvasPageAnimatorLayerForAnimator:(_TtC5Pages20TPCanvasPageAnimator *)arg1;
- (void)canvasPageAnimatorRemoveAnimatorViewForAnimator:(_TtC5Pages20TPCanvasPageAnimator *)arg1;
- (void)canvasPageAnimator:(_TtC5Pages20TPCanvasPageAnimator *)arg1 setAnimatorViewIsHidden:(BOOL)arg2;
- (void)canvasPageAnimatorInstallHiddenAnimatorViewForAnimator:(_TtC5Pages20TPCanvasPageAnimator *)arg1;
@end

