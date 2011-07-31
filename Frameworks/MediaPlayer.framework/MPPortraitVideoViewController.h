/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoViewController.h"
#import "MPSwipableViewDelegate.h"

@class MPPortraitInfoOverlay, MPPortraitTransportControls, UINavigationBar;

@interface MPPortraitVideoViewController : MPVideoViewController <MPSwipableViewDelegate> {
	MPPortraitInfoOverlay* _overlayView;
	UINavigationBar* _navigationBar;
	MPPortraitTransportControls* _transportControls;
	unsigned _ownsTransportControls : 1;
	unsigned _waitingToShowOverlay : 1;
}
@property(retain, nonatomic) UINavigationBar* navigationBar;
@property(readonly, assign, nonatomic) BOOL ownsTransportControls;
+(BOOL)supportsFullscreenDisplay;
-(id)init;
-(id)initWithTransportControls:(BOOL)transportControls;
-(void)dealloc;
-(void)_showOverlayView:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)showOverlayView;
-(void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;
-(BOOL)canDisplayItem:(id)item withInterfaceOrientation:(int)interfaceOrientation;
-(id)copyOverlayViewForTransitionToItem:(id)item;
-(id)newAlternateTracksTransition;
-(id)createChapterFlipTransition;
-(void)displayVideoViewOnScreen;
-(void)loadView;
-(void)restoreOverlayViewAfterTransition:(id)transition;
-(void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;
-(void)setDisabledParts:(unsigned)parts;
-(void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;
-(void)startTicking;
-(void)stopTicking;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)showChaptersController;
-(BOOL)allowsDetailScrubbing;
-(void)setAllowsDetailScrubbing:(BOOL)scrubbing;
-(void)setAllowsWirelessPlayback:(BOOL)playback;
-(void)setItem:(id)item;
-(void)setOrientation:(int)orientation animate:(BOOL)animate;
-(void)swipableView:(id)view swipedInDirection:(int)direction;
-(void)swipableView:(id)view tappedWithCount:(unsigned)count;
-(BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;
-(void)transportControlsDidResize:(id)transportControls;
-(id)newOverlayViewWithFrame:(CGRect)frame;
-(CGRect)backgroundViewSnapshotFrame;
-(id)_overlayView;
-(void)_handleSwipeRight;
-(void)_removeOverlayView;
@end

