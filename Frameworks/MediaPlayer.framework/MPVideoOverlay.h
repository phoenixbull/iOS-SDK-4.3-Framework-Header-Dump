/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPDetailSliderDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MPVideoOverlay.h"

@class MPAVItem, MPVideoViewController, NSMutableDictionary, MPDetailSlider;
@protocol MPVideoOverlayDelegate;

@protocol MPVideoOverlay
@property(assign, nonatomic) MPVideoViewController* videoViewController;
@property(retain, nonatomic) MPAVItem* item;
@property(assign, nonatomic) int interfaceOrientation;
@property(assign, nonatomic) unsigned desiredParts;
@property(assign, nonatomic) unsigned visibleParts;
@property(assign, nonatomic) unsigned disabledParts;
@property(assign, nonatomic) BOOL allowsWirelessPlayback;
@property(assign, nonatomic) id<MPVideoOverlayDelegate> delegate;
-(void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;
-(void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;
-(void)startTicking;
-(void)stopTicking;
-(void)showAlternateTracks;
-(void)hideAlternateTracks;
@end

@interface MPVideoOverlay : XXUnknownSuperclass <MPVideoOverlay, MPDetailSliderDelegate> {
	MPVideoViewController* _videoViewController;
	id<MPVideoOverlayDelegate> _delegate;
	MPAVItem* _item;
	MPDetailSlider* _scrubControl;
	int _interfaceOrientation;
	BOOL _controlsAutohideDisabled;
	BOOL _wantsTick;
	unsigned _desiredParts;
	unsigned _visibleParts;
	unsigned _disabledParts;
	NSMutableDictionary* _tickTimeEvents;
	double _lastTickTime;
}
@property(assign, nonatomic) id<MPVideoOverlayDelegate> delegate;
@property(assign, nonatomic) unsigned desiredParts;
@property(retain, nonatomic) MPAVItem* item;
@property(assign, nonatomic) MPVideoViewController* videoViewController;
@property(assign, nonatomic) int interfaceOrientation;
@property(assign, nonatomic) unsigned visibleParts;
@property(assign, nonatomic) unsigned disabledParts;
@property(assign, nonatomic) BOOL allowsWirelessPlayback;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)detailSliderTrackingDidBegin:(id)detailSliderTracking;
-(void)detailSliderTrackingDidEnd:(id)detailSliderTracking;
-(void)detailSliderTrackingDidCancel:(id)detailSliderTracking;
-(void)detailSlider:(id)slider didChangeValue:(float)value;
-(void)_endSliderTracking;
-(void)_tickNotification:(id)notification;
-(void)_itemDurationDidChangeNotification:(id)_itemDuration;
-(void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;
-(void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;
-(void)startTicking;
-(void)stopTicking;
-(void)showAlternateTracks;
-(void)hideAlternateTracks;
-(void)performSelector:(SEL)selector whenTickingPastTime:(double)time;
-(void)cancelPreviousPerformTickEventsForSelector:(SEL)selector;
-(double)_duration;
-(double)_playableDuration;
-(void)_updateTimeBasedValues;
@end

