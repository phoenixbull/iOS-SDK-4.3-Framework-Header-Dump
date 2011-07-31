/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface AuthScheme : XXUnknownSuperclass {
}
+(void)initialize;
+(id)knownSchemes;
+(void)registerSchemeClass:(Class)aClass;
+(id)schemeWithName:(id)name;
+(id)authSchemesForAccount:(id)account connection:(id)connection;
-(id)retain;
-(unsigned)retainCount;
-(void)release;
-(Class)connectionClassForAccountClass:(Class)accountClass;
-(Class)authenticatorClass;
-(unsigned)defaultPortForAccount:(id)account;
-(BOOL)hasEncryption;
-(BOOL)canAuthenticateAccountClass:(Class)aClass connection:(id)connection;
-(id)authenticatorForAccount:(id)account connection:(id)connection;
-(BOOL)requiresPassword;
-(id)name;
-(id)humanReadableName;
@end

