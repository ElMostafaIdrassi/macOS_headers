//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSArray, NSButton, NSString, NSWindow;

__attribute__((visibility("hidden")))
@interface IPXExportFailureWindowController : NSWindowController
{
    NSWindow *m_exportFailurePanel;
    NSButton *m_exportFailureOkButton;
    NSButton *m_exportFailureRevealInFinderButton;
    NSString *m_exportFailureDialogTitle;
    NSString *m_exportFailureDialogMsg;
    NSString *m_exportFailureTableMsg;
    NSArray *_exportFailures;
}

+ (void)showExportFailures:(id)arg1 dialogTitle:(id)arg2 diaglogMessage:(id)arg3 tableMessage:(id)arg4 showRevealInFinderButton:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
@property(retain, nonatomic) NSArray *exportFailures; // @synthesize exportFailures=_exportFailures;
- (void).cxx_destruct;
- (void)a_exportFailureReveal:(id)arg1;
- (void)a_exportFailureOk:(id)arg1;
- (void)displayFailureWithDialogTitle:(id)arg1 dialogMsg:(id)arg2 tableMsg:(id)arg3 shouldDisplayRevealInFinderButton:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;

@end

