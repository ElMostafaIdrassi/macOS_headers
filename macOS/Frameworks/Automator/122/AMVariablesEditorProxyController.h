//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSAnimationDelegate.h"

@class AMVariablesEditorView, AMVariablesEditorWindow, AMWorkflowView, EditorWindowCloseAnimation, EditorWindowOpenAnimation, NSArray, NSString;

@interface AMVariablesEditorProxyController : NSObject <NSAnimationDelegate>
{
    AMVariablesEditorView *_editorView;
    AMVariablesEditorWindow *_editorWindow;
    AMWorkflowView *_view;
    id _control;
    BOOL _isAnimating;
    BOOL _ignoreDidResign;
    EditorWindowOpenAnimation *_openAnimation;
    EditorWindowCloseAnimation *_closeAnimation;
    BOOL _positionAbove;
    BOOL _positionLeft;
    struct CGPoint _tokenFieldPoint;
    struct CGPoint _mouseClick;
    NSArray *_nibTopLevelObjects;
}

+ (id)sharedInstance;
@property BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
@property __weak AMVariablesEditorWindow *_editorWindow; // @synthesize _editorWindow;
@property __weak AMVariablesEditorView *_editorView; // @synthesize _editorView;
@property BOOL positionLeft; // @synthesize positionLeft=_positionLeft;
@property BOOL positionAbove; // @synthesize positionAbove=_positionAbove;
@property(retain) EditorWindowCloseAnimation *closeAnimation; // @synthesize closeAnimation=_closeAnimation;
@property(retain) EditorWindowOpenAnimation *openAnimation; // @synthesize openAnimation=_openAnimation;
@property BOOL ignoreDidResign; // @synthesize ignoreDidResign=_ignoreDidResign;
@property(retain) NSArray *nibTopLevelObjects; // @synthesize nibTopLevelObjects=_nibTopLevelObjects;
@property(nonatomic) struct CGPoint mouseClick; // @synthesize mouseClick=_mouseClick;
@property __weak id control; // @synthesize control=_control;
@property struct CGPoint tokenFieldPoint; // @synthesize tokenFieldPoint=_tokenFieldPoint;
@property __weak AMWorkflowView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)animateWindowRelocate:(id)arg1;
- (void)animateWindowScale:(id)arg1;
- (void)setEditorWindowScale:(double)arg1;
- (BOOL)animationShouldStart:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)window:(id)arg1 didProcessEvent:(id)arg2;
- (void)windowDidUpdate:(id)arg1;
- (void)parentWindowDidMove:(id)arg1;
- (void)parentWindowDidResize:(id)arg1;
- (void)parentWindowWillBeginSheet:(id)arg1;
- (void)parentWindowWillClose:(id)arg1;
- (void)parentWindowDidResignKey:(id)arg1;
@property(readonly, nonatomic) BOOL detailsWindowIsVisible;
- (BOOL)closeDetailsWindow:(id)arg1;
- (void)displayDetailsWindow:(id)arg1;
- (void)restoreWindowTransform;
- (void)saveWindowTransform;
@property(readonly, nonatomic) struct CGPoint _bestEditorWindowPosition;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

