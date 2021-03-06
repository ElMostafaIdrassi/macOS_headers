//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMailbox, MFMessageStore, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet;
@protocol MCMessageDataSource;

@interface _TransferOperation : NSObject
{
    NSMutableArray *_sourceMessages;
    NSMutableArray *_documentIDs;
    id _messagesForGmailLabelsToRemoveLock;
    NSMutableDictionary *_messagesForGmailLabelsToRemove;
    BOOL _editableDocuments;
    MFMessageStore *_sourceStore;
    MFMailbox *_destinationMailbox;
    NSArray *_unreadSourceMessages;
    NSSet *_destinationLibraryIDs;
}

@property(readonly, nonatomic) BOOL editableDocuments; // @synthesize editableDocuments=_editableDocuments;
@property(retain) NSSet *destinationLibraryIDs; // @synthesize destinationLibraryIDs=_destinationLibraryIDs;
@property(retain) NSArray *unreadSourceMessages; // @synthesize unreadSourceMessages=_unreadSourceMessages;
@property(readonly, nonatomic) MFMailbox *destinationMailbox; // @synthesize destinationMailbox=_destinationMailbox;
@property(readonly, nonatomic) MFMessageStore *sourceStore; // @synthesize sourceStore=_sourceStore;
- (void).cxx_destruct;
@property(readonly, copy) NSDictionary *popMessagesForGmailLabelsToRemove;
- (void)addMessage:(id)arg1 forLabelsToRemove:(id)arg2;
@property(readonly, copy) NSDictionary *messagesForGmailLabelsToRemove;
- (void)removeSourceMessages:(id)arg1;
- (void)addSourceMessage:(id)arg1;
@property(retain, nonatomic) NSArray *sourceMessages;
@property(readonly, nonatomic) NSArray *documentIDs; // @synthesize documentIDs=_documentIDs;
@property(readonly) id <MCMessageDataSource> sourceLibraryStore;
- (id)init;
- (id)initWithSourceStore:(id)arg1 destinationMailbox:(id)arg2 editableDocuments:(BOOL)arg3;

@end

