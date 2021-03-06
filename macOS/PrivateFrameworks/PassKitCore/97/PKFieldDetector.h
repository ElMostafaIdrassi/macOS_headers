//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NFFieldDetectSessionDelegate.h"
#import "NFLoyaltyAndPaymentSessionDelegate.h"

@class NFFieldDetectSession, NFLoyaltyAndPaymentSession, NSHashTable, NSObject<NFSession>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, PKFieldProperties;

@interface PKFieldDetector : NSObject <NFFieldDetectSessionDelegate, NFLoyaltyAndPaymentSessionDelegate>
{
    NFFieldDetectSession *_fieldDetectSession;
    unsigned long long _fieldDetectSessionRetryCount;
    BOOL _fieldDetectSessionRequested;
    BOOL _fieldPresent;
    PKFieldProperties *_fieldPropertiesToLookup;
    NFLoyaltyAndPaymentSession *_fieldPropertiesLookupSession;
    NSObject<NFSession> *_fieldPropertiesLookupSessionHandle;
    NSObject<OS_dispatch_source> *_fieldPropertiesLookupTimer;
    unsigned long long _fieldPropertieslookupSynchronizer;
    struct os_unfair_lock_s _lock;
    NSHashTable *_observers;
    PKFieldProperties *_fieldProperties;
    NSObject<OS_dispatch_queue> *_fieldDetectorSerialQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    id <PKFieldDetectorDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_endFieldPropertiesLookup;
- (void)_endLookupAndNotifyForFieldProperties:(id)arg1;
- (void)_startLookupForFieldProperties:(id)arg1;
- (void)_startFieldDetectSession;
- (void)_restartFieldDetectSession;
@property(nonatomic) __weak id <PKFieldDetectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak PKFieldProperties *fieldProperties;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)setPersistentFieldDetectionEnabled:(BOOL)arg1;
- (void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)arg1;
- (void)loyaltyAndPaymentSession:(id)arg1 didPerformValueAddedServiceTransactions:(id)arg2;
- (void)fieldDetectSessionDidEndUnexpectedly:(id)arg1;
- (void)fieldDetectSessionDidExitField:(id)arg1;
- (void)fieldDetectSession:(id)arg1 didEnterFieldWithNotification:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

