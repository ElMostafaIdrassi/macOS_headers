//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GCFSDocument, GPBTimestamp, NSData;

@interface GCFSRunQueryResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCFSDocument *document; // @dynamic document;
@property(nonatomic) BOOL hasDocument; // @dynamic hasDocument;
@property(nonatomic) BOOL hasReadTime; // @dynamic hasReadTime;
@property(retain, nonatomic) GPBTimestamp *readTime; // @dynamic readTime;
@property(nonatomic) int skippedResults; // @dynamic skippedResults;
@property(copy, nonatomic) NSData *transaction; // @dynamic transaction;

@end

