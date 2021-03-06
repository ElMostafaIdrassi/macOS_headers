//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSDictionary, SFPeerDevice;

@interface SFActivityAdvertisement : NSObject <NSSecureCoding>
{
    long long _advertisementVersion;
    NSData *_advertisementPayload;
    NSDictionary *_options;
    SFPeerDevice *_device;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, retain) SFPeerDevice *device; // @synthesize device=_device;
@property(readonly, copy) NSDictionary *options; // @synthesize options=_options;
@property(readonly, copy) NSData *advertisementPayload; // @synthesize advertisementPayload=_advertisementPayload;
@property(readonly) long long advertisementVersion; // @synthesize advertisementVersion=_advertisementVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithAdvertisementVersion:(unsigned long long)arg1 advertisementPayload:(id)arg2 options:(id)arg3 device:(id)arg4;

@end

