//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBCentralManagerDelegate.h"
#import "CBPeripheralDelegate.h"

@class CBCentralManager, NSMutableArray, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface AMSBTLEConnectionManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>
{
    CBCentralManager *centralManager;
    NSMutableArray *peripheralList;
    NSMutableArray *connectedBTPeripherals;
    NSMutableArray *connectedAMSPeripherals;
    NSTimer *refreshTimer;
    NSTimer *connectionTimer;
    id <BTLEConnectionTable> controller;
    long long centralState;
    BOOL isAdvertising;
    BOOL _checked32BitStatus;
    BOOL _server32Bit;
}

@property BOOL server32Bit; // @synthesize server32Bit=_server32Bit;
@property BOOL checked32BitStatus; // @synthesize checked32BitStatus=_checked32BitStatus;
@property(readonly) NSMutableArray *peripheralList; // @synthesize peripheralList;
- (id)get32BitPluginList;
- (BOOL)is32BitPlugin;
- (BOOL)peripheralIsConnectedCentral:(id)arg1;
- (unsigned int)midiDeviceForUUID:(id)arg1;
- (void)removeAMSPeripheralForCBPeripheral:(id)arg1;
- (id)amsPeripheralForCBPeripheral:(id)arg1;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)startTimer;
- (void)killTimer;
- (void)stopScan;
- (void)startScan;
- (long long)bluetoothState;
- (BOOL)isLECapableHardware;
- (void)connectionTimerFired:(id)arg1;
- (void)timerFired:(id)arg1;
- (void)checkAlreadyConnectedPeripherals;
- (void)createPeripheralList;
- (void)setUIController:(id)arg1;
- (void)updateAdvertisingState:(id)arg1;
- (void)dealloc;
- (id)initWithUIController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

