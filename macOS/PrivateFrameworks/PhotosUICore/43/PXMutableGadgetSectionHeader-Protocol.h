//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, PXGadgetSpec;

@protocol PXMutableGadgetSectionHeader
@property(nonatomic) BOOL shouldShowDividerOnFirstSection;
@property(nonatomic) BOOL isFirstSection;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property(copy, nonatomic) CDUnknownBlockType accessoryButtonPressed;
@property(copy, nonatomic) NSString *customButtonTitle;
@property(nonatomic) unsigned long long buttonType;
@property(copy, nonatomic) NSString *headerTitle;
@property(nonatomic) unsigned long long headerStyle;
@end

