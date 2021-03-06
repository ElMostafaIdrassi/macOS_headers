//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SPResultTableViewController.h"

#import "QLPreviewViewDelegate-Protocol.h"

@class NSString, PRSPreviewController, QLPreviewView;

@interface SPPreviewResultController : SPResultTableViewController <QLPreviewViewDelegate>
{
    BOOL _awoke;
    QLPreviewView *_previewView;
    PRSPreviewController *_previewController;
    double _splitViewPosition;
}

@property BOOL awoke; // @synthesize awoke=_awoke;
@property double splitViewPosition; // @synthesize splitViewPosition=_splitViewPosition;
@property(retain) PRSPreviewController *previewController; // @synthesize previewController=_previewController;
@property __weak QLPreviewView *previewView; // @synthesize previewView=_previewView;
- (void).cxx_destruct;
- (BOOL)previewView:(id)arg1 canShowPathForItem:(id)arg2;
- (void)previewView:(id)arg1 didLoadPreviewItem:(id)arg2;
- (void)previewView:(id)arg1 didShowPreviewItem:(id)arg2;
- (id)previewView:(id)arg1 customViewForPreviewItem:(id)arg2;
- (void)removePreview;
- (void)adjustSubviews;
- (void)previewView:(id)arg1 timedOutLoadingPreviewItem:(id)arg2;
- (BOOL)updateViewForSelectedResult:(id)arg1;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 name:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

