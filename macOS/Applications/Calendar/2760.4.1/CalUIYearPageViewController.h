//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ISCViewController.h"

#import "CalUIDateTitleHUDDelegate-Protocol.h"
#import "NSAnimationDelegate-Protocol.h"

@class CalDateRange, CalUIDateTitleHUD, CalUIYearViewController, NSString;

@interface CalUIYearPageViewController : ISCViewController <CalUIDateTitleHUDDelegate, NSAnimationDelegate>
{
    CalUIYearViewController *_yearViewController;
    CalDateRange *_dateRange;
    CalUIDateTitleHUD *_dateTitleHUD;
}

- (void).cxx_destruct;
@property(retain) CalUIDateTitleHUD *dateTitleHUD; // @synthesize dateTitleHUD=_dateTitleHUD;
@property(retain) CalDateRange *dateRange; // @synthesize dateRange=_dateRange;
@property __weak CalUIYearViewController *yearViewController; // @synthesize yearViewController=_yearViewController;
- (double)topInsetFromAnchor;
- (double)grayWidth;
- (id)attributedDateTitle;
- (void)updateTitle;
- (void)updateSearchResults;
- (void)updateHeatmap;
- (void)redisplay;
- (void)realDateDidChange;
- (void)overlayCalendarChanged;
- (void)contentAreaDidEndResizeLive:(BOOL)arg1;
- (void)contentAreaWillBeginResizeLive:(BOOL)arg1;
- (void)setRepresentedObject:(id)arg1;
- (BOOL)isVisibleViewController;
- (id)monthViews;
- (id)startDate;
- (void)dealloc;
- (void)loadView;
- (id)initWithYearViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

