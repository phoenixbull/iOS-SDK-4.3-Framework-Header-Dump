/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIGradient, UIImage;

@interface MPNowPlayingReflectionView : XXUnknownSuperclass {
	UIGradient* _gradient;
	UIImage* _image;
}
@property(retain, nonatomic) UIGradient* gradient;
-(void)dealloc;
-(void)setImage:(id)image;
-(void)drawRect:(CGRect)rect;
@end

