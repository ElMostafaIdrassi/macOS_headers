//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContact, CNContactPicker, NSString;

@protocol CNContactPickerDelegate <NSObject>

@optional
- (void)contactPickerDidClose:(CNContactPicker *)arg1;
- (void)contactPickerWillClose:(CNContactPicker *)arg1;
- (void)contactPicker:(CNContactPicker *)arg1 didChooseContact:(CNContact *)arg2 key:(NSString *)arg3 value:(id)arg4;
@end

