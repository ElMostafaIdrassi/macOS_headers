//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXView.h"

@class NSMapTable;

@interface KHStackView : UXView
{
    long long _orientation;
    long long _alignment;
    NSMapTable *_customEdgeInsets;
    struct NSEdgeInsets _edgeInsets;
}

@property(retain, nonatomic) NSMapTable *customEdgeInsets; // @synthesize customEdgeInsets=_customEdgeInsets;
@property(nonatomic) struct NSEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property long long alignment; // @synthesize alignment=_alignment;
@property long long orientation; // @synthesize orientation=_orientation;
- (void).cxx_destruct;
- (void)_verticallyStackViews:(id)arg1 insets:(struct NSEdgeInsets)arg2;
- (void)_horizontallyStackViews:(id)arg1 insets:(struct NSEdgeInsets)arg2;
- (void)_stack;
- (void)setCustomInsets:(struct NSEdgeInsets)arg1 forView:(id)arg2;
- (void)setViews:(id)arg1 withOrientation:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

