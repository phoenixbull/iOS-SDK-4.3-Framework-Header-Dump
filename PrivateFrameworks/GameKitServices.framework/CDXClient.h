/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import "GameKitServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString, NSData, NSError;
@protocol CDXClientDelegate;

__attribute__((visibility("hidden")))
@interface CDXClient : XXUnknownSuperclass {
@private
	id<CDXClientDelegate> delegate_;
	int holePunchAttemptCount_;
	NSData* preblob_;
	NSMutableDictionary* sessionLookup_;
	NSError* error_;
	int fd_;
	unsigned long long holePunchSID_;
	NSString* server_;
	unsigned short port_;
	unsigned short localPort_;
	sockaddr_in cdxaddr_ipv4;
	double holePunchInterval_;
	BOOL preblobIsUpToDate_;
	BOOL willReconfigureShortly_;
	SCDynamicStoreRef scDynamicStore_;
	CFRunLoopSourceRef scDynamicStoreRunLoopSource_;
	dispatch_queue_s* queue_;
	dispatch_source_s* source_;
	dispatch_source_s* holePunchTimer_;
	id preblobCallback_;
	void* padding_[10];
}
@property(readonly, assign, nonatomic) dispatch_queue_s* queue;
@property(copy, nonatomic) id preblobCallback;
@property(readonly, assign, nonatomic) NSData* preblob;
@property(readonly, assign, nonatomic) NSError* error;
@property(assign, nonatomic) id<CDXClientDelegate> delegate;
-(void)setError:(id)error;
-(void)setPreblob:(id)preblob;
-(void)sendHolePunch;
-(BOOL)handleHolePunchEvent;
-(void)resetHolepunchTimer;
-(void)handleFDEvent;
-(void)networkDidChange;
-(void)stopListeningOnSockets;
-(void)startListeningOnSockets;
-(void)start;
-(id)initWithOptions:(id)options delegate:(id)delegate;
-(void)dealloc;
-(void)invalidate;
-(BOOL)sendRaw:(id)raw;
-(void)invalidateSession:(id)session;
-(id)createSessionWithTicket:(id)ticket sessionKey:(id)key;
@end
