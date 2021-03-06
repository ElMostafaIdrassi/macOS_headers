//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class DBTEAMLOGDeviceLogInfo, NSString;

@interface DBTEAMLOGDeviceChangeIpWebDetails : NSObject <DBSerializable, NSCopying>
{
    DBTEAMLOGDeviceLogInfo *_deviceInfo;
    NSString *_userAgent;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(readonly, nonatomic) DBTEAMLOGDeviceLogInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
- (void).cxx_destruct;
- (BOOL)isEqualToDeviceChangeIpWebDetails:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithUserAgent:(id)arg1;
- (id)initWithUserAgent:(id)arg1 deviceInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

