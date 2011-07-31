/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MPQueueFeeder;

@interface MPQueueFeederState : XXUnknownSuperclass {
	MPQueueFeeder* _feeder;
	unsigned _currentItemIndex;
	double _currentTime;
	int _feederMode;
}
@property(retain, nonatomic) MPQueueFeeder* feeder;
@property(assign, nonatomic) unsigned currentItemIndex;
@property(assign, nonatomic) double currentTime;
@property(assign, nonatomic) int feederMode;
-(id)initWithStateOfAVController:(id)avcontroller;
-(void)dealloc;
-(id)description;
@end

