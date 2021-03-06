//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface WFPDFDocument : NSObject
{
    BOOL _encrypted;
    BOOL _locked;
    BOOL _allowsPrinting;
    BOOL _allowsCopying;
    struct CGPDFDocument *_documentRef;
    NSArray *_pages;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *pages; // @synthesize pages=_pages;
@property(nonatomic) BOOL allowsCopying; // @synthesize allowsCopying=_allowsCopying;
@property(nonatomic) BOOL allowsPrinting; // @synthesize allowsPrinting=_allowsPrinting;
@property(nonatomic, getter=isLocked) BOOL locked; // @synthesize locked=_locked;
@property(nonatomic, getter=isEncrypted) BOOL encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, nonatomic) struct CGPDFDocument *documentRef; // @synthesize documentRef=_documentRef;
@property(readonly, nonatomic) Class pageClass;
@property(readonly, nonatomic) unsigned long long expectedPageCount;
- (BOOL)unlockWithPassword:(id)arg1;
@property(readonly, nonatomic) int minorVersion;
@property(readonly, nonatomic) int majorVersion;
- (void)dealloc;
- (id)initWithDocumentRef:(struct CGPDFDocument *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

