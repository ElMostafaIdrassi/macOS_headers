//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface LgAlertItem : NSObject <NSCopying>
{
    unsigned long long _occurrenceCount;
    double _cachedHeight;
    double _cachedWidth;
    unsigned long long m_occurrenceCount;
    NSString *_alertDescription;
    NSString *_title;
    NSString *_originalText;
    long long _alertType;
}

+ (id)itemWithTitle:(id)arg1 description:(id)arg2 type:(long long)arg3 originalText:(id)arg4;
@property long long alertType; // @synthesize alertType=_alertType;
@property NSString *originalText; // @synthesize originalText=_originalText;
@property NSString *title; // @synthesize title=_title;
@property NSString *alertDescription; // @synthesize alertDescription=_alertDescription;
@property(nonatomic) unsigned long long occurrenceCount; // @synthesize occurrenceCount=m_occurrenceCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)incrementOccurrenceCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setCachedHeight:(double)arg1 forWidth:(double)arg2;
- (double)cachedHeightForWidth:(double)arg1;
- (id)init;
- (id)initWithTitle:(id)arg1 description:(id)arg2 type:(long long)arg3 originalText:(id)arg4;

@end

