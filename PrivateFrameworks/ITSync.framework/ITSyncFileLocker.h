/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ITSync.framework/ITSync
 */

#import "ITSync-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSConditionLock;

@interface ITSyncFileLocker : XXUnknownSuperclass {
	unsigned _uid;
	id _delegate;
	unsigned _exclusive : 1;
	unsigned _needsDidAcquireCallback : 1;
	NSConditionLock* _hasLockLock;
}
+(id)iTunesSyncingLockfilePath;
+(void)_ensureLockFileParentDirectoryExists:(unsigned)exists;
+(BOOL)_acquireLock:(BOOL)lock sharedLock:(BOOL)lock2 instanceUID:(unsigned)uid threadArgs:(CFDictionaryRef)args notifyMainThreadIfAcquired:(BOOL)acquired;
+(void)_blockingLockWasAcquired:(CFDictionaryRef)acquired;
-(id)initWithDelegate:(id)delegate lockfilePath:(id)path useExclusiveLocks:(BOOL)locks;
-(id)_lockfilePath;
-(id)_taskAssertion;
-(int)_heldLockfd;
-(id)description;
-(void)clearDelegate;
-(void)_releaseLockNoSpinLock;
-(void)dealloc;
-(void)releaseLock;
-(void)_blockingLockWasAcquired;
-(BOOL)hasLock;
-(BOOL)acquireLockWithTimeout:(double)timeout;
-(BOOL)acquireLockTryNow;
-(BOOL)acquireLockBlockingOnNewThreadIfNecessary;
@end

