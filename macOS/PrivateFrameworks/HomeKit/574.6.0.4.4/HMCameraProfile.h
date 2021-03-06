//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKit/HMAccessoryProfile.h>

@class HMCameraAudioControl, HMCameraSettingsControl, HMCameraSnapshotControl, HMCameraStreamControl, HMCameraUserSettings, _HMCameraProfile;

@interface HMCameraProfile : HMAccessoryProfile
{
    HMCameraStreamControl *_streamControl;
    HMCameraSnapshotControl *_snapshotControl;
    HMCameraSettingsControl *_settingsControl;
    HMCameraAudioControl *_speakerControl;
    HMCameraAudioControl *_microphoneControl;
    HMCameraUserSettings *_userSettings;
}

@property(readonly) HMCameraUserSettings *userSettings; // @synthesize userSettings=_userSettings;
@property(retain, nonatomic) HMCameraAudioControl *microphoneControl; // @synthesize microphoneControl=_microphoneControl;
@property(retain, nonatomic) HMCameraAudioControl *speakerControl; // @synthesize speakerControl=_speakerControl;
@property(retain, nonatomic) HMCameraSettingsControl *settingsControl; // @synthesize settingsControl=_settingsControl;
@property(retain, nonatomic) HMCameraSnapshotControl *snapshotControl; // @synthesize snapshotControl=_snapshotControl;
@property(retain, nonatomic) HMCameraStreamControl *streamControl; // @synthesize streamControl=_streamControl;
- (void).cxx_destruct;
- (void)deleteAllClipsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)services;
@property(readonly, nonatomic) _HMCameraProfile *cameraProfile;
- (id)initWithCameraProfile:(id)arg1;

@end

