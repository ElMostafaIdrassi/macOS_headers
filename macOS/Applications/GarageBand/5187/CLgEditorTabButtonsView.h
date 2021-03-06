//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAKitView.h"

@class MANinePartImageSet, MASegmentedControl;

@interface CLgEditorTabButtonsView : MAKitView
{
    id actionTarget;
    long long currentSelection;
    BOOL mainViewIsFirstResponder;
    BOOL isMixerGrp;
    BOOL isAudioGrp;
    MASegmentedControl *segmentedControl;
    MANinePartImageSet *gradientBackground;
}

- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)isOpaque;
- (void)setImageIndex:(long long)arg1;
- (void)unilibViewFirstResponderStateChanged3:(BOOL)arg1;
- (void)segmentedControlAction:(id)arg1;
- (long long)selectedObjIndex;
- (void)setTabBtnActionTarget1:(id)arg1;
- (void)callObjActionForEditorViewID:(int)arg1;
- (void)dealloc;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andEditorViewID:(int)arg2 asMixerGrp:(BOOL)arg3 asAudioGrp:(BOOL)arg4 beatsEditorFeatureAvailable:(BOOL)arg5;

@end

