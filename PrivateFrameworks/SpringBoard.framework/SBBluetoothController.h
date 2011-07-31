/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface SBBluetoothController : XXUnknownSuperclass {
	NSMutableArray* _devices;
	BOOL _tetheringSupported;
}
+(id)sharedInstance;
-(void)dealloc;
-(id)firstBTDeviceToReportBatteryLevel;
-(BOOL)canReportBatteryLevel;
-(int)batteryLevel;
-(void)noteDevicesChanged;
-(void)startWatchingForDevices;
-(void)stopWatchingForDevices;
-(void)iapDeviceChanged:(id)changed;
-(void)addDeviceNotification:(id)notification;
-(void)removeDeviceNotification:(id)notification;
-(void)connectionChanged:(id)changed;
-(void)batteryChanged:(id)changed;
-(void)powerChangedNotification:(id)notification;
-(void)updateBattery;
-(id)deviceForAudioRoute:(id)audioRoute;
-(BOOL)tetheringConnected;
-(BOOL)tetheringPaired;
-(BOOL)tetheringSupported;
@end

