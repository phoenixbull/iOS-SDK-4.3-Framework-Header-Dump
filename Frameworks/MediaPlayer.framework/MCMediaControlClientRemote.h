/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MediaPlayer-Structs.h"


@interface MCMediaControlClientRemote : XXUnknownSuperclass {
}
-(void)dealloc;
-(void)setHost:(id)host;
-(void)invalidate;
-(void)authorizeWithPICRequest:(id)picrequest completionQueue:(dispatch_queue_s*)queue completionBlock:(id)block;
-(void)setPassword:(id)password;
-(void)playWithLocalFilePath:(id)localFilePath startPosition:(float)position playInfo:(id)info completionQueue:(dispatch_queue_s*)queue completionBlock:(id)block;
-(void)playRemoteWithParams:(id)params completionQueue:(dispatch_queue_s*)queue completionBlock:(id)block;
-(void)stopWithOptions:(unsigned)options completionQueue:(dispatch_queue_s*)queue completionBlock:(id)block;
-(void)getPlaybackInfoWithOptions:(unsigned)options completionQueue:(dispatch_queue_s*)queue completionBlock:(id)block;
-(void)getPositionWithOptions:(unsigned)options completionQueue:(dispatch_queue_s*)queue completionBlock:(id)block;
-(void)setPosition:(float)position completionQueue:(dispatch_queue_s*)queue completionBlock:(id)block;
-(void)setRate:(float)rate completionQueue:(dispatch_queue_s*)queue completionBlock:(id)block;
-(void)getVolumeWithOptions:(unsigned)options completionQueue:(dispatch_queue_s*)queue completionBlock:(id)block;
-(void)setVolume:(float)volume completionQueue:(dispatch_queue_s*)queue completionBlock:(id)block;
-(void)setEventHandlerQueue:(dispatch_queue_s*)queue eventHandlerBlock:(id)block;
@end

