//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSURL, VSOptional;

__attribute__((visibility("hidden")))
@interface VSFileReadOperation : VSAsyncOperation
{
    NSURL *_source;
    VSOptional *_result;
}

@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(copy, nonatomic) NSURL *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;

@end

