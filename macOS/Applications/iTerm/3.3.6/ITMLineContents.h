//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface ITMLineContents : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *codePointsPerCellArray; // @dynamic codePointsPerCellArray;
@property(readonly, nonatomic) unsigned long long codePointsPerCellArray_Count; // @dynamic codePointsPerCellArray_Count;
@property(nonatomic) int continuation; // @dynamic continuation;
@property(nonatomic) BOOL hasContinuation; // @dynamic hasContinuation;
@property(nonatomic) BOOL hasText; // @dynamic hasText;
@property(copy, nonatomic) NSString *text; // @dynamic text;

@end

