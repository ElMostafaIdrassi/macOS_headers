//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOUtilityServiceProxy-Protocol.h>

@class NSString;
@protocol GEOUtilityServiceProxy;

@interface GEOUtilityService : NSObject <GEOUtilityServiceProxy>
{
    id <GEOUtilityServiceProxy> _proxy;
}

+ (id)sharedService;
+ (void)useProxy:(Class)arg1;
- (void).cxx_destruct;
- (void)getCurrentGeoServicesState:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)getGeoServicesCacheDirectoryPath;
- (id)getHomeDirectoryPath;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

