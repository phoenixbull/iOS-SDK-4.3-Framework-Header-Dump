/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import "PhotoLibraryServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString, NSDictionary;

@interface PLImageTable : XXUnknownSuperclass {
	int _format;
	NSString* _path;
	CGSize _thumbnailSize;
	int _imageRowBytes;
	int _imageLength;
	int _entryLength;
	BOOL _readOnly;
	BOOL _dying;
	int _fid;
	unsigned _fileLength;
	int _entryCount;
	unsigned _segmentLength;
	int _segmentCount;
	NSMutableArray* _allSegments;
}
@property(readonly, assign, nonatomic) NSString* path;
@property(readonly, assign, nonatomic) int imageFormat;
@property(readonly, assign, nonatomic) int imageRowBytes;
@property(readonly, assign, nonatomic) int imageLength;
@property(readonly, assign, nonatomic) BOOL isReadOnly;
@property(readonly, assign, nonatomic) int imageHeight;
@property(readonly, assign, nonatomic) int imageWidth;
@property(readonly, assign, nonatomic) NSDictionary* photoUUIDToIndexMap;
+(void)releaseSegmentCache;
+(CGRect)scaleSize:(CGSize)size toFitWithinSize:(CGSize)fitWithinSize;
-(id)initWithPath:(id)path imageFormat:(int)format;
-(void)dealloc;
-(int)_fileDescriptor;
-(unsigned long)_segmentLength;
-(id)_segmentAtIndex:(int)index;
-(void)_releaseSegmentAtIndex:(int)index;
-(void)_releaseSegment:(id)segment;
-(void)_reloadSegmentAtIndex:(int)index;
-(void)_updateSegmentCount;
-(void)fileLengthChangedExternally;
-(id)_mappedImageDataAtIndex:(int)index;
-(int)entryCount;
-(void)_setEntryCount:(int)count;
-(void)_addEntriesIfNecessaryForIndex:(int)index;
-(void)ensureIndexExists:(int)exists;
-(void)_flushEntryAtAddress:(void*)address count:(int)count;
-(void)_flushEntryAtAddress:(void*)address;
-(void)_setEntryAtIndex:(int)index imageData:(const void*)data actualImageSize:(CGSize)size;
-(void)deleteEntryAtIndex:(int)index;
-(BOOL)_compactWithOccupiedIndexes:(id)occupiedIndexes outPhotoUUIDToIndexMap:(id*)indexMap;
-(id)preflightCompactionWithOccupiedIndexes:(id)occupiedIndexes;
-(void)compactWithOccupiedIndexes:(id)occupiedIndexes;
-(CGSize)imageSize;
-(id)dataForEntryAtIndex:(int)index;
-(void)_writeImage:(id)image withDuration:(id)duration photoUUID:(CFUUIDRef)uuid toEntryAtIndex:(int)index isPlaceholder:(BOOL)placeholder;
-(void)setImage:(id)image forEntryAtIndex:(int)index videoDuration:(id)duration photoUUID:(CFUUIDRef)uuid isPlaceholder:(BOOL)placeholder;
-(BOOL)entryAtIndexIsPlaceholder:(int)indexIsPlaceholder;
-(void)rotateEntryAtIndex:(int)index byDegrees:(int)degrees withWhiteInsert:(int)whiteInsert;
@end

