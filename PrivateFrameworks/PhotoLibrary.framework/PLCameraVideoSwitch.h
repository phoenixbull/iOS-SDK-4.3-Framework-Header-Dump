/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PhotoLibrary-Structs.h"

@class UIImageView, UIImage;

@interface PLCameraVideoSwitch : XXUnknownSuperclass {
	UIImageView* _wellImageView;
	UIImageView* _handleImageView;
	UIImageView* _cameraImageView;
	UIImageView* _videoImageView;
	UIImageView* _backgroundImageView;
	UIImage* _backgroundImage;
	UIImage* _wellImage;
	UIImage* _handleImage;
	UIImage* _handleDownImage;
	UIImage* _cameraImage;
	UIImage* _cameraLandscapeImage;
	UIImage* _videoImage;
	UIImage* _videoLandscapeImage;
	CGRect _hitRect;
	int _orientation;
	BOOL _watchingOrientationChanges;
	float _trackingHorizontalLocation;
	unsigned _on : 1;
	unsigned _didLayoutViews : 1;
	unsigned _didMove : 1;
	unsigned _lockEnabled : 1;
}
@property(assign, nonatomic, getter=isOn) BOOL on;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)_updateEnabledness;
-(void)setEnabled:(BOOL)enabled;
-(void)setLockEnabled:(BOOL)enabled;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;
-(BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;
-(void)endTrackingWithTouch:(id)touch withEvent:(id)event;
-(void)cancelTrackingWithEvent:(id)event;
-(void)setOn:(BOOL)on animated:(BOOL)animated;
-(void)_loadImages;
-(void)_setOn:(BOOL)on animationDuration:(float)duration;
-(CGAffineTransform)_rotationTransformForDeviceOrientation:(int)deviceOrientation;
-(void)_animateImageView:(id)view toTransform:(CGAffineTransform)transform withImage:(id)image animated:(BOOL)animated;
-(void)_startWatchingDeviceOrientationChanges;
-(void)_stopWatchingDeviceOrientationChanges;
-(void)_deviceOrientationChanged:(id)changed;
-(void)setButtonOrientation:(int)orientation animated:(BOOL)animated;
-(int)orientation;
@end

