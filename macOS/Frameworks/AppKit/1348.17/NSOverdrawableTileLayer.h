//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTileLayer.h>

__attribute__((visibility("hidden")))
@interface NSOverdrawableTileLayer : NSTileLayer
{
    unsigned int _drawingForOverdraw:1;
}

- (void)NS_prefetchContentsIfNecessary;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)display;
- (void)setPerformingOverdraw:(BOOL)arg1;
- (BOOL)isPerformingOverdraw;
- (void)_sendDidPerformOverdraw;
- (void)_sendWillPerformOverdraw;
- (void)_sendWillOrDidPerformOverdraw:(BOOL)arg1;
- (struct CGRect)_rectForContainingView:(id)arg1;
- (id)_containingView;
- (id)init;

@end

