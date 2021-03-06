//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "WKNavigationDelegate.h"
#import "WKUIDelegate.h"

@class NSButton, NSProgressIndicator, NSString, NSTextField, WKWebView;

@interface ViewController : NSViewController <WKNavigationDelegate, WKUIDelegate>
{
    NSString *_themeDirectory;
    WKWebView *_webView;
    NSButton *_mainButton;
    NSTextField *_selectedField;
    NSProgressIndicator *_progressIndicator;
    NSButton *_logo;
    NSButton *_logoSmall;
    NSButton *_stprivtask;
    NSButton *_fileiconGH;
    NSButton *_mtiGH;
}

@property(retain) NSButton *mtiGH; // @synthesize mtiGH=_mtiGH;
@property(retain) NSButton *fileiconGH; // @synthesize fileiconGH=_fileiconGH;
@property(retain) NSButton *stprivtask; // @synthesize stprivtask=_stprivtask;
@property(retain) NSButton *logoSmall; // @synthesize logoSmall=_logoSmall;
@property(retain) NSButton *logo; // @synthesize logo=_logo;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain) NSTextField *selectedField; // @synthesize selectedField=_selectedField;
@property(retain) NSButton *mainButton; // @synthesize mainButton=_mainButton;
@property(retain) WKWebView *webView; // @synthesize webView=_webView;
@property __weak NSString *themeDirectory; // @synthesize themeDirectory=_themeDirectory;
- (void).cxx_destruct;
- (void)macthemes:(id)arg1;
- (void)stptask:(id)arg1;
- (void)mtinstaller:(id)arg1;
- (void)fileicon:(id)arg1;
- (void)mcgithub:(id)arg1;
- (void)mctwitter:(id)arg1;
- (void)mtgithub:(id)arg1;
- (void)mttwitter:(id)arg1;
- (void)mbgithub:(id)arg1;
- (void)mbtwitter:(id)arg1;
- (void)sendAlert:(id)arg1:(id)arg2;
- (void)uninstall:(id)arg1;
- (void)install:(id)arg1;
- (void)directories;
- (void)support;
- (void)mainButton:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)themeChangedOnMainThread;
- (struct AuthorizationOpaqueRef *)createAuthRef;
- (void)themeChanged:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

