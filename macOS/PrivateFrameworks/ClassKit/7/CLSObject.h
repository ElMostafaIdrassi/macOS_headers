//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLSGraphVertex.h"
#import "CLSRelationable.h"
#import "NSLocking.h"
#import "NSSecureCoding.h"

@class CLSDataStore, NSDate, NSMutableDictionary, NSString;

@interface CLSObject : NSObject <CLSRelationable, CLSGraphVertex, NSLocking, NSSecureCoding>
{
    BOOL _deleted;
    BOOL _modified;
    BOOL _enforceImmutablility;
    CLSDataStore *_dataStore;
    NSString *_parentObjectID;
    NSString *_appIdentifier;
    NSMutableDictionary *_childrenByID;
    CLSObject *_parent;
    struct os_unfair_recursive_lock_s _lock;
    BOOL _temporary;
    unsigned int _generation;
    NSDate *_dateCreated;
    NSDate *_dateLastModified;
    NSString *_objectID;
    NSDate *_dateExpires;
}

+ (id)dateFormatter;
+ (BOOL)supportsSecureCoding;
+ (id)relations;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *dateExpires; // @synthesize dateExpires=_dateExpires;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property unsigned int generation; // @synthesize generation=_generation;
@property(nonatomic, getter=isTemporary) BOOL temporary; // @synthesize temporary=_temporary;
@property(retain, nonatomic) NSDate *dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property(retain, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
- (id)ancestorOfClass:(Class)arg1;
- (long long)effectiveAuthorizationStatus;
- (id)dictionaryRepresentation;
- (BOOL)validateObject:(id *)arg1;
- (void)didSaveObject;
- (void)willSaveObject;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isModified) BOOL modified;
@property(nonatomic, getter=isDeleted) BOOL deleted;
- (void)enumerateTree:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSString *parentObjectID;
@property(copy, nonatomic) NSString *appIdentifier;
@property(nonatomic) __weak CLSObject *parent;
- (void)mergeWithObject:(id)arg1;
- (void)removeChild:(id)arg1 changedPropertyName:(id)arg2;
- (void)removeChild:(id)arg1;
- (void)_addChild:(id)arg1 lock:(BOOL)arg2;
- (void)_addChild:(id)arg1;
- (void)addChild:(id)arg1 changedPropertyName:(id)arg2;
- (void)addChild:(id)arg1;
- (void)enumerateChildren:(CDUnknownBlockType)arg1;
- (id)childrenPassingTest:(CDUnknownBlockType)arg1;
- (id)childrenOfClass:(Class)arg1;
@property(nonatomic) __weak CLSDataStore *dataStore;
@property(readonly, nonatomic) id vertexID;
- (void)unlock;
- (void)lock;
@property(nonatomic, getter=isImmutablilityEnforced) BOOL enforceImmutablility;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)init;
- (id)initWithDeletedObjectID:(id)arg1;
- (id)identity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

