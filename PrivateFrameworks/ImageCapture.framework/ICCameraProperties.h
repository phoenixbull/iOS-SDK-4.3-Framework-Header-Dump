/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray;

@interface ICCameraProperties : XXUnknownSuperclass {
	NSString* _volumePath;
	BOOL _ejectable;
	BOOL _beingEjected;
	BOOL _locked;
	BOOL _allowsSyncingClock;
	unsigned _contentCatalogPercentCompleted;
	BOOL _batteryLevelAvailable;
	unsigned _batteryLevel;
	NSMutableArray* _contents;
	NSMutableArray* _mediaFiles;
	NSMutableArray* _toBeNotifiedAddedItems;
	int _contentsLock;
	int _mediaFilesLock;
	double _timeOffset;
	unsigned _estimatedNumberOfDownloadableItems;
	unsigned _numberOfDownloadableItems;
	BOOL _contentReceived;
	double _downloadCancelTimestamp;
	dispatch_queue_s* _thumbnailFetchQ;
	dispatch_queue_s* _metadataFetchQ;
	dispatch_queue_s* _downloadQ;
	dispatch_queue_s* _generalQ;
	dispatch_semaphore_s* _deviceQSemaphore;
	BOOL _accessRestrictedAppleDevice;
}
@property(retain) NSString* volumePath;
@property(assign) BOOL ejectable;
@property(assign) BOOL beingEjected;
@property(assign) BOOL locked;
@property(assign) BOOL allowsSyncingClock;
@property(assign) unsigned contentCatalogPercentCompleted;
@property(assign) BOOL batteryLevelAvailable;
@property(assign) unsigned batteryLevel;
@property(retain) NSMutableArray* contents;
@property(retain) NSMutableArray* mediaFiles;
@property(retain) NSMutableArray* toBeNotifiedAddedItems;
@property(assign) int mediaFilesLock;
@property(assign) int contentsLock;
@property(assign) double timeOffset;
@property(assign) unsigned estimatedNumberOfDownloadableItems;
@property(assign) unsigned numberOfDownloadableItems;
@property(assign) BOOL contentReceived;
@property(assign) double downloadCancelTimestamp;
@property(assign) dispatch_queue_s* thumbnailFetchQ;
@property(assign) dispatch_queue_s* metadataFetchQ;
@property(assign) dispatch_queue_s* downloadQ;
@property(assign) dispatch_queue_s* generalQ;
@property(assign) dispatch_semaphore_s* deviceQSemaphore;
@property(assign) BOOL accessRestrictedAppleDevice;
-(void)lockMediaFiles;
-(void)unlockMediaFiles;
-(void)lockContents;
-(void)unlockContents;
-(void)dealloc;
-(void)finalize;
@end

