/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CATransaction.h"
#import "QuartzCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface CATransaction : XXUnknownSuperclass {
}
+(void)begin;
+(BOOL)beginWithoutBlocking;
+(void)commit;
+(void)flush;
+(void)lock;
+(void)unlock;
+(double)animationDuration;
+(void)setAnimationDuration:(double)duration;
+(id)animationTimingFunction;
+(void)setAnimationTimingFunction:(id)function;
+(BOOL)disableActions;
+(void)setDisableActions:(BOOL)actions;
+(id)completionBlock;
+(void)setCompletionBlock:(id)block;
+(id)valueForKey:(id)key;
+(void)setValue:(id)value forKey:(id)key;
-(void)_addTimer:(CFRunLoopTimerRef)timer;
@end

@interface CATransaction (CATransactionPrivate)
+(void)synchronize;
+(unsigned)currentState;
@end

