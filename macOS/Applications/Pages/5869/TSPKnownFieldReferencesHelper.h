//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TSPLazyReferenceArray;

@interface TSPKnownFieldReferencesHelper : NSObject
{
    struct RepeatedField<long long> _objectReferences;
    struct RepeatedField<long long> _dataReferences;
    TSPLazyReferenceArray *_strongObjects;
    TSPLazyReferenceArray *_weakObjects;
    NSArray *_datas;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)processFieldsFromMessage:(const struct Message *)arg1 messageDescriptor:(const struct Descriptor *)arg2 reflection:(const struct Reflection *)arg3;
- (void)processFieldDescriptor:(const struct FieldDescriptor *)arg1 message:(const struct Message *)arg2 reflection:(const struct Reflection *)arg3;
- (id)initWithFieldDescriptor:(const struct FieldDescriptor *)arg1 message:(const struct Message *)arg2 reflection:(const struct Reflection *)arg3;

@end

