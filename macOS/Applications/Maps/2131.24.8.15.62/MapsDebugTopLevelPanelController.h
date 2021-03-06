//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSToolbarDelegate-Protocol.h"

@class MapsDebugTopLevelValuesViewController, NSArray, NSString, NSToolbar, NSView;
@protocol MapsDebugViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MapsDebugTopLevelPanelController : NSWindowController <NSToolbarDelegate>
{
    MapsDebugTopLevelValuesViewController *_topLevelController;
    NSToolbar *_toolbar;
    NSArray *_identifiers;
    NSView *_shownView;
}

- (void).cxx_destruct;
- (void)_toolbarSelectedItemDidChange:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarSelectableItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)_viewControllerForIdentifier:(id)arg1;
- (id)_identifierForViewController:(id)arg1;
- (id)_identifiersForChildViewControllers;
- (id)window;
@property(nonatomic) __weak id <MapsDebugViewControllerDelegate> delegate;
- (id)initWithTopLevelValuesViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

