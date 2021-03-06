//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSWorkspace;
@protocol WMAppWatcherDelegate;

@interface WMAppWatcher : NSObject
{
    BOOL _enabled;
    int _currentAppPid;
    id <WMAppWatcherDelegate> _delegate;
    NSWorkspace *_workspace;
    NSMutableSet *_watchedApps;
}

@property int currentAppPid; // @synthesize currentAppPid=_currentAppPid;
@property(retain) NSMutableSet *watchedApps; // @synthesize watchedApps=_watchedApps;
@property(retain) NSWorkspace *workspace; // @synthesize workspace=_workspace;
@property __weak id <WMAppWatcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)applicationDidSwitch;
- (void)stopWatchingAllApps;
- (void)stopWatching:(id)arg1;
- (void)startWatching:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

