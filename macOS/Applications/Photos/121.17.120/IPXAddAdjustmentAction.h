//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXEditAction.h"

@class DGOperation;

__attribute__((visibility("hidden")))
@interface IPXAddAdjustmentAction : IPXEditAction
{
    DGOperation *_savedOperation;
}

- (void).cxx_destruct;
- (id)defaultActionName;
- (void)performActionWithImageItemController:(id)arg1;
- (id)initWithAssets:(id)arg1 operation:(id)arg2;
- (id)initWithAssets:(id)arg1;

@end

