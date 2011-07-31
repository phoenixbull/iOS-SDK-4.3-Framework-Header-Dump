/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSDictionary, NSString, NSMutableDictionary;

@interface MCVPNPayload : MCPayload {
	NSMutableDictionary* _atom;
	NSString* _certificateUUID;
	unsigned char _userNameRequired;
	unsigned char _passwordRequired;
	unsigned char _proxyUserNameRequired;
	unsigned char _proxyPasswordRequired;
	unsigned char _sharedSecretRequired;
	unsigned char _pinRequired;
	NSString* _userNameKey;
	NSString* _passwordKey;
	NSString* _proxyUserNameKey;
	NSString* _proxyPasswordKey;
	NSString* _sharedSecretKey;
	NSString* _pinKey;
	NSString* _userName;
	NSString* _password;
	NSString* _proxyUserName;
	NSString* _proxyPassword;
	NSString* _sharedSecret;
	NSString* _pin;
}
@property(readonly, assign, nonatomic) NSDictionary* atom;
@property(readonly, assign, nonatomic) NSString* certificateUUID;
@property(readonly, assign, nonatomic) unsigned char userNameRequired;
@property(readonly, assign, nonatomic) unsigned char passwordRequired;
@property(readonly, assign, nonatomic) unsigned char proxyUserNameRequired;
@property(readonly, assign, nonatomic) unsigned char proxyPasswordRequired;
@property(readonly, assign, nonatomic) unsigned char sharedSecretRequired;
@property(readonly, assign, nonatomic) unsigned char pinRequired;
@property(readonly, assign, nonatomic) NSString* userNameKey;
@property(readonly, assign, nonatomic) NSString* passwordKey;
@property(readonly, assign, nonatomic) NSString* proxyUserNameKey;
@property(readonly, assign, nonatomic) NSString* proxyPasswordKey;
@property(readonly, assign, nonatomic) NSString* sharedSecretKey;
@property(readonly, assign, nonatomic) NSString* pinKey;
@property(copy, nonatomic) NSString* userName;
@property(copy, nonatomic) NSString* password;
@property(copy, nonatomic) NSString* proxyUserName;
@property(copy, nonatomic) NSString* proxyPassword;
@property(copy, nonatomic) NSString* sharedSecret;
@property(copy, nonatomic) NSString* pin;
+(id)typeStrings;
+(id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;
-(void)_validateVPNPayload:(id)payload;
-(id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id*)error;
-(void)dealloc;
@end

