//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiRequest.h>

@class LiFilter, NSString;

@interface LiApplyFilterModelRequest : LiRequest
{
    LiFilter *_filter;
    NSString *_identifier;
}

+ (BOOL)requiresLibrary;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) LiFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (void)encodeToConsumer:(id)arg1 forLibrary:(id)arg2;
- (id)initWithDataProvider:(id)arg1 forLibrary:(id)arg2;
- (unsigned short)LiClassCode;
- (id)initWithProperties:(id)arg1 forFilter:(id)arg2 identifier:(id)arg3;

@end

