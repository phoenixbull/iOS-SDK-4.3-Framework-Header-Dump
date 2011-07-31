/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURLConnection, NSMutableData, AAResponse, AARequest, NSHTTPURLResponse;

@interface AARequester : XXUnknownSuperclass {
	AARequest* _request;
	AAResponse* _response;
	NSURLConnection* _urlConnection;
	id _handler;
	NSMutableData* _data;
	NSHTTPURLResponse* _httpResponse;
	Class _responseClass;
	BOOL _isExecuting;
	BOOL _isFinished;
	BOOL _canceled;
	BOOL _isCanceled;
}
@property(assign, nonatomic, getter=isExecuting) BOOL executing;
@property(assign, nonatomic, getter=isFinished) BOOL finished;
@property(assign, nonatomic, getter=isCanceled) BOOL canceled;
-(id)initWithRequest:(id)request handler:(id)handler;
-(void)dealloc;
-(void)cancel;
-(void)start;
-(void)_callHandler;
-(BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;
-(void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didFailWithError:(id)error;
@end

