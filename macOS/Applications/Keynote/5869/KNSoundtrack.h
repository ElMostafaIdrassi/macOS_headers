//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "NSCopying-Protocol.h"
#import "TSDKeyValueProxyVending-Protocol.h"

@class NSArray;

@interface KNSoundtrack : TSPObject <TSDKeyValueProxyVending, NSCopying>
{
    float _volume;
    long long _mode;
    NSArray *_media;
}

+ (BOOL)needsObjectUUID;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSoundtrackMedia:(id)arg1 context:(id)arg2;
- (id)initWithContext:(id)arg1;
@property(copy, nonatomic) NSArray *media;
@property(nonatomic) long long mode;
@property(nonatomic) float volume;
- (id)newProxyWithEditor:(id)arg1 documentRoot:(id)arg2;

@end

