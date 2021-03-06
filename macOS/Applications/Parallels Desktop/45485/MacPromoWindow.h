//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

#import "WebFrameLoadDelegate-Protocol.h"

@class NSButton, NSString;

@interface MacPromoWindow : NSWindow <WebFrameLoadDelegate>
{
    int m_promoType;
    struct QString m_promoId;
    NSButton *m_checkbox;
    struct CSlotInfo m_closeHandler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)dealloc;
- (void)handleDoNotShowAgainAction;
- (id)initForPromo:(struct PromoDialogData)arg1 notifyOnClose:(struct CSlotInfo)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

