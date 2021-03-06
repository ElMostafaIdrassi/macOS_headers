//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface iTermReflectionMethodArgument : NSObject
{
    NSString *_argumentName;
    unsigned long long _type;
    NSString *_className;
}

+ (id)argumentForArrayTypeString:(id)arg1 argumentName:(id)arg2;
+ (id)argumentForObjectTypeString:(id)arg1 argumentName:(id)arg2;
+ (id)argumentForTypeString:(id)arg1 argumentName:(id)arg2;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *argumentName; // @synthesize argumentName=_argumentName;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 argumentName:(id)arg2;
- (id)initWithObjectHavingClassName:(id)arg1 argumentName:(id)arg2;

@end

