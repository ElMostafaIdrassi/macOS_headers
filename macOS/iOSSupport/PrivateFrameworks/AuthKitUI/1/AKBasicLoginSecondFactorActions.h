//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKitUI/NSCopying-Protocol.h>

@interface AKBasicLoginSecondFactorActions : NSObject <NSCopying>
{
    CDUnknownBlockType _regenerateCodeAction;
    CDUnknownBlockType _codeEnteredAction;
    CDUnknownBlockType _ak_cancelAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType ak_cancelAction; // @synthesize ak_cancelAction=_ak_cancelAction;
@property(copy, nonatomic) CDUnknownBlockType codeEnteredAction; // @synthesize codeEnteredAction=_codeEnteredAction;
@property(copy, nonatomic) CDUnknownBlockType regenerateCodeAction; // @synthesize regenerateCodeAction=_regenerateCodeAction;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

