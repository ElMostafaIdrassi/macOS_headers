//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFlintEmbedConfigurationManager-Protocol.h"
#import "SXEmbedDataProvider-Protocol.h"

@class FCFlintResourceManager, FREmbedConfigurationOperation, FRFlintEmbedConfiguration, NSString;
@protocol FCNewsAppConfigurationManager, OS_dispatch_queue;

@interface FRFlintEmbedConfigurationManager : NSObject <FRFlintEmbedConfigurationManager, SXEmbedDataProvider>
{
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
    FCFlintResourceManager *_resourceManager;
    FRFlintEmbedConfiguration *_loadedConfiguration;
    NSObject<OS_dispatch_queue> *_queue;
    FREmbedConfigurationOperation *_operation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FREmbedConfigurationOperation *operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) FRFlintEmbedConfiguration *loadedConfiguration; // @synthesize loadedConfiguration=_loadedConfiguration;
@property(readonly, nonatomic) FCFlintResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
@property(readonly, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
- (id)operationForConfigurationManager:(id)arg1 resourceManager:(id)arg2;
- (id)embedForType:(id)arg1;
- (void)fetchEmbedConfigurationWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithConfigurationManager:(id)arg1 resourceManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

