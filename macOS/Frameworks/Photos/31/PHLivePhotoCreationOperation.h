//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSArray;

@interface PHLivePhotoCreationOperation : NSOperation
{
    long long _contentMode;
    NSArray *_resourceURLs;
    CDUnknownBlockType _resultHandler;
    struct CGSize _targetSize;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(readonly, copy, nonatomic) NSArray *resourceURLs; // @synthesize resourceURLs=_resourceURLs;
@property(readonly, nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
- (id)_createImageOnlyLivePhotoWithImageURL:(id)arg1;
- (void)main;
- (id)initWithResourceURLs:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 resultHandler:(CDUnknownBlockType)arg4;

@end

