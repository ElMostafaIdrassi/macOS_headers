//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PAImaging/PAImageAssetClient.h>

@interface PAThumbnailImageAssetClient : PAImageAssetClient
{
}

- (BOOL)isImageValidInCurrentROI;
- (void)_didUpdateThumbnailImage:(id)arg1;
- (void)_notifyDidLoadThumbnailImage;
- (void)didUpdateImage:(id)arg1;
- (void)update:(BOOL)arg1;
- (long long)imageOrientation;
- (struct CGSize)_originalImageSize;
- (void)ready;

@end

