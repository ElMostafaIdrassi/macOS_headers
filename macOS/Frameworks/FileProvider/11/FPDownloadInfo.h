//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileProvider/FPActionOperationInfo.h>

#import "NSSecureCoding.h"

@interface FPDownloadInfo : FPActionOperationInfo <NSSecureCoding>
{
    BOOL _recursively;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL recursively; // @synthesize recursively=_recursively;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

