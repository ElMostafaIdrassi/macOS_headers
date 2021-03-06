//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface OSLogPosition : NSObject
{
    long long _precision;
    NSDate *_date;
    double _offset;
}

@property(readonly, nonatomic) double offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) long long precision; // @synthesize precision=_precision;
- (void).cxx_destruct;
- (id)initWithTimeIntervalSinceLatestBoot:(double)arg1;
- (id)initWithEventSource:(id)arg1 timeIntervalSinceEnd:(double)arg2;
- (id)initWithDate:(id)arg1;

@end

