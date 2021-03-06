//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SULogFileCollection;

@interface SULogFile : NSObject
{
    NSString *_defaultsLevelKey;
    double _idleCloseTime;
    NSString *_linePrefix;
    int _logLevel;
    NSString *_logPath;
    BOOL _rollAtClose;
    int _prefixTimestampUpToLevel;
    BOOL _prefixWithMessageLevel;
    double _prefsUpdateInterval;
    double _writeToFileInterval;
    SULogFileCollection *_owner;
    char *_logCPath;
    char *_buffer;
    char *_buffCursor;
    char *_buffEnd;
    unsigned long long _buffSize;
    char *_lineBuff;
    unsigned long long _lineBuffSize;
    char *_lineCPrefix;
    unsigned long long _lineCPrefixLen;
    int _logFP;
    double _lastMessageTime;
    double _lastPrefsUpdateTime;
    double _lastWriteToFileTime;
    NSMutableArray *_threadDicts;
}

+ (id)newLogFileLoggingToPath:(id)arg1 defaultsKey:(id)arg2 maxSizeInMB:(int)arg3;
@property(nonatomic) double writeToFileInterval; // @synthesize writeToFileInterval=_writeToFileInterval;
@property(nonatomic) double prefsUpdateInterval; // @synthesize prefsUpdateInterval=_prefsUpdateInterval;
@property(nonatomic) int prefixTimestampUpToLevel; // @synthesize prefixTimestampUpToLevel=_prefixTimestampUpToLevel;
@property(nonatomic) BOOL prefixWithMessageLevel; // @synthesize prefixWithMessageLevel=_prefixWithMessageLevel;
@property(nonatomic) BOOL rollAtClose; // @synthesize rollAtClose=_rollAtClose;
@property(retain, nonatomic) SULogFileCollection *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSString *logPath; // @synthesize logPath=_logPath;
@property(nonatomic) int logLevel; // @synthesize logLevel=_logLevel;
@property(retain, nonatomic) NSString *linePrefix; // @synthesize linePrefix=_linePrefix;
@property(nonatomic) double idleCloseTime; // @synthesize idleCloseTime=_idleCloseTime;
@property(retain, nonatomic) NSString *defaultsLevelKey; // @synthesize defaultsLevelKey=_defaultsLevelKey;
@property(readonly, nonatomic) char *buffer; // @synthesize buffer=_buffer;
- (void)_writeBufferToLogFile;
- (void)_threadWillDie:(id)arg1;
- (void)_periodicCheck;
- (void)_doLogString:(id)arg1 withCStringLinePrefix:(const char *)arg2;
- (void)setAsLogFileForCurrentThread;
- (void)removedAsLogFileForCurrentThreadDirectionary:(id)arg1;
- (void)addedAsLogFileForCurrentThreadDirectionary:(id)arg1;
- (void)rollLogFile;
- (void)openLogFile;
- (void)logString:(id)arg1 atLevel:(int)arg2 secondaryString:(id)arg3 atLevel:(int)arg4;
- (void)logString:(id)arg1 atLevel:(int)arg2;
- (void)closeLogFile;
- (void)closeAndRollLogFile;
- (void)checkPreferences;
- (void)checkLogFileLength:(long long)arg1;
@property(readonly, nonatomic) BOOL isGlobal;
@property(readonly, nonatomic) BOOL inUse;
@property(readonly, nonatomic) BOOL buffering;
- (void)dealloc;
- (id)initWithLogPath:(id)arg1 defaultsKey:(id)arg2 maxSizeInMB:(int)arg3;

@end

