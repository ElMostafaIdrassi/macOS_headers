//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GQDNameMappable-Protocol.h"
#import "ICExportable-Protocol.h"

@class NSString;

@interface GQDTDateFormat : NSObject <ICExportable, GQDNameMappable>
{
    struct __CFString *mFormatString;
    struct __CFString *mFormatName;
}

+ (const struct StateSpec *)stateForReading;
- (BOOL)isEqualToDateFormat:(id)arg1;
- (struct __CFString *)formatName;
- (struct __CFString *)formatString;
- (void)dealloc;
- (id)initWithFormatString:(struct __CFString *)arg1;
- (id)initWithFormatStringAndName:(struct __CFString *)arg1 name:(struct __CFString *)arg2;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

