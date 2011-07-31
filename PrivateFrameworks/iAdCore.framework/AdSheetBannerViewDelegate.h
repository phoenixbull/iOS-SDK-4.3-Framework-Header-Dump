/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import "iAdCore-Structs.h"


@protocol AdSheetBannerViewDelegate
-(void)bannerViewDidRequestDataLoad:(id)bannerView;
-(void)bannerViewDidCancelDataLoad:(id)bannerView;
-(void)bannerViewDidLoadAd:(id)bannerView;
-(void)bannerView:(id)view didFailToReceiveAdWithError:(id)error;
-(int)bannerViewRequestsHostInterfaceOrientation:(id)orientation;
-(void)bannerView:(id)view shouldLogImpressionForAd:(id)ad impressionSequence:(unsigned)sequence;
-(void)bannerView:(id)view shouldLogClickForAd:(id)ad impressionSequence:(unsigned)sequence overclickCount:(unsigned)count;
-(void)interstitialView:(id)view shouldLogSystemEvent:(int)event forAd:(id)ad impressionSequence:(unsigned)sequence overclickCount:(unsigned)count;
-(void)interstitialViewExpiredAndWasUnloaded:(id)unloaded;
-(void)readyForAuthoredTransitionIn;
-(void)authoredTransitionInComplete;
-(CGRect)hostBannerRect;
@end

