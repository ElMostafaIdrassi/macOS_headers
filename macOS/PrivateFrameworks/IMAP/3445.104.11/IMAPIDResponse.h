//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMAP/IMAPResponse.h>

@class NSDictionary;

@interface IMAPIDResponse : IMAPResponse
{
    NSDictionary *_serverID;
}

+ (BOOL)handlesResponseWithName:(const char *)arg1 ofLength:(unsigned long long)arg2;
@property(copy, nonatomic) NSDictionary *serverID; // @synthesize serverID=_serverID;
- (void).cxx_destruct;
- (id)description;

@end

