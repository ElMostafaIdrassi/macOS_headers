//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRKInternetDateFetching.h"
#import "NSURLSessionDataDelegate.h"

@class NSMutableDictionary, NSString, NSURLSession;

@interface CRKInternetDateProvider : NSObject <NSURLSessionDataDelegate, CRKInternetDateFetching>
{
    NSURLSession *_session;
    NSMutableDictionary *_completionHandlerTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *completionHandlerTable; // @synthesize completionHandlerTable=_completionHandlerTable;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void)callAndRemoveCompletionHandlerWithDate:(id)arg1 error:(id)arg2 task:(id)arg3;
- (void)storeCompletionHandler:(CDUnknownBlockType)arg1 forTask:(id)arg2;
- (void)internetDateRequestDidReceiveTask:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)fetchInternetDateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

