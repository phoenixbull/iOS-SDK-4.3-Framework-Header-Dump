/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSSet;

@interface MPAVDestinationBrowser : XXUnknownSuperclass {
@private
	BOOL _scansForDestinationsWhenEnteringForeground;
	BOOL _isScanning;
}
@property(assign, nonatomic) BOOL scansForDestinationsWhenEnteringForeground;
@property(readonly, assign, nonatomic) NSSet* availableDestinations;
-(id)init;
-(void)dealloc;
-(void)beginScanningForDestinations;
-(void)endScanningForDestinations;
@end
