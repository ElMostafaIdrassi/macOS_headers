//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDecimalNumber, NSString;

@interface PKTransitAppletAmount : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_balanceIdentifier;
    NSString *_currency;
    long long _exponent;
    NSDecimalNumber *_amount;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(nonatomic) long long exponent; // @synthesize exponent=_exponent;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(copy, nonatomic) NSString *balanceIdentifier; // @synthesize balanceIdentifier=_balanceIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAmount:(id)arg1 currency:(id)arg2 exponent:(long long)arg3 identifier:(id)arg4;
- (id)initWithDictionary:(id)arg1;

@end

