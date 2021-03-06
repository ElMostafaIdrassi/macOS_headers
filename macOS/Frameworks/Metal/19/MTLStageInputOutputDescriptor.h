//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MTLAttributeDescriptorArray, MTLBufferLayoutDescriptorArray;

@interface MTLStageInputOutputDescriptor : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (id)stageInputOutputDescriptor;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)reset;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly) MTLAttributeDescriptorArray *attributes; // @dynamic attributes;
@property(nonatomic) unsigned long long indexBufferIndex; // @dynamic indexBufferIndex;
@property(nonatomic) unsigned long long indexType; // @dynamic indexType;
@property(readonly) MTLBufferLayoutDescriptorArray *layouts; // @dynamic layouts;

@end

