/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSFileHandle, NSMutableData, NSData;

@interface SWVicFileLogger : XXUnknownSuperclass {
	NSFileHandle* _vicFileHandle;
	NSMutableData* _vicFileData;
	NSData* _previousPacket;
}
-(id)init;
-(void)dealloc;
-(void)logPacket:(id)packet rssi:(BOOL)rssi;
@end

