//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalTools/MTLToolsTexture.h>

@class MTLTelemetryDevice, MTLTextureDescriptor;

@interface MTLTelemetryTexture : MTLToolsTexture
{
    unsigned long long mipmapClipType;
    MTLTextureDescriptor *_telemetryDescriptor;
    MTLTelemetryDevice *_telemetryDevice;
}

- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned long long)arg4 textureType:(unsigned long long)arg5 levels:(struct _NSRange)arg6 slices:(struct _NSRange)arg7 swizzle:(CDStruct_a06f635e)arg8;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned long long)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 descriptor:(id)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 descriptor:(id)arg3;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 descriptor:(id)arg3 plane:(unsigned long long)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 buffer:(id)arg3 descriptor:(id)arg4 offset:(unsigned long long)arg5 bytesPerRow:(unsigned long long)arg6;
- (void)initMipmapClipType;
- (void)accumTextureDistribution:(id)arg1 category:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 baseAddr:(unsigned long long)arg4 rowBytes:(unsigned long long)arg5 isLinear:(BOOL)arg6;

@end

