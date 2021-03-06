//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVVCAudioBuffer, AVVoiceController, NSError;

@protocol AVVoiceControllerPlaybackDelegate <NSObject>
- (void)voiceControllerPlaybackBufferAvailable:(AVVoiceController *)arg1 buffer:(AVVCAudioBuffer *)arg2;

@optional
- (void)voiceControllerDecoderErrorDidOccur:(AVVoiceController *)arg1 error:(NSError *)arg2;
- (void)voiceControllerDidStopPlaying:(AVVoiceController *)arg1 forReason:(long long)arg2;
- (void)voiceControllerDidStartPlaying:(AVVoiceController *)arg1 successfully:(BOOL)arg2;
@end

