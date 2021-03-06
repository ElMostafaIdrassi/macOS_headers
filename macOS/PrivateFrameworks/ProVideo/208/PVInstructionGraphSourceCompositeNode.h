//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProVideo/PVInstructionGraphSourceNode.h>

@class NSDictionary, NSObject, NSString, NSURL, PVImageBuffer, PVInstructionGraphNode;

@interface PVInstructionGraphSourceCompositeNode : PVInstructionGraphSourceNode
{
    HGRef_9706a068 _renderManager;
    int _nodeType;
    int _trackID;
    unsigned int _outputFormat;
    id <PVCompositeDelegate> _delegate;
    NSURL *_imageURL;
    NSString *_imageKey;
    PVImageBuffer *_imageBuffer;
    PVInstructionGraphNode *_graphNode;
    struct NSDictionary *_inputMap;
    id <PVImageSeqDelegate> _imageSeqDelegate;
    id <PVCompositeDelegate> _renderDelegate;
    NSObject *_metadata;
    struct CGSize _outputSize;
}

+ (id)newSourceCompositeNodeWithDelegate:(id)arg1 inputs:(id)arg2 metadata:(id)arg3 outputSize:(struct CGSize)arg4 outputFormat:(unsigned int)arg5;
+ (id)newSourceCompositeNodeWithGraphNode:(id)arg1 outputSize:(struct CGSize)arg2 outputFormat:(unsigned int)arg3;
+ (id)newSourceCompositeNodeWithTrack:(int)arg1 outputSize:(struct CGSize)arg2;
+ (id)newSourceCompositeNodeWithPVImageBuffer:(id)arg1;
+ (id)newSourceCompositeNodeWithURL:(id)arg1 key:(id)arg2 imageDelegate:(id)arg3;
@property(retain, nonatomic) NSObject *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) id <PVCompositeDelegate> renderDelegate; // @synthesize renderDelegate=_renderDelegate;
@property(retain, nonatomic) id <PVImageSeqDelegate> imageSeqDelegate; // @synthesize imageSeqDelegate=_imageSeqDelegate;
@property(retain, nonatomic) NSDictionary *inputMap; // @synthesize inputMap=_inputMap;
@property(retain, nonatomic) PVInstructionGraphNode *graphNode; // @synthesize graphNode=_graphNode;
@property(nonatomic) unsigned int outputFormat; // @synthesize outputFormat=_outputFormat;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(retain, nonatomic) PVImageBuffer *imageBuffer; // @synthesize imageBuffer=_imageBuffer;
@property(retain, nonatomic) NSString *imageKey; // @synthesize imageKey=_imageKey;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) int trackID; // @synthesize trackID=_trackID;
@property(nonatomic) int nodeType; // @synthesize nodeType=_nodeType;
@property(retain, nonatomic) id <PVCompositeDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addDotTreeLinks:(HGRef_6bae45d3)arg1;
- (id)dotTreeLabel:(HGRef_6bae45d3)arg1;
- (id)instructionGraphNodeDescription;
- (HGRef_265f9e4c)nodeForCompositeTrackMap:(const map_ba6fd08a *)arg1;
- (id)requiredSourceTrackIDs;
- (id)getAllSourceNodes;
- (PCMatrix44Tmpl_93ed1289)pixelTransformForPVEffect:(id)arg1 igContext:(HGRef_6bae45d3)arg2;
- (PCRect_3a266109)inputSizeForPVEffect:(id)arg1 igContext:(HGRef_6bae45d3)arg2;
- (HGRef_265f9e4c)internalHGNodeForTime:(CDStruct_1b6d18a9)arg1 trackInputs:(const PVInputHGNodeMap_cba5f928 *)arg2 renderer:(const HGRef_5aef67ae *)arg3 igContext:(HGRef_6bae45d3)arg4;
- (id)renderFrameForTime:(CDStruct_1b6d18a9)arg1 inputs:(id)arg2;
- (void)unloadIGNode;
- (void)loadIGNode:(HGRef_6bae45d3)arg1 returnLoadedEffects:(id)arg2;
- (id)init;

@end

