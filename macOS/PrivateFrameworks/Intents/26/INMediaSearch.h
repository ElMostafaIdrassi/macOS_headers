//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INJSONSerializable.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class INDateComponentsRange, NSArray, NSString;

@interface INMediaSearch : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    long long _mediaType;
    long long _sortOrder;
    NSString *_mediaName;
    NSString *_artistName;
    NSString *_albumName;
    NSArray *_genreNames;
    NSArray *_moodNames;
    INDateComponentsRange *_releaseDate;
    long long _reference;
    NSString *_mediaIdentifier;
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) NSString *mediaIdentifier; // @synthesize mediaIdentifier=_mediaIdentifier;
@property(readonly) long long reference; // @synthesize reference=_reference;
@property(readonly, copy) INDateComponentsRange *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(readonly, copy) NSArray *moodNames; // @synthesize moodNames=_moodNames;
@property(readonly, copy) NSArray *genreNames; // @synthesize genreNames=_genreNames;
@property(readonly, copy) NSString *albumName; // @synthesize albumName=_albumName;
@property(readonly, copy) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, copy) NSString *mediaName; // @synthesize mediaName=_mediaName;
@property(readonly) long long sortOrder; // @synthesize sortOrder=_sortOrder;
@property(readonly) long long mediaType; // @synthesize mediaType=_mediaType;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithMediaType:(long long)arg1 sortOrder:(long long)arg2 mediaName:(id)arg3 artistName:(id)arg4 albumName:(id)arg5 genreNames:(id)arg6 moodNames:(id)arg7 releaseDate:(id)arg8 reference:(long long)arg9 mediaIdentifier:(id)arg10;
@property(readonly, copy) NSArray *activityNames;
- (id)initWithMediaType:(long long)arg1 sortOrder:(long long)arg2 mediaName:(id)arg3 artistName:(id)arg4 albumName:(id)arg5 genreNames:(id)arg6 moodNames:(id)arg7 activityNames:(id)arg8 releaseDate:(id)arg9 reference:(long long)arg10 mediaIdentifier:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

