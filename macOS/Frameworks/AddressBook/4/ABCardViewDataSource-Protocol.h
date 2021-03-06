//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABCardViewActionDataSource.h"
#import "ABCardViewImageDataSource.h"
#import "ABFaceTimeDataSource.h"
#import "ABMutableKeyValueCoding.h"
#import "ABNameViewDataSource.h"
#import "ABSuggestedValueDataSource.h"
#import "NSObject.h"

@class ABAddressBook, CNContact, NSArray, NSSet, NSString, NSTimer, NSURL;

@protocol ABCardViewDataSource <ABNameViewDataSource, ABCardViewImageDataSource, ABCardViewActionDataSource, ABFaceTimeDataSource, ABSuggestedValueDataSource, ABMutableKeyValueCoding, NSObject>
@property(retain, nonatomic) id <ABCardViewMultiValue> textAlert;
@property(retain, nonatomic) id <ABCardViewMultiValue> callAlert;
@property(retain, nonatomic) id <ABCardViewMultiValue> preferredForName;
@property(retain, nonatomic) id <ABCardViewMultiValue> linkedContacts;
@property(retain, nonatomic) id <ABCardViewMultiValue> postalAddresses;
@property(retain, nonatomic) id <ABCardViewMultiValue> note;
@property(retain, nonatomic) id <ABCardViewMultiValue> previousFamilyName;
@property(retain, nonatomic) id <ABCardViewMultiValue> contactRelations;
@property(retain, nonatomic) id <ABCardViewMultiValue> socialProfiles;
@property(retain, nonatomic) id <ABCardViewMultiValue> instantMessageAddresses;
@property(retain, nonatomic) id <ABCardViewMultiValue> urlAddresses;
@property(retain, nonatomic) id <ABCardViewMultiValue> dates;
@property(retain, nonatomic) id <ABCardViewMultiValue> nonGregorianBirthday;
@property(retain, nonatomic) id <ABCardViewMultiValue> birthday;
@property(retain, nonatomic) id <ABCardViewMultiValue> emailAddresses;
@property(retain, nonatomic) id <ABCardViewMultiValue> phoneNumbers;
@property(readonly, getter=isTransient) BOOL transient;
- (void)manuallyAddPropertyKey:(NSString *)arg1;
- (BOOL)hasKeyBeenManuallyAdded:(NSString *)arg1;
- (NSArray *)phoneticNameKeys;
- (NSArray *)nameKeys;
- (BOOL)keyAvailable:(NSString *)arg1;
- (NSArray *)multiValueKeys;
- (ABAddressBook *)addressBookForActionExecution;
- (void)markAsViewed:(NSTimer *)arg1;
- (NSURL *)URL;
- (BOOL)hasChanges;
- (BOOL)isEmpty;
- (BOOL)isDirectoryResult;
- (BOOL)isReadOnly;
- (BOOL)isMe;
- (NSString *)contactIdentifer;
- (NSSet *)uniqueIdentifiers;
- (CNContact *)contact;
@end

