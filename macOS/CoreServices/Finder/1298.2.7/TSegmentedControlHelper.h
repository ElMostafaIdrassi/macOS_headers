//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSegmentedControlHelper : NSObject
{
    function_b1fce659 _clickHandler;
    struct TString _keyEquivalent;
    unsigned long long _modifierFlags;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setKeyEquivalent:(const struct TString *)arg1 withModifierFlags:(unsigned long long)arg2;
- (pair_b3ac3938)keyEquivalentWithModifierFlags;
- (void)callClickHandler;
- (id)initWithClickHandler:(const function_b1fce659 *)arg1;

@end

