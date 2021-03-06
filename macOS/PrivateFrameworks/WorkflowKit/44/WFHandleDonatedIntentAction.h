//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFHandleIntentAction.h>

@class INIntent, NSString;

@interface WFHandleDonatedIntentAction : WFHandleIntentAction
{
    BOOL _forceExecutionOnPhone;
    INIntent *_intent;
    NSString *_groupIdentifier;
    NSString *_title;
    NSString *_subtitle;
}

+ (id)intentActionWithShortcut:(id)arg1 forceExecutionOnPhone:(BOOL)arg2 groupIdentifier:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, nonatomic) BOOL forceExecutionOnPhone; // @synthesize forceExecutionOnPhone=_forceExecutionOnPhone;
@property(retain, nonatomic) INIntent *intent; // @synthesize intent=_intent;
- (id)generatedIntentWithInput:(id)arg1 error:(id *)arg2;
- (id)slots;
- (id)intentDescription;
- (id)localizedDescriptionSummary;
- (id)appIdentifier;
- (long long)intentCategory;
- (id)localizedKeyParameterDisplayName;
- (id)localizedSubtitle;
- (id)localizedName;
- (id)name;
- (id)requiredResources;
- (void)initializeParameters;
- (id)serializedParameters;
- (id)executorWithIntent:(id)arg1 groupIdentifier:(id)arg2;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (void)continueInAppWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithInteraction:(id)arg1 forceExecutionOnPhone:(BOOL)arg2;
- (id)initWithIntent:(id)arg1 forceExecutionOnPhone:(BOOL)arg2;
- (id)initWithIntent:(id)arg1;

@end

