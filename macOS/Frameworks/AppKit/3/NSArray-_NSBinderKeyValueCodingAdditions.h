//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@interface NSArray (_NSBinderKeyValueCodingAdditions)
- (void)_invokeSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3 ofObjectAtIndex:(unsigned long long)arg4;
- (BOOL)_getRangeIndex:(unsigned long long *)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)rangesContainLocation:(unsigned long long)arg1;
- (unsigned long long)indexOfFirstRangeContainingOrFollowing:(unsigned long long)arg1;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (struct _NSRange)maximumRange;
- (struct _NSRange)lastRange;
- (struct _NSRange)firstRange;
- (BOOL)NS_isIdenticalToArray:(id)arg1;
- (BOOL)NS_containsObjectIdenticalTo:(id)arg1;
@end

