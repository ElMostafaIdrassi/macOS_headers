//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MKLocalSearchSection : NSObject
{
    BOOL _shouldInterleaveClientResults;
    BOOL _enforceServerResultsOrder;
    NSArray *_results;
    NSString *_title;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL enforceServerResultsOrder; // @synthesize enforceServerResultsOrder=_enforceServerResultsOrder;
@property(readonly, nonatomic) BOOL shouldInterleaveClientResults; // @synthesize shouldInterleaveClientResults=_shouldInterleaveClientResults;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
- (id)initWithResults:(id)arg1 title:(id)arg2 shouldInterleaveClientResults:(BOOL)arg3 enforceServerResultsOrder:(BOOL)arg4;

@end

