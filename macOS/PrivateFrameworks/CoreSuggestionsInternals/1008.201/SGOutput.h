//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface SGOutput : NSObject
{
    NSArray *_outputItems;
    NSArray *_exceptionTemplates;
    NSDictionary *_jsMessageLogs;
}

@property(readonly, nonatomic) NSDictionary *jsMessageLogs; // @synthesize jsMessageLogs=_jsMessageLogs;
@property(readonly, nonatomic) NSArray *exceptionTemplates; // @synthesize exceptionTemplates=_exceptionTemplates;
@property(readonly, nonatomic) NSArray *outputItems; // @synthesize outputItems=_outputItems;
- (void).cxx_destruct;
- (id)initWithOutputItems:(id)arg1 exeptionTemplates:(id)arg2 jsMessageLogs:(id)arg3;

@end

