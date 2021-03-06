//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreHandwriting/CHStrokeClassificationResult.h>

@class NSMutableDictionary, NSMutableSet;

@interface CHMutableStrokeClassificationResult : CHStrokeClassificationResult
{
    NSMutableDictionary *_strokeClassificationsByStrokeIdentifier;
    NSMutableDictionary *_substrokesByStrokeIdentifier;
    NSMutableSet *_nontextCandidates;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateByAddingClutterStroke:(id)arg1;
- (void)updateByAddingNonClutterStroke:(id)arg1 withAllStrokes:(id)arg2 forceText:(BOOL)arg3;
- (void)updateByTransitionedClutterStrokeIdentifier:(id)arg1 withRemovedAndClutterStrokeIDs:(id)arg2;
- (void)updateByRemovingStrokeIdentifier:(id)arg1 withRemovedAndClutterStrokeIDs:(id)arg2;
- (void)updateNonTextCandidatesByRemovingSupportFromStrokeIdentifier:(id)arg1 skippingCandidatesWithStrokeIdentifier:(id)arg2;
- (void)dealloc;
- (id)initWithStrokeClassificationsByStrokeIdentifier:(id)arg1 substrokesByStrokeIdentifier:(id)arg2 nontextCandidates:(id)arg3;
- (id)init;

@end

