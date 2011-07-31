/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray, AVController, NSDictionary;

@interface MPAudioDeviceController : XXUnknownSuperclass {
	id _delegate;
	AVController* _avController;
	NSDictionary* _pickedRoute;
	NSArray* _pickableRoutes;
	NSString* _category;
	BOOL _fakeRouteAvailable;
}
@property(assign, nonatomic) BOOL routeDiscoveryEnabled;
+(BOOL)routeDiscoveryEnabled;
+(void)setRouteDiscoveryEnabled:(BOOL)enabled;
-(id)init;
-(id)initWithAVController:(id)avcontroller;
-(void)dealloc;
-(void)setAVController:(id)controller;
-(void)invalidateAVController;
-(void)setCategory:(id)category;
-(void)setDelegate:(id)delegate;
-(BOOL)volumeControlIsAvailable;
-(id)nameOfPickedRoute;
-(id)pickedRouteDescription;
-(BOOL)routeOtherThanHandsetIsAvailable;
-(BOOL)routeOtherThanHandsetAndSpeakerIsAvailable;
-(BOOL)speakerRouteIsPicked;
-(BOOL)receiverRouteIsPicked;
-(BOOL)handsetRouteIsPicked;
-(BOOL)wirelessRouteIsPicked;
-(BOOL)airtunesRouteIsPicked;
-(unsigned)numberOfAudioRoutes;
-(BOOL)pickSpeakerRoute;
-(BOOL)pickHandsetRoute;
-(BOOL)pickBestDeviceRoute;
-(void)restorePickedRoute;
-(void)clearCachedRoutes;
-(id)routeNameAtIndex:(unsigned)index isPicked:(BOOL*)picked;
-(BOOL)routeRequiresPasswordAtIndex:(unsigned)index;
-(id)routeTypeAtIndex:(unsigned)index;
-(BOOL)pickRouteAtIndex:(unsigned)index;
-(BOOL)pickRouteAtIndex:(unsigned)index withPassword:(id)password;
-(int)indexOfPickedRoute;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(id)_pickedRoute;
-(id)_pickableRoutes;
-(BOOL)_pickRoute:(id)route;
-(BOOL)_pickRoute:(id)route withPassword:(id)password;
-(BOOL)_routeIsSpeaker:(id)speaker;
-(BOOL)_routeIsHeadphones:(id)headphones;
-(BOOL)_routeIsHandset:(id)handset;
-(BOOL)_routeIsReceiver:(id)receiver;
-(BOOL)_routeIsWireless:(id)wireless;
-(void)_mediaServerDied;
-(void)_pickableRoutesChangedNotification:(id)notification;
-(void)_portStatusDidChangeNotification:(id)_portStatus;
-(void)_registerForAVControllerNotifications;
-(void)_sendFakeRouteChange;
@end

