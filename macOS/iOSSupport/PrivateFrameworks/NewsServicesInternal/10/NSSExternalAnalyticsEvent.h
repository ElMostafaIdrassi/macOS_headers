//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsServicesInternal/NSSExternalAnalyticsEvent-Protocol.h>

@class NSDictionary, NTPBSession;

@interface NSSExternalAnalyticsEvent : NSObject <NSSExternalAnalyticsEvent>
{
    NSDictionary *_requestQueryParameters;
    NTPBSession *_session;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NTPBSession *session; // @synthesize session=_session;
@property(readonly, copy, nonatomic) NSDictionary *requestQueryParameters; // @synthesize requestQueryParameters=_requestQueryParameters;
- (id)requestMetadataWithExternalAnalyticsIdentifier:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSession:(id)arg1 requestQueryParameters:(id)arg2;
- (id)init;

@end

