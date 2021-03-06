//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SPCFunction : NSObject
{
    NSString *_name;
    Class _returnType;
    NSArray *_parameterTypes;
    CDUnknownBlockType _block;
}

+ (id)functionWithName:(id)arg1 returnType:(Class)arg2 parameterTypes:(id)arg3 block:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(copy, nonatomic) NSArray *parameterTypes; // @synthesize parameterTypes=_parameterTypes;
@property(retain, nonatomic) Class returnType; // @synthesize returnType=_returnType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)callWithArguments:(id)arg1 environment:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithName:(id)arg1 returnType:(Class)arg2 parameterTypes:(id)arg3 block:(CDUnknownBlockType)arg4;

@end

