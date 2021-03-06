//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSVB_ViewServiceUIBehaviorInterface.h"

@class NSAppearance, NSBitmapImageRep, NSData, NSDictionary, NSNumber, NSObject<NSSecureCoding>, NSString;

@protocol NSViewServiceMarshal <NSVB_ViewServiceUIBehaviorInterface>
- (void)remoteViewDidChangeState:(unsigned char)arg1 ofPopoverBar:(NSString *)arg2 forItem:(NSString *)arg3;
- (void)remoteViewCaresAboutTouchBars:(BOOL)arg1;
- (void)automaticFocusRingChangedInHostApp;
- (void)remoteViewBackingScaleFactorDidChange:(double)arg1;
- (void)refreshAccessoryViewBitmap:(NSBitmapImageRep *)arg1;
- (void)invokeBlockOnCurrentFenceIfAny:(void (^)(void))arg1;
- (void)remoteViewIsContentView:(BOOL)arg1;
- (void)allowAppNap:(BOOL)arg1;
- (void)serviceViewControllerProxy:(void (^)(NSProxy<NSXPCProxyCreating> *, NSProxy<NSXPCProxyCreating> *))arg1;
- (void)accessibilityTokenForFocusedUIElement:(void (^)(NSData *))arg1;
- (void)hostWindowReceivedEventType:(unsigned long long)arg1;
- (void)setRemoteAccessoryViewCanBecomeKeyView:(BOOL)arg1;
- (void)setAccessoryViewSize:(struct CGSize)arg1 alignmentRectInsets:(struct NSEdgeInsets)arg2;
- (void)forgetAccessoryView;
- (void)didBecomeAssociatedWithHostWindow:(unsigned int)arg1 withKeyness:(BOOL)arg2 isFirstResponder:(BOOL)arg3 inActiveApp:(BOOL)arg4;
- (void)willBecomeAssociatedWithHostWindow:(unsigned int)arg1 atLevel:(long long)arg2 isFunctionRow:(BOOL)arg3;
- (void)advanceToRunPhase:(void (^)(BOOL))arg1;
- (void)remoteViewContainingWindowOcclusionStateDidChange:(unsigned long long)arg1;
- (void)hostWindowLevelDidChange:(long long)arg1;
- (void)hostWindowResignedKeyFocus:(BOOL)arg1 inActiveApp:(BOOL)arg2 isContentView:(BOOL)arg3;
- (void)hostWindowBecameKeyInActiveApp:(BOOL)arg1 firstResponderState:(unsigned char)arg2 isContentView:(BOOL)arg3;
- (void)remoteViewDidEndLiveResize;
- (void)remoteViewWillStartLiveResizeWithReply:(void (^)(void))arg1;
- (void)remoteViewResignedFirstResponderInActiveApp:(BOOL)arg1 inFavorOf:(unsigned char)arg2;
- (void)remoteViewBecameFirstResponder:(unsigned long long)arg1 forWindowWithKey:(BOOL)arg2 inActiveApp:(BOOL)arg3 inVisibleWindow:(BOOL)arg4 reply:(void (^)(unsigned char))arg5;
- (void)obtainFirstResponderState:(void (^)(unsigned char))arg1;
- (void)remoteViewGeometryDidChange:(struct CGRect)arg1 transaction:(NSString *)arg2 withReply:(void (^)(struct CGSize, double))arg3;
- (void)setServiceObject:(NSObject<NSSecureCoding> *)arg1 forKey:(NSString *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)cancelActionHitRemoteView:(void (^)(BOOL))arg1;
- (void)updateAccessoryViewAccessibility:(NSDictionary *)arg1 enhancedUserInterface:(NSNumber *)arg2 withReply:(void (^)(NSData *))arg3;
- (void)exchangeAccessibilityTokens:(NSData *)arg1 enhancedUserInterface:(NSNumber *)arg2 withReply:(void (^)(NSDictionary *))arg3;
- (void)performAction:(NSString *)arg1 forTarget:(NSString *)arg2;
- (void)validateAction:(NSString *)arg1 withReply:(void (^)(BOOL, NSString *, struct, struct, NSString *))arg2;
- (void)endHostModalSession:(NSString *)arg1;
- (void)beginHostAppModalSession:(NSString *)arg1 parameters:(const CDStruct_9fbe0e86 *)arg2 title:(NSString *)arg3 style:(unsigned long long)arg4 size:(struct CGSize)arg5 withReply:(void (^)(NSError *))arg6;
- (void)setRemoteViewEffectiveAppearance:(NSAppearance *)arg1;
- (void)setViewVibrantBlendingStyle:(unsigned long long)arg1;
- (void)bootstrap:(CDStruct_4172db96)arg1 withReply:(void (^)(NSString *, struct, NSProxy<NSXPCProxyCreating> *, NSProxy<NSXPCProxyCreating> *))arg2;
- (void)snapshot:(void (^)(NSError *, NSBitmapImageRep *))arg1;
- (void)endPrivateEventLoop;
@end

