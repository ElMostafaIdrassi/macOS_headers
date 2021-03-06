//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BJAPageControlDelegate.h"

@class BJAPageControl, HelpFramesView, NSArray, NSButton, NSLayoutConstraint, NSView;

@interface HelpController : NSObject <BJAPageControlDelegate>
{
    BOOL _busy;
    NSView *_view;
    NSView *_container;
    NSButton *_pauseButton;
    HelpFramesView *_helpSwitches;
    HelpFramesView *_helpQuit;
    HelpFramesView *_helpOptions;
    HelpFramesView *_helpPause;
    HelpFramesView *_helpOrder;
    HelpFramesView *_helpWidget;
    BJAPageControl *_pageControl;
    NSLayoutConstraint *_pageControlWidth;
    long long _index;
    NSArray *_items;
}

@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) BOOL busy; // @synthesize busy=_busy;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSLayoutConstraint *pageControlWidth; // @synthesize pageControlWidth=_pageControlWidth;
@property(retain, nonatomic) BJAPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) HelpFramesView *helpWidget; // @synthesize helpWidget=_helpWidget;
@property(retain, nonatomic) HelpFramesView *helpOrder; // @synthesize helpOrder=_helpOrder;
@property(retain, nonatomic) HelpFramesView *helpPause; // @synthesize helpPause=_helpPause;
@property(retain, nonatomic) HelpFramesView *helpOptions; // @synthesize helpOptions=_helpOptions;
@property(retain, nonatomic) HelpFramesView *helpQuit; // @synthesize helpQuit=_helpQuit;
@property(retain, nonatomic) HelpFramesView *helpSwitches; // @synthesize helpSwitches=_helpSwitches;
@property(retain, nonatomic) NSButton *pauseButton; // @synthesize pauseButton=_pauseButton;
@property(retain, nonatomic) NSView *container; // @synthesize container=_container;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)selectPage:(long long)arg1;
- (void)setup;

@end

