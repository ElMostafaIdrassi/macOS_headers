//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXSlideshowViewerControllerKenBurnsEditingDelegate-Protocol.h"

@class IPXSlideshowEditorController, IPXZoomSlider, NSButton, NSLayoutConstraint, NSMutableArray, NSString, NSTextField, UXView;

__attribute__((visibility("hidden")))
@interface IPXSlideshowKenBurnsEditorController : IPXViewController <IPXSlideshowViewerControllerKenBurnsEditingDelegate>
{
    NSMutableArray *_editKenBurnsVerticalViewConstraints;
    BOOL _open;
    BOOL _editingOutPoint;
    IPXSlideshowEditorController *_editorController;
    NSButton *_editKenBurnButton;
    NSButton *_editKenInPointBurnButton;
    NSButton *_editKenOutPointBurnButton;
    IPXZoomSlider *_editKenBurnInZoomSlider;
    IPXZoomSlider *_editKenBurnOutZoomSlider;
    UXView *_editKenBurnsControlView;
    UXView *_editKenBurnsVerticalView;
    UXView *_editKenBurnInPointView;
    UXView *_editKenBurnOutPointView;
    UXView *_editKenBurnInDividerView;
    UXView *_editKenBurnOutDividerView;
    NSTextField *_editKenBurnInText;
    NSTextField *_editKenBurnOutText;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_inPointWidthConstraint;
    NSLayoutConstraint *_outPointWidthConstraint;
    NSLayoutConstraint *_zoomWidthConstraint;
    NSLayoutConstraint *_verticalViewHeightConstraint;
    double _textWidth;
    double _sliderWidth;
}

+ (id)mediumTextAttributesOfSize:(double)arg1 color:(id)arg2;
+ (struct CGSize)gap;
+ (struct CGSize)size;
@property double sliderWidth; // @synthesize sliderWidth=_sliderWidth;
@property double textWidth; // @synthesize textWidth=_textWidth;
@property BOOL editingOutPoint; // @synthesize editingOutPoint=_editingOutPoint;
@property BOOL open; // @synthesize open=_open;
@property __weak NSLayoutConstraint *verticalViewHeightConstraint; // @synthesize verticalViewHeightConstraint=_verticalViewHeightConstraint;
@property __weak NSLayoutConstraint *zoomWidthConstraint; // @synthesize zoomWidthConstraint=_zoomWidthConstraint;
@property __weak NSLayoutConstraint *outPointWidthConstraint; // @synthesize outPointWidthConstraint=_outPointWidthConstraint;
@property __weak NSLayoutConstraint *inPointWidthConstraint; // @synthesize inPointWidthConstraint=_inPointWidthConstraint;
@property __weak NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property __weak NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain, nonatomic) NSTextField *editKenBurnOutText; // @synthesize editKenBurnOutText=_editKenBurnOutText;
@property(retain, nonatomic) NSTextField *editKenBurnInText; // @synthesize editKenBurnInText=_editKenBurnInText;
@property(retain, nonatomic) UXView *editKenBurnOutDividerView; // @synthesize editKenBurnOutDividerView=_editKenBurnOutDividerView;
@property(retain, nonatomic) UXView *editKenBurnInDividerView; // @synthesize editKenBurnInDividerView=_editKenBurnInDividerView;
@property(retain, nonatomic) UXView *editKenBurnOutPointView; // @synthesize editKenBurnOutPointView=_editKenBurnOutPointView;
@property(retain, nonatomic) UXView *editKenBurnInPointView; // @synthesize editKenBurnInPointView=_editKenBurnInPointView;
@property(retain, nonatomic) UXView *editKenBurnsVerticalView; // @synthesize editKenBurnsVerticalView=_editKenBurnsVerticalView;
@property(retain, nonatomic) UXView *editKenBurnsControlView; // @synthesize editKenBurnsControlView=_editKenBurnsControlView;
@property(retain, nonatomic) IPXZoomSlider *editKenBurnOutZoomSlider; // @synthesize editKenBurnOutZoomSlider=_editKenBurnOutZoomSlider;
@property(retain, nonatomic) IPXZoomSlider *editKenBurnInZoomSlider; // @synthesize editKenBurnInZoomSlider=_editKenBurnInZoomSlider;
@property(retain, nonatomic) NSButton *editKenOutPointBurnButton; // @synthesize editKenOutPointBurnButton=_editKenOutPointBurnButton;
@property(retain, nonatomic) NSButton *editKenInPointBurnButton; // @synthesize editKenInPointBurnButton=_editKenInPointBurnButton;
@property(retain, nonatomic) NSButton *editKenBurnButton; // @synthesize editKenBurnButton=_editKenBurnButton;
@property __weak IPXSlideshowEditorController *editorController; // @synthesize editorController=_editorController;
- (void).cxx_destruct;
- (void)selectOutPoint:(id)arg1;
- (void)selectInPoint:(id)arg1;
- (void)setKenBurnsEditingUIVisibility:(BOOL)arg1;
- (void)hideKenBurnsEditingUI;
- (void)toggleKenBurns:(id)arg1;
- (void)zoomOutSlider:(id)arg1;
- (void)zoomInSlider:(id)arg1;
- (void)_update;
- (void)setEnabled:(BOOL)arg1;
- (void)setVisible:(BOOL)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)loadView;
- (void)_syncMainThread:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

