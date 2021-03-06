//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TKTokenConfiguration, TKTokenDriver, TKTokenID, TKTokenKeychainContents;

@interface TKToken : NSObject
{
    TKTokenConfiguration *_configuration;
    TKTokenDriver *_tokenDriver;
    id <TKTokenDelegate> _delegate;
    TKTokenKeychainContents *_keychainContents;
    TKTokenID *_tokenID;
}

- (void).cxx_destruct;
@property(readonly) TKTokenID *tokenID; // @synthesize tokenID=_tokenID;
@property(retain) TKTokenKeychainContents *keychainContents; // @synthesize keychainContents=_keychainContents;
@property __weak id <TKTokenDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) TKTokenDriver *tokenDriver; // @synthesize tokenDriver=_tokenDriver;
- (void)terminate;
@property(readonly) TKTokenConfiguration *configuration;
- (id)initWithTokenDriver:(id)arg1 instanceID:(id)arg2;
- (id)description;

@end

