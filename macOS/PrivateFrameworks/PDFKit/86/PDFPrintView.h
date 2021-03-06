//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class PDFPrintViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFPrintView : NSView
{
    PDFPrintViewPrivate *_private;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)rectForPage:(long long)arg1;
- (BOOL)knowsPageRange:(struct _NSRange *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)printJobTitle;
- (void)setPrintJobTitle:(id)arg1;
- (id)document;
- (void)setDocument:(id)arg1;

@end

