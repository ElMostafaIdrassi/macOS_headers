//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _NSDatePickerFieldElementData : NSObject
{
    int _element;
    NSString *_stringValue;
    NSString *_dateFormat;
    struct CGRect _frame;
    struct CGRect _textAreaRect;
}

@property struct CGRect textAreaRect; // @synthesize textAreaRect=_textAreaRect;
@property int element; // @synthesize element=_element;
@property(retain) NSString *dateFormat; // @synthesize dateFormat=_dateFormat;
@property(copy) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property struct CGRect frame; // @synthesize frame=_frame;
- (void)dealloc;

@end

