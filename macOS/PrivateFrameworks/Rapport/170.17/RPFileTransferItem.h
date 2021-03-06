//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface RPFileTransferItem : NSObject
{
    long long _fileSize;
    CDUnknownBlockType _completionHandler;
    NSString *_filename;
    NSURL *_itemURL;
    NSDictionary *_metadata;
    NSData *_sha256HashData;
}

@property(copy, nonatomic) NSData *sha256HashData; // @synthesize sha256HashData=_sha256HashData;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSURL *itemURL; // @synthesize itemURL=_itemURL;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
- (void).cxx_destruct;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (id)init;

@end

