//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "PCAppearanceViewDelegate.h"
#import "PCKeyLoopProtocol.h"
#import "PCSheetControllerInterfaceDelegate.h"
#import "SidebarBackgroundViewDelegate.h"

@class CodaDocumentViewController, CodaSite, CodaWindowController, NSImage, NSString, NSView, NSWindow, PCRemoteFileManager, QueueController, SCMController, SidebarBackgroundView;

__attribute__((visibility("hidden")))
@interface SidebarViewController : NSViewController <PCSheetControllerInterfaceDelegate, PCAppearanceViewDelegate, PCKeyLoopProtocol, SidebarBackgroundViewDelegate>
{
    CodaWindowController *iWindowController;
    CodaDocumentViewController *iDocumentViewController;
    NSView *iContentView;
    NSView *iQueueResizingView;
    SidebarBackgroundView *iEmptyOverlayView;
    unsigned long long iBadgeCount;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)windowControllerPropertiesToObserve;
@property unsigned long long badgeCount; // @synthesize badgeCount=iBadgeCount;
@property NSView *contentView; // @synthesize contentView=iContentView;
@property NSView *queueResizingView; // @synthesize queueResizingView=iQueueResizingView;
@property(nonatomic) CodaDocumentViewController *documentViewController; // @synthesize documentViewController=iDocumentViewController;
@property(nonatomic) CodaWindowController *windowController; // @synthesize windowController=iWindowController;
- (void)gotoFolderInFinder:(id)arg1;
- (void)gotoFolderInSidebarFileBrowser:(id)arg1;
- (void)gotoFolderInFileBrowser:(id)arg1;
- (void)addFileActionsToMenu:(id)arg1;
- (void)setEmptyOverlayHidden:(BOOL)arg1;
- (void)setEmptyOverlayAttributedTitle:(id)arg1;
@property(readonly, retain) NSImage *homeScreenImage;
- (id)initialFirstResponder;
- (id)lastKeyView;
- (id)firstKeyView;
- (id)emptyOverlayAttributedTitle;
@property(readonly, retain) NSImage *alternateTabImage;
@property(readonly, retain) NSImage *tabImage;
- (id)sidebarIdentifier;
- (BOOL)sidebarBackgroundView:(id)arg1 clickedOnLink:(id)arg2;
- (id)largeMaskImageURL;
- (id)maskImageURL;
- (id)maskImageName;
- (id)displayName;
- (id)windowForSheetController:(id)arg1;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)unloadView;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)compare:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)restoreStateWithCoder:(id)arg1;
- (void)dealloc;
@property(readonly) CodaSite *site;
@property(readonly) SCMController *SCMController;
@property(readonly) QueueController *queueController;
@property(readonly) NSWindow *window;
@property(readonly) PCRemoteFileManager *remoteFileManager;
@property(readonly) NSString *localPath;
@property(readonly) NSString *remotePath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

