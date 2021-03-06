//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKTaskConfiguration.h>

@class HKWorkoutConfiguration, NSUUID;

@interface HKWorkoutSessionTaskConfiguration : HKTaskConfiguration
{
    BOOL _requiresCoreLocationAssertion;
    BOOL _requiresRecovery;
    BOOL _supportsAppRelaunchForRecovery;
    HKWorkoutConfiguration *_workoutConfiguration;
    NSUUID *_sessionUUID;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL supportsAppRelaunchForRecovery; // @synthesize supportsAppRelaunchForRecovery=_supportsAppRelaunchForRecovery;
@property(nonatomic) BOOL requiresRecovery; // @synthesize requiresRecovery=_requiresRecovery;
@property(nonatomic) BOOL requiresCoreLocationAssertion; // @synthesize requiresCoreLocationAssertion=_requiresCoreLocationAssertion;
@property(copy, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration; // @synthesize workoutConfiguration=_workoutConfiguration;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

