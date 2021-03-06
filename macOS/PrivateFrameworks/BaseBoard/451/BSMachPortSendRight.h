//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <BaseBoard/BSMachPortRight.h>

#import <BaseBoard/NSCopying-Protocol.h>

@interface BSMachPortSendRight : BSMachPortRight <NSCopying>
{
}

+ (void)_unsafe_destroyPort:(unsigned int)arg1;
+ (BOOL)_unsafe_isUsablePort:(unsigned int)arg1;
+ (unsigned int)_unsafe_decodePort:(id)arg1;
+ (struct _xpc_type_s *)_decodeType;
+ (id)_rightDescription;
+ (id)bootstrapLookUpWithName:(id)arg1;
+ (id)wrapSendRight:(unsigned int)arg1;
+ (id)bootstrapLookUpPortWithName:(id)arg1;
+ (id)taskNamePortForPID:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_lock_encodePort:(unsigned int)arg1;
- (id)initWithNonRetainingPort:(unsigned int)arg1;
- (id)initFromReceiveRight:(id)arg1;
- (id)initWithCopyOfRight:(id)arg1;
- (id)initWithCopyOfPort:(unsigned int)arg1;
- (id)initWithPort:(unsigned int)arg1;
- (unsigned int)sendRight;
- (id)initWithSendRight:(unsigned int)arg1;
- (id)initWithSendRight:(unsigned int)arg1 assumeOwnership:(BOOL)arg2;

@end

