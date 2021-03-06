//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IFNetworkDiskObject : NSObject
{
    NSString *_mountPath;
}

- (unsigned long long)availableSpace;
- (unsigned long long)freeSpace;
- (unsigned long long)totalSize;
- (BOOL)filesystemIsLocked;
- (BOOL)isRootVolume;
- (id)volumeName;
- (id)diskIdentifier;
- (id)mountPoint;
- (void)dealloc;
- (id)initWithMountPath:(id)arg1;

@end

