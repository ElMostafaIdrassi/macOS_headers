//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface MPAVRoutingViewControllerUpdateDisplayedRoutesState : NSObject
{
    NSNumber *_version;
    NSArray *_oldRoutes;
    NSArray *_updatedRoutes;
    NSArray *_isEqualBoolsArray;
    NSArray *_isUpdatedBoolsArray;
}

@property(copy, nonatomic) NSArray *isUpdatedBoolsArray; // @synthesize isUpdatedBoolsArray=_isUpdatedBoolsArray;
@property(copy, nonatomic) NSArray *isEqualBoolsArray; // @synthesize isEqualBoolsArray=_isEqualBoolsArray;
@property(copy, nonatomic) NSArray *updatedRoutes; // @synthesize updatedRoutes=_updatedRoutes;
@property(copy, nonatomic) NSArray *oldRoutes; // @synthesize oldRoutes=_oldRoutes;
@property(copy, nonatomic) NSNumber *version; // @synthesize version=_version;
- (void).cxx_destruct;

@end

