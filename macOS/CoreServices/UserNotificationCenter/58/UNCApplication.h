//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSApplication.h>

#import "NSAlertDelegate-Protocol.h"
#import "UNCUserNotificationAlertEventDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface UNCApplication : NSApplication <UNCUserNotificationAlertEventDelegate, NSAlertDelegate>
{
    NSMutableDictionary *_alerts;
    NSMutableDictionary *_replyPorts;
    struct CGPoint _cascadePoint;
}

- (void).cxx_destruct;
- (void)reply:(id)arg1;
- (void)alertDidTimeout:(id)arg1;
- (void)alert:(id)arg1 alternateAction:(id)arg2;
- (void)alert:(id)arg1 otherAction:(id)arg2;
- (void)alert:(id)arg1 defaultAction:(id)arg2;
- (BOOL)alertShowHelp:(id)arg1;
- (void)createNotificationWithReplyPort:(unsigned int)arg1 userID:(unsigned int)arg2 message:(CDStruct_a54b61c1 *)arg3;
- (void)showAlert:(id)arg1;
- (void)updateNotificationWithUserID:(unsigned int)arg1 message:(CDStruct_a54b61c1 *)arg2;
- (void)updateAlert:(long long)arg1 configuration:(id)arg2;
- (void)cancelNotificationWithUserID:(unsigned int)arg1 message:(CDStruct_a54b61c1 *)arg2;
- (id)createConfigurationWithUserID:(unsigned int)arg1 message:(CDStruct_a54b61c1 *)arg2;
- (void)dismissAlert:(long long)arg1 exitValue:(long long)arg2;
- (void)sessionDidResignActive:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

