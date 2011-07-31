/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import "MCCertificatePayload.h"

@class NSDictionary, NSString, NSData, NSArray;

@interface MCSCEPPayload : MCCertificatePayload {
@private
	NSString* _URLString;
	NSString* _CAInstanceName;
	NSString* _challenge;
	NSArray* _subject;
	unsigned _keySize;
	int _usageFlags;
	NSData* _CAFingerprint;
	NSArray* _CACaps;
	NSDictionary* _subjectAltName;
	unsigned _retries;
	unsigned _retryDelay;
}
@property(readonly, assign) NSString* URLString;
@property(readonly, assign) NSString* CAInstanceName;
@property(readonly, assign) NSString* challenge;
@property(readonly, assign) NSArray* subject;
@property(readonly, assign) unsigned keySize;
@property(readonly, assign) int usageFlags;
@property(readonly, assign) NSData* CAFingerprint;
@property(readonly, assign) NSArray* CACaps;
@property(readonly, assign) NSDictionary* subjectAltName;
@property(readonly, assign) unsigned retries;
@property(readonly, assign) unsigned retryDelay;
+(id)typeStrings;
+(id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;
-(BOOL)isRoot;
-(BOOL)isIdentity;
-(id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id*)error;
-(void)dealloc;
-(SecCertificate*)copyCertificate;
-(SecIdentity*)copyIdentityFromKeychain;
-(id)stubDictionary;
-(id)description;
@end

