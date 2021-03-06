//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray;

@interface SidecarMenuController : NSObject
{
    NSPointerArray *_menuItems;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (id)menuWithTarget:(id)arg1 action:(SEL)arg2 options:(unsigned long long)arg3;
- (id)menuWithServices:(id)arg1 options:(unsigned long long)arg2;
- (id)menuWithOptions:(unsigned long long)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)_validateImportFromDeviceItem:(id)arg1;
- (BOOL)updateMenu:(id)arg1 withEvent:(id)arg2 withFlags:(unsigned long long)arg3 withResponder:(id)arg4;
- (void)registerMenuItem:(id)arg1 target:(id)arg2 action:(SEL)arg3 options:(unsigned long long)arg4;
- (void)importFromDevice:(id)arg1;
- (void)showPhotosBrowser:(id)arg1;

@end

