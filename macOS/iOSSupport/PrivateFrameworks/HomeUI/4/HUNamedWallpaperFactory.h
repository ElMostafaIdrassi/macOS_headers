//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HFNamedWallpaperSource-Protocol.h>

@class NSString;

@interface HUNamedWallpaperFactory : NSObject <HFNamedWallpaperSource>
{
}

+ (id)_gradientWallpaperImageForIdentifier:(id)arg1;
+ (id)_defaultBlackWallpaperImage;
- (id)imageForWallpaper:(id)arg1;
- (id)defaultWallpaperForCollection:(long long)arg1;
- (id)allWallpapersForCollection:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

