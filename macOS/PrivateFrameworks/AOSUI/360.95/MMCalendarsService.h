//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AOSUI/MMService.h>

#import <AOSUI/MMServicePreflightProtocol-Protocol.h>

@class NSString;

@interface MMCalendarsService : MMService <MMServicePreflightProtocol>
{
}

- (BOOL)preflightForSignout:(id *)arg1 withWindow:(id)arg2;
- (long long)_showDisableConfirmationSheet:(id)arg1 willSignOut:(BOOL)arg2;
- (BOOL)_calendarHasLocalCalendars;
- (BOOL)hasDataToMerge;
- (void)setEnabled:(BOOL)arg1 creating:(BOOL)arg2 withWindow:(id)arg3;
- (id)icon;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

