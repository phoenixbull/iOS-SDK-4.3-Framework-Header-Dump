/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "_NSUndoObject.h"

@class NSInvocation;

__attribute__((visibility("hidden")))
@interface _NSUndoInvocation : _NSUndoObject {
@private
	NSInvocation* _invocation;
}
-(id)initWithTarget:(id)target invocation:(id)invocation;
-(void)invoke;
-(void)dealloc;
-(id)description;
@end

