//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSURLSession;

__attribute__((visibility("hidden")))
@interface AMSURLDelegateProxy : NSObject
{
    AMSURLSession *_session;
    id _delegate;
}

- (void).cxx_destruct;
@property __weak id delegate; // @synthesize delegate=_delegate;
@property(readonly) __weak AMSURLSession *session; // @synthesize session=_session;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)invalidate;
- (id)initWithSession:(id)arg1 delegate:(id)arg2;

@end

