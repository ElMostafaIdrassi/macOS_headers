//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KNMacRecordingScrubberSliderCell, NSString;

@protocol KNMacScrubberSliderCellDelegate <NSObject>

@optional
- (void)sliderCellWillStopTracking:(KNMacRecordingScrubberSliderCell *)arg1;
- (void)sliderCellWillContinueTracking:(KNMacRecordingScrubberSliderCell *)arg1;
- (void)sliderCellWillStartTracking:(KNMacRecordingScrubberSliderCell *)arg1;
- (NSString *)trackingLabelStringForSliderCell:(KNMacRecordingScrubberSliderCell *)arg1;
@end

