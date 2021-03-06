//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRKIdentity.h"

@class NSString;

@interface CRKConcreteIdentity : NSObject <CRKIdentity>
{
    struct __SecIdentity *_underlyingIdentity;
}

+ (id)identityWithCertificate:(id)arg1 privateKey:(id)arg2;
+ (id)identityWithConfiguration:(id)arg1;
@property(readonly, nonatomic) struct __SecIdentity *underlyingIdentity; // @synthesize underlyingIdentity=_underlyingIdentity;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <CRKPrivateKey> privateKey;
@property(readonly, nonatomic) id <CRKCertificate> certificate;
- (id)initWithIdentity:(struct __SecIdentity *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

