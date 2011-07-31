/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBWiFiManagerDelegate.h"
#import "UIApplicationDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard.h"

@class SBApplication, SBDimmingWindow, NSTimer, NSURL, NSSet, NSDictionary, NSString, NSMutableArray, SBUIController, NSNumberFormatter, NSDate;

@interface SpringBoard : XXUnknownSuperclass <UIApplicationDelegate, SBWiFiManagerDelegate> {
	SBUIController* _uiController;
	NSTimer* _menuButtonTimer;
	NSTimer* _lockButtonTimer;
	NSTimer* _idleTimer;
	NSTimer* _autoLockTimer;
	double _lastUndimEventTime;
	double _lastTimeIdleCausedDim;
	double _headsetButtonDownTime;
	GSEventRef _headsetDownEvent;
	int _headsetClickCount;
	SBDimmingWindow* _simulatedBlankingWindow;
	unsigned _headsetButtonClickCount : 8;
	unsigned _menuButtonClickCount : 8;
	unsigned _screenWasDimOnMenuDown : 1;
	unsigned _waitingForMenuDoubleTapAfterActingOnSingleTap : 1;
	unsigned _screenshotWasTaken : 1;
	unsigned _disableAutoDimming : 1;
	unsigned _dontLockOnNextLockUp : 1;
	unsigned _poweringDown : 1;
	unsigned _headsetDownDelayedActionPerformed : 1;
	unsigned _nowPlayingAppIsPlaying : 1;
	unsigned _isSeekingInMedia : 1;
	unsigned _forcePortraitStatusBarOrientation : 1;
	int _mediaSeekDirection;
	float _currentBacklightLevel;
	unsigned _springBoardRequestsAccelerometerEvents;
	int _activeInterfaceOrientation;
	NSURL* _menuDoubleTapURL;
	int _notifyDontAnimateREOToken;
	int _notifyDontAllowMediaHUDToken;
	NSSet* _restrictionDisabledApplications;
	double _sampleSystemStartTime;
	NSDictionary* _startAppsCPUTimes;
	CFDictionaryRef _registeredSimpleRemoteAppToPriority;
	SBApplication* _registeredSimpleRemoteApp;
	SBApplication* _nowPlayingApp;
	SBApplication* _menuButtonInterceptApp;
	NSString* _originatingOpenURLDisplayId;
	NSMutableArray* _disableNowPlayingHUDAssertionBundleIds;
	NSNumberFormatter* _decimalFormatter;
	NSNumberFormatter* _percentFormatter;
	NSTimer* _midnightTimer;
	NSDate* _midnightFireDate;
	opaque_pthread_t* _backgroundMIGServerThread;
}
@property(retain, nonatomic) SBApplication* menuButtonInterceptApp;
+(BOOL)registerForSystemEvents;
+(BOOL)rendersLocally;
-(id)init;
-(void)_createLogFile;
-(void)writeLogFile;
-(void)handleKeyEvent:(GSEventRef)event;
-(void)setHardwareKeyboardLayoutName:(id)name;
-(void)updateStackshotSettings;
-(void)updatePowerlog;
-(void)applicationDidFinishLaunching:(id)application;
-(void)appleIconViewRemoved;
-(BOOL)launchedAfterLanguageRestart;
-(void)clearLaunchedAfterLanguageRestart;
-(void)languageChanged;
-(void)wipeDeviceNow;
-(void)checkPasscodeCompliance;
-(void)showEDGEActivationFailureAlert:(id)alert reason:(id)reason forMMS:(BOOL)mms;
-(void)showWiFiAlert;
-(void)showWiFiEnterpriseTrustAlert:(id)alert;
-(void)wifiManager:(id)manager scanCompleted:(id)completed;
-(void)_effectiveSettingsDidChange;
-(void)userDefaultsDidChange:(id)userDefaults;
-(void)_mapsVisibilityChanged;
-(void)_testPhoneAlerts;
-(void)runFieldTestScript;
-(void)_significantTimeChange;
-(void)significantTimeChange;
-(void)batteryStatusDidChange:(id)batteryStatus;
-(BOOL)shouldRunFieldTestScript;
-(BOOL)iapIsInExtendedMode;
-(BOOL)canShowLockScreenHUDControls;
-(BOOL)canShowNowPlayingHUD;
-(BOOL)canShowNowPlayingControls;
-(void)setAppDisabledNowPlayingHUD:(BOOL)hud bundleIdentifier:(id)identifier;
-(BOOL)respondImmediatelyToMenuSingleTapAllowingDoubleTap:(BOOL*)menuSingleTapAllowingDoubleTap;
-(void)goToSpotlight:(BOOL)spotlight;
-(BOOL)handleDoubleTapAction;
-(void)handleMenuDoubleTap;
-(void)_setMenuButtonTimer:(id)timer;
-(void)_setLockButtonTimer:(id)timer;
-(void)cancelMenuButtonRequests;
-(void)clearMenuButtonTimer;
-(void)_menuButtonWasHeld;
-(void)menuButtonDown:(GSEventRef)down;
-(void)menuButtonUp:(GSEventRef)up;
-(void)_giveUpOnMenuDoubleTap;
-(void)_keyboardAvailabilityChanged;
-(void)_startSeekWithDirection:(id)direction;
-(void)mediaKeyDown:(GSEventRef)down;
-(void)mediaKeyUp:(GSEventRef)up;
-(void)_handleMenuButtonEvent;
-(void)lockButtonDown:(GSEventRef)down;
-(void)lockButtonWasHeld;
-(void)extendButtonTimersForWake;
-(void)_powerDownNow;
-(void)_rebootNow;
-(void)reboot;
-(void)powerDown;
-(BOOL)isPoweringDown;
-(void)powerDownRequested:(id)requested;
-(void)powerDownCanceled:(id)canceled;
-(void)relaunchSpringBoard;
-(void)_relaunchSpringBoardNow;
-(void)lockButtonUp:(GSEventRef)up;
-(void)_performDelayedHeadsetAction;
-(void)_performDelayedHeadsetClickTimeout;
-(id)simpleRemoteDestinationApp;
-(void)sendSimpleRemoteActionToRegisteredApp:(int)registeredApp;
-(void)_iapServerConnectionDiedNotification:(id)notification;
-(void)_iapExtendedModeReset;
-(void)_imagesMounted;
-(void)_setDeferredHeadsetButtonDownEvent:(GSEventRef)event;
-(void)headsetButtonDown:(GSEventRef)down;
-(void)headsetButtonUp:(GSEventRef)up;
-(void)headsetAvailabilityChanged:(GSEventRef)changed;
-(void)smsPrefsChanged;
-(void)ALSPrefsChanged:(id)changed;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)profileConnection userInfo:(id)info;
-(void)updateCapabilitiesAndIconVisibility;
-(BOOL)isDisplayIdentifierRestrictionDisabled:(id)disabled;
-(void)loadDebuggingAndDemoPrefs;
-(void)debuggingAndDemoPrefsWereChanged;
-(void)localeChanged;
-(void)autoLockPrefsChanged;
-(void)pinPolicyChanged;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)profileConnection userInfo:(id)info;
-(void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)profileConnection userInfo:(id)info;
-(void)ringerChanged:(int)changed;
-(void)_updateRingerStateWithVisuals:(BOOL)visuals;
-(void)accessoryKeyStateChanged:(GSEventRef)changed;
-(unsigned)_frontmostApplicationPort;
-(void)quitTopApplication:(GSEventRef)application;
-(void)applicationExited:(GSEventRef)exited;
-(void)anotherApplicationFinishedLaunching:(GSEventRef)launching;
-(void)applicationSuspend:(GSEventRef)suspend;
-(void)applicationSuspended:(GSEventRef)suspended;
-(void)applicationSuspendedSettingsUpdated:(GSEventRef)updated;
-(void)statusBarReturnActionTap:(GSEventRef)tap;
-(int)statusBar:(id)bar styleForRequestedStyle:(int)requestedStyle overrides:(int)overrides;
-(void)hideSpringBoardStatusBar;
-(void)showSpringBoardStatusBar;
-(void)setSpringBoardStatusBarAlpha:(float)alpha;
-(void)setSpringBoardStatusBarOpaque:(BOOL)opaque;
-(void)showAlertForUnhandledURL:(id)unhandledURL error:(int)error;
-(void)_applicationOpenURL:(id)url event:(GSEventRef)event;
-(BOOL)applicationCanOpenURL:(id)url publicURLsOnly:(BOOL)only;
-(void)applicationOpenURL:(id)url;
-(void)applicationOpenURL:(id)url publicURLsOnly:(BOOL)only;
-(void)applicationOpenURL:(id)url publicURLsOnly:(BOOL)only animating:(BOOL)animating;
-(void)applicationOpenURL:(id)url publicURLsOnly:(BOOL)only animating:(BOOL)animating sender:(id)sender;
-(BOOL)canOpenURL:(id)url;
-(void)volumeChanged:(GSEventRef)changed;
-(void)setBacklightFactorPending:(float)pending;
-(void)setBacklightFactor:(float)factor keepTouchOn:(BOOL)on;
-(void)setBacklightFactor:(float)factor;
-(void)animateBacklightToFactor:(float)factor duration:(double)duration keepTouchOn:(BOOL)on didFinishTarget:(id)target selector:(SEL)selector;
-(void)animateBacklightToFactor:(float)factor duration:(double)duration didFinishTarget:(id)target selector:(SEL)selector;
-(void)setBacklightLevel:(float)level;
-(void)setBacklightLevel:(float)level permanently:(BOOL)permanently;
-(float)currentBacklightLevel;
-(float)systemBacklightLevel;
-(void)systemWillSleep;
-(void)setupMidnightTimer;
-(void)_midnightPassed;
-(void)_adjustMidnightTimerAfterSleep;
-(void)setBacklightFactorToZero;
-(void)cancelSetBacklightFactorToZeroAfterDelay;
-(void)setBacklightFactorToZeroAfterDelay;
-(void)showSimulatedScreenBlank;
-(void)hideSimulatedScreenBlank;
-(void)dimToBlackKeepingTouchOn;
-(void)undim;
-(void)lockAfterCall;
-(BOOL)shouldDimToBlackInsteadOfLock;
-(void)autoLock;
-(void)didIdle;
-(double)nextIdleTimeDuration;
-(double)nextLockTimeDuration;
-(void)clearIdleTimer;
-(void)resetIdleTimerAndUndim;
-(void)resetIdleTimerAndUndim:(BOOL)undim;
-(void)_proximityChanged:(id)changed;
-(BOOL)caseIsEnabledAndLatched;
-(BOOL)allowCaseLatchLockAndUnlock;
-(void)keyboardOrCaseLatchWantsToAttemptUnlock:(id)attemptUnlock;
-(void)noteCaseHardwarePresent;
-(void)caseLatchWantsToAttemptLock;
-(void)userEventOccurred;
-(void)updateRejectedInputSettings;
-(void)updateRejectedInputSettingsForInCallState:(BOOL)callState isOutgoing:(BOOL)outgoing;
-(void)lockDevice:(GSEventRef)device;
-(void)showThermalAlertIfNecessary;
-(void)respondToCurrentThermalCondition;
-(void)_beginThermalJetsamCPUSampling;
-(void)_killThermallyActiveApplication;
-(id)_newAppsCPUTimesDictionary;
-(void)didReceiveMemoryWarning;
-(void)noteSubstantialTransitionOccured;
-(void)updateMirroredDisplayOrientation;
-(void)noteInterfaceOrientationChanged:(int)changed;
-(void)noteInterfaceOrientationChanged:(int)changed updateMirroredDisplays:(BOOL)displays;
-(int)activeInterfaceOrientation;
-(int)currentInterfaceOrientation;
-(int)_frontMostAppOrientation;
-(int)launchingInterfaceOrientation;
-(void)reportStatusBarOrientationAsPortrait:(BOOL)portrait;
-(int)statusBarOrientation;
-(BOOL)_alertWindowShouldRotate;
-(double)windowRotationDuration;
-(void)setSystemVolumeHUDEnabled:(BOOL)enabled forAudioCategory:(id)audioCategory;
-(void)_migrateMenuDoubleTapSetting;
-(void)updateMenuDoubleTapSettings;
-(void)setZoomTouchEnabled:(BOOL)enabled;
-(id)springBoardPluginsDirectory;
-(void)updateProximitySettings;
-(void)updateAirPortForDisplay:(id)display;
-(void)frontDisplayDidChange;
-(void)applicationWillOrderInContext:(unsigned)application windowLevel:(float)level windowOutput:(int)output;
-(void)applicationDidOrderOutContext:(unsigned)application;
-(void)didDismissMiniAlert;
-(void)willDisplayMiniAlert:(int*)alert;
-(void)willDismissMiniAlert:(int*)alert andShowAnother:(BOOL)another;
-(void)setHasMiniAlerts:(BOOL)alerts;
-(BOOL)canShowAlerts;
-(BOOL)isLocked;
-(int)alertOrientation;
-(void)launchMusicPlayerSuspended;
-(void)_launchMusicPlayerSuspendedAndStartMusic;
-(void)_tearDownNow;
-(void)tearDown;
-(void)_nowPlayingAppDidChangeNotification:(id)_nowPlayingApp;
-(BOOL)isMusicPlayerInNowPlayingView;
-(id)nowPlayingApp;
-(BOOL)isNowPlayingAppPlaying;
-(BOOL)isMusicPlayerPlaying;
-(void)setNowPlayingInfo:(id)info forApplication:(id)application;
-(void)_updateRegisteredSimpleRemoteApp;
-(void)setSimpleRemoteRoutingPriority:(unsigned)priority forApplication:(id)application;
-(unsigned)simpleRemoteRoutingPriorityForApplication:(id)application;
-(id)formattedDecimalStringForNumber:(id)number;
-(id)formattedPercentStringForNumber:(id)number;
-(id)_accessibilityFrontMostApplication;
-(id)_accessibilityTopDisplay;
-(id)_accessibilityRunningApplications;
-(BOOL)_accessibilityIsSystemGestureActive;
-(BOOL)_accessibilityObjectWithinProximity;
-(void)_accessibilitySetEventTapCallback:(void*)callback;
-(void*)_accessibilityEventTapCallback;
-(BOOL)_accessibilityIsSBStealingEvents;
-(double)_accessibilityActivationAnimationStartDelay;
-(void)_accessibilityActivationAnimationWillBegin;
-(double)_accessibilityDeactivationAnimationStartDelay;
-(void)_accessibilityDeactivationAnimationWillBegin;
-(BOOL)_isSwitcherShowing;
@end

@interface SpringBoard (ScriptingAdditions)
-(id)setNextVoiceRecognitionAudioInputPaths:(id)paths;
@end

@interface SpringBoard (SBApplicationTesting)
-(BOOL)runTest:(id)test options:(id)options;
-(void)_retryLaunchTestWithOptions:(id)options;
-(void)startLaunchTestNamed:(id)named options:(id)options;
-(void)startResumeTestNamed:(id)named options:(id)options;
-(void)endLaunchTest;
@end

@interface SpringBoard (AlertSheetAdditions)
-(void)_alertSheetStackChanged;
@end

