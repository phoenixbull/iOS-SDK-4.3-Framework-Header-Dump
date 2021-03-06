/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AVFoundation-Structs.h"
#import "AVAudioPlayer.h"

@class NSDictionary, NSURL, NSData;
@protocol AVAudioPlayerDelegate;

@interface AVAudioPlayer : XXUnknownSuperclass {
@private
	void* _impl;
}
@property(readonly, assign, getter=isPlaying) BOOL playing;
@property(readonly, assign) NSURL* url;
@property(readonly, assign) NSData* data;
@property(assign) id<AVAudioPlayerDelegate> delegate;
@property(readonly, assign) NSDictionary* settings;
@property(assign) float volume;
@property(assign) float pan;
@property(readonly, assign) unsigned numberOfChannels;
@property(assign) double currentTime;
@property(readonly, assign) double deviceCurrentTime;
@property(assign) int numberOfLoops;
@property(assign, getter=isMeteringEnabled) BOOL meteringEnabled;
@property(readonly, assign) double duration;
-(void)privCommonCleanup;
-(void)finalize;
-(void)dealloc;
-(id)initWithContentsOfURL:(id)url error:(id*)error;
-(id)initWithData:(id)data error:(id*)error;
-(BOOL)prepareToPlay;
-(BOOL)play;
-(BOOL)playAtTime:(double)time;
-(void)pause;
-(void)stop;
-(void)updateMeters;
-(float)peakPowerForChannel:(unsigned)channel;
-(float)averagePowerForChannel:(unsigned)channel;
@end

@interface AVAudioPlayer (AVAudioPlayerPriv)
-(AudioPlayerImpl*)impl;
-(id)baseInit;
-(void)finishedPlaying;
-(void)decodeError;
-(void)beginInterruption;
-(void)endInterruptionWithFlags;
-(void)endInterruption;
@end

