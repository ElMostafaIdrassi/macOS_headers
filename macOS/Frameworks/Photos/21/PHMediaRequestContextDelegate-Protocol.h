//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PHImageRequest, PHMediaRequestContext;

@protocol PHMediaRequestContextDelegate <NSObject>
- (void)mediaRequestContextDidFinish:(PHMediaRequestContext *)arg1;
- (void)mediaRequestContext:(PHMediaRequestContext *)arg1 isQueryingCacheForRequest:(PHImageRequest *)arg2 didWait:(char *)arg3 didFindImage:(char *)arg4 resultHandler:(void (^)(struct CGImage *, BOOL, NSError *))arg5;
@end

