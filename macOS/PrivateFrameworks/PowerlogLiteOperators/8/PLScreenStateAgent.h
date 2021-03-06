//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLAgent.h"

#import "FBSDisplayLayoutObserver.h"

@class FBSDisplayLayoutMonitor, NSString;

@interface PLScreenStateAgent : PLAgent <FBSDisplayLayoutObserver>
{
    FBSDisplayLayoutMonitor *_mainDisplayMonitor;
    FBSDisplayLayoutMonitor *_airPlayDisplayMonitor;
    FBSDisplayLayoutMonitor *_carPlayDisplayMonitor;
}

+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryAggregateDefinitionForeground;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardScreenState;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointBacklightEvent;
+ (id)entryEventPointDefinitions;
+ (void)load;
@property(retain) FBSDisplayLayoutMonitor *carPlayDisplayMonitor; // @synthesize carPlayDisplayMonitor=_carPlayDisplayMonitor;
@property(retain) FBSDisplayLayoutMonitor *airPlayDisplayMonitor; // @synthesize airPlayDisplayMonitor=_airPlayDisplayMonitor;
@property(retain) FBSDisplayLayoutMonitor *mainDisplayMonitor; // @synthesize mainDisplayMonitor=_mainDisplayMonitor;
- (void).cxx_destruct;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)accountWithLayoutEntries:(id)arg1;
- (void)createAirPlayWiFiAccountingEvent:(id)arg1;
- (void)createCarPlayAccountingEvents:(id)arg1;
- (void)logEventPointMainBacklightEvent:(id)arg1 withContext:(id)arg2;
- (void)logEventForwardAirPlayScreenState:(id)arg1;
- (void)logEventForwardCarScreenState:(id)arg1;
- (void)logEventForwardMainScreenState:(id)arg1;
- (void)log;
- (void)dealloc;
- (void)initOperatorDependancies;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

