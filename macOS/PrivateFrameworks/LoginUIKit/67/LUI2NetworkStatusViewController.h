//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoginUIKit/LUI2ViewController.h>

@class NSButton;

@interface LUI2NetworkStatusViewController : LUI2ViewController
{
    int _networkStatusInternal;
    id _target;
    SEL _action;
    NSButton *_networkStatusButton;
}

@property int networkStatusInternal; // @synthesize networkStatusInternal=_networkStatusInternal;
@property(retain) NSButton *networkStatusButton; // @synthesize networkStatusButton=_networkStatusButton;
@property SEL action; // @synthesize action=_action;
@property id target; // @synthesize target=_target;
- (void)dealloc;
- (void)viewDidLoad;
@property int networkStatus; // @dynamic networkStatus;
- (void)_buttonPressed:(id)arg1;

@end

