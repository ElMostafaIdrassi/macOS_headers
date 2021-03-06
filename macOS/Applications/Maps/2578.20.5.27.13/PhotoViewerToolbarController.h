//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSToolbarDelegate-Protocol.h"

@class MKMapItem, NSMenuToolbarItem, NSString, NSToolbar, NSToolbarItem;
@protocol PhotoViewerToolbarControllerActionHandling;

__attribute__((visibility("hidden")))
@interface PhotoViewerToolbarController : NSObject <NSToolbarDelegate>
{
    MKMapItem *_mapItem;
    NSToolbarItem *_leftScrollItem;
    NSToolbarItem *_rightScrollItem;
    NSMenuToolbarItem *_reportAnIssueItem;
    NSToolbar *_toolbar;
    long long _context;
    id <PhotoViewerToolbarControllerActionHandling> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PhotoViewerToolbarControllerActionHandling> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long context; // @synthesize context=_context;
@property(readonly, nonatomic) NSToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic, getter=isRightScrollButtonEnabled) BOOL rightScrollButtonEnabled;
@property(nonatomic, getter=isLeftScrollButtonEnabled) BOOL leftScrollButtonEnabled;
@property(readonly, nonatomic) BOOL shouldShowPhotoThumbnailFeed;
@property(readonly, nonatomic) BOOL shouldShowAddPhotoButton;
@property(readonly, nonatomic) BOOL shouldShowReportAnIssue;
- (id)_allowedToolbarIdentifiers;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (void)_morePhotosButtonTapped;
- (void)_rightButtonTapped;
- (void)_leftButtonTapped;
- (void)_addPhotoTapped;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
@property(readonly, nonatomic) NSMenuToolbarItem *reportAnIssueItem; // @synthesize reportAnIssueItem=_reportAnIssueItem;
- (id)initWithMapItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

