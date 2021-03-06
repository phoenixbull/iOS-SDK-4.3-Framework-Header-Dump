/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ISSingleton.h"
#import "iTunesStore-Structs.h"

@class NSString, NSLock;

@interface ISDevice : XXUnknownSuperclass <ISSingleton> {
	unsigned _daemonLaunchCount;
	NSString* _guid;
	NSString* _hardwareModel;
	NSLock* _lock;
	NSString* _productVersion;
	int _type;
}
@property(readonly, retain) NSString* hardwareModel;
@property(readonly, retain) NSString* productVersion;
@property(readonly, assign) int type;
@property(readonly, assign) NSString* systemName;
@property(readonly, assign) NSString* serialNumber;
@property(readonly, retain) NSString* guid;
@property(readonly, assign) NSString* deviceName;
+(void)setSharedInstance:(id)instance;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)releasePowerAssertion:(id)assertion;
-(BOOL)takePowerAssertion:(id)assertion;
-(BOOL)checkCapabilities:(id)capabilities withMismatches:(id*)mismatches;
-(id)copyProtocolConditionalContext;
-(id)copyPurchaseValidationContext;
-(BOOL)hasCapability:(int)capability;
-(BOOL)isAnyIPhone;
-(BOOL)isAnyIPod;
-(BOOL)isAnyWildcat;
-(unsigned)daemonLaunchCount;
-(void)daemonDidLaunch;
-(void)daemonWillExitCleanly;
-(id)supportedOfferDeviceForDevices:(id)devices;
-(void)_cancelScheduledPowerAssertionRelease:(id)release;
-(id)_copyCapabilityValueForKey:(CFStringRef)key;
-(void*)_copyDeviceTreeProperty:(id)property;
-(id)_copyStringForDeviceTreeProperty:(id)deviceTreeProperty;
-(int)_deviceTypeForModelString:(id)modelString;
-(BOOL)_isHDVideoCapable;
-(BOOL)_isPodcastCapable;
-(void)_initDeviceType;
-(void)_initProductVersion;
-(BOOL)_releasePowerAssertion:(id)assertion;
-(void)_schedulePowerAssertionRelease:(id)release;
@end

