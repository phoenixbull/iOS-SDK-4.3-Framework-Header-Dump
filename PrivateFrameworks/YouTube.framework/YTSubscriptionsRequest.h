/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import "YouTube-Structs.h"
#import "XMLSAXHTTPRequest.h"

@class NSMutableURLRequest, NSMutableArray;

@interface YTSubscriptionsRequest : XMLSAXHTTPRequest {
	id _delegate;
	NSMutableArray* _subscriptions;
	int _mode;
	NSMutableURLRequest* _deferredRequest;
}
+(id)displayStringForSubscription:(id)subscription;
+(BOOL)isSubscription:(id)subscription channelOfUser:(id)user;
+(id)URLForSubscription:(id)subscription;
-(id)init;
-(void)_listenForAuthenticationNotifications:(BOOL)authenticationNotifications;
-(void)dealloc;
-(int)parseData:(id)data;
-(void)didParseData;
-(void)_didAuthenticate:(id)authenticate;
-(void)_failedToAuthenticate:(id)authenticate;
-(void)loadRequest:(id)request;
-(void)_doRequestWithURL:(id)url;
-(void)requestSubscriptions;
-(void)requestPlaylists;
-(void)createPlaylistNamed:(id)named;
-(void)subscribeToUser:(id)user;
-(void)failWithError:(id)error;
-(void)setDelegate:(id)delegate;
@end

