//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "Tile.h"

@class NSData;

@interface DOCKDashboardTile : Tile
{
    NSData *_bookmark;
}

- (void).cxx_destruct;
- (id)bookmark;
- (id)typeString;
- (id)copyTilePlist;
- (id)copyInstallDictionary:(int)arg1;
- (BOOL)hasIndicator;
- (struct OpaqueMenuRef *)createMenu:(CDUnknownFunctionPointerType)arg1 options:(unsigned long long)arg2;
- (BOOL)doAction:(unsigned int)arg1 fromKeyboard:(BOOL)arg2;
- (void)render;
- (id)init;

@end

