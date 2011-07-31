/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ADInterstitialView;
@protocol ADInterstitialAdDelegate;

@interface ADInterstitialAd : XXUnknownSuperclass {
	id<ADInterstitialAdDelegate> _delegate;
	ADInterstitialView* _interstitialView;
	BOOL _presentedInView;
}
@property(assign, nonatomic) id<ADInterstitialAdDelegate> delegate;
@property(retain, nonatomic) ADInterstitialView* interstitialView;
@property(assign, nonatomic) BOOL presentedInView;
@property(readonly, assign, nonatomic, getter=isActionInProgress) BOOL actionInProgress;
@property(readonly, assign, nonatomic, getter=isLoaded) BOOL loaded;
-(void)dealloc;
-(id)init;
-(void)cancelAction;
-(BOOL)presentInView:(id)view;
-(void)presentFromViewController:(id)viewController;
-(void)setLocalAd:(id)ad;
-(void)setSection:(id)section;
-(void)setDebuggingDelegate:(id)delegate;
-(void)setAuthenticationUserName:(id)name;
-(void)interstitialViewDidUnloadAd:(id)interstitialView;
-(void)interstitialView:(id)view didFailToReceiveAdWithError:(id)error;
-(void)interstitialViewDidLoadAd:(id)interstitialView;
-(BOOL)interstitialViewActionShouldBegin:(id)interstitialViewAction willLeaveApplication:(BOOL)application;
-(void)interstitialViewActionDidFinish:(id)interstitialViewAction;
@end

