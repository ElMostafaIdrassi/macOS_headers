//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/UIPredictiveViewController-Protocol.h>

@class NSArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface UICandidateViewController : UIViewController <UIPredictiveViewController>
{
    UIView *_candidateView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *candidateView; // @synthesize candidateView=_candidateView;
- (void)viewDidLayoutSubviews;
- (long long)overrideUserInterfaceStyle;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
@property(readonly, nonatomic) NSArray *displayedCandidates;
- (BOOL)hidesExpandableButton;
- (BOOL)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;
- (BOOL)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

