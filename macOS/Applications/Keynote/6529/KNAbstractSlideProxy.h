//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSDChangeSourceCommandPushingProxy.h"

@class NSObject<KNSlideCollectionEditor>;

@interface KNAbstractSlideProxy : TSDChangeSourceCommandPushingProxy
{
    NSObject<KNSlideCollectionEditor> *_editor;
}

@property(readonly, nonatomic) NSObject<KNSlideCollectionEditor> *editor; // @synthesize editor=_editor;
- (void).cxx_destruct;
- (id)commandToChangeOldValue:(id)arg1 toNewValue:(id)arg2 forKeyPath:(id)arg3;
- (id)newProxyForValue:(id)arg1 forKey:(id)arg2;
- (id)initWithTarget:(id)arg1 changeSource:(id)arg2 documentRoot:(id)arg3;
- (id)initWithTarget:(id)arg1 editor:(id)arg2 documentRoot:(id)arg3;

@end

