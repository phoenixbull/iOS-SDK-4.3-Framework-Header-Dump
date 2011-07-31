/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"

@class NSArray, UIBarButtonItem, UIDimmingView, UIViewController, UIView;
@protocol UIPopoverControllerDelegate;

@interface UIPopoverController : XXUnknownSuperclass {
@private
	id _delegate;
	UIViewController* _contentViewController;
	UIView* _popoverView;
	id _private1;
	NSArray* _passthroughViews;
	unsigned _popoverArrowDirection;
	unsigned _popoverBackgroundStyle;
	CGSize _popoverContentSize;
	UIBarButtonItem* _targetBarButtonItem;
	unsigned _toViewAutoResizingMask;
	UIViewController* _modalPresentationFromViewController;
	UIViewController* _modalPresentationToViewController;
	UIViewController* _slidingViewController;
	id _target;
	SEL _didEndSelector;
	int _existingNavBarStyle;
	int _existingToolBarStyle;
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isWarped : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
	} _popoverControllerFlags;
@protected
	BOOL _allowResizePastTargetRect;
}
@property(assign, nonatomic) id<UIPopoverControllerDelegate> delegate;
@property(assign, nonatomic) unsigned popoverArrowDirection;
@property(retain, nonatomic) UIDimmingView* dimmingView;
@property(assign, nonatomic) BOOL allowResizePastTargetRect;
@property(assign, nonatomic) CGRect popoverFrame;
@property(copy, nonatomic) NSArray* passthroughViews;
@property(readonly, assign, nonatomic, getter=isPopoverVisible) BOOL popoverVisible;
@property(assign, nonatomic) CGSize popoverContentSize;
@property(retain, nonatomic) UIViewController* contentViewController;
-(id)init;
-(id)initWithContentViewController:(id)contentViewController;
-(void)dealloc;
-(void)_disableAutomaticKeyboard:(id)keyboard;
-(void)_adjustPopoverForNewContentSize:(id)newContentSize;
-(void)_adjustPopoverForNewContentSizeFromViewController:(id)viewController allowShrink:(BOOL)shrink;
-(BOOL)_dimmingViewDimsWhenModal;
-(void)_setDimmingViewDimsWhenModal:(BOOL)modal;
-(id)popoverView;
-(void)_setupIncomingViewController:(id)controller presenting:(BOOL)presenting animated:(BOOL)animated;
-(void)_teardownOutgoingViewController:(id)controller animated:(BOOL)animated;
-(void)setContentViewController:(id)controller animated:(BOOL)animated;
-(void)setPopoverFrame:(CGRect)frame animated:(BOOL)animated;
-(void)setPopoverContentSize:(CGSize)size animated:(BOOL)animated;
-(void)presentPopoverFromRect:(CGRect)rect inView:(id)view permittedArrowDirections:(unsigned)directions animated:(BOOL)animated;
-(void)presentPopoverFromBarButtonItem:(id)barButtonItem permittedArrowDirections:(unsigned)directions animated:(BOOL)animated;
-(void)_dismissPopoverAnimated:(BOOL)animated notifyDelegate:(BOOL)delegate;
-(void)dismissPopoverAnimated:(BOOL)animated;
-(void)dimmingViewWasTapped:(id)tapped;
-(BOOL)_canRepresentAutomatically;
-(void)_hostingWindowWillRotate:(id)_hostingWindow;
-(void)_hostingWindowDidRotate:(id)_hostingWindow;
-(void)_startWatchingForWindowRotations;
-(void)_stopWatchingForWindowRotations;
-(BOOL)_popoverShouldBeDismissed:(id)_popover;
-(void)_popoverDidDismiss:(id)_popover;
-(void)_popoverPresentAnimationCompleted;
-(void)_popoverDismissAnimationCompleted;
-(void)_popoverIncomingAnimationCompleted;
-(void)_setPopoverRasterizesLayer:(BOOL)layer;
-(BOOL)_popoverRasterizesLayer;
-(void)_setPopoverBackgroundStyle:(int)style;
-(int)_popoverBackgroundStyle;
-(BOOL)_preventFastMode;
-(void)_setPreventFastMode:(BOOL)mode;
-(void)_setContentViewController:(id)controller backgroundStyle:(int)style animated:(BOOL)animated;
-(BOOL)isPresentingOrDismissing;
-(void)_containedViewControllerModalStateChanged;
-(void)_modalTransition:(int)transition fromViewController:(id)viewController toViewController:(id)viewController3 target:(id)target didEndSelector:(SEL)selector;
-(void)_modalAnimation:(id)animation finished:(id)finished context:(void*)context;
@end
