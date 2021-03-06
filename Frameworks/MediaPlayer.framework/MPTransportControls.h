/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MPAVItem, NSString, MPButton, NSMutableIndexSet;

@interface MPTransportControls : XXUnknownSuperclass {
	id _target;
	MPAVItem* _item;
	unsigned _desiredParts;
	unsigned _disabledParts;
	NSMutableIndexSet* _heldParts;
	unsigned _visibleParts;
	unsigned _playing : 1;
	BOOL _allowsWirelessPlayback;
	MPButton* _alternatesButton;
	MPButton* _bookmarkButton;
	MPButton* _chaptersButton;
	MPButton* _devicePickerButton;
	MPButton* _emailButton;
	MPButton* _nextButton;
	MPButton* _playButton;
	MPButton* _previousButton;
	MPButton* _scaleButton;
	MPButton* _rewind30SecondsButton;
	MPButton* _toggleFullscreenButton;
	id _volumeSlider;
}
@property(assign, nonatomic) BOOL allowsWirelessPlayback;
@property(assign, nonatomic) unsigned desiredParts;
@property(assign, nonatomic) unsigned disabledParts;
@property(retain, nonatomic) MPAVItem* item;
@property(assign, nonatomic) id target;
@property(assign, nonatomic) unsigned visibleParts;
@property(readonly, assign, nonatomic) NSString* playPauseButtonImage;
@property(readonly, assign, nonatomic) NSString* pauseButtonImage;
@property(readonly, assign, nonatomic) NSString* playButtonImage;
+(unsigned)defaultVisibleParts;
-(id)init;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)didMoveToSuperview;
-(void)setAlpha:(float)alpha;
-(void)setHidden:(BOOL)hidden;
-(void)setFrame:(CGRect)frame;
-(void)setDesiredParts:(unsigned)parts animated:(BOOL)animated;
-(void)setVisibleParts:(unsigned)parts animated:(BOOL)animated;
-(void)_alternateTypesChangedNotification:(id)notification;
-(void)_availableRoutesChangedNotification:(id)notification;
-(void)_destinationChangedNotification:(id)notification;
-(void)_itemChangedNotification:(id)notification;
-(void)_playbackStateChangedNotification:(id)notification;
-(void)_validityChangedNotification:(id)notification;
-(BOOL)allowsWirelessPlaybackForCurrentItem;
-(void)buttonDown:(id)down;
-(void)buttonHeld:(id)held;
-(void)buttonHoldReleased:(id)released;
-(void)buttonUp:(id)up;
-(id)createButtonForPart:(unsigned)part;
-(id)createVolumeSlider;
-(void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;
-(id)buttonImageForPart:(unsigned)part;
-(id)highlightedButtonImageForPart:(unsigned)part;
-(BOOL)showsVolumeSliderWhenNoVolumeControlAvailable;
-(BOOL)alwaysHidesSystemVolumeHUD;
-(unsigned)_applyPossibleVisiblePartsToParts:(unsigned)parts;
-(void)_applyDesiredPartsWithAnimation:(BOOL)animation;
-(id)buttonForPart:(unsigned)part;
-(void)_handleHoldForPart:(unsigned)part;
-(void)_handleReleaseForPart:(unsigned)part;
-(void)_handleTapForPart:(unsigned)part;
-(void)_reloadViewWithAnimation:(BOOL)animation;
-(id)_updateAdditions:(id)additions removals:(id)removals forPart:(unsigned)part;
-(void)_updateEnabledStates:(BOOL)states;
@end

