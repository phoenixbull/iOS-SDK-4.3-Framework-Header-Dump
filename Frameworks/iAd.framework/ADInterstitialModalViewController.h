/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/iAd.framework/iAd
 */

#import "ADInterstitialViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ADInterstitialView;

@interface ADInterstitialModalViewController : XXUnknownSuperclass <ADInterstitialViewDelegate> {
	ADInterstitialView* _interstitialView;
	id<ADInterstitialViewDelegate> _interstitialDelegate;
	BOOL _hasAppeared;
}
@property(retain, nonatomic) ADInterstitialView* interstitialView;
@property(assign, nonatomic) id<ADInterstitialViewDelegate> interstitialDelegate;
@property(assign, nonatomic) BOOL hasAppeared;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)view;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)interstitialViewDidUnloadAd:(id)interstitialView;
-(void)interstitialView:(id)view didFailToReceiveAdWithError:(id)error;
-(BOOL)interstitialViewActionShouldBegin:(id)interstitialViewAction willLeaveApplication:(BOOL)application;
-(void)interstitialViewActionDidFinish:(id)interstitialViewAction;
@end

