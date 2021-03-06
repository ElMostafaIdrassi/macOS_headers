//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AFAnalyticsTurnBasedInstrumentationContext, SAUIAssistantUtteranceView;
@protocol OS_dispatch_queue;

@interface SiriInstrumentationManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    int _lastSiriUIStateSnapShot;
    AFAnalyticsTurnBasedInstrumentationContext *_currentInstrumentationTurnContext;
    long long _eventSourceSnapShot;
    SAUIAssistantUtteranceView *_assistantUtteranceViewSnapShot;
}

+ (id)sharedManager;
@property int lastSiriUIStateSnapShot; // @synthesize lastSiriUIStateSnapShot=_lastSiriUIStateSnapShot;
@property(retain) SAUIAssistantUtteranceView *assistantUtteranceViewSnapShot; // @synthesize assistantUtteranceViewSnapShot=_assistantUtteranceViewSnapShot;
@property long long eventSourceSnapShot; // @synthesize eventSourceSnapShot=_eventSourceSnapShot;
@property(retain) AFAnalyticsTurnBasedInstrumentationContext *currentInstrumentationTurnContext; // @synthesize currentInstrumentationTurnContext=_currentInstrumentationTurnContext;
- (void).cxx_destruct;
- (void)emitTextToSpeechEndEvent;
- (void)emitTextToSpeechBeginEvent;
- (void)emitPunchOutEventWithURL:(id)arg1 appID:(id)arg2 previousTurnIdentifier:(struct NSUUID *)arg3;
- (void)emitPunchOutInvocationWithSiriViewController:(id)arg1;
- (void)emitUUFRPresentedEventWith:(id)arg1 dialogPhase:(id)arg2;
- (void)emitFinalSpeechTranscriptionEventWith:(id)arg1;
- (void)emitPartialSpeechTranscriptionEventWith:(id)arg1;
- (void)emitUIStateTransitionFromLastStateToDismissedState;
- (void)emitUIStateTransitionEventWithFromState:(int)arg1 toState:(int)arg2;
- (int)_determineInvocationActionFromRequestOptions:(id)arg1;
- (int)_determineInvocationSourceFromRequestOptions:(id)arg1;
- (void)emitInvocationEventUsingRequestOptions:(id)arg1 connection:(id)arg2;
- (void)snapshotCurrentAssistantUtteranceView:(id)arg1;
- (void)snapshotSiriEventSource:(long long)arg1;
- (id)_startNewTurnWithLastTurn:(id)arg1;
- (void)_emitInstrumentation:(id)arg1;
- (id)_init;

@end

