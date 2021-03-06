//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSKDocumentObject-Protocol.h"
#import "TSKPencilAnnotation-Protocol.h"
#import "TSPCopying-Protocol.h"

@class NSString, PKDrawing, TSDDrawableInfo, TSDPencilAnnotationStorage;

@interface TSDPencilAnnotation : TSPObject <GSSPAutoEncodable, TSPCopying, TSKDocumentObject, TSKPencilAnnotation>
{
    TSDPencilAnnotationStorage *_pencilAnnotationStorage;
    TSDDrawableInfo *_parent;
}

+ (BOOL)needsObjectUUID;
@property(nonatomic) __weak TSDDrawableInfo *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) TSDPencilAnnotationStorage *pencilAnnotationStorage; // @synthesize pencilAnnotationStorage=_pencilAnnotationStorage;
- (void).cxx_destruct;
- (id)commandForDeletion;
- (id)selectionPathUsingSelectionModelTranslator:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct PencilAnnotationArchive *)arg1 unarchiver:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
@property(readonly, nonatomic) NSString *uuid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 pencilAnnotationStorage:(id)arg2;
- (void)populateGSSPDrawablePencilAnnotation:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) PKDrawing *drawing; // @dynamic drawing;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

