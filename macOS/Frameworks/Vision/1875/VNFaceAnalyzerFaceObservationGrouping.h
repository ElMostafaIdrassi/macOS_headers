//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerFaceObservationGrouping : NSObject
{
    NSMutableDictionary *_observationGroupsToRequestMapping;
}

- (void).cxx_destruct;
- (id)requestsForGroup:(id)arg1;
- (id)addToGroupingsRequest:(id)arg1 withFaceObservations:(id)arg2;

@end

