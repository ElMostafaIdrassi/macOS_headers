//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSMutableArray, NSStackView, NSString;

__attribute__((visibility("hidden")))
@interface RWPathBarViewController : NSViewController
{
    NSString *_path;
    CDUnknownBlockType _pathSelected;
    NSStackView *_stackView;
    NSMutableArray *_pathComponentViewControllers;
}

@property(retain) NSMutableArray *pathComponentViewControllers; // @synthesize pathComponentViewControllers=_pathComponentViewControllers;
@property __weak NSStackView *stackView; // @synthesize stackView=_stackView;
@property(copy, nonatomic) CDUnknownBlockType pathSelected; // @synthesize pathSelected=_pathSelected;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)navigateHome:(id)arg1;
- (void)dealloc;

@end

