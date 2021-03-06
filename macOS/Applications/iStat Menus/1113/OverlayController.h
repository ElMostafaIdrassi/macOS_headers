//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSView, NSWindow;

@interface OverlayController : NSObject
{
    BOOL _showingExpired;
    id <OverlayControllerDelegate> _delegate;
    NSWindow *_window;
    NSWindow *_parentWindow;
    NSView *_expiredView;
}

+ (id)sharedOverlayController;
@property(nonatomic) BOOL showingExpired; // @synthesize showingExpired=_showingExpired;
@property(retain, nonatomic) NSView *expiredView; // @synthesize expiredView=_expiredView;
@property(retain, nonatomic) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
@property(nonatomic) id <OverlayControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateBackground;
- (void)showWithView:(id)arg1;
- (id)imageFromCIImage:(id)arg1;
- (id)ciImageFromNSImate:(id)arg1;
- (void)animatedClose;
- (void)removeView;
- (void)close;
- (void)remove;
- (void)removeViews;
- (id)init;

@end

