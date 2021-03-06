//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "HRRecordingTimerControllerDelegate.h"
#import "HRScreenRecorderAreaDelegate.h"
#import "HRScreenRecorderSettingsDelegate.h"
#import "NSPopoverDelegate.h"
#import "NSSplitViewDelegate.h"

@class HRScreenRecorderSettingsViewController, HRScreenRecorderView, NSButton, NSDate, NSObject<OS_dispatch_source>, NSString, NSURL;

@interface HRScreenRecorderViewController : NSViewController <NSSplitViewDelegate, NSPopoverDelegate, HRScreenRecorderAreaDelegate, HRRecordingTimerControllerDelegate, HRScreenRecorderSettingsDelegate>
{
    NSDate *_startRecordingDate;
    NSObject<OS_dispatch_source> *_timer;
    id <NSObject> _finishedRecordObserver;
    BOOL _recordCursor;
    BOOL _recordMouseClicks;
    BOOL _recordDefaultAudioInput;
    BOOL _useTimer;
    BOOL _fullScreen;
    NSButton *_settingsButton;
    NSButton *_recordButton;
    NSButton *_sizeButton;
    NSButton *_showHelpButton;
    HRScreenRecorderView *_previewView;
    HRScreenRecorderSettingsViewController *_settingsController;
    double _recordingLength;
    double _intervalLength;
    NSURL *_recordingsDirectory;
}

@property(retain, nonatomic) NSURL *recordingsDirectory; // @synthesize recordingsDirectory=_recordingsDirectory;
@property(nonatomic) double intervalLength; // @synthesize intervalLength=_intervalLength;
@property(nonatomic) double recordingLength; // @synthesize recordingLength=_recordingLength;
@property(nonatomic, getter=shouldFullScreen) BOOL fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic, getter=shouldUseTimer) BOOL useTimer; // @synthesize useTimer=_useTimer;
@property(nonatomic, getter=shouldRecordDefaultAudioInput) BOOL recordDefaultAudioInput; // @synthesize recordDefaultAudioInput=_recordDefaultAudioInput;
@property(nonatomic, getter=shouldRecordMouseClicks) BOOL recordMouseClicks; // @synthesize recordMouseClicks=_recordMouseClicks;
@property(nonatomic, getter=shouldRecordCursor) BOOL recordCursor; // @synthesize recordCursor=_recordCursor;
@property(retain) HRScreenRecorderSettingsViewController *settingsController; // @synthesize settingsController=_settingsController;
@property __weak HRScreenRecorderView *previewView; // @synthesize previewView=_previewView;
@property __weak NSButton *showHelpButton; // @synthesize showHelpButton=_showHelpButton;
@property __weak NSButton *sizeButton; // @synthesize sizeButton=_sizeButton;
@property __weak NSButton *recordButton; // @synthesize recordButton=_recordButton;
@property __weak NSButton *settingsButton; // @synthesize settingsButton=_settingsButton;
- (void).cxx_destruct;
- (void)showHelpController:(id)arg1;
- (struct CGRect)getPreviewViewFrame;
- (struct CGRect)getViewableRectInQuartzScreenCoordinates;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setRecordingAreaSize:(struct CGSize)arg1;
- (void)changeRecordingAreaSize:(id)arg1;
- (void)setTimerSettings:(BOOL)arg1 withRecording:(double)arg2 withInterval:(double)arg3 withDirectory:(id)arg4;
- (void)changeRecordingTimer:(id)arg1;
- (void)closeSettingsPanel;
- (void)setFullScreenRecord:(BOOL)arg1;
- (void)setDefaultAudioInput:(BOOL)arg1;
- (void)setCursor:(BOOL)arg1;
- (void)setMouseClicks:(BOOL)arg1;
- (void)launchSettings:(id)arg1;
- (void)prepareViewForRecording;
- (void)resetViewForAreaSelection;
- (void)updateSizeLabel:(struct CGSize)arg1;
- (void)record:(id)arg1;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

