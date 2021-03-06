//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"

@class HMDDevice, NSString, NSUUID;

@interface HMDDeviceController : HMFObject <HMFLogging>
{
    id <HMFLocking> _lock;
    NSUUID *_identifier;
    HMDDevice *_device;
    id <HMDDeviceControllerDelegate> _delegate;
}

+ (id)logCategory;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
@property __weak id <HMDDeviceControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)logIdentifier;
@property(readonly) HMDDevice *device;
- (id)attributeDescriptions;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;
- (void)updateWithDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

