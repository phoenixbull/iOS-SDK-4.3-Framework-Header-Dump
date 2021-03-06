/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIViewController, UIView, UIImageView, NSDictionary;

__attribute__((visibility("hidden")))
@interface MKCalloutPopoverViewInternal : XXUnknownSuperclass {
@private
	UIImageView* topLeft;
	UIImageView* topMiddleLeft;
	UIImageView* topMiddleRight;
	UIImageView* topRight;
	UIImageView* middleLeftTop;
	UIImageView* middleLeftBottom;
	UIImageView* middleMiddle;
	UIImageView* middleRightTop;
	UIImageView* middleRightBottom;
	UIImageView* bottomLeft;
	UIImageView* bottomMiddleLeft;
	UIImageView* bottomMiddleRight;
	UIImageView* bottomRight;
	UIImageView* leftAnchor;
	UIImageView* rightAnchor;
	int slideDirection;
	UIViewController* contentViewController;
	UIViewController* modalViewController;
	UIView* modalViewContainer;
	float popoverContentHeight;
	UIView* rightBarButton;
	UIView* leftBarButton;
	BOOL didFadeSubtitle;
	BOOL isAnimatingToPopover;
	int animationsCount;
	SEL queuedAnimation;
	NSDictionary* contentSizeChangeInfo;
	BOOL hidingNavigationButtons;
}
@end

