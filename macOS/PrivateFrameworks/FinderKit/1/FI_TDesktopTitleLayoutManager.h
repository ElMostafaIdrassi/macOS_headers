//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSLayoutManager.h"

__attribute__((visibility("hidden")))
@interface FI_TDesktopTitleLayoutManager : NSLayoutManager
{
}

- (struct CGRect)attachmentFrameAtCharacterIndex:(unsigned long long)arg1 relativeToLineFragment:(_Bool)arg2 inFrame:(struct CGRect)arg3;
- (struct CGRect)attachmentFrameAtCharacterIndex:(unsigned long long)arg1 relativeToLineFragment:(_Bool)arg2;
- (struct CGRect)attachmentFrameAtCharacterIndex:(unsigned long long)arg1;
- (struct CGRect)attachmentFrameAtGlyphIndex:(unsigned long long)arg1 relativeToLineFragment:(_Bool)arg2;
- (void)showCGGlyphs:(const unsigned short *)arg1 positions:(const struct CGPoint *)arg2 count:(long long)arg3 font:(id)arg4 textMatrix:(struct CGAffineTransform)arg5 attributes:(id)arg6 inContext:(struct CGContext *)arg7;

@end

