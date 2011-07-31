/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SFUOutputStream.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SFUMoveableFileOutputStream : XXUnknownSuperclass <SFUOutputStream> {
@private
	int mFd;
	NSString* mPath;
}
-(id)initWithTemporaryFile:(id)temporaryFile;
-(id)initWithPath:(id)path;
-(void)dealloc;
-(id)path;
-(void)writeBuffer:(const char*)buffer size:(unsigned long)size;
-(long long)offset;
-(BOOL)canSeek;
-(void)seekToOffset:(long long)offset whence:(int)whence;
-(BOOL)moveToPath:(id)path;
-(void)truncateToLength:(unsigned long)length;
-(void)flush;
-(BOOL)canCreateInputStream;
-(id)inputStream;
-(void)close;
-(id)closeLocalStream;
@end

