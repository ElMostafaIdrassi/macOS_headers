//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "SOEffectPickerButtonControllerDelegate.h"

@class NSMutableArray, NSString, NSView, SOEffectPickerButtonController, SOEffectPickerUnsentMessage, SOVerticalPillView;

@interface SOEffectPickerViewController : NSViewController <SOEffectPickerButtonControllerDelegate>
{
    NSMutableArray *_descriptors;
    SOVerticalPillView *_verticalPill;
    NSView *_messageBubble;
    id <SOEffectPickerViewControllerDelegate> _delegate;
    SOEffectPickerButtonController *_selectedDescriptor;
    SOEffectPickerUnsentMessage *_unsentMessage;
}

- (void).cxx_destruct;
@property(retain) SOEffectPickerUnsentMessage *unsentMessage; // @synthesize unsentMessage=_unsentMessage;
@property(retain, nonatomic) SOEffectPickerButtonController *selectedDescriptor; // @synthesize selectedDescriptor=_selectedDescriptor;
@property(nonatomic) __weak id <SOEffectPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateTextForDarkBackground:(BOOL)arg1;
- (void)effectDescriptorWillSend:(id)arg1;
- (void)effectDescriptorWillActivate:(id)arg1;
- (void)showBubbleForButton:(id)arg1 withDarkBackground:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setBubbleViewFrame:(id)arg1 relativeToButtonFrame:(struct CGRect)arg2;
- (void)animateInBubble:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillAppear;
- (void)updateButtons:(BOOL)arg1;
- (void)viewWillLayout;
- (void)addEffectWithDisplayName:(id)arg1 effectIdentifier:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithUnsentMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

