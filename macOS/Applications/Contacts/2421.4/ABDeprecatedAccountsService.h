//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAccountRepository, ABAddressBook, ACAccountStore, NSArray, NSDictionary, NSString, NSWindow;

@interface ABDeprecatedAccountsService : NSObject
{
    NSArray *_deprecatedAccounts;
    NSDictionary *_countsByKindOfDeprecatedAccounts;
    NSArray *_destinationAccounts;
    NSString *_defaultAccountIdentifier;
    ABAddressBook *_addressBook;
    ABAccountRepository *_accountRepository;
    NSWindow *_mainWindow;
    ACAccountStore *_accountStore;
}

+ (id)os_log;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(readonly, nonatomic) NSWindow *mainWindow; // @synthesize mainWindow=_mainWindow;
@property(readonly, nonatomic) ABAccountRepository *accountRepository; // @synthesize accountRepository=_accountRepository;
@property(readonly, nonatomic) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
- (void).cxx_destruct;
- (void)rebuildGroupsList;
- (void)removeDeprecatedAccounts;
- (void)mergeDeprecatedAccountsToAccount:(id)arg1;
- (id)dialogTitleAndDescription;
- (id)_localizedString:(id)arg1 count:(long long)arg2 accountName:(id)arg3;
- (id)_localizedString:(id)arg1 count:(long long)arg2;
- (id)_localizedString:(id)arg1;
@property(readonly, nonatomic) NSString *defaultAccountIdentifier; // @synthesize defaultAccountIdentifier=_defaultAccountIdentifier;
- (id)userVisibleNamesForDestinationAccounts;
- (unsigned long long)_combinedCount;
- (unsigned long long)_linkedInCount;
- (unsigned long long)_facebookCount;
- (id)makeCountsByKindOfDeprecatedAccounts;
@property(readonly, nonatomic) NSDictionary *countsByKindOfDeprecatedAccounts; // @synthesize countsByKindOfDeprecatedAccounts=_countsByKindOfDeprecatedAccounts;
- (id)makeDestinationAccounts;
@property(readonly, nonatomic) NSArray *destinationAccounts; // @synthesize destinationAccounts=_destinationAccounts;
- (id)makeDeprecatedAccounts;
@property(readonly, nonatomic) NSArray *deprecatedAccounts; // @synthesize deprecatedAccounts=_deprecatedAccounts;
- (void)migrateDeprecatedAccounts;
- (BOOL)defaultDestinationIsLocal;
- (id)defaultDestination;
- (unsigned long long)indexOfDefaultAccount;
- (id)initWithAddressBook:(id)arg1 accountRepository:(id)arg2 accountStore:(id)arg3 window:(id)arg4;
- (id)initWithWindow:(id)arg1;

@end

