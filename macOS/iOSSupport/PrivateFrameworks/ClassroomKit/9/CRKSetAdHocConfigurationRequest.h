//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@class NSDictionary;

@interface CRKSetAdHocConfigurationRequest : CATTaskRequest
{
    BOOL _merge;
    NSDictionary *_configuration;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL merge; // @synthesize merge=_merge;
@property(copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

