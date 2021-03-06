//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSError, NSMutableData, NSOutputStream, NSString;

@interface MQTTCFSocketEncoder : NSObject <NSStreamDelegate>
{
    long long _state;
    NSError *_error;
    NSOutputStream *_stream;
    id <MQTTCFSocketEncoderDelegate> _delegate;
    NSMutableData *_buffer;
}

@property(retain, nonatomic) NSMutableData *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) __weak id <MQTTCFSocketEncoderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSOutputStream *stream; // @synthesize stream=_stream;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (BOOL)send:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)close;
- (void)open;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

