//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HVURLHandler.h"

@class HVHelpURL, NSDictionary, NSMutableDictionary;

@interface HVHelpURLHandler : HVURLHandler
{
    NSMutableDictionary *_results;
    BOOL _hasGivenProcessedURL;
}

+ (id)handlerWithURL:(id)arg1;
@property(readonly) NSDictionary *results; // @synthesize results=_results;
- (void).cxx_destruct;
@property(readonly) __weak HVHelpURL *helpURL; // @dynamic helpURL;
- (id)initWithURL:(id)arg1;

@end

