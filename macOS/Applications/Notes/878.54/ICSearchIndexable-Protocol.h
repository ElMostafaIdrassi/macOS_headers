//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CSSearchableItemAttributeSet, NSArray, NSData, NSDate, NSManagedObjectContext, NSManagedObjectID, NSString, NSURL;

@protocol ICSearchIndexable <NSObject>
- (CSSearchableItemAttributeSet *)searchableItemAttributeSet;
- (NSString *)searchDomainIdentifier;
- (NSString *)searchableItemIdentifier;
- (NSArray *)authorsExcludingCurrentUser;
- (BOOL)isHiddenFromSearch;
- (BOOL)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultType;
- (unsigned long long)searchResultsSection;
- (NSDate *)modificationDate;
- (NSDate *)creationDate;
- (NSString *)identifier;
- (long long)visibilityTestingType;
- (NSManagedObjectID *)objectID;
- (NSManagedObjectContext *)managedObjectContext;

@optional
- (NSData *)dataForTypeIdentifier:(NSString *)arg1;
- (NSURL *)fileURLForTypeIdentifier:(NSString *)arg1;
- (BOOL)ignoreInSearchIndexer;
@end

