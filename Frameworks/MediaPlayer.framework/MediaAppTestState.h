/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface MediaAppTestState : XXUnknownSuperclass {
	BOOL _gatherPerformanceData;
	id _delegate;
}
+(id)sharedTestState;
-(void)setGatherPerformanceData:(BOOL)data;
-(void)setDelegate:(id)delegate;
-(BOOL)gatherPerformanceData;
-(void)clearState;
-(void)sendPlaybackDidEndMessage:(id)sendPlayback;
@end

