//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOURLConnectionSession;

@interface GEOURLSessionConnection : NSObject
{
    struct _CFURLConnection *_cfConnection;
    id _delegate;
    GEOURLConnectionSession *_connectionSession;
}

- (void)connectionDidTerminate;
- (void)connectionDidFailWithError:(id)arg1;
- (void)connectionDidFinishLoading;
- (void)connectionDidReceiveData:(id)arg1;
- (void)connectionDidReceiveResponse:(struct _CFURLResponse *)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithCFRequest:(struct _CFURLRequest *)arg1 delegate:(id)arg2 usingSession:(id)arg3;

@end

