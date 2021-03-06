//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDictionary;

@interface MLNeuralNetworksCompileTimeParams : NSObject <NSSecureCoding>
{
    long long _lossType;
    long long _optimizerType;
    NSDictionary *_optimizerParameters;
    NSDictionary *_lossParameters;
    NSArray *_trainableLayerNames;
    NSDictionary *_updateParameters;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *updateParameters; // @synthesize updateParameters=_updateParameters;
@property(retain, nonatomic) NSArray *trainableLayerNames; // @synthesize trainableLayerNames=_trainableLayerNames;
@property(retain, nonatomic) NSDictionary *lossParameters; // @synthesize lossParameters=_lossParameters;
@property(retain, nonatomic) NSDictionary *optimizerParameters; // @synthesize optimizerParameters=_optimizerParameters;
@property(nonatomic) long long optimizerType; // @synthesize optimizerType=_optimizerType;
@property(nonatomic) long long lossType; // @synthesize lossType=_lossType;
- (void).cxx_destruct;
- (id)unarchiveUpdatableParamsAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)writeUpdatableParamsToURL:(id)arg1 error:(id *)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithLossType:(long long)arg1 optimizerType:(long long)arg2 optimizerParameters:(id)arg3 lossParameters:(id)arg4 trainableLayerNames:(id)arg5 updateParameters:(id)arg6;

@end

