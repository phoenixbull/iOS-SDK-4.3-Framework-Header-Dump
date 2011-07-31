/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSDictionary, NSURL;
@protocol AVAudioRecorderDelegate;

@interface AVAudioRecorder : XXUnknownSuperclass {
@private
	void* _impl;
}
@property(readonly, assign, getter=isRecording) BOOL recording;
@property(readonly, assign) NSURL* url;
@property(readonly, assign) NSDictionary* settings;
@property(readonly, assign) double currentTime;
@property(assign) id<AVAudioRecorderDelegate> delegate;
@property(assign, getter=isMeteringEnabled) BOOL meteringEnabled;
-(AudioRecorderImpl*)impl;
-(void)finishedRecording;
-(void)privCommonCleanup;
-(void)finalize;
-(void)dealloc;
-(id)baseInit;
-(void)baseInitFailed;
-(id)initWithURL:(id)url settings:(id)settings error:(id*)error;
-(BOOL)prepareToRecord;
-(BOOL)record;
-(BOOL)recordForDuration:(double)duration;
-(void)pause;
-(void)stop;
-(BOOL)deleteRecording;
-(void)updateMeters;
-(float)peakPowerForChannel:(unsigned)channel;
-(float)averagePowerForChannel:(unsigned)channel;
-(void)beginInterruption;
-(void)endInterruptionWithFlags;
-(void)endInterruption;
@end

