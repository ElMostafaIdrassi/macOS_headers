//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSProgress, NSString, NSURL, TSAImportController;

@protocol TSAImportDelegate <NSObject>

@optional
- (void)importControllerDidFinishResourceAccess:(TSAImportController *)arg1;
- (void)importController:(TSAImportController *)arg1 willBeginResourceAccessWithProgress:(NSProgress *)arg2 title:(NSString *)arg3 estimatedMissingResourcesSize:(unsigned long long)arg4;
- (BOOL)areNewExternalReferencesToDataAllowedForImportController:(TSAImportController *)arg1;
- (void)importController:(TSAImportController *)arg1 documentDidMoveToURL:(NSURL *)arg2;
- (void)importControllerDidRunOutOfSpace:(TSAImportController *)arg1;
- (void)willSaveImportedDocument:(TSAImportController *)arg1;
@end

