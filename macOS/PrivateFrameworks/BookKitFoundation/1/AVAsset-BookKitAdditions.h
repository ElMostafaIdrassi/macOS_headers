//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

@interface AVAsset (BookKitAdditions)
- (id)_genreAudioFileMetadataItem;
- (id)_genreID3v1MetadataItem;
- (id)_genreID3v3MetadataItem;
- (id)_trackNumberAudioFileMetadataItem;
- (id)_trackNumberID3v1MetadataItem;
- (id)_trackNumberID3v3MetadataItem;
- (id)bk_accountIDFromMetadataFormat:(id)arg1;
- (id)bk_trackNumberFromMetadataFormat:(id)arg1;
- (id)bk_playlistIDFromMetadataFormat:(id)arg1;
- (id)bk_genreFromMetadataFormat:(id)arg1;
- (id)bk_coverArtData;
- (id)bk_title;
- (id)bk_albumName;
- (id)bk_author;
- (id)bk_artist;
@end

