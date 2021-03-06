//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AnnotationKit/AKAnnotation.h>

#import <AnnotationKit/AKRectangularAnnotationProtocol-Protocol.h>

@class NSImage, NSString;

@interface AKImageAnnotation : AKAnnotation <AKRectangularAnnotationProtocol>
{
    BOOL _hasShadow;
    BOOL _verticallyFlipped;
    BOOL _horizontallyFlipped;
    NSImage *_image;
    struct CGRect _rectangle;
}

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
@property BOOL horizontallyFlipped; // @synthesize horizontallyFlipped=_horizontallyFlipped;
@property BOOL verticallyFlipped; // @synthesize verticallyFlipped=_verticallyFlipped;
@property(retain) NSImage *image; // @synthesize image=_image;
@property BOOL hasShadow; // @synthesize hasShadow=_hasShadow;
@property struct CGRect rectangle; // @synthesize rectangle=_rectangle;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)translateBy:(struct CGPoint)arg1;
- (void)adjustModelToCompensateForOriginalExif;
- (struct CGRect)hitTestBounds;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

