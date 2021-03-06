//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIPRLikenessProvider-Protocol.h>

@class CNCache, NSString;
@protocol CNScheduler;

@interface CNUIPRLikenessLoadingPlaceholderProvider : NSObject <CNUIPRLikenessProvider>
{
    id <CNScheduler> _resourceLock;
    CNCache *_cache;
}

@property(readonly, nonatomic) CNCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) id <CNScheduler> resourceLock; // @synthesize resourceLock=_resourceLock;
- (void).cxx_destruct;
- (unsigned long long)_cnui_likenessType;
- (id)_cnui_likenessForSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)_cnui_likenessForSize:(struct CGSize)arg1;
- (struct CGImage *)renderImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

