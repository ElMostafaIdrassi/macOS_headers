//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSModel.h"
#import "MSSerializableObject.h"

@class NSString;

@interface MSNetExtension : NSObject <MSSerializableObject, MSModel>
{
    NSString *_provider;
}

@property(copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (id)serializeToDictionary;

@end

