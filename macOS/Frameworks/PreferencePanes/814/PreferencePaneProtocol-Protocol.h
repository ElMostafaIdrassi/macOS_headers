//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSString;

@protocol PreferencePaneProtocol
- (oneway void)replyToShouldUnselect:(void (^)(BOOL))arg1;
- (oneway void)shouldUnselect:(void (^)(unsigned long long))arg1;
- (oneway void)didUnselect;
- (oneway void)willUnselect;
- (oneway void)didSelect;
- (oneway void)willSelectWithReply:(void (^)(void))arg1;
- (oneway void)willSelect;

@optional
- (oneway void)authorize;
- (oneway void)openDocumentAtPath:(NSString *)arg1;
- (oneway void)revealElementForKey:(NSString *)arg1;
- (oneway void)handleOpenAEData:(NSData *)arg1;
- (oneway void)getHasElementForKey:(NSString *)arg1 reply:(void (^)(BOOL))arg2;
- (oneway void)getHelpMenuItems:(void (^)(NSArray *))arg1;
- (oneway void)didResignActive;
- (oneway void)willResignActive;
- (oneway void)didBecomeActive;
- (oneway void)willBecomeActive;
- (oneway void)didUnhide;
- (oneway void)willUnhide;
- (oneway void)didHide;
- (oneway void)willHide;
@end

