//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SidebarObservableOutlineController.h"

#import "HotKeyValidation.h"
#import "NSTextFieldDelegate.h"
#import "PCPopoverDelegateProtocol.h"

@class BottomBarSegmentedControl, Clip, ClipGroup, ClipHotKeyField, ClipsOutlineView, ModeHeaderView, NSButton, NSPopUpButton, NSString, NSTextField, NSTextView, NSView, PCCellDrawingPopUpButton, PCGradientButton, PCPopover, PlainTextEditor, TSFindTextField;

__attribute__((visibility("hidden")))
@interface ClipsViewController : SidebarObservableOutlineController <NSTextFieldDelegate, HotKeyValidation, PCPopoverDelegateProtocol>
{
    ClipGroup *iSiteClips;
    ClipGroup *iDisplayGroup;
    Clip *iEditClip;
    NSTextField *iPlaceholderNameEditField;
    NSPopUpButton *iActionButton;
    NSButton *iAddButton;
    ClipsOutlineView *iClipsOutlineView;
    BottomBarSegmentedControl *iClipsSwitcher;
    ModeHeaderView *iModeHeaderView;
    NSTextField *iModeHeaderField;
    PCCellDrawingPopUpButton *iInsertPlaceholderButton;
    PCGradientButton *iSaveButton;
    PCGradientButton *iCancelButton;
    NSTextView *iClipTextView;
    NSTextField *iTitleField;
    TSFindTextField *iTriggerField;
    NSView *iEditContentView;
    PCPopover *iEditPopover;
    ClipHotKeyField *iHotKeyField;
    ClipGroup *iModeClips;
    PlainTextEditor *iEditor;
    NSString *iCurrentModeIdentifier;
    PCPopover *iNamePlaceholderPopover;
    BOOL iShouldProcessObjectChanges;
}

@property(retain, nonatomic) NSString *currentModeIdentifier; // @synthesize currentModeIdentifier=iCurrentModeIdentifier;
@property(nonatomic) ClipGroup *displayClipGroup; // @synthesize displayClipGroup=iDisplayGroup;
- (id)displayName;
- (id)maskImageName;
- (id)sidebarIdentifier;
- (BOOL)validateMenuItem:(id)arg1;
- (void)unloadView;
- (void)setSelectedClipGroupType:(int)arg1;
- (void)showGlobalClips:(id)arg1;
- (void)switchClipsScope:(id)arg1;
- (id)newClipTargetGroup;
- (void)setWindowController:(id)arg1;
- (void)setModeHeaderVisible:(BOOL)arg1;
- (id)selectedClip;
- (id)selection;
- (id)selectedObject;
- (void)selectObject:(id)arg1;
- (void)saveAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (id)textView:(id)arg1 shouldChangeTypingAttributes:(id)arg2 toAttributes:(id)arg3;
- (void)textView:(id)arg1 doubleClickedOnCell:(id)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (void)textView:(id)arg1 clickedOnCell:(id)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (void)textDidChange:(id)arg1;
- (void)textViewDocumentModeDidChange:(id)arg1;
- (void)textViewSelectionDidChange:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)validateEditPopoverIsKey;
- (BOOL)popoverShouldClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 keyDown:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)observedOutlineView;
- (id)observeObjectKey;
- (id)logicalSelectionFromClips:(id)arg1;
- (id)logicalSelection;
- (void)objectsDidChange:(id)arg1;
- (void)loadView;
- (BOOL)isTriggerUsed:(id)arg1 exception:(id)arg2;
- (void)removePlaceholderPlaceholder;
- (void)closeNamedPlaceholderPopover;
- (void)createPlaceholderNamed:(id)arg1;
- (void)showCustomPlaceholderPopover:(struct _NSRange)arg1 name:(id)arg2;
- (void)insertPlaceholder:(id)arg1;
- (void)importClipsGroupAtPath:(id)arg1;
- (void)importClipsGroup:(id)arg1;
- (BOOL)isHotKeyUsed:(id)arg1 exception:(id)arg2;
- (BOOL)hotKeyField:(id)arg1 shouldChangeKeyCombo:(id)arg2;
- (void)getInfo:(id)arg1;
- (id)initialFirstResponder;
- (id)lastKeyView;
- (id)firstKeyView;
- (void)exportClipsGroup:(id)arg1;
- (void)expandDisplayClipGroups;
- (id)emptyOverlayAttributedTitle;
- (void)editSelection:(id)arg1;
- (void)editGroup:(id)arg1;
- (void)editClip:(id)arg1;
- (void)doubleClickAction:(id)arg1;
- (void)deleteClip:(id)arg1 fromGroup:(id)arg2;
- (void)redoDelete:(id)arg1;
- (void)undoDelete:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)closeAlertSheet:(id)arg1;
- (void)clipSwitcherFrameDidChange:(id)arg1;
- (id)clipCompletionCandidatesForString:(id)arg1 allowExactMatch:(BOOL)arg2;
- (id)clipMatchingHotKey:(id)arg1;
- (id)clipMatchingTrigger:(id)arg1;
- (id)attributedTriggerStringFromString:(id)arg1;
- (void)addGroupAction:(id)arg1;
- (void)addClip:(id)arg1;
- (void)addAction:(id)arg1;
- (void)addPlaceholderMenuItem:(id)arg1 tag:(long long)arg2 font:(id)arg3 color:(id)arg4;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

