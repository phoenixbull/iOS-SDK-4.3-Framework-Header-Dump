/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIView;

@interface SBAwayViewPluginController : XXUnknownSuperclass {
@private
	UIView* _view;
	BOOL _viewCanBeDisplayed;
	BOOL _fullscreen;
	BOOL _alwaysFullscreen;
	int _orientation;
}
@property(assign, nonatomic) BOOL viewCanBeDisplayed;
@property(readonly, assign, nonatomic, getter=isFullscreen) BOOL fullscreen;
@property(assign, nonatomic) int orientation;
@property(readonly, assign, nonatomic, getter=isAlwaysFullscreen) BOOL alwaysFullscreen;
@property(retain, nonatomic) UIView* view;
+(void)enableBundleNamed:(id)named;
+(void)disableBundleNamed:(id)named;
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)purgeView;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)disable;
-(void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;
-(void)setFullscreen:(BOOL)fullscreen duration:(double)duration;
-(BOOL)viewWantsFullscreenLayout;
-(BOOL)shouldDisableOnRelock;
-(BOOL)shouldDisableOnUnlock;
-(BOOL)shouldShowLockStatusBarTime;
-(double)viewFadeInDuration;
-(void)setAlwaysFullscreen:(BOOL)fullscreen;
-(BOOL)canBeAlwaysFullscreen;
-(void)alwaysFullscreenValueHasChanged;
-(void)deviceLockViewWillShow;
-(void)deviceLockViewDidHide;
-(BOOL)retainsPriorityWhileInactive;
-(int)pluginPriority;
-(BOOL)animateResumingToApplicationWithIdentifier:(id)identifier;
-(BOOL)showAwayItems;
-(BOOL)showDateView;
-(BOOL)canScreenDim;
-(BOOL)handleMenuButtonTap;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)handleMenuButtonHeld;
-(BOOL)handleGesture:(int)gesture fingerCount:(unsigned)count;
-(BOOL)wantsAutomaticFullscreenTimer;
-(BOOL)wantsSwipeGestureRecognizer;
@end
