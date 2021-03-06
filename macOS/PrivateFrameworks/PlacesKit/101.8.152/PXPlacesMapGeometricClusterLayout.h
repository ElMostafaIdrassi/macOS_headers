//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PlacesKit/PXPlacesMapLayout.h>

@interface PXPlacesMapGeometricClusterLayout : PXPlacesMapLayout
{
    double _clusteringDistance;
}

@property(nonatomic) double clusteringDistance; // @synthesize clusteringDistance=_clusteringDistance;
- (BOOL)_shapeAtCoordinate:(struct CLLocationCoordinate2D)arg1 overlapsShapeAtCoordinate:(struct CLLocationCoordinate2D)arg2 forViewPort:(id)arg3;
- (id)_findClusterOverlappingGeotaggable:(id)arg1 fromClusters:(id)arg2 forViewPort:(id)arg3;
- (id)_clusterGeotaggables:(id)arg1 forViewPort:(id)arg2;
- (id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2;
- (id)init;

@end

