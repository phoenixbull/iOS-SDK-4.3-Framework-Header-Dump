/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <Foundation/NSThread.h>


@interface DAPlistBytesSerialization : NSThread {
	char* _buffer;
	unsigned _length;
}
-(id)initWithPropertyList:(id)propertyList error:(id*)error;
-(void)dealloc;
-(char*)bytes;
-(unsigned)length;
@end

