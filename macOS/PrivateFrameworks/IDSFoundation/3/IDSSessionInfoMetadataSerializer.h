//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IDSSessionInfoMetadataSerializer : NSObject
{
}

+ (id)_readDictionaryFromByteArray:(char *)arg1 byteBuffer:(CDStruct_457e09f6 *)arg2;
+ (id)_readArrayFromByteArray:(char *)arg1 byteBuffer:(CDStruct_457e09f6 *)arg2;
+ (id)deserializeSessionInfoMetadata:(id)arg1;
+ (void)_writeArrayToByteBuffer:(id)arg1 buffer:(CDStruct_457e09f6 *)arg2;
+ (void)_writeDictionaryToByteBuffer:(id)arg1 buffer:(CDStruct_457e09f6 *)arg2;
+ (void)_writeNumberToByteBuffer:(id)arg1 buffer:(CDStruct_457e09f6 *)arg2;
+ (void)_writeStringToByteBuffer:(id)arg1 buffer:(CDStruct_457e09f6 *)arg2;
+ (id)serializeSessionInfoMetadata:(id)arg1;

@end

