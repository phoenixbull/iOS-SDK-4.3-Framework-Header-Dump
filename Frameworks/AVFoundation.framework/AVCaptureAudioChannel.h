/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : XXUnknownSuperclass {
@private
	AVCaptureAudioChannelInternal* _internal;
}
@property(readonly, assign, nonatomic) float peakHoldLevel;
@property(readonly, assign, nonatomic) float averagePowerLevel;
-(id)initWithConnection:(id)connection;
-(void)dealloc;
-(void)invalidate;
@end

