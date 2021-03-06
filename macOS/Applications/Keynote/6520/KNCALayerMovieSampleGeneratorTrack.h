//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KNMovieSampleGeneratorTrack.h"

@class CALayer, NSError, NSObject<OS_dispatch_queue>, NSString;

@interface KNCALayerMovieSampleGeneratorTrack : NSObject <KNMovieSampleGeneratorTrack>
{
    CALayer *_layer;
    CDStruct_e83c9415 _generatedTimeRange;
    CDStruct_1b6d18a9 _frameDuration;
    NSObject<OS_dispatch_queue> *_queue;
    id <KNCALayerImageBufferGenerator> _imageBufferGenerator;
    CDStruct_1b6d18a9 _nextSampleBufferTime;
    BOOL _isDone;
    NSError *_error;
    struct CGSize _mediaSize;
}

@property(readonly, nonatomic) struct CGSize mediaSize; // @synthesize mediaSize=_mediaSize;
- (void).cxx_destruct;
- (void)p_failWithError:(id)arg1;
- (void)p_tearDownImageBufferGenerator;
- (void)p_setUpImageBufferGeneratorIfNeeded;
@property(readonly) NSError *error; // @synthesize error=_error;
- (void)cancel;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
@property(readonly, nonatomic) NSString *mediaType;
- (void)dealloc;
- (id)initWithLayer:(id)arg1 generatedTimeRange:(CDStruct_e83c9415)arg2 frameDuration:(CDStruct_1b6d18a9)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

