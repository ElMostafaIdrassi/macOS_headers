//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface InfoMessageLogic : NSObject
{
}

+ (unsigned long long)emptyMenuActionWhenRestricted:(BOOL)arg1 canElevateAccess:(BOOL)arg2;
+ (unsigned long long)emptySidebarButtonActionWhenRestricted:(BOOL)arg1 canElevateAccess:(BOOL)arg2;
+ (id)emptySidebarMessageWhenRestricted:(BOOL)arg1 isVolume:(BOOL)arg2 canElevateAccess:(BOOL)arg3;
+ (id)availableSpaceCollectorMessage;
+ (unsigned long long)availableSpaceMenuAction;
+ (id)freeSpaceSidebarMessage;
+ (id)freeSpaceCollectorMessage;
+ (unsigned long long)freeSpaceMenuAction;
+ (id)reservedSpaceCollectorMessageWhenManyVolumes:(BOOL)arg1;
+ (unsigned long long)reservedSpaceMenuAction;
+ (id)reservedSpaceSidebarMessageWhenManyVolumes:(BOOL)arg1;
+ (id)purgeableSpaceCollectorMessage;
+ (unsigned long long)purgeableSpaceMenuAction;
+ (unsigned long long)purgeableSpaceSidebarButtonAction;
+ (id)purgeableSpaceSidebarMessageWhenOnStartupVolume:(BOOL)arg1 mobileBackups:(BOOL)arg2 canElevateAccess:(BOOL)arg3 canExpand:(BOOL)arg4;
+ (id)unknownSpaceCollectorMessageWhenCanElevateAccess:(BOOL)arg1;
+ (unsigned long long)unknownSpaceMenuActionWhenCanElevateAccess:(BOOL)arg1;
+ (id)unknownSpaceSidebarMessageWhenOnStartupVolume:(BOOL)arg1 mobileBackups:(BOOL)arg2 manyUsers:(BOOL)arg3 canElevateAccess:(BOOL)arg4;
+ (id)hiddenSpaceCollectorMessage;
+ (unsigned long long)hiddenSpaceMenuActionWhenCanElevateAccess:(BOOL)arg1;
+ (unsigned long long)hiddenSpaceSidebarButtonActionWhenCanElevateAccess:(BOOL)arg1;
+ (id)hiddenSpaceSidebarMessageWhenOnStartupVolume:(BOOL)arg1 mobileBackups:(BOOL)arg2 manyUsers:(BOOL)arg3 canElevateAccess:(BOOL)arg4 canExpand:(BOOL)arg5;

@end

