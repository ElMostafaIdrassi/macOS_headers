//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDEventModel.h>

@class NSArray, NSNumber, NSString;

@interface HMDPresenceEventModel : HMDEventModel
{
}

+ (id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 message:(id)arg4;
+ (id)properties;

// Remaining properties
@property(retain, nonatomic) NSNumber *activation; // @dynamic activation;
@property(retain, nonatomic) NSString *presenceType; // @dynamic presenceType;
@property(retain, nonatomic) NSArray *users; // @dynamic users;

@end

