//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSDictionary, NSSet;

@interface EDAMLazyMap : FATObject
{
    NSSet *_keysOnly;
    NSDictionary *_fullMap;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSDictionary *fullMap; // @synthesize fullMap=_fullMap;
@property(retain, nonatomic) NSSet *keysOnly; // @synthesize keysOnly=_keysOnly;
- (void).cxx_destruct;

@end

