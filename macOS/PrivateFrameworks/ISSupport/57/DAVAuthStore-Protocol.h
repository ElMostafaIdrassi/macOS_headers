//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class ISS_DAVChallenge, ISS_DAVSession, NSURL;

@protocol DAVAuthStore
- (void)clearAuthChallengeForSession:(ISS_DAVSession *)arg1;
- (void)session:(ISS_DAVSession *)arg1 storeAuthChallenge:(ISS_DAVChallenge *)arg2 forURL:(NSURL *)arg3;
- (BOOL)session:(ISS_DAVSession *)arg1 addAuthHeaderToMessage:(struct __CFHTTPMessage *)arg2;
- (BOOL)hasCredentialsForSession:(ISS_DAVSession *)arg1;
@end

