//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSString, NSTextField;

@interface CWInfoDialog : NSWindowController
{
    NSString *_title;
    NSString *_description;
    NSTextField *_titleTextField;
    NSTextField *_descriptionTextField;
    id _delegate;
}

@property(readonly, copy) NSString *description; // @synthesize description=_description;
@property(readonly, copy) NSString *title; // @synthesize title=_title;
@property __weak id delegate; // @synthesize delegate=_delegate;
- (void)windowDidLoad;
- (void)onOKButton:(id)arg1;
- (id)localizedStringForKey:(id)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 description:(id)arg2;

@end

