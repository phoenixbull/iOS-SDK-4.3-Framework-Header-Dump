/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSString, AVPlayerLayerInternal, AVPlayer;

@interface AVPlayerLayer : XXUnknownSuperclass {
	AVPlayerLayerInternal* _playerLayer;
}
@property(readonly, assign, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property(copy) NSString* videoGravity;
@property(retain, nonatomic) AVPlayer* player;
+(id)playerLayerWithPlayer:(id)player;
-(id)init;
-(id)initWithLayer:(id)layer;
-(void)setBounds:(CGRect)bounds;
-(void)layoutSublayers;
-(void)dealloc;
-(void)finalize;
-(void)_updateContentLayerConnectionToPlayer;
-(void)_connectContentLayerToPlayer;
-(void)_disconnectContentLayerFromPlayer;
-(void)_didEnterBackground:(id)background;
-(void)_willEnterForeground:(id)foreground;
-(void)_updatePresentationSize:(CGSize)size;
-(void)_setHasPlayerToObserve:(int)observe andShouldObserveIt:(int)anAnd;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)layerDidBecomeVisible:(BOOL)layer;
-(void)_setItem:(id)item readyForDisplay:(BOOL)display;
-(BOOL)_subtitleDisplayEnabled;
-(void)_setSubtitleDisplayEnabled:(BOOL)enabled;
-(id)_subtitleGravity;
-(void)_setSubtitleGravity:(id)gravity;
-(CGRect)_videoRect;
-(CGRect)_videoRectForBounds:(CGRect)bounds;
-(CGRect)_minRectToFitVideoAndSubtitlesInBounds:(CGRect)bounds;
@end

