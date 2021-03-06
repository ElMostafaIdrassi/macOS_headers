//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CSUIMessageHandler.h"

#import "NSAlertDelegate-Protocol.h"

@class NSDictionary, NSString;

@interface LSLaunchErrorHandler : CSUIMessageHandler <NSAlertDelegate>
{
    NSDictionary *_errorDict;
    NSString *_helpAnchor;
}

+ (id)automatorApplicationURL;
+ (id)appStoreApplicationURL;
- (void).cxx_destruct;
- (BOOL)alertShowHelp:(id)arg1;
- (void)handleMessageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithMessageType:(int)arg1 connection:(id)arg2 object:(id)arg3;
- (void)logLaunchFailureWithStatus:(int)arg1 applicationName:(id)arg2 applicationBundle:(id)arg3;
- (void)getAlertMessage:(id *)arg1 info:(id *)arg2 icon:(id *)arg3 helpAnchor:(id *)arg4 buttons:(id *)arg5 buttonHandlers:(id *)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

