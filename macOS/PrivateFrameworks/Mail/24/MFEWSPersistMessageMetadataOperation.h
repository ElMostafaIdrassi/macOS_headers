//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSPersistenceTaskOperation.h>

@class MFEWSMailboxItemsBatch, NSString;

@interface MFEWSPersistMessageMetadataOperation : MFEWSPersistenceTaskOperation
{
    id <MFEWSPersistMessageMetadataOperationDelegate> _delegate;
    NSString *_mailboxURL;
    MFEWSMailboxItemsBatch *_batch;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MFEWSMailboxItemsBatch *batch; // @synthesize batch=_batch;
@property(readonly, copy, nonatomic) NSString *mailboxURL; // @synthesize mailboxURL=_mailboxURL;
@property(nonatomic) __weak id <MFEWSPersistMessageMetadataOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)_headersNeedUpdateForLibraryMessage:(id)arg1 withEWSItemType:(id)arg2;
- (void)main;
- (id)init;
- (id)initWithMailboxURL:(id)arg1 batch:(id)arg2;

@end

