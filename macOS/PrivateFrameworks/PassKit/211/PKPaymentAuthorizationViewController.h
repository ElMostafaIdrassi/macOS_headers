//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "PKExtensionRemoteViewControllerDelegate.h"
#import "PKPaymentAuthorizationHostProtocol.h"

@class NSString, NSUUID, PKExtension, PKExtensionHostContext, PKExtensionRemoteViewController;

@interface PKPaymentAuthorizationViewController : NSViewController <PKPaymentAuthorizationHostProtocol, PKExtensionRemoteViewControllerDelegate>
{
    id <PKPaymentAuthorizationViewControllerDelegate> _delegate;
    PKExtensionRemoteViewController *_remoteViewController;
    PKExtensionHostContext *_paymentAuthorizationHostContext;
    PKExtension *_hostExtension;
    NSUUID *_serviceIdentifier;
    id <PKPaymentAuthorizationViewControllerPrivateDelegate> _privateDelegate;
}

+ (void)paymentServicesMerchantURLForAPIType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)paymentServicesMerchantURL:(CDUnknownBlockType)arg1;
+ (BOOL)canMakePaymentsUsingNetworks:(id)arg1 capabilities:(unsigned long long)arg2;
+ (BOOL)canMakePaymentsUsingNetworks:(id)arg1;
+ (BOOL)canMakePayments;
+ (void)requestViewControllerWithPaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PKPaymentAuthorizationViewControllerPrivateDelegate> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
@property(retain, nonatomic) NSUUID *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(retain, nonatomic) PKExtension *hostExtension; // @synthesize hostExtension=_hostExtension;
@property(retain, nonatomic) PKExtensionHostContext *paymentAuthorizationHostContext; // @synthesize paymentAuthorizationHostContext=_paymentAuthorizationHostContext;
@property(retain, nonatomic) PKExtensionRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) __weak id <PKPaymentAuthorizationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)extensionRemoteViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;
- (void)connectionDidOpen;
- (void)authorizationDidPresent;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationDidAuthorizePurchase:(id)arg1;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationWillStart;
- (void)loadView;
- (void)invalidate;
- (void)dealloc;
- (id)initWithPaymentRequest:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

