//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FFArrangedItemsModuleDelegate-Protocol.h"

@class FFEffect, NSArray, NSPasteboard, NSString;

@protocol FFEffectLibraryModuleDelegate <FFArrangedItemsModuleDelegate>

@optional
- (BOOL)isSidebarHidden;
- (void)toggleSidebar:(id)arg1;
- (void)module:(id)arg1 setItemCountTextField:(NSString *)arg2;
- (void)module:(id)arg1 setCategoryTextField:(NSString *)arg2;
- (void)module:(id)arg1 didDoubleClickWithEffect:(FFEffect *)arg2;
- (void)module:(id)arg1 didDoubleClickWithEffectID:(id)arg2;
- (BOOL)module:(id)arg1 addItems:(NSArray *)arg2 toPasteboard:(NSPasteboard *)arg3;
@end

