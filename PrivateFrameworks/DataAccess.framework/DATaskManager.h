/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet, DAAccount, NSMutableArray, NSArray;
@protocol DATask;

@interface DATaskManager : XXUnknownSuperclass {
	DAAccount* _account;
@private
	NSMutableArray* _queuedExclusiveTasks;
	id<DATask> _activeExclusiveTask;
	NSMutableSet* _independentTasks;
	NSMutableSet* _heldIndependentTasks;
	NSMutableSet* _modalHeldIndependentTasks;
	NSMutableArray* _queuedTasks;
	id<DATask> _activeQueuedTask;
	id<DATask> _modalHeldActiveQueuedTask;
	NSMutableArray* _queuedModalTasks;
	id<DATask> _activeModalTask;
	int _state;
}
@property(assign) DAAccount* account;
@property(readonly, assign) id<DATask> activeModalTask;
@property(readonly, assign) id<DATask> activeQueuedTask;
@property(readonly, assign) NSArray* queuedTasks;
@property(readonly, assign) NSArray* allTasks;
-(id)initWithAccount:(id)account;
-(id)init;
-(void)dealloc;
-(void)_populateVersionDescriptions;
-(id)_version;
-(BOOL)_useFakeDescriptions;
-(id)deviceType;
-(id)userAgent;
-(id)deviceID;
-(id)user;
-(int)port;
-(id)server;
-(id)password;
-(BOOL)useSSL;
-(id)identityPersist;
-(id)scheme;
-(id)accountID;
-(id)accountPersistentUUID;
-(void)submitExclusiveTask:(id)task;
-(void)submitExclusiveTask:(id)task toFrontOfQueue:(BOOL)queue;
-(void)submitIndependentTask:(id)task;
-(void)submitQueuedTask:(id)task;
-(void)cancelTask:(id)task withUnderlyingError:(id)underlyingError;
-(void)cancelTask:(id)task;
-(void)cancelAllTasks;
-(void)shutdown;
-(id)stateString;
-(void)taskDidFinish:(id)task;
-(void)taskRequestModal:(id)modal;
-(void)taskEndModal:(id)modal;
-(void)_performTask:(id)task;
-(void)_requestCancelTasksWithReason:(int)reason;
-(void)_startModal:(id)modal;
-(void)_reactivateHeldTasks;
-(void)_makeStateTransition;
-(void)_scheduleSelector:(SEL)selector withArgument:(id)argument;
-(void)_schedulePerformTask:(id)task;
-(void)_scheduleStartModal:(id)modal;
-(void)_cancelTasksWithReason:(int)reason;
-(void)_retainPowerAssertionForTask:(id)task;
-(void)_releasePowerAssertionForTask:(id)task;
-(id)_getQueuedExclusiveTasks;
-(id)_getIndependentTasks;
-(id)_getHeldIndependentTasks;
-(id)_getModalHeldIndependentTasks;
-(id)_getQueuedTasks;
-(id)_getQueuedModalTasks;
-(void)taskManagerDidAddTask:(id)taskManager;
-(void)taskManagerWillRemoveTask:(id)taskManager;
@end
