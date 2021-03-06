//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFRequestInfo, AFSiriActivationContext, AFSiriActivationListener, INIntent, NSString;

@protocol AFSiriActivationListenerDelegate <NSObject>

@optional
- (void)siriActivationListener:(AFSiriActivationListener *)arg1 deactivateForReason:(long long)arg2 options:(unsigned long long)arg3 context:(AFSiriActivationContext *)arg4 completion:(void (^)(NSError *))arg5;
- (void)siriActivationListener:(AFSiriActivationListener *)arg1 activateWithRequestInfo:(AFRequestInfo *)arg2 context:(AFSiriActivationContext *)arg3 completion:(void (^)(NSError *))arg4;
- (void)siriActivationListener:(AFSiriActivationListener *)arg1 prewarmWithRequestInfo:(AFRequestInfo *)arg2 context:(AFSiriActivationContext *)arg3 completion:(void (^)(NSError *))arg4;
- (void)siriActivationListener:(AFSiriActivationListener *)arg1 handleIntent:(INIntent *)arg2 inBackgroundAppWithBundleId:(NSString *)arg3 reply:(void (^)(INIntentResponse *, NSError *))arg4;
@end

