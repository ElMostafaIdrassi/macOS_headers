//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoPrintProduct/KHDBEntity.h>

@class KHDBCharIndexEntity, KHDBPreparedSql, NSLock, NSMutableDictionary;

@interface KHDBUniqueStringEntity : KHDBEntity
{
    KHDBPreparedSql *_createStringSql;
    NSLock *_stringCacheLock;
    NSMutableDictionary *_stringsById;
    NSMutableDictionary *_stringIdByString;
    BOOL _allStringsCached;
    KHDBCharIndexEntity *_charIndexEntity;
}

@property(readonly, nonatomic) BOOL allStringsCached; // @synthesize allStringsCached=_allStringsCached;
@property(retain, nonatomic) KHDBCharIndexEntity *charIndexEntity; // @synthesize charIndexEntity=_charIndexEntity;
- (id)possibleStringIdsForString:(id)arg1;
- (id)possibleStringIdsForString:(id)arg1 usingCharIndexes:(int)arg2;
- (void)cacheStringsForStrings:(id)arg1;
- (void)cacheStringsForStringIds:(id)arg1;
- (id)stringIdForString:(id)arg1;
- (id)stringForStringId:(id)arg1;
- (void)reindexStringsForStringIds:(id)arg1;
- (void)addStringProperties:(id)arg1;
- (id)initialStringProperty:(id)arg1;
- (id)addStringProperty:(id)arg1;
- (void)addCharIndexForString:(id)arg1 withStringId:(id)arg2;
- (id)createStringSql;
- (void)deleteStringsForIds:(id)arg1;
- (void)uncacheStringsForIds:(id)arg1;
- (void)uncacheAllStrings;
- (void)cacheAllStrings;
- (id)cachedStringIdForString:(id)arg1;
- (id)cachedStringForId:(id)arg1;
- (void)uncacheString:(id)arg1 byId:(id)arg2;
- (id)cacheString:(id)arg1 byId:(id)arg2;
- (void)saveIndexes;
- (id)searchStringForString:(id)arg1;
- (void)copyRecordsToEntity:(id)arg1 withCanceler:(id)arg2 where:(id)arg3 args:(id)arg4;
- (BOOL)createTableIfMissing;
- (void)saveNextModelId;
- (void)waitForOutstandingWrites;
- (void)dealloc;
- (id)initWithTableName:(id)arg1 forDatabaseManager:(id)arg2 forDatabase:(id)arg3;
- (id)initWithTableName:(id)arg1 charIndexTableName:(id)arg2 forDatabaseManager:(id)arg3 forDatabase:(id)arg4;

@end

