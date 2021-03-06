//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EXSDataManager, NSBackgroundActivityScheduler;

@interface EXSMaintenanceActivity : NSObject
{
    EXSDataManager *_dataManager;
    NSBackgroundActivityScheduler *_scheduler;
}

+ (id)log;
@property(retain, nonatomic) NSBackgroundActivityScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(nonatomic) __weak EXSDataManager *dataManager; // @synthesize dataManager=_dataManager;
- (void).cxx_destruct;
- (CDUnknownBlockType)_doMaintenanceActivity;
- (void)invalidate;
- (void)scheduleMaintenanceActivity;
- (id)initWithDataManager:(id)arg1;

@end

