//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVFoundation/AVPlayerItemOutput.h>

@class AVPlayerItemLegibleOutputInternal;
@protocol AVPlayerItemLegibleOutputPushDelegate;

@interface AVPlayerItemLegibleOutput : AVPlayerItemOutput
{
    AVPlayerItemLegibleOutputInternal *_legibleOutputInternal;
}

+ (void)initialize;
- (void)setSuppressesPlayerRendering:(BOOL)arg1;
- (BOOL)suppressesPlayerRendering;
- (void)setTextStylingResolution:(id)arg1;
- (id)textStylingResolution;
@property(nonatomic) double advanceIntervalForDelegateInvocation;
@property(readonly, nonatomic) struct dispatch_queue_s *delegateQueue;
@property(readonly, nonatomic) id <AVPlayerItemLegibleOutputPushDelegate> delegate;
- (void)setDelegate:(id)arg1 queue:(struct dispatch_queue_s *)arg2;
- (id)_figLegibleOutputsDictionaryOptions;
- (void)_detachFromPlayerItem;
- (BOOL)_attachToPlayerItem:(id)arg1;
- (void)_signalFlush;
- (void)_pushAttributedStrings:(id)arg1 andSampleBuffers:(id)arg2 atItemTime:(CDStruct_1b6d18a9)arg3;
- (void)finalize;
- (void)dealloc;
- (void)_collectUncollectables;
- (id)initWithDependencyFactory:(id)arg1 mediaSubtypesForNativeRepresentation:(id)arg2;
- (id)initWithMediaSubtypesForNativeRepresentation:(id)arg1;
- (id)init;

@end

