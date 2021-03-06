//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class CKRecordZoneID, HMBLocalZone, HMDNetworkRouterFirewallRuleCloudZone, NSMutableSet;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorZoneInfo : HMFObject
{
    BOOL _zoneHasChanged;
    BOOL _zoneWasDeleted;
    BOOL _ignoreChangeToken;
    CKRecordZoneID *_zoneID;
    NSMutableSet *_recordIDs;
    HMDNetworkRouterFirewallRuleCloudZone *_cloudZone;
    HMBLocalZone *_mirroredLocalZone;
}

@property(retain, nonatomic) HMBLocalZone *mirroredLocalZone; // @synthesize mirroredLocalZone=_mirroredLocalZone;
@property(retain, nonatomic) HMDNetworkRouterFirewallRuleCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(nonatomic) BOOL ignoreChangeToken; // @synthesize ignoreChangeToken=_ignoreChangeToken;
@property(nonatomic) BOOL zoneWasDeleted; // @synthesize zoneWasDeleted=_zoneWasDeleted;
@property(nonatomic) BOOL zoneHasChanged; // @synthesize zoneHasChanged=_zoneHasChanged;
@property(readonly, nonatomic) NSMutableSet *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(readonly, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (void).cxx_destruct;
- (id)initWithZoneID:(id)arg1;

@end

