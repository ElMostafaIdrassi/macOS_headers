//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, _INPBValueMetadata;

@protocol _INPBImageValue <NSObject>
@property(nonatomic) BOOL hasWidth;
@property(nonatomic) double width;
@property(readonly, nonatomic) BOOL hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(readonly, nonatomic) BOOL hasUri;
@property(copy, nonatomic) NSString *uri;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type;
@property(readonly, nonatomic) BOOL hasProxyServiceIdentifier;
@property(copy, nonatomic) NSString *proxyServiceIdentifier;
@property(nonatomic) BOOL hasHeight;
@property(nonatomic) double height;
@property(readonly, nonatomic) BOOL hasData;
@property(copy, nonatomic) NSData *data;
- (int)StringAsType:(NSString *)arg1;
- (NSString *)typeAsString:(int)arg1;
@end

