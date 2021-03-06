//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CKLEventFilter : NSObject
{
    BOOL _simulatorMessagesOnly;
    unsigned long long _logTypes;
    NSDictionary *_categoriesBySubsystem;
}

@property(retain, nonatomic) NSDictionary *categoriesBySubsystem; // @synthesize categoriesBySubsystem=_categoriesBySubsystem;
@property(nonatomic) BOOL simulatorMessagesOnly; // @synthesize simulatorMessagesOnly=_simulatorMessagesOnly;
@property(nonatomic) unsigned long long logTypes; // @synthesize logTypes=_logTypes;
- (void).cxx_destruct;
- (BOOL)matchesEvent:(id)arg1;
- (id)initWithLogTypes:(unsigned long long)arg1;
- (void)_initFilterDict;
- (BOOL)hasOnlyLogType:(unsigned long long)arg1;
- (BOOL)hasLogType:(unsigned long long)arg1;

@end

