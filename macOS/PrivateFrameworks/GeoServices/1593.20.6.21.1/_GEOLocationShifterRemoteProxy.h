//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEOLocationShifterProxy-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOLocationShifterRemoteProxy : NSObject <_GEOLocationShifterProxy>
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)flushDiskCache;
- (unsigned int)locationShiftFunctionVersion;
- (BOOL)isLocationShiftRequiredForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (BOOL)isLocationShiftEnabled;
- (void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

