//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSValue;

@interface AXValueWrapper : NSObject
{
    struct __AXValue *_value;
}

+ (struct __AXValue *)createAXValueRefFromNSValue:(id)arg1;
+ (id)wrapperWithNSValue:(id)arg1;
+ (id)wrapperWithAXValueRef:(struct __AXValue *)arg1;
@property(readonly, nonatomic) NSValue *value;
- (void)setAXValue:(struct __AXValue *)arg1;
@property(readonly, nonatomic) struct __AXValue *AXValue; // @dynamic AXValue;
- (void)dealloc;
- (id)initWithNSValue:(id)arg1;
- (id)initWithAXValueRef:(struct __AXValue *)arg1;

@end

