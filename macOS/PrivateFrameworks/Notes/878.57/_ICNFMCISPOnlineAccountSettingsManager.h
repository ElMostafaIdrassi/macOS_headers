//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Notes/ICNFMCISPAccountSettingsManager.h>

@class NSCache, NSString;

@interface _ICNFMCISPOnlineAccountSettingsManager : ICNFMCISPAccountSettingsManager
{
    NSCache *_fetchedISPPlistsByDomain;
    NSString *_ispAccountsXQuery;
}

@property(readonly, copy, nonatomic) NSString *ispAccountsXQuery; // @synthesize ispAccountsXQuery=_ispAccountsXQuery;
- (void).cxx_destruct;
- (void)emptyCache;
- (id)_deliveryAccountsSettingsForDomain:(id)arg1 fetchIfNecessary:(BOOL)arg2;
- (id)_receivingAccountSettingsForDomain:(id)arg1 fetchIfNecessary:(BOOL)arg2;
- (void)_finalizeISPAccountsSettings:(id)arg1;
- (id)_ispPlistFromXMLDocument:(id)arg1;
- (id)_fetchISPDataForDomain:(id)arg1;
- (id)_ispPlistForDomain:(id)arg1;
- (BOOL)_shouldVerifyLoadedISPPlist;
- (id)_persistanceFolderName;
- (id)init;

@end

