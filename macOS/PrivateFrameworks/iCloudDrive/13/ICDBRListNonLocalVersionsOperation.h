//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "ICDBRNonLocalVersionReceiving.h"

@class GSPermanentStorage, NSError, NSMutableArray, NSMutableDictionary, NSString, NSURL;

@interface ICDBRListNonLocalVersionsOperation : NSOperation <ICDBRNonLocalVersionReceiving>
{
    NSURL *_documentURL;
    NSMutableDictionary *_versionsByEtag;
    GSPermanentStorage *_versionsStore;
    BOOL _includeCachedVersions;
    BOOL _state;
    id <BRNonLocalVersionServiceV1><BRXPCAutomaticErrorProxy> _sender;
    CDUnknownBlockType _fetchingVersionsDoneBlock;
    BOOL _finished;
    BOOL _executing;
    NSMutableArray *_versions;
}

@property(copy, nonatomic) CDUnknownBlockType fetchingVersionsDoneBlock; // @synthesize fetchingVersionsDoneBlock=_fetchingVersionsDoneBlock;
@property(nonatomic) BOOL includeCachedVersions; // @synthesize includeCachedVersions=_includeCachedVersions;
@property(readonly, copy, nonatomic) NSMutableArray *versions; // @synthesize versions=_versions;
@property(nonatomic, getter=isExecuting) BOOL executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
- (void).cxx_destruct;
- (oneway void)newThumbnailsForVersionsWithEtags:(id)arg1;
- (oneway void)versionsDone;
- (oneway void)receivedNewVersions:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)main;
- (BOOL)_setupVersionStoreWithError:(id *)arg1;
- (BOOL)_advanceToState:(BOOL)arg1 result:(id)arg2 error:(id)arg3;
- (BOOL)__advanceToState:(BOOL)arg1 result:(id)arg2 error:(id)arg3;
- (BOOL)__finishIfCancelled;
- (void)cancel;
- (void)_senderInvalidate;
- (BOOL)isAsynchronous;
- (BOOL)isConcurrent;
- (void)dealloc;
- (id)initWithDocumentURL:(id)arg1;
@property(retain, nonatomic) NSError *error;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

