//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOPictureItemContainer.h"

@class NSArray;

@interface GEOPictureItemContainer : NSObject <GEOPictureItemContainer>
{
    NSArray *_pictureItems;
    BOOL _allowFullScreenPhoto;
}

@property(readonly, nonatomic) BOOL allowFullScreenPhoto; // @synthesize allowFullScreenPhoto=_allowFullScreenPhoto;
@property(readonly, nonatomic) NSArray *pictureItems; // @synthesize pictureItems=_pictureItems;
- (void).cxx_destruct;
- (id)initWithPictureItemContainer:(id)arg1;
- (id)initWithPictureItems:(id)arg1 allowFullScreenPhoto:(BOOL)arg2;
- (id)init;

@end

