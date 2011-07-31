/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebCoreMediaPlayerNotificationHelper : XXUnknownSuperclass {
@private
	MediaPlayerPrivateiPhone* _client;
	BOOL _deferredPropertiesScheduled;
}
-(id)initWithClient:(MediaPlayerPrivateiPhone*)client;
-(void)disconnect;
-(void)cancelPendingRequests;
-(void)delayNotification:(int)notification;
-(void)deliverNotification:(id)notification;
-(void)schedulePrepareToPlayWithOptionalDelay:(id)optionalDelay;
-(void)scheduleDeferredPropertiesWithOptionalDelay:(id)optionalDelay;
@end

