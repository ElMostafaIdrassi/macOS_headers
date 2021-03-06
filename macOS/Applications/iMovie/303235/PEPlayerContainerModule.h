//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <LunaKit/LKViewModule.h>

#import "FFErrorReportingProtocol-Protocol.h"
#import "FFPlayerModuleDelegate-Protocol.h"
#import "NSTouchBarProvider-Protocol.h"
#import "PEPlayerContainerViewDelegate-Protocol.h"

@class LKButton, LKContainerItemView, LKMenu, LKPopUpButton, LKSegmentedControl, LKTextField, LKWindow, NSArray, NSDictionary, NSImageView, NSLayoutConstraint, NSMenu, NSMutableArray, NSMutableDictionary, NSResponder, NSString, NSTextField, NSTouchBar, NSView, PEAudioMeterModule, PEPlayerDFRController, PETimecodeDisplayViewController, PEToolbarMetersButton, PEViewedClipSet;

@interface PEPlayerContainerModule : LKViewModule <PEPlayerContainerViewDelegate, FFErrorReportingProtocol, FFPlayerModuleDelegate, NSTouchBarProvider>
{
    PEPlayerDFRController *_dfrController;
    int _mode;
    int _defaultMode;
    int _previousMode;
    NSMutableArray *_playerModules;
    PEViewedClipSet *_viewedClips;
    PEViewedClipSet *_viewedClipsOutstandingRequest;
    unsigned long long _canvasIndex;
    NSView *_accessoryView;
    NSView *_footerView;
    NSView *_transportControlsFooterView;
    NSView *_timecodeDisplayContainerView;
    NSView *_colorControlsFooterView;
    NSView *_oneUpAccessoryView;
    LKPopUpButton *_oneUpModeControl;
    LKPopUpButton *_oneUpViewerControls;
    NSImageView *_oneUpViewerIcon;
    NSTextField *_oneUpViewerTitle;
    LKTextField *_oneUpResolutionLabel;
    LKTextField *_oneUpInfoTitle;
    NSView *_twoUpAccessoryView;
    LKPopUpButton *_twoUpModeControl;
    LKPopUpButton *_twoUpViewerControls;
    LKPopUpButton *_twoUpCanvasControls;
    NSTextField *_twoUpViewerTitle;
    NSTextField *_twoUpCanvasTitle;
    NSView *_twoUpViewerPaneCap;
    NSView *_twoUpCanvasPaneCap;
    NSImageView *_twoUpViewerIcon;
    NSImageView *_twoUpCanvasIcon;
    LKTextField *_twoUpCanvasResolutionLabel;
    LKTextField *_twoUpViewerResolutionLabel;
    NSMenu *_videoScaleMenu;
    NSMenu *_videoScaleMenuHiDPI;
    NSMenu *_twoUpScaleMenu;
    NSMenu *_twoUpScaleMenuHiDPI;
    NSMenu *_twoUpCanvasScaleMenu;
    NSMenu *_twoUpCanvasScaleMenuHiDPI;
    NSMenu *_onScreenControlsMenu;
    NSMenu *_colorDisplayMenu;
    NSMenu *_selectedModeMenu;
    NSMenu *_combinedOptionsMenu;
    LKMenu *_enhancementMenu;
    LKMenu *_retimeMenu;
    NSLayoutConstraint *_timecodeCenteringConstraint;
    NSLayoutConstraint *_retainedTimecodeCenteringConstraint;
    LKButton *_playButton;
    LKSegmentedControl *_previousNextFrameControl;
    LKButton *_fullScreenButton;
    LKSegmentedControl *_loopControl;
    LKSegmentedControl *_showAdvancedButton;
    LKSegmentedControl *_toolPalette;
    LKPopUpButton *_enhancePopup;
    LKPopUpButton *_retimePopup;
    NSView *_audioMeters;
    PEToolbarMetersButton *_audioMetersButton;
    LKWindow *_matchWindow;
    NSView *_matchControlsFooterView;
    NSView *_matchAccessoryView;
    BOOL _splitViewIsDragging;
    BOOL _showMatchControls;
    BOOL _viewerIsDominant;
    BOOL _dominanceBeforeTransientViewing;
    BOOL _showColorControls;
    BOOL _advancedWasOpen;
    BOOL _isActiveModule;
    id _observedActive;
    BOOL _layoutScopesVertically;
    BOOL _layoutAngleViewerVertically;
    BOOL _numericEntryInProgress;
    NSMutableDictionary *_splitterPositions;
    struct CGRect _scopesFrameAfterLayout;
    PEAudioMeterModule *_babyMeters;
    unsigned int _playerUsesLayers:1;
    unsigned int _unusedBits:31;
    NSMutableDictionary *_playersInfo;
    NSMutableDictionary *_scopesInfo;
    NSMutableArray *_cachedPlayers;
    long long _multiAngleEditStyle;
    PETimecodeDisplayViewController *_timecodeDisplayViewController;
    struct FFProcrastinatedDispatch_t _procrastinatedSetNeedsDisplayContext;
    BOOL _isInFullscreenMode;
    id _savedFirstResponder;
    id _savedActiveModule;
    NSResponder *_savedModuleNextResponder;
    NSResponder *_savedModuleViewNextResponder;
    NSDictionary *_fullScreenOptions;
    LKContainerItemView *_savedContainerItemView;
    int _savedDisplayAreaMode;
    BOOL _textOSCActive;
}

+ (id)tools;
+ (id)makeDisplayArea;
@property(nonatomic) BOOL layoutAngleViewerVertically; // @synthesize layoutAngleViewerVertically=_layoutAngleViewerVertically;
@property(nonatomic) BOOL showMatchControls; // @synthesize showMatchControls=_showMatchControls;
@property(nonatomic) BOOL showColorControls; // @synthesize showColorControls=_showColorControls;
@property(readonly) NSArray *playerModules; // @synthesize playerModules=_playerModules;
@property(nonatomic) BOOL viewerIsDominant; // @synthesize viewerIsDominant=_viewerIsDominant;
@property(nonatomic) int defaultMode; // @synthesize defaultMode=_defaultMode;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void)layoutDidChange:(id)arg1;
- (void)reconfigurePlayers;
- (void)playerModule:(id)arg1 didExitFullScreenForEvent:(id)arg2;
- (id)localModuleActions;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3;
- (void)_displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 preferAudio:(BOOL)arg4;
- (void)_projectChanged:(id)arg1;
- (void)_setupVout;
- (void)_ignoreObservingActivePlayer;
- (void)_observeActivePlayer;
- (void)_setupPaneCapControls;
- (void)_rebuildPaneCapMenus;
- (void)_statusInfoChanged:(id)arg1;
- (void)_updateLabel;
- (id)displayVideoFormat:(id)arg1;
- (void)_updateZoomLabel;
- (void)_updateZoomMenus;
- (id)_newPlayerModuleForMode:(int)arg1 context:(id)arg2 layoutStyle:(int)arg3 sublayoutName:(id)arg4;
- (void)_assignMediaToPlayers;
- (void)goToInspectorViewer:(id)arg1;
- (void)importClips:(id)arg1;
- (void)_clearScopesContainerModuleWithMode:(int)arg1;
- (id)scopesContainerModule;
- (void)updateScopesInfo;
- (void)_updateScopesInfoToPlayers;
- (void)_updateScopesToScopesInfo;
- (void)_updatePlayerInfoToPlayer;
- (void)_updatePlayersToPlayerInfo;
- (void)_updatePlayerZoomFactorIfNecessary;
- (void)_layoutPlayersForMode:(int)arg1 layoutStyle:(int)arg2;
- (void)_layoutPlayersForNUpWithMode:(int)arg1;
- (void)_layoutPlayersForMode:(int)arg1;
- (BOOL)_layoutPlayersVerticallyForMode:(int)arg1;
- (void)_makePlayersForMode:(int)arg1 layoutStyle:(int)arg2;
- (void)_makePlayersForMode:(int)arg1 layoutStyle:(int)arg2 neededPlayerCount:(unsigned long long)arg3;
- (void)_conformPlayersToLayoutStyle:(int)arg1;
- (void)_setupPlayerModules;
- (void)_updateTwoUpViewerIcon;
- (void)_updateOneUpViewerIcon;
- (id)imageNameForType:(int)arg1;
- (int)mediaBrowserModeIcon;
- (void)_setViewedClips:(id)arg1 updatePlayers:(BOOL)arg2;
- (void)updatePlayers;
- (void)_addPlayerTabsToModule:(id)arg1 forMenu:(id)arg2 indentLevel:(long long)arg3 target:(id)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)numericEntryDidEndNotification:(id)arg1;
- (void)numericEntryDidBeginNotification:(id)arg1;
- (void)displayAreaFrameChanged:(id)arg1;
- (void)userDefaultsChanged:(id)arg1;
- (void)displayAreaDidBeginPlayback:(id)arg1;
- (void)displayAreaGainedFocus:(id)arg1;
- (void)textOSCBecameInActive:(id)arg1;
- (void)textOSCBecameActive:(id)arg1;
- (void)firstResponderChanged:(id)arg1;
- (void)updateSelectionState;
- (void)setRangeCheckDrawMode:(id)arg1;
- (void)setRangeCheckSpace:(id)arg1;
- (id)_copyPlayerModulesForRangeCheck;
- (void)audioMetersControlClick:(id)arg1;
- (void)toggleAudioMeters:(id)arg1;
- (void)toggleEnhanceAudio:(id)arg1;
- (void)toggleColorBoard:(id)arg1;
- (void)activeToolChanged:(id)arg1;
- (int)_preferredDisplayModeForToolClass:(Class)arg1;
- (void)setupOptionsMenuKeyEquivalents:(id)arg1;
- (void)changeToolPaletteTool:(id)arg1;
- (void)selectTool:(id)arg1;
- (void)selectTransformTool:(id)arg1;
- (void)_setupToolPalette;
- (BOOL)_shouldShowFancyControlsForCanvas;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)rangeCheckLabelMenuItem:(id)arg1;
- (void)noopMenuItem:(id)arg1;
- (void)multiAngleEditStyleVideo:(id)arg1;
- (void)multiAngleEditStyleAudio:(id)arg1;
- (void)multiAngleEditStyleAudioVideo:(id)arg1;
- (void)_fadeDisplayFromBlackWithDuration:(double)arg1 token:(unsigned int)arg2;
- (unsigned int)_fadeDisplayToBlackWithDuration:(double)arg1;
- (void)down:(id)arg1;
- (void)up:(id)arg1;
- (void)exitFullScreen:(id)arg1;
- (BOOL)isSubmoduleHidden:(id)arg1;
- (BOOL)isVisible;
- (void)sendFullScreen:(id)arg1;
- (void)previousNextEdit:(id)arg1;
- (void)previousNextFrame:(id)arg1;
- (void)toggleLoopPlayback:(id)arg1;
- (void)playSegmentedControlAction:(id)arg1;
- (void)toggleAdvancedColorControls:(id)arg1;
- (void)selectPlaybackQuality:(id)arg1;
- (void)selectPlaybackMedia:(id)arg1;
- (void)_warnUserAboutBackgroundShareProcessAndProxyMedia;
- (void)toggleBalance:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)toggleVerticalAngleViewerLayout:(id)arg1;
- (void)setShowBothFields:(id)arg1;
- (BOOL)showBothFields;
- (void)setDisplayBroadcastSafeZones:(id)arg1;
- (BOOL)displaysBroadcastSafeZones;
- (void)setHighlightsExcessLuma:(id)arg1;
- (void)setColorChannelDisplay:(id)arg1;
- (void)setZoomFactor:(id)arg1;
- (void)zoomOut:(id)arg1;
- (void)zoomIn:(id)arg1;
- (void)zoomToFit:(id)arg1;
- (id)playerModuleOrderedZoomLevels:(id)arg1;
- (void)toggleVideoScopes:(id)arg1;
- (void)toggleScopes:(id)arg1;
- (void)showWaveform:(id)arg1;
- (void)showVectorscope:(id)arg1;
- (void)showHistogram:(id)arg1;
- (void)showEventsAndTimeline:(id)arg1;
- (void)showMultiangle:(id)arg1;
- (void)addPlayerTab:(id)arg1;
- (void)selectPlayerTab:(id)arg1;
- (void)reportError:(id)arg1;
- (id)playerChangedNotificationKey;
@property(getter=isLayoutScopesVertically) BOOL layoutScopesVertically; // @dynamic layoutScopesVertically;
- (id)context;
- (id)selectedItems;
- (id)displayUnitForMedia:(id)arg1;
- (BOOL)isMainDisplayArea;
- (void)setModeIgnoringAccessories:(int)arg1;
- (void)_updateTimecodeDisplayMode;
- (BOOL)toolShouldNotShowOrAllowScopes:(Class)arg1;
- (id)shadowRects;
- (void)view:(id)arg1 didMoveToWindow:(id)arg2;
- (void)view:(id)arg1 willMoveToWindow:(id)arg2;
- (void)splitViewDidEndDragging:(id)arg1;
- (void)splitViewWillBeginDragging:(id)arg1;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)adjustTwoUpPaneCapForSplitterPosition:(double)arg1;
- (void)splitViewWillResizeSubviews:(id)arg1;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (BOOL)isSplitterAdjustableForMode:(int)arg1;
- (void)hideSportsTeamOSC;
- (id)fullscreenPlayerPresentationOptions;
- (BOOL)isInFullScreenMode;
- (BOOL)isLooping;
- (BOOL)isPlaying;
- (id)_activePlayerModule;
- (id)viewerPlayerModuleAtIndex:(unsigned long long)arg1;
- (id)viewerPlayerModule;
- (id)playerModuleAtLocation:(struct CGPoint)arg1;
- (id)canvasPlayerModule;
- (id)playerVideoModule;
- (BOOL)_activePlayerModuleIsCanvas;
- (unsigned long long)_activePlayerModuleIndex;
- (void)selectDisplayAreaMode:(id)arg1;
- (id)moduleFooterAccessoryView;
- (BOOL)wantsTransparentBackground;
- (BOOL)wantsFooterBar;
- (id)moduleAccessoryView;
- (BOOL)useWindowForFocusIndicator;
- (BOOL)wantsFocusIndicator;
- (BOOL)wantsCapBar;
- (id)targetModules;
- (void)shouldOpenColorBoard:(id)arg1;
- (void)moduleDidUnhide;
- (void)moduleDidHide;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (BOOL)playerUsesLayers;
- (void)preLayout:(id)arg1;
- (id)contentLayoutDictionary;
- (void)takeContentLayoutFromDictionary:(id)arg1;
- (id)playerLayoutName;
- (id)submoduleLayoutArray;
- (id)lastKeyView;
- (id)firstKeyView;
- (struct CGSize)viewMinSize;
- (void)cleanupBabyAudioMeters;
- (void)setupBabyAudioMeters;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)viewDidLoad;
@property(readonly) NSTouchBar *touchBar;
- (id)toolTip:(id)arg1 forProCommand:(id)arg2;
- (void)hideModule:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

