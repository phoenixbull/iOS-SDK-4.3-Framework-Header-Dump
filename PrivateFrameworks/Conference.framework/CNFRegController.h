/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, IMAccount, NSTimer, IMServiceImpl, NSMutableArray;

@interface CNFRegController : XXUnknownSuperclass {
@private
	IMAccount* _account;
	NSMutableArray* _aliases;
	id _accountRegistrationBlock;
	id _displayNameChangedBlock;
	id _accountAddedBlock;
	id _accountRemovedBlock;
	id _aliasStatusChangedBlock;
	id _aliasRemovedBlock;
	id _aliasAddedBlock;
	id _profileChangedBlock;
	id _profileStatusChangedBlock;
	id _accountAuthorizationChangedBlock;
	id _resetBlock;
	id _alertHandler;
	NSTimer* _idlePulseTimer;
	NSTimer* _wifiAlertWatchTimer;
	int _requiredWifiCount;
	unsigned char _originalWifiFlag;
	unsigned char _originalCellFlag;
	BOOL _originalUsesBackgroundNetwork;
	struct {
		unsigned listeningForAccountChanges : 1;
		unsigned listeningForAccountActivation : 1;
		unsigned preventingIdleSleep : 1;
		unsigned showedWifiFirstRunAlert : 1;
	} _controllerFlags;
}
@property(readonly, retain, nonatomic) NSMutableArray* mutableAliases;
@property(retain, nonatomic) IMAccount* account;
@property(copy, nonatomic) id accountRegistrationBlock;
@property(copy, nonatomic) id accountAddedBlock;
@property(copy, nonatomic) id accountRemovedBlock;
@property(copy, nonatomic) id displayNameChangedBlock;
@property(copy, nonatomic) id aliasStatusChangedBlock;
@property(copy, nonatomic) id aliasAddedBlock;
@property(copy, nonatomic) id aliasRemovedBlock;
@property(copy, nonatomic) id resetBlock;
@property(copy, nonatomic) id alertHandler;
@property(copy, nonatomic) id profileChangedBlock;
@property(copy, nonatomic) id profileStatusChangedBlock;
@property(copy, nonatomic) id accountAuthorizationChangedBlock;
@property(readonly, retain, nonatomic) IMServiceImpl* service;
@property(assign, nonatomic, getter=isFaceTimeEnabled) BOOL faceTimeEnabled;
@property(readonly, retain, nonatomic) NSArray* aliases;
+(id)sharedInstance;
+(BOOL)deviceSupportsRegistrationInterface;
-(id)init;
-(void)dealloc;
-(id)guessedAccountName;
-(BOOL)activateAccount:(id)account;
-(BOOL)createAccountWithLogin:(id)login password:(id)password;
-(BOOL)signOutAccount:(id)account;
-(BOOL)signOutCurrentAccount;
-(void)clearAllCaches;
-(void)reloadAliases;
-(id)_rawAccountLogin;
-(id)accountLogin;
-(id)useableAliases;
-(id)guessedAlias;
-(int)validationStatusForAlias:(id)alias;
-(BOOL)validateAlias:(id)alias;
-(BOOL)hasAlias:(id)alias;
-(BOOL)addAlias:(id)alias;
-(BOOL)removeAlias:(id)alias;
-(int)profileValidationStatus;
-(id)profileRegionID;
-(id)profileBasePhoneNumber;
-(BOOL)hasRegisteredAccount;
-(BOOL)hasValidatedAlias;
-(BOOL)hasValidatedLocale;
-(unsigned)accountState;
-(BOOL)hasFailedLogin;
-(BOOL)hasFailedLoginDueToBadLogin;
-(id)authorizationID;
-(id)authorizationToken;
-(BOOL)refreshAuthorizationCredentials;
-(void)startListeningForAccountChanges;
-(void)stopListeningForAccountChanges;
-(void)accountAdded:(id)added;
-(void)accountRemoved:(id)removed;
-(void)accountRegistrationChanged:(id)changed;
-(void)accountDisplayNameChanged:(id)changed;
-(void)profileChanged:(id)changed;
-(void)profileValidationStateChanged:(id)changed;
-(void)authorizationCredentialsChanged:(id)changed;
-(void)handleAliasStatusChanged:(id)changed withError:(id)error;
-(void)aliasStatusChanged:(id)changed;
-(void)handleAliasAdded:(id)added;
-(void)handleAliasRemoved:(id)removed;
-(void)aliasesChanged:(id)changed;
-(void)removeAllHandlers;
-(void)daemonDisconnected:(id)disconnected;
-(void)daemonConnected:(id)connected;
-(BOOL)isConnected;
-(BOOL)isConnecting;
-(void)connect:(BOOL)connect;
-(void)connect;
-(void)startRequiringWifi;
-(void)stopRequiringWifi;
-(void)_wifiAlertWatchTimerFired:(id)fired;
-(void)_startWiFiAlertWatchTimer;
-(void)_stopWiFiAlertWatchTimer;
-(void)_pulseIdleTimer:(id)timer;
-(void)startPreventingSleepAndDimming;
-(void)stopPreventingSleepAndDimming;
-(BOOL)deviceHasSaneNetworkConnection;
-(BOOL)deviceHasWifiTurnedOn;
-(BOOL)deviceCanTakeNetworkAction;
-(void)showWiFiFirstRunAlert;
-(void)resetWifiFirstRunAlert;
-(void)showWiFiAlertIfNecessary;
-(void)showWiFiAlert;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
@end

