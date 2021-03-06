//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitMacHelper/UINSToolbarItem.h>

#import "UINSSegmentedControlToolbarItem.h"

@class NSArray, NSMutableDictionary, NSSegmentedControl, NSString;

__attribute__((visibility("hidden")))
@interface UINSSegmentedControlToolbarItem : UINSToolbarItem <UINSSegmentedControlToolbarItem>
{
    NSMutableDictionary *_segmentsToMenu;
    BOOL _enabled;
    NSArray *_segmentTitles;
    NSArray *_segmentHelperImages;
    NSArray *_segmentImageNames;
    long long _selectedSegment;
    id <UINSToolbarItemSelectedIndexPropertyObserver> _propertyObserver;
    NSArray *_accessibilityInfoSegments;
}

@property(copy, nonatomic) NSArray *accessibilityInfoSegments; // @synthesize accessibilityInfoSegments=_accessibilityInfoSegments;
@property(nonatomic) __weak id <UINSToolbarItemSelectedIndexPropertyObserver> propertyObserver; // @synthesize propertyObserver=_propertyObserver;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) long long selectedSegment; // @synthesize selectedSegment=_selectedSegment;
@property(copy, nonatomic) NSArray *segmentImageNames; // @synthesize segmentImageNames=_segmentImageNames;
@property(copy, nonatomic) NSArray *segmentHelperImages; // @synthesize segmentHelperImages=_segmentHelperImages;
@property(copy, nonatomic) NSArray *segmentTitles; // @synthesize segmentTitles=_segmentTitles;
- (void).cxx_destruct;
- (void)action:(id)arg1;
- (void)prepareItem;
@property(nonatomic) long long trackingMode;
- (id)menuForSegment:(long long)arg1;
- (void)setMenu:(id)arg1 forSegment:(long long)arg2;
@property(readonly) NSSegmentedControl *_segmentedControl;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(copy, nonatomic) id <UINSAccessibilityInfo> accessibilityInfo;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *label;

@end

