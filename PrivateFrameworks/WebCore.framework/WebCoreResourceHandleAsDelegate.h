/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "NSURLConnectionDelegate.h"
#import "WebCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSFileHandle;

__attribute__((visibility("hidden")))
@interface WebCoreResourceHandleAsDelegate : XXUnknownSuperclass <NSURLConnectionDelegate> {
@private
	ResourceHandle* m_handle;
	id m_converter;
	BOOL m_finishedLoadingDataIntoConverter;
	NSFileHandle* m_quicklookFileHandle;
}
-(id)initWithHandle:(ResourceHandle*)handle;
-(void)detachHandle;
-(id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;
-(BOOL)connectionShouldUseCredentialStorage:(id)connection;
-(void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;
-(void)connection:(id)connection didCancelAuthenticationChallenge:(id)challenge;
-(BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didReceiveData:(id)data lengthReceived:(long long)received;
-(void)connection:(id)connection willStopBufferingData:(id)data;
-(void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didFailWithError:(id)error;
-(id)connection:(id)connection willCacheResponse:(id)response;
@end

