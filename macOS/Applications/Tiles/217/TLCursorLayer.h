//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "CALayerDelegate.h"

@class NSString;

@interface TLCursorLayer : CALayer <CALayerDelegate>
{
    BOOL _clicked;
}

@property(nonatomic) BOOL clicked; // @synthesize clicked=_clicked;
- (void)moveToPoint:(struct CGPoint)arg1 duration:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

