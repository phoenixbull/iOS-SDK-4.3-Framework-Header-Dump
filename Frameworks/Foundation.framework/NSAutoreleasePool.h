/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface NSAutoreleasePool : XXUnknownSuperclass {
@private
	void* _token;
	void* _reserved3;
	void* _reserved2;
	void* _reserved;
}
+(void)addObject:(id)object;
+(id)allocWithZone:(NSZone*)zone;
+(void)showPools;
+(void)releaseAllPools;
+(unsigned)autoreleasedObjectCount;
+(unsigned)topAutoreleasePoolCount;
+(BOOL)autoreleasePoolExists;
+(void)enableRelease:(BOOL)release;
+(void)enableFreedObjectCheck:(BOOL)check;
+(unsigned)poolCountHighWaterMark;
+(void)setPoolCountHighWaterMark:(unsigned)mark;
+(unsigned)poolCountHighWaterResolution;
+(void)setPoolCountHighWaterResolution:(unsigned)resolution;
+(unsigned)totalAutoreleasedObjects;
+(void)resetTotalAutoreleasedObjects;
-(id)init;
-(void)drain;
-(oneway void)release;
-(id)initWithCapacity:(unsigned)capacity;
-(void)addObject:(id)object;
-(id)retain;
-(unsigned)retainCount;
-(id)autorelease;
-(void)dealloc;
@end

