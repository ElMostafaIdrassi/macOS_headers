//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@protocol PLVideoResource <NSObject>
- (NSURL *)fileURLIfLocal;
- (BOOL)matchesOrExceedsQualityLevel:(unsigned int)arg1;
- (BOOL)isOriginalVideoComplement;
- (BOOL)isMediumHighQuality;
- (BOOL)isPlayable;
- (BOOL)isRemotelyAvailable;
- (BOOL)isStreamable;
- (BOOL)isLocallyGeneratable;
- (BOOL)isLocallyAvailable;
@end

