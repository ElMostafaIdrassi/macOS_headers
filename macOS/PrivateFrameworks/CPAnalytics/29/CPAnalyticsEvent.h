//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPAnalyticsSystemProperties, NSDate, NSDictionary, NSString;

@interface CPAnalyticsEvent : NSObject
{
    NSString *_name;
    NSDate *_timestamp;
    NSDictionary *_payload;
    CPAnalyticsSystemProperties *_systemProperties;
}

@property(readonly, nonatomic) CPAnalyticsSystemProperties *systemProperties; // @synthesize systemProperties=_systemProperties;
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyRawPayload;
- (struct NSObject *)propertyForKey:(id)arg1;
- (id)initWithName:(id)arg1 payload:(id)arg2 systemProperties:(id)arg3;

@end

