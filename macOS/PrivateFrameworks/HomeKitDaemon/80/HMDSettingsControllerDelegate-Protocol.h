//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class HMDSettingOnChangeAttachedUpdatesResult, HMSettingValue, NSString;

@protocol HMDSettingsControllerDelegate
- (HMDSettingOnChangeAttachedUpdatesResult *)settingsController:(id <HMDSettingsControllerProtocol>)arg1 willUpdateSettingAtKeyPath:(NSString *)arg2 withValue:(HMSettingValue *)arg3;
- (void)settingsController:(id <HMDSettingsControllerProtocol>)arg1 didUpdateWithCompletion:(void (^)(NSError *))arg2;
@end

