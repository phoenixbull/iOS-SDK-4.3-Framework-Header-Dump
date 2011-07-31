/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface MPMediaItemArtwork : XXUnknownSuperclass {
}
@property(readonly, assign, nonatomic) CGRect imageCropRect;
@property(readonly, assign, nonatomic) CGRect bounds;
-(BOOL)hasArtworkAvailable;
-(id)imageWithSize:(CGSize)size;
-(id)imageWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;
-(id)coverFlowImageWithSize:(CGSize)size;
-(id)albumImageWithSize:(CGSize)size;
@end

