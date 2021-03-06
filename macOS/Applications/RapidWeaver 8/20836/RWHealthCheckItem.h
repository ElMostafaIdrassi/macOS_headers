//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface RWHealthCheckItem : NSObject
{
    BOOL _isGroupItem;
    NSString *_title;
    NSString *_cellViewIdentifier;
    NSMutableArray *_children;
    unsigned long long _displayOrder;
}

@property(nonatomic) unsigned long long displayOrder; // @synthesize displayOrder=_displayOrder;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(readonly, nonatomic) __weak NSString *cellViewIdentifier; // @synthesize cellViewIdentifier=_cellViewIdentifier;
@property(nonatomic) BOOL isGroupItem; // @synthesize isGroupItem=_isGroupItem;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (double)cellViewHeightUsingWidth:(double)arg1;
- (id)init;

@end

