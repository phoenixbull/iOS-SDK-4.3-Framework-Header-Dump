/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import "iAdCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ADBrandingFrame, UIView, NSSet, UIImageView, ADAdImage, ADServerAccessCoordinator, ADAdSpecification, NSString, ADBannerData, ADBannerJSO;
@protocol AdSheetBannerViewDelegate;

@interface ADSRVBannerView : XXUnknownSuperclass {
	id<AdSheetBannerViewDelegate> _delegate;
	ADServerAccessCoordinator* _serverAccessCoordinator;
	BOOL _privilegedClient;
	ADBannerData* _currentBanner;
	NSSet* _requiredContentSizeIdentifiers;
	NSString* _currentContentSizeIdentifier;
	NSString* _advertisingSection;
	NSString* _authenticationUserName;
	ADAdSpecification* _specification;
	ADBannerData* _nextBannerInfo;
	ADAdImage* _selectedImage;
	ADAdImage* _revealImage;
	CGSize _orientedScreenSize;
	UIView* _adContainer;
	UIView* _nextContainer;
	UIView* _rotatingContainer;
	ADBrandingFrame* _bannerFrame;
	unsigned _impressionSequence;
	unsigned _overclickCount;
	CGRect _previousBounds;
	CGPoint _clickPoint;
	BOOL _paused;
	double _startTime;
	double _currentBannerReferenceTime;
	double _currentBannerVisibleTime;
	int _idiom;
	BOOL _waitingForFirstLoadAttempt;
	BOOL _landingPageIsActive;
	BOOL _specificationUpdateNeeded;
	BOOL _needsToLogImpression;
	BOOL _shouldTransitionOnWebLoad;
	BOOL _shouldLoadBannerWhenServerStatusChanges;
	ADBannerData* _localAd;
	ADBannerJSO* _bannerJSO;
	BOOL _hostingInterstitialView;
	UIImageView* _interstitialDismissButton;
	UIImageView* _interstitialCornerImage;
	BOOL _contentVisible;
	BOOL _interstitialPresentedInView;
}
@property(assign, nonatomic) id<AdSheetBannerViewDelegate> delegate;
@property(retain, nonatomic) ADServerAccessCoordinator* serverAccessCoordinator;
@property(assign, nonatomic, getter=isPrivilegedClient) BOOL privilegedClient;
@property(retain, nonatomic) ADBannerData* currentBanner;
@property(copy, nonatomic) NSSet* requiredContentSizeIdentifiers;
@property(copy, nonatomic) NSString* currentContentSizeIdentifier;
@property(copy, nonatomic) NSString* advertisingSection;
@property(copy, nonatomic) NSString* authenticationUserName;
@property(retain, nonatomic) ADAdSpecification* specification;
@property(retain, nonatomic) ADBannerData* nextBannerInfo;
@property(readonly, retain, nonatomic) ADAdImage* selectedImage;
@property(readonly, retain, nonatomic) ADAdImage* revealImage;
@property(assign) CGSize orientedScreenSize;
@property(retain, nonatomic) UIView* adContainer;
@property(retain, nonatomic) UIView* nextContainer;
@property(retain, nonatomic) UIView* rotatingContainer;
@property(retain, nonatomic) ADBrandingFrame* bannerFrame;
@property(readonly, assign, nonatomic) unsigned impressionSequence;
@property(readonly, assign, nonatomic) unsigned overclickCount;
@property(assign) CGRect previousBounds;
@property(readonly, assign, nonatomic) CGPoint clickPoint;
@property(assign, nonatomic) BOOL paused;
@property(assign) double startTime;
@property(assign) double currentBannerReferenceTime;
@property(assign) double currentBannerVisibleTime;
@property(readonly, assign, nonatomic) int idiom;
@property(assign) BOOL waitingForFirstLoadAttempt;
@property(assign) BOOL landingPageIsActive;
@property(assign) BOOL specificationUpdateNeeded;
@property(assign) BOOL needsToLogImpression;
@property(assign) BOOL shouldTransitionOnWebLoad;
@property(assign) BOOL shouldLoadBannerWhenServerStatusChanges;
@property(retain, nonatomic) ADBannerData* localAd;
@property(retain, nonatomic) ADBannerJSO* bannerJSO;
@property(assign) BOOL hostingInterstitialView;
@property(retain, nonatomic) UIImageView* interstitialDismissButton;
@property(retain, nonatomic) UIImageView* interstitialCornerImage;
@property(assign) BOOL contentVisible;
@property(assign) BOOL interstitialPresentedInView;
@property(readonly, assign, nonatomic, getter=isBannerViewActionInProgress) BOOL bannerViewActionInProgress;
+(id)bannerViewWithDefaultValues;
-(void)dealloc;
-(void)_updateSpecification;
-(void)_scheduleUpdateSpecification;
-(id)initWithFrame:(CGRect)frame;
-(void)beginActionWithClick:(CGPoint)click;
-(void)landingPageDidDismiss;
-(void)landingPageDidPresent;
-(void)dispose;
-(void)setHostFrame:(CGRect)frame orientation:(int)orientation;
-(void)interstitialViewRemovedFromSuperview;
-(void)interstitialTouchedDismissAreaWithControlEvent:(unsigned)controlEvent;
-(BOOL)_containerIsImageView;
-(BOOL)_containerIsWebView;
-(void)_resetTimeMarkers;
-(void)_loadBannerNow;
-(void)_contentDidAppear;
-(void)_contentDidDisappear;
-(void)processCurrentVisibility:(BOOL)visibility;
-(void)_retryLoading:(id)loading;
-(void)serverAccessCoordinatorAllowsRequestsNotification:(id)notification;
-(void)_logImpression;
-(void)_trackClick;
-(void)transitionToNextBanner:(BOOL)nextBanner isRotating:(BOOL)rotating;
-(id)viewForBanner:(id)banner bannerIsImage:(BOOL*)image;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)deferredOrientationEventForWebView;
-(void)updateHTML5ContainerOrientation:(id)orientation;
-(void)layoutSubviews;
-(void)cacheLoadedBannerData:(id)data;
-(void)cacheFailedToLoadBanner:(id)loadBanner withError:(id)error;
-(void)_handleError:(id)error;
-(void)webViewDidFinishLoad:(id)webView;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(void)uiWebView:(id)view resource:(id)resource didReceiveAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;
-(void)uiWebView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;
-(id)transferWebViewForTransition;
-(void)loadNewBannerWebView;
@end
