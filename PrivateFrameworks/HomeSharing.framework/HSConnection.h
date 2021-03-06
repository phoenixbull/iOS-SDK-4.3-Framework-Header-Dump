/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HomeSharing-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, HSFairPlayInfo, NSURL, NSCountedSet;

@interface HSConnection : XXUnknownSuperclass {
@private
	NSURL* _baseURL;
	NSCountedSet* _cancelledRequests;
	int _connectionState;
	dispatch_queue_s* _queue;
	CFReadStreamRef _readStream;
@protected
	unsigned basePlaylistContainerID;
	int connectionState;
	unsigned databaseID;
	unsigned databaseRevision;
	HSFairPlayInfo* fairPlayInfo;
	NSString* homeSharingGroupID;
	NSString* password;
	unsigned sessionID;
}
@property(assign) unsigned basePlaylistContainerID;
@property(assign) int connectionState;
@property(assign) unsigned databaseID;
@property(assign) unsigned databaseRevision;
@property(retain) HSFairPlayInfo* fairPlayInfo;
@property(copy) NSString* homeSharingGroupID;
@property(copy) NSString* password;
@property(assign) unsigned sessionID;
@property(readonly, assign) NSURL* baseURL;
-(id)initWithBaseURL:(id)baseURL;
-(void)dealloc;
-(void)connectWithCompletionHandler:(id)completionHandler;
-(void)disconnect;
-(void)sendRequest:(id)request withResponseHandler:(id)responseHandler;
-(void)cancelRequest:(id)request;
-(void)checkForDatabaseUpdatesWithCompletionHandler:(id)completionHandler;
-(void)_continueFPSetupNegotiationWithData:(id)data internalConnectionCompletionHandler:(id)handler;
-(void)_loadDatabaseWithInternalConnectionCompletionHandler:(id)internalConnectionCompletionHandler;
-(void)_sendRequest:(id)request withInternalResponseHandler:(id)internalResponseHandler;
@end

