/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface PTPInitEventRequestPacket : XXUnknownSuperclass {
	unsigned _connectionNumber;
}
-(id)initWithConnectionNumber:(unsigned long)connectionNumber;
-(id)initWithTCPBuffer:(void*)tcpbuffer;
-(id)contentForTCP;
-(id)description;
-(unsigned long)connectionNumber;
-(void)setConnectionNumber:(unsigned long)number;
@end

