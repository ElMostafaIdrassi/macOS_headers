//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSDictionary;

@protocol FxBaseEffect
- (NSDictionary *)properties;
- (BOOL)addParameters;
- (BOOL)variesOverTime;

@optional
- (NSDictionary *)dynamicPropertiesAtTime:(CDUnion_baaf6063)arg1 withError:(id *)arg2;
- (void)schedule:(unsigned long long)arg1 frames:(CDUnion_baaf6063 *)arg2 forParam:(unsigned int)arg3 forRenderAtTime:(CDUnion_baaf6063)arg4;
- (unsigned long long)numberOfFramesToScheduleAtRenderTime:(CDUnion_baaf6063)arg1 forParam:(unsigned int)arg2;
- (BOOL)finishInitialSetup:(id *)arg1;
- (BOOL)parameterChanged:(unsigned int)arg1;
@end

