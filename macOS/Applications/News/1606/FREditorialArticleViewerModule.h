//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSEditorialArticleViewerModuleType-Protocol.h"

@protocol FREditorialViewControllerDelegate, FRFeldsparContext;

@interface FREditorialArticleViewerModule : NSObject <TSEditorialArticleViewerModuleType>
{
    id <FREditorialViewControllerDelegate> _editorialViewControllerDelegate;
    id <FRFeldsparContext> _feldsparContext;
}

@property(readonly, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(nonatomic) __weak id <FREditorialViewControllerDelegate> editorialViewControllerDelegate; // @synthesize editorialViewControllerDelegate=_editorialViewControllerDelegate;
- (void).cxx_destruct;
- (id)createViewControllerForArticleID:(id)arg1 articleContext:(id)arg2 referral:(id)arg3 fragment:(id)arg4 attributesProvider:(id)arg5;
- (id)createViewController;
- (id)initWithFeldpsarContext:(id)arg1;

@end

