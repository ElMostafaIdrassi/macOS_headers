//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SourceObserver.h"

@class DirectorySource;

@protocol DirectorySourceObserver <SourceObserver>
- (void)directorySourceIsParentVolumeSourceUnmountedDidChange:(DirectorySource *)arg1;
- (void)directorySourceIsDirectoryLockedDidChange:(DirectorySource *)arg1;
- (void)directorySourceIsFullyRestrictedDidChange:(DirectorySource *)arg1;
- (void)directorySourceIsRestrictedDidChange:(DirectorySource *)arg1;
@end

