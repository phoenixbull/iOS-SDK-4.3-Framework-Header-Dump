/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PhotoLibrary-Structs.h"

@class NSArray, UIView, UIImageView, UIImage;

@interface PLCameraButton : XXUnknownSuperclass {
	UIView* _rotationHolder;
	UIImageView* _iconView;
	BOOL _lockEnabled;
	BOOL _isLandscape;
	BOOL _dontDrawDisabled;
	UIImage* _cameraIcon;
	UIImage* _cameraIconLandscape;
	NSArray* _videoRecordingIcons;
	BOOL _videoMode;
	BOOL _videoIsRecording;
	int _orientation;
	BOOL _watchingOrientationChanges;
}
-(id)initWithDefaultSize;
-(void)_setIcon:(id)icon;
-(void)dealloc;
-(void)setVideoMode:(BOOL)mode;
-(void)setVideoIsRecording:(BOOL)recording;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)setDontShowDisabledState:(BOOL)state;
-(void)setEnabled:(BOOL)enabled;
-(void)_setHighlightOnMouseDown:(BOOL)down;
-(void)setLockEnabled:(BOOL)enabled;
-(void)_startWatchingDeviceOrientationChanges;
-(void)_stopWatchingDeviceOrientationChanges;
-(void)_deviceOrientationChanged:(id)changed;
-(void)setButtonOrientation:(int)orientation animated:(BOOL)animated;
-(int)orientation;
@end

