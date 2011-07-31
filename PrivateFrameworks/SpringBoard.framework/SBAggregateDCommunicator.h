/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSTimer;

@interface SBAggregateDCommunicator : XXUnknownSuperclass {
	NSTimer* _periodicFlushTimer;
	NSMutableDictionary* _applicationLastStateTime;
	double _backlightOnStartTime;
	BOOL _backlightOnStartTimeWasOnBattery;
	BOOL _backlightOnStartTimeIsValid;
	double _awakeTimeStart;
	BOOL _awakeTimeStartWasOnBattery;
	BOOL _awakeTimeStartIsValid;
	int _lastConnectionType;
	double _lastConnectionTime;
	BOOL _lastConnectionTimeIsValid;
	double _vpnUsageStartTime;
	BOOL _vpnUsageStartTimeIsValid;
}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_installedApplicationsChanged:(id)changed;
-(void)reportApplicationState:(id)state oldState:(unsigned)state2 newState:(unsigned)state3;
-(void)reportAppSwitcherActivated;
-(void)_batteryStatusChanged:(id)changed;
-(void)reportScreenHasDimmed;
-(void)reportScreenHasUndimmed;
-(void)_forceUpdateBacklightTimers;
-(void)reportDeviceHasAwoken;
-(void)reportDeviceWillSleep;
-(void)_forceUpdateAwakeTimers;
-(void)reportCallDuration:(double)duration connectionType:(int)type;
-(void)reportConnectionTypeChanged;
-(void)_forceUpdateConnectionTypeTimers;
-(void)reportVPNStatusChanged;
-(void)_startVPNConnectionTimer;
-(void)_stopVPNConnectionTimer;
-(void)_forceUpdateVPNConnectionTimer;
-(void)reportDiskUsage;
-(void)reportNANDUsage;
-(void)reportAddressBookSize;
-(void)reportSpringBoardDidLaunch;
-(void)reportCurrentThemalLevel:(int)level;
-(void)_forceUpdateAllTimers:(id)timers;
-(void)synchronousCommit;
-(void)_significantTimeChanged:(id)changed;
@end

