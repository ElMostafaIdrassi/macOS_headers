//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WBSPasswordRule : NSObject
{
    long long _type;
    id _value;
}

+ (id)ruleWithType:(long long)arg1 value:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)initWithPasswordRuleType:(long long)arg1 value:(id)arg2;

@end

