//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface iTermPreferences : NSObject
{
}

+ (id)sharedObserver;
+ (id)computedUseMetal;
+ (id)computedTabsHaveCloseButton;
+ (id)computedTabStyle;
+ (id)computedWordChars;
+ (id)computedCustomFolder;
+ (id)computedOpenArrangementAtStartup;
+ (unsigned long long)maskForModifierTag:(int)arg1;
+ (void)addObserverForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)setString:(id)arg1 forKey:(id)arg2;
+ (id)stringForKey:(id)arg1;
+ (void)setDouble:(double)arg1 forKey:(id)arg2;
+ (double)doubleForKey:(id)arg1;
+ (void)setFloat:(double)arg1 forKey:(id)arg2;
+ (double)floatForKey:(id)arg1;
+ (void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2;
+ (unsigned long long)unsignedIntegerForKey:(id)arg1;
+ (void)setInteger:(long long)arg1 forKey:(id)arg2;
+ (long long)integerForKey:(id)arg1;
+ (void)setInt:(int)arg1 forKey:(id)arg2;
+ (int)intForKey:(id)arg1;
+ (void)setBool:(BOOL)arg1 forKey:(id)arg2;
+ (BOOL)boolForKey:(id)arg1;
+ (BOOL)keyHasDefaultValue:(id)arg1;
+ (void)setObject:(id)arg1 forKey:(id)arg2;
+ (id)objectForKey:(id)arg1;
+ (id)uncomputedObjectForKey:(id)arg1;
+ (id)computedObjectForKey:(id)arg1;
+ (id)computedObjectDictionary;
+ (BOOL)defaultValueForKey:(id)arg1 isCompatibleWithType:(long long)arg2;
+ (id)defaultObjectForKey:(id)arg1;
+ (id)defaultValueMap;
+ (void)initializeUserDefaults;
+ (void)initializeAllAppVersionsUsedOnThisMachine:(id)arg1;
+ (void)initializeAppVersionBeforeThisLaunch:(id)arg1;
+ (id)allAppVersionsUsedOnThisMachine;
+ (id)appVersionBeforeThisLaunch;
+ (BOOL)useTmuxProfile;
+ (BOOL)maximizeMetalThroughput;
+ (BOOL)hideTabActivityIndicator;
+ (BOOL)boolWithCache:(CDStruct_45ac3c53 *)arg1;

@end

