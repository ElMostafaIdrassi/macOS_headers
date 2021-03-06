//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, iTermProfileHotKey;

@interface iTermPreviousState : NSObject
{
    BOOL _itermWasActiveWhenHotkeyOpened;
    NSNumber *_previouslyActiveAppPID;
    iTermProfileHotKey *_owner;
}

@property(retain, nonatomic) iTermProfileHotKey *owner; // @synthesize owner=_owner;
@property(nonatomic) BOOL itermWasActiveWhenHotkeyOpened; // @synthesize itermWasActiveWhenHotkeyOpened=_itermWasActiveWhenHotkeyOpened;
@property(copy, nonatomic) NSNumber *previouslyActiveAppPID; // @synthesize previouslyActiveAppPID=_previouslyActiveAppPID;
- (long long)indexOfFrontNonHotKeyTerminal;
- (void)suppressHideApp;
- (BOOL)restoreAllowingAppSwitch:(BOOL)arg1;
- (BOOL)restorePreviouslyActiveApp;
- (id)description;
- (void)dealloc;
- (id)initWithRunningApp:(id)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 processID:(int)arg2;

@end

