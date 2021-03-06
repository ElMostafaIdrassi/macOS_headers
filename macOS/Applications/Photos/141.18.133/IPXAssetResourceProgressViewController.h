//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXViewController.h"

@class NSString, NSWindow;
@protocol IPXAssetResourceProgressViewDelegate;

__attribute__((visibility("hidden")))
@interface IPXAssetResourceProgressViewController : IPXViewController
{
    NSWindow *_hostWindow;
    NSWindow *_progressSheet;
    NSString *_progressDescriptionKey;
    NSString *_progressNofM;
    unsigned long long _totalCount;
    unsigned long long _completedCount;
    id <IPXAssetResourceProgressViewDelegate> _delegate;
    CDUnknownBlockType _cancelationHandler;
}

+ (void)runDownloadSession:(id)arg1 modalForWindow:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cancelationHandler; // @synthesize cancelationHandler=_cancelationHandler;
@property __weak id <IPXAssetResourceProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long completedCount; // @synthesize completedCount=_completedCount;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain) NSString *progressNofM; // @synthesize progressNofM=_progressNofM;
@property(retain) NSString *progressDescriptionKey; // @synthesize progressDescriptionKey=_progressDescriptionKey;
- (void)constructProgressNofMString;
- (void)cancelButtonPressed:(id)arg1;
- (void)dismissProgressSheet;
- (void)showProgressSheet;
- (id)initWithHostWindow:(id)arg1;

@end

