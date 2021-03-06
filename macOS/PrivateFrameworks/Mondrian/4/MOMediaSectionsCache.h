//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MOLRUCache;

@interface MOMediaSectionsCache : NSObject
{
    long long _memoryStatus;
    id _memoryPressureMonitor;
    MOLRUCache *_mediaSectionsCache;
    unsigned long long _minCacheCount;
    unsigned long long _maxCacheCount;
}

@property(nonatomic) unsigned long long maxCacheCount; // @synthesize maxCacheCount=_maxCacheCount;
@property(nonatomic) unsigned long long minCacheCount; // @synthesize minCacheCount=_minCacheCount;
- (void).cxx_destruct;
- (void)removeAllMediaSections;
- (void)removeMediaSectionAtIndex:(unsigned long long)arg1;
- (id)mediaSectionAtIndex:(unsigned long long)arg1;
- (void)setMediaSection:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_memoryPressureHandler;
- (void)dealloc;
- (id)init;

@end

