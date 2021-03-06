//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface DiskProperties : NSObject
{
    BOOL _isFileSystemAPFS;
    BOOL _isInternal;
    BOOL _isReadOnly;
    BOOL _isNetwork;
    BOOL _isNoBrowse;
    BOOL _isScannableAsAdmin;
    BOOL _isEncrypted;
    unsigned long long _diskType;
    unsigned long long _hardDiskType;
    NSString *_uniqueID;
    NSString *_partitionBsdName;
    NSArray *_parentDisksBsdNames;
    NSURL *_networkAddress;
    NSString *_mountPath;
    NSString *_fileSystemName;
    NSString *_textDescription;
}

+ (id)diskPropertiesWithPath:(id)arg1;
@property(retain, nonatomic) NSString *textDescription; // @synthesize textDescription=_textDescription;
@property(nonatomic) BOOL isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property(nonatomic) BOOL isScannableAsAdmin; // @synthesize isScannableAsAdmin=_isScannableAsAdmin;
@property(nonatomic) BOOL isNoBrowse; // @synthesize isNoBrowse=_isNoBrowse;
@property(nonatomic) BOOL isNetwork; // @synthesize isNetwork=_isNetwork;
@property(nonatomic) BOOL isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property(nonatomic) BOOL isInternal; // @synthesize isInternal=_isInternal;
@property(nonatomic) BOOL isFileSystemAPFS; // @synthesize isFileSystemAPFS=_isFileSystemAPFS;
@property(retain, nonatomic) NSString *fileSystemName; // @synthesize fileSystemName=_fileSystemName;
@property(retain, nonatomic) NSString *mountPath; // @synthesize mountPath=_mountPath;
@property(retain, nonatomic) NSURL *networkAddress; // @synthesize networkAddress=_networkAddress;
@property(retain, nonatomic) NSArray *parentDisksBsdNames; // @synthesize parentDisksBsdNames=_parentDisksBsdNames;
@property(retain, nonatomic) NSString *partitionBsdName; // @synthesize partitionBsdName=_partitionBsdName;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) unsigned long long hardDiskType; // @synthesize hardDiskType=_hardDiskType;
@property(nonatomic) unsigned long long diskType; // @synthesize diskType=_diskType;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL supportsOnlySerialScan;
@property(readonly, nonatomic) BOOL supportsParallelScan;
@property(readonly, nonatomic) BOOL supportsPhysicalSize;
@property(readonly, nonatomic) BOOL supportsPurgeable;
- (id)formatTextDescriptionWithFirstSlice:(BOOL)arg1;

@end

