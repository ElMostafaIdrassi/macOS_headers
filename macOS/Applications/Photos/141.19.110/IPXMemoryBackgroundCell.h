//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mondrian/MOMediaViewSupplementary.h>

@class PXViewSpec;

__attribute__((visibility("hidden")))
@interface IPXMemoryBackgroundCell : MOMediaViewSupplementary
{
    PXViewSpec *_spec;
}

- (void).cxx_destruct;
@property(copy, nonatomic) PXViewSpec *spec; // @synthesize spec=_spec;
- (void)prepareForRecycling;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

