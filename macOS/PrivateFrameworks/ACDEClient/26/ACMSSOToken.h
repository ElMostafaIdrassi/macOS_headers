//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ACDEClient/ACMToken.h>

#import <ACDEClient/ACFSSOTokenProtocol-Protocol.h>

@class ACFPrincipal, NSDate, NSDictionary, NSNumber, NSString;
@protocol ACFTicketRequestProtocol;

@interface ACMSSOToken : ACMToken <ACFSSOTokenProtocol>
{
    id <ACFTicketRequestProtocol> _initialRequest;
    NSString *_indicator;
    NSString *_sessionToken;
    NSDate *_recentAuthenticationDate;
    NSNumber *_personID;
    NSDate *_recentUnlockDate;
    NSString *_clientSecret;
    NSNumber *_clientSecretCreationTimestamp;
}

+ (id)tokenWithToken:(id)arg1 data:(id)arg2;
+ (id)tokenWithKeychainTokenInfo:(id)arg1;
@property(retain, nonatomic) NSNumber *clientSecretCreationTimestamp; // @synthesize clientSecretCreationTimestamp=_clientSecretCreationTimestamp;
@property(retain, nonatomic) NSString *clientSecret; // @synthesize clientSecret=_clientSecret;
@property(retain, nonatomic) NSDate *recentUnlockDate; // @synthesize recentUnlockDate=_recentUnlockDate;
@property(retain, nonatomic) NSNumber *personID; // @synthesize personID=_personID;
@property(retain, nonatomic) NSDate *recentAuthenticationDate; // @synthesize recentAuthenticationDate=_recentAuthenticationDate;
@property(retain, nonatomic) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(retain, nonatomic) NSString *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) id <ACFTicketRequestProtocol> initialRequest; // @synthesize initialRequest=_initialRequest;
@property(readonly) NSDictionary *tokenDictionary;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSDate *creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSDate *expirationDate;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSNumber *isTwoStepVerificationRequired;
@property(retain, nonatomic) NSNumber *isUserEnrolledFor2SV;
@property(retain, nonatomic) NSString *nonce;
@property(retain, nonatomic) ACFPrincipal *principal;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *userPreferences;

@end

