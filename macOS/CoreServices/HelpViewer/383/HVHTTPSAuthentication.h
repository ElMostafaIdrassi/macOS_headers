//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLCredential;

@interface HVHTTPSAuthentication : NSObject
{
    NSURLCredential *_credential;
    BOOL _authCanceled;
    BOOL _triedAuthWithoutCreds;
}

+ (id)sharedAuthentication;
- (void).cxx_destruct;
@property BOOL triedAuthWithoutCreds; // @synthesize triedAuthWithoutCreds=_triedAuthWithoutCreds;
@property BOOL authCanceled; // @synthesize authCanceled=_authCanceled;
@property __weak NSURLCredential *credential; // @synthesize credential=_credential;
- (id)init;

@end

