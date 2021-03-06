//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/BSDescriptionProviding-Protocol.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface RBPowerAssertion : NSObject <BSDescriptionProviding>
{
    unsigned int _identifier;
    NSDate *_acquisitionDate;
    NSString *_name;
    NSString *_baseName;
    BOOL _invalidated;
}

+ (id)_nameForPreventIdleSleepIdentifiers:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSDate *acquisitionDate; // @synthesize acquisitionDate=_acquisitionDate;
@property(readonly, nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)invalidateWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)updateWithAcquisitionHandler:(CDUnknownBlockType)arg1 invalidationHander:(CDUnknownBlockType)arg2;
- (id)_preventIdleSleepIdentifiers;
- (int)_targetPid;
- (id)_calculateNewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

