/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVPlayerTimelyCaller.h"


@interface AVPlayerPeriodicCaller : AVPlayerTimelyCaller {
	XXStruct_pwHToB _interval;
	id _block;
	OpaqueFigPlaybackItem* _figPlaybackItem;
}
-(id)initWithPlayer:(id)player interval:(XXStruct_pwHToB)interval queue:(dispatch_queue_s*)queue block:(id)block;
-(void)dealloc;
-(void)finalize;
-(void)_stopRespondingToPlayerStateChanges;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)_startObservingPlaybackItemNotificationsForCurrentItem;
-(void)_resetTimerForPlayerNewRate:(float)playerNewRate;
-(void)itemTimeJumped;
-(void)_stopObservingPlaybackItemNotifications;
@end

