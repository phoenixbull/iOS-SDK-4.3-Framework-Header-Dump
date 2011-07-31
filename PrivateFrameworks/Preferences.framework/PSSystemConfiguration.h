/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface PSSystemConfiguration : XXUnknownSuperclass {
	SCPreferencesRef _prefs;
}
+(id)sharedInstance;
+(void)releaseSharedInstance;
-(id)init;
-(void)dealloc;
-(unsigned char)lockAndSynchronize;
-(CFStringRef)dataServiceID;
-(CFStringRef)voicemailServiceID;
-(CFStringRef)getServiceIDForPDPContext:(unsigned)pdpcontext;
-(id)interfaceConfigurationValueForKey:(CFStringRef)key serviceID:(CFStringRef)anId;
-(void)setInterfaceConfigurationValue:(id)value forKey:(CFStringRef)key serviceID:(CFStringRef)anId;
-(id)protocolConfiguration:(CFStringRef)configuration serviceID:(CFStringRef)anId;
-(void)setProtocolConfiguration:(id)configuration protocolType:(CFStringRef)type serviceID:(CFStringRef)anId;
-(id)protocolConfigurationValueForKey:(CFStringRef)key protocolType:(CFStringRef)type serviceID:(CFStringRef)anId;
-(void)setProtocolConfigurationValue:(id)value forKey:(CFStringRef)key protocolType:(CFStringRef)type serviceID:(CFStringRef)anId;
@end

