//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>

@class NSError, NSManagedObjectID, NSObject, NSString, PHPerformChangesRequest, PHPhotoLibrary, PLPhotoLibrary;
@protocol OS_xpc_object, PLClientAuthorization;

@protocol PHChangeRequest <NSObject>
@property(readonly, nonatomic) NSString *clientName;
@property(readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly, nonatomic) NSString *managedEntityName;
- (BOOL)prepareForPhotoLibraryCheck:(PHPhotoLibrary *)arg1 error:(id *)arg2;
- (BOOL)prepareForServicePreflightCheck:(id *)arg1;
- (id)initWithXPCDict:(NSObject<OS_xpc_object> *)arg1 request:(PHPerformChangesRequest *)arg2 clientAuthorization:(id <PLClientAuthorization>)arg3;
- (void)encodeToXPCDict:(NSObject<OS_xpc_object> *)arg1;
- (id)initWithUUID:(NSString *)arg1 objectID:(NSManagedObjectID *)arg2;

@optional
- (void)changeFailedOnDaemonWithLibrary:(PLPhotoLibrary *)arg1 error:(NSError *)arg2;
- (void)changeFailedOnClientWithLibrary:(PLPhotoLibrary *)arg1 error:(NSError *)arg2;
@end

