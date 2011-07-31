/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIMoviePlayerController.h"

@class MPMovieErrorLog, MPMovieAccessLog, MPAVItem, MPVideoViewController, UIMovieSnapshotView, UIView, UIImage, UINavigationController, NSString, MPVideoView, MPTransitionController;

@interface UIMoviePlayerController : XXUnknownSuperclass {
	MPAVItem* _item;
	NSString* _moviePath;
	UIImage* _posterImage;
	id _delegate;
	NSString* _youTubeVideoID;
	UIView* _topmostView;
	MPVideoViewController* _activeVideoController;
	MPVideoView* _videoView;
	MPTransitionController* _transitionController;
	int _transitionCount;
	UINavigationController* _portraitNavigationController;
	CFBagRef _ignoredChangeTypes;
	int _pendingInterfaceOrientation;
	MPAVItem* _pendingItem;
	MPAVItem* _pendingItemWithDifferentType;
	CGRect _layoutRect;
	int _lastSetUIInterfaceOrientation;
	int _interfaceOrientation;
	int _interfaceOrientationFromDevice;
	NSString* _playbackErrorDescription;
	unsigned _autoRotationMask;
	unsigned _displayableParts;
	unsigned _unmodifiedDisplayableParts;
	unsigned _desiredParts;
	unsigned _audioControlsStyle;
	unsigned _playableContentTypeOverride;
	double _timeWhenResignedActive;
	UIMovieSnapshotView* _snapshotView;
	struct {
		unsigned canShowControlsOverlay : 1;
		unsigned wantsControlsOverlayVis : 1;
		unsigned wantsControlsOverlayAnim : 1;
		unsigned wantsControlsOverlayDisableAutohide : 1;
		unsigned wantsFullscreen : 1;
		unsigned alwaysFullscreen : 1;
		unsigned canAnimateControlsOverlay : 1;
		unsigned autoplayWhenLikelyToKeepUp : 1;
		unsigned externalSourceManagesStatusBar : 1;
		unsigned disallowsVideoOut : 1;
		unsigned exited : 1;
		unsigned generatingOrientationNotifications : 1;
		unsigned forStreaming : 1;
		unsigned isExternalTransformationActive : 1;
		unsigned controlsVisibleBeforeExternalTransformation : 1;
		unsigned isActive : 1;
		unsigned resigningActive : 1;
		unsigned didResignActive : 1;
		unsigned uiPrepared : 1;
		unsigned useLegacyControls : 1;
		unsigned isChangingMoviePath : 1;
		unsigned alwaysAllowHidingControlsOverlay : 1;
		unsigned schedulePortraitLoadingIndicator : 1;
		unsigned clientClearedMoviePath : 1;
		unsigned canCommitStatusBarAndOverlayChanges : 1;
		unsigned videoFrameDisplayOnResumeDisabled : 1;
		unsigned usingDebugTestPath : 1;
		unsigned allowsWirelessPlayback : 1;
	} _mpcBitfield;
}
@property(assign, nonatomic) unsigned audioControlsStyle;
@property(retain, nonatomic) MPAVItem* item;
@property(copy, nonatomic) NSString* playbackErrorDescription;
@property(copy, nonatomic) NSString* youTubeVideoID;
@property(assign, nonatomic) BOOL videoFrameDisplayOnResumeDisabled;
@property(assign, nonatomic) BOOL alwaysAllowHidingControlsOverlay;
@property(assign, nonatomic) BOOL useLegacyControls;
@property(readonly, assign, nonatomic) MPMovieErrorLog* errorLog;
@property(readonly, assign, nonatomic) MPMovieAccessLog* accessLog;
@property(readonly, assign, nonatomic) UIView* fullscreenView;
@property(assign, nonatomic, getter=isFullscreen) BOOL fullscreen;
@property(retain, nonatomic) UIImage* backgroundPlaceholderImage;
@property(retain, nonatomic) UIImage* posterImage;
@property(assign, nonatomic) BOOL disallowsVideoOut;
@property(readonly, assign, nonatomic) CGSize naturalSize;
@property(readonly, assign, nonatomic) MPVideoView* movieView;
@property(readonly, assign, nonatomic) BOOL canContinuePlayingWhenLocked;
@property(readonly, assign, nonatomic) BOOL canContinuePlayingInBackground;
@property(readonly, assign, nonatomic) BOOL videoOutActive;
@property(readonly, assign, nonatomic) long long fileSize;
@property(readonly, assign, nonatomic) double seekableEndTime;
@property(readonly, assign, nonatomic) double seekableStartTime;
@property(readonly, assign, nonatomic) double playableEndTime;
@property(readonly, assign, nonatomic) double playableStartTime;
@property(readonly, assign, nonatomic) double playableDuration;
@property(readonly, assign, nonatomic) unsigned bufferingState;
@property(readonly, assign, nonatomic) float volume;
@property(readonly, assign, nonatomic) BOOL muted;
@property(assign, nonatomic) double currentTime;
@property(readonly, assign, nonatomic) double duration;
@property(readonly, assign, nonatomic) unsigned playbackState;
@property(readonly, assign, nonatomic) float playbackRate;
@property(readonly, assign, nonatomic) BOOL isPreparedForPlayback;
@property(assign, nonatomic) unsigned playableContentType;
@property(assign, nonatomic) id delegate;
@property(readonly, assign, nonatomic) UIView* view;
@property(copy, nonatomic) NSString* moviePath;
@property(assign, nonatomic) unsigned options;
+(CGSize)fillSizeForMovieBounds:(CGRect)movieBounds movieNaturalSize:(CGSize)size orientation:(int)orientation destinationTVOut:(BOOL)anOut;
+(void)allInstancesResignActive;
-(void)delayedDebugSetup;
-(void)debugSetup;
-(id)initWithPlayerSize:(CGSize)playerSize options:(unsigned)options;
-(id)initWithPlayerSize:(CGSize)playerSize;
-(void)dealloc;
-(void)unlockMoviePlaybackResources;
-(void)setItem:(id)item animated:(BOOL)animated;
-(void)setAutoPlayWhenLikelyToKeepUp:(BOOL)keepUp;
-(void)setManagesStatusBar:(BOOL)bar;
-(void)setAttemptAutoPlayWhenControlsHidden:(BOOL)hidden;
-(void)prepareForPlayback;
-(void)play;
-(void)pause;
-(void)stop;
-(void)setCurrentTime:(double)time timeSnapOption:(unsigned)option;
-(void)view:(id)view willMoveToWindow:(id)window;
-(void)view:(id)view didMoveToWindow:(id)window;
-(id)_topView;
-(void)_setActiveViewController:(id)controller forTransition:(BOOL)transition;
-(id)_activeVideoController;
-(id)createTransitionControllerForChangeToInterfaceOrientation:(int)interfaceOrientation fromInterfaceOrientation:(int)interfaceOrientation2;
-(id)createViewControllerForItem:(id)item interfaceOrientation:(int)orientation reusingController:(id)controller;
-(void)_initializeVideoViewController:(id)controller orientation:(int)orientation;
-(id)_containerViewForController:(id)controller;
-(id)_parentViewControllerForController:(id)controller;
-(void)_prepareContainersForSwitchToActiveController:(id)activeController;
-(void)_tearDownContainersForSwitchFromViewController:(id)viewController;
-(void)_commitFinishInitializeActiveViewController:(id)controller animate:(BOOL)animate;
-(void)_finishInitializeActiveViewController:(id)controller forTransition:(BOOL)transition;
-(void)portraitDoneButtonAction:(id)action;
-(void)portraitScaleButtonAction:(id)action;
-(id)_portraitNavigationController:(BOOL)controller;
-(void)_preparePortraitViewControllerContainers;
-(void)_tearDownPortraitViewControllerContainers;
-(id)_portraitNavigationRootController:(BOOL)controller;
-(BOOL)shouldDisplayTitles;
-(id)_titlesForPortraitNavigationBarAtTime:(double)time;
-(id)_titlesViewForNavigationItem:(id)navigationItem;
-(id)_portraitNavigationControllerTitleView;
-(void)_reconfigurePortraitNavigationItem:(id)item time:(double)time animate:(BOOL)animate;
-(void)_delayedShowPortraitLoading;
-(void)_setPortraitLoadingShowing:(BOOL)showing;
-(void)_hideLoadingForStateChange:(id)stateChange;
-(void)_schedulePortraitLoadingIndicatorIfNeeded;
-(void)_reconfigurePortraitNavigationBarNowIfNecessary;
-(void)crossedChapterTimeMarker:(id)marker;
-(void)_videoViewScaleModeDidChangeNotification:(id)_videoViewScaleMode;
-(void)beginIgnoringChangeTypes:(unsigned)types;
-(BOOL)_noteStoppedIgnoringChangeType:(unsigned)type;
-(BOOL)_shouldIgnoreChangeType:(unsigned)type;
-(void)endIgnoringChangeTypes:(unsigned)types;
-(void)beginTransition;
-(void)endTransition;
-(void)_transitionFinished:(id)finished;
-(void)viewController:(id)controller beginIgnoringChangeTypes:(unsigned)types;
-(void)viewController:(id)controller endIgnoringChangeType:(unsigned)type;
-(void)performTransition:(id)transition;
-(void)_performTransition:(id)transition toController:(id)controller;
-(void)_reloadForTransitionFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2 animated:(BOOL)animated;
-(int)orientation;
-(BOOL)setOrientation:(int)orientation animated:(BOOL)animated forced:(BOOL)forced;
-(BOOL)setUIOrientation:(int)orientation animated:(BOOL)animated forced:(BOOL)forced;
-(unsigned)autoRotationMask;
-(void)setAutoRotationMask:(unsigned)mask;
-(void)setDesiredMovieParts:(unsigned)parts animated:(BOOL)animated;
-(void)setDisplayableMovieParts:(unsigned)parts animated:(BOOL)animated;
-(void)setDisplayable:(BOOL)displayable movieParts:(unsigned)parts animated:(BOOL)animated;
-(void)setCanAnimateControlsOverlay:(BOOL)overlay;
-(void)setCanShowControlsOverlay:(BOOL)overlay;
-(void)setControlsOverlayVisible:(BOOL)visible disableAutohide:(BOOL)autohide animate:(BOOL)animate;
-(void)setAllowsDetailScrubbing:(BOOL)scrubbing;
-(void)setAllowsWirelessPlayback:(BOOL)playback;
-(void)layoutUIInRect:(CGRect)rect;
-(CGRect)moviePlaceholderImageRectForMovieWithAspectRatio:(float)aspectRatio;
-(void)_prepareAndSetupUI;
-(void)_prepareAndSetupUIForClient;
-(void)prepareAndSetupUI;
-(void)tearDownUI;
-(id)backgroundView;
-(void)beginExternalTransformation;
-(void)endExternalTransformation;
-(void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;
-(void)setInlinePlaybackUsesTVOut:(BOOL)anOut;
-(void)viewControllerRequestsExit:(id)exit reason:(int)reason;
-(BOOL)videoController:(id)controller tappedButtonPart:(unsigned)part;
-(BOOL)videoControllerShouldAutohide:(id)videoController;
-(BOOL)videoControllerShouldShowPositionInQueueUI:(id)videoController;
-(void)videoControllerWillEnterFullscreen:(id)videoController;
-(void)videoControllerDidEnterFullscreen:(id)videoController;
-(void)videoControllerWillExitFullscreen:(id)videoController reason:(int)reason;
-(void)videoControllerDidExitFullscreen:(id)videoController;
-(void)videoControllerWillShowOverlay:(id)videoController;
-(void)videoControllerDidShowOverlay:(id)videoController;
-(void)videoControllerWillHideOverlay:(id)videoController;
-(void)videoControllerDidHideOverlay:(id)videoController;
-(void)videoControllerDidCreateFullscreenView:(id)videoController;
-(CGRect)videoControllerFrameAfterFullscreenExit:(id)exit;
-(void)snapshotViewWasTapped:(id)tapped;
-(void)_pausePlaybackForNotification:(id)notification;
-(void)_willSuspendNotification:(id)notification;
-(void)_willBeginSuspendAnimationNotification:(id)notification;
-(void)_willResignNotification:(id)notification;
-(void)_willTerminateNotification:(id)notification;
-(void)_simpleRemoteNotification:(id)notification;
-(void)_bufferingStateChangedNotification:(id)notification;
-(void)_itemChangedNotification:(id)notification;
-(void)_serverDeathNotification:(id)notification;
-(void)_validityChangedNotification:(id)notification;
-(void)_playbackStateChanged:(id)changed;
-(void)_tvOutCapabilityChanged:(id)changed;
-(void)_deviceOrientationChanged:(id)changed;
-(void)_rateDidChangeNotification:(id)_rate;
-(void)_itemReadyToPlayNotification:(id)playNotification;
-(void)_timeDidJumpNotification:(id)_time;
-(void)_itemPlaybackDidEndNotification:(id)_itemPlayback;
-(void)_itemPlaybackDidFailNotification:(id)_itemPlayback;
-(void)_timedMetadataAvailableNotification:(id)notification;
-(void)_tickNotification:(id)notification;
-(void)_volumeDidChangeNotification:(id)_volume;
-(void)_mutedDidChangeNotification:(id)_muted;
-(void)_videoViewPathWillChangeNotification:(id)_videoViewPath;
-(void)_ensureActive;
-(void)_resignActive;
-(void)_addSnapshotViewForTime:(double)time;
-(void)_removeSnapshotView;
-(void)_moviePlayerWillBecomeActiveNotification:(id)_moviePlayer;
-(void)_moviePlayerDidBecomeActiveNotification:(id)_moviePlayer;
-(void)_didEnterBackgroundNotification:(id)notification;
-(void)_willEnterForegroundNotification:(id)notification;
-(void)_registerForNotifications;
-(void)_unregisterForNotifications;
-(unsigned)_convertedPartsMask:(unsigned)mask;
-(unsigned)_convertedVisiblePartsMask:(unsigned)mask;
-(void)_exitPlayer:(int)player;
-(int)_exitReasonForMPViewControllerExitReason:(int)mpviewControllerExitReason;
-(void)_updateEnabledParts;
-(void)_beginDeviceOrientationNotifications;
-(void)_endDeviceOrientationNotifications;
-(BOOL)_canAutoRotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)_autoRotateToCurrentOrientationAnimated:(BOOL)currentOrientationAnimated;
-(void)_autoRotateToInterfaceOrientation:(int)interfaceOrientation animated:(BOOL)animated;
-(void)_updatePlayableContentTypeOverride;
-(id)_backgroundPlaceholderView;
-(void)_updateForStreamingOptions;
-(void)_setTVOutEnabled:(BOOL)enabled;
@end

@interface UIMoviePlayerController (Deprecated)
+(Class)preferredWindowClass;
-(id)initWithPlayerSize:(CGSize)playerSize isFullScreen:(BOOL)screen;
-(id)initWithPlayerSize:(CGSize)playerSize isFullScreen:(BOOL)screen options:(unsigned)options;
-(void)layoutUIInRect:(CGRect)rect fullScreen:(BOOL)screen;
-(BOOL)isFullScreen;
-(id)playerView;
@end

