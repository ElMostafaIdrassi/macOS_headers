//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface PLCoreAnalyticsEvent : NSObject
{
    NSString *_event;
    NSMutableDictionary *_mutablePayload;
}

- (void).cxx_destruct;
- (void)publish;
- (void)removeKey:(id)arg1;
- (void)mergePayload:(id)arg1;
- (void)addKey:(id)arg1 value:(id)arg2;
@property(readonly) NSDictionary *payload;
- (id)description;
- (id)initWithEvent:(id)arg1 payload:(id)arg2;

@end

