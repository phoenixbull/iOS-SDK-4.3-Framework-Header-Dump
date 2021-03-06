/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary;

@interface FTDeviceSupport : XXUnknownSuperclass {
	NSString* _lastDeviceID;
	NSString* _model;
	BOOL _supportsSMS;
	BOOL _supportsFT;
	BOOL _shouldUseSIMState;
	BOOL _duringRestore;
	BOOL _commCenterDead;
	int _carrierBundleSupported;
}
@property(readonly, assign, nonatomic) NSDictionary* CTNetworkInformation;
@property(readonly, assign, nonatomic) BOOL supportsAppleIDIdentification;
@property(readonly, assign, nonatomic) BOOL supportsSMSIdentification;
@property(readonly, assign, nonatomic) BOOL canSendCalls;
@property(readonly, assign, nonatomic) BOOL canReceiveCalls;
@property(readonly, assign, nonatomic) BOOL canRegister;
@property(readonly, assign, nonatomic) BOOL commCenterDead;
@property(readonly, assign, nonatomic) BOOL registrationSupported;
@property(readonly, assign, nonatomic) BOOL conferencingEnabled;
@property(readonly, assign, nonatomic) BOOL conferencingBlocked;
@property(readonly, assign, nonatomic) BOOL conferencingAllowed;
@property(readonly, assign, nonatomic) NSString* userAgentString;
@property(readonly, assign, nonatomic) NSString* model;
@property(readonly, assign, nonatomic) NSString* deviceIDPrefix;
@property(readonly, assign, nonatomic) NSString* deviceID;
+(id)sharedInstance;
-(oneway void)release;
-(unsigned)retainCount;
-(id)autorelease;
-(id)init;
-(void)dealloc;
-(void)_registerForCapabilityNotifications;
-(void)_unregisterForCapabilityNotifications;
-(void)_updateCapabilities;
-(void)_registerForCommCenterReadyNotifications;
-(void)_unregisterForCommCenterReadyNotifications;
-(void)_commCenterAlive;
-(void)_operatorChanged;
-(void)_carrierChanged;
-(void)_registerForCoreTelephonyNotifications;
-(void)_unregisterForCoreTelephonyNotifications;
-(void)_handleSIMStateChanged:(id)changed;
-(void)_lockdownStateChanged:(id)changed;
-(void)_registerForLockdownNotifications;
-(void)_unregisterForLockdownNotifications;
@end

