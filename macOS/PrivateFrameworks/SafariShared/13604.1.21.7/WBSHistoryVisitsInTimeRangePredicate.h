//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSHistoryVisitPredicate-Protocol.h>

@class NSData, NSString;

@interface WBSHistoryVisitsInTimeRangePredicate : NSObject <WBSHistoryVisitPredicate>
{
    double _startTime;
    double _endTime;
    NSString *_urlString;
    NSData *_urlHash;
    NSData *_urlSalt;
}

+ (BOOL)supportsSecureCoding;
+ (id)new;
- (void).cxx_destruct;
- (BOOL)evaluateServiceVisit:(id)arg1;
- (BOOL)evaluateVisit:(id)arg1;
- (id)statementForDatabase:(id)arg1 cache:(id)arg2 fetchOptions:(unsigned long long)arg3 error:(id *)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 urlString:(id)arg3 urlHash:(id)arg4 urlSalt:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

