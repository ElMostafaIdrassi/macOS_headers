//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSResponder.h"

@interface MBSFontChangeProxy : NSResponder
{
    id _fontChangeTarget;
    SEL _fontChangeAction;
}

@property SEL fontChangeAction; // @synthesize fontChangeAction=_fontChangeAction;
@property __weak id fontChangeTarget; // @synthesize fontChangeTarget=_fontChangeTarget;
- (void).cxx_destruct;
- (id)window;
- (void)changeFont:(id)arg1;
- (BOOL)acceptsFirstResponder;

@end

