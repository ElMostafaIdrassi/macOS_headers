//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WFResponseParsingRules : NSObject
{
    id <WFSettings> _settings;
}

+ (BOOL)aqiEnabledByRules:(id)arg1 forLocation:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <WFSettings> settings; // @synthesize settings=_settings;
- (BOOL)aqiEnabledForCountryCode:(id)arg1;
- (id)initWithSettings:(id)arg1;

@end

