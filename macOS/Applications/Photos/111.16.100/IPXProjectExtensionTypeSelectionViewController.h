//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXNavigationParticipatingViewController.h"

#import "IPXProjectExtensionTypeSelectionCollectionViewControllerDelegate-Protocol.h"
#import "IPXProjectExtensionTypeSelectionItemResponder-Protocol.h"
#import "IPXProjectExtensionTypeSelectionProgressDelegate-Protocol.h"
#import "NSTouchBarDelegate-Protocol.h"
#import "UXNavigationControllerDelegate-Protocol.h"

@class IPXProjectExtensionBrowserController, NSButton, NSError, NSExtension, NSImageView, NSLayoutConstraint, NSProgressIndicator, NSString, NSTextField, NSView, NSWindow, PHProjectTypeDescription, PHProjectTypeDescriptionSourceClient, UXNavigationController;

__attribute__((visibility("hidden")))
@interface IPXProjectExtensionTypeSelectionViewController : IPXNavigationParticipatingViewController <NSTouchBarDelegate, IPXProjectExtensionTypeSelectionItemResponder, UXNavigationControllerDelegate, IPXProjectExtensionTypeSelectionCollectionViewControllerDelegate, IPXProjectExtensionTypeSelectionProgressDelegate>
{
    BOOL _loadCustomProjectTypes;
    IPXProjectExtensionBrowserController *_extensionBrowserController;
    NSExtension *_extension;
    NSString *_projectCategory;
    NSWindow *_hostingWindow;
    NSImageView *_extensionIconImageView;
    NSTextField *_titleLabel;
    NSView *_navigationContainerView;
    NSProgressIndicator *_progressIndicator;
    NSButton *_cancelButton;
    NSButton *_previousButton;
    NSButton *_createButton;
    NSLayoutConstraint *_cancelButtonLeadingConstraint;
    NSLayoutConstraint *_cancelButtonTrailingConstraint;
    CDUnknownBlockType _selectionCompletionBlock;
    UXNavigationController *_childNavigationController;
    PHProjectTypeDescription *_selectedProjectTypeDescription;
    PHProjectTypeDescriptionSourceClient *_projectTypeDataSourceClient;
    NSError *_currentlyShownError;
    id _eventMonitor;
}

+ (void)showTypeSelectionSheetForExtensionWithIdentifier:(id)arg1 category:(id)arg2 inWindow:(id)arg3 skipProjectTypeSelection:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
@property(retain, nonatomic) id eventMonitor; // @synthesize eventMonitor=_eventMonitor;
@property(retain, nonatomic) NSError *currentlyShownError; // @synthesize currentlyShownError=_currentlyShownError;
@property(retain, nonatomic) PHProjectTypeDescriptionSourceClient *projectTypeDataSourceClient; // @synthesize projectTypeDataSourceClient=_projectTypeDataSourceClient;
@property(nonatomic) BOOL loadCustomProjectTypes; // @synthesize loadCustomProjectTypes=_loadCustomProjectTypes;
@property(retain, nonatomic) PHProjectTypeDescription *selectedProjectTypeDescription; // @synthesize selectedProjectTypeDescription=_selectedProjectTypeDescription;
@property(retain, nonatomic) UXNavigationController *childNavigationController; // @synthesize childNavigationController=_childNavigationController;
@property(copy, nonatomic) CDUnknownBlockType selectionCompletionBlock; // @synthesize selectionCompletionBlock=_selectionCompletionBlock;
@property(retain, nonatomic) NSLayoutConstraint *cancelButtonTrailingConstraint; // @synthesize cancelButtonTrailingConstraint=_cancelButtonTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *cancelButtonLeadingConstraint; // @synthesize cancelButtonLeadingConstraint=_cancelButtonLeadingConstraint;
@property(nonatomic) __weak NSButton *createButton; // @synthesize createButton=_createButton;
@property(nonatomic) __weak NSButton *previousButton; // @synthesize previousButton=_previousButton;
@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(nonatomic) __weak NSView *navigationContainerView; // @synthesize navigationContainerView=_navigationContainerView;
@property(nonatomic) __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak NSImageView *extensionIconImageView; // @synthesize extensionIconImageView=_extensionIconImageView;
@property(retain, nonatomic) NSWindow *hostingWindow; // @synthesize hostingWindow=_hostingWindow;
@property(readonly, nonatomic) NSString *projectCategory; // @synthesize projectCategory=_projectCategory;
@property(readonly, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(readonly, nonatomic) IPXProjectExtensionBrowserController *extensionBrowserController; // @synthesize extensionBrowserController=_extensionBrowserController;
- (void).cxx_destruct;
- (void)showSheetForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)completeSheet:(long long)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)_touchBarItemForExistingButton:(id)arg1 identifier:(id)arg2;
- (id)makeTouchBar;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2;
- (void)projectTypeSelectionCollectionViewController:(id)arg1 failedToLoadFromDataSourceWithError:(id)arg2;
- (void)projectTypeSelectionCollectionViewController:(id)arg1 didUpdateSelectedProjectType:(id)arg2;
- (void)insertNewline:(id)arg1;
- (void)projectTypeSectionItemDoubleClicked:(id)arg1;
- (void)progressViewController:(id)arg1 cancellabilityDidChange:(BOOL)arg2;
- (void)a_cancel:(id)arg1;
- (void)a_previous:(id)arg1;
- (void)a_create:(id)arg1;
- (void)updateCreateButtonTitleWithEvent:(id)arg1;
- (void)showProgressViewForProgress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_callCompletion:(BOOL)arg1 inNewWindow:(BOOL)arg2;
- (void)_setupCreateButtonWidthConstraint;
- (void)_updateCreateButtonEnabled;
- (void)_setPreviousButtonVisible:(BOOL)arg1;
- (id)createButtonTitleHasSubtypes:(BOOL)arg1 event:(id)arg2;
- (void)_handleClientInterruption;
- (void)_didLoadDescriptionSourceClient:(id)arg1 error:(id)arg2;
- (void)_browserControllerDidLoadViewController:(id)arg1 progress:(id)arg2;
- (void)loadData;
- (void)viewWillAppear;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithExtension:(id)arg1 category:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

