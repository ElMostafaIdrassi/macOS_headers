//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MPPlugIn : NSObject
{
    NSString *_name;
    id _content;
}

@property(retain, nonatomic) id content; // @synthesize content=_content;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)run:(id)arg1;
- (void)plugInDidInitialize;
- (id)initWithBundle:(id)arg1;
- (void)setName:(id)arg1;

@end

