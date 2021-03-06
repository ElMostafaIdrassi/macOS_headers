//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSError, NSNumber, NSString;

@interface ASDJob : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_bundleID;
    NSNumber *_externalOrderKey;
    NSError *_failureError;
    NSNumber *_orderKey;
    double _percentComplete;
    long long _persistentID;
    long long _phase;
    long long _purchaseID;
    long long _storeItemID;
    long long _type;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long storeItemID; // @synthesize storeItemID=_storeItemID;
@property(readonly, nonatomic) long long purchaseID; // @synthesize purchaseID=_purchaseID;
@property(readonly, nonatomic) long long phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
@property(readonly, nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
@property(readonly, nonatomic) NSNumber *orderKey; // @synthesize orderKey=_orderKey;
@property(readonly, nonatomic) NSError *failureError; // @synthesize failureError=_failureError;
@property(readonly, nonatomic) NSNumber *externalOrderKey; // @synthesize externalOrderKey=_externalOrderKey;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

