//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLAuthenticationChallenge;

__attribute__((visibility("hidden")))
@interface AuthenticationChallengeInformation : NSObject
{
    NSURLAuthenticationChallenge *_challenge;
    CDUnknownBlockType _completionHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSURLAuthenticationChallenge *challenge; // @synthesize challenge=_challenge;
- (void).cxx_destruct;
- (id)initWithAuthenticationChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

