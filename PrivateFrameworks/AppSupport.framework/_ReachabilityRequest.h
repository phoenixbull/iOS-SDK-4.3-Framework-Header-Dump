/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock, NSString;

@interface _ReachabilityRequest : XXUnknownSuperclass {
	NSLock* _lock;
	NSString* _hostname;
	SCNetworkReachabilityRef _reachability;
	unsigned _flags;
	CFDictionaryRef _observers;
	BOOL _isReachable;
	BOOL _receivedAtLeastOneCallback;
}
@property(assign, nonatomic) NSString* hostname;
-(id)initWithHostname:(id)hostname;
-(void)dealloc;
-(id)description;
-(void)reachabilityChangedWithFlags:(unsigned)flags;
-(void)addObserver:(id)observer selector:(SEL)selector;
-(void)removeObserver:(id)observer;
-(BOOL)hasObservers;
@end
