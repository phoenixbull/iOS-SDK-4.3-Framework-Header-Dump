/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class AYOperation;

@interface _AYProxy : XXUnknownSuperclass {
	AYOperation* _operation;
	BOOL _asyncLaunch;
}
-(id)initWithOperation:(id)operation;
-(void)setAsyncLaunch:(BOOL)launch;
-(BOOL)respondsToSelector:(SEL)selector;
-(BOOL)conformsToProtocol:(id)protocol;
-(void)forwardInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
-(id)description;
@end

