/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AVConferenceNotifcationTranslator.h"


__attribute__((visibility("hidden")))
@interface AVConferenceNotifcationTranslator : XXUnknownSuperclass {
}
+(void)processNotification:(id)notification forConference:(id)conference;
@end

@interface AVConferenceNotifcationTranslator (PrivateMethods)
+(void)processDidStopNotification:(id)process forConference:(id)conference;
+(void)processDidStartNotification:(id)process forConference:(id)conference;
+(void)processFirstPreviewNotification:(id)notification forConference:(id)conference;
+(void)processFirstRemoteNotification:(id)notification forConference:(id)conference;
+(void)processRemoteOrientationChangedNotification:(id)notification forConference:(id)conference;
+(void)processRemoteCameraBeingChangedNotification:(id)notification forConference:(id)conference;
+(void)processRemoteCameraChangedNotification:(id)notification forConference:(id)conference;
+(void)processRemoteAudioPausedEvent:(id)event forConference:(id)conference;
+(void)processRemoteVideoPausedEvent:(id)event forConference:(id)conference;
+(void)processNoRemotePacketsNotification:(id)notification forConference:(id)conference;
+(void)processInitiateRelayRequestNotification:(id)notification forConference:(id)conference;
+(void)processSendRelayUpdateNotification:(id)notification forConference:(id)conference;
@end

