/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, CMMotionManager;

__attribute__((visibility("hidden")))
@interface CoreMotionManager : XXUnknownSuperclass {
@private
	CMMotionManager* m_motionManager;
	HashSet<WebCore::DeviceMotionClientIPhone*,WTF::PtrHash<WebCore::DeviceMotionClientIPhone*>,WTF::HashTraits<WebCore::DeviceMotionClientIPhone*> > m_deviceMotionClients;
	HashSet<WebCore::DeviceOrientationClientIPhone*,WTF::PtrHash<WebCore::DeviceOrientationClientIPhone*>,WTF::HashTraits<WebCore::DeviceOrientationClientIPhone*> > m_deviceOrientationClients;
	NSTimer* m_updateTimer;
	BOOL m_gyroAvailable;
}
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)addMotionClient:(DeviceMotionClientIPhone*)client;
-(void)removeMotionClient:(DeviceMotionClientIPhone*)client;
-(void)addOrientationClient:(DeviceOrientationClientIPhone*)client;
-(void)removeOrientationClient:(DeviceOrientationClientIPhone*)client;
-(BOOL)gyroAvailable;
-(void)initializeOnMainThread;
-(void)checkClientStatus;
-(void)update;
-(void)sendAccelerometerData:(id)data;
-(void)sendMotionData:(id)data;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

