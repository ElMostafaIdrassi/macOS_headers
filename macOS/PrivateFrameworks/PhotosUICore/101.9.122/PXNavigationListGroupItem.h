//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXNavigationListItem.h>

@interface PXNavigationListGroupItem : PXNavigationListItem
{
    BOOL _group;
    BOOL _draggable;
    BOOL _expandable;
}

+ (id)titleForIdentifier:(id)arg1;
- (BOOL)isExpandable;
- (BOOL)isDraggable;
- (BOOL)isGroup;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

