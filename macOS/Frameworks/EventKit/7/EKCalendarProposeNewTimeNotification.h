//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKCalendarNotification.h>

@class NSDate;

@interface EKCalendarProposeNewTimeNotification : EKCalendarNotification
{
}

- (unsigned long long)supportedActions;
- (BOOL)proposedEndDateIsInFuture;
- (BOOL)isProposedNewTime;
@property(readonly, nonatomic) NSDate *proposedEndDate;
@property(readonly, nonatomic) NSDate *proposedStartDate;
- (id)proposingAttendee;
- (id)initWithRelatedEvent:(id)arg1;

@end

