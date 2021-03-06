/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ImageCapture-Structs.h"

@class NSString, DeviceManager;

@interface ICDeviceProperties : XXUnknownSuperclass {
	id _delegate;
	DeviceManager* _deviceManager;
	NSString* _name;
	CGImageRef _icon;
	NSString* _productKind;
	NSString* _transportType;
	NSString* _UUIDString;
	int _usbLocationID;
	int _usbProductID;
	int _usbVendorID;
	BOOL _hasOpenSession;
	BOOL _autoOpenSession;
	BOOL _openSessionPending;
	BOOL _closeSessionPending;
}
@property(assign) id delegate;
@property(assign) DeviceManager* deviceManager;
@property(retain) NSString* name;
@property(assign) CGImageRef icon;
@property(retain) NSString* productKind;
@property(retain) NSString* transportType;
@property(retain) NSString* UUIDString;
@property(assign) int usbLocationID;
@property(assign) int usbProductID;
@property(assign) int usbVendorID;
@property(assign) BOOL hasOpenSession;
@property(assign) BOOL autoOpenSession;
@property(assign) BOOL openSessionPending;
@property(assign) BOOL closeSessionPending;
-(void)dealloc;
-(void)finalize;
@end

