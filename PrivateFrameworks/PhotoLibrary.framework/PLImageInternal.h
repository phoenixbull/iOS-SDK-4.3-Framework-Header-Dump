/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PhotoLibrary-Structs.h"

@class NSData, NSURL, UIImage;

@interface PLImageInternal : XXUnknownSuperclass {
@private
	NSURL* _url;
	NSData* _data;
	NSData* _urlData;
	UIImage* _previewImage;
}
-(void)dealloc;
-(id)title;
-(int)imageID;
-(id)imageWithFormat:(int)format outImageProperties:(const CFDictionaryRef*)properties;
-(id)imageWithFormat:(int)format;
-(BOOL)hasFullSizeImage;
-(id)pathForImageFile;
-(id)_data;
@end

