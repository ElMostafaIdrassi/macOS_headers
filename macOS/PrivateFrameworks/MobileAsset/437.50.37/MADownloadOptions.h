//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileAsset/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface MADownloadOptions : NSObject <NSSecureCoding>
{
    BOOL _allowsCellularAccess;
    BOOL _canUseLocalCacheServer;
    BOOL _discretionary;
    long long _timeoutIntervalForResource;
    NSMutableDictionary *_additionalServerParams;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL discretionary; // @synthesize discretionary=_discretionary;
@property(retain, nonatomic) NSMutableDictionary *additionalServerParams; // @synthesize additionalServerParams=_additionalServerParams;
@property(nonatomic) BOOL canUseLocalCacheServer; // @synthesize canUseLocalCacheServer=_canUseLocalCacheServer;
@property(nonatomic) long long timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property(nonatomic) BOOL allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
- (void)logOptions;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

