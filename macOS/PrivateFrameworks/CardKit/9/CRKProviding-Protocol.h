//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CRKCardViewControllerProviding.h"

@protocol CRKProviding <CRKCardViewControllerProviding>

@optional
- (void)requestCardSectionViewProviderForCard:(id <CRCard>)arg1 delegate:(id <CRKCardSectionViewProviderDelegate>)arg2 reply:(void (^)(NSError *, id <CRKCardSectionViewProviding>))arg3;
@end

