//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UISDisplayContext;

__attribute__((visibility("hidden")))
@interface _UIScreenInitialDisplayConfigurationLoader : NSObject
{
    UISDisplayContext *_context;
    BOOL _hasRequestedPreload;
}

+ (id)sharedLoader;
- (void).cxx_destruct;
@property(readonly, nonatomic) UISDisplayContext *initialDisplayContext;
- (id)initialDisplayConfiguration;
- (void)_startPreloadInitialDisplayContext;

@end

