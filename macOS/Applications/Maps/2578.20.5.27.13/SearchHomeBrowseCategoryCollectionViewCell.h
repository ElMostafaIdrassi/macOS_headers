//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, NSUUID, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SearchHomeBrowseCategoryCollectionViewCell : UICollectionViewCell
{
    NSLayoutConstraint *_topToBaselineConstraint;
    NSLayoutConstraint *_baselineToBottomConstraint;
    NSUUID *_updateIdentifier;
    UIImageView *_browseImageView;
    UILabel *_titleLabel;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *browseImageView; // @synthesize browseImageView=_browseImageView;
@property(retain, nonatomic) NSUUID *updateIdentifier; // @synthesize updateIdentifier=_updateIdentifier;
- (double)titleToImagePadding;
- (struct CGSize)imageSize;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)_updateFonts;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

