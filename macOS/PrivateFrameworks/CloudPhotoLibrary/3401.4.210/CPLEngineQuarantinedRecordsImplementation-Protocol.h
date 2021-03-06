//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorageImplementation-Protocol.h>

@class CPLScopedIdentifier, NSString;

@protocol CPLEngineQuarantinedRecordsImplementation <CPLEngineStorageImplementation>
- (BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (unsigned long long)countOfQuarantinedRecords;
- (BOOL)isRecordWithScopedIdentifierQuarantined:(CPLScopedIdentifier *)arg1;
- (BOOL)removeQuarantinedRecordsWithScopedIdentifier:(CPLScopedIdentifier *)arg1 removed:(char *)arg2 error:(id *)arg3;
- (BOOL)addQuarantinedRecordsWithScopedIdentifier:(CPLScopedIdentifier *)arg1 reason:(NSString *)arg2 error:(id *)arg3;
@end

