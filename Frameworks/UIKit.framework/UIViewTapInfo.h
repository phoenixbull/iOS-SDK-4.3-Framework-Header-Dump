/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface UIViewTapInfo : XXUnknownSuperclass {
@private
	id _delegate;
	UIView* _view;
	int _tapDownCount;
	int _fingerCount;
	float _multiTapDelay;
	float _rejectAsTapThrehold;
	float _viewTouchPauseThreshold;
	CGPoint _startPosition;
	double _startTime;
	struct {
		unsigned shouldSendTouchPauseUp : 1;
		unsigned delegateViewHandleTapWithCountEvent : 1;
		unsigned delegateViewHandleTapWithCountEventFingerCount : 1;
		unsigned delegateViewHandleTouchPauseIsDown : 1;
		unsigned reserved : 28;
	} _tapInfoFlags;
}
-(id)initWithDelegate:(id)delegate view:(id)view;
-(void)releaseAndClearWeakRefs;
-(void)clearTapState;
-(void)setDelegate:(id)delegate;
-(void)_handleTapWithCount:(int)count event:(GSEventRef)event;
-(void)handleSingleTapEvent:(GSEventRef)event;
-(void)handleDoubleTapEvent:(GSEventRef)event;
-(void)scheduleSingleTapHandlerForEvent:(GSEventRef)event;
-(void)_sendTouchPauseDownIfNecessary;
-(void)_sendTouchPauseUpIfNecessary;
-(void)mouseDown:(GSEventRef)down;
-(BOOL)_eventLocationConsideredMovement:(GSEventRef)movement;
-(void)mouseDragged:(GSEventRef)dragged;
-(void)mouseUp:(GSEventRef)up;
-(BOOL)cancelMouseTracking;
@end

