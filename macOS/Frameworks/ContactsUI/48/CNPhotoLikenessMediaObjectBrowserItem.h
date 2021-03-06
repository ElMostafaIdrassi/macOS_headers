//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MLMediaObject;

@interface CNPhotoLikenessMediaObjectBrowserItem : NSObject
{
    MLMediaObject *_mediaObject;
    unsigned long long _imageVersion;
}

+ (id)createImageByExecutingBlock:(CDUnknownBlockType)arg1 whileAccessingSecureLocationPointedToByURL:(id)arg2;
+ (id)findIconImageFromMediaObject:(id)arg1;
+ (id)findThumbnailImageFromMediaObject:(id)arg1;
+ (id)findItunesArtworkImageFromMediaObject:(id)arg1;
@property unsigned long long imageVersion; // @synthesize imageVersion=_imageVersion;
@property(retain) MLMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (void).cxx_destruct;
- (id)imageTitle;
- (id)imageUID;
- (id)imageRepresentation;
- (id)imageRepresentationType;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

@end

