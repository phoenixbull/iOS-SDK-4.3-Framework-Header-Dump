/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <Foundation/NSInvocationOperation.h>

@class NSLock, NSString;

@interface CPDistributedNotificationCenter : NSInvocationOperation {
	NSString* _centerName;
	NSLock* _lock;
	CFRunLoopSourceRef _receiveNotificationSource;
	BOOL _isServer;
	CFDictionaryRef _sendPorts;
	unsigned _startCount;
}
+(id)centerNamed:(id)named;
-(id)_initWithServerName:(id)serverName;
-(void)dealloc;
-(id)name;
-(void)_createReceiveSourceForRunLoop:(CFRunLoopRef)runLoop;
-(void)_checkIn;
-(void)_checkOutAndRemoveSource;
-(void)_notificationServerWasRestarted;
-(void)startDeliveringNotificationsToMainThread;
-(void)startDeliveringNotificationsToRunLoop:(CFRunLoopRef)runLoop;
-(void)stopDeliveringNotifications;
-(void)deliverNotification:(id)notification userInfo:(id)info;
-(void)runServerOnCurrentThread;
-(void)runServer;
-(void)postNotificationName:(id)name;
-(void)postNotificationName:(id)name userInfo:(id)info;
-(BOOL)postNotificationName:(id)name userInfo:(id)info toBundleIdentifier:(id)bundleIdentifier;
-(void)_receivedCheckIn:(unsigned)anIn auditToken:(XXStruct_kUSYWB*)token;
@end

