//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface MyDeleteFile : NSObject
{
    BOOL _toBeDeleted;
    NSString *_file;
    NSString *_path;
    NSDate *_modDate;
}

@property(retain, nonatomic) NSDate *modDate; // @synthesize modDate=_modDate;
@property(nonatomic) BOOL toBeDeleted; // @synthesize toBeDeleted=_toBeDeleted;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *file; // @synthesize file=_file;
- (void)dealloc;
- (id)init;

@end

