//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol NSDraggingInfo;

@protocol NSSpringLoadingDestination <NSObject>
- (void)springLoadingHighlightChanged:(id <NSDraggingInfo>)arg1;
- (void)springLoadingActivated:(BOOL)arg1 draggingInfo:(id <NSDraggingInfo>)arg2;

@optional
- (void)draggingEnded:(id <NSDraggingInfo>)arg1;
- (void)springLoadingExited:(id <NSDraggingInfo>)arg1;
- (unsigned long long)springLoadingUpdated:(id <NSDraggingInfo>)arg1;
- (unsigned long long)springLoadingEntered:(id <NSDraggingInfo>)arg1;
@end

