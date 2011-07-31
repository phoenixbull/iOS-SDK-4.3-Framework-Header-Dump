/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSMutableSet;

@interface SBDisplay : XXUnknownSuperclass {
	NSMutableDictionary* _displayValues;
	NSMutableDictionary* _activationValues;
	NSMutableDictionary* _deactivationValues;
	unsigned _displaySettings;
	unsigned _activationSettings;
	unsigned _deactivationSettings;
	NSMutableSet* _suppressVolumeHudCategories;
	float _accelerometerSampleInterval;
	unsigned _disableIdleTimer;
	unsigned _expectsFaceContact : 1;
	unsigned _accelerometerDeviceOrientationChangedEventsEnabled : 1;
	unsigned _proximityEventsEnabled : 1;
	unsigned _suppressHardwareVolumeControl : 1;
	unsigned _showsProgress;
}
+(id)_defaultDisplayState;
+(void)setDefaultValue:(id)value forKey:(id)key displayIdentifier:(id)identifier;
+(id)defaultValueForKey:(id)key displayIdentifier:(id)identifier urlScheme:(id)scheme;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)displayIdentifier;
-(id)urlScheme;
-(void)clearDisplaySettings;
-(void)setDisplaySetting:(unsigned)setting flag:(BOOL)flag;
-(void)setDisplaySetting:(unsigned)setting value:(id)value;
-(id)displayValue:(unsigned)value;
-(BOOL)displaySetting:(unsigned)setting;
-(void)clearActivationSettings;
-(void)setActivationSetting:(unsigned)setting flag:(BOOL)flag;
-(void)setActivationSetting:(unsigned)setting value:(id)value;
-(id)activationValue:(unsigned)value;
-(BOOL)activationSetting:(unsigned)setting;
-(void)clearDeactivationSettings;
-(void)setDeactivationSetting:(unsigned)setting flag:(BOOL)flag;
-(BOOL)deactivationSetting:(unsigned)setting;
-(void)setDeactivationSetting:(unsigned)setting value:(id)value;
-(id)deactivationValue:(unsigned)value;
-(void)activate;
-(void)launchSucceeded:(BOOL)succeeded;
-(void)deactivate;
-(void)deactivated;
-(void)deactivateAfterLocking;
-(void)kill;
-(void)_exitedCommon;
-(void)exitedAbnormally;
-(void)exitedNormally;
-(BOOL)allowsEventOnlySuspension;
-(int)defaultStatusBarStyle;
-(int)statusBarStyle;
-(int)statusBarStyleOverridesToCancel;
-(BOOL)defaultStatusBarHidden;
-(BOOL)statusBarHidden;
-(int)launchingInterfaceOrientationForCurrentOrientation;
-(int)launchingInterfaceOrientationForCurrentOrientation:(int)currentOrientation;
-(BOOL)isNowRecordingApplication;
-(int)effectiveStatusBarStyle;
-(void)setDisableIdleTimer:(BOOL)timer;
-(BOOL)disableIdleTimer;
-(double)autoDimTime;
-(double)autoLockTime;
-(void)setExpectsFaceContact:(BOOL)contact;
-(BOOL)expectsFaceContact;
-(void)setAccelerometerSampleInterval:(double)interval;
-(double)accelerometerSampleInterval;
-(void)setAccelerometerDeviceOrientationChangedEventsEnabled:(BOOL)enabled;
-(BOOL)accelerometerDeviceOrientationChangedEventsEnabled;
-(void)setProximityEventsEnabled:(BOOL)enabled;
-(BOOL)proximityEventsEnabled;
-(void)setShowsProgress:(BOOL)progress;
-(BOOL)showsProgress;
-(void)setSystemVolumeHUDEnabled:(BOOL)enabled forCategory:(id)category;
-(BOOL)showSystemVolumeHUDForCategory:(id)category;
-(void)setHardwareVolumeControlEnabled:(BOOL)enabled;
-(BOOL)hardwareVolumeControlEnabled;
-(void)handleLock:(BOOL)lock;
-(id)description;
-(id)descriptionForDisplaySettings:(unsigned)displaySettings;
-(id)displaySettingsDescription;
-(id)descriptionForActivationSettings:(unsigned)activationSettings;
-(id)activationSettingsDescription;
-(id)descriptionForDeactivationSettings:(unsigned)deactivationSettings;
-(id)deactivationSettingsDescription;
@end

