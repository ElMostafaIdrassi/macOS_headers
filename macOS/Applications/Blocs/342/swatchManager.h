//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSFileManagerDelegate.h"

@class NSArrayController, NSButton, NSCollectionView, NSColorWell, NSMutableArray, NSString, NSTextField, NSUndoManager, WebView;

@interface swatchManager : NSWindowController <NSFileManagerDelegate>
{
    NSColorWell *smartSwatchWell;
    NSButton *addSwatchButton;
    NSButton *removeSwatchButton;
    NSArrayController *swatchArrayController;
    NSCollectionView *swatchGrid;
    NSTextField *colorNameLabel;
    NSUndoManager *swatchUndoManager;
    WebView *_webViewSwatches;
    NSMutableArray *_swatchTiles;
}

@property(retain) NSMutableArray *swatchTiles; // @synthesize swatchTiles=_swatchTiles;
@property WebView *webViewSwatches; // @synthesize webViewSwatches=_webViewSwatches;
- (void).cxx_destruct;
- (void)addCollectionViewContextMenu;
- (void)windowWillClose:(id)arg1;
- (void)deleteSwatchAlert:(id)arg1;
- (void)errorAlert:(id)arg1;
- (void)fadeOutWindow:(id)arg1;
- (void)fadeInWindow:(id)arg1;
- (void)setPaintSwatch;
- (void)closeSwatchPopover;
- (void)showSwatchPopover;
- (void)showSwatchWindow;
- (void)hideWindow;
- (void)resetWindow;
- (void)updateSwatchName;
- (void)setGlobalRGBcolor:(id)arg1;
- (void)colorWellChanged:(id)arg1;
- (void)removeSwatch:(id)arg1;
- (void)addSwatchAutomated:(id)arg1;
- (void)addSwatch:(id)arg1;
- (void)setSwatchNameLabel;
- (void)setSelectedSwatch;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)controlTextDidChange:(id)arg1;
- (void)populateSwatchGrid;
- (void)setWindowThemeColor;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

