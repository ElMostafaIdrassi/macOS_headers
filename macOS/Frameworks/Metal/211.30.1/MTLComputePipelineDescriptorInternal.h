//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Metal/MTLComputePipelineDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor
{
    struct MTLComputePipelineDescriptorPrivate _private;
}

- (id)newSerializedComputeDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newSerializedComputeData;
- (void)validateWithDevice:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)buffers;
- (const struct MTLComputePipelineDescriptorPrivate *)_descriptorPrivate;
- (void)setNeedsCustomBorderColorSamplers:(BOOL)arg1;
- (BOOL)needsCustomBorderColorSamplers;
- (void)setResourceIndex:(unsigned long long)arg1;
- (unsigned long long)resourceIndex;
- (void)setForceResourceIndex:(BOOL)arg1;
- (BOOL)forceResourceIndex;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1;
- (BOOL)threadGroupSizeIsMultipleOfThreadExecutionWidth;
- (void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(BOOL)arg1;
- (id)pipelineLibrary;
- (void)setPipelineLibrary:(id)arg1;
- (id)driverCompilerOptions;
- (void)setDriverCompilerOptions:(id)arg1;
- (id)stageInputDescriptor;
- (void)setStageInputDescriptor:(id)arg1;
- (id)computeFunction;
- (void)setComputeFunction:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)reset;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

