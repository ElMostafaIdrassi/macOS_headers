//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBIntentMetadata;

@protocol _INPBSetAudioSourceInCarIntent <NSObject>
@property(nonatomic) BOOL hasRelativeAudioSourceReference;
@property(nonatomic) int relativeAudioSourceReference;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) BOOL hasAudioSource;
@property(nonatomic) int audioSource;
- (int)StringAsRelativeAudioSourceReference:(NSString *)arg1;
- (NSString *)relativeAudioSourceReferenceAsString:(int)arg1;
- (int)StringAsAudioSource:(NSString *)arg1;
- (NSString *)audioSourceAsString:(int)arg1;
@end

