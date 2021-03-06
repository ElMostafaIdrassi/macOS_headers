//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PAImaging/PAImageRequestService-Protocol.h>

@class NSString, PAImageCache;
@protocol OS_os_log;

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

