//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface SafeEjectGPUSession : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct __GPUWranglerGPU *_gpu;
    unsigned long long _gpuid;
    unsigned long long _registryID;
    NSString *_name;
    NSString *_enclosureName;
    NSString *_location;
    unsigned long long _enclosureRegistryID;
    unsigned long long _locationNumber;
    unsigned long long _maxTransferRate;
    _Bool _removable;
    _Bool _discrete;
    _Bool _integrated;
    NSMutableArray *_limboArray;
    NSObject<OS_dispatch_queue> *_limboQueue;
    _Bool _inLimbo;
    _Bool _exportDictionary;
}

+ (_Bool)relaunchPID:(int)arg1;
+ (_Bool)launchOnGPU:(id)arg1 gpuids:(id)arg2;
+ (_Bool)relaunchPIDOnGPU:(int)arg1 gpuids:(id)arg2;
- (float)getPercentUtilization;
- (id)appsByPID;
- (id)apps;
- (unsigned long long)cancel;
- (unsigned long long)finalize;
- (unsigned long long)relaunch;
- (unsigned long long)_relaunch;
- (void)drainLimbo;
- (unsigned long long)status;
- (unsigned long long)initiate;
- (unsigned long long)_initiate;
- (unsigned long long)_status;
- (id)dictionary;
- (id)prettifiedDeviceName:(id)arg1;
- (void)dealloc;
- (void)getEnclosureInfo;
- (id)initWithGPU:(struct __GPUWranglerGPU *)arg1 andQueue:(id)arg2;

@end

