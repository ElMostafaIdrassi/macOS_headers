//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class PKMetalRendererController;
@protocol MTLTexture;

@protocol PKMetalRendererControllerDelegate <NSObject>

@optional
- (void)metalRendererController:(PKMetalRendererController *)arg1 didCommitRenderingIntoTexture:(id <MTLTexture>)arg2;
- (id <MTLTexture>)nextTextureTargetForMetalRendererController:(PKMetalRendererController *)arg1;
@end

