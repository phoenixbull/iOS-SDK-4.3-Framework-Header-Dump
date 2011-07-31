/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, MPMediaQuery, NSString, NSArray, MPMediaPlaylist;

@interface MPGeniusMix : XXUnknownSuperclass <NSCoding> {
@private
	MPMediaPlaylist* _playlist;
	MPMediaQuery* _seedTracksQuery;
	NSArray* _representativeArtists;
	NSMutableArray* _representativeImageItems;
}
@property(readonly, assign, nonatomic) MPMediaPlaylist* playlist;
@property(readonly, assign, nonatomic) NSArray* representativeArtists;
@property(readonly, assign, nonatomic) MPMediaQuery* seedTracksQuery;
@property(readonly, assign, nonatomic) NSString* name;
+(id)artworkImageForMediaItem:(id)mediaItem;
+(id)artworkCacheDirectoryPath;
-(id)initWithMPMediaPlaylist:(id)mpmediaPlaylist;
-(void)dealloc;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)description;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(unsigned)countOfRepresentativeImagesWithMaxCount:(unsigned)maxCount;
-(CGImageRef)representativeImageWithSize:(CGSize)size count:(unsigned)count;
-(CGImageRef)representativeImageWithSize:(CGSize)size count:(unsigned)count cacheOnly:(BOOL)only;
-(CGImageRef)_newCGImageForArtworkData:(id)artworkData artworkInfo:(MLArtworkInstanceInfo*)info;
-(id)_cacheDirectoryPath;
-(id)_cachedRepresentativeImagePath;
@end

