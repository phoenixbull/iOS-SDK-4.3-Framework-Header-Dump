/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MPSong.h"
#import "iLifeSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MPAudioPlaylist, MPSongInternal, NSString, MCSong;

@interface MPSong : XXUnknownSuperclass <NSCoding, NSCopying> {
@private
	NSString* _path;
	MCSong* _song;
	MPAudioPlaylist* _parentPlaylist;
	MPSongInternal* _internal;
}
+(id)song;
+(id)songWithURL:(id)url;
+(id)songWithPath:(id)path;
-(id)init;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)initWithPath:(id)path;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(id)path;
-(void)setPath:(id)path;
-(id)URL;
-(void)setURL:(id)url;
-(double)startTime;
-(void)setStartTime:(double)time;
-(double)duration;
-(void)setDuration:(double)duration;
-(double)fadeInDuration;
-(void)setFadeInDuration:(double)duration;
-(double)fadeOutDuration;
-(void)setFadeOutDuration:(double)duration;
-(float)audioVolume;
-(void)setAudioVolume:(float)volume;
-(int)index;
-(id)parentPlaylist;
@end

@interface MPSong (AppleScript)
@end

@interface MPSong (Internal)
-(double)stopTime;
-(void)copyStruct:(id)aStruct;
-(void)setSong:(id)song;
-(void)setParentPlaylist:(id)playlist;
@end

@interface MPSong (Private)
-(id)song;
-(double)maxDuration;
@end

