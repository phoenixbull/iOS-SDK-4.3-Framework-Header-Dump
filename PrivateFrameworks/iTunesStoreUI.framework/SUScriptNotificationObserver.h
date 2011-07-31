/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock;

@interface SUScriptNotificationObserver : XXUnknownSuperclass {
	NSLock* _lock;
	CFSetRef _receivers;
}
-(id)init;
-(void)dealloc;
-(void)addEventReceiver:(id)receiver;
-(void)removeEventReceiver:(id)receiver;
-(void)_memoryWarningNotification:(id)notification;
-(void)_networkTypeChangedNotification:(id)notification;
-(void)_restrictionsChangedNotification:(id)notification;
-(void)_softwareMapChangedNotification:(id)notification;
-(void)_beginObservingNotifications;
-(void)_dispatchEvent:(id)event forName:(id)name;
-(void)_endObservingNotifications;
@end

