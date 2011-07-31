/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "EventKit-Structs.h"

@class PCPersistentTimer, NSMutableSet, EKAlarmEngine, NSThread, NSLock;

__attribute__((visibility("hidden")))
@interface EKAlarmEngineOperation : XXUnknownSuperclass {
@private
	CalDatabase* _database;
	EKAlarmEngine* _engine;
	NSThread* _thread;
	NSLock* _lock;
	PCPersistentTimer* _timer;
	NSMutableSet* _notifiedSet;
	double _nextFireDate;
	double _lastCheckpoint;
}
-(id)initWithDatabase:(CalDatabase*)database engine:(id)engine;
-(void)dealloc;
-(void)main;
-(void)cancel;
-(void)handleChangeNotification;
-(void)rescheduleOrFire;
-(void)_stopRunLoop;
-(void)_rescheduleOrFire;
-(void)_timerFired:(id)fired;
-(void)_handleChangeNotification;
-(void)_saveCheckpoint;
-(void)_notifyAlarmsFired:(id)fired;
-(void)_rescheduleTimer;
-(void)_startCountdown;
@end

