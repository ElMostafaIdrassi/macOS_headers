//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EMMailboxScope, EMMessageObjectID, EMObjectID, NSDate, NSString;

@interface _EMUserActionState : NSObject
{
    BOOL _scrolledToEnd;
    NSDate *_viewingStarted;
    EMMessageObjectID *_messageObjectID;
    EMObjectID *_key;
    NSString *_cellStyle;
    NSString *_messageListType;
    long long _row;
    EMMailboxScope *_mailboxScope;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EMMailboxScope *mailboxScope; // @synthesize mailboxScope=_mailboxScope;
@property(nonatomic) long long row; // @synthesize row=_row;
@property(copy, nonatomic) NSString *messageListType; // @synthesize messageListType=_messageListType;
@property(copy, nonatomic) NSString *cellStyle; // @synthesize cellStyle=_cellStyle;
@property(copy, nonatomic) EMObjectID *key; // @synthesize key=_key;
@property(nonatomic) BOOL scrolledToEnd; // @synthesize scrolledToEnd=_scrolledToEnd;
@property(retain, nonatomic) EMMessageObjectID *messageObjectID; // @synthesize messageObjectID=_messageObjectID;
@property(retain, nonatomic) NSDate *viewingStarted; // @synthesize viewingStarted=_viewingStarted;

@end

