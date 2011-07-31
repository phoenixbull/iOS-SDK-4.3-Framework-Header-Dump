/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface SKPaymentQueue : XXUnknownSuperclass {
@private
	id _internal;
}
@property(readonly, assign, nonatomic) NSArray* transactions;
+(id)defaultQueue;
+(BOOL)canMakePayments;
-(id)init;
-(void)dealloc;
-(void)addPayment:(id)payment;
-(void)addTransactionObserver:(id)observer;
-(void)finishTransaction:(id)transaction;
-(void)removeTransactionObserver:(id)observer;
-(void)restoreCompletedTransactions;
-(void)_applicationBecameActiveNotification:(id)notification;
-(void)_daemonExited:(id)exited;
-(void)_daemonLaunchedNotification;
-(void)_mainThreadDaemonExited:(id)exited;
-(void)_restoreTransactionsFailedNotification:(id)notification;
-(void)_restoreTransactionsFinishedNotification:(id)notification;
-(void)_transactionsAddedNotification:(id)notification;
-(void)_transactionsRefreshedNotification:(id)notification;
-(void)_transactionsRemovedNotification:(id)notification;
-(void)_transactionUpdatedNotification:(id)notification;
-(void)_addLocalTransactionForPayment:(id)payment;
-(id)_copyRemovalsFromUnmergedIndexSet:(id)unmergedIndexSet;
-(id)_copyTransactionsFromNotification:(id)notification;
-(void)_notifyObserversAboutChanges:(id)changes;
-(void)_notifyObserversAboutRemovals:(id)removals;
-(void)_notifyObserversRestoreTransactionsFailedWithError:(id)error;
-(void)_notifyObserversRestoreTransactionsFinished;
-(void)_processUpdates:(id)updates trimUnmatched:(BOOL)unmatched;
-(void)_registerForNotifications;
-(void)_registerForNotificationsIfNeeded;
-(void)_removeLocalTransaction:(id)transaction;
-(void)_unregisterForNotifications;
@end

