//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ECEventObserver : NSObject
{
    CDUnknownBlockType _block;
    unsigned long long _stage;
    id _session;
    long long _type;
}

@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long stage; // @synthesize stage=_stage;
- (void).cxx_destruct;
- (void)invalidate;
- (void)perform:(id)arg1;
- (id)initWithSession:(id)arg1 stage:(unsigned long long)arg2 type:(long long)arg3 andBlock:(CDUnknownBlockType)arg4;

@end

