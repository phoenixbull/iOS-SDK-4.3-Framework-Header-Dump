/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface PLDiskController : XXUnknownSuperclass {
	double _lastFSCheck;
	unsigned long _bytesRequiredForPhoto;
	struct {
		unsigned needToCheckDiskSpace : 1;
		unsigned probablyLowOnDiskSpace : 1;
		unsigned isPhotosApp : 1;
		unsigned extra : 28;
	} _flags;
}
+(id)sharedInstance;
+(long long)diskSpaceAvailableForUse;
+(long long)freeDiskSpaceThreshold;
-(void)dealloc;
-(id)init;
-(void)_diskSpaceDidBecomeLow;
-(void)_actuallyUpdateCookie;
-(void)_updateCookie;
-(void)updateAvailableDiskSpace;
-(BOOL)hasEnoughDiskToTakePicture;
@end

