//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSKExporter-Protocol.h"

@class NSString, TPDocumentRoot, TSUProgress, TSUProgressContext;

@interface TPTextExporter : NSObject <TSKExporter>
{
    TPDocumentRoot *mDocumentRoot;
    BOOL mIsCancelled;
    TSUProgressContext *mProgressContext;
}

@property(retain, nonatomic) TSUProgressContext *progressContext; // @synthesize progressContext=mProgressContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long exportAnalyticsFormatID;
- (BOOL)exportToURL:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (id)initWithDocumentRoot:(id)arg1;
- (void)quit;
- (void)cancel;
@property(readonly, nonatomic) BOOL isCancelled;
- (void)setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *documentSpecificTypeUTI;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isExportSupported;
@property(readonly, nonatomic) BOOL needsSupplementalFiles;
@property(readonly, nonatomic) TSUProgress *progress;
@property(readonly, nonatomic) NSString *savePanelMessage;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *typeUTI;

@end

