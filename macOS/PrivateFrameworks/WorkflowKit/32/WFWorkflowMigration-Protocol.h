//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@protocol WFWorkflowMigration <NSObject>
+ (BOOL)workflowNeedsMigration:(NSDictionary *)arg1 fromClientVersion:(NSString *)arg2;
- (void)migrateWorkflowIfNeeded:(NSMutableDictionary *)arg1 completion:(void (^)(NSSet *))arg2;
@end

