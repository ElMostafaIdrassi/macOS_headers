//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PVMediaElement-Protocol.h"

@class AKPageModelController, PVMediaContainerBase;

@interface PVMediaElementBase : NSObject <PVMediaElement>
{
    PVMediaContainerBase *_parentContainer;
    AKPageModelController *_pageModelController;
    BOOL _pageModelControllerObservationEnabled;
}

@property(getter=isPageModelControllerObservationEnabled) BOOL pageModelControllerObservationEnabled; // @synthesize pageModelControllerObservationEnabled=_pageModelControllerObservationEnabled;
- (void)discardLayer;
- (id)layerForView:(id)arg1 scaleFactor:(double)arg2 zoomCenter:(struct CGPoint)arg3;
- (id)cachedLayer;
- (BOOL)canRenderToLayer;
- (id)annotationWithPDFAnnotationIdenticalTo:(id)arg1;
- (id)annotationWithAKAnnotationIdenticalTo:(id)arg1;
- (void)removeAnnotationAtIndex:(unsigned long long)arg1;
- (void)insertAnnotation:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)annotations;
@property(retain, nonatomic) AKPageModelController *pageModelController;
- (unsigned long long)EXIFOrientation;
- (void)rotateLeft;
- (void)rotateRight;
- (id)thumbnailImageOfSize:(struct CGSize)arg1;
- (void)setParentContainer:(id)arg1;
- (id)parentContainer;
- (BOOL)isQuickLookElement;
- (BOOL)isC3DElement;
- (BOOL)isImageElement;
- (BOOL)isPDFElement;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;

@end

