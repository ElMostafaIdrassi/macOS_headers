//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

@interface SABaseCommand (INSExtensionService)
- (id)ins_afAnalyticsContext;
- (void)ins_invokeErrorCompletionHandler:(CDUnknownBlockType)arg1 forUnderlyingError:(id)arg2;
- (void)ins_invokeErrorCompletionHandler:(CDUnknownBlockType)arg1 withErrorCode:(long long)arg2 underlyingError:(id)arg3;
- (long long)ins_analyticsEndEventType;
- (long long)ins_analyticsBeginEventType;
- (void)ins_sendIntent:(id)arg1 toExtensionProxy:(id)arg2 onQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)ins_aceIntentResponse;
- (id)ins_protobufEncodedIntentResponse;
- (id)ins_jsonEncodedIntentResponse;
- (id)ins_aceIntent;
- (id)ins_protobufEncodedIntent;
- (id)ins_jsonEncodedIntent;
- (BOOL)ins_isJSONPayload;
@end

