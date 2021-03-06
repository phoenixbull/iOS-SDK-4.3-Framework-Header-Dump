/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "SCRCTargetSelector.h"
#import "ScreenReaderCore-Structs.h"

@class NSLock;

@interface SCRCTargetSelectorTimer : SCRCTargetSelector {
	CFRunLoopTimerRef _timer;
	id _key;
	BOOL _isCancelled;
	BOOL _isPending;
	id _object;
	NSLock* _lock;
	BOOL _createdTimer;
}
+(void)initialize;
+(void)_runThread;
-(id)initWithTarget:(id)target selector:(SEL)selector;
-(BOOL)_createdTimer;
-(id)initWithTarget:(id)target selector:(SEL)selector threadKey:(id)key;
-(void)invalidate;
-(void)release;
-(void)dealloc;
-(void)dispatchAfterDelay:(double)delay;
-(void)dispatchAfterDelay:(double)delay withObject:(id)object;
-(void)cancel;
-(BOOL)isCancelled;
-(BOOL)isPending;
-(id)threadKey;
-(void)_dispatch;
-(void)_dispatchMainThread;
-(void)_dispatchSCRCThread;
@end

