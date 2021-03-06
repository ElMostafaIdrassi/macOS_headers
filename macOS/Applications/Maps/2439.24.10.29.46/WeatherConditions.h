//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WFTemperatureFormatter, WFWeatherConditions;

__attribute__((visibility("hidden")))
@interface WeatherConditions : NSObject
{
    WFWeatherConditions *_weatherConditions;
    WFTemperatureFormatter *_formatter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFTemperatureFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) WFWeatherConditions *weatherConditions; // @synthesize weatherConditions=_weatherConditions;
@property(readonly, nonatomic) NSString *conditionImageName;
@property(readonly, nonatomic) NSString *temperature;
@property(readonly, nonatomic) NSString *locationDisplayName;
- (id)location;
- (id)expirationDate;
- (long long)legacyConditionCode;
- (unsigned long long)conditionCode;
- (id)condition;
- (id)description;
- (id)initWithWeatherConditions:(id)arg1 temperatureUnit:(int)arg2;

@end

