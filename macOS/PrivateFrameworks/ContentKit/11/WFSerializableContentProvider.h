//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WFSerializableContentProvider : NSObject
{
    NSMutableDictionary *_entriesForClassNames;
}

+ (id)sharedProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *entriesForClassNames; // @synthesize entriesForClassNames=_entriesForClassNames;
- (void)registerSerializableContentClasses;
- (id)entryConsideringSuperclassesForClass:(Class)arg1;
- (id)objectOfClass:(Class)arg1 withSerializedRepresentation:(id)arg2;
- (id)serializedRepresentationForObject:(id)arg1;
- (id)init;

@end

