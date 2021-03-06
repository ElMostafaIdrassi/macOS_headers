//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "LPFileInspectorChildController.h"

#import "LPInspectorViewDataSource-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "VDKDeselectorTableViewDelegate-Protocol.h"

@class LPInspectorBottomBarView, LPInspectorPaneSectionView, NSButton, NSMutableArray, NSPopUpButton, NSString, NSTableView, NSView;

__attribute__((visibility("hidden")))
@interface LPTypescriptInspectorController : LPFileInspectorChildController <LPInspectorViewDataSource, NSTableViewDataSource, VDKDeselectorTableViewDelegate>
{
    BOOL _isSetup;
    NSMutableArray *_sectionPanesForFileOptions;
    LPInspectorPaneSectionView *_fileOptionsSectionView;
    NSPopUpButton *_outputModuleTypePopUpButton;
    NSPopUpButton *_ECMAScriptVersionPopUpButton;
    NSPopUpButton *_jsxModePopUpButton;
    NSPopUpButton *_moduleResolutionTypePopUpButton;
    NSButton *_minifyOutputCheckbox;
    NSButton *_preserveConstEnumsCheckbox;
    NSButton *_suppressImplicitAnyIndexErrorsCheckbox;
    NSButton *_noImplicitAnyCheckbox;
    NSButton *_removeCommentsCheckbox;
    NSButton *_generateSourceMapCheckbox;
    NSButton *_generateDTSFileCheckbox;
    LPInspectorBottomBarView *_bottomBarView;
    NSButton *_processButton;
    LPInspectorPaneSectionView *_importsSectionView;
    LPInspectorPaneSectionView *_importedBySectionView;
    NSTableView *_importsTableView;
    NSView *_importsEmptyPlaceholderView;
    NSTableView *_importedByTableView;
    NSView *_importedByEmptyPlaceholderView;
    LPInspectorPaneSectionView *_multiFilePlaceholderView;
}

- (BOOL)tableView:(id)arg1 shouldShowContextualMenuForClickedRow:(long long)arg2;
- (id)tableView:(id)arg1 pasteboardWriterForRow:(long long)arg2;
- (void)handleTableViewDoubleClick:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (void)processButtonAction:(id)arg1;
- (void)checkboxesAction:(id)arg1;
- (void)moduleResolutionTypePopUpButtonAction:(id)arg1;
- (void)jsxModePopUpButtonAction:(id)arg1;
- (void)ECMAScriptVersionPopUpButtonAction:(id)arg1;
- (void)outputModuleTypePopUpButtonAction:(id)arg1;
- (void)refreshPaneAtIndex:(unsigned long long)arg1;
- (id)viewForBottomBarOfPaneAtIndex:(unsigned long long)arg1;
- (id)sectionViewsForPaneAtIndex:(unsigned long long)arg1;
- (long long)typeOfPaneAtIndex:(unsigned long long)arg1;
- (id)orderedTitlesForInspectorToolbarButtons;
- (unsigned long long)numberOfPanes;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithRootController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

