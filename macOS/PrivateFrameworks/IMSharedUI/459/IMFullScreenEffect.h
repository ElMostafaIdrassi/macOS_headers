//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSColor, NSString, NSURL;

@interface IMFullScreenEffect : NSObject
{
    BOOL _triggeredByResponseKit;
    id _triggeredByObject;
    NSString *_identifier;
    NSArray *_messageFilters;
    NSURL *_soundEffectFileURL;
    unsigned long long _messageOrientation;
    id _delegate;
}

+ (id)stickerFilter;
+ (id)tapBackFilter;
+ (id)bigEmojiFilter;
+ (id)_monochromeDimmingFilterWithType:(long long)arg1;
- (void).cxx_destruct;
@property id delegate; // @synthesize delegate=_delegate;
@property unsigned long long messageOrientation; // @synthesize messageOrientation=_messageOrientation;
@property(readonly) NSURL *soundEffectFileURL; // @synthesize soundEffectFileURL=_soundEffectFileURL;
@property(readonly) NSArray *messageFilters; // @synthesize messageFilters=_messageFilters;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property __weak id triggeredByObject; // @synthesize triggeredByObject=_triggeredByObject;
@property BOOL triggeredByResponseKit; // @synthesize triggeredByResponseKit=_triggeredByResponseKit;
- (void)prepareSoundEffect;
@property(readonly) BOOL effectIsDark;
@property(readonly) NSColor *backgroundColor;
@property(readonly) double duration;
@property(readonly, getter=isForegroundEffect) BOOL foregroundEffect;
@property(readonly) BOOL soundEffectHasHapticTrack;
@property(readonly) BOOL shouldDrawOverNavigationBar;
@property(readonly) Class effectViewClass;
@property(readonly) unsigned long long layerCount;

@end

