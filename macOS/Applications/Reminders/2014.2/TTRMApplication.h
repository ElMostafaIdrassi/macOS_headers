//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSApplication.h>

@interface TTRMApplication : NSApplication
{
    // Error parsing type: , name: scriptableApplication
}

+ (id)scriptClassDecription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)orderFrontStandardAboutPanel:(id)arg1;
- (BOOL)runTest:(id)arg1 options:(id)arg2;
- (id)scriptableApplicationKeyForKey:(id)arg1;
- (id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4;
- (void)removeFromScriptingRemindersAtIndex:(long long)arg1;
- (void)insertInScriptingReminders:(id)arg1 atIndex:(long long)arg2;
@property(nonatomic, readonly) id scriptingReminders;
@property(nonatomic, readonly) id scriptingDefaultList;
- (void)removeFromScriptingListsAtIndex:(long long)arg1;
- (void)insertInScriptingLists:(id)arg1 atIndex:(long long)arg2;
@property(nonatomic, readonly) id scriptingLists;
@property(nonatomic, readonly) id scriptingDefaultAccount;
@property(nonatomic, readonly) id scriptingAccounts;

@end

