//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSSet<AFNetworkActivityLoggerProtocol>;

@interface AFNetworkActivityLogger : NSObject
{
    NSMutableSet *_mutableLoggers;
}

+ (id)sharedLogger;
@property(retain, nonatomic) NSMutableSet *mutableLoggers; // @synthesize mutableLoggers=_mutableLoggers;
- (void).cxx_destruct;
- (void)networkRequestDidFinish:(id)arg1;
- (void)networkRequestDidStart:(id)arg1;
- (void)stopLogging;
- (void)startLogging;
- (void)setLogLevel:(unsigned long long)arg1;
- (void)removeLogger:(id)arg1;
- (void)addLogger:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) NSSet<AFNetworkActivityLoggerProtocol> *loggers;
- (id)init;

@end

