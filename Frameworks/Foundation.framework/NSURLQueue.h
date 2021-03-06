/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURLQueueNode;

__attribute__((visibility("hidden")))
@interface NSURLQueue : XXUnknownSuperclass {
@private
	unsigned count;
	NSURLQueueNode* head;
	NSURLQueueNode* tail;
	id monitor;
	BOOL waitOnTake;
	BOOL _pad1;
	BOOL _pad2;
	BOOL _pad3;
}
+(id)newNode;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(void)put:(id)put;
-(id)take;
-(id)peek;
-(id)peekAt:(unsigned)at;
-(BOOL)remove:(id)remove;
-(void)clear;
-(int)indexOf:(id)of;
-(BOOL)isEmpty;
-(unsigned)count;
-(BOOL)waitOnTake;
-(void)setWaitOnTake:(BOOL)take;
@end

