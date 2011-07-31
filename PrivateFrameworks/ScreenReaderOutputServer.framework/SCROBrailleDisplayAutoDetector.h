/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

#import "ScreenReaderOutputServer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

@interface SCROBrailleDisplayAutoDetector : XXUnknownSuperclass {
	BOOL _isDetectingDisplays;
	IONotificationPortRef _notificationPort;
	NSMutableDictionary* _iteratorDict;
}
+(id)sharedDetector;
+(void)initialize;
+(id)allocWithZone:(NSZone*)zone;
-(id)init;
-(id)copyWithZone:(NSZone*)zone;
-(id)retain;
-(unsigned)retainCount;
-(void)release;
-(id)autorelease;
-(BOOL)isAutoDetectEnabled;
-(void)detectDisplays;
-(void)stopDetectingDisplays;
@end

