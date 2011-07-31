/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSMutableSet, NSString;

@interface VolumeControl : XXUnknownSuperclass {
	BOOL _debounce;
	int _numberOfVolumeDecreasesSinceDownButtonDown;
	int _mode;
	NSMutableSet* _alwaysHiddenCategories;
	NSString* _lastDisplayedCategory;
	NSString* _lastEventCategory;
}
+(id)sharedVolumeControl;
+(float)volumeStep;
-(id)init;
-(void)dealloc;
-(void)addAlwaysHiddenCategory:(id)category;
-(void)removeAlwaysHiddenCategory:(id)category;
-(BOOL)_HUDIsDisplayableForCategory:(id)category;
-(BOOL)_allowVolumeAdjust;
-(void)toggleMute;
-(float)volume;
-(void)_changeVolumeBy:(float)by;
-(float)_calcButtonRepeatDelay;
-(void)increaseVolume;
-(void)decreaseVolume;
-(id)lastDisplayedCategory;
-(void)handleVolumeEvent:(GSEventRef)event;
-(void)cancelVolumeEvent;
-(void)_registerForAVSystemControllerNotifications;
-(void)_unregisterForAVSystemControllerNotifications;
-(void)_serverConnectionDied:(id)died;
-(int)_volumeModeForCategory:(id)category;
-(void)_effectiveVolumeChanged:(id)changed;
-(BOOL)_headphonesPresent;
-(id)_volumeHUDViewWithMode:(int)mode volume:(float)volume;
-(void)_presentVolumeHUDWithMode:(int)mode volume:(float)volume;
-(id)volumeHUDForCurrentCategory;
-(void)hideVolumeHUDIfVisible;
@end

