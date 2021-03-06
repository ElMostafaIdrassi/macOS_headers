//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PackageKit/PKMutablePackage.h>

@interface PKMutableLeopardPackage : PKMutablePackage
{
}

+ (id)_intendedPayloadEncodingForPackageInfo:(id)arg1;
+ (id)_intendedPayloadEncodingForMinimumOSVersion:(id)arg1;
+ (id)_bundleAttributeDictionaryForComponent:(id)arg1;
- (BOOL)_writeToArchive:(id)arg1 atPath:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)setModifyOwnershipUsingBlock:(CDUnknownBlockType)arg1;
- (void)setMaskExpressions:(id)arg1;
- (void)setScriptRoot:(id)arg1;
- (void)setMapBaselineNamesUsingBlock:(CDUnknownBlockType)arg1;
- (void)setBaselinePayloadRoot:(id)arg1;
- (void)setPayloadRoot:(id)arg1;
- (void)setComponents:(id)arg1;
- (BOOL)_writeScriptsToFile:(id)arg1 error:(id *)arg2;
- (BOOL)_writePayloadToFile:(id)arg1 usingBom:(id)arg2 tempDir:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (BOOL)_createUpdatePayloadAtPath:(id)arg1 fromBaseline:(id)arg2 toNew:(id)arg3 currentPrefix:(id)arg4 currentComponent:(id)arg5 componentMap:(id)arg6 tempDir:(id)arg7 totalPayloadSize:(unsigned long long *)arg8 didCreate:(char *)arg9 error:(id *)arg10;
- (BOOL)_writeBomToFile:(id)arg1 error:(id *)arg2 modifyOwnershipUsingBlock:(CDUnknownBlockType)arg3;
- (void)_adjustOwnershipOnPath:(id)arg1 inBom:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)_effectivePayloadRoot;
- (id)_generateBomPathToRealPathDictionaryWithDestinationPath:(id)arg1;
- (BOOL)_writeRoot:(id)arg1 toCompressedCPIO:(id)arg2 usingBom:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (void)_setModifyOwnershipUsingBlock:(CDUnknownBlockType)arg1;
- (void)_setMaskExpressions:(id)arg1;
- (void)_setScriptRoot:(id)arg1;
- (void)_setMapBaselineNamesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_setBaselinePayloadRoot:(id)arg1;
- (void)_setPayloadRoot:(id)arg1;
- (void)_updatePackageInfoWithComponents;
- (void)_setComponents:(id)arg1;

@end

