//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TViewController.h"

@class NSImage, NSLayoutConstraint, NSStackView, NSString, TButton, TImageView, TTextField;

@interface TProgressErrorViewController : TViewController
{
    TImageView *_imageView;
    struct TNSRef<NSImage *, void> _image;
    struct TNSRef<NSImage *, void> _badgeImage;
    TTextField *_messageTextFld;
    struct TString _messageString;
    NSStackView *_buttonStackView;
    struct TNSRef<NSLayoutConstraint *, void> _buttonStackViewToImageLeadingConstraint;
    TButton *_leftButton;
    struct TString _leftButtonTitle;
    _Bool _leftButtonIsHiddenHint;
    struct TNSRef<TTargetActionFunctor *, void> _leftButtonFunctorAdapter;
    TButton *_middleButton;
    struct TString _middleButtonTitle;
    _Bool _middleButtonIsHiddenHint;
    struct TNSRef<TTargetActionFunctor *, void> _middleButtonFunctorAdapter;
    TButton *_rightButton;
    struct TString _rightButtonTitle;
    _Bool _rightButtonIsHiddenHint;
    struct TNSRef<TTargetActionFunctor *, void> _rightButtonFunctorAdapter;
    TButton *_applyAllCheckbox;
    struct TNSRef<NSLayoutConstraint *, void> _applyAllToImageTopConstraint;
    struct TNSRef<NSLayoutConstraint *, void> _applyAllToImageLeadingConstraint;
    _Bool _applyToAllButtonIsHidden;
    _Bool _applyToAll;
    int _errorViewKind;
}

+ (id)keyPathsForValuesAffectingRightButtonIsHidden;
+ (id)keyPathsForValuesAffectingMiddleButtonIsHidden;
+ (id)keyPathsForValuesAffectingLeftButtonIsHidden;
+ (id)controllerForViewKind:(int)arg1;
@property(readonly) int errorViewKind; // @synthesize errorViewKind=_errorViewKind;
@property _Bool applyToAll; // @synthesize applyToAll=_applyToAll;
@property(nonatomic) _Bool applyToAllButtonIsHidden; // @synthesize applyToAllButtonIsHidden=_applyToAllButtonIsHidden;
@property(nonatomic) _Bool rightButtonIsHiddenHint; // @synthesize rightButtonIsHiddenHint=_rightButtonIsHiddenHint;
@property(nonatomic) _Bool middleButtonIsHiddenHint; // @synthesize middleButtonIsHiddenHint=_middleButtonIsHiddenHint;
@property(nonatomic) _Bool leftButtonIsHiddenHint; // @synthesize leftButtonIsHiddenHint=_leftButtonIsHiddenHint;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateConstraintsToAvoidImageOverlap;
- (id)initialKeyView;
- (void)setRightButtonFunctor:(const function_f9feaa7d *)arg1 validatorID:(long long)arg2;
- (void)rightButtonPressed:(id)arg1;
@property(readonly, nonatomic) _Bool rightButtonIsHidden; // @dynamic rightButtonIsHidden;
@property(copy, nonatomic) NSString *rightButtonTitle; // @dynamic rightButtonTitle;
- (void)setMiddleButtonFunctor:(const function_f9feaa7d *)arg1 validatorID:(long long)arg2;
- (void)middleButtonPressed:(id)arg1;
@property(readonly, nonatomic) _Bool middleButtonIsHidden; // @dynamic middleButtonIsHidden;
@property(copy, nonatomic) NSString *middleButtonTitle; // @dynamic middleButtonTitle;
- (void)setLeftButtonFunctor:(const function_f9feaa7d *)arg1 validatorID:(long long)arg2;
- (void)leftButtonPressed:(id)arg1;
@property(readonly, nonatomic) _Bool leftButtonIsHidden; // @dynamic leftButtonIsHidden;
@property(copy, nonatomic) NSString *leftButtonTitle; // @dynamic leftButtonTitle;
@property(retain) NSLayoutConstraint *applyAllToImageLeadingConstraint; // @dynamic applyAllToImageLeadingConstraint;
@property(retain) NSLayoutConstraint *applyAllToImageTopConstraint; // @dynamic applyAllToImageTopConstraint;
@property(retain) NSLayoutConstraint *buttonStackViewToImageLeadingConstraint; // @dynamic buttonStackViewToImageLeadingConstraint;
@property(copy, nonatomic) NSImage *badgeImage; // @dynamic badgeImage;
@property(copy, nonatomic) NSImage *image; // @dynamic image;
@property(copy, nonatomic) NSString *messageString; // @dynamic messageString;
- (void)dealloc;
- (void)viewLoaded;
- (void)initCommon;
- (id)init;
- (id)initWithViewKind:(int)arg1;

@end

