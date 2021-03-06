/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIContinuation.h"
#import "NSObject.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

@protocol UIContinuation <NSObject>
-(void)setValue:(id)value forProperty:(id)property;
-(id)valueForProperty:(id)property;
-(void)doContinuation;
@end

__attribute__((visibility("hidden")))
@interface UIContinuation : XXUnknownSuperclass <UIContinuation> {
@private
	NSMutableDictionary* _properties;
	id _continuationContext;
	id _continuationTarget;
	SEL _continuationSelector;
}
-(id)initWithTarget:(id)target context:(id)context continuationSelector:(SEL)selector;
-(id)context;
-(void)dealloc;
-(void)setValue:(id)value forProperty:(id)property;
-(id)valueForProperty:(id)property;
-(void)doContinuation;
@end

