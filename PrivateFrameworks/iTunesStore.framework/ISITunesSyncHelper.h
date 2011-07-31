/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ISSingleton.h"

@class NSDate, NSLock;

@interface ISITunesSyncHelper : XXUnknownSuperclass <ISSingleton> {
	int _blockSyncCount;
	BOOL _checkedForPurchases;
	NSLock* _lock;
	NSDate* _preSyncCheckForPurchasesDate;
	unsigned _syncRequested : 1;
}
@property(assign) BOOL iTunesCheckedForPurchasesDuringSync;
@property(readonly, assign, getter=isBlockingSync) BOOL blockingSync;
@property(readonly, assign, nonatomic) BOOL iTunesIsSynching;
+(void)setSharedInstance:(id)instance;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)beginBlockingSync;
-(void)endBlockingSync;
-(void)iTunesSyncHasCompleted:(int)completed;
-(void)iTunesSyncRequestedStart;
-(void)_beginBlockingSync;
-(id)_copyLastCheckForPurchasesDate;
-(void)_endBlockingSync;
@end
