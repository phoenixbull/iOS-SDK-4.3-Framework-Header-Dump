/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeaklyReferencedObject.h"

@class NSMutableArray, NSConditionLock;

@interface InvocationQueue : XXUnknownSuperclass <WeaklyReferencedObject> {
	NSMutableArray* _items;
	unsigned _maxThreads : 16;
	unsigned _numThreads : 16;
	double _threadRecycleTimeout;
	NSConditionLock* _threadRecycleLock;
}
+(void)initialize;
+(void)flushAllInvocationQueues;
-(id)init;
-(void)setMaxThreadCount:(unsigned)count;
-(unsigned)maxThreadCount;
-(void)dealloc;
-(void)removeAllItems;
-(void)_drainQueue;
-(void)addInvocation:(id)invocation;
-(void)didCancel:(id)cancel;
-(unsigned)invocationCount;
-(void)setThreadRecycleTimeout:(double)timeout;
-(double)threadRecycleTimeout;
@end
