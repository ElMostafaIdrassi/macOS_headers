//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface DEWorkQueues : NSObject
{
    NSMutableDictionary *_queues;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *queues; // @synthesize queues=_queues;
- (void)advance:(id)arg1;
- (void)on:(id)arg1 enqueue:(CDUnknownBlockType)arg2;
- (id)init;

@end

