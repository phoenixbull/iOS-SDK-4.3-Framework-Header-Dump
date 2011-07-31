/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "ScreenReaderCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SCRCTargetSelectorTimer, SCRCGestureFactory;

@interface SCRCGestureFactory : XXUnknownSuperclass {
	float _stallDistance;
	float _maxDimension;
	float _thumbRegion;
	int _orientation;
	int _directions[7];
	CGPoint _axisFlipper;
	float _scaledTrackingDistance;
	BOOL _setTrackingTimer;
	float _flickVelocityThreshold;
	double _tapVelocityThreshold;
	double _echoWaitTime;
	CGRect _mainFrame;
	CGRect _gutterFrame;
	double _lastTime;
	double _lastDownTime;
	double _lastGutterDownTime;
	float _lastDegrees;
	float _startDegrees;
	float _startDistance;
	BOOL _startedInGutter;
	double _requireDelayBeforeTracking;
	BOOL _requireUp;
	BOOL _thumbRejectionEnabled;
	float _thumbRejectionDistance;
	int _state;
	int _previousState;
	int _direction;
	float _directionalSlope;
	SCRCFingerState _finger[2];
	unsigned _absoluteFingerCount;
	unsigned short _fingerCount;
	unsigned short _lastFingerCount;
	float _distance;
	unsigned _tapCount;
	CGRect _tapFrame;
	CGRect _tapMultiFrame;
	struct {
		id track;
		id tap;
		id gutterUp;
		id splitTap;
	} _delegate;
	SCRCTargetSelectorTimer* _trackingTimer;
	struct {
		BOOL down;
		BOOL dead;
		BOOL gutter;
		unsigned current;
		unsigned digits;
		unsigned count;
		CGRect frame;
		CGPoint location[5];
		CGPoint locationPerTap[5];
		unsigned digitsPerTap;
		double thisTime;
		double lastTime;
	} _tap;
	SCRCTargetSelectorTimer* _tapTimer;
	SCRCTargetSelectorTimer* _gutterUpTimer;
	struct {
		SCRCGestureFactory* factory;
		BOOL isSplitting;
		BOOL isTapping;
		BOOL fastTrack;
		BOOL tapDead;
		BOOL timedOut;
		BOOL active;
		unsigned fingerIdentifier;
		double fingerDownTime;
		CGPoint startTapLocation;
		CGPoint lastTapLocation;
		CGPoint primaryFingerLocation;
		float tapDistance;
		int state;
	} _split;
}
@property(assign, nonatomic) BOOL thumbRejectionEnabled;
-(id)initWithSize:(CGSize)size delegate:(id)delegate;
-(id)initWithSize:(CGSize)size delegate:(id)delegate threadKey:(id)key;
-(void)setFlickSpeed:(float)speed;
-(float)flickSpeed;
-(void)setTapSpeed:(float)speed;
-(float)tapSpeed;
-(void)setOrientation:(int)orientation;
-(int)orientation;
-(void)dealloc;
-(CGRect)mainFrame;
-(CGRect)_currentTapRect;
-(void)_updateMultiTapFrame;
-(void)_updateTapState;
-(void)_handleTap;
-(void)_enterTrackingMode:(id)mode;
-(void)_handleGutterUp;
-(void)_processUpAndPost:(BOOL)post;
-(void)_updateStartWithPoint:(CGPoint)point time:(double)time;
-(BOOL)_handleSplitTap;
-(BOOL)_handleSplitEvent:(id)event;
-(void)handleGestureEvent:(id)event;
-(void)_down:(id)down;
-(void)_drag:(id)drag;
-(void)_up;
-(void)reset;
-(float)directionalSlope;
-(int)gestureState;
-(int)direction;
-(float)vector;
-(float)velocity;
-(float)distance;
-(unsigned)absoluteFingerCount;
-(unsigned)fingerCount;
-(unsigned)tapCount;
-(BOOL)tapIsDown;
-(CGPoint)rawLocation;
-(CGPoint)startLocation;
-(CGPoint)endLocation;
-(CGRect)tapFrame;
-(CGRect)multiTapFrame;
-(CGPoint)tapPoint;
-(CGPoint)tapPointWeightedToSides;
-(double)tapInterval;
-(id)gestureStateString;
@end
