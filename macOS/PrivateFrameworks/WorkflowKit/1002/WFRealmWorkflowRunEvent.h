//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WorkflowKit/RLMObject.h>

#import <WorkflowKit/WFRecordStorage-Protocol.h>

@class NSDate, NSString, WFRealmWorkflow;

@interface WFRealmWorkflowRunEvent : RLMObject <WFRecordStorage>
{
    NSString *_identifier;
    WFRealmWorkflow *_workflow;
    NSDate *_date;
    NSString *_source;
    NSString *_triggerID;
    long long _outcome;
}

+ (id)requiredProperties;
+ (id)defaultPropertyValues;
+ (id)primaryKey;
+ (id)className;
@property long long outcome; // @synthesize outcome=_outcome;
@property(copy) NSString *triggerID; // @synthesize triggerID=_triggerID;
@property NSString *source; // @synthesize source=_source;
@property(retain) NSDate *date; // @synthesize date=_date;
@property(retain) WFRealmWorkflow *workflow; // @synthesize workflow=_workflow;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)descriptor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

