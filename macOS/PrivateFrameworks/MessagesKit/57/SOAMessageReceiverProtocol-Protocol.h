//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SOAReceiverProtocol.h"

@class NSArray, NSString;

@protocol SOAMessageReceiverProtocol <NSObject, SOAReceiverProtocol>
- (void)sendMessageText:(NSString *)arg1 toRecipients:(NSArray *)arg2 onService:(NSString *)arg3;
- (void)sendMessageText:(NSString *)arg1 toRecipients:(NSArray *)arg2 onService:(NSString *)arg3 withCompletionBlock:(void (^)(BOOL))arg4;
@end

