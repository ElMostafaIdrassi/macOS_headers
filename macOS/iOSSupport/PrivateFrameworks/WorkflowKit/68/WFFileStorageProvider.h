//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFRecordStorageProvider-Protocol.h>

@class NSString;

@interface WFFileStorageProvider : NSObject <WFRecordStorageProvider>
{
}

+ (id)sharedProvider;
- (id)fileWithDescriptor:(id)arg1 error:(id *)arg2;
- (BOOL)reloadRecord:(id)arg1 withDescriptor:(id)arg2 error:(id *)arg3;
- (BOOL)saveRecord:(id)arg1 withDescriptor:(id)arg2 error:(id *)arg3;
- (id)recordWithDescriptor:(id)arg1 properties:(id)arg2 error:(id *)arg3;
- (id)recordWithDescriptor:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

