//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KeychainStore, NSButton, NSTextField, NSTextView;

@interface NewSecureNoteItem : NSObject
{
    NSButton *_addButton;
    NSTextField *_name;
    NSTextView *_note;
    id _panel;
    KeychainStore *_store;
}

- (void)_cancel:(id)arg1;
- (void)_addPassword:(id)arg1;
- (void)dealloc;
- (void)show:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)awakeFromNib;
- (id)initWithStore:(id)arg1;

@end

