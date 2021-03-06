/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIDevice.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface UIDevice : XXUnknownSuperclass {
@private
	int _numDeviceOrientationObservers;
	float _batteryLevel;
	struct {
		unsigned batteryMonitoringEnabled : 1;
		unsigned proximityMonitoringEnabled : 1;
		unsigned orientation : 3;
		unsigned batteryState : 2;
		unsigned proximityState : 1;
	} _deviceFlags;
}
@property(readonly, assign, nonatomic) int userInterfaceIdiom;
@property(readonly, assign, nonatomic, getter=isMultitaskingSupported) BOOL multitaskingSupported;
@property(readonly, assign, nonatomic) BOOL proximityState;
@property(assign, nonatomic, getter=isProximityMonitoringEnabled) BOOL proximityMonitoringEnabled;
@property(readonly, assign, nonatomic) float batteryLevel;
@property(readonly, assign, nonatomic) int batteryState;
@property(assign, nonatomic, getter=isBatteryMonitoringEnabled) BOOL batteryMonitoringEnabled;
@property(readonly, assign, nonatomic, getter=isGeneratingDeviceOrientationNotifications) BOOL generatesDeviceOrientationNotifications;
@property(readonly, retain, nonatomic) NSString* uniqueIdentifier;
@property(readonly, assign, nonatomic) int orientation;
@property(readonly, retain, nonatomic) NSString* systemVersion;
@property(readonly, retain, nonatomic) NSString* systemName;
@property(readonly, retain, nonatomic) NSString* localizedModel;
@property(readonly, retain, nonatomic) NSString* model;
@property(readonly, retain, nonatomic) NSString* name;
+(int)currentDeviceOrientationAllowingAmbiguous:(BOOL)ambiguous;
+(id)currentDevice;
-(id)buildVersion;
-(void)setOrientation:(int)orientation animated:(BOOL)animated;
-(void)setOrientation:(int)orientation;
-(void)beginGeneratingDeviceOrientationNotifications;
-(void)endGeneratingDeviceOrientationNotifications;
-(void)playInputClick;
@end

@interface UIDevice (UIDevicePrivate)
@property(readonly, retain, nonatomic) NSString* buildVersion;
@property(assign, nonatomic) int orientation;
+(id)modelSpecificLocalizedStringKeyForKey:(id)key;
-(void)_setProximityState:(BOOL)state;
-(void)_setBatteryState:(int)state;
-(void)_setBatteryLevel:(float)level;
-(BOOL)isWildcat;
-(void)setIsWildcat:(BOOL)wildcat;
@end

@interface UIDevice (Private)
-(void)_enableDeviceOrientationEvents:(BOOL)events;
@end

