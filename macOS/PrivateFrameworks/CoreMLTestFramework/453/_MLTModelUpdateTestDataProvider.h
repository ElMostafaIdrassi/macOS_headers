//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLBatchProvider.h"

@class _MLTJSONReader;

@interface _MLTModelUpdateTestDataProvider : NSObject <MLBatchProvider>
{
    BOOL _forTraining;
    _MLTJSONReader *_jsonReader;
}

- (void).cxx_destruct;
@property BOOL forTraining; // @synthesize forTraining=_forTraining;
@property(retain, nonatomic) _MLTJSONReader *jsonReader; // @synthesize jsonReader=_jsonReader;
- (id)featuresAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long count;
- (id)initWithRecipePath:(id)arg1 forTraining:(BOOL)arg2 error:(id *)arg3;

@end

