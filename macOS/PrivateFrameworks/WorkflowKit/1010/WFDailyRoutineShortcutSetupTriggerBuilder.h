//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WFTrigger;

@interface WFDailyRoutineShortcutSetupTriggerBuilder : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    WFTrigger *_templateTrigger;
}

@property(readonly, copy, nonatomic) WFTrigger *templateTrigger; // @synthesize templateTrigger=_templateTrigger;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)triggerWithConfiguration:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 templateTrigger:(id)arg3;

@end

