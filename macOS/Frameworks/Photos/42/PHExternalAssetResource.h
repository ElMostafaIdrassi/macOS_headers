//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHCPLAssetResource.h"

@class NSData, NSString, NSURL, PHAssetResourceCreationOptions;

@interface PHExternalAssetResource : NSObject <PHCPLAssetResource>
{
    BOOL _duplicateAllowsReadAccess;
    BOOL _isLibraryAssetResource;
    long long _resourceType;
    PHAssetResourceCreationOptions *_creationOptions;
    unsigned long long _cplResourceType;
    NSData *_data;
    NSURL *_fileURL;
    long long _pixelWidth;
    long long _pixelHeight;
}

+ (id)assetResourceForDuplicatingAssetResource:(id)arg1 asData:(BOOL)arg2 error:(id *)arg3;
+ (unsigned long long)probableCPLResourceTypeFromAssetResourceType:(long long)arg1;
@property(nonatomic) long long pixelHeight; // @synthesize pixelHeight=_pixelHeight;
@property(nonatomic) long long pixelWidth; // @synthesize pixelWidth=_pixelWidth;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) BOOL isLibraryAssetResource; // @synthesize isLibraryAssetResource=_isLibraryAssetResource;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) unsigned long long cplResourceType; // @synthesize cplResourceType=_cplResourceType;
@property(copy, nonatomic) PHAssetResourceCreationOptions *creationOptions; // @synthesize creationOptions=_creationOptions;
@property(readonly, nonatomic) long long type; // @synthesize type=_resourceType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uniformTypeIdentifier;
@property(readonly, nonatomic) NSString *originalFilename;
@property(nonatomic, setter=_setDuplicateAllowsReadAccess:) BOOL duplicateAllowsReadAccess; // @synthesize duplicateAllowsReadAccess=_duplicateAllowsReadAccess;
- (id)propertyListRepresentation;
- (id)init;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)initWithResourceType:(long long)arg1;

@end

