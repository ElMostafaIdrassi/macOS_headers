//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSSet, RPMediaControlSession;

@interface _TVRCRapportMediaEventsManager : NSObject
{
    int _currentSetting;
    NSSet *_volumeCommands;
    NSMutableSet *_mediaCommands;
    RPMediaControlSession *_mediaSession;
    CDUnknownBlockType _eventHandler;
}

@property(nonatomic) int currentSetting; // @synthesize currentSetting=_currentSetting;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) RPMediaControlSession *mediaSession; // @synthesize mediaSession=_mediaSession;
@property(retain, nonatomic) NSMutableSet *mediaCommands; // @synthesize mediaCommands=_mediaCommands;
@property(retain, nonatomic) NSSet *volumeCommands; // @synthesize volumeCommands=_volumeCommands;
- (void).cxx_destruct;
- (id)supportedCaptionEvents;
- (void)_refreshCaptionState;
- (int)_captionSettingForButtonEvent:(id)arg1;
- (int)_commandForMediaButtonEvent:(id)arg1;
- (void)_setupMediaCommands:(unsigned long long)arg1;
- (void)sendMediaEvent:(id)arg1;
@property(readonly) NSSet *supportedMediaCommands;
- (void)dealloc;
- (id)initWithCompanionLinkClient:(id)arg1 eventHandler:(CDUnknownBlockType)arg2;

@end

