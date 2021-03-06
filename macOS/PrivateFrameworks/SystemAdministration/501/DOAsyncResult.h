//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DOAsyncResultProtocol.h"

@interface DOAsyncResult : NSObject <DOAsyncResultProtocol>
{
    BOOL mDone;
    long long mResult;
    CDUnknownBlockType mCompletionBlock;
    void *mContext;
}

@property(readonly) void *context; // @synthesize context=mContext;
@property(readonly) long long result; // @synthesize result=mResult;
@property(readonly) BOOL done; // @synthesize done=mDone;
- (void)waitForResult;
- (oneway void)setDoneWithResult:(long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithBlock:(CDUnknownBlockType)arg1 context:(void *)arg2;

@end

