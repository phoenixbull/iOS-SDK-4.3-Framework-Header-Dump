/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVPlayer, AVSubtitleLayerInternal;

@interface AVSubtitleLayer : XXUnknownSuperclass {
	AVSubtitleLayerInternal* _subtitleLayer;
}
@property(retain, nonatomic) AVPlayer* player;
@property(assign, nonatomic, getter=isNonForcedSubtitleDisplayEnabled) BOOL nonForcedSubtitleDisplayEnabled;
+(id)subtitleLayerWithPlayer:(id)player;
-(id)init;
-(void)_setHasPlayerToObserve:(int)observe andShouldObserveIt:(int)anAnd;
-(void)_invalidateBoundaryTimeObserver;
-(void)finalize;
-(void)dealloc;
-(void)subtitlesDidChange:(id)subtitles;
-(void)layerDidBecomeVisible:(BOOL)layer;
-(BOOL)nonForcedSubtitleDisplayEnabled;
-(void)drawInContext:(CGContextRef)context;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
@end

