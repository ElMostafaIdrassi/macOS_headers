//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EKDecisionDelegate-Protocol.h"

@class NSString;

@interface CalUIDecisionManager : NSObject <EKDecisionDelegate>
{
}

+ (CDStruct_b2f7276a)commitDecisionInfoForEvents:(id)arg1 span:(long long)arg2;
+ (BOOL)_shouldRequestForSpanWithDiffSummary:(id)arg1 recurringEventCount:(long long)arg2 significantlyDetachedRecurringEventCount:(long long)arg3;
+ (BOOL)_allowSlicingEvent:(id)arg1 diffSummary:(id)arg2;
+ (CDStruct_bc94e8e1)spanDecisionInfoForEvents:(id)arg1 diffSummary:(id)arg2;
+ (CDStruct_bc94e8e1)spanDecisionInfoForEvents:(id)arg1;
- (unsigned long long)commitDecisionForDeletingCalendars:(id)arg1;
- (BOOL)shouldSaveForDeletingSources:(id)arg1;
- (unsigned long long)commitDecisionForCalendars:(id)arg1 forEditingAction:(unsigned long long)arg2;
- (unsigned long long)commitDecisionForDeletingEvents:(id)arg1 span:(long long)arg2;
- (unsigned long long)spanDecisionForDeletingEvents:(id)arg1;
- (BOOL)shouldSaveForDeletingEvents:(id)arg1;
- (unsigned long long)commitDecisionForGenericSaveOnEvent:(id)arg1 userImpliedDecision:(BOOL)arg2 withSpanDecision:(unsigned long long)arg3;
- (void)_bringUpMailComposeWindowWithProposalStart:(id)arg1 withAttendee:(id)arg2 withEvent:(id)arg3;
- (unsigned long long)spanDecisionForGenericSaveOnEvents:(id)arg1 diffSummary:(id)arg2;
- (BOOL)_shouldReturnSpanAllWithoutRequesting:(id)arg1;
- (BOOL)shouldSaveForGenericSaveOnEvents:(id)arg1 diffSummary:(id)arg2;
- (unsigned long long)commitDecisionForDecliningEvents:(id)arg1;
- (unsigned long long)spanDecisionForInvitationResponsesToEvents:(id)arg1 diffSummary:(id)arg2;
- (unsigned long long)spanDecisionForCalendarChangeOnEvents:(id)arg1 diffSummary:(id)arg2;
- (BOOL)shouldSaveForCalendarChangeOnEvents:(id)arg1 diffSummary:(id)arg2;
- (BOOL)_isNonDistinguishedExchangeCalendar:(id)arg1;
- (unsigned long long)spanDecisionForTimeRelatedChangeOnEvents:(id)arg1 diffSummary:(id)arg2;
- (BOOL)shouldSaveForTimeRelatedChangeOnEvents:(id)arg1 diffSummary:(id)arg2;
- (BOOL)shouldReportJunk;
- (BOOL)_diffSummaryContainsTimeRelatedChange:(id)arg1;
- (id)addUILevelDiffCategoriesToDiffSummary:(id)arg1 forEvents:(id)arg2;
- (unsigned long long)commitDecisionForItems:(id)arg1 forEditingAction:(unsigned long long)arg2 userImpliedDecision:(BOOL)arg3 withSpanDecision:(unsigned long long)arg4;
- (unsigned long long)spanDecisionForEvents:(id)arg1 forEditingAction:(unsigned long long)arg2 diffSummary:(id)arg3;
- (BOOL)shouldSaveForItems:(id)arg1 forEditingAction:(unsigned long long)arg2 diffSummary:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

