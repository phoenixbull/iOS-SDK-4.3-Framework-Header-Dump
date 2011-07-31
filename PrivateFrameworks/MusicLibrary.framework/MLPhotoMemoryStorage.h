/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "MLPhoto.h"

@class NSDate, NSSet, NSString;

@interface MLPhotoMemoryStorage : MLPhoto {
@private
	int _imageID;
	unsigned _durationInMilliseconds;
	NSString* _videoPath;
	NSString* _fileExtension;
	NSString* _metadataPath;
	NSString* _filenameWithoutExtension;
	NSDate* _date;
	NSSet* _extensions;
	unsigned _writeIsPending : 1;
	int _type;
	double _captureTime;
	double _longitude;
	double _latitude;
}
-(id)initWithImageID:(int)imageID;
-(void)dealloc;
-(id)description;
-(void)_setMetadataPathFromFullSizeVideoPath:(id)fullSizeVideoPath;
-(id)_metadataPath;
-(int)imageID;
-(void)setDurationInMilliseconds:(double)milliseconds;
-(double)durationInMilliseconds;
-(int)photoType;
-(void)setType:(int)type;
-(double)captureTime;
-(void)setCaptureTime:(double)time;
-(double)latitude;
-(void)setLatitude:(double)latitude;
-(double)longitude;
-(void)setLongitude:(double)longitude;
-(CGRect)faceRectangles:(id)rectangles;
-(void)_setFilenameFromFullSizeVideoPath:(id)fullSizeVideoPath;
-(id)filenameWithoutExtension;
-(void)setPathForVideoFile:(id)videoFile;
-(id)pathForVideoFile;
-(id)pathForImageFile;
-(id)pathForVideoPreviewFile;
-(BOOL)hasFullSizeImageData;
-(BOOL)isWritePending;
-(void)setWriteIsPending:(BOOL)pending;
-(void)addExtension:(id)extension;
-(void)setDate:(id)date;
@end
