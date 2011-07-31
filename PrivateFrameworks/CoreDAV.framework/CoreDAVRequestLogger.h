/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;
@protocol CoreDAVAccountInfoProvider;

@interface CoreDAVRequestLogger : XXUnknownSuperclass {
	id<CoreDAVAccountInfoProvider> _provider;
	NSArray* _responseHeadersSortDescriptors;
}
@property(retain) NSArray* responseHeadersSortDescriptors;
-(id)initWithProvider:(id)provider;
-(void)dealloc;
-(void)logCoreDAVRequest:(id)request;
-(void)logCoreDAVResponseHeaders:(id)headers andStatusCode:(int)code;
-(void)logCoreDAVResponseSnippet:(id)snippet;
-(void)finishCoreDAVResponse;
@end

