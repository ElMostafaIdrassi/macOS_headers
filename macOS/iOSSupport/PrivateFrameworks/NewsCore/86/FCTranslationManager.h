//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCTranslationManager-Protocol.h>

@class FCAsyncSerialQueue, FCTranslationMap;
@protocol FCContentContext, FCTranslationProvider;

@interface FCTranslationManager : NSObject <FCTranslationManager>
{
    FCAsyncSerialQueue *_queue;
    FCTranslationMap *_translationMap;
    id <FCContentContext> _contentContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(retain, nonatomic) FCTranslationMap *translationMap; // @synthesize translationMap=_translationMap;
@property(retain, nonatomic) FCAsyncSerialQueue *queue; // @synthesize queue=_queue;
- (void)fetchTranslationProvider:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <FCTranslationProvider> possiblyUnfetchedTranslationProvider;
- (id)initWithContentContext:(id)arg1;

@end

