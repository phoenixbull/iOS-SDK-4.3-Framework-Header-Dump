/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "WebScriptWorld.h"

@class WebScriptWorldPrivate;

@interface WebScriptWorld : XXUnknownSuperclass {
@private
	WebScriptWorldPrivate* _private;
}
+(id)standardWorld;
+(id)world;
+(id)scriptWorldForGlobalContext:(OpaqueJSContext*)globalContext;
-(id)initWithWorld:(PassRefPtr<WebCore::DOMWrapperWorld>)world;
-(id)init;
-(void)unregisterWorld;
-(void)dealloc;
@end

@interface WebScriptWorld (WebInternal)
+(id)findOrCreateWorld:(DOMWrapperWorld*)world;
@end

