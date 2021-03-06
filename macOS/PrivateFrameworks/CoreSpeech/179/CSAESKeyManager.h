//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSAESKeyManager : NSObject
{
}

+ (id)getKeychainAttributesForAESKeyWithApplicationTag:(id)arg1 keyLabel:(id)arg2;
+ (BOOL)deleteAESKeyWithApplicationTag:(id)arg1 keyLabel:(id)arg2;
+ (id)getAESKeyFromKeychainWithApplicationTag:(id)arg1 keyLabel:(id)arg2;
+ (BOOL)storeAESKeyInKeychain:(id)arg1 applicationTag:(id)arg2 keyLabel:(id)arg3;
+ (id)generateAESKeyWithKeySizeInBits:(unsigned long long)arg1;
+ (id)generateIfNecessaryAESKeyWithKeySizeInBits:(unsigned long long)arg1 applicationTag:(id)arg2 keyLabel:(id)arg3 shouldGenerateIfNecessary:(BOOL)arg4;
+ (id)generateIfNecessaryVoiceTriggerProfilesAESKey;
+ (id)getVoiceTriggerProfilesAESKey;

@end

