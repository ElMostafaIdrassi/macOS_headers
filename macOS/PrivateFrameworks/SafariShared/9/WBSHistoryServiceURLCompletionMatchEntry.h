//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface WBSHistoryServiceURLCompletionMatchEntry : NSObject <NSSecureCoding>
{
    unique_ptr_1250213a _streamData;
    NSString *_url;
    NSString *_title;
}

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *url;
@property(readonly, nonatomic) float topSitesScore;
@property(readonly, nonatomic) struct _HistoryStreamedMatchEntry *streamData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStreamData:(unique_ptr_1250213a *)arg1;
- (id)initWithURLString:(id)arg1 title:(id)arg2 topSitesScore:(float)arg3;
- (id)init;

@end

