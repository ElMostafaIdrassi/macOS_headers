//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PDFDocument, PDFPage;

__attribute__((visibility("hidden")))
@interface PDFDestinationPrivate : NSObject
{
    PDFDocument *document;
    PDFPage *page;
    int type;
    double left;
    double top;
    double right;
    double bottom;
    double zoom;
}

- (void).cxx_destruct;

@end

