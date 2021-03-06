//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXKApplicationControllerDelegate-Protocol.h"
#import "AXKKeyboardFocusListener-Protocol.h"

@class AXFUIElement, AXKApplicationController, AXKSearchManager, NSString;

@interface KAFocusManager : NSObject <AXKKeyboardFocusListener, AXKApplicationControllerDelegate>
{
    BOOL _hasOpenMenu;
    BOOL _textInputPassThruAllowed;
    AXKApplicationController *_currentApplicationController;
    AXFUIElement *_focusedElementBeforeMenuOpened;
    AXKSearchManager *__searchManager;
    AXFUIElement *_currentFocusedElement;
    AXFUIElement *__previousSelectedElement;
    unsigned long long __selectedTextChangedCounter;
}

@property(nonatomic) unsigned long long _selectedTextChangedCounter; // @synthesize _selectedTextChangedCounter=__selectedTextChangedCounter;
@property(retain, nonatomic) AXFUIElement *_previousSelectedElement; // @synthesize _previousSelectedElement=__previousSelectedElement;
@property(retain, nonatomic) AXFUIElement *currentFocusedElement; // @synthesize currentFocusedElement=_currentFocusedElement;
@property(readonly, nonatomic) AXKSearchManager *_searchManager; // @synthesize _searchManager=__searchManager;
@property(nonatomic) BOOL textInputPassThruAllowed; // @synthesize textInputPassThruAllowed=_textInputPassThruAllowed;
@property(retain, nonatomic) AXFUIElement *focusedElementBeforeMenuOpened; // @synthesize focusedElementBeforeMenuOpened=_focusedElementBeforeMenuOpened;
@property(nonatomic) BOOL hasOpenMenu; // @synthesize hasOpenMenu=_hasOpenMenu;
@property(retain, nonatomic) AXKApplicationController *currentApplicationController; // @synthesize currentApplicationController=_currentApplicationController;
- (void).cxx_destruct;
- (void)applicationControllerMenuDidClose:(id)arg1 menuElement:(id)arg2;
- (void)applicationControllerMenuDidOpen:(id)arg1 menuElement:(id)arg2;
- (void)applicationControllerWindowDidDeminiaturize:(id)arg1 windowElement:(id)arg2;
- (void)applicationControllerWindowDidMiniaturize:(id)arg1 windowElement:(id)arg2;
- (void)applicationControllerWindowDidResize:(id)arg1 windowElement:(id)arg2;
- (void)applicationControllerWindowDidMove:(id)arg1 windowElement:(id)arg2;
- (void)keyboardFocusTracker:(id)arg1 selectedTextChanged:(id)arg2;
- (void)keyboardFocusTracker:(id)arg1 keyboardFocusedElementChanged:(id)arg2;
- (void)keyboardFocusTracker:(id)arg1 selectedElementsChanged:(id)arg2;
- (void)keyboardFocusTracker:(id)arg1 keyboardFocusedApplicationChanged:(id)arg2;
- (void)_updateDefaultCursor;
- (void)_hideCursor;
- (void)_showCursorForElement:(id)arg1;
- (BOOL)_shouldSetKeyboardFocusWhenCursorFocusOnElement:(id)arg1;
- (id)_focusElementForElement:(id)arg1;
- (void)focusOnElement:(id)arg1 updateKeyboardFocus:(BOOL)arg2;
@property(readonly, nonatomic) AXFUIElement *currentFocusedElementAllowingFallback;
- (void)dealloc;
- (id)initWithSearchManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

