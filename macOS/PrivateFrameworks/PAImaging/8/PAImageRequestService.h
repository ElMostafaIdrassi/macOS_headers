//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PAImageRequestService.h"

@class NSObject<OS_os_log>, NSString, PAImageCache;

@interface PAImageRequestService : NSObject <PAImageRequestService>
{
    PAImageCache *_masterImageCache;
    PAImageCache *_metadataImageCache;
    NSObject<OS_os_log> *_logger;
}

+ (void)_setupDiskCache;
+ (id)sharedInstance;
+ (void)registerDefaults;
@property(retain) PAImageCache *masterImageCache; // @synthesize masterImageCache=_masterImageCache;
- (void).cxx_destruct;
- (id)submitURLRequest:(id)arg1 canceler:(id)arg2;
- (id)newLoader;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

