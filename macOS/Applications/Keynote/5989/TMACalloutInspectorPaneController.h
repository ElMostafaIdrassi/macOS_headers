//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMALayoutInspectingInspectorPaneController.h"

@class NSStepper, NSTextField;

@interface TMACalloutInspectorPaneController : TMALayoutInspectingInspectorPaneController
{
    NSStepper *_calloutTailSizeStepper;
    NSStepper *_calloutTailPositionXStepper;
    NSStepper *_calloutTailPositionYStepper;
    NSTextField *_cornerRadiusLabel;
    NSTextField *_tailWidthLabel;
    NSTextField *_anchorLabel;
    NSTextField *_xLabel;
    NSTextField *_yLabel;
    NSTextField *_xField;
    NSTextField *_yField;
    NSTextField *_radiusField;
    NSTextField *_tailWidthField;
}

@property(nonatomic) NSTextField *tailWidthField; // @synthesize tailWidthField=_tailWidthField;
@property(nonatomic) NSTextField *radiusField; // @synthesize radiusField=_radiusField;
@property(nonatomic) NSTextField *yField; // @synthesize yField=_yField;
@property(nonatomic) NSTextField *xField; // @synthesize xField=_xField;
@property(nonatomic) NSTextField *yLabel; // @synthesize yLabel=_yLabel;
@property(nonatomic) NSTextField *xLabel; // @synthesize xLabel=_xLabel;
@property(nonatomic) NSTextField *anchorLabel; // @synthesize anchorLabel=_anchorLabel;
@property(nonatomic) NSTextField *tailWidthLabel; // @synthesize tailWidthLabel=_tailWidthLabel;
@property(nonatomic) NSTextField *cornerRadiusLabel; // @synthesize cornerRadiusLabel=_cornerRadiusLabel;
@property(nonatomic) NSStepper *calloutTailPositionYStepper; // @synthesize calloutTailPositionYStepper=_calloutTailPositionYStepper;
@property(nonatomic) NSStepper *calloutTailPositionXStepper; // @synthesize calloutTailPositionXStepper=_calloutTailPositionXStepper;
@property(nonatomic) NSStepper *calloutTailSizeStepper; // @synthesize calloutTailSizeStepper=_calloutTailSizeStepper;
- (void)dealloc;
- (void)loadView;
- (id)nibName;
- (id)keyPathForLayouts;

@end

