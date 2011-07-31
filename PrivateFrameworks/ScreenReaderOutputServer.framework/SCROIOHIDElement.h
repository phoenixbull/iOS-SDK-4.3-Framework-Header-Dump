/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

#import "SCROIOElement.h"
#import "SCROIOHIDElementProtocol.h"
#import "ScreenReaderOutputServer-Structs.h"


@interface SCROIOHIDElement : SCROIOElement <SCROIOHIDElementProtocol> {
	IOHIDDeviceRef _hidDevice;
}
-(id)initWithIOObject:(unsigned)ioobject;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(IOHIDDeviceRef)hidDevice;
-(int)transport;
@end

