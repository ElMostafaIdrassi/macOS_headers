//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface MKAttributeLabelModel : NSObject
{
    NSImage *logo;
    NSString *text;
    double logoVerticalOffset;
    NSString *providerName;
}

@property(retain) NSString *providerName; // @synthesize providerName;
@property double logoVerticalOffset; // @synthesize logoVerticalOffset;
@property(retain) NSString *text; // @synthesize text;
@property(retain) NSImage *logo; // @synthesize logo;
- (void).cxx_destruct;
- (id)attributedString;

@end

