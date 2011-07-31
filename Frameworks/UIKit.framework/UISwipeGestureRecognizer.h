/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class NSMutableArray;

@interface UISwipeGestureRecognizer : UIGestureRecognizer {
@private
	double _maximumDuration;
	float _minimumPrimaryMovement;
	float _maximumPrimaryMovement;
	float _minimumSecondaryMovement;
	float _maximumSecondaryMovement;
	float _rateOfMinimumMovementDecay;
	float _rateOfMaximumMovementDecay;
	unsigned _numberOfTouchesRequired;
	NSMutableArray* _touches;
	int _direction;
	CGPoint _startLocation;
	CGPoint* _startLocations;
	double _startTime;
	unsigned _failed : 1;
}
@property(assign, nonatomic) double maximumDuration;
@property(assign, nonatomic) float minimumPrimaryMovement;
@property(assign, nonatomic) float maximumPrimaryMovement;
@property(assign, nonatomic) float minimumSecondaryMovement;
@property(assign, nonatomic) float maximumSecondaryMovement;
@property(assign, nonatomic) float rateOfMinimumMovementDecay;
@property(assign, nonatomic) float rateOfMaximumMovementDecay;
@property(assign, nonatomic) unsigned numberOfTouchesRequired;
@property(assign, nonatomic) int direction;
@property(readonly, assign, nonatomic) CGPoint startPoint;
-(id)initWithTarget:(id)target action:(SEL)action;
-(void)dealloc;
-(void)_resetGestureRecognizer;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(BOOL)_checkForSwipeWithDelta:(CGPoint)delta time:(double)time;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(CGPoint)locationInView:(id)view;
-(unsigned)numberOfTouches;
-(CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;
-(void)_appendSubclassDescription:(id)description;
@end

