//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface MZUniversalPlaybackPositionMetadata : NSObject <NSCopying>
{
    BOOL _hasBeenPlayed;
    BOOL _isNew;
    NSString *_itemIdentifier;
    double _timestamp;
    double _bookmarkTime;
    unsigned long long _playCount;
}

+ (id)metadataWithValuesItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2;
+ (id)metadataWithValuesFromDataSourceItem:(id)arg1;
+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL isNew; // @synthesize isNew=_isNew;
@property(nonatomic) unsigned long long playCount; // @synthesize playCount=_playCount;
@property(nonatomic) BOOL hasBeenPlayed; // @synthesize hasBeenPlayed=_hasBeenPlayed;
@property(nonatomic) double bookmarkTime; // @synthesize bookmarkTime=_bookmarkTime;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (id)keyValueStorePayload;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;

@end

