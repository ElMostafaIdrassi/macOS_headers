//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAChartInspectorPaneController.h"

@class NSButton, NSTextField;

@interface TMAChartRoundedCornersInspectorPaneController : TMAChartInspectorPaneController
{
    NSTextField *_radiusField;
    NSButton *_cornersOnlyButton;
}

+ (long long)defaultDisclosureState;
+ (id)disclosureButtonTitleForEditingState:(id)arg1;
+ (unsigned long long)sortOrder;
+ (id)chartEditorProxyVisibilityKey;
+ (id)tabIdentifier;
+ (id)nibName;
@property(retain, nonatomic) NSButton *cornersOnlyButton; // @synthesize cornersOnlyButton=_cornersOnlyButton;
@property(retain, nonatomic) NSTextField *radiusField; // @synthesize radiusField=_radiusField;
- (void).cxx_destruct;
- (BOOL)needsPaneDivider;
- (void)viewDidLoad;

@end

