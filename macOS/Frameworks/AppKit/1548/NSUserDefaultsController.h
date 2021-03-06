//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSController.h>

@class NSDictionary, NSMutableDictionary, NSUserDefaults;

@interface NSUserDefaultsController : NSController
{
    NSUserDefaults *_defaults;
    NSMutableDictionary *_valueBuffer;
    NSDictionary *_initialValues;
    struct __userDefaultsControllerFlags {
        unsigned int _sharedInstance:1;
        unsigned int _appliesImmediately:1;
        unsigned int _reservedUserDefaultsController:30;
    } _userDefaultsControllerFlags;
}

+ (id)_modelAndProxyKeys;
+ (id)_keyValueBindingAccessPoints;
+ (id)_nonAutomaticObservingKeys;
+ (id)sharedUserDefaultsController;
- (void)_setSharedUserDefaultsControllerProxy:(BOOL)arg1;
- (BOOL)_isSharedUserDefaultsControllerProxy;
- (void)_invokeSingleSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3;
- (void)_setSingleValue:(id)arg1 forKey:(id)arg2;
- (id)_singleMutableArrayValueForKey:(id)arg1;
- (id)_singleValueForKey:(id)arg1;
@property(readonly) id values;
- (id)_controllerKeys;
- (void)revertToInitialValues:(id)arg1;
@property(readonly) BOOL hasUnappliedChanges;
- (void)save:(id)arg1;
- (void)_executeSave:(id)arg1 didCommitSuccessfully:(BOOL)arg2 actionSender:(id)arg3;
- (void)revert:(id)arg1;
@property BOOL appliesImmediately;
- (void)_applyAllValuesFromValueBuffer;
- (void)_applyValue:(id)arg1 forKey:(id)arg2 registrationDomain:(id)arg3;
- (id)_valueBuffer;
@property(copy) NSDictionary *initialValues;
@property(readonly) NSUserDefaults *defaults;
- (void)_setDefaults:(id)arg1;
- (id)description;
- (void)_dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaults:(id)arg1 initialValues:(id)arg2;
- (id)init;
- (void)_init;

@end

