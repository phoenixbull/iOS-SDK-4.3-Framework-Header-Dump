/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ITSync.framework/ITSync
 */

#import "ITSync-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ITSyncFileLocker;

@interface ITSyncHelper : XXUnknownSuperclass {
	CFArrayRef _observers;
	CFArrayRef _observersNeedingStartNotification;
	CFRunLoopTimerRef _seedInternalStateAndObserversTimer;
	CFSetRef _observersBlockingSyncs;
	unsigned _observersBlockingSyncsAreWaiting : 1;
	unsigned _syncingBlockedBySB : 1;
	unsigned _ignoreITDBPrepEndNotifications : 1;
	int _handlingNotifications;
	unsigned _syncState;
	int _syncGenerationCount;
	ITSyncFileLocker* _flocker;
	ITSyncFileLocker* _flockerWaitingForSyncEnd;
	ITSyncFileLocker* _flockerWaitingForITDBPrep;
}
+(id)helper;
-(id)_init;
-(void)dealloc;
-(void)notifyUpdateAllSyncStateAndPost;
-(int)notifyGetSyncState;
-(int)notifyGetSyncGenerationCount;
-(BOOL)notifyGetSBBlockingSyncState;
-(void)notifySyncStateChangeIfNecessary;
-(void)setSyncState:(int)state notifyRemoteDependents:(BOOL)dependents;
-(void)setSyncingBlockedBySB:(BOOL)sb notifyRemoteDependents:(BOOL)dependents;
-(void)runITDBPostSyncProcess;
-(BOOL)isITDBPostSyncProcessRunning;
-(void)_releaseFlockerWaitingForITDBPrep;
-(void)_generateIDBPPrepEnded;
-(BOOL)_testLockForSeedingState:(id)seedingState releaseLockCleanup:(id)cleanup;
-(void)_seedFlockerWaitingForITDBPrepIfNecessary;
-(void)_generateIDBPPrepEndedIfNeeded;
-(void)_noteITDBPrepWillBegin;
-(void)postNotificationToiTunes:(CFStringRef)tunes;
-(void)registerObserver:(id)observer;
-(void)unregisterObserver:(id)observer;
-(BOOL)_alreadyBlockingSyncs;
-(BOOL)_waitingForFilelock;
-(BOOL)iTunesIsSyncing;
-(BOOL)isSyncingBlockedBySB;
-(void)_noteSBUnblockedSyncing;
-(void)_noteSyncFinished;
-(void)_noteSyncFailed;
-(void)_noteSyncTerminatedAbnormally;
-(void)_noteSyncWillStart;
-(void)_generateSyncEndedAbnormally;
-(void)_generateSyncEndedNormally;
-(void)_startFlockerWaitingForSyncEndIfNecessary;
-(void)_fixupAndStartFlockerWaitingForSyncEndIfNecessary;
-(void)_scheduleFixupAndStartFlockerWaitingForSyncEndIfNecessary:(double)syncEndIfNecessary;
-(void)_postNotificationForAcquiringLockfileIgnoreingObserver:(id)acquiringLockfileIgnoreingObserver;
-(BOOL)tryToBlockSyncForRegisteredObserver:(id)registeredObserver threadedWaitIfNecessary:(BOOL)necessary;
-(void)unblockSyncForRegisteredObserver:(id)registeredObserver;
-(void)syncFileLockerDidAcquireLock:(id)syncFileLocker;
-(void)_releaseLockDueNotificationPostFailure:(id)failure;
-(void)runITDBPostSyncProcessForiTunesSyncPhaseDidEnd;
-(void)_postDistNoteToObservers:(CFArrayRef)observers notifName:(id)name applierFunction:(/*function-pointer*/ void*)function applierContext:(void*)context;
-(void)_seedObserversNeedingStartNotification;
-(void)_seedInternalStateAndObserversTimer;
-(void)_postDistNoteWithName:(id)name;
-(void)_handleStateChanged;
-(void)_handleHostAttachStateChangeToState:(BOOL)state;
@end

