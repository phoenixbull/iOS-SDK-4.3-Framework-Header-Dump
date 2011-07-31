/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface VMUTaskMemoryCache : XXUnknownSuperclass {
	mapped_memory_t* _memoryRegions;
	unsigned _task;
	BOOL _taskIs64Bit;
	BOOL _stopped;
	BOOL _shouldTouchPages;
}
+(BOOL)taskIs64Bit:(unsigned)bit;
+(id)taskMemoryCacheForTask:(unsigned)task;
-(id)initWithTask:(unsigned)task;
-(void)flushMemoryCache;
-(void)dealloc;
-(void)finalize;
-(int)startPeeking;
-(int)stopPeeking;
-(int)peekAtAddress:(unsigned)address size:(unsigned)size returnsBuf:(void**)buf;
-(int)readPointerAt:(unsigned)at value:(unsigned*)value;
-(BOOL)copyRange:(VMURange)range to:(void*)to;
@end

