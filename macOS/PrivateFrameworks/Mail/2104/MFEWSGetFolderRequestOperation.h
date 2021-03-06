//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mail/MFEWSRequestOperation.h>

@class NSArray;

@interface MFEWSGetFolderRequestOperation : MFEWSRequestOperation
{
    BOOL _fetchEntryIDs;
    NSArray *_EWSFolderIds;
}

+ (Class)classForResponse;
@property(readonly, copy, nonatomic) NSArray *EWSFolderIds; // @synthesize EWSFolderIds=_EWSFolderIds;
@property(readonly, nonatomic) BOOL fetchEntryIDs; // @synthesize fetchEntryIDs=_fetchEntryIDs;
- (void).cxx_destruct;
- (id)prepareRequest;
- (BOOL)isFolderRequest;
- (id)activityString;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (id)initWithEWSFolderIds:(id)arg1 gateway:(id)arg2 errorHandler:(id)arg3 fetchEntryIDs:(BOOL)arg4;

@end

