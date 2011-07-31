/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUInputStream.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SFUFileInputStream : XXUnknownSuperclass <SFUInputStream> {
@private
	int mFd;
	BOOL mIsCachingDisabled;
	long long mStartOffset;
	long long mCurrentOffset;
	long long mEndOffset;
}
-(id)initWithFileDescriptor:(int)fileDescriptor offset:(long long)offset length:(long long)length;
-(id)initWithPath:(id)path offset:(long long)offset length:(long long)length;
-(id)initWithPath:(id)path offset:(long long)offset;
-(void)dealloc;
-(long long)offset;
-(unsigned long)readToBuffer:(char*)buffer size:(unsigned long)size;
-(BOOL)canSeek;
-(void)seekToOffset:(long long)offset;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(void)close;
-(id)closeLocalStream;
@end

