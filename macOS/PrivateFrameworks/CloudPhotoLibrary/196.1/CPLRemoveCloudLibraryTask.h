//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncEmergencyTask.h>

@protocol CPLEngineTransportRemoveLibraryTask;

@interface CPLRemoveCloudLibraryTask : CPLEngineSyncEmergencyTask
{
    id <CPLEngineTransportRemoveLibraryTask> _removeLibraryTask;
}

+ (BOOL)shouldCoalesceTasks;
+ (id)taskIdentifier;
- (void).cxx_destruct;
- (void)cancel;
- (void)launch;
- (unsigned long long)priority;
- (BOOL)shouldStopSyncSession;

@end

