//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface SFCredentialProviderExtensionState : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _enabled;
    BOOL _supportsIncrementalUpdates;
    NSString *_localizedDisplayName;
    NSString *_containingAppBundleIdentifier;
}

+ (id)credentialProviderExtensionWithDisabledState;
+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *containingAppBundleIdentifier; // @synthesize containingAppBundleIdentifier=_containingAppBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
@property(readonly, nonatomic) BOOL supportsIncrementalUpdates; // @synthesize supportsIncrementalUpdates=_supportsIncrementalUpdates;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabledState:(BOOL)arg1 supportsIncrementalUpdates:(BOOL)arg2 localizedDisplayName:(id)arg3 containingAppBundleIdentifier:(id)arg4;
- (id)initWithEnabledState:(BOOL)arg1 supportsIncrementalUpdates:(BOOL)arg2;

@end

