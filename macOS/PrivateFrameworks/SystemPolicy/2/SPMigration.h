//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPMigration : NSObject
{
}

+ (id)createGatekeeperMigrationData:(id)arg1;
+ (id)createKernelExtensionMigrationData:(id)arg1;
+ (id)readKernelExtensionMigrationPolicy:(id)arg1;
+ (void)createMigrationPolicy:(id)arg1 forTarget:(id)arg2;
+ (BOOL)volumeRequiresGatekeeperMigration:(id)arg1;
+ (BOOL)volumeRequiresKernelExtensionMigration:(id)arg1;
+ (id)gatekeeperMigrationDataPath:(id)arg1;
+ (id)kernelExtensionMigrationDataPath:(id)arg1;

@end

