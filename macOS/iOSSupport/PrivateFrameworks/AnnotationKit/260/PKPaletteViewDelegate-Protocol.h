//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AnnotationKit/PKPaletteViewPositionObserving-Protocol.h>

@class NSUndoManager, PKPaletteView;

@protocol PKPaletteViewDelegate <PKPaletteViewPositionObserving>
- (void)paletteViewDidToggleRuler:(PKPaletteView *)arg1;
- (void)paletteViewSelectedToolInkDidChange:(PKPaletteView *)arg1;
- (NSUndoManager *)paletteViewUndoManager:(PKPaletteView *)arg1;
@end

