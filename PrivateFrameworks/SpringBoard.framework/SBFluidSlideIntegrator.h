/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class SBGestureMotionParams;

@interface SBFluidSlideIntegrator : XXUnknownSuperclass {
	SBGestureMotionParams* _motionParams;
	bool _fluidityHasBegunOnThisAxis;
	float _swipeDistanceDelta;
	float _filteredSwipeDelta;
	float _cumulativeSwipeDistance;
	float _committedRecentDisplacement;
	float _cumulativeSwipeEnvelope;
	float _relSensitivity[4];
	float _arcCenter;
	float _arcSize;
}
@property(retain, nonatomic) SBGestureMotionParams* motionParams;
@property(assign, nonatomic) float arcCenter;
@property(assign, nonatomic) float arcSize;
@property(readonly, assign, nonatomic) float swipeMomentumPercentage;
@property(readonly, assign, nonatomic) float swipeMomentum;
@property(readonly, assign, nonatomic) float swipeDistanceDelta;
@property(readonly, assign, nonatomic) float swipeDistance;
@property(readonly, assign, nonatomic) float swipePercentageDelta;
@property(readonly, assign, nonatomic) float swipePercentage;
@property(readonly, assign, nonatomic) BOOL hasSignificantMotion;
@property(assign, nonatomic) float rotationSensitivity;
@property(assign, nonatomic) float scaleSensitivity;
@property(assign, nonatomic) float translationSensitivity;
-(void)dealloc;
-(void)clear;
-(float)integratePixelDeltas:(UIEdgeInsets*)deltas averageVelocities:(UIEdgeInsets*)velocities farthestFingerSeparation:(float)separation;
-(BOOL)hasSufficientMomentumToRecognizeInInterval:(double)interval;
@end
