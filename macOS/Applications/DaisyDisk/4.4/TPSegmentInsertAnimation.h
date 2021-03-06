//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSAnimation.h>

@class Item;
@protocol TPContext;

@interface TPSegmentInsertAnimation : NSAnimation
{
    id <TPContext> m_context;
    CDStruct_e7d24821 m_insertedSpan;
    Item *m_targetItem;
    Item *m_nextItem;
    float m_initialProgress;
    BOOL m_shouldEndImmediately;
    BOOL _includeSizeLabel;
}

+ (double)maxDuration;
- (CDStruct_e7d24821)insertedSpan;
- (void)setCurrentProgress:(float)arg1;
- (void)startAnimation;
- (double)calculateOriginPosition;
- (double)calculatePosition:(double)arg1 insertedSpan:(CDStruct_e7d24821)arg2 gravity:(int)arg3 t:(double)arg4;
- (void)dealloc;
- (id)initWithContext:(id)arg1 targetItem:(id)arg2 progress:(float)arg3 includeSizeLabel:(BOOL)arg4;

@end

