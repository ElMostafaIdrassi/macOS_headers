//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray;

@protocol MPMapTileProtocol
- (long long)mapZoomLevel;
- (struct CGPoint)latLongCoordinatesForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForLatLongCoordinates:(struct CGPoint)arg1;
- (NSArray *)mapGridWithRows:(long long)arg1 columns:(long long)arg2;
@end

