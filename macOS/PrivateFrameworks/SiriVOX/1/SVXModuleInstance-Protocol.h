//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@class NSArray, SVXModule;
@protocol SVXModuleInstanceProviding;

@protocol SVXModuleInstance <NSObject>
- (void)stopWithModuleInstanceProvider:(id <SVXModuleInstanceProviding>)arg1;
- (void)startWithModuleInstanceProvider:(id <SVXModuleInstanceProviding>)arg1 platformDependencies:(NSArray *)arg2;
- (id)initWithModule:(SVXModule *)arg1;
@end

