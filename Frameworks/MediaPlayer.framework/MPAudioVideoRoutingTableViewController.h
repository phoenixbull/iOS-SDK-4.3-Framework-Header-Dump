/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MPAudioDeviceController, NSMutableArray, MPAVDestinationBrowser;

@interface MPAudioVideoRoutingTableViewController : XXUnknownSuperclass {
@private
	MPAudioDeviceController* _audioDeviceController;
	MPAVDestinationBrowser* _videoDestinationBrowser;
	NSMutableArray* _routes;
	int _airPlayPasswordAlertDidAppearToken;
	BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
}
@property(readonly, assign, nonatomic) MPAudioDeviceController* audioDeviceController;
@property(readonly, assign, nonatomic) MPAVDestinationBrowser* videoDestinationBrowser;
-(id)initWithAudioDeviceController:(id)audioDeviceController videoDestinationBrowser:(id)browser;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)view;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)_availableRoutesDidChangeNotification:(id)_availableRoutes;
-(BOOL)_isDeviceVideoRoute:(id)route;
-(BOOL)_isPotentialDeviceVideoRoute:(id)route;
-(id)_routes;
@end

