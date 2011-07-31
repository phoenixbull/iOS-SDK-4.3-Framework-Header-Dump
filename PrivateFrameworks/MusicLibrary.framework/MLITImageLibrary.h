/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MusicLibrary-Structs.h"


@interface MLITImageLibrary : XXUnknownSuperclass {
@private
	void* _imageLibrary;
	unsigned _triedToLoadDatabase : 1;
}
+(id)sharedLibrary;
+(MLArtworkFormatSpec)artworkFormatSpecForArtworkFormatID:(unsigned)artworkFormatID;
+(BOOL)verifyDatabaseExists;
+(void)dumpImageInstanceForTrack:(id)track;
-(id)_initSharedInstance;
-(void*)imageLibraryRef;
-(void)dealloc;
-(BOOL)_loadImageLibraryIfNecessary;
-(BOOL)loadDatabase;
-(ITImageInfo*)_lookupITImageInfoForTrack:(id)track artworkType:(int)type;
-(BOOL)getArtworkData:(id*)data artworkInfo:(MLArtworkInstanceInfo*)info track:(id)track artworkType:(int)type formatID:(unsigned)anId timeInMS:(int)ms size:(CGSize)size;
-(BOOL)isImageDataAvailableForTrack:(id)track artworkType:(int)type;
-(BOOL)isImageDataIdenticalForTrack:(id)track otherTrack:(id)track2 artworkType:(int)type missingAlwaysComparesEqual:(BOOL)equal;
-(id)availableArtworkFormatIDsForTrack:(id)track artworkType:(int)type timeInMS:(int)ms;
@end

