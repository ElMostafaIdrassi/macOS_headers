//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DfMagicMentorInstrumentGroupBase.h"

@class DfTrack;

@interface DfMagicMentorMyInstrumentGroup : DfMagicMentorInstrumentGroupBase
{
    DfTrack *m_MyInstrumentAutomationTrack;
}

- (id)_tracksToDeleteOnExport;
- (id)description;
- (int)type;
- (id)myInstrumentAutomationTrack;
- (BOOL)isTrackCustomizableAtIndex:(long long)arg1;
- (BOOL)isTrackCustomizable:(id)arg1;
- (void)dealloc;
- (BOOL)_parseTracks:(id *)arg1;

@end

