/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

#import "MCProfileConnectionObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface CNFServiceHandler : XXUnknownSuperclass <MCProfileConnectionObserver> {
}
+(BOOL)conferencingIsSupported;
+(BOOL)conferencingIsRestricted;
+(BOOL)isFaceTimeActivated;
+(void)activateFaceTime;
+(void)deactivateFaceTime;
+(int)activationState;
+(unsigned long long)capabilities;
+(void)setCapabilities:(unsigned long long)capabilities;
+(BOOL)invitationListener;
+(void)setInvitationListener:(BOOL)listener;
+(BOOL)conferencingIsRegisteredForAccount:(id)account;
+(BOOL)conferencingHasValidatedAliasForAccount:(id)account;
+(BOOL)conferencingIsAvailable;
+(void)updateConferencingIsAvailable;
+(void)_configureDaemon;
+(void)_accountRegistrationStatusChanged:(id)changed;
+(void)_accountActivationChanged:(id)changed;
+(void)_accountLoginStateChanged:(id)changed;
+(void)_aliasValidationStatusChanged:(id)changed;
+(void)_deviceCapabilityChanged:(id)changed;
+(BOOL)connect:(BOOL)connect;
+(BOOL)connect;
+(BOOL)isConnected;
+(BOOL)isConnecting;
+(BOOL)disconnect;
+(void)_daemonDisconnectedNotification:(id)notification;
+(void)_daemonConnectedNotification:(id)notification;
-(id)init;
-(void)dealloc;
-(id)_accountDomainForAccount:(id)account;
-(id)services;
-(id)imAccountForAVURL:(id)avurl;
-(void)_handleStatusChanged:(id)changed;
-(void)_handlePeopleChanged:(id)changed;
-(id)availableFaceTimeURLs;
@end

