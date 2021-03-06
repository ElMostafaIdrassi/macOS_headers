//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICTextFindingResult.h"

@class ICAttachment, NSAttributedString;

@interface ICTableTextFindingResult : ICTextFindingResult
{
    ICAttachment *_attachment;
    NSAttributedString *_findableString;
    struct _NSRange _rangeInFindableString;
}

@property(nonatomic) struct _NSRange rangeInFindableString; // @synthesize rangeInFindableString=_rangeInFindableString;
@property(retain, nonatomic) NSAttributedString *findableString; // @synthesize findableString=_findableString;
@property(nonatomic) __weak ICAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (struct NSView *)viewForHighlightsInTextView:(struct NSTextView *)arg1;
- (id)framesForHighlightInTextView:(struct NSTextView *)arg1;
- (id)tableAttachmentViewControllerForTextView:(struct NSTextView *)arg1;
- (long long)compare:(id)arg1;

@end

