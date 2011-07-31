/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import "SWAccessory.h"

@protocol SWRunSensorPacketObserver;

@interface SWRunSensor : SWAccessory {
	id<SWRunSensorPacketObserver> _packetObserver;
}
@property(readonly, assign, nonatomic) unsigned remainingBatteryLifetimeInHours;
+(unsigned)remainingHoursConsideredToBeLowBattery;
-(void)setPacketObserver:(id)observer;
@end

