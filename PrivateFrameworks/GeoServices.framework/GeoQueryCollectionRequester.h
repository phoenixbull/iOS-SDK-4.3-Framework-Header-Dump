/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSThread;

__attribute__((visibility("hidden")))
@interface GeoQueryCollectionRequester : XXUnknownSuperclass {
@private
	NSThread* _thread;
}
-(id)initWithURL:(id)url andDelegate:(id)delegate;
-(void)dealloc;
-(void)_applicationDidEnterBackground:(id)_application;
-(void)_cancelSubmissionOnThread;
@end

