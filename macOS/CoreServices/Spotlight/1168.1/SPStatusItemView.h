//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSStatusItem, NSTimer;
@protocol OS_dispatch_queue;

@interface SPStatusItemView : NSObject
{
    struct _MDSearchViewFlags _flags;
    unsigned int _showMenuId;
    double _spaceChangedTime;
    BOOL _didTriggerPeriodic;
    BOOL _didToggleWindowVisibilityAlready;
    NSTimer *_lostKeyFocusTimer;
    NSObject<OS_dispatch_queue> *_eventCollectorQueue;
    BOOL _eventFocusTaken;
    NSStatusItem *_statusItem;
    NSMutableArray *_eventCollector;
    id _eventMonitor;
    struct CPSProcessSerNum _eventMonitorPSN;
}

+ (struct CGRect)searchViewRect;
+ (struct CGRect)searchViewRectWithPadding:(BOOL)arg1;
+ (BOOL)shouldBeDisabled;
+ (double)upTime;
+ (void)initialize;
@property(nonatomic) BOOL eventFocusTaken; // @synthesize eventFocusTaken=_eventFocusTaken;
@property(nonatomic) struct CPSProcessSerNum eventMonitorPSN; // @synthesize eventMonitorPSN=_eventMonitorPSN;
@property(retain, nonatomic) id eventMonitor; // @synthesize eventMonitor=_eventMonitor;
@property(retain, nonatomic) NSMutableArray *eventCollector; // @synthesize eventCollector=_eventCollector;
@property(retain) NSStatusItem *statusItem; // @synthesize statusItem=_statusItem;
- (void).cxx_destruct;
- (void)windowDidOrderOut;
- (void)_eventMonitorCleanup;
- (void)_eventMonitorStopAndProcess;
- (void)_eventMonitorStop;
- (void)_eventMonitorStart;
- (id)_eventCollectorPopEvents;
- (void)_eventCollectorAddEvent:(id)arg1;
- (void)_eventCollectorReset;
@property(readonly) NSObject<OS_dispatch_queue> *eventCollectorQueue;
- (void)_screenChanged:(id)arg1;
- (void)_serverDiedSafe:(id)arg1;
- (void)_serverDied:(id)arg1;
- (void)_windowBecomeMain:(id)arg1;
- (void)_windowBecomeKey:(id)arg1;
- (void)_lostKeyFocus:(id)arg1;
- (void)_lostKeyFocusTimeout:(id)arg1;
- (void)_anotherMenuWentUp:(id)arg1;
- (void)openMenu;
- (void)closeMenuAndActivateApplicationOwnsMenuBarWhyDisappear:(long long)arg1;
- (void)closeMenuWhyDisappear:(long long)arg1;
- (id)accessibilityTitle;
- (BOOL)accessibilityPerformPress;
- (void)mouseDown:(id)arg1;
- (void)mouseAction:(id)arg1;
- (void)_toggleAfterSwitchingToScreen:(id)arg1 forceShow:(BOOL)arg2 menu:(BOOL)arg3;
- (void)_toggle:(BOOL)arg1 menu:(BOOL)arg2;
- (void)_toggle;
- (void)_showWindow:(BOOL)arg1 menu:(BOOL)arg2;
- (void)_spaceChanged:(id)arg1;
- (void)_hideMenuAndActivateApplicationOwnsMenuBar:(BOOL)arg1 whyDisappear:(long long)arg2;
- (void)_showMenu:(BOOL)arg1;
- (void)_showMenuFail;
- (void)_showMenuNow:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (id)screen;
- (BOOL)isHighlighted;
- (BOOL)isWindowShowing;

@end

