//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHPhotoLibraryAvailabilityObserver.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface VCPClientDatabaseManager : NSObject <PHPhotoLibraryAvailabilityObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_databases;
}

+ (id)sharedDatabaseForPhotoLibrary:(id)arg1;
+ (id)sharedDatabaseManager;
- (void).cxx_destruct;
- (void)photoLibraryDidBecomeUnavailable:(id)arg1;
- (void)closeDatabaseForLibrary:(id)arg1;
- (id)sharedDatabaseForPhotoLibrary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

