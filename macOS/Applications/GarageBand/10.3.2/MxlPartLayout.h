//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MxlMeasureLayout.h"

@interface MxlPartLayout : MxlMeasureLayout
{
    BOOL measureNumbering;
    BOOL hasPageBreak;
}

@property BOOL hasPageBreak; // @synthesize hasPageBreak;
@property BOOL measureNumbering; // @synthesize measureNumbering;
- (id)description;
- (void)xmlDebugPrintElem:(id)arg1 resolution:(const struct ScResolution *)arg2;
- (void)xmlCreatePartLayoutData:(id)arg1;
- (void)xmlCreateStaffLayoutData:(id)arg1;
- (BOOL)hasData;
- (void)dealloc;
- (id)init;

@end

