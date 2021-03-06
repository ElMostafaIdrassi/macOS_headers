//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXAssetsAction.h"

@class NSDate, NSDictionary, NSTimeZone;

__attribute__((visibility("hidden")))
@interface IPXChangeAssetDateAction : IPXAssetsAction
{
    NSDate *_changeDate;
    double _dateOffset;
    NSTimeZone *_timeZone;
    NSDictionary *_originalDateByLocalIdentifier;
    NSDictionary *_originalTimeZoneByLocalIdentifier;
}

@property(retain, nonatomic) NSDictionary *originalTimeZoneByLocalIdentifier; // @synthesize originalTimeZoneByLocalIdentifier=_originalTimeZoneByLocalIdentifier;
@property(retain, nonatomic) NSDictionary *originalDateByLocalIdentifier; // @synthesize originalDateByLocalIdentifier=_originalDateByLocalIdentifier;
@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, nonatomic) double dateOffset; // @synthesize dateOffset=_dateOffset;
@property(readonly, nonatomic) NSDate *changeDate; // @synthesize changeDate=_changeDate;
- (void).cxx_destruct;
- (void)_setDate:(id)arg1 timeZone:(id)arg2 forAsset:(id)arg3;
- (id)_timeZoneForAsset:(id)arg1;
- (BOOL)needsConfirmation;
- (id)defaultActionNameLocalizationKey;
- (void)performUndo:(CDUnknownBlockType)arg1;
- (void)performAction:(CDUnknownBlockType)arg1;
- (id)initWithAssets:(id)arg1 dateOffset:(double)arg2 timeZone:(id)arg3;
- (id)initWithAssets:(id)arg1 date:(id)arg2 timeZone:(id)arg3;
- (id)initWithAssets:(id)arg1 date:(id)arg2;

@end

