//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID;

__attribute__((visibility("hidden")))
@interface SHKBlockUUIDTuple : NSObject
{
    CDUnknownBlockType _block;
    NSUUID *_uuid;
}

@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBlock:(CDUnknownBlockType)arg1 UUID:(id)arg2;

@end

