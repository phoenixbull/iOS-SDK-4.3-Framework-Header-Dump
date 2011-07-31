/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIViewAnimationBlockDelegate : XXUnknownSuperclass {
@private
	BOOL _didBeginBlockAnimation;
	BOOL _allowUserInteraction;
	BOOL _isZeroDuration;
	id _start;
	id _completion;
}
+(void)setAnimationBlockDelegateWithDuration:(double)duration options:(unsigned)options start:(id)start completion:(id)completion;
-(void)dealloc;
-(void)_willBeginBlockAnimation:(id)animation context:(void*)context;
-(void)_didEndBlockAnimation:(id)animation finished:(id)finished context:(void*)context;
-(void)_sendDeferredCompletion:(id)completion;
@end
