//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ActionKit/WFStorageServiceAction.h>

@interface WFGetFileAction : WFStorageServiceAction
{
}

- (void)updateVisibleParameters;
- (void)selectedStorageServiceChanged;
- (BOOL)setParameterState:(id)arg1 forKey:(id)arg2;
- (BOOL)outputsMultipleItems;
- (BOOL)multipleSelectionEnabled;
- (id)filenamePlaceholderText;
- (id)showPickerKey;
- (id)filePathKey;
- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;

@end

