//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, CATextLayer, TSTTableChromeLayer;

@interface TSTTableChromeCacheElement : NSObject
{
    struct NSEdgeInsets mCenterEdgeInsets;
    struct NSEdgeInsets mSeparatorEdgeInsets;
    BOOL mIsLTR;
    TSTTableChromeLayer *center;
    CATextLayer *text;
    CALayer *textBoundsMask;
    TSTTableChromeLayer *separator;
    TSTTableChromeLayer *spaceSeparator;
    CALayer *spaceSeparatorShadow;
    TSTTableChromeLayer *topLeftCap;
    TSTTableChromeLayer *bottomRightCap;
    double onePixel;
    double topLeftCapSeparatorOffset;
    double topLeftCapCenterOffset;
    double bottomRightCapSeparatorOffset;
    double bottomRightCapCenterOffset;
    struct CGRect _rectForPositioningAdornments;
}

+ (int)assetIndex:(int)arg1 rowChromeSize:(int)arg2;
@property(nonatomic) double bottomRightCapCenterOffset; // @synthesize bottomRightCapCenterOffset;
@property(nonatomic) double bottomRightCapSeparatorOffset; // @synthesize bottomRightCapSeparatorOffset;
@property(nonatomic) double topLeftCapCenterOffset; // @synthesize topLeftCapCenterOffset;
@property(nonatomic) double topLeftCapSeparatorOffset; // @synthesize topLeftCapSeparatorOffset;
@property(nonatomic) double onePixel; // @synthesize onePixel;
@property(retain, nonatomic) TSTTableChromeLayer *bottomRightCap; // @synthesize bottomRightCap;
@property(retain, nonatomic) TSTTableChromeLayer *topLeftCap; // @synthesize topLeftCap;
@property(retain, nonatomic) CALayer *spaceSeparatorShadow; // @synthesize spaceSeparatorShadow;
@property(retain, nonatomic) TSTTableChromeLayer *spaceSeparator; // @synthesize spaceSeparator;
@property(retain, nonatomic) TSTTableChromeLayer *separator; // @synthesize separator;
@property(retain, nonatomic) CALayer *textBoundsMask; // @synthesize textBoundsMask;
@property(retain, nonatomic) CATextLayer *text; // @synthesize text;
@property(retain, nonatomic) TSTTableChromeLayer *center; // @synthesize center;
@property(nonatomic) struct CGRect rectForPositioningAdornments; // @synthesize rectForPositioningAdornments=_rectForPositioningAdornments;
- (BOOL)setupBottomCapWithChromeBounds:(struct CGRect)arg1 firstRow:(BOOL)arg2 stop:(char *)arg3;
- (void)wipeBottomCap;
- (BOOL)setupTopCapWithChromeBounds:(struct CGRect)arg1 firstRow:(BOOL)arg2 stop:(char *)arg3;
- (void)wipeTopCap;
- (void)setRowSelected:(BOOL)arg1 previousNeighborSelected:(BOOL)arg2;
- (void)setupRowElementsFrame:(struct CGRect)arg1 rowChromeSize:(int)arg2;
- (void)setupRowLayersForChrome:(id)arg1 label:(id)arg2 separatesSpaces:(BOOL)arg3 contentsScale:(double)arg4;
- (BOOL)setupRightCapWithChromeBounds:(struct CGRect)arg1 firstColumn:(BOOL)arg2 stop:(char *)arg3;
- (void)wipeRightCap;
- (BOOL)setupLeftCapWithChromeBounds:(struct CGRect)arg1 firstColumn:(BOOL)arg2 stop:(char *)arg3;
- (void)wipeLeftCap;
- (void)setColumnSelected:(BOOL)arg1 previousNeighborSelected:(BOOL)arg2;
- (void)setupColumnElementsFrame:(struct CGRect)arg1;
- (void)setupColumnLayersForChrome:(id)arg1 label:(id)arg2 separatesSpaces:(BOOL)arg3 contentsScale:(double)arg4;
- (struct CGRect)frameForContextMenus;
- (void)addSublayersTo:(id)arg1 andTextLayer:(id)arg2;
- (void)teardown;
- (void)dealloc;

@end

