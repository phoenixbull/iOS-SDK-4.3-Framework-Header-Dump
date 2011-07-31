/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import "PLCropOverlay.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class TPPushButton, UIButton, UIImageView, UIView, PLCropOverlayBottomBar, TPCameraPushButton, PLCropOverlayCropView, PLToolbar, UIProgressHUD, UILabel, TPBottomDualButtonBar;

@interface PLCropOverlay : XXUnknownSuperclass {
	id _delegate;
	PLCropOverlayCropView* _cropView;
	PLCropOverlayBottomBar* _bottomBar;
	UIImageView* _shadowView;
	UIView* _overlayContainerView;
	CGRect _cropRect;
	PLToolbar* _customToolbar;
	UILabel* _titleLabel;
	UIImageView* _topShineView;
	TPBottomDualButtonBar* _oldBottomBar;
	TPPushButton* _cancelPushButton;
	TPCameraPushButton* _okPushButton;
	UIProgressHUD* _hud;
	float _statusBarHeight;
	int _mode;
	unsigned _cropRectIsVisible : 1;
	unsigned _offsetStatusBar : 1;
	unsigned _tookPhoto : 1;
	unsigned _showsCropRegion : 1;
	unsigned _controlsAreVisible : 1;
	unsigned _isDisplayedInPopover : 1;
	UIImageView* _bottomShineView;
	UIButton* _okButton;
	UIButton* _cancelButton;
	UIView* _wildcatPickerTopView;
	UIView* _wildcatPickerBottomView;
}
-(void)_updateToolbarItems:(BOOL)items;
-(void)layoutSubviews;
-(id)_newOverlayViewWithFrame:(CGRect)frame lighterEdgeOnTop:(BOOL)top;
-(id)initWithFrame:(CGRect)frame mode:(int)mode offsettingStatusBar:(BOOL)bar isDisplayedInPopover:(BOOL)popover;
-(BOOL)controlsAreVisible;
-(void)setControlsAreVisible:(BOOL)visible;
-(id)overlayContainerView;
-(void)setOverlayContainerView:(id)view;
-(id)initWithFrame:(CGRect)frame mode:(int)mode;
-(id)initWithFrame:(CGRect)frame;
-(id)_irisView;
-(void)_createCropView;
-(void)insertIrisView:(id)view;
-(id)bottomBar;
-(CGRect)bottomBarFrame;
-(id)shutterButton;
-(void)setModeSwitch:(id)aSwitch;
-(id)modeSwitch;
-(void)setCropRectVisible:(BOOL)visible duration:(float)duration;
-(void)_setMode:(int)mode;
-(void)didCapturePhoto;
-(void)didCaptureVideo;
-(void)didPlayVideo;
-(void)didPauseVideo;
-(int)mode;
-(void)dealloc;
-(void)statusBarHeightDidChange:(id)statusBarHeight;
-(void)setDelegate:(id)delegate;
-(void)dismiss;
-(void)_fadeOutCompleted:(id)completed;
-(void)cancelButtonClicked:(id)clicked;
-(void)okButtonClicked:(id)clicked;
-(void)cropOverlayBottomBarCancelButtonClicked:(id)clicked;
-(void)cropOverlayBottomBarDoneButtonClicked:(id)clicked;
-(void)cropOverlayBottomBarPlayButtonClicked:(id)clicked;
-(void)_playButtonPressed:(id)pressed;
-(void)cropOverlayBottomBarPauseButtonClicked:(id)clicked;
-(void)_pauseButtonPressed:(id)pressed;
-(void)setEnabled:(BOOL)enabled;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(CGRect)cropRect;
-(void)setTitle:(id)title okButtonTitle:(id)title2;
-(void)setTitle:(id)title;
-(CGRect)titleRect;
-(void)setOKButtonColor:(int)color;
-(void)setOKButtonTitle:(id)title;
-(void)setOKButtonShowsCamera:(BOOL)camera;
-(void)setCancelButtonTitle:(id)title;
-(void)setCancelButtonHidden:(BOOL)hidden;
-(void)setShowProgress:(BOOL)progress title:(id)title;
-(void)removeProgress;
-(void)setProgressDone;
-(void)setShowsCropRegion:(BOOL)region;
-(void)setTitleHidden:(BOOL)hidden animationDuration:(float)duration;
@end

@interface PLCropOverlay (PhotoSaving)
-(void)beginBackgroundSaveWithTile:(id)tile progressTitle:(id)title completionCallbackTarget:(id)target options:(int)options;
-(void)_backgroundSavePhoto:(id)photo;
-(void)_savePhotoFinished:(id)finished;
@end

