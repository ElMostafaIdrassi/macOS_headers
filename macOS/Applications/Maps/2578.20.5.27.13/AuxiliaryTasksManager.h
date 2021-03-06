//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PlatformController, RoutePlanningSessionRouteLoadedNotifier;

__attribute__((visibility("hidden")))
@interface AuxiliaryTasksManager : NSObject
{
    NSMutableArray *_auxiliaryTasks;
    PlatformController *_platformController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PlatformController *platformController; // @synthesize platformController=_platformController;
@property(retain, nonatomic) NSMutableArray *auxiliaryTasks; // @synthesize auxiliaryTasks=_auxiliaryTasks;
- (id)auxilaryTaskForClass:(Class)arg1;
- (void)addTasks:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *tasks;
- (id)initWithPlatformController:(id)arg1;
@property(readonly, nonatomic) RoutePlanningSessionRouteLoadedNotifier *routePlanningSessionRouteLoadedNotifier;

@end

