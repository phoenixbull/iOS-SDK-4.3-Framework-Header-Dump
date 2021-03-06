/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface PTPInitCommandACKPacket : XXUnknownSuperclass {
	unsigned _connectionNumber;
	unsigned char _responderGUID[16];
	NSString* _responderFriendlyName;
}
-(id)initWithConnectionNumber:(unsigned long)connectionNumber responderGUID:(char*)guid responderFriendlyName:(id)name;
-(id)initWithTCPBuffer:(void*)tcpbuffer;
-(void)dealloc;
-(id)contentForTCP;
-(id)description;
-(unsigned long)connectionNumber;
-(void)setConnectionNumber:(unsigned long)number;
-(const char*)responderGUID;
-(id)responderGUIDString;
-(void)setResponderGUID:(char*)guid;
-(id)responderFriendlyName;
-(void)setResponderFriendlyName:(id)name;
@end

