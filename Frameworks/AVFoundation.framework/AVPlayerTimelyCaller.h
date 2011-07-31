/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVWeakReference, AVPlayer;

@interface AVPlayerTimelyCaller : XXUnknownSuperclass {
	AVWeakReference* _weakReference;
	AVPlayer* _player;
	dispatch_queue_s* _timerQueue;
	dispatch_source_s* _timerSource;
	BOOL _isTimerSourceRunning;
	BOOL _timerQueueIsPlayerStateDispatchQueue;
}
@property(readonly, assign, nonatomic, getter=_weakReference) AVWeakReference* weakReference;
-(id)initWithPlayer:(id)player queue:(dispatch_queue_s*)queue;
-(id)retain;
-(void)release;
-(void)dealloc;
-(void)finalize;
-(void)invalidate;
-(void)itemTimeJumped;
-(id)player;
@end

