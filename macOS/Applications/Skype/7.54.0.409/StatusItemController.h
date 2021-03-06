//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSMenuDelegate-Protocol.h"

@class NSStatusItem, NSString, NSTimer;

@interface StatusItemController : NSObject <NSMenuDelegate>
{
    NSTimer *_screensharingBlinkTimer;
    BOOL _blinkOn;
    BOOL _menuOpen;
    BOOL _isObservingConversationManager;
    BOOL _showStopScreensharing;
    NSStatusItem *_statusItem;
}

@property BOOL showStopScreensharing; // @synthesize showStopScreensharing=_showStopScreensharing;
@property(retain) NSStatusItem *statusItem; // @synthesize statusItem=_statusItem;
- (void).cxx_destruct;
- (void)onAccountDidLogOut:(id)arg1;
- (void)onAccountDidLogIn:(id)arg1;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (void)menuNeedsUpdate:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleIsSendingScreensharingDidChange;
- (void)stopObservingConversationManager;
- (void)startObservingConversationManager;
- (void)stopBlinkTimer;
- (void)startBlinkTimer;
- (void)screensharingBlinkTimerDidFire:(id)arg1;
- (void)switchScreensharing:(id)arg1;
- (void)stopScreensharing:(id)arg1;
- (void)removeStatusItem;
- (void)updateStatusItem;
- (void)addStatusItem;
- (id)_generateStatusItemMenu;
- (id)_statusItemImageForPresence:(long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

