//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/CalUILayerBackedView.h>

@class CalUIDayViewGadgetController, NSArray, NSLayoutConstraint, NSTextField;

@interface CalUIDayViewAllDayView : CalUILayerBackedView
{
    BOOL _hasNewOccurrenceViews;
    id <CalUIDayViewGadgetDataSource> _dataSource;
    CalUIDayViewGadgetController *_controller;
    id <CalUIBoxOccurrenceContentDelegate> _boxOccurrenceContentDelegate;
    NSArray *_occurrenceViews;
    NSTextField *_allDayLabel;
    NSLayoutConstraint *_noEventsConstraint;
    id <CalUIDayViewGadgetAppearanceDelegate> _appearanceDelegate;
    NSLayoutConstraint *_labelVerticalAlignmentConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *labelVerticalAlignmentConstraint; // @synthesize labelVerticalAlignmentConstraint=_labelVerticalAlignmentConstraint;
@property(nonatomic) __weak id <CalUIDayViewGadgetAppearanceDelegate> appearanceDelegate; // @synthesize appearanceDelegate=_appearanceDelegate;
@property BOOL hasNewOccurrenceViews; // @synthesize hasNewOccurrenceViews=_hasNewOccurrenceViews;
@property(retain) NSLayoutConstraint *noEventsConstraint; // @synthesize noEventsConstraint=_noEventsConstraint;
@property(readonly) NSTextField *allDayLabel; // @synthesize allDayLabel=_allDayLabel;
@property(retain, nonatomic) NSArray *occurrenceViews; // @synthesize occurrenceViews=_occurrenceViews;
@property(nonatomic) __weak id <CalUIBoxOccurrenceContentDelegate> boxOccurrenceContentDelegate; // @synthesize boxOccurrenceContentDelegate=_boxOccurrenceContentDelegate;
@property(nonatomic) __weak CalUIDayViewGadgetController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak id <CalUIDayViewGadgetDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (double)horizontalInset;
- (double)bottomInset;
- (double)topInset;
- (double)insetBetweenEvents;
- (double)eventHeight;
- (void)alignAllDayLabelToFirstOccurrence;
- (void)updateConstraints;
- (void)dataChanged;
- (id)initWithFrame:(struct CGRect)arg1 appearanceDelegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)allowsVibrancy;

@end

