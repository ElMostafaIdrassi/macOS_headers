//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

@class NSString;

@interface GHGitLFSProgress : MTLModel
{
    NSString *_fileName;
    long long _bytesReceived;
    long long _totalBytes;
    unsigned long long _fileIndex;
    unsigned long long _fileCount;
}

@property(readonly, nonatomic) unsigned long long fileCount; // @synthesize fileCount=_fileCount;
@property(readonly, nonatomic) unsigned long long fileIndex; // @synthesize fileIndex=_fileIndex;
@property(readonly, nonatomic) long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(readonly, nonatomic) long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(readonly, copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double progress;
- (id)initWithFileName:(id)arg1 fileIndex:(unsigned long long)arg2 fileCount:(unsigned long long)arg3 bytesReceived:(long long)arg4 totalBytes:(long long)arg5;

@end

