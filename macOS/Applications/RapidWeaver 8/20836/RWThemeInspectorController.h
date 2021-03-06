//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSWindowDelegate.h"

@class NSArray, NSMutableArray, NSPanel, NSString, NSTableView;

__attribute__((visibility("hidden")))
@interface RWThemeInspectorController : NSObject <NSWindowDelegate>
{
    BOOL _isMasterStyle;
    id representedObject;
    NSTableView *themeView;
    NSMutableArray *themes;
    NSString *styleNameToSaveAs;
    NSPanel *_saveStyleAsPanel;
    NSArray *_themeBuiltInStyles;
    NSArray *_themeCustomStyles;
    NSArray *_rows;
    NSMutableArray *_visibleRows;
}

+ (id)themeVariationFilenameExtension;
+ (id)themeVariationFilenameForVariationName:(id)arg1 theme:(id)arg2;
+ (id)themeVariationFullPathFilenameForVariationName:(id)arg1 theme:(id)arg2;
+ (id)pathToThemeVariations;
+ (id)keyPathsForValuesAffectingStyleNameToSaveAsIsValid;
@property(retain, nonatomic) NSMutableArray *visibleRows; // @synthesize visibleRows=_visibleRows;
@property(retain, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(retain, nonatomic) NSArray *themeCustomStyles; // @synthesize themeCustomStyles=_themeCustomStyles;
@property(retain, nonatomic) NSArray *themeBuiltInStyles; // @synthesize themeBuiltInStyles=_themeBuiltInStyles;
@property BOOL isMasterStyle; // @synthesize isMasterStyle=_isMasterStyle;
@property(nonatomic) __weak NSPanel *saveStyleAsPanel; // @synthesize saveStyleAsPanel=_saveStyleAsPanel;
@property(copy, nonatomic) NSString *styleNameToSaveAs; // @synthesize styleNameToSaveAs;
@property(retain, nonatomic) NSMutableArray *themes; // @synthesize themes;
@property(nonatomic) __weak NSTableView *themeView; // @synthesize themeView;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject;
- (void).cxx_destruct;
- (BOOL)_saveStyle:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
- (id)_styleVariationWithName:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)onUpdateStyle:(id)arg1;
- (void)onCancelSaveStyle:(id)arg1;
- (void)onSaveStyleOK:(id)arg1;
- (void)onSaveStyle:(id)arg1;
- (void)onShowVariationsInFinder:(id)arg1;
- (void)refresh;
- (id)currentAttributes;
- (id)currentFlags;
- (BOOL)canEditThemeSettings;
- (id)displayNameForStyleDictionary:(id)arg1;
- (id)styleDictionaryWithPropertyListAtPath:(id)arg1;
- (id)stylesAtPath:(id)arg1;
- (id)customStylesForTheme:(id)arg1;
- (id)builtInStylesForTheme:(id)arg1;
- (void)toggleShowHideGroup:(id)arg1;
- (void)textChanged:(id)arg1;
- (void)sliderChanged:(id)arg1;
- (void)colorChanged:(id)arg1;
- (void)masterStyleToggled:(id)arg1;
- (void)checkboxOptionValueDidChange:(id)arg1;
- (void)optionMenuSelectionDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)groupForItem:(id)arg1;
- (id)checkboxRowsForGroup:(id)arg1;
- (id)menuRowForGroup:(id)arg1;
- (id)colourRowsForGroup:(id)arg1;
- (id)headerRowForGroup:(id)arg1;
- (id)dividerRow;
- (void)addRow:(id)arg1 toRows:(id)arg2;
- (void)addRows:(id)arg1 toRows:(id)arg2;
- (void)generateTableDataIfRequired;
- (void)setMostRecentlySelectedThemeStyle:(id)arg1;
- (id)mostRecentlySelectedThemeStyle;
- (id)currentColourVariations;
- (id)currentThemeGroups;
- (id)currentTheme;
- (id)currentPage;
- (void)themeSiteVariationsChanged:(id)arg1;
- (void)themePageVariationsChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)dismissColorPanel;
- (void)windowWillClose:(id)arg1;
- (void)startObserving;
- (void)stopObserving;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleThemeChanged;
- (void)themeListChanged;
- (void)handlePageChanged;
- (void)handleDocumentChanged:(id)arg1;
@property(readonly, nonatomic) BOOL styleNameToSaveAsIsValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

