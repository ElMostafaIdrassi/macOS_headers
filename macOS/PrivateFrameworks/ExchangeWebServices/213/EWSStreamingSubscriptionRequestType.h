//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface EWSStreamingSubscriptionRequestType : NSObject
{
    NSArray *_FolderIds;
    NSArray *_EventTypes;
    BOOL _SubscribeToAllFolders;
    BOOL _SubscribeToAllFoldersIsSpecified;
}

+ (id)definition;
@property(copy, nonatomic) NSArray *EventTypes; // @synthesize EventTypes=_EventTypes;
@property(copy, nonatomic) NSArray *FolderIds; // @synthesize FolderIds=_FolderIds;
@property(nonatomic) BOOL SubscribeToAllFoldersIsSpecified; // @synthesize SubscribeToAllFoldersIsSpecified=_SubscribeToAllFoldersIsSpecified;
@property(nonatomic) BOOL SubscribeToAllFolders; // @synthesize SubscribeToAllFolders=_SubscribeToAllFolders;
- (void)dealloc;
- (id)description;

@end

