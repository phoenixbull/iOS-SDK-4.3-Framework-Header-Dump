/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPageData.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSData, NSDate;

@interface NSPageData : XXUnknownSuperclass {
@private
	NSData* data;
	NSDate* _originalFileModDate;
	NSString* _originalFilePath;
}
+(void)initialize;
+(int)_umask;
-(unsigned)length;
-(const void*)bytes;
-(id)init;
-(id)initWithBytesNoCopy:(void*)bytesNoCopy length:(unsigned)length;
-(id)initWithBytes:(const void*)bytes length:(unsigned)length;
-(id)initWithData:(id)data;
-(void)_setOriginalFileInfoFromFileAttributes:(id)fileAttributes;
-(id)initWithContentsOfFile:(id)file;
-(id)initWithContentsOfMappedFile:(id)mappedFile;
-(id)initWithContentsOfMappedFile:(id)mappedFile withFileAttributes:(id)fileAttributes;
-(id)_mappedFile;
-(void)dealloc;
-(unsigned)writePath:(id)path docInfo:(id)info errorHandler:(id)handler remapContents:(BOOL)contents hardLinkPath:(id)path5;
-(id)initFromSerializerStream:(id)serializerStream length:(unsigned)length;
-(id)deserializer;
-(id)initWithDataNoCopy:(id)dataNoCopy;
-(id)data;
@end

@interface NSPageData (NSInternal)
-(unsigned)writeFd:(int)fd;
-(unsigned)writeFile:(id)file;
@end

