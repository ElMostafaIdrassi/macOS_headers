//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioSession/AVAudioHardwareControl.h>

@class NSArray;

@interface AVAudioHardwareSelectorControl : AVAudioHardwareControl
{
}

- (id)valueKeys;
@property(readonly, nonatomic) NSArray *availableValues;
- (BOOL)setActiveValues:(id)arg1 controller:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSArray *activeValues;
@property(readonly, nonatomic, getter=isMultiValue) BOOL multiValue;

@end

