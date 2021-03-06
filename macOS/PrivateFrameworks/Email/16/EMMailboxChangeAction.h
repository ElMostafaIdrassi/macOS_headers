//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class EMMailboxObjectID;

@interface EMMailboxChangeAction : NSObject <NSSecureCoding>
{
    EMMailboxObjectID *_mailboxObjectID;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) EMMailboxObjectID *mailboxObjectID; // @synthesize mailboxObjectID=_mailboxObjectID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailboxObjectID:(id)arg1;
- (id)initWithMailbox:(id)arg1;

@end

