//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolPageSearchResult : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSString *requestId;
@property(nonatomic) double matchesCount;
@property(copy, nonatomic) NSString *frameId;
@property(copy, nonatomic) NSString *url;
- (id)initWithUrl:(id)arg1 frameId:(id)arg2 matchesCount:(double)arg3;

@end

