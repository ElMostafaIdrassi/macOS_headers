//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KHDBLockedDictionary;

@interface KHDBUuidMapper : NSObject
{
    KHDBLockedDictionary *m_uuidMap;
    BOOL m_forceUuidMapping;
}

- (void)setForceUuidMapping:(BOOL)arg1;
- (BOOL)forceUuidMapping;
- (id)convertUuids:(id)arg1;
- (id)convertUuid:(id)arg1;
- (void)addMappingForUuid:(id)arg1 toUuid:(id)arg2;
- (void)clear;
- (id)uuidMapIncludingOldUuids;
- (id)uuidMap;
- (void)dealloc;
- (id)init;

@end

