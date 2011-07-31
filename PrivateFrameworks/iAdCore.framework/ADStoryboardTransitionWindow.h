/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import "iAdCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, UIWebView, ADBannerData, ADStoryboardController, UIView;
@protocol ADStoryboardTransitionWindowDelegate;

@interface ADStoryboardTransitionWindow : XXUnknownSuperclass {
	ADStoryboardController* _storyboard;
	id<ADStoryboardTransitionWindowDelegate> _adDelegate;
	UIView* _containerView;
	UIImageView* _adImageView;
	ADBannerData* _bannerData;
	BOOL _adReady;
	BOOL _revealTransitionStillRunning;
	UIWebView* _bannerWebView;
	CGImageRef _screenBeforeTransitionIn;
	int _authoredTransitionState;
}
@property(retain, nonatomic) ADStoryboardController* storyboard;
@property(assign, nonatomic) id<ADStoryboardTransitionWindowDelegate> adDelegate;
@property(retain, nonatomic) UIView* containerView;
@property(retain, nonatomic) UIImageView* adImageView;
@property(retain, nonatomic) ADBannerData* bannerData;
@property(assign, nonatomic) BOOL adReady;
@property(assign, nonatomic) BOOL revealTransitionStillRunning;
@property(retain, nonatomic) UIWebView* bannerWebView;
@property(assign, nonatomic) CGImageRef screenBeforeTransitionIn;
@property(assign, nonatomic) int authoredTransitionState;
+(void)_calculateOffsetForTaskSwitcherInOrientation:(int)orientation;
+(void)_setOwnerWindow:(id)window;
+(void)showAppSwitcher;
+(void)hideAppSwitcher;
-(id)initWithBannerData:(id)bannerData delegate:(id)delegate;
-(void)dealloc;
-(int)_adOrientation;
-(int)_hostOrientation;
-(int)_slideTransitionOrientation;
-(void)_doTransitionBegin;
-(void)_doTransitionCompleted;
-(void)_undoTransitionBegin;
-(void)_undoTransitionCompleted;
-(CGSize)_sizeForAdOrientation;
-(id)_transitionAdImage;
-(id)_transitionImage;
-(CGPoint)_transitionOffset;
-(int)_transitionType;
-(void)_slideLayout;
-(void)_doSlide;
-(void)_undoSlide;
-(void)_revealLayoutWithOffset:(CGPoint)offset;
-(void)_doCompleteReveal;
-(void)_doBeginReveal;
-(void)_undoReveal;
-(void)_helper:(id)helper;
-(void)_dispatchDOMEventToBannerView:(id)bannerView;
-(void)_doBeginAuthored;
-(void)readyForAuthoredTransitionIn;
-(void)mainContentSignalsReady;
-(void)authoredTransitionInComplete;
-(void)presentAd;
-(void)dismissAd;
-(void)adIsReady;
-(void)prepareRemoteSheet;
-(void)dismissRemoteSheet;
@end

