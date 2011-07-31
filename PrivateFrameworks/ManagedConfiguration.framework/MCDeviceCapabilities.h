/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface MCDeviceCapabilities : XXUnknownSuperclass {
	BOOL _supportsBlockLevelEncryption;
	BOOL _supportsFileLevelEncryption;
}
@property(readonly, assign) BOOL supportsBlockLevelEncryption;
@property(readonly, assign) BOOL supportsFileLevelEncryption;
+(id)currentDevice;
-(BOOL)_mediaDiskIsEncrypted;
-(id)init;
-(BOOL)validateCapabilitiesRequiredInTruth:(id)truth localizedIncompatibilityMessage:(id)message outError:(id*)error;
@end

