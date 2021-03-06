//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSTimer;
@protocol ItemRefreshControllerDelegate;

@interface ItemRefreshController : NSObject
{
    NSOperationQueue *_queue;
    NSTimer *_timer;
    id <ItemRefreshControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <ItemRefreshControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refreshNowAndRestartRefreshing;
- (void)stopRefreshing;
- (void)timerDidFire;
- (void)dealloc;
- (id)init;

@end

