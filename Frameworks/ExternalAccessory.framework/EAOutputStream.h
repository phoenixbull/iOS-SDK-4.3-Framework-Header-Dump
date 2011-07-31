/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ExternalAccessory-Structs.h"

@class NSCondition, EASession, EAAccessory, NSThread;

@interface EAOutputStream : XXUnknownSuperclass {
	id _delegate;
	int _outfd;
	EAAccessory* _accessory;
	EASession* _session;
	BOOL _isOpenCompletedEventSent;
	BOOL _hasSpaceAvailableEventSent;
	BOOL _hasSpaceAvailable;
	BOOL _isAtEndEventSent;
	unsigned _streamStatus;
	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _runLoopSource;
	NSThread* _writeAvailableThread;
	BOOL _isWriteAvailableThreadCancelled;
	NSCondition* _writeAvailableThreadRunCondition;
}
-(id)initWithAccessory:(id)accessory forSession:(id)session;
-(void)dealloc;
-(void)open;
-(void)close;
-(id)delegate;
-(void)setDelegate:(id)delegate;
-(id)propertyForKey:(id)key;
-(BOOL)setProperty:(id)property forKey:(id)key;
-(void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;
-(void)removeFromRunLoop:(id)runLoop forMode:(id)mode;
-(unsigned)streamStatus;
-(id)streamError;
-(int)write:(const char*)write maxLength:(unsigned)length;
-(BOOL)hasSpaceAvailable;
-(void)_accessoryDidDisconnect:(id)_accessory;
-(void)_performAtEndOfStreamValidation;
-(void)_streamEventTrigger;
-(void)_scheduleCallback;
-(void)_writeAvailableThread;
@end
