//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DBPROPERTIESPropertyGroupTemplate.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class NSString;

@interface DBPROPERTIESGetPropertyTemplateResult : DBPROPERTIESPropertyGroupTemplate <DBSerializable, NSCopying>
{
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
- (BOOL)isEqualToGetPropertyTemplateResult:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1 description_:(id)arg2 fields:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

