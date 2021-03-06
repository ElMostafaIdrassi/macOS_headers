//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

#import "NSDraggingDestination.h"

@class CLgNotesFocusView, NSString;

@interface CLgNotesTextView : NSTextView <NSDraggingDestination>
{
    CLgNotesFocusView *notesFocusView;
}

- (void)paste:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)acceptPasteboard:(id)arg1;
- (BOOL)readSelectionFromPasteboard:(id)arg1 type:(id)arg2;
- (unsigned long long)processAttachedImages;
- (unsigned long long)adjustDarkText;
- (void)changeDocumentBackgroundColor:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)description_textview;
- (id)initWithFrame:(struct CGRect)arg1 notesFocusView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

