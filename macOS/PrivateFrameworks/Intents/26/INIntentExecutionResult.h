//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class INIntent, INIntentResponse;

@interface INIntentExecutionResult : NSObject <NSSecureCoding>
{
    INIntent *_intent;
    INIntentResponse *_intentResponse;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) INIntentResponse *intentResponse; // @synthesize intentResponse=_intentResponse;
@property(readonly) INIntent *intent; // @synthesize intent=_intent;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIntent:(id)arg1 response:(id)arg2;

@end

