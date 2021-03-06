/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MKCalloutPopoverViewInternal, UIViewController;

@interface MKCalloutPopoverView : XXUnknownSuperclass {
@private
	MKCalloutPopoverViewInternal* _internal;
}
@property(retain) UIViewController* contentViewController;
+(float)totalHeightOfExpandedContainer;
+(id)_upArrowCGImages;
+(id)_downArrowRetractingCGImages;
+(id)_leftArrowRetractingCGImages;
+(id)_leftArrowExtendingCGImages;
+(id)_arrowRetractionKeyFrameAnimation;
+(id)_arrowExtensionKeyFrameAnimation;
-(CGRect)_leftButtonFrame;
-(CGRect)_rightButtonFrame;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)_layoutSubviews:(BOOL)subviews;
-(void)animateToPopover;
-(BOOL)isExpanded;
-(BOOL)_isExpanding;
-(void)_updateTitleSize;
-(void)setTitle:(id)title;
-(void)setSubtitle:(id)subtitle animated:(BOOL)animated;
-(void)_performPopoverSlideAcrossAnimation;
-(float)popoverContentHeight;
-(void)setPopoverContentHeight:(float)height animated:(BOOL)animated;
-(void)setPopoverContentHeight:(float)height animated:(BOOL)animated callbackInfo:(id)info;
-(void)_performPopoverRevealDownAnimation;
-(void)animationWillStart:(id)animation context:(void*)context;
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)fadeOutWithDuration:(float)duration;
-(void)presentModalViewController:(id)controller animated:(BOOL)animated;
-(void)presentModalAnimationDidStop:(id)presentModalAnimation finished:(BOOL)finished context:(void*)context;
-(void)dismissModalViewControllerAnimated:(BOOL)animated;
-(void)dismissModalViewControllerAnimated:(BOOL)animated callbackInfo:(id)info;
-(void)dismissModalAnimationDidStop:(id)dismissModalAnimation finished:(BOOL)finished context:(void*)context;
-(void)hideNavigationButtons;
-(void)unhideNavigationButtons;
-(void)updateNavigationButtons;
@end

