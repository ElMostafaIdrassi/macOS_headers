//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@interface MGInspectorWindowController : NSWindowController
{
    id _windowWillOrderOnScreenObserver;
    id _windowDidOrderOffScreenObserver;
    id _windowDidMoveObserver;
    id _windowDidBecomeMainObserver;
    id _windowDidResignMainObserver;
}

+ (id)sharedInspectorWindowController;
+ (void)initialize;
- (void).cxx_destruct;
- (void)close;
- (void)loadWindow;
- (void)toggleWindowVisibility;
- (void)showWindowAtLaunchIfNeeded;

@end

