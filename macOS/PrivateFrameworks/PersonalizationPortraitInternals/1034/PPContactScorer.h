//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPContactScorer : NSObject
{
}

+ (id)_contactRankMapWithRankedIdentifiers:(id)arg1;
+ (id)_scoredLabeledValues:(id)arg1;
+ (id)_scoreAndSortContacts:(id)arg1 rankMap:(id)arg2;
+ (id)_contactsWithIdentifiers:(id)arg1;
+ (double)_scoreWithInitialScore:(double)arg1 identifier:(id)arg2 rankMap:(id)arg3;
+ (void)scoreContactNameRecords:(id)arg1;
+ (id)scoredContactsWithContacts:(id)arg1;
+ (id)mostRelevantContactsWithName:(id)arg1;
+ (id)mostRelevantContacts;

@end

