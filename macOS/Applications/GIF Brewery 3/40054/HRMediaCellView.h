//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class FBKVOController, HRMediaImageView, NSTextField;

@interface HRMediaCellView : NSTableCellView
{
    HRMediaImageView *_mediaView;
    NSTextField *_sizeField;
    FBKVOController *_kvo;
}

@property(retain, nonatomic) FBKVOController *kvo; // @synthesize kvo=_kvo;
@property(nonatomic) __weak NSTextField *sizeField; // @synthesize sizeField=_sizeField;
@property(nonatomic) __weak HRMediaImageView *mediaView; // @synthesize mediaView=_mediaView;
- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setUpWithMediaFile:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;

@end

