//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputMethodKit/NSCopying-Protocol.h>

@class NSString;

@interface IMKDocumentContent : NSObject <NSCopying>
{
    long long _baseElement;
    unsigned long long _direction;
    unsigned long long _offset;
    NSString *_text;
}

+ (id)contentWithUpTo:(long long)arg1 charactersAfter:(long long)arg2 from:(id)arg3 untilCharacterFromSet:(id)arg4;
+ (id)contentWithUpTo:(long long)arg1 charactersBefore:(long long)arg2 from:(id)arg3 untilCharacterFromSet:(id)arg4;
+ (id)contentWith:(long long)arg1 charactersBefore:(long long)arg2 from:(id)arg3;
+ (id)contentWith:(long long)arg1 charactersAfter:(long long)arg2 from:(id)arg3;
+ (id)contentWithSelectedTextOf:(id)arg1;
+ (id)contentWithComposingTextOf:(id)arg1;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) long long baseElement; // @synthesize baseElement=_baseElement;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWith:(long long)arg1 direction:(unsigned long long)arg2 offset:(unsigned long long)arg3 text:(id)arg4;
- (id)init;

@end

