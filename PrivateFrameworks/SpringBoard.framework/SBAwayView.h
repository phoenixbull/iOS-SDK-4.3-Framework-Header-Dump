/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSlidingAlertDisplay.h"
#import "SpringBoard-Structs.h"
#import "UIKeyInput.h"

@class UIPushButton, SBActivationView, SBAwayInCallController, SBAwayDateView, UIView, SBAlertImageView, SBAwayChargingView, SBAwaySwipeGestureRecognizer, NSTimer, SBAwayItemsView, NSDictionary, TPBottomButtonBar, SBAwayViewPluginController, SBAwayLockBar, UIAlertView;

@interface SBAwayView : SBSlidingAlertDisplay <UIKeyInput> {
	BOOL _isDimmed;
	BOOL _fullscreen;
	BOOL _alwaysFullscreen;
	BOOL _deferAwayItemFetching;
	BOOL _showingBlockedIndicator;
	BOOL _hasTelephony;
	BOOL _wasShowingAlertAtDismiss;
	BOOL _removingAlertAtUnlock;
	BOOL _awayPluginIsVisible;
	BOOL _ignoreFullScreenUpdates;
	SBAwayChargingView* _chargingView;
	SBAwayDateView* _dateView;
	SBAwayItemsView* _awayItemsView;
	SBActivationView* _activationView;
	SBAlertImageView* _firewireWarningView;
	SBAwayViewPluginController* _awayPluginController;
	SBAwaySwipeGestureRecognizer* _gestureRecognizer;
	NSTimer* _mediaControlsTimer;
	NSTimer* _fullscreenTimer;
	NSTimer* _chargingViewTimer;
	NSDictionary* _nowPlayingInfo;
	BOOL _isPlaying;
	NSDictionary* _currentPluginFadeAnimationContext;
	NSTimer* _blockedStatusUpdateTimer;
	UIAlertView* _alertSheet;
	int _alertSheetPosition;
	SBAwayInCallController* _inCallController;
	SBAwayLockBar* _lockBar;
	TPBottomButtonBar* _cancelSyncBar;
	UIPushButton* _infoButton;
	float _mediaControlHeightDelta;
	UIView* _legalTextView;
}
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int returnKeyType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
+(id)newBottomBarForInstance:(id)instance;
+(id)lockLabels:(BOOL)labels fontSize:(float*)size;
-(void)_clearBlockedStatusUpdateTimer;
-(id)initWithFrame:(CGRect)frame;
-(void)layoutForInterfaceOrientation:(int)interfaceOrientation;
-(void)alertDisplayWillBecomeVisible;
-(void)postLockCompletedNotification:(BOOL)notification;
-(void)dealloc;
-(void)_postLockCompletedNotification;
-(void)finishedAnimatingIn;
-(void)dismiss;
-(void)finishedAnimatingOut;
-(float)durationForOthersActivation;
-(void)setBottomLockBar:(id)bar;
-(BOOL)shouldShowBottomBar;
-(BOOL)shouldAnimateIn;
-(BOOL)shouldAnimateIconsOut;
-(BOOL)isAnimating;
-(void)startAnimations;
-(void)stopAnimations;
-(void)showInfoButton;
-(void)hideInfoButton;
-(void)setLockoutUIVisible:(BOOL)visible mode:(int)mode;
-(void)updateUIForRestorationState:(int)restorationState;
-(void)updateUIForResetState:(int)resetState;
-(void)addFirewireWarningView;
-(void)removeFirewireWarningView;
-(BOOL)shouldShowChargingView;
-(BOOL)isShowingWallpaper;
-(void)_fixupFirstResponder;
-(void)dismissMediaControlsOverlaysAnimated:(BOOL)animated;
-(void)updateInterface;
-(void)_setMiddleSubviewsAlpha:(float)alpha;
-(void)setMiddleContentAlpha:(float)alpha;
-(void)setDimmed:(BOOL)dimmed;
-(BOOL)dimmed;
-(void)lockBarUnlocked:(id)unlocked freezeKnobInLockedPosition:(BOOL)lockedPosition;
-(void)lockBarUnlocked:(id)unlocked;
-(void)lockBarStartedTracking:(id)tracking;
-(void)lockBarStoppedTracking:(id)tracking;
-(void)updateLockBarLabel;
-(id)currentAwayPluginController;
-(void)removePluginController:(BOOL)controller;
-(void)_setPluginController:(id)controller;
-(void)_finalizeAndClearPluginAnimationContext;
-(void)_pluginFadeInAnimationDidStop:(id)_pluginFadeInAnimation finished:(id)finished context:(void*)context;
-(void)_fullscreenAnimationStopped:(id)stopped finished:(id)finished context:(void*)context;
-(void)setFullscreen:(BOOL)fullscreen duration:(double)duration force:(BOOL)force;
-(void)setFullscreen:(BOOL)fullscreen duration:(double)duration;
-(BOOL)isFullscreen;
-(BOOL)isAlwaysFullscreen;
-(void)setAlwaysFullscreen:(BOOL)fullscreen;
-(void)setIgnoreFullScreenUpdates:(BOOL)updates;
-(void)_setAwayViewGesturesEnabled:(BOOL)enabled;
-(void)windowGestureWasCompleted:(id)completed;
-(BOOL)shouldShowBlockedRedStatus;
-(void)_updateBlockedStatusLabel;
-(void)deviceUnlockCanceled;
-(void)showBlockedStatus;
-(void)removeBlockedStatus;
-(void)_updateBlockedStatus;
-(id)_currentTitleForDateView;
-(id)dateView;
-(void)removeDateView;
-(void)addDateView;
-(void)awayDateViewDidChangeTitle:(id)awayDateView;
-(id)inCallController;
-(BOOL)shouldShowInCallInfo;
-(void)updateInCallInfo;
-(void)_positionAwayItemsView;
-(void)hideAwayItems;
-(void)showAwayItems;
-(BOOL)hasAwayItems;
-(void)animateToHidingDeviceLockFinished;
-(void)setShowingDeviceLock:(BOOL)lock duration:(float)duration;
-(void)showAlertSheet:(id)sheet;
-(void)removeAlertSheet;
-(void)slideAlertSheetOut:(BOOL)anOut direction:(BOOL)direction duration:(float)duration;
-(void)_recenterAlertSheet;
-(id)chargingView;
-(void)showChargingView;
-(void)hideChargingView;
-(void)updateChargingView;
-(void)startChargingViewTimer;
-(void)_chargingViewTimerFired;
-(void)_didFadeChargingView;
-(void)clearChargingViewTimer;
-(void)_hideChargingViewAndClearTimer;
-(void)clearMediaControlsTimer;
-(void)restartMediaControlsTimer;
-(void)restartMediaControlsTimerIfNecessary;
-(void)hideMediaControls;
-(void)_hideMediaControls;
-(void)showMediaControls;
-(void)toggleMediaControls;
-(BOOL)isShowingMediaControls;
-(BOOL)isMediaControlsShowingOverlays;
-(float)mediaControlHeightDelta;
-(BOOL)isPlaying;
-(void)setPlaying:(BOOL)playing;
-(BOOL)hasNowPlayingInfo;
-(BOOL)hasNowPlayingInfoFromiPod;
-(id)_topBarLCDControlsImage;
-(void)updateTopBarBackground;
-(void)showSyncingBottomBar:(BOOL)bar;
-(void)hideSyncingBottomBar:(BOOL)bar;
-(void)updateNowPlayingInfo:(id)info;
-(void)enableOrDisableNowPlayingPlugin;
-(void)cancelFullscreenTimer;
-(void)restartFullscreenTimer;
-(void)_fullscreenTimerFired;
-(void)restartFullscreenTimerIfNecessary;
-(BOOL)handleMenuButtonTap;
-(void)didMoveToWindow;
-(void)animateToShowingDeviceLock:(BOOL)showingDeviceLock duration:(float)duration;
-(void)_networkTetheringStateChanged:(id)changed;
-(BOOL)canBecomeFirstResponder;
-(BOOL)hasText;
-(void)insertText:(id)text;
-(void)deleteBackward;
-(void)forwardInvocation:(id)invocation;
-(void)_initializeLegalTextOverlay;
-(void)_layoutLegalTextOverlay;
@end

