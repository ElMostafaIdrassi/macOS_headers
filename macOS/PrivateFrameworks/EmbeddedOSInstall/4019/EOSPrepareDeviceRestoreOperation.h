//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EmbeddedOSInstall/EOSRestoreOperation.h>

@interface EOSPrepareDeviceRestoreOperation : EOSRestoreOperation
{
}

- (id)deviceConnectionTimeoutErrorDescription;
- (BOOL)waitForDeviceDisconnected;
- (id)activityObject;
- (double)deviceConnectionTimeout;
- (long long)expectedDeviceMode;
- (long long)restorePhase;
- (void)deviceConnected:(id)arg1;
- (BOOL)preOperation;

@end

