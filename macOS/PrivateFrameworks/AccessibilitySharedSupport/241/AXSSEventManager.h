//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXSSActionManager, AXSSKeyboardCommandInfo, AXSSKeyboardCommandMap, NSDictionary;

@interface AXSSEventManager : NSObject
{
    BOOL _shouldSuppressCommands;
    BOOL _passthroughModeEnabled;
    BOOL __tabKeyPressed;
    BOOL __performedActionWhileTabComboPressed;
    AXSSActionManager *_actionManager;
    unsigned long long _searchType;
    AXSSKeyboardCommandMap *_commandMap;
    id <AXSSKeyFilterDelegate> _filterDelegate;
    NSDictionary *__commandInfos;
    double __lastTabPressTime;
    AXSSKeyboardCommandInfo *__lastDownAndUpCommandInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AXSSKeyboardCommandInfo *_lastDownAndUpCommandInfo; // @synthesize _lastDownAndUpCommandInfo=__lastDownAndUpCommandInfo;
@property(nonatomic) double _lastTabPressTime; // @synthesize _lastTabPressTime=__lastTabPressTime;
@property(nonatomic) BOOL _performedActionWhileTabComboPressed; // @synthesize _performedActionWhileTabComboPressed=__performedActionWhileTabComboPressed;
@property(nonatomic) BOOL _tabKeyPressed; // @synthesize _tabKeyPressed=__tabKeyPressed;
@property(readonly, nonatomic) NSDictionary *_commandInfos; // @synthesize _commandInfos=__commandInfos;
@property(nonatomic, getter=isPassthroughModeEnabled) BOOL passthroughModeEnabled; // @synthesize passthroughModeEnabled=_passthroughModeEnabled;
@property(nonatomic) BOOL shouldSuppressCommands; // @synthesize shouldSuppressCommands=_shouldSuppressCommands;
@property(nonatomic) __weak id <AXSSKeyFilterDelegate> filterDelegate; // @synthesize filterDelegate=_filterDelegate;
@property(retain, nonatomic) AXSSKeyboardCommandMap *commandMap; // @synthesize commandMap=_commandMap;
@property(nonatomic) unsigned long long searchType; // @synthesize searchType=_searchType;
@property(retain, nonatomic) AXSSActionManager *actionManager; // @synthesize actionManager=_actionManager;
- (BOOL)_handleCommand:(id)arg1 event:(id)arg2;
- (void)_handleTabComboEvent:(id)arg1;
- (id)_tabbedKeyChordForKeyChord:(id)arg1;
- (void)_handleTabEvent:(id)arg1;
- (void)_handleTabRepeatOrUpWithCommand:(id)arg1;
- (BOOL)shouldCaptureEvent:(id)arg1;
- (void)handleFKAEvent:(id)arg1;
- (BOOL)_handleEvent:(id)arg1 forCaptureOnly:(BOOL)arg2;
- (void)_performDownActionForCommand:(id)arg1 info:(id)arg2;
- (BOOL)processKeyboardEvent:(id)arg1;
- (id)initWithActionManager:(id)arg1 commandMap:(id)arg2;
- (id)initWithActionManager:(id)arg1;

@end

