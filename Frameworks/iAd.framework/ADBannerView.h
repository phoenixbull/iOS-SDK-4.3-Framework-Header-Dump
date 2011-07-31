/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/iAd.framework/iAd
 */

#import "ADBannerView.h"
#import "ADBannerControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "iAd-Structs.h"

@class ADBannerController, NSSet, NSString, UIView, ADLocalAd, ADRemoteView, ADBannerControllerRecipient;
@protocol ADBannerViewDelegate;

@interface ADBannerView : XXUnknownSuperclass {
	id<ADBannerViewDelegate> _delegate;
	BOOL _bannerLoaded;
	NSSet* _requiredContentSizeIdentifiers;
	NSString* _currentContentSizeIdentifier;
	NSString* _advertisingSection;
	BOOL _bannerViewActionInProgress;
	ADBannerController* _session;
	ADRemoteView* _remoteView;
	UIView* _dimmerView;
	ADLocalAd* _localAd;
	ADBannerControllerRecipient* _recipient;
	NSString* _authenticationUserName;
	BOOL _delegateImplementsDidLoadAd;
	BOOL _delegateImplementsError;
	BOOL _delegateImplementsActionShouldBegin;
	BOOL _delegateImplementsActionDidFinish;
	BOOL _createdForIBInternal;
	int _previousOrientation;
	BOOL _hasFailedHitTest;
	BOOL _hasRecentlyChangedSize;
}
@property(assign, nonatomic) id<ADBannerViewDelegate> delegate;
@property(readonly, assign, nonatomic, getter=isBannerLoaded) BOOL bannerLoaded;
@property(copy, nonatomic) NSSet* requiredContentSizeIdentifiers;
@property(copy, nonatomic) NSString* currentContentSizeIdentifier;
@property(copy, nonatomic) NSString* advertisingSection;
@property(assign, nonatomic, getter=isBannerViewActionInProgress) BOOL bannerViewActionInProgress;
@property(retain, nonatomic) ADBannerController* session;
@property(retain, nonatomic) ADRemoteView* remoteView;
@property(retain, nonatomic) UIView* dimmerView;
@property(retain, nonatomic) ADLocalAd* localAd;
@property(retain, nonatomic) ADBannerControllerRecipient* recipient;
@property(copy, nonatomic) NSString* authenticationUserName;
@property(readonly, assign, nonatomic) BOOL delegateImplementsDidLoadAd;
@property(readonly, assign, nonatomic) BOOL delegateImplementsError;
@property(readonly, assign, nonatomic) BOOL delegateImplementsActionShouldBegin;
@property(readonly, assign, nonatomic) BOOL delegateImplementsActionDidFinish;
@property(readonly, assign, nonatomic) BOOL createdForIBInternal;
@property(assign, nonatomic) int previousOrientation;
@property(assign, nonatomic) BOOL hasFailedHitTest;
@property(assign, nonatomic) BOOL hasRecentlyChangedSize;
+(void)setServerURL:(id)url;
+(CGSize)sizeFromBannerContentSizeIdentifier:(id)bannerContentSizeIdentifier;
-(void)_addOurSubviews;
-(void)insertSubview:(id)subview atIndex:(int)index;
-(void)exchangeSubviewAtIndex:(int)index withSubviewAtIndex:(int)index2;
-(void)addSubview:(id)subview;
-(void)insertSubview:(id)subview belowSubview:(id)subview2;
-(void)insertSubview:(id)subview aboveSubview:(id)subview2;
-(void)insertSubview:(id)subview below:(id)below;
-(void)insertSubview:(id)subview above:(id)above;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithCoder:(id)coder;
-(id)initFromIBWithFrame:(CGRect)frame;
-(void)_commonInit;
-(void)encodeWithCoder:(id)coder;
-(void)setFrame:(CGRect)frame;
-(void)setBounds:(CGRect)bounds;
-(void)setTransform:(CGAffineTransform)transform;
-(void)setHidden:(BOOL)hidden;
-(void)setAlpha:(float)alpha;
-(void)setCenter:(CGPoint)center;
-(BOOL)isVisible:(BOOL)visible;
-(void)didMoveToWindow;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)bannerControllerDidBecomeAvailable:(id)bannerController;
-(void)controllerDidOpen:(id)controller withWindowContextId:(id)windowContextId;
-(void)controllerDidClose:(id)controller;
-(void)controller:(id)controller didFailWithError:(id)error;
-(void)serverBannerViewDidLoad:(id)serverBannerView;
-(void)serverBannerViewDidFailToReceiveAd:(id)serverBannerView withError:(id)error;
-(void)serverBannerViewActionDidBegin:(id)serverBannerViewAction;
-(void)serverStoryboardDidTransitionOut:(id)serverStoryboard;
-(void)serverStoryboardDidFinishFirstSignificantDraw:(id)serverStoryboard;
-(void)_setContentSizeIdentifier:(id)identifier;
-(void)cancelBannerViewAction;
-(void)_propagateFrame;
-(void)_orientationChanged;
-(void)_propagateProperties;
-(void)_sanitizeAndForwardErrorToDelegate:(id)delegate;
@end

@interface ADBannerView (ADBannerView_Internal) <ADBannerControllerDelegate>
@property(assign, nonatomic) UIView* delegate;
-(void)_updateSpecification;
-(void)_loadDebuggerFromPath:(id)path portName:(id)name;
@end

