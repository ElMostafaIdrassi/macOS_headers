//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotesShared/ICAnalyticsReporterBase.h>

@class NSDate, NSMutableDictionary;

@interface ICSnapshotAnalyticsReporter : ICAnalyticsReporterBase
{
    BOOL _previousLoggingHasFinished;
    NSDate *_timeStampForPreviousLogging;
    NSMutableDictionary *_blocksForNonCountKeys;
    NSMutableDictionary *_generalStatisticsToBeSentAllAtOnce;
    NSMutableDictionary *_generalStatisticsV2ToBeSentAllAtOnce;
    NSMutableDictionary *_generalStatisticsV3ToBeSentAllAtOnce;
    unsigned long long _keysThatHaveFinishedLogging;
}

+ (id)sharedReporter;
@property unsigned long long keysThatHaveFinishedLogging; // @synthesize keysThatHaveFinishedLogging=_keysThatHaveFinishedLogging;
@property(retain) NSMutableDictionary *generalStatisticsV3ToBeSentAllAtOnce; // @synthesize generalStatisticsV3ToBeSentAllAtOnce=_generalStatisticsV3ToBeSentAllAtOnce;
@property(retain) NSMutableDictionary *generalStatisticsV2ToBeSentAllAtOnce; // @synthesize generalStatisticsV2ToBeSentAllAtOnce=_generalStatisticsV2ToBeSentAllAtOnce;
@property(retain) NSMutableDictionary *generalStatisticsToBeSentAllAtOnce; // @synthesize generalStatisticsToBeSentAllAtOnce=_generalStatisticsToBeSentAllAtOnce;
@property(retain) NSMutableDictionary *blocksForNonCountKeys; // @synthesize blocksForNonCountKeys=_blocksForNonCountKeys;
@property(retain, nonatomic) NSDate *timeStampForPreviousLogging; // @synthesize timeStampForPreviousLogging=_timeStampForPreviousLogging;
@property BOOL previousLoggingHasFinished; // @synthesize previousLoggingHasFinished=_previousLoggingHasFinished;
- (void).cxx_destruct;
- (void)logGeneralStatisticsV3ToBeSentAllAtOnce;
- (void)logGeneralStatisticsV2ToBeSentAllAtOnce;
- (void)logGeneralStatisticsToBeSentAllAtOnce;
- (BOOL)canLogGeneralStatisticsV3ToBeSentAllAtOnce;
- (BOOL)canLogGeneralStatisticsV2ToBeSentAllAtOnce;
- (BOOL)canLogGeneralStatisticsToBeSentAllAtOnce;
- (BOOL)shouldConsiderLegacyAccount:(struct NFAccount *)arg1;
- (BOOL)localAccountIsMigrated;
- (id)legacyContext;
- (id)predicateForPPNotes;
- (id)ICFetchRequestWithEntityName:(id)arg1 andPredicate:(id)arg2;
- (id)legacyFetchRequestWithEntityName:(id)arg1 andPredicate:(id)arg2;
- (unsigned long long)countOfNotesOnMacInLegacyAccount:(id)arg1;
- (unsigned long long)countOfNotesOnMacInLegacyFolder:(id)arg1;
- (void)performLoggingOnlyForNonCountKeys:(id)arg1;
- (void)performRepetitiveClearAndLogForNonCountKeys:(id)arg1;
- (void)performClearAndLogForNonCountKeys;
- (id)init;

@end

