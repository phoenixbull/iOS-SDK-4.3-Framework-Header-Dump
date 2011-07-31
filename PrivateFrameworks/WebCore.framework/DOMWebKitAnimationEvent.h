/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMEvent.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DOMWebKitAnimationEvent : DOMEvent {
}
@property(readonly, assign) double elapsedTime;
@property(readonly, copy) NSString* animationName;
-(void)initWebKitAnimationEvent:(id)event canBubbleArg:(BOOL)arg cancelableArg:(BOOL)arg3 animationNameArg:(id)arg4 elapsedTimeArg:(double)arg5;
@end

