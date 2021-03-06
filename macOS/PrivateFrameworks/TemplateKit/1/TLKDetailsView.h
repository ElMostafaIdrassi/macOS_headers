//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TemplateKit/TLKView.h>

#import <TemplateKit/TLKTextAreaViewDelegate-Protocol.h>
#import <TemplateKit/TLKTextAreaViewTesting-Protocol.h>

@class NSArray, NSString, TLKImage, TLKMultilineText, TLKRichText, TLKTextAreaView;
@protocol TLKDetailsViewDelegate;

@interface TLKDetailsView : TLKView <TLKTextAreaViewDelegate, TLKTextAreaViewTesting>
{
    BOOL _secondaryTitleIsDetached;
    TLKRichText *_title;
    id <TLKDetailsViewDelegate> _delegate;
    TLKMultilineText *_secondaryTitle;
    TLKImage *_secondaryTitleImage;
    NSArray *_details;
    TLKRichText *_footnote;
    NSString *_footnoteButtonText;
}

@property(retain, nonatomic) NSString *footnoteButtonText; // @synthesize footnoteButtonText=_footnoteButtonText;
@property(retain, nonatomic) TLKRichText *footnote; // @synthesize footnote=_footnote;
@property(retain, nonatomic) NSArray *details; // @synthesize details=_details;
@property(retain, nonatomic) TLKImage *secondaryTitleImage; // @synthesize secondaryTitleImage=_secondaryTitleImage;
@property(nonatomic) BOOL secondaryTitleIsDetached; // @synthesize secondaryTitleIsDetached=_secondaryTitleIsDetached;
@property(retain, nonatomic) TLKMultilineText *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(nonatomic) __weak id <TLKDetailsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TLKRichText *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)secondaryTitleLabelString;
- (id)titleLabelString;
- (id)footnoteLabelString;
- (id)textAreaLabelStrings;
- (void)observedPropertiesChanged;
- (void)footnoteButtonPressed;
- (id)setupContentView;

// Remaining properties
@property(retain, nonatomic) TLKTextAreaView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

